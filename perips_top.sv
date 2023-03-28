`include 'perips_cfg.vh'
module perips_top(
input clk,
input rst,
input logic chi_req_channel_valid_i,
output logic chi_req_channel_ready_o,
input flit_payload_t_chi_req_channel chi_req_channel_flit_i,
output logic chi_resp_channel_valid_o,
input logic chi_resp_channel_ready_i,
output flit_payload_t_chi_resp_channel chi_resp_channel_flit_o,
output logic chi_data_channel_valid_o,
input logic chi_data_channel_ready_i,
input flit_payload_t_chi_data_channel chi_data_channel_flit_o,
output logic chi_data_channel_ready_o,
input logic chi_data_channel_valid_i,
input flit_payload_t_chi_data_channel chi_data_channel_flit_i,

input [3-1:0] uart_rx_i,
output [3-1:0] uart_tx_o,

input [1-1:0][`GPIO_SIZE-1:0] gpio_in_i,
output [1-1:0][`GPIO_SIZE-1:0] gpio_out_o,
output [1-1:0][`GPIO_SIZE-1:0] gpio_out_enable_o,

input [1-1:0] scl_i,
output [1-1:0] scl_o,
output [1-1:0] scl_oen_o,
input [1-1:0] sda_i,
output [1-1:0] sda_o,
output [1-1:0] sda_oen_o,

output [1-1:0] spi_sck_o,
output [1-1:0] spi_cs_o,
output [1-1:0] spi_mod_o
output [1-1:0] spi_dat_o,
input [1-1:0] spi_dat_i,

output [6-1:0] perips_core_ei_o
);

logic [PERIPS_SIZE:0] wbm_slave_cyc, wbm_slave_stb, wbm_slave_ack, wbm_slave_we;
logic [PERIPS_SIZE:0] [WB_DAT_WIDTH-1:0] wbm_slave_rdata, wbm_slave_wdata;
logic [PERIPS_SIZE:0] [(WB_DAT_WIDTH/8)-1:0] wbm_slave_sel;
logic [PERIPS_SIZE:0] [WB_AD_WIDTH-1:0] wbm_slave_addr;
logic clk_d1, clk_d2, clk_d3;
logic uart_rst, gpio_rst, i2c_rst, spi_rst;

logic [3-1:0]uart_cyc;
logic [3-1:0]uart_stb;
logic [3-1:0]uart_we;
logic [3-1:0]uart_ack;
logic [3-1:0]uart_irq;
logic [3-1:0] [WB_DAT_WIDTH-1:0]uart_rdata;
logic [3-1:0] [WB_DAT_WIDTH-1:0]uart_wdata;
logic [3-1:0] [(WB_DAT_WIDTH/8)-1:0]uart_sel;
logic [3-1:0] [WB_AD_WIDTH-1:0]uart_addr;

logic [1-1:0]gpio_cyc;
logic [1-1:0]gpio_stb;
logic [1-1:0]gpio_we;
logic [1-1:0]gpio_ack;
logic [1-1:0]gpio_irq;
logic [1-1:0] [WB_DAT_WIDTH-1:0]gpio_rdata;
logic [1-1:0] [WB_DAT_WIDTH-1:0]gpio_wdata;
logic [1-1:0] [(WB_DAT_WIDTH/8)-1:0]gpio_sel;
logic [1-1:0] [WB_AD_WIDTH-1:0]gpio_addr;

logic [1-1:0]i2c_cyc;
logic [1-1:0]i2c_stb;
logic [1-1:0]i2c_we;
logic [1-1:0]i2c_ack;
logic [1-1:0]i2c_irq;
logic [1-1:0] [WB_DAT_WIDTH-1:0]i2c_rdata;
logic [1-1:0] [WB_DAT_WIDTH-1:0]i2c_wdata;
logic [1-1:0] [(WB_DAT_WIDTH/8)-1:0]i2c_sel;
logic [1-1:0] [WB_AD_WIDTH-1:0]i2c_addr;

logic [1-1:0]spi_cyc;
logic [1-1:0]spi_stb;
logic [1-1:0]spi_we;
logic [1-1:0]spi_ack;
logic [1-1:0]spi_irq;
logic [1-1:0] [WB_DAT_WIDTH-1:0]spi_rdata;
logic [1-1:0] [WB_DAT_WIDTH-1:0]spi_wdata;
logic [1-1:0] [(WB_DAT_WIDTH/8)-1:0]spi_sel;
logic [1-1:0] [WB_AD_WIDTH-1:0]spi_addr;

logic chip_wbs_cyc;
logic chip_wbs_stb;
logic chip_wbs_we;
logic [WB_AD_WIDTH-1:0] chip_wbs_addr;
logic [WB_DAT_WIDTH-1:0] chip_wbs_wdata;
logic [(WB_DAT_WIDTH/8)-1:0] chip_wbs_sel;
logic [WB_DAT_WIDTH-1:0] wbs_chip_rdata;
logic wbs_chip_ack;

axi2wb u_axi2wb #(
.AXI_ADDR_WIDTH(WB_AD_WIDTH),
.AXI_DATA_WIDTH(WB_DAT_WIDTH)
)(
.clk_i(clk),
.rst_ni(~rst),
.slave_aw_id(chi_req_channel_flit_i.id),
.slave_aw_addr(chi_req_channel_flit_i.addr),
.slave_aw_len(chi_req_channel_flit_i.len),
.slave_aw_size(chi_req_channel_flit_i.size),
.slave_aw_burst(chi_req_channel_flit_i.burst),
.slave_aw_valid(chi_req_channel_valid_i & (chi_req_channel_flit_i.trx == AR)),
.slave_aw_ready(chi_req_channel_ready_o),
.slave_ar_id(chi_req_channel_flit_i.id),
.slave_ar_addr(chi_req_channel_flit_i.addr),
.slave_ar_len(chi_req_channel_flit_i.len),
.slave_ar_size(chi_req_channel_flit_i.size),
.slave_ar_burst(chi_req_channel_flit_i.burst),
.slave_ar_valid(chi_req_channel_valid_i & (chi_req_channel_flit_i.trx == AW)),
.slave_ar_ready(chi_req_channel_ready_o),
.slave_w_data(chi_data_channel_flit_i.data),
.slave_w_strb(chi_data_channel_flit_i.strb),
.slave_w_last(chi_data_channel_flit_i.last),
.slave_w_valid(chi_data_channel_ready_o),
.slave_w_ready(chi_data_channel_valid_i),
.slave_b_id(chi_resp_channel_flit_o.id),
.slave_b_resp(chi_resp_channel_flit_o.resp),
.slave_b_valid(chi_resp_channel_valid_o),
.slave_b_ready(chi_resp_channel_ready_i),
.slave_r_id(chi_data_channel_flit_o.id),
.slave_r_data(chi_data_channel_flit_o.data),
.slave_r_resp(chi_data_channel_flit_o.resp),
.slave_r_last(chi_data_channel_flit_o.last),
.slave_r_valid(chi_data_channel_valid_o),
.slave_r_ready(chi_data_channel_ready_i),
.chip_wbs_cyc(chip_wbs_cyc),
.chip_wbs_stb(chip_wbs_stb),
.chip_wbs_we(chip_wbs_we),
.chip_wbs_addr(chip_wbs_addr),
.chip_wbs_wdata(chip_wbs_wdata),
.chip_wbs_sel(chip_wbs_sel),
.wbs_chip_rdata(wbs_chip_rdata),
.wbs_chip_ack(wbs_chip_ack)
);
generate
for(genvar i = 0; i < 3; i++) begin
uart uart_u(
.clk(clk_d2),
.rst(uart_rst)
.uart_rx_i(uart_rx_i[i])
.uart_tx_o(uart_tx_o[i]),
.uart_plic_irq_o(uart_irq[i])
.wbm_uart_cyc_i(uart_cyc[i]),
.wbm_uart_stb_i(uart_stb[i]),
.wbm_uart_addr_i(uart_addr[i]),
.wbm_uart_wdata_i(uart_wdata[i]),
.wbm_uart_sel_i(4'hf),
.wbm_uart_we_i(uart_we[i]),
.uart_wbm_rdata_o(uart_rdata[i]),
.uart_wbm_ack_o(uart_ack[i])
);
end
endgenerate

generate
for(genvar i = 0; i < 1; i++) begin
gpio gpio_u(
.clk(clk_d3),
.rst(gpio_rst)
.gpio_in_i(gpio_in_i[i])
.gpio_out_o(gpio_out_o[i]),
.gpio_out_enable_o(gpio_out_enable_o[i]),
.gpio_plic_irq_o(gpio_irq[i]),
.wbm_gpio_cyc_i(gpio_cyc[i]),
.wbm_gpio_stb_i(gpio_stb[i]),
.wbm_gpio_addr_i(gpio_addr[i]),
.wbm_gpio_wdata_i(gpio_wdata[i]),
.wbm_gpio_sel_i(4'hf),
.wbm_gpio_we_i(gpio_we[i]),
.gpio_wbm_rdata_o(gpio_rdata[i]),
.gpio_wbm_ack_o(gpio_ack[i])
);
end
endgenerate

generate
for(genvar i = 0; i < 1; i++) begin
i2cm_top i2c_u(
.clk(clk_d3),
.rst(~i2c_rst)
.aresetn(1'b1),
.i2c_plic_irq_o(i2c_irq[i]),
.wbm_i2c_cyc_i(i2c_cyc[i]),
.wbm_i2c_stb_i(i2c_stb[i]),
.wbm_i2c_addr_i(i2c_addr[i]),
.wbm_i2c_sel_i(i2c_sel_i[i]),
.wbm_i2c_wdata_i(i2c_wdata[i]),
.wbm_i2c_we_i(i2c_we[i]),
.i2c_wbm_rdata_o(i2c_rdata[i]),
.i2c_wbm_ack_o(i2c_ack[i])
.scl_pad_i(scl_i[i]),
.scl_pad_o(scl_o),
.scl_padoen_o(scl_oen_o[i]),
.sda_pad_i(sda_i[i]),
.sda_pad_o(sda_o[i]),
.sda_padoen_o(sda_oen_o[i])
);
end
endgenerate

generate
for(genvar i = 0; i < 1; i++) begin
wbqspiflash spi_u(
.clk(clk_d1),
.rst(spi_rst)
..spi_plic_irq_o(spi_irq[i])
.o_qspi_sck(spi_sck_o[i]),
.o_qspi_cs_n(spi_cs_o[i]),
.o_qspi_mod(spi_mod_o[i]),
.o_qspi_dat(spi_dat_o[i]),
.i_qspi_dat(spi_dat_i[i]),
.wbm_spi_cyc_i(spi_cyc[i]),
.wbm_spi_stb_i(spi_stb[i]),
.wbm_spi_sel_i(spi_sel_i[i]),
.wbm_spi_addr_i(spi_addr[i]),
.wbm_spi_wdata_i(spi_wdata[i]),
.o_wb_stall(),
.wbm_spi_we_i(spi_we[i]),
.spi_wbm_rdata_o(spi_rdata[i]),
.spi_wbm_ack_o(spi_ack[i])
);
end
endgenerate

wbinterconnect u_icn(
.clk(clk),
.rst(rst),
.chip_wbs_cyc_i(chip_wbs_cyc),
.chip_wbs_stb_i(chip_wbs_stb),
.chip_wbs_we_i(chip_wbs_we),
.chip_wbs_addr_i(chip_wbs_addr),
.chip_wbs_wdata_i(chip_wbs_wdata),
.chip_wbs_sel_i(chip_wbs_sel),
.wbs_chip_rdata_o(wbs_chip_rdata),
.wbs_chip_ack_o(wbs_chip_ack),

.testio_wbs_cyc_i(testio_wbs_cyc),
.testio_wbs_stb_i(testio_wbs_stb),
.testio_wbs_we_i(testio_wbs_we),
.testio_wbs_addr_i(testio_wbs_addr),
.testio_wbs_wdata_i(testio_wbs_wdata),
.testio_wbs_sel_i(testio_wbs_sel),
.wbs_testio_rdata_o(wbs_testio_rdata),
.wbs_testio_ack_o(wbs_testio_ack),

.wbm_slave_cyc_o(wbm_slave_cyc),
.wbm_slave_stb_o(wbm_slave_stb),
.wbm_slave_addr_o(wbm_slave_addr),
.wbm_slave_wdata_o(wbm_slave_wdata),
.wbm_slave_sel_o(wbm_slave_sel),
.wbm_slave_we_o(wbm_slave_we),
.slave_wbm_rdata_i(slave_wbm_rdata),
.slave_wbm_ack_i(slave_wbm_ack)
);

crg u_crg(
.global_clk(clk),
.global_rst(rst),
.wbm_crg_cyc_i(wbm_crg_cyc),
.wbm_crg_stb_i(wbm_crg_stb),
.wbm_crg_addr_i(wbm_crg_addr),
.wbm_crg_wdata_i(wbm_crg_wdata),
.wbm_crg_sel_i(wbm_crg_sel),
.wbm_crg_we_i(wbm_crg_we),
.crg_wbm_rdata_o(crg_wbm_rdata),
.crg_wbm_ack_o(crg_wbm_ack),
.domain1_clk_o(clk_d1),
.domain2_clk_o(clk_d2),
.domain3_clk_o(clk_d3),
.domain4_clk_o(clk_d4),
.uart_rst_o(uart_rst),
.i2c_rst_o(i2c_rst),
.gpio_rst_o(gpio_rst),
.spi_rst_o(spi_rst)
);

assign uart_cyc[0] = wbm_slave_cyc[1];
assign uart_stb[0] = wbm_slave_stb[1];
assign uart_addr[0] = wbm_slave_addr[1];
assign uart_wdata[0] = wbm_slave_wdata[1];
assign uart_sel[0] = wbm_slave_sel[1];
assign uart_we[0] = wbm_slave_we[1];
assign wbm_slave_ack[1] = uart_ack[0];
assign wbm_slave_rdata[1] = uart_rdata[0];
assign perips_core_ei_o[0] = uart_irq[0];

assign uart_cyc[1] = wbm_slave_cyc[2];
assign uart_stb[1] = wbm_slave_stb[2];
assign uart_addr[1] = wbm_slave_addr[2];
assign uart_wdata[1] = wbm_slave_wdata[2];
assign uart_sel[1] = wbm_slave_sel[2];
assign uart_we[1] = wbm_slave_we[2];
assign wbm_slave_ack[2] = uart_ack[1];
assign wbm_slave_rdata[2] = uart_rdata[1];
assign perips_core_ei_o[1] = uart_irq[1];

assign uart_cyc[2] = wbm_slave_cyc[3];
assign uart_stb[2] = wbm_slave_stb[3];
assign uart_addr[2] = wbm_slave_addr[3];
assign uart_wdata[2] = wbm_slave_wdata[3];
assign uart_sel[2] = wbm_slave_sel[3];
assign uart_we[2] = wbm_slave_we[3];
assign wbm_slave_ack[3] = uart_ack[2];
assign wbm_slave_rdata[3] = uart_rdata[2];
assign perips_core_ei_o[2] = uart_irq[2];

assign gpio_cyc[0] = wbm_slave_cyc[4];
assign gpio_stb[0] = wbm_slave_stb[4];
assign gpio_addr[0] = wbm_slave_addr[4];
assign gpio_wdata[0] = wbm_slave_wdata[4];
assign gpio_sel[0] = wbm_slave_sel[4];
assign gpio_we[0] = wbm_slave_we[4];
assign wbm_slave_ack[4] = gpio_ack[0];
assign wbm_slave_rdata[4] = gpio_rdata[0];
assign perips_core_ei_o[3] = gpio_irq[0];

assign i2c_cyc[0] = wbm_slave_cyc[5];
assign i2c_stb[0] = wbm_slave_stb[5];
assign i2c_addr[0] = wbm_slave_addr[5];
assign i2c_wdata[0] = wbm_slave_wdata[5];
assign i2c_sel[0] = wbm_slave_sel[5];
assign i2c_we[0] = wbm_slave_we[5];
assign wbm_slave_ack[5] = i2c_ack[0];
assign wbm_slave_rdata[5] = i2c_rdata[0];
assign perips_core_ei_o[4] = i2c_irq[0];

assign spi_cyc[0] = wbm_slave_cyc[6];
assign spi_stb[0] = wbm_slave_stb[6];
assign spi_addr[0] = wbm_slave_addr[6];
assign spi_wdata[0] = wbm_slave_wdata[6];
assign spi_sel[0] = wbm_slave_sel[6];
assign spi_we[0] = wbm_slave_we[6];
assign wbm_slave_ack[6] = spi_ack[0];
assign wbm_slave_rdata[6] = spi_rdata[0];
assign perips_core_ei_o[5] = spi_irq[0];

assign wbm_crg_cyc = wbm_slave_cyc[0];
assign wbm_crg_stb = wbm_slave_stb[0];
assign wbm_crg_addr = wbm_slave_addr[0];
assign wbm_crg_wdata = wbm_slave_wdata[0];
assign wbm_crg_sel = wbm_slave_sel[0];
assign wbm_crg_we = wbm_slave_we[0];
assign wbm_slave_ack[0] = wbm_crg_ack;
assign wbm_slave_rdata[0] = wbm_crg_rdata;


endmodule: perips_top