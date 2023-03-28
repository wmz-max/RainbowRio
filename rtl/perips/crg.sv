module crg(
    `ifdef USE_POWER_PINS
    inout vccd1,	// User area 1 1.8V supply
    inout vssd1,	// User area 1 digital ground
    `endif
    input global_clk,
    input global_rst,
    input wbm_crg_cyc_i,
    input wbm_crg_stb_i,
    input [WB_AD_WIDTH-1:0] wbm_crg_addr_i,
    input [WB_DAT_WIDTH-1:0] wbm_crg_wdata_i,
    input [(WB_DAT_WIDTH/8)-1:0]wbm_crg_sel_i,
    input wbm_crg_we_i,
    output [WB_DAT_WIDTH-1:0] crg_wbm_rdata_o,
    output crg_wbm_ack_o,
    output domain1_clk_o,
    output domain2_clk_o,
    output domain3_clk_o,
    output domain4_clk_o,
    output uart_rst_o,
    output i2c_rst_o,
    output gpio_rst_o,
    output spi_rst_o
);

localparam CLK1_MAX = DEFAULT_FRENQUENCY / FREQUENCY1;
localparam CLK2_MAX = DEFAULT_FRENQUENCY / FREQUENCY2;
localparam CLK3_MAX = DEFAULT_FRENQUENCY / FREQUENCY3;
localparam CLK4_MAX = DEFAULT_FRENQUENCY / FREQUENCY4;
reg clk1_div, clk2_div, clk3_div, clk4_div;
reg [$clog2(CLK1_MAX)-1:0] clk1_count;
reg [$clog2(CLK2_MAX)-1:0] clk2_count;
reg [$clog2(CLK3_MAX)-1:0] clk3_count;
reg [$clog2(CLK4_MAX)-1:0] clk4_count;

always_ff @(posedge clk) begin
    if(rst) begin
        clk1_div <= 1'b0;
        clk2_div <= 1'b0;
        clk3_div <= 1'b0;
        clk4_div <= 1'b0;
        clk1_count <= 'b0;
        clk2_count <= 'b0;
        clk3_count <= 'b0;
        clk4_count <= 'b0;
    end else begin
        if(clk1_count == CLK1_MAX - 1'b1) begin
            clk1_div <= ~clk1_div;
            clk1_count <= 1'b0;
        end
        if(clk2_count == CLK2_MAX - 1'b1) begin
            clk2_div <= ~clk2_div;
            clk2_count <= 1'b0;
        end
        if(clk3_count == CLK3_MAX - 1'b1) begin
            clk3_div <= ~clk3_div;
            clk3_count <= 1'b0;
        end
        if(clk4_count == CLK4_MAX - 1'b1) begin
            clk4_div <= ~clk4_div;
            clk4_count <= 1'b0;
        end
    end
end

`define VERIFY_SOC
`ifdef VERIFY_SOC
/* verilator lint_off LATCH */
/* verilator lint_off UNOPTFLAT */


reg domain1_clk_en, domain2_clk_en, domain3_clk_en, domain4_clk_en;
reg clk1_latch, clk2_latch, clk3_latch, clk4_latch;
always @(*) begin  //use latch to remove glitch
    if (!global_clk) begin
    clk1_latch = domain1_clk_en;
    clk2_latch = domain2_clk_en;
    clk3_latch = domain3_clk_en;
    clk4_latch = domain4_clk_en;
    end
end

assign domain1_clk_o = clk1_div & clk1_latch;
assign domain2_clk_o = clk2_div & clk2_latch;
assign domain3_clk_o = clk3_div & clk3_latch;
assign domain4_clk_o = clk4_div & clk4_latch;



`else

sky130_fd_sc_hd__dlclkp_2 domain1_dlclkp_u (
    .GCLK(domain1_clk_o),
    .GATE(domain1_clk_en),
    .CLK(global_clk)
);
sky130_fd_sc_hd__dlclkp_2 domain2_dlclkp_u (
    .GCLK(domain2_clk_o),
    .GATE(domain2_clk_en),
    .CLK(global_clk)
);
sky130_fd_sc_hd__dlclkp_2 domain3_dlclkp_u (
    .GCLK(domain3_clk_o),
    .GATE(domain3_clk_en),
    .CLK(global_clk)
);
sky130_fd_sc_hd__dlclkp_2 domain4_dlclkp_u (
    .GCLK(domain4_clk_o),
    .GATE(domain4_clk_en),
    .CLK(global_clk)
);
`endif

reg domain1_rst_r, domain2_rst_r, domain3_rst_r, domain4_rst_r;
assign domain1_rst_o = domain1_rst_r;
assign domain2_rst_o = domain2_rst_r;
assign domain3_rst_o = domain3_rst_r;
assign domain4_rst_o = domain4_rst_r;
reg ack_ff;

always @(posedge global_clk or negedge global_rst) begin
    if(!global_rst) begin
    domain1_clk_en <= 'b0;
    domain2_clk_en <= 'b0;
    domain3_clk_en <= 'b0;
    domain4_clk_en <= 'b0;
    domain1_rst_r <= 'b1;
    domain2_rst_r <= 'b1;
    domain3_rst_r <= 'b1;
    domain4_rst_r <= 'b1;
    ack_ff <= 'b0;
    end else begin
        if(wbm_crg_stb_i && wbm_crg_stb_i && wbm_crg_addr_i == 'h200_0400) begin
            ack_ff <= 'b1;
            if(wbm_crg_we_i && !ack_ff) begin
                domain1_rst_r <= wbm_crg_wdata_i[4];
                domain2_rst_r <= wbm_crg_wdata_i[5];
                domain3_rst_r <= wbm_crg_wdata_i[6];
                domain4_rst_r <= wbm_crg_wdata_i[7];
                domain1_clk_en <= wbm_crg_wdata_i[0];
                domain2_clk_en <= wbm_crg_wdata_i[1];
                domain3_clk_en <= wbm_crg_wdata_i[2];
                domain4_clk_en <= wbm_crg_wdata_i[3];
            end
        end else begin
            ack_ff <= 'b0;
        end 
    end
end

assign crg_wbm_ack_o = wbm_crg_cyc_i && ack_ff;
assign crg_wbm_rdata_o = {{24{1'b0}}, domain4_rst_r, domain3_rst_r, domain2_rst_r, domain1_rst_r, domain4_clk_en, domain3_clk_en, domain2_clk_en, domain1_clk_en};
/* verilator lint_on LATCH */
/* verilator lint_on UNOPTFLAT */
endmodule