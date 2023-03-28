`include "perips_cfg.vh"

module wbinterconnect(
    input clk,
    input rst,

    input chip_wbs_cyc_i,
    input chip_wbs_stb_i,
    input chip_wbs_we_i,
    input [WB_AD_WIDTH-1:0] chip_wbs_addr_i,
    input [WB_DAT_WIDTH-1:0] chip_wbs_wdata_i,
    input [(WB_DAT_WIDTH/8)-1:0] chip_wbs_sel_i,
    output [WB_DAT_WIDTH-1:0] wbs_chip_rdata_o,
    output wbs_chip_ack_o,

`ifdef TESTIO
    input testio_wbs_cyc_i,
    input testio_wbs_stb_i,
    input testio_wbs_we_i,
    input [WB_AD_WIDTH-1:0] testio_wbs_addr_i,
    input [WB_DAT_WIDTH-1:0] testio_wbs_wdata_i,
    input [(WB_DAT_WIDTH/8)-1:0] testio_wbs_sel_i,
    output [WB_DAT_WIDTH-1:0] wbs_testio_rdata_o,
    output wbs_testio_ack_o,
`endif

    output [PERIPS_SIZE-1:0] wbm_slave_cyc_o,
    output [PERIPS_SIZE-1:0] wbm_slave_stb_o,
    output [PERIPS_SIZE-1:0] [WB_AD_WIDTH-1:0] wbm_slave_addr_o,
    output [PERIPS_SIZE-1:0] [WB_DAT_WIDTH-1:0] wbm_slave_wdata_o,
    output [PERIPS_SIZE-1:0] [(WB_DAT_WIDTH/8)-1:0]wbm_slave_sel_o,
    output [PERIPS_SIZE-1:0] wbm_slave_we_o,
    input [PERIPS_SIZE-1:0] [WB_DAT_WIDTH-1:0] slave_wbm_rdata_i,
    input [PERIPS_SIZE-1:0] slave_wbm_ack_i
);

logic current_wbs_cyc;
logic current_wbs_stb;
logic current_wbs_we;
logic [WB_AD_WIDTH-1:0] current_wbs_addr;
logic [WB_DAT_WIDTH-1:0] current_wbs_wdata;
logic [(WB_DAT_WIDTH/8)-1:0] current_wbs_sel;
logic [WB_DAT_WIDTH-1:0] current_wbs_rdata;
logic current_wbs_ack;

// master select logic

`ifdef TESTIO

// testio serves as debug tool, its priority is higher than components on chip

reg master_pick; // chip = 1, testio = 0
always_ff @(posedge clk) begin
    if(rst) begin
        master_pick <= 1'b0;
    end else begin
        if(!master_pick) begin
            if((!testio_wbs_cyc_i) & chip_wbs_cyc_i) begin
                master_pick <= 1'b1;
            end
        end else begin
            if((!chip_wbs_cyc_i) & testio_wbs_cyc_i) begin
                master_pick <= 1'b0;
            end
        end
    end
end

assign current_wbs_cyc   = master_pick ? testio_wbs_cyc_i : chip_wbs_cyc_i;  
assign current_wbs_stb   = master_pick ? testio_wbs_stb_i : chip_wbs_stb_i;
assign current_wbs_we    = master_pick ? testio_wbs_we_i : chip_wbs_we_i;
assign current_wbs_addr  = master_pick ? testio_wbs_addr_i : chip_wbs_addr_i;
assign current_wbs_wdata = master_pick ? testio_wbs_wdata_i : chip_wbs_wdata_i;
assign current_wbs_sel   = master_pick ? testio_wbs_sel_i : chip_wbs_sel_i;

assign wbs_chip_ack_o = master_pick ? current_wbs_ack : 1'b0;
assign wbs_testio_ack_o = master_pick ? 1'b0 : current_wbs_ack;
assign wbs_chip_rdata_o = master_pick ? current_wbs_rdata : 1'b0;
assign wbs_testio_rdata_o = master_pick ? 1'b0 : current_wbs_rdata;

`else

assign current_wbs_cyc   = chip_wbs_cyc_i;  
assign current_wbs_stb   = chip_wbs_stb_i;
assign current_wbs_we    = chip_wbs_we_i;
assign current_wbs_addr  = chip_wbs_addr_i;
assign current_wbs_wdata = chip_wbs_wdata_i;
assign current_wbs_sel   = chip_wbs_sel_i;

assign wbs_chip_ack_o = current_wbs_ack;
assign wbs_chip_rdata_o = wbs_chip_rdata_o;

`endif

//slave select logic
reg [3:0] slave_pick;
always_ff @(posedge clk) begin
    if(rst) begin
        slave_pick <= 4'b0;
    end else begin
        if(current_wbs_cyc) begin
            slave_pick <= current_wbs_addr[11:8];
        end
    end
end

generate 
    for(genvar i = 0; i < PERIPS_SIZE; i++) begin
        assign wbm_slave_cyc_o[i] = current_wbs_cyc;
        assign wbm_slave_stb_o[i] = current_wbs_stb;
        assign wbm_slave_addr_o[i] = current_wbs_addr;
        assign wbm_slave_wdata_o[i] = current_wbs_wdata;
        assign wbm_slave_sel_o[i] = current_wbs_sel;
        assign wbm_slave_we_o[i] = current_wbs_we;
    end
endgenerate

assign current_wbs_ack = slave_wbm_ack_i[slave_pick];
assign current_wbs_rdata = slave_wbm_rdata_i[slave_pick];

endmodule