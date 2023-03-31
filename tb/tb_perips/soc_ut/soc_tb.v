`include "perips_cfg.vh"
`default_nettype wire
module soc_tb(
    input m1_cyc,
    input m1_stb,
    input m1_we, 
    input [`WB_AD_WIDTH-1:0] m1_addr,
    input [`WB_DAT_WIDTH-1:0] m1_wdata,
    output [`WB_DAT_WIDTH-1:0] m1_rdata,
    input [`WB_DAT_WIDTH/8-1:0] m1_sel,
    output m1_ack,
    input m2_cyc,
    input m2_stb,
    input m2_we, 
    input [`WB_AD_WIDTH-1:0] m2_addr,
    input [`WB_DAT_WIDTH-1:0] m2_wdata,
    output [`WB_DAT_WIDTH-1:0] m2_rdata,
    input [`WB_DAT_WIDTH/8-1:0] m2_sel,
    output m2_ack,
    input m3_cyc,
    input m3_stb,
    input m3_we, 
    input [`WB_AD_WIDTH-1:0] m3_addr,
    input [`WB_DAT_WIDTH-1:0] m3_wdata,
    output [`WB_DAT_WIDTH-1:0] m3_rdata,
    input [`WB_DAT_WIDTH/8-1:0] m3_sel,
    output m3_ack,
    input m4_cyc,
    input m4_stb,
    input m4_we, 
    input [`WB_AD_WIDTH-1:0] m4_addr,
    input [`WB_DAT_WIDTH-1:0] m4_wdata,
    output [`WB_DAT_WIDTH-1:0] m4_rdata,
    input [`WB_DAT_WIDTH/8-1:0] m4_sel,
    output m4_ack,
    input testio_clk,
    input clk,
    input rst,
    output clk4,
    output rst4
);

wire outside_uart_irq;
wire soc_ei;
wire testio_clk_out;


/*verilator lint_off UNUSED*/
wire a1;
wire a2;
wire a3;
/*verilator lint_on UNUSED*/
testio_wb testio_wb_u (
	.clk_i(testio_clk),
	.rstn_i(rst),
	.wb_stb_i(m3_stb),
	.wb_addr_i(m3_addr),
	.wb_we_i(m3_we),
	.wb_data_i(m3_wdata),
	.wb_sel_i(4'hf),
	.wb_cyc_i(m3_cyc),
	.wb_ack_o(m3_ack),
	.wb_err_o(a1),
	.wb_data_o(m3_rdata),
	.ti_mod_i(2'b0),
	.ti_clk_div_i(9'b0),
	.ti_dat_i(master_ti_i),
	.ti_clk_o(testio_clk_out),
	.ti_clk_oen(a2),
	.ti_dat_o(master_ti_o),
	.ti_dat_oen(master_ti_oen),
	.ti_int_o(a3)
);

uart uart_u(
    .clk(clk),
    .rst(!rst), 
    .uart_rx_i(1'b1),
    .uart_tx_o(soc_uart_rx),
    .uart_plic_irq_o(outside_uart_irq),
    .wbm_uart_cyc_i(m4_cyc),
    .wbm_uart_stb_i(m4_stb),
    .wbm_uart_addr_i(m4_addr),
    .wbm_uart_wdata_i(m4_wdata),
    .wbm_uart_sel_i(4'hf),
    .wbm_uart_we_i(m4_we),
    .uart_wbm_rdata_o(m4_rdata),
    .uart_wbm_ack_o(m4_ack)
);

soc_top soc_top_u (
    .clk(clk), //global clk
    .rst(rst), // global reset 
    .testio_clk(testio_clk_out),
    .core_soc_cyc_i(m1_cyc),
    .core_soc_stb_i(m1_stb),
    .core_soc_we_i(m1_we),
    .core_soc_addr_i(m1_addr),
    .core_soc_wdata_i(m1_wdata),
    .core_soc_sel_i(m1_sel),
    .core_soc_rdata_o(m1_rdata),
    .core_soc_ack_o(m1_ack),

    .caravel_soc_cyc_i(m2_cyc),
    .caravel_soc_stb_i(m2_stb),
    .caravel_soc_we_i(m2_we),
    .caravel_soc_addr_i(m2_addr),
    .caravel_soc_wdata_i(m2_wdata),
    .caravel_soc_sel_i(m2_sel),
    .caravel_soc_rdata_o(m2_rdata),
    .caravel_soc_ack_o(m2_ack),

    .ti_i(master_ti_o),
    .ti_o(master_ti_i),
    .ti_oen(soc_ti_oen),
    // .uart_rx_i(soc_uart_rx),
    // .uart_tx_o(soc_uart_tx),
    .soc_core_ei_o(soc_ei),
    .soc_core_mtmri_o(soc_mtmri),
    .soc_core_stmri_o(soc_stmri),
    .soc_core_msoft_o(soc_msoft),
    .soc_core_ssoft_o(soc_ssoft),
    .domain4_clk_o(clk4),  // for ebi
    .domain4_rst_o(rst4)
    
);

endmodule