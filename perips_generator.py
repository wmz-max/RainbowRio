import json
import os

def gen_perips_top():
    with open('soc_config.json','r') as j:
        config = json.load(j)

    
    device_list = {'uart':config['perips']['uart']['device_num'], 'gpio':config['perips']['gpio']['device_num'], 'i2c':config['perips']['i2c']['device_num'], 'spi':config['perips']['spi']['device_num']}
    domain_list = {}
    for d in device_list:
        if (device_list[d] > 0):
            domain_list[d] = "clk_d" + str(config['perips'][d]['clock_domain'])

    macro_print_list = []
    if (config['perips']['testio']):
        macro_print_list.append('`define TESTIO\n')
    
    id_count = 0
    if(device_list['uart']>0):
        for i in range(0, device_list['uart']):
            macro_print_list.append('`define UART_' + str(hex(i))[-1] + '_TX_DATA_ADDR 32\'h0200_0' + str(hex(id_count))[-1] + '00')
            macro_print_list.append('`define UART_' + str(hex(i))[-1] + '_RX_DATA_ADDR 32\'h0200_0' + str(hex(id_count))[-1] + '01')
            macro_print_list.append('`define UART_' + str(hex(i))[-1] + '_TX_CTRL_ADDR 32\'h0200_0' + str(hex(id_count))[-1] + '02')
            macro_print_list.append('`define UART_' + str(hex(i))[-1] + '_TX_CTRL_ADDR 32\'h0200_0' + str(hex(id_count))[-1] + '03')
            macro_print_list.append('`define UART_' + str(hex(i))[-1] + '_IRQ_PRIO_ADDR 32\'h0200_0' + str(hex(id_count))[-1] + '04')
            macro_print_list.append('`define UART_' + str(hex(i))[-1] + '_IRQ_EN_ADDR 32\'h0200_0' + str(hex(id_count))[-1] + '05')
            macro_print_list.append('`define UART_' + str(hex(i))[-1] + '_IRQ_IP_ADDR 32\'h0200_0' + str(hex(id_count))[-1] + '06')
            
            id_count = id_count + 1
    if(device_list['gpio']>0):
        macro_print_list.append('`define GPIO_SIZE ' + str(config['perips']['gpio']['io_size']))
        for i in range(0, device_list['gpio']):
            macro_print_list.append('`define GPIO_' + str(hex(i))[-1] + '_VALUE_ADDR 32\'h0200_0' + str(hex(id_count))[-1] + '00')
            macro_print_list.append('`define GPIO_' + str(hex(i))[-1] + '_INPUT_EN_ADDR 32\'h0200_0' + str(hex(id_count))[-1] + '01')
            macro_print_list.append('`define GPIO_' + str(hex(i))[-1] + '_PORT_ADDR 32\'h0200_0' + str(hex(id_count))[-1] + '03')
            macro_print_list.append('`define GPIO_' + str(hex(i))[-1] + '_IRQ_PRIO_ADDR 32\'h0200_0' + str(hex(id_count))[-1] + '04')
            macro_print_list.append('`define GPIO_' + str(hex(i))[-1] + '_IRQ_EN_ADDR 32\'h0200_0' + str(hex(id_count))[-1] + '05')
            macro_print_list.append('`define GPIO_' + str(hex(i))[-1] + '_IRQ_IP_ADDR 32\'h0200_0' + str(hex(id_count))[-1] + '06')
            id_count = id_count + 1
    if(device_list['i2c']>0):
        for i in range(0, device_list['i2c']):
            macro_print_list.append('`define I2C_' + str(hex(i))[-1] + '_CTR_ADDR 32\'h0200_0' + str(hex(id_count))[-1] + '00')
            macro_print_list.append('`define I2C_' + str(hex(i))[-1] + '_TX_ADDR 32\'h0200_0' + str(hex(id_count))[-1] + '01')
            macro_print_list.append('`define I2C_' + str(hex(i))[-1] + '_RX_ADDR 32\'h0200_0' + str(hex(id_count))[-1] + '02')
            macro_print_list.append('`define I2C_' + str(hex(i))[-1] + '_CR_ADDR 32\'h0200_0' + str(hex(id_count))[-1] + '03')
            macro_print_list.append('`define I2C_' + str(hex(i))[-1] + '_SR_ADDR 32\'h0200_0' + str(hex(id_count))[-1] + '04')
            macro_print_list.append('`define I2C_' + str(hex(i))[-1] + '_IRQ_PRIO_ADDR 32\'h0200_0' + str(hex(id_count))[-1] + '05')
            macro_print_list.append('`define I2C_' + str(hex(i))[-1] + '_IRQ_EN_ADDR 32\'h0200_0' + str(hex(id_count))[-1] + '06')
            macro_print_list.append('`define I2C_' + str(hex(i))[-1] + '_IRQ_IP_ADDR 32\'h0200_0' + str(hex(id_count))[-1] + '07')
            id_count = id_count + 1
    if(device_list['spi']>0):
        for i in range(0, device_list['spi']):
            macro_print_list.append('`define SPI_' + str(hex(i))[-1] + '_CFG_DATA_ADDR 32\'h0200_0' + str(hex(id_count))[-1] + '00')
            macro_print_list.append('`define SPI_' + str(hex(i))[-1] + '_IRQ_PRIO_ADDR 32\'h0200_0' + str(hex(id_count))[-1] + '01')
            macro_print_list.append('`define SPI_' + str(hex(i))[-1] + '_IRQ_EN_ADDR 32\'h0200_0' + str(hex(id_count))[-1] + '02')
            macro_print_list.append('`define SPI_' + str(hex(i))[-1] + '_IRQ_IP_ADDR 32\'h0200_0' + str(hex(id_count))[-1] + '03')
            id_count = id_count + 1
            
    for i in range(0, config['perips']['core_num']):
        macro_print_list.append('`define CORE_' + str(i) + '_IRQ_TRSHD_ADDR 32\'h0300_0' + str(hex(i))[-1] + '00')
        macro_print_list.append('`define CORE_' + str(i) + '_IRQ_RESP_ADDR 32\'h0300_0' + str(hex(i))[-1] + '01')
        macro_print_list.append('`define CORE_' + str(i) + '_IRQ_COMP_ADDR 32\'h0300_0' + str(hex(i))[-1] + '02')

    parameter_print_list = []
    parameter_print_list.append('localparam DEFAULT_FRENQUENCY = ' + str(config['perips']['global_clock']))
    parameter_print_list.append('localparam PERIPS_SIZE = ' + str(sum(device_list.values())))
    parameter_print_list.append('localparam WB_AD_WIDTH 43\nlocalparam WB_DAT_WIDTH 32')
    parameter_print_list.append('localparam UART_CLK_FREQ ' +str(config['perips']['uart']['frequency']))
    parameter_print_list.append('localparam CORE_NUM ' +str(config['perips']['core_num']))
    parameter_print_list.append('localparam FREQUENCY1 = ' + str(config['perips']['domain1']))
    parameter_print_list.append('localparam FREQUENCY2 = ' + str(config['perips']['domain2']))
    parameter_print_list.append('localparam FREQUENCY3 = ' + str(config['perips']['domain3']))
    parameter_print_list.append('localparam FREQUENCY4 = ' + str(config['perips']['domain4']))


    if_print_list = []
    if_print_list.append('`include \'perips_cfg.vh\'\nmodule perips_top(\ninput clk,\ninput rst,\n\
input logic chi_req_channel_valid_i,\noutput logic chi_req_channel_ready_o,\ninput flit_payload_t_chi_req_channel chi_req_channel_flit_i,\n\
output logic chi_resp_channel_valid_o,\ninput logic chi_resp_channel_ready_i,\noutput flit_payload_t_chi_resp_channel chi_resp_channel_flit_o,\n\
output logic chi_data_channel_valid_o,\ninput logic chi_data_channel_ready_i,\ninput flit_payload_t_chi_data_channel chi_data_channel_flit_o,\n\
output logic chi_data_channel_ready_o,\ninput logic chi_data_channel_valid_i,\ninput flit_payload_t_chi_data_channel chi_data_channel_flit_i,\n')

    if(device_list['uart']>0):
        if_print_list.append('input [' + str(device_list['uart']) + '-1:0] uart_rx_i,\noutput [' + str(device_list['uart']) + '-1:0] uart_tx_o,\n')
    if(device_list['gpio']>0):
        if_print_list.append('input [' + str(device_list['gpio']) + '-1:0][`GPIO_SIZE-1:0] gpio_in_i,\noutput [' + str(device_list['gpio']) + '-1:0][`GPIO_SIZE-1:0] gpio_out_o,\noutput [' + str(device_list['gpio']) + '-1:0][`GPIO_SIZE-1:0] gpio_out_enable_o,\n')
    if(device_list['i2c']>0):
        if_print_list.append('input [' + str(device_list['i2c']) + '-1:0] scl_i,\noutput [' + str(device_list['i2c']) + '-1:0] scl_o,\noutput [' + str(device_list['i2c']) + '-1:0] scl_oen_o,\n\
input [' + str(device_list['i2c']) + '-1:0] sda_i,\noutput [' + str(device_list['i2c']) + '-1:0] sda_o,\noutput [' + str(device_list['i2c']) + '-1:0] sda_oen_o,\n')
    if(device_list['spi']>0):
        if_print_list.append('output [' + str(device_list['spi']) + '-1:0] spi_sck_o,\noutput [' + str(device_list['spi']) + '-1:0] spi_cs_o,\noutput [' + str(device_list['spi']) + '-1:0] spi_mod_o\n\
output [' + str(device_list['spi']) + '-1:0] spi_dat_o,\ninput [' + str(device_list['spi']) + '-1:0] spi_dat_i,\n')
        
    if_print_list.append('output [' + str(device_list['uart'] + device_list['i2c'] + device_list['spi'] + device_list['gpio']) + '-1:0] perips_core_ei_o')

    if_print_list.append(');')

    wire_print_list = []
    wire_print_list.append('logic [PERIPS_SIZE:0] wbm_slave_cyc, wbm_slave_stb, wbm_slave_ack, wbm_slave_we;')
    wire_print_list.append('logic [PERIPS_SIZE:0] [WB_DAT_WIDTH-1:0] wbm_slave_rdata, wbm_slave_wdata;')
    wire_print_list.append('logic [PERIPS_SIZE:0] [(WB_DAT_WIDTH/8)-1:0] wbm_slave_sel;')
    wire_print_list.append('logic [PERIPS_SIZE:0] [WB_AD_WIDTH-1:0] wbm_slave_addr;')
    wire_print_list.append('logic clk_d1, clk_d2, clk_d3;\nlogic uart_rst, gpio_rst, i2c_rst, spi_rst;\n')

    for device_name in device_list.keys():
        if(device_list[device_name] > 0):
            wire_print_list.append('logic [' + str(device_list[device_name]) +'-1:0]' + device_name +'_cyc;')
            wire_print_list.append('logic [' + str(device_list[device_name]) +'-1:0]' + device_name +'_stb;')
            wire_print_list.append('logic [' + str(device_list[device_name]) +'-1:0]' + device_name +'_we;')
            wire_print_list.append('logic [' + str(device_list[device_name]) +'-1:0]' + device_name +'_ack;')
            wire_print_list.append('logic [' + str(device_list[device_name]) +'-1:0]' + device_name +'_irq;')
            wire_print_list.append('logic [' + str(device_list[device_name]) +'-1:0] [WB_DAT_WIDTH-1:0]' + device_name +'_rdata;')
            wire_print_list.append('logic [' + str(device_list[device_name]) +'-1:0] [WB_DAT_WIDTH-1:0]' + device_name +'_wdata;')
            wire_print_list.append('logic [' + str(device_list[device_name]) +'-1:0] [(WB_DAT_WIDTH/8)-1:0]' + device_name +'_sel;')
            wire_print_list.append('logic [' + str(device_list[device_name]) +'-1:0] [WB_AD_WIDTH-1:0]' + device_name +'_addr;\n')

    wire_print_list.append('logic chip_wbs_cyc;\nlogic chip_wbs_stb;\nlogic chip_wbs_we;\nlogic [WB_AD_WIDTH-1:0] chip_wbs_addr;\nlogic [WB_DAT_WIDTH-1:0] \
chip_wbs_wdata;\nlogic [(WB_DAT_WIDTH/8)-1:0] chip_wbs_sel;\nlogic [WB_DAT_WIDTH-1:0] wbs_chip_rdata;\nlogic wbs_chip_ack;')

    device_module_list = []
    device_module_list.append('axi2wb u_axi2wb #(\n.AXI_ADDR_WIDTH(WB_AD_WIDTH),\n.AXI_DATA_WIDTH(WB_DAT_WIDTH)\n)(\n.clk_i(clk),\n.rst_ni(~rst),\n\
.slave_aw_id(chi_req_channel_flit_i.id),\n.slave_aw_addr(chi_req_channel_flit_i.addr),\n.slave_aw_len(chi_req_channel_flit_i.len),\n.slave_aw_size(chi_req_channel_flit_i.size),\n\
.slave_aw_burst(chi_req_channel_flit_i.burst),\n.slave_aw_valid(chi_req_channel_valid_i & (chi_req_channel_flit_i.trx == AR)),\n.slave_aw_ready(chi_req_channel_ready_o),\n\
.slave_ar_id(chi_req_channel_flit_i.id),\n.slave_ar_addr(chi_req_channel_flit_i.addr),\n.slave_ar_len(chi_req_channel_flit_i.len),\n.slave_ar_size(chi_req_channel_flit_i.size),\n\
.slave_ar_burst(chi_req_channel_flit_i.burst),\n.slave_ar_valid(chi_req_channel_valid_i & (chi_req_channel_flit_i.trx == AW)),\n.slave_ar_ready(chi_req_channel_ready_o),\n.slave_w_data(chi_data_channel_flit_i.data),\n\
.slave_w_strb(chi_data_channel_flit_i.strb),\n.slave_w_last(chi_data_channel_flit_i.last),\n.slave_w_valid(chi_data_channel_ready_o),\n.slave_w_ready(chi_data_channel_valid_i),\n.slave_b_id(chi_resp_channel_flit_o.id),\n\
.slave_b_resp(chi_resp_channel_flit_o.resp),\n.slave_b_valid(chi_resp_channel_valid_o),\n.slave_b_ready(chi_resp_channel_ready_i),\n.slave_r_id(chi_data_channel_flit_o.id),\n.slave_r_data(chi_data_channel_flit_o.data),\n\
.slave_r_resp(chi_data_channel_flit_o.resp),\n.slave_r_last(chi_data_channel_flit_o.last),\n.slave_r_valid(chi_data_channel_valid_o),\n.slave_r_ready(chi_data_channel_ready_i),\n.chip_wbs_cyc(chip_wbs_cyc),\n\
.chip_wbs_stb(chip_wbs_stb),\n.chip_wbs_we(chip_wbs_we),\n.chip_wbs_addr(chip_wbs_addr),\n.chip_wbs_wdata(chip_wbs_wdata),\n.chip_wbs_sel(chip_wbs_sel),\n.wbs_chip_rdata(wbs_chip_rdata),\n.wbs_chip_ack(wbs_chip_ack)\n);')


    if(device_list['uart']>0):
        device_module_list.append('generate\nfor(genvar i = 0; i < ' + str(device_list['uart']) + '; i++) begin\n\
uart uart_u(\n.clk(' + domain_list['uart'] +'),\n.rst(uart_rst)\n.uart_rx_i(uart_rx_i[i])\n.uart_tx_o(uart_tx_o[i]),\n.uart_plic_irq_o(uart_irq[i])\n\
.wbm_uart_cyc_i(uart_cyc[i]),\n.wbm_uart_stb_i(uart_stb[i]),\n.wbm_uart_addr_i(uart_addr[i]),\n.wbm_uart_wdata_i(uart_wdata[i]),\n\
.wbm_uart_sel_i(4\'hf),\n.wbm_uart_we_i(uart_we[i]),\n.uart_wbm_rdata_o(uart_rdata[i]),\n.uart_wbm_ack_o(uart_ack[i])\n);\nend\nendgenerate\n')
    
    if(device_list['gpio']>0):
        device_module_list.append('generate\nfor(genvar i = 0; i < ' + str(device_list['gpio']) + '; i++) begin\n\
gpio gpio_u(\n.clk(' + domain_list['gpio'] +'),\n.rst(gpio_rst)\n.gpio_in_i(gpio_in_i[i])\n.gpio_out_o(gpio_out_o[i]),\n.gpio_out_enable_o(gpio_out_enable_o[i]),\n.gpio_plic_irq_o(gpio_irq[i]),\n\
.wbm_gpio_cyc_i(gpio_cyc[i]),\n.wbm_gpio_stb_i(gpio_stb[i]),\n.wbm_gpio_addr_i(gpio_addr[i]),\n.wbm_gpio_wdata_i(gpio_wdata[i]),\n\
.wbm_gpio_sel_i(4\'hf),\n.wbm_gpio_we_i(gpio_we[i]),\n.gpio_wbm_rdata_o(gpio_rdata[i]),\n.gpio_wbm_ack_o(gpio_ack[i])\n);\nend\nendgenerate\n')

    if(device_list['i2c']>0):
        device_module_list.append('generate\nfor(genvar i = 0; i < ' + str(device_list['i2c']) + '; i++) begin\n\
i2cm_top i2c_u(\n.clk(' + domain_list['i2c'] +'),\n.rst(~i2c_rst)\n.aresetn(1\'b1),\n.i2c_plic_irq_o(i2c_irq[i]),\n\
.wbm_i2c_cyc_i(i2c_cyc[i]),\n.wbm_i2c_stb_i(i2c_stb[i]),\n.wbm_i2c_addr_i(i2c_addr[i]),\n.wbm_i2c_sel_i(i2c_sel_i[i]),\n.wbm_i2c_wdata_i(i2c_wdata[i]),\n\
.wbm_i2c_we_i(i2c_we[i]),\n.i2c_wbm_rdata_o(i2c_rdata[i]),\n.i2c_wbm_ack_o(i2c_ack[i])\n.scl_pad_i(scl_i[i]),\n.scl_pad_o(scl_o),\n\
.scl_padoen_o(scl_oen_o[i]),\n.sda_pad_i(sda_i[i]),\n.sda_pad_o(sda_o[i]),\n.sda_padoen_o(sda_oen_o[i])\n);\nend\nendgenerate\n')

    if(device_list['spi']>0):
        device_module_list.append('generate\nfor(genvar i = 0; i < ' + str(device_list['spi']) + '; i++) begin\n\
wbqspiflash spi_u(\n.clk(' + domain_list['spi'] +'),\n.rst(spi_rst)\n..spi_plic_irq_o(spi_irq[i])\n\
.o_qspi_sck(spi_sck_o[i]),\n.o_qspi_cs_n(spi_cs_o[i]),\n.o_qspi_mod(spi_mod_o[i]),\n.o_qspi_dat(spi_dat_o[i]),\n.i_qspi_dat(spi_dat_i[i]),\n\
.wbm_spi_cyc_i(spi_cyc[i]),\n.wbm_spi_stb_i(spi_stb[i]),\n.wbm_spi_sel_i(spi_sel_i[i]),\n.wbm_spi_addr_i(spi_addr[i]),\n.wbm_spi_wdata_i(spi_wdata[i]),\n\
.o_wb_stall(),\n.wbm_spi_we_i(spi_we[i]),\n.spi_wbm_rdata_o(spi_rdata[i]),\n.spi_wbm_ack_o(spi_ack[i])\n);\nend\nendgenerate\n')

    device_module_list.append('wbinterconnect u_icn(\n.clk(clk),\n.rst(rst),\n.chip_wbs_cyc_i(chip_wbs_cyc),\n\
.chip_wbs_stb_i(chip_wbs_stb),\n.chip_wbs_we_i(chip_wbs_we),\n.chip_wbs_addr_i(chip_wbs_addr),\n.chip_wbs_wdata_i(chip_wbs_wdata),\n\
.chip_wbs_sel_i(chip_wbs_sel),\n.wbs_chip_rdata_o(wbs_chip_rdata),\n.wbs_chip_ack_o(wbs_chip_ack),\n')

    if (config['perips']['testio']):
        device_module_list.append('.testio_wbs_cyc_i(testio_wbs_cyc),\n.testio_wbs_stb_i(testio_wbs_stb),\n.testio_wbs_we_i(testio_wbs_we),\n\
.testio_wbs_addr_i(testio_wbs_addr),\n.testio_wbs_wdata_i(testio_wbs_wdata),\n.testio_wbs_sel_i(testio_wbs_sel),\n.wbs_testio_rdata_o(wbs_testio_rdata),\n.wbs_testio_ack_o(wbs_testio_ack),\n')

    device_module_list.append('.wbm_slave_cyc_o(wbm_slave_cyc),\n.wbm_slave_stb_o(wbm_slave_stb),\n.wbm_slave_addr_o(wbm_slave_addr),\n\
.wbm_slave_wdata_o(wbm_slave_wdata),\n.wbm_slave_sel_o(wbm_slave_sel),\n.wbm_slave_we_o(wbm_slave_we),\n.slave_wbm_rdata_i(slave_wbm_rdata),\n.slave_wbm_ack_i(slave_wbm_ack)\n);\n')
    
    device_module_list.append('crg u_crg(\n.global_clk(clk),\n.global_rst(rst),\n.wbm_crg_cyc_i(wbm_crg_cyc),\n.wbm_crg_stb_i(wbm_crg_stb),\n.\
wbm_crg_addr_i(wbm_crg_addr),\n.wbm_crg_wdata_i(wbm_crg_wdata),\n.wbm_crg_sel_i(wbm_crg_sel),\n.wbm_crg_we_i(wbm_crg_we),\n.crg_wbm_rdata_o(crg_wbm_rdata),\n.\
crg_wbm_ack_o(crg_wbm_ack),\n.domain1_clk_o(clk_d1),\n.domain2_clk_o(clk_d2),\n.domain3_clk_o(clk_d3),\n.domain4_clk_o(clk_d4),\n.uart_rst_o(uart_rst),\n.\
i2c_rst_o(i2c_rst),\n.gpio_rst_o(gpio_rst),\n.spi_rst_o(spi_rst)\n);')
    
    assign_print_list = []
    # 0 is assign to crg
    id_count = 1
    for device_name in device_list.keys():
        if(device_list[device_name] > 0):
            for i in range(0, device_list[device_name]):
                assign_print_list.append('assign ' + device_name + '_cyc[' + str(i) + '] = wbm_slave_cyc[' + str(id_count) +'];')
                assign_print_list.append('assign ' + device_name + '_stb[' + str(i) + '] = wbm_slave_stb[' + str(id_count) +'];')
                assign_print_list.append('assign ' + device_name + '_addr[' + str(i) + '] = wbm_slave_addr[' + str(id_count) +'];')
                assign_print_list.append('assign ' + device_name + '_wdata[' + str(i) + '] = wbm_slave_wdata[' + str(id_count) +'];')
                assign_print_list.append('assign ' + device_name + '_sel[' + str(i) + '] = wbm_slave_sel[' + str(id_count) +'];')
                assign_print_list.append('assign ' + device_name + '_we[' + str(i) + '] = wbm_slave_we[' + str(id_count) +'];')
                assign_print_list.append('assign wbm_slave_ack[' + str(id_count) +'] = ' + device_name + '_ack[' + str(i) + '];') 
                assign_print_list.append('assign wbm_slave_rdata[' + str(id_count) +'] = ' + device_name + '_rdata[' + str(i) + '];') 
                assign_print_list.append('assign perips_core_ei_o[' + str(id_count-1) + '] = ' + device_name + '_irq[' + str(i) +'];\n')
                id_count = id_count + 1

    assign_print_list.append('assign wbm_crg_cyc = wbm_slave_cyc[0];')
    assign_print_list.append('assign wbm_crg_stb = wbm_slave_stb[0];')
    assign_print_list.append('assign wbm_crg_addr = wbm_slave_addr[0];')
    assign_print_list.append('assign wbm_crg_wdata = wbm_slave_wdata[0];')
    assign_print_list.append('assign wbm_crg_sel = wbm_slave_sel[0];')
    assign_print_list.append('assign wbm_crg_we = wbm_slave_we[0];')
    assign_print_list.append('assign wbm_slave_ack[0] = wbm_crg_ack;') 
    assign_print_list.append('assign wbm_slave_rdata[0] = wbm_crg_rdata;\n') 

    file = 'perips_cfg.vh'
    with open(file,'w') as f:
        for i in range(len(macro_print_list)):
            f.write(macro_print_list[i] + '\n')
        for i in range(len(parameter_print_list)):
            f.write(parameter_print_list[i] + '\n')
        f.write('\n')

    file = 'perips_top.sv'
    with open(file,'w') as f:
        for i in range(len(if_print_list)):
            f.write(if_print_list[i] + '\n')
        f.write('\n')
        for i in range(len(wire_print_list)):
            f.write(wire_print_list[i] + '\n')
        f.write('\n')
        for i in range(len(device_module_list)):
            f.write(device_module_list[i] + '\n')
        f.write('\n')
        for i in range(len(assign_print_list)):
            f.write(assign_print_list[i] + '\n')
        f.write('\n')
        f.write('endmodule: perips_top')

gen_perips_top()
