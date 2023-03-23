`include "perips_cfg.vh"

module plic(
    `ifdef USE_POWER_PINS
    inout vccd1,	// User area 1 1.8V supply
    inout vssd1,	// User area 1 digital ground
    `endif
    input clk,
    input rst,
    output reg [CORE_NUM-1:0] plic_core_ext_irq_o,
    input gpio_plic_irq_i, 
    input uart_plic_irq_i,
    input wbm_plic_cyc_i,
    input wbm_plic_stb_i,
    input [`WB_AD_WIDTH-1:0] wbm_plic_addr_i,
    input [`WB_DAT_WIDTH-1:0] wbm_plic_wdata_i,
    input [(`WB_DAT_WIDTH/8)-1:0]wbm_plic_sel_i,
    input wbm_plic_we_i,
    output reg [`WB_DAT_WIDTH-1:0] plic_wbm_rdata_o,
    output  plic_wbm_ack_o
);

// 2 represents gpio, 1 represents uart
reg [2:0] irq_priority [`PERIPS_SIZE:1];
reg gateway_blocking [`PERIPS_SIZE:1];
reg ip [`PERIPS_SIZE:1];
reg [CORE_NUM-1:0][`PERIPS_SIZE:1] enable;
reg [CORE_NUM-1:0][2:0] irq_threshold;
reg [`PERIPS_SIZE_WIDTH:0] irq_response;  // 2: gpio     1: uart

reg ip_restore;
reg gateway_restore;
reg [2:0] restore_gateway_id;

integer i;
// receive interrupt
always @(posedge clk) begin
    if(rst) begin
        for (i = 1; i < `PERIPS_SIZE + 1; i = i + 1) begin
            ip[i] <= 1'b0;
            gateway_blocking[i] <= 1'b0;
        end
    end else begin
        //irq handle
        if(ip_restore) begin
            ip[irq_response] <= 1'b0;
        end else if (gateway_restore) begin
            gateway_blocking[restore_gateway_id] <= 1'b0;
        end else begin
            if(gpio_plic_irq_i && !gateway_blocking[2]) begin
                ip[2] <= 1'b1;
                gateway_blocking[2] <= 1'b1;
            end
            if(uart_plic_irq_i && !gateway_blocking[1]) begin
                ip[1] <= 1'b1;
                gateway_blocking[1] <= 1'b1;
            end
        end
    end
end

// need to be more elegent
wire [1:0] prior_irq_id_h = (irq_priority[2] > irq_priority[1]) ? 2'd2 : 2'd1;
wire [1:0] prior_irq_id_l = (prior_irq_id_h == 2'd2) ? 2'd1 : 2'd2;


reg [1:0] next_irq_response;
always @(*) begin
    next_irq_response = irq_response;
    plic_core_ext_irq_o = {CORE_NUM{1'b0}};
    for(int i = 0; i < CORE_NUM; i++) begin
        if((irq_priority[prior_irq_id_h] > irq_threshold[i]) && ip[prior_irq_id_h] && enable[i][prior_irq_id_h]) begin
            plic_core_ext_irq_o[i] = 1'b1;
            next_irq_response = prior_irq_id_h;
        end else if ((irq_priority[prior_irq_id_l] > irq_threshold[i]) && ip[prior_irq_id_l] && enable[i][prior_irq_id_l])begin
            plic_core_ext_irq_o[i] = 1'b1;
            next_irq_response = prior_irq_id_l;
        end
    end
end

always @(posedge clk) begin
    if(rst) begin
        irq_response <= 'b0;
    end else begin
        irq_response <= next_irq_response;
    end
end

reg ack_ff;
// interactive with core
always @(posedge clk) begin
    if(rst) begin
        ip_restore <= 1'b0;
        irq_priority[2] <= 3'd2;
        irq_priority[1] <= 3'd3;   // uart is prior than gpio
        for(int i = 0; i < CORE_NUM; i++)
            irq_threshold[i] <= 3'b0; // open to all interrupt defaultly 
        ack_ff <= 1'b0;
        plic_wbm_rdata_o <= 32'b0;
        enable <= {CORE_NUM{2'b11}};
        restore_gateway_id <= 2'b0;
        gateway_restore <= 1'b0;
    end else begin
        if(wbm_plic_cyc_i && wbm_plic_stb_i) begin
            if(ip_restore || gateway_restore) begin
                if(ip_restore) begin
                    ip_restore <= 1'b0;
                end
                if(gateway_restore) begin
                    gateway_restore <= 1'b0;
                end
            end else begin
                case(wbm_plic_addr_i)
                    `IRQ_RESPONSE_ADDR: begin
                        if(!wbm_plic_we_i) begin
                            plic_wbm_rdata_o <= {{30{1'b0}}, irq_response};
                            ack_ff <= 1'b1;
                            ip_restore <= 1'b1;
                        end
                    end
                    `IRQ_COMPLETE_ADDR: begin
                        if(wbm_plic_we_i) begin
                            gateway_restore <= 1'b1;
                            ack_ff <= 1'b1;
                            restore_gateway_id <= wbm_plic_wdata_i[1:0];
                        end
                    end
                    `UART_EN_ADDR: begin
                        if(wbm_plic_we_i) begin
                            plic_wbm_rdata_o <= {{31{1'b0}}, enable[1]};
                            ack_ff <= 1'b1;
                        end else begin
                            enable[1] <= wbm_plic_wdata_i[0];
                            ack_ff <= 1'b1;                        
                        end
                    end
                    `GPIO_EN_ADDR: begin
                        if(wbm_plic_we_i) begin
                            ack_ff <= 1'b1;                        
                            plic_wbm_rdata_o <= {{31{1'b0}}, enable[2]};
                        end else begin
                            ack_ff <= 1'b1;                        
                            enable[2] <= wbm_plic_wdata_i[0];
                        end
                    end
                    `UART_PRIORITY_ADDR: begin
                        if(wbm_plic_we_i) begin
                            ack_ff <= 1'b1;                        
                            plic_wbm_rdata_o <= {{29{1'b0}}, irq_priority[1]};
                        end else begin
                            ack_ff <= 1'b1;
                            irq_priority[1] <= wbm_plic_wdata_i[0];
                        end                
                    end
                    `GPIO_PRIORITY_ADDR: begin
                        if(wbm_plic_we_i) begin
                            ack_ff <= 1'b1;
                            plic_wbm_rdata_o <= {{29{1'b0}}, irq_priority[2]};
                        end else begin
                            ack_ff <= 1'b1;                        
                            irq_priority[2] <= wbm_plic_wdata_i[0];
                        end                
                    end
                    `IRQ_THRESHOLD_ADDR: begin
                        if(wbm_plic_we_i) begin
                            ack_ff <= 1'b1;                        
                            plic_wbm_rdata_o <= {{29{1'b0}}, irq_threshold};
                        end else begin
                            ack_ff <= 1'b1;                        
                            irq_threshold <= wbm_plic_wdata_i[2:0];
                        end                
                    end
                    default: begin
                        ack_ff <= 1'b0;
                        plic_wbm_rdata_o <= 32'b0;
                    end
                endcase
            end
        end else begin
            ack_ff <= 1'b0;
        end
    end
end

assign plic_wbm_ack_o = wbm_plic_cyc_i & ack_ff;
endmodule