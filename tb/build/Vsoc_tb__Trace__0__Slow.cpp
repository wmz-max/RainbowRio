// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsoc_tb__Syms.h"


VL_ATTR_COLD void Vsoc_tb___024root__trace_init_sub__TOP__0(Vsoc_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+482,"m1_cyc", false,-1);
    tracep->declBit(c+483,"m1_stb", false,-1);
    tracep->declBit(c+484,"m1_we", false,-1);
    tracep->declBus(c+485,"m1_addr", false,-1, 31,0);
    tracep->declBus(c+486,"m1_wdata", false,-1, 31,0);
    tracep->declBus(c+487,"m1_rdata", false,-1, 31,0);
    tracep->declBus(c+488,"m1_sel", false,-1, 3,0);
    tracep->declBit(c+489,"m1_ack", false,-1);
    tracep->declBit(c+490,"m2_cyc", false,-1);
    tracep->declBit(c+491,"m2_stb", false,-1);
    tracep->declBit(c+492,"m2_we", false,-1);
    tracep->declBus(c+493,"m2_addr", false,-1, 31,0);
    tracep->declBus(c+494,"m2_wdata", false,-1, 31,0);
    tracep->declBus(c+495,"m2_rdata", false,-1, 31,0);
    tracep->declBus(c+496,"m2_sel", false,-1, 3,0);
    tracep->declBit(c+497,"m2_ack", false,-1);
    tracep->declBit(c+498,"m3_cyc", false,-1);
    tracep->declBit(c+499,"m3_stb", false,-1);
    tracep->declBit(c+500,"m3_we", false,-1);
    tracep->declBus(c+501,"m3_addr", false,-1, 31,0);
    tracep->declBus(c+502,"m3_wdata", false,-1, 31,0);
    tracep->declBus(c+503,"m3_rdata", false,-1, 31,0);
    tracep->declBus(c+504,"m3_sel", false,-1, 3,0);
    tracep->declBit(c+505,"m3_ack", false,-1);
    tracep->declBit(c+506,"m4_cyc", false,-1);
    tracep->declBit(c+507,"m4_stb", false,-1);
    tracep->declBit(c+508,"m4_we", false,-1);
    tracep->declBus(c+509,"m4_addr", false,-1, 31,0);
    tracep->declBus(c+510,"m4_wdata", false,-1, 31,0);
    tracep->declBus(c+511,"m4_rdata", false,-1, 31,0);
    tracep->declBus(c+512,"m4_sel", false,-1, 3,0);
    tracep->declBit(c+513,"m4_ack", false,-1);
    tracep->declBit(c+514,"testio_clk", false,-1);
    tracep->declBit(c+515,"clk", false,-1);
    tracep->declBit(c+516,"rst", false,-1);
    tracep->declBit(c+517,"clk4", false,-1);
    tracep->declBit(c+518,"rst4", false,-1);
    tracep->pushNamePrefix("soc_tb ");
    tracep->declBit(c+482,"m1_cyc", false,-1);
    tracep->declBit(c+483,"m1_stb", false,-1);
    tracep->declBit(c+484,"m1_we", false,-1);
    tracep->declBus(c+485,"m1_addr", false,-1, 31,0);
    tracep->declBus(c+486,"m1_wdata", false,-1, 31,0);
    tracep->declBus(c+487,"m1_rdata", false,-1, 31,0);
    tracep->declBus(c+488,"m1_sel", false,-1, 3,0);
    tracep->declBit(c+489,"m1_ack", false,-1);
    tracep->declBit(c+490,"m2_cyc", false,-1);
    tracep->declBit(c+491,"m2_stb", false,-1);
    tracep->declBit(c+492,"m2_we", false,-1);
    tracep->declBus(c+493,"m2_addr", false,-1, 31,0);
    tracep->declBus(c+494,"m2_wdata", false,-1, 31,0);
    tracep->declBus(c+495,"m2_rdata", false,-1, 31,0);
    tracep->declBus(c+496,"m2_sel", false,-1, 3,0);
    tracep->declBit(c+497,"m2_ack", false,-1);
    tracep->declBit(c+498,"m3_cyc", false,-1);
    tracep->declBit(c+499,"m3_stb", false,-1);
    tracep->declBit(c+500,"m3_we", false,-1);
    tracep->declBus(c+501,"m3_addr", false,-1, 31,0);
    tracep->declBus(c+502,"m3_wdata", false,-1, 31,0);
    tracep->declBus(c+503,"m3_rdata", false,-1, 31,0);
    tracep->declBus(c+504,"m3_sel", false,-1, 3,0);
    tracep->declBit(c+505,"m3_ack", false,-1);
    tracep->declBit(c+506,"m4_cyc", false,-1);
    tracep->declBit(c+507,"m4_stb", false,-1);
    tracep->declBit(c+508,"m4_we", false,-1);
    tracep->declBus(c+509,"m4_addr", false,-1, 31,0);
    tracep->declBus(c+510,"m4_wdata", false,-1, 31,0);
    tracep->declBus(c+511,"m4_rdata", false,-1, 31,0);
    tracep->declBus(c+512,"m4_sel", false,-1, 3,0);
    tracep->declBit(c+513,"m4_ack", false,-1);
    tracep->declBit(c+514,"testio_clk", false,-1);
    tracep->declBit(c+515,"clk", false,-1);
    tracep->declBit(c+516,"rst", false,-1);
    tracep->declBit(c+517,"clk4", false,-1);
    tracep->declBit(c+518,"rst4", false,-1);
    tracep->declBit(c+83,"outside_uart_irq", false,-1);
    tracep->declBit(c+290,"soc_ei", false,-1);
    tracep->declBit(c+514,"testio_clk_out", false,-1);
    tracep->declBit(c+540,"a1", false,-1);
    tracep->declBit(c+540,"a2", false,-1);
    tracep->declBit(c+540,"a3", false,-1);
    tracep->declBit(c+453,"master_ti_i", false,-1);
    tracep->declBit(c+459,"master_ti_o", false,-1);
    tracep->declBit(c+80,"master_ti_oen", false,-1);
    tracep->declBit(c+84,"soc_uart_rx", false,-1);
    tracep->declBit(c+224,"soc_ti_oen", false,-1);
    tracep->declBit(c+291,"soc_mtmri", false,-1);
    tracep->declBit(c+292,"soc_stmri", false,-1);
    tracep->declBit(c+293,"soc_msoft", false,-1);
    tracep->declBit(c+294,"soc_ssoft", false,-1);
    tracep->pushNamePrefix("soc_top_u ");
    tracep->declBit(c+515,"clk", false,-1);
    tracep->declBit(c+516,"rst", false,-1);
    tracep->declBit(c+514,"testio_clk", false,-1);
    tracep->declBit(c+482,"core_soc_cyc_i", false,-1);
    tracep->declBit(c+483,"core_soc_stb_i", false,-1);
    tracep->declBit(c+484,"core_soc_we_i", false,-1);
    tracep->declBus(c+485,"core_soc_addr_i", false,-1, 31,0);
    tracep->declBus(c+486,"core_soc_wdata_i", false,-1, 31,0);
    tracep->declBus(c+488,"core_soc_sel_i", false,-1, 3,0);
    tracep->declBus(c+487,"core_soc_rdata_o", false,-1, 31,0);
    tracep->declBit(c+489,"core_soc_ack_o", false,-1);
    tracep->declBit(c+490,"caravel_soc_cyc_i", false,-1);
    tracep->declBit(c+491,"caravel_soc_stb_i", false,-1);
    tracep->declBit(c+492,"caravel_soc_we_i", false,-1);
    tracep->declBus(c+493,"caravel_soc_addr_i", false,-1, 31,0);
    tracep->declBus(c+494,"caravel_soc_wdata_i", false,-1, 31,0);
    tracep->declBus(c+496,"caravel_soc_sel_i", false,-1, 3,0);
    tracep->declBus(c+495,"caravel_soc_rdata_o", false,-1, 31,0);
    tracep->declBit(c+497,"caravel_soc_ack_o", false,-1);
    tracep->declBit(c+459,"ti_i", false,-1);
    tracep->declBit(c+453,"ti_o", false,-1);
    tracep->declBit(c+224,"ti_oen", false,-1);
    tracep->declBit(c+290,"soc_core_ei_o", false,-1);
    tracep->declBit(c+291,"soc_core_mtmri_o", false,-1);
    tracep->declBit(c+292,"soc_core_stmri_o", false,-1);
    tracep->declBit(c+293,"soc_core_msoft_o", false,-1);
    tracep->declBit(c+294,"soc_core_ssoft_o", false,-1);
    tracep->declBit(c+517,"domain4_clk_o", false,-1);
    tracep->declBit(c+518,"domain4_rst_o", false,-1);
    tracep->declBit(c+519,"uart_rx_i", false,-1);
    tracep->declBit(c+323,"uart_tx_o", false,-1);
    tracep->declBit(c+324,"debug_ringback", false,-1);
    tracep->declBit(c+25,"clint_cyc", false,-1);
    tracep->declBit(c+26,"clint_stb", false,-1);
    tracep->declBus(c+27,"clint_addr", false,-1, 31,0);
    tracep->declBus(c+28,"clint_wdata", false,-1, 31,0);
    tracep->declBit(c+29,"clint_we", false,-1);
    tracep->declBus(c+30,"clint_rdata", false,-1, 31,0);
    tracep->declBit(c+520,"clint_ack", false,-1);
    tracep->declBit(c+31,"plic_cyc", false,-1);
    tracep->declBit(c+32,"plic_stb", false,-1);
    tracep->declBus(c+33,"plic_addr", false,-1, 31,0);
    tracep->declBus(c+34,"plic_wdata", false,-1, 31,0);
    tracep->declBit(c+35,"plic_we", false,-1);
    tracep->declBus(c+295,"plic_rdata", false,-1, 31,0);
    tracep->declBit(c+521,"plic_ack", false,-1);
    tracep->declBit(c+541,"gpio_cyc", false,-1);
    tracep->declBit(c+542,"gpio_stb", false,-1);
    tracep->declBus(c+543,"gpio_addr", false,-1, 31,0);
    tracep->declBus(c+544,"gpio_wdata", false,-1, 31,0);
    tracep->declBit(c+545,"gpio_we", false,-1);
    tracep->declBus(c+546,"gpio_rdata", false,-1, 31,0);
    tracep->declBit(c+547,"gpio_ack", false,-1);
    tracep->declBit(c+548,"gpio_irq", false,-1);
    tracep->declBit(c+25,"uart_cyc", false,-1);
    tracep->declBit(c+26,"uart_stb", false,-1);
    tracep->declBus(c+27,"uart_addr", false,-1, 31,0);
    tracep->declBus(c+28,"uart_wdata", false,-1, 31,0);
    tracep->declBit(c+29,"uart_we", false,-1);
    tracep->declBus(c+325,"uart_rdata", false,-1, 31,0);
    tracep->declBit(c+522,"uart_ack", false,-1);
    tracep->declBit(c+326,"uart_irq", false,-1);
    tracep->declBit(c+25,"crg_cyc", false,-1);
    tracep->declBit(c+26,"crg_stb", false,-1);
    tracep->declBus(c+27,"crg_addr", false,-1, 31,0);
    tracep->declBus(c+28,"crg_wdata", false,-1, 31,0);
    tracep->declBit(c+29,"crg_we", false,-1);
    tracep->declBus(c+419,"crg_rdata", false,-1, 31,0);
    tracep->declBit(c+523,"crg_ack", false,-1);
    tracep->declBus(c+442,"ti_soc_addr", false,-1, 31,0);
    tracep->declBus(c+443,"ti_soc_wdata", false,-1, 31,0);
    tracep->declBus(c+444,"ti_soc_strb", false,-1, 3,0);
    tracep->declBus(c+36,"ti_soc_rdata", false,-1, 31,0);
    tracep->declBit(c+420,"ti_soc_stb", false,-1);
    tracep->declBit(c+445,"ti_soc_we", false,-1);
    tracep->declBit(c+420,"ti_soc_cyc", false,-1);
    tracep->declBit(c+37,"ti_soc_ack", false,-1);
    tracep->declBit(c+38,"domain2_clk", false,-1);
    tracep->declBit(c+421,"domain2_rst", false,-1);
    tracep->declBit(c+39,"domain1_clk", false,-1);
    tracep->declBit(c+422,"domain1_rst", false,-1);
    tracep->declBit(c+524,"domain3_clk", false,-1);
    tracep->declBit(c+423,"domain3_rst", false,-1);
    tracep->pushNamePrefix("clint_u ");
    tracep->declBit(c+39,"clk", false,-1);
    tracep->declBit(c+422,"rst", false,-1);
    tracep->declBit(c+291,"clint_core_mtmr_irq_o", false,-1);
    tracep->declBit(c+292,"clint_core_stmr_irq_o", false,-1);
    tracep->declBit(c+293,"clint_core_msoft_irq_o", false,-1);
    tracep->declBit(c+294,"clint_core_ssoft_irq_o", false,-1);
    tracep->declBit(c+25,"wbm_clint_cyc_i", false,-1);
    tracep->declBit(c+26,"wbm_clint_stb_i", false,-1);
    tracep->declBus(c+27,"wbm_clint_addr_i", false,-1, 31,0);
    tracep->declBus(c+28,"wbm_clint_wdata_i", false,-1, 31,0);
    tracep->declBus(c+549,"wbm_clint_sel_i", false,-1, 3,0);
    tracep->declBit(c+29,"wbm_clint_we_i", false,-1);
    tracep->declBus(c+30,"clint_wbm_rdata_o", false,-1, 31,0);
    tracep->declBit(c+520,"clint_wbm_ack_o", false,-1);
    tracep->declQuad(c+296,"mtime", false,-1, 63,0);
    tracep->declQuad(c+40,"next_mtime", false,-1, 63,0);
    tracep->declQuad(c+298,"stime", false,-1, 63,0);
    tracep->declQuad(c+42,"next_stime", false,-1, 63,0);
    tracep->declBit(c+293,"msip", false,-1);
    tracep->declBit(c+294,"ssip", false,-1);
    tracep->declBit(c+44,"next_msip", false,-1);
    tracep->declBit(c+45,"next_ssip", false,-1);
    tracep->declQuad(c+300,"mtimecmp", false,-1, 63,0);
    tracep->declQuad(c+46,"next_mtimecmp", false,-1, 63,0);
    tracep->declQuad(c+302,"stimecmp", false,-1, 63,0);
    tracep->declQuad(c+48,"next_stimecmp", false,-1, 63,0);
    tracep->declBit(c+304,"ack_ff", false,-1);
    tracep->declBit(c+50,"next_ack_ff", false,-1);
    tracep->declBus(c+30,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("crg_u ");
    tracep->declBit(c+515,"global_clk", false,-1);
    tracep->declBit(c+516,"global_rst", false,-1);
    tracep->declBit(c+25,"wbm_crg_cyc_i", false,-1);
    tracep->declBit(c+26,"wbm_crg_stb_i", false,-1);
    tracep->declBus(c+27,"wbm_crg_addr_i", false,-1, 31,0);
    tracep->declBus(c+28,"wbm_crg_wdata_i", false,-1, 31,0);
    tracep->declBus(c+549,"wbm_crg_sel_i", false,-1, 3,0);
    tracep->declBit(c+29,"wbm_crg_we_i", false,-1);
    tracep->declBus(c+419,"crg_wbm_rdata_o", false,-1, 31,0);
    tracep->declBit(c+523,"crg_wbm_ack_o", false,-1);
    tracep->declBit(c+39,"domain1_clk_o", false,-1);
    tracep->declBit(c+422,"domain1_rst_o", false,-1);
    tracep->declBit(c+38,"domain2_clk_o", false,-1);
    tracep->declBit(c+421,"domain2_rst_o", false,-1);
    tracep->declBit(c+524,"domain3_clk_o", false,-1);
    tracep->declBit(c+423,"domain3_rst_o", false,-1);
    tracep->declBit(c+517,"domain4_clk_o", false,-1);
    tracep->declBit(c+518,"domain4_rst_o", false,-1);
    tracep->declBit(c+424,"domain1_clk_en", false,-1);
    tracep->declBit(c+425,"domain2_clk_en", false,-1);
    tracep->declBit(c+426,"domain3_clk_en", false,-1);
    tracep->declBit(c+427,"domain4_clk_en", false,-1);
    tracep->declBit(c+51,"clk1_latch", false,-1);
    tracep->declBit(c+52,"clk2_latch", false,-1);
    tracep->declBit(c+53,"clk3_latch", false,-1);
    tracep->declBit(c+54,"clk4_latch", false,-1);
    tracep->declBit(c+422,"domain1_rst_r", false,-1);
    tracep->declBit(c+421,"domain2_rst_r", false,-1);
    tracep->declBit(c+423,"domain3_rst_r", false,-1);
    tracep->declBit(c+428,"domain4_rst_r", false,-1);
    tracep->declBit(c+429,"ack_ff", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("outuart_u ");
    tracep->declBit(c+515,"clk", false,-1);
    tracep->declBit(c+525,"rst", false,-1);
    tracep->declBit(c+323,"uart_rx_i", false,-1);
    tracep->declBit(c+324,"debug_ringback", false,-1);
    tracep->declBit(c+519,"uart_tx_o", false,-1);
    tracep->declBus(c+550,"FIFO_DEPTH", false,-1, 31,0);
    tracep->declBus(c+551,"LOG_FIFO_DEPTH", false,-1, 31,0);
    tracep->declBus(c+552,"in_watermark", false,-1, 2,0);
    tracep->declBit(c+553,"in_irq_en", false,-1);
    tracep->declBit(c+554,"stop_bit_ctrl", false,-1);
    tracep->declBit(c+555,"out_en", false,-1);
    tracep->declBit(c+556,"in_en", false,-1);
    tracep->declBit(c+557,"ack_ff", false,-1);
    tracep->declBus(c+558,"fifo_tx_data", false,-1, 7,0);
    tracep->declBus(c+85,"tx_data", false,-1, 7,0);
    tracep->declBus(c+559,"fifo_rx_data", false,-1, 7,0);
    tracep->declBus(c+560,"rx_elements", false,-1, 3,0);
    tracep->declBus(c+86,"tx_elements", false,-1, 3,0);
    tracep->declBit(c+87,"tx_valid", false,-1);
    tracep->declBit(c+561,"fifo_ready_in", false,-1);
    tracep->declBit(c+562,"tx_data_ready", false,-1);
    tracep->declBus(c+88,"rx_data", false,-1, 7,0);
    tracep->declBit(c+89,"rx_valid", false,-1);
    tracep->declBit(c+90,"rx_ready", false,-1);
    tracep->declBit(c+91,"tx_ready", false,-1);
    tracep->pushNamePrefix("uart_fifo ");
    tracep->declBus(c+550,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+550,"BUFFER_DEPTH", false,-1, 31,0);
    tracep->declBus(c+551,"LOG_BUFFER_DEPTH", false,-1, 31,0);
    tracep->declBit(c+515,"clk", false,-1);
    tracep->declBit(c+525,"rst", false,-1);
    tracep->declBit(c+540,"clr_i", false,-1);
    tracep->declBus(c+86,"elements_o", false,-1, 3,0);
    tracep->declBus(c+85,"data_o", false,-1, 7,0);
    tracep->declBit(c+87,"valid_o", false,-1);
    tracep->declBit(c+324,"ready_i", false,-1);
    tracep->declBit(c+89,"valid_i", false,-1);
    tracep->declBus(c+88,"data_i", false,-1, 7,0);
    tracep->declBit(c+90,"ready_o", false,-1);
    tracep->declBus(c+92,"pointer_in", false,-1, 2,0);
    tracep->declBus(c+93,"pointer_out", false,-1, 2,0);
    tracep->declBus(c+86,"elements", false,-1, 3,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+94+i*1,"buffer", true,(i+0), 7,0);
    }
    tracep->declBit(c+102,"full", false,-1);
    tracep->declBus(c+103,"loop1", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("uart_rx_u ");
    tracep->declBus(c+563,"BAUD_RATE", false,-1, 31,0);
    tracep->declBit(c+515,"clk", false,-1);
    tracep->declBit(c+525,"rst", false,-1);
    tracep->declBit(c+323,"rx_i", false,-1);
    tracep->declBit(c+564,"cfg_en_i", false,-1);
    tracep->declBus(c+88,"rx_data_o", false,-1, 7,0);
    tracep->declBit(c+89,"rx_valid_o", false,-1);
    tracep->declBit(c+90,"rx_ready_i", false,-1);
    tracep->declBus(c+565,"BAUD_CNT", false,-1, 31,0);
    tracep->declBus(c+566,"IDLE", false,-1, 2,0);
    tracep->declBus(c+567,"START_BIT", false,-1, 2,0);
    tracep->declBus(c+568,"DATA", false,-1, 2,0);
    tracep->declBus(c+569,"SAVE_DATA", false,-1, 2,0);
    tracep->declBus(c+570,"PARITY", false,-1, 2,0);
    tracep->declBus(c+571,"STOP_BIT", false,-1, 2,0);
    tracep->declBus(c+104,"CS", false,-1, 2,0);
    tracep->declBus(c+105,"NS", false,-1, 2,0);
    tracep->declBus(c+88,"reg_data", false,-1, 7,0);
    tracep->declBus(c+106,"reg_data_next", false,-1, 7,0);
    tracep->declBus(c+107,"reg_rx_sync", false,-1, 2,0);
    tracep->declBus(c+108,"reg_bit_count", false,-1, 2,0);
    tracep->declBus(c+109,"reg_bit_count_next", false,-1, 2,0);
    tracep->declBit(c+110,"parity_bit", false,-1);
    tracep->declBit(c+111,"parity_bit_next", false,-1);
    tracep->declBit(c+112,"sampleData", false,-1);
    tracep->declBus(c+113,"baud_cnt", false,-1, 8,0);
    tracep->declBit(c+114,"baudgen_en", false,-1);
    tracep->declBit(c+115,"bit_done", false,-1);
    tracep->declBit(c+116,"start_bit", false,-1);
    tracep->declBit(c+117,"s_rx_fall", false,-1);
    tracep->declBit(c+118,"caonima", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("uart_tx_u ");
    tracep->declBus(c+563,"BAUD_RATE", false,-1, 31,0);
    tracep->declBit(c+515,"clk", false,-1);
    tracep->declBit(c+525,"rst", false,-1);
    tracep->declBit(c+519,"tx_o", false,-1);
    tracep->declBit(c+555,"cfg_en_i", false,-1);
    tracep->declBit(c+554,"cfg_stop_bits_i", false,-1);
    tracep->declBus(c+85,"tx_data_i", false,-1, 7,0);
    tracep->declBit(c+87,"tx_valid_i", false,-1);
    tracep->declBit(c+91,"tx_ready_o", false,-1);
    tracep->declBus(c+565,"BAUD_CNT", false,-1, 31,0);
    tracep->declBus(c+566,"IDLE", false,-1, 2,0);
    tracep->declBus(c+567,"START_BIT", false,-1, 2,0);
    tracep->declBus(c+568,"DATA", false,-1, 2,0);
    tracep->declBus(c+569,"PARITY", false,-1, 2,0);
    tracep->declBus(c+570,"STOP_BIT_FIRST", false,-1, 2,0);
    tracep->declBus(c+571,"STOP_BIT_LAST", false,-1, 2,0);
    tracep->declBus(c+119,"CS", false,-1, 2,0);
    tracep->declBus(c+120,"NS", false,-1, 2,0);
    tracep->declBus(c+121,"reg_data", false,-1, 7,0);
    tracep->declBus(c+122,"reg_data_next", false,-1, 7,0);
    tracep->declBus(c+123,"reg_bit_count", false,-1, 2,0);
    tracep->declBus(c+124,"reg_bit_count_next", false,-1, 2,0);
    tracep->declBit(c+125,"parity_bit", false,-1);
    tracep->declBit(c+126,"parity_bit_next", false,-1);
    tracep->declBit(c+127,"sampleData", false,-1);
    tracep->declBus(c+128,"baud_cnt", false,-1, 8,0);
    tracep->declBit(c+129,"baudgen_en", false,-1);
    tracep->declBit(c+130,"bit_done", false,-1);
    tracep->declBit(c+131,"caonima", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("plic_u ");
    tracep->declBit(c+39,"clk", false,-1);
    tracep->declBit(c+422,"rst", false,-1);
    tracep->declBit(c+290,"plic_core_ext_irq_o", false,-1);
    tracep->declBit(c+540,"gpio_plic_irq_i", false,-1);
    tracep->declBit(c+326,"uart_plic_irq_i", false,-1);
    tracep->declBit(c+31,"wbm_plic_cyc_i", false,-1);
    tracep->declBit(c+32,"wbm_plic_stb_i", false,-1);
    tracep->declBus(c+33,"wbm_plic_addr_i", false,-1, 31,0);
    tracep->declBus(c+34,"wbm_plic_wdata_i", false,-1, 31,0);
    tracep->declBus(c+549,"wbm_plic_sel_i", false,-1, 3,0);
    tracep->declBit(c+35,"wbm_plic_we_i", false,-1);
    tracep->declBus(c+295,"plic_wbm_rdata_o", false,-1, 31,0);
    tracep->declBit(c+521,"plic_wbm_ack_o", false,-1);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+305+i*1,"irq_priority", true,(i+1), 2,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+307+i*1,"gateway_blocking", true,(i+1));
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+309+i*1,"ip", true,(i+1));
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+311+i*1,"enable", true,(i+1));
    }
    tracep->declBus(c+313,"irq_threshold", false,-1, 2,0);
    tracep->declBus(c+314,"irq_response", false,-1, 1,0);
    tracep->declBus(c+572,"write_data", false,-1, 31,0);
    tracep->declBus(c+573,"read_data", false,-1, 31,0);
    tracep->declBit(c+315,"ip_restore", false,-1);
    tracep->declBit(c+316,"gateway_restore", false,-1);
    tracep->declBus(c+317,"restore_gateway_id", false,-1, 2,0);
    tracep->declBus(c+318,"i", false,-1, 31,0);
    tracep->declBus(c+319,"prior_irq_id_h", false,-1, 1,0);
    tracep->declBus(c+320,"prior_irq_id_l", false,-1, 1,0);
    tracep->declBus(c+321,"next_irq_response", false,-1, 1,0);
    tracep->declBit(c+322,"ack_ff", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("testio_ma_wb ");
    tracep->declBus(c+574,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+575,"BUS_MASK", false,-1, 31,0);
    tracep->declBit(c+515,"clk_i", false,-1);
    tracep->declBit(c+516,"rstn_i", false,-1);
    tracep->declBit(c+540,"test_intr", false,-1);
    tracep->declBit(c+514,"test_clk", false,-1);
    tracep->declBit(c+459,"test_din", false,-1);
    tracep->declBit(c+453,"test_dout", false,-1);
    tracep->declBit(c+224,"test_doen", false,-1);
    tracep->declBit(c+420,"wb_stb_o", false,-1);
    tracep->declBus(c+442,"wb_addr_o", false,-1, 31,0);
    tracep->declBit(c+445,"wb_we_o", false,-1);
    tracep->declBus(c+443,"wb_data_o", false,-1, 31,0);
    tracep->declBus(c+444,"wb_sel_o", false,-1, 3,0);
    tracep->declBit(c+420,"wb_cyc_o", false,-1);
    tracep->declBit(c+37,"wb_ack_i", false,-1);
    tracep->declBit(c+540,"wb_err_i", false,-1);
    tracep->declBus(c+36,"wb_data_i", false,-1, 31,0);
    tracep->declBit(c+514,"wbm_clk_i", false,-1);
    tracep->declBit(c+515,"wbs_clk_i", false,-1);
    tracep->declBit(c+516,"wbm_rst_n", false,-1);
    tracep->declBit(c+516,"wbs_rst_n", false,-1);
    tracep->declBit(c+225,"wbm_stb_o", false,-1);
    tracep->declBus(c+576,"wbm_adr_o", false,-1, 31,0);
    tracep->declBit(c+226,"wbm_we_o", false,-1);
    tracep->declBus(c+227,"wbm_sel_o", false,-1, 3,0);
    tracep->declBit(c+228,"wbm_cyc_o", false,-1);
    tracep->declBit(c+229,"wbm_ack_i", false,-1);
    tracep->declBit(c+446,"wbm_err_i", false,-1);
    tracep->declBus(c+577,"wbm_dat_i", false,-1, 31,0);
    tracep->declBit(c+230,"ti_ma_mem_if_req_valid", false,-1);
    tracep->declBit(c+231,"ti_ma_mem_if_req_ready", false,-1);
    tracep->declBus(c+574,"rct_cfg_RCT_MEM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+574,"rct_cfg_RCT_MEM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+575,"rct_cfg_RCT_MEM_MASK_W", false,-1, 31,0);
    tracep->declBus(c+575,"rct_cfg_CPUNOC_TID_RID_SIZE", false,-1, 31,0);
    tracep->declBus(c+575,"rct_cfg_CPUNOC_TID_SRCID_SIZE", false,-1, 31,0);
    tracep->declBus(c+550,"rct_cfg_CPUNOC_TID_TID_SIZE", false,-1, 31,0);
    tracep->declArray(c+398,"ti_ma_mem_if_req", false,-1, 86,0);
    tracep->declBit(c+232,"ti_ma_mem_if_resp_valid", false,-1);
    tracep->declBit(c+233,"ti_ma_mem_if_resp_ready", false,-1);
    tracep->declQuad(c+234,"ti_ma_mem_if_resp", false,-1, 50,0);
    tracep->declBus(c+236,"wbm_addr_o", false,-1, 31,0);
    tracep->declBus(c+237,"wbm_data_o", false,-1, 31,0);
    tracep->declBus(c+447,"wbm_data_i", false,-1, 31,0);
    tracep->pushNamePrefix("async_wb_u ");
    tracep->declBus(c+574,"AW", false,-1, 31,0);
    tracep->declBus(c+575,"BW", false,-1, 31,0);
    tracep->declBus(c+574,"DW", false,-1, 31,0);
    tracep->declBit(c+516,"wbm_rst_n", false,-1);
    tracep->declBit(c+514,"wbm_clk_i", false,-1);
    tracep->declBit(c+228,"wbm_cyc_i", false,-1);
    tracep->declBit(c+225,"wbm_stb_i", false,-1);
    tracep->declBus(c+236,"wbm_adr_i", false,-1, 31,0);
    tracep->declBit(c+226,"wbm_we_i", false,-1);
    tracep->declBus(c+237,"wbm_dat_i", false,-1, 31,0);
    tracep->declBus(c+227,"wbm_sel_i", false,-1, 3,0);
    tracep->declBus(c+447,"wbm_dat_o", false,-1, 31,0);
    tracep->declBit(c+229,"wbm_ack_o", false,-1);
    tracep->declBit(c+446,"wbm_err_o", false,-1);
    tracep->declBit(c+516,"wbs_rst_n", false,-1);
    tracep->declBit(c+515,"wbs_clk_i", false,-1);
    tracep->declBit(c+420,"wbs_cyc_o", false,-1);
    tracep->declBit(c+420,"wbs_stb_o", false,-1);
    tracep->declBus(c+442,"wbs_adr_o", false,-1, 31,0);
    tracep->declBit(c+445,"wbs_we_o", false,-1);
    tracep->declBus(c+443,"wbs_dat_o", false,-1, 31,0);
    tracep->declBus(c+444,"wbs_sel_o", false,-1, 3,0);
    tracep->declBus(c+36,"wbs_dat_i", false,-1, 31,0);
    tracep->declBit(c+37,"wbs_ack_i", false,-1);
    tracep->declBit(c+540,"wbs_err_i", false,-1);
    tracep->declBus(c+578,"CFW", false,-1, 31,0);
    tracep->declBit(c+238,"PendingRd", false,-1);
    tracep->declBit(c+239,"m_cmd_wr_en", false,-1);
    tracep->declArray(c+240,"m_cmd_wr_data", false,-1, 68,0);
    tracep->declBit(c+243,"m_cmd_wr_full", false,-1);
    tracep->declBit(c+244,"m_cmd_wr_afull", false,-1);
    tracep->declBit(c+245,"m_resp_rd_empty", false,-1);
    tracep->declBit(c+246,"m_resp_rd_aempty", false,-1);
    tracep->declBit(c+247,"m_resp_rd_en", false,-1);
    tracep->declQuad(c+448,"m_resp_rd_data", false,-1, 32,0);
    tracep->declArray(c+450,"s_cmd_rd_data", false,-1, 68,0);
    tracep->declBit(c+430,"s_cmd_rd_empty", false,-1);
    tracep->declBit(c+431,"s_cmd_rd_aempty", false,-1);
    tracep->declBit(c+37,"s_cmd_rd_en", false,-1);
    tracep->declBit(c+55,"s_resp_wr_en", false,-1);
    tracep->declQuad(c+56,"s_resp_wr_data", false,-1, 32,0);
    tracep->declBit(c+432,"s_resp_wr_full", false,-1);
    tracep->declBit(c+433,"s_resp_wr_afull", false,-1);
    tracep->declBit(c+211,"wbs_ack_f", false,-1);
    tracep->pushNamePrefix("u_cmd_if ");
    tracep->declBus(c+578,"W", false,-1, 31,0);
    tracep->declBus(c+575,"DP", false,-1, 31,0);
    tracep->declBus(c+579,"WR_FAST", false,-1, 31,0);
    tracep->declBus(c+579,"RD_FAST", false,-1, 31,0);
    tracep->declBus(c+575,"FULL_DP", false,-1, 31,0);
    tracep->declBus(c+580,"EMPTY_DP", false,-1, 0,0);
    tracep->declBus(c+581,"AW", false,-1, 31,0);
    tracep->declArray(c+450,"rd_data", false,-1, 68,0);
    tracep->declArray(c+240,"wr_data", false,-1, 68,0);
    tracep->declBit(c+514,"wr_clk", false,-1);
    tracep->declBit(c+516,"wr_reset_n", false,-1);
    tracep->declBit(c+239,"wr_en", false,-1);
    tracep->declBit(c+515,"rd_clk", false,-1);
    tracep->declBit(c+516,"rd_reset_n", false,-1);
    tracep->declBit(c+37,"rd_en", false,-1);
    tracep->declBit(c+243,"full", false,-1);
    tracep->declBit(c+430,"empty", false,-1);
    tracep->declBit(c+244,"afull", false,-1);
    tracep->declBit(c+431,"aempty", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declArray(c+1+i*3,"mem", true,(i+0), 68,0);
    }
    tracep->declBus(c+248,"sync_rd_ptr_0", false,-1, 2,0);
    tracep->declBus(c+249,"sync_rd_ptr_1", false,-1, 2,0);
    tracep->declBus(c+250,"sync_rd_ptr", false,-1, 2,0);
    tracep->declBus(c+251,"wr_ptr", false,-1, 2,0);
    tracep->declBus(c+252,"grey_wr_ptr", false,-1, 2,0);
    tracep->declBus(c+434,"grey_rd_ptr", false,-1, 2,0);
    tracep->declBit(c+253,"full_q", false,-1);
    tracep->declBit(c+243,"full_c", false,-1);
    tracep->declBit(c+244,"afull_c", false,-1);
    tracep->declBus(c+254,"wr_ptr_inc", false,-1, 2,0);
    tracep->declBus(c+255,"wr_cnt", false,-1, 2,0);
    tracep->declBus(c+434,"grey_rd_ptr_dly", false,-1, 2,0);
    tracep->declBus(c+212,"sync_wr_ptr_0", false,-1, 2,0);
    tracep->declBus(c+213,"sync_wr_ptr_1", false,-1, 2,0);
    tracep->declBus(c+214,"sync_wr_ptr", false,-1, 2,0);
    tracep->declBus(c+435,"rd_ptr", false,-1, 2,0);
    tracep->declBit(c+215,"empty_q", false,-1);
    tracep->declBit(c+430,"empty_c", false,-1);
    tracep->declBit(c+431,"aempty_c", false,-1);
    tracep->declBus(c+436,"rd_ptr_inc", false,-1, 2,0);
    tracep->declBus(c+216,"sync_wr_ptr_dec", false,-1, 2,0);
    tracep->declBus(c+437,"rd_cnt", false,-1, 2,0);
    tracep->declArray(c+132,"rd_data_q", false,-1, 68,0);
    tracep->declArray(c+450,"rd_data_c", false,-1, 68,0);
    tracep->declBus(c+252,"grey_wr_ptr_dly", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_resp_if ");
    tracep->declBus(c+582,"W", false,-1, 31,0);
    tracep->declBus(c+581,"DP", false,-1, 31,0);
    tracep->declBus(c+579,"WR_FAST", false,-1, 31,0);
    tracep->declBus(c+579,"RD_FAST", false,-1, 31,0);
    tracep->declBus(c+581,"FULL_DP", false,-1, 31,0);
    tracep->declBus(c+580,"EMPTY_DP", false,-1, 0,0);
    tracep->declBus(c+579,"AW", false,-1, 31,0);
    tracep->declQuad(c+448,"rd_data", false,-1, 32,0);
    tracep->declQuad(c+56,"wr_data", false,-1, 32,0);
    tracep->declBit(c+515,"wr_clk", false,-1);
    tracep->declBit(c+516,"wr_reset_n", false,-1);
    tracep->declBit(c+55,"wr_en", false,-1);
    tracep->declBit(c+514,"rd_clk", false,-1);
    tracep->declBit(c+516,"rd_reset_n", false,-1);
    tracep->declBit(c+247,"rd_en", false,-1);
    tracep->declBit(c+432,"full", false,-1);
    tracep->declBit(c+245,"empty", false,-1);
    tracep->declBit(c+433,"afull", false,-1);
    tracep->declBit(c+246,"aempty", false,-1);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+135+i*2,"mem", true,(i+0), 32,0);
    }
    tracep->declBus(c+217,"sync_rd_ptr_0", false,-1, 1,0);
    tracep->declBus(c+218,"sync_rd_ptr_1", false,-1, 1,0);
    tracep->declBus(c+219,"sync_rd_ptr", false,-1, 1,0);
    tracep->declBus(c+438,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+439,"grey_wr_ptr", false,-1, 1,0);
    tracep->declBus(c+256,"grey_rd_ptr", false,-1, 1,0);
    tracep->declBit(c+220,"full_q", false,-1);
    tracep->declBit(c+432,"full_c", false,-1);
    tracep->declBit(c+433,"afull_c", false,-1);
    tracep->declBus(c+440,"wr_ptr_inc", false,-1, 1,0);
    tracep->declBus(c+441,"wr_cnt", false,-1, 1,0);
    tracep->declBus(c+256,"grey_rd_ptr_dly", false,-1, 1,0);
    tracep->declBus(c+257,"sync_wr_ptr_0", false,-1, 1,0);
    tracep->declBus(c+258,"sync_wr_ptr_1", false,-1, 1,0);
    tracep->declBus(c+259,"sync_wr_ptr", false,-1, 1,0);
    tracep->declBus(c+260,"rd_ptr", false,-1, 1,0);
    tracep->declBit(c+261,"empty_q", false,-1);
    tracep->declBit(c+245,"empty_c", false,-1);
    tracep->declBit(c+246,"aempty_c", false,-1);
    tracep->declBus(c+262,"rd_ptr_inc", false,-1, 1,0);
    tracep->declBus(c+263,"sync_wr_ptr_dec", false,-1, 1,0);
    tracep->declBus(c+264,"rd_cnt", false,-1, 1,0);
    tracep->declQuad(c+13,"rd_data_q", false,-1, 32,0);
    tracep->declQuad(c+448,"rd_data_c", false,-1, 32,0);
    tracep->declBus(c+439,"grey_wr_ptr_dly", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("m2w_bridge_ti_ma_u ");
    tracep->declBus(c+574,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+575,"BUS_MASK", false,-1, 31,0);
    tracep->declBit(c+514,"clk_i", false,-1);
    tracep->declBit(c+516,"rstn_i", false,-1);
    tracep->declBit(c+230,"mem_if_req_valid", false,-1);
    tracep->declBit(c+231,"mem_if_req_ready", false,-1);
    tracep->declBus(c+574,"rct_cfg_RCT_MEM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+574,"rct_cfg_RCT_MEM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+575,"rct_cfg_RCT_MEM_MASK_W", false,-1, 31,0);
    tracep->declBus(c+575,"rct_cfg_CPUNOC_TID_RID_SIZE", false,-1, 31,0);
    tracep->declBus(c+575,"rct_cfg_CPUNOC_TID_SRCID_SIZE", false,-1, 31,0);
    tracep->declBus(c+550,"rct_cfg_CPUNOC_TID_TID_SIZE", false,-1, 31,0);
    tracep->declArray(c+398,"mem_if_req", false,-1, 86,0);
    tracep->declBit(c+232,"mem_if_resp_valid", false,-1);
    tracep->declBit(c+233,"mem_if_resp_ready", false,-1);
    tracep->declQuad(c+234,"mem_if_resp", false,-1, 50,0);
    tracep->declBit(c+225,"wb_stb_o", false,-1);
    tracep->declBus(c+236,"wb_addr_o", false,-1, 31,0);
    tracep->declBit(c+226,"wb_we_o", false,-1);
    tracep->declBus(c+237,"wb_data_o", false,-1, 31,0);
    tracep->declBus(c+227,"wb_sel_o", false,-1, 3,0);
    tracep->declBit(c+228,"wb_cyc_o", false,-1);
    tracep->declBit(c+229,"wb_ack_i", false,-1);
    tracep->declBit(c+446,"wb_err_i", false,-1);
    tracep->declBus(c+447,"wb_data_i", false,-1, 31,0);
    tracep->declBus(c+583,"WB_IDLE", false,-1, 1,0);
    tracep->declBus(c+584,"WB_START", false,-1, 1,0);
    tracep->declBus(c+585,"WB_END", false,-1, 1,0);
    tracep->declBit(c+586,"clk", false,-1);
    tracep->declBit(c+587,"rstn", false,-1);
    tracep->declBit(c+231,"memif_req_ready", false,-1);
    tracep->declBit(c+232,"memif_resp_valid", false,-1);
    tracep->declBus(c+265,"memif_resp_data", false,-1, 31,0);
    tracep->declBus(c+266,"memif_resp_type", false,-1, 2,0);
    tracep->declBus(c+267,"memif_resp_tid", false,-1, 15,0);
    tracep->declBit(c+268,"wb_valid", false,-1);
    tracep->declBit(c+225,"wb_stb", false,-1);
    tracep->declBit(c+228,"wb_cyc", false,-1);
    tracep->declBit(c+226,"wb_we", false,-1);
    tracep->declBus(c+236,"wb_addr", false,-1, 31,0);
    tracep->declBus(c+237,"wb_data", false,-1, 31,0);
    tracep->declBus(c+227,"wb_mask", false,-1, 3,0);
    tracep->declBus(c+269,"wb_tid", false,-1, 15,0);
    tracep->declBus(c+401,"wb_current_state", false,-1, 1,0);
    tracep->declBus(c+526,"wb_next_state", false,-1, 1,0);
    tracep->declBit(c+402,"is_idle", false,-1);
    tracep->declBit(c+403,"is_wb_start", false,-1);
    tracep->declBit(c+404,"is_wb_end", false,-1);
    tracep->declBit(c+270,"is_wb_ack", false,-1);
    tracep->declBit(c+233,"is_resp_ready", false,-1);
    tracep->declBit(c+405,"memif_we", false,-1);
    tracep->pushNamePrefix("wb_state_u ");
    tracep->declBus(c+581,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+514,"clk", false,-1);
    tracep->declBit(c+525,"rstn", false,-1);
    tracep->declBus(c+526,"d", false,-1, 1,0);
    tracep->declBus(c+401,"q", false,-1, 1,0);
    tracep->declBus(c+401,"dff_q", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("testio_ma ");
    tracep->declBit(c+516,"rstn_i", false,-1);
    tracep->declBit(c+540,"test_intr", false,-1);
    tracep->declBit(c+514,"test_clk", false,-1);
    tracep->declBit(c+459,"test_din", false,-1);
    tracep->declBit(c+453,"test_dout", false,-1);
    tracep->declBit(c+224,"test_doen", false,-1);
    tracep->declBit(c+230,"mem_if_req_valid", false,-1);
    tracep->declBit(c+231,"mem_if_req_ready", false,-1);
    tracep->declBus(c+574,"rct_cfg_RCT_MEM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+574,"rct_cfg_RCT_MEM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+575,"rct_cfg_RCT_MEM_MASK_W", false,-1, 31,0);
    tracep->declBus(c+575,"rct_cfg_CPUNOC_TID_RID_SIZE", false,-1, 31,0);
    tracep->declBus(c+575,"rct_cfg_CPUNOC_TID_SRCID_SIZE", false,-1, 31,0);
    tracep->declBus(c+550,"rct_cfg_CPUNOC_TID_TID_SIZE", false,-1, 31,0);
    tracep->declArray(c+398,"mem_if_req", false,-1, 86,0);
    tracep->declBit(c+232,"mem_if_resp_valid", false,-1);
    tracep->declBit(c+233,"mem_if_resp_ready", false,-1);
    tracep->declQuad(c+234,"mem_if_resp", false,-1, 50,0);
    tracep->declBus(c+588,"N_CNT_BITS", false,-1, 31,0);
    tracep->declBus(c+589,"N_CMD_BITS", false,-1, 6,0);
    tracep->declBus(c+590,"N_ADDR_BITS", false,-1, 6,0);
    tracep->declBus(c+591,"N_STRB_BITS", false,-1, 6,0);
    tracep->declBus(c+590,"N_DATA_BITS", false,-1, 6,0);
    tracep->declBus(c+589,"N_PRTY_BITS", false,-1, 6,0);
    tracep->declBus(c+589,"N_ACK_BITS", false,-1, 6,0);
    tracep->declBus(c+592,"N_CMDBUF_BITS", false,-1, 6,0);
    tracep->declBus(c+580,"CMD_RD", false,-1, 0,0);
    tracep->declBus(c+593,"CMD_WR", false,-1, 0,0);
    tracep->declBus(c+580,"START", false,-1, 0,0);
    tracep->declBus(c+593,"STOP", false,-1, 0,0);
    tracep->declBus(c+580,"ACK_OK", false,-1, 0,0);
    tracep->declBus(c+593,"ACK_ERR", false,-1, 0,0);
    tracep->declBus(c+271,"resp_data", false,-1, 31,0);
    tracep->declBus(c+272,"rff_cdcst", false,-1, 2,0);
    tracep->declBus(c+454,"next_cdcst", false,-1, 2,0);
    tracep->declBit(c+516,"test_rstn", false,-1);
    tracep->declBit(c+406,"dff_test_din", false,-1);
    tracep->declBit(c+455,"test_din_en", false,-1);
    tracep->declBit(c+273,"dff_test_din_en", false,-1);
    tracep->declBit(c+527,"test_din_neg", false,-1);
    tracep->declBus(c+407,"rff_cmd_idx_max", false,-1, 6,0);
    tracep->declBus(c+456,"rff_cmd_idx", false,-1, 6,0);
    tracep->declBus(c+408,"cmd", false,-1, 0,0);
    tracep->declArray(c+409,"dff_cmdbuf", false,-1, 70,1);
    tracep->declBus(c+412,"addr", false,-1, 31,0);
    tracep->declBus(c+413,"wstrb", false,-1, 3,0);
    tracep->declBus(c+414,"wdata", false,-1, 31,0);
    tracep->declBus(c+415,"prty", false,-1, 0,0);
    tracep->declBit(c+416,"prty_wreq_exp", false,-1);
    tracep->declBit(c+417,"prty_rreq_exp", false,-1);
    tracep->declBus(c+15,"ack", false,-1, 0,0);
    tracep->declBus(c+528,"rprty", false,-1, 0,0);
    tracep->declBus(c+16,"wprty", false,-1, 0,0);
    tracep->declQuad(c+17,"dff_payload", false,-1, 35,0);
    tracep->declBus(c+274,"rff_payload_idx", false,-1, 6,0);
    tracep->declBit(c+275,"rff_payload_in_progress", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("uart_u ");
    tracep->declBit(c+38,"clk", false,-1);
    tracep->declBit(c+421,"rst", false,-1);
    tracep->declBit(c+519,"uart_rx_i", false,-1);
    tracep->declBit(c+323,"uart_tx_o", false,-1);
    tracep->declBit(c+326,"uart_plic_irq_o", false,-1);
    tracep->declBit(c+25,"wbm_uart_cyc_i", false,-1);
    tracep->declBit(c+26,"wbm_uart_stb_i", false,-1);
    tracep->declBus(c+27,"wbm_uart_addr_i", false,-1, 31,0);
    tracep->declBus(c+28,"wbm_uart_wdata_i", false,-1, 31,0);
    tracep->declBus(c+549,"wbm_uart_sel_i", false,-1, 3,0);
    tracep->declBit(c+29,"wbm_uart_we_i", false,-1);
    tracep->declBus(c+325,"uart_wbm_rdata_o", false,-1, 31,0);
    tracep->declBit(c+324,"debug_ringback", false,-1);
    tracep->declBit(c+522,"uart_wbm_ack_o", false,-1);
    tracep->declBus(c+550,"FIFO_DEPTH", false,-1, 31,0);
    tracep->declBus(c+551,"LOG_FIFO_DEPTH", false,-1, 31,0);
    tracep->declBus(c+327,"in_watermark", false,-1, 2,0);
    tracep->declBit(c+328,"in_irq_en", false,-1);
    tracep->declBit(c+329,"stop_bit_ctrl", false,-1);
    tracep->declBit(c+330,"out_en", false,-1);
    tracep->declBit(c+331,"in_en", false,-1);
    tracep->declBit(c+332,"ack_ff", false,-1);
    tracep->declBus(c+333,"fifo_tx_data", false,-1, 7,0);
    tracep->declBus(c+334,"tx_data", false,-1, 7,0);
    tracep->declBus(c+335,"fifo_rx_data", false,-1, 7,0);
    tracep->declBus(c+336,"rx_elements", false,-1, 3,0);
    tracep->declBus(c+337,"tx_elements", false,-1, 3,0);
    tracep->declBit(c+338,"tx_valid", false,-1);
    tracep->declBit(c+339,"fifo_ready_in", false,-1);
    tracep->declBit(c+340,"tx_data_ready", false,-1);
    tracep->declBit(c+58,"fifo_rx_ready", false,-1);
    tracep->declBit(c+341,"fifo_rx_valid", false,-1);
    tracep->declBus(c+342,"rx_data", false,-1, 7,0);
    tracep->declBit(c+343,"tx_ready", false,-1);
    tracep->declBit(c+344,"rx_valid", false,-1);
    tracep->declBit(c+345,"rx_ready", false,-1);
    tracep->pushNamePrefix("uart_rx_fifo ");
    tracep->declBus(c+550,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+550,"BUFFER_DEPTH", false,-1, 31,0);
    tracep->declBus(c+551,"LOG_BUFFER_DEPTH", false,-1, 31,0);
    tracep->declBit(c+38,"clk", false,-1);
    tracep->declBit(c+421,"rst", false,-1);
    tracep->declBit(c+540,"clr_i", false,-1);
    tracep->declBus(c+336,"elements_o", false,-1, 3,0);
    tracep->declBus(c+335,"data_o", false,-1, 7,0);
    tracep->declBit(c+341,"valid_o", false,-1);
    tracep->declBit(c+58,"ready_i", false,-1);
    tracep->declBit(c+344,"valid_i", false,-1);
    tracep->declBus(c+342,"data_i", false,-1, 7,0);
    tracep->declBit(c+345,"ready_o", false,-1);
    tracep->declBus(c+346,"pointer_in", false,-1, 2,0);
    tracep->declBus(c+347,"pointer_out", false,-1, 2,0);
    tracep->declBus(c+336,"elements", false,-1, 3,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+348+i*1,"buffer", true,(i+0), 7,0);
    }
    tracep->declBit(c+356,"full", false,-1);
    tracep->declBus(c+357,"loop1", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("uart_rx_u ");
    tracep->declBus(c+563,"BAUD_RATE", false,-1, 31,0);
    tracep->declBit(c+38,"clk", false,-1);
    tracep->declBit(c+421,"rst", false,-1);
    tracep->declBit(c+519,"rx_i", false,-1);
    tracep->declBit(c+564,"cfg_en_i", false,-1);
    tracep->declBus(c+342,"rx_data_o", false,-1, 7,0);
    tracep->declBit(c+344,"rx_valid_o", false,-1);
    tracep->declBit(c+345,"rx_ready_i", false,-1);
    tracep->declBus(c+565,"BAUD_CNT", false,-1, 31,0);
    tracep->declBus(c+566,"IDLE", false,-1, 2,0);
    tracep->declBus(c+567,"START_BIT", false,-1, 2,0);
    tracep->declBus(c+568,"DATA", false,-1, 2,0);
    tracep->declBus(c+569,"SAVE_DATA", false,-1, 2,0);
    tracep->declBus(c+570,"PARITY", false,-1, 2,0);
    tracep->declBus(c+571,"STOP_BIT", false,-1, 2,0);
    tracep->declBus(c+358,"CS", false,-1, 2,0);
    tracep->declBus(c+359,"NS", false,-1, 2,0);
    tracep->declBus(c+342,"reg_data", false,-1, 7,0);
    tracep->declBus(c+360,"reg_data_next", false,-1, 7,0);
    tracep->declBus(c+361,"reg_rx_sync", false,-1, 2,0);
    tracep->declBus(c+362,"reg_bit_count", false,-1, 2,0);
    tracep->declBus(c+363,"reg_bit_count_next", false,-1, 2,0);
    tracep->declBit(c+364,"parity_bit", false,-1);
    tracep->declBit(c+365,"parity_bit_next", false,-1);
    tracep->declBit(c+366,"sampleData", false,-1);
    tracep->declBus(c+367,"baud_cnt", false,-1, 8,0);
    tracep->declBit(c+368,"baudgen_en", false,-1);
    tracep->declBit(c+369,"bit_done", false,-1);
    tracep->declBit(c+370,"start_bit", false,-1);
    tracep->declBit(c+371,"s_rx_fall", false,-1);
    tracep->declBit(c+372,"caonima", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("uart_tx_fifo ");
    tracep->declBus(c+550,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+550,"BUFFER_DEPTH", false,-1, 31,0);
    tracep->declBus(c+551,"LOG_BUFFER_DEPTH", false,-1, 31,0);
    tracep->declBit(c+38,"clk", false,-1);
    tracep->declBit(c+421,"rst", false,-1);
    tracep->declBit(c+540,"clr_i", false,-1);
    tracep->declBus(c+337,"elements_o", false,-1, 3,0);
    tracep->declBus(c+334,"data_o", false,-1, 7,0);
    tracep->declBit(c+338,"valid_o", false,-1);
    tracep->declBit(c+343,"ready_i", false,-1);
    tracep->declBit(c+340,"valid_i", false,-1);
    tracep->declBus(c+333,"data_i", false,-1, 7,0);
    tracep->declBit(c+339,"ready_o", false,-1);
    tracep->declBus(c+373,"pointer_in", false,-1, 2,0);
    tracep->declBus(c+374,"pointer_out", false,-1, 2,0);
    tracep->declBus(c+337,"elements", false,-1, 3,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+375+i*1,"buffer", true,(i+0), 7,0);
    }
    tracep->declBit(c+383,"full", false,-1);
    tracep->declBus(c+384,"loop1", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("uart_tx_u ");
    tracep->declBus(c+563,"BAUD_RATE", false,-1, 31,0);
    tracep->declBit(c+38,"clk", false,-1);
    tracep->declBit(c+421,"rst", false,-1);
    tracep->declBit(c+323,"tx_o", false,-1);
    tracep->declBit(c+330,"cfg_en_i", false,-1);
    tracep->declBit(c+329,"cfg_stop_bits_i", false,-1);
    tracep->declBus(c+334,"tx_data_i", false,-1, 7,0);
    tracep->declBit(c+338,"tx_valid_i", false,-1);
    tracep->declBit(c+343,"tx_ready_o", false,-1);
    tracep->declBus(c+565,"BAUD_CNT", false,-1, 31,0);
    tracep->declBus(c+566,"IDLE", false,-1, 2,0);
    tracep->declBus(c+567,"START_BIT", false,-1, 2,0);
    tracep->declBus(c+568,"DATA", false,-1, 2,0);
    tracep->declBus(c+569,"PARITY", false,-1, 2,0);
    tracep->declBus(c+570,"STOP_BIT_FIRST", false,-1, 2,0);
    tracep->declBus(c+571,"STOP_BIT_LAST", false,-1, 2,0);
    tracep->declBus(c+385,"CS", false,-1, 2,0);
    tracep->declBus(c+386,"NS", false,-1, 2,0);
    tracep->declBus(c+387,"reg_data", false,-1, 7,0);
    tracep->declBus(c+388,"reg_data_next", false,-1, 7,0);
    tracep->declBus(c+389,"reg_bit_count", false,-1, 2,0);
    tracep->declBus(c+390,"reg_bit_count_next", false,-1, 2,0);
    tracep->declBit(c+391,"parity_bit", false,-1);
    tracep->declBit(c+392,"parity_bit_next", false,-1);
    tracep->declBit(c+393,"sampleData", false,-1);
    tracep->declBus(c+394,"baud_cnt", false,-1, 8,0);
    tracep->declBit(c+395,"baudgen_en", false,-1);
    tracep->declBit(c+396,"bit_done", false,-1);
    tracep->declBit(c+397,"caonima", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wbinterconnect_u ");
    tracep->declBit(c+515,"clk", false,-1);
    tracep->declBit(c+516,"rst", false,-1);
    tracep->declBit(c+482,"core_wbs_cyc_i", false,-1);
    tracep->declBit(c+483,"core_wbs_stb_i", false,-1);
    tracep->declBit(c+484,"core_wbs_we_i", false,-1);
    tracep->declBus(c+485,"core_wbs_addr_i", false,-1, 31,0);
    tracep->declBus(c+486,"core_wbs_wdata_i", false,-1, 31,0);
    tracep->declBus(c+488,"core_wbs_sel_i", false,-1, 3,0);
    tracep->declBus(c+487,"wbs_core_rdata_o", false,-1, 31,0);
    tracep->declBit(c+489,"wbs_core_ack_o", false,-1);
    tracep->declBit(c+490,"caravel_wbs_cyc_i", false,-1);
    tracep->declBit(c+491,"caravel_wbs_stb_i", false,-1);
    tracep->declBit(c+492,"caravel_wbs_we_i", false,-1);
    tracep->declBus(c+493,"caravel_wbs_addr_i", false,-1, 31,0);
    tracep->declBus(c+494,"caravel_wbs_wdata_i", false,-1, 31,0);
    tracep->declBus(c+496,"caravel_wbs_sel_i", false,-1, 3,0);
    tracep->declBus(c+495,"wbs_caravel_rdata_o", false,-1, 31,0);
    tracep->declBit(c+497,"wbs_caravel_ack_o", false,-1);
    tracep->declBit(c+420,"testio_wbs_cyc_i", false,-1);
    tracep->declBit(c+420,"testio_wbs_stb_i", false,-1);
    tracep->declBit(c+445,"testio_wbs_we_i", false,-1);
    tracep->declBus(c+442,"testio_wbs_addr_i", false,-1, 31,0);
    tracep->declBus(c+443,"testio_wbs_wdata_i", false,-1, 31,0);
    tracep->declBus(c+444,"testio_wbs_sel_i", false,-1, 3,0);
    tracep->declBus(c+36,"wbs_testio_rdata_o", false,-1, 31,0);
    tracep->declBit(c+37,"wbs_testio_ack_o", false,-1);
    tracep->declBit(c+25,"wbm_clint_cyc_o", false,-1);
    tracep->declBit(c+26,"wbm_clint_stb_o", false,-1);
    tracep->declBus(c+27,"wbm_clint_addr_o", false,-1, 31,0);
    tracep->declBus(c+28,"wbm_clint_wdata_o", false,-1, 31,0);
    tracep->declBus(c+59,"wbm_clint_sel_o", false,-1, 3,0);
    tracep->declBit(c+29,"wbm_clint_we_o", false,-1);
    tracep->declBus(c+30,"clint_wbm_rdata_i", false,-1, 31,0);
    tracep->declBit(c+520,"clint_wbm_ack_i", false,-1);
    tracep->declBit(c+31,"wbm_plic_cyc_o", false,-1);
    tracep->declBit(c+32,"wbm_plic_stb_o", false,-1);
    tracep->declBus(c+33,"wbm_plic_addr_o", false,-1, 31,0);
    tracep->declBus(c+34,"wbm_plic_wdata_o", false,-1, 31,0);
    tracep->declBus(c+60,"wbm_plic_sel_o", false,-1, 3,0);
    tracep->declBit(c+35,"wbm_plic_we_o", false,-1);
    tracep->declBus(c+295,"plic_wbm_rdata_i", false,-1, 31,0);
    tracep->declBit(c+521,"plic_wbm_ack_i", false,-1);
    tracep->declBit(c+25,"wbm_uart_cyc_o", false,-1);
    tracep->declBit(c+26,"wbm_uart_stb_o", false,-1);
    tracep->declBus(c+27,"wbm_uart_addr_o", false,-1, 31,0);
    tracep->declBus(c+28,"wbm_uart_wdata_o", false,-1, 31,0);
    tracep->declBus(c+59,"wbm_uart_sel_o", false,-1, 3,0);
    tracep->declBit(c+29,"wbm_uart_we_o", false,-1);
    tracep->declBus(c+325,"uart_wbm_rdata_i", false,-1, 31,0);
    tracep->declBit(c+522,"uart_wbm_ack_i", false,-1);
    tracep->declBit(c+25,"wbm_crg_cyc_o", false,-1);
    tracep->declBit(c+26,"wbm_crg_stb_o", false,-1);
    tracep->declBus(c+27,"wbm_crg_addr_o", false,-1, 31,0);
    tracep->declBus(c+28,"wbm_crg_wdata_o", false,-1, 31,0);
    tracep->declBus(c+59,"wbm_crg_sel_o", false,-1, 3,0);
    tracep->declBit(c+29,"wbm_crg_we_o", false,-1);
    tracep->declBus(c+419,"crg_wbm_rdata_i", false,-1, 31,0);
    tracep->declBit(c+523,"crg_wbm_ack_i", false,-1);
    tracep->declBit(c+25,"current_wbs_cyc", false,-1);
    tracep->declBit(c+26,"current_wbs_stb", false,-1);
    tracep->declBit(c+29,"current_wbs_we", false,-1);
    tracep->declBus(c+27,"current_wbs_addr", false,-1, 31,0);
    tracep->declBus(c+28,"current_wbs_wdata", false,-1, 31,0);
    tracep->declBus(c+59,"current_wbs_sel", false,-1, 3,0);
    tracep->declBus(c+36,"current_wbs_rdata", false,-1, 31,0);
    tracep->declBit(c+61,"current_wbs_ack", false,-1);
    tracep->declBus(c+567,"M1", false,-1, 2,0);
    tracep->declBus(c+568,"M2", false,-1, 2,0);
    tracep->declBus(c+570,"M3", false,-1, 2,0);
    tracep->declBus(c+221,"current_master", false,-1, 2,0);
    tracep->declBus(c+222,"next_master", false,-1, 2,0);
    tracep->declBus(c+223,"slave_select", false,-1, 3,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("testio_wb_u ");
    tracep->declBus(c+574,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+575,"BUS_MASK", false,-1, 31,0);
    tracep->declBus(c+579,"TESTIO_WIDTH", false,-1, 31,0);
    tracep->declBit(c+514,"clk_i", false,-1);
    tracep->declBit(c+516,"rstn_i", false,-1);
    tracep->declBit(c+499,"wb_stb_i", false,-1);
    tracep->declBus(c+501,"wb_addr_i", false,-1, 31,0);
    tracep->declBit(c+500,"wb_we_i", false,-1);
    tracep->declBus(c+502,"wb_data_i", false,-1, 31,0);
    tracep->declBus(c+549,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+498,"wb_cyc_i", false,-1);
    tracep->declBit(c+505,"wb_ack_o", false,-1);
    tracep->declBit(c+540,"wb_err_o", false,-1);
    tracep->declBus(c+503,"wb_data_o", false,-1, 31,0);
    tracep->declBus(c+583,"ti_mod_i", false,-1, 1,0);
    tracep->declBus(c+594,"ti_clk_div_i", false,-1, 8,0);
    tracep->declBus(c+453,"ti_dat_i", false,-1, 0,0);
    tracep->declBit(c+514,"ti_clk_o", false,-1);
    tracep->declBit(c+540,"ti_clk_oen", false,-1);
    tracep->declBus(c+459,"ti_dat_o", false,-1, 0,0);
    tracep->declBus(c+80,"ti_dat_oen", false,-1, 0,0);
    tracep->declBit(c+540,"ti_int_o", false,-1);
    tracep->declBit(c+595,"wbm_clk_i", false,-1);
    tracep->declBit(c+596,"wbs_clk_i", false,-1);
    tracep->declBit(c+597,"wbm_rst_n", false,-1);
    tracep->declBit(c+598,"wbs_rst_n", false,-1);
    tracep->declBit(c+599,"ti_clk_div", false,-1);
    tracep->declBit(c+600,"ti_clk_mux", false,-1);
    tracep->declBit(c+601,"ti_clk", false,-1);
    tracep->declBit(c+602,"ti_clk_src_sel", false,-1);
    tracep->declBus(c+603,"ti_clk_div_ratio", false,-1, 7,0);
    tracep->declBus(c+604,"ti_mod_o", false,-1, 1,0);
    tracep->declBit(c+605,"wbs_stb_o", false,-1);
    tracep->declBus(c+606,"wbs_adr_o", false,-1, 31,0);
    tracep->declBit(c+607,"wbs_we_o", false,-1);
    tracep->declBus(c+608,"wbs_dat_o", false,-1, 31,0);
    tracep->declBus(c+609,"wbs_sel_o", false,-1, 3,0);
    tracep->declBit(c+610,"wbs_cyc_o", false,-1);
    tracep->declBit(c+611,"wbs_ack_i", false,-1);
    tracep->declBit(c+612,"wbs_err_i", false,-1);
    tracep->declBus(c+613,"wbs_dat_i", false,-1, 31,0);
    tracep->declBit(c+19,"ti_mem_if_req_valid", false,-1);
    tracep->declBit(c+529,"ti_mem_if_req_ready", false,-1);
    tracep->declBus(c+574,"rct_cfg_RCT_MEM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+574,"rct_cfg_RCT_MEM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+575,"rct_cfg_RCT_MEM_MASK_W", false,-1, 31,0);
    tracep->declBus(c+575,"rct_cfg_CPUNOC_TID_RID_SIZE", false,-1, 31,0);
    tracep->declBus(c+575,"rct_cfg_CPUNOC_TID_SRCID_SIZE", false,-1, 31,0);
    tracep->declBus(c+550,"rct_cfg_CPUNOC_TID_TID_SIZE", false,-1, 31,0);
    tracep->declArray(c+62,"ti_mem_if_req", false,-1, 86,0);
    tracep->declBit(c+276,"ti_mem_if_resp_valid", false,-1);
    tracep->declBit(c+20,"ti_mem_if_resp_ready", false,-1);
    tracep->declQuad(c+530,"ti_mem_if_resp", false,-1, 50,0);
    tracep->pushNamePrefix("testio_u ");
    tracep->declBus(c+574,"DATA_W", false,-1, 31,0);
    tracep->declBus(c+575,"MASK_W", false,-1, 31,0);
    tracep->declBus(c+579,"TIO_W", false,-1, 31,0);
    tracep->declBit(c+19,"mem_if_req_valid", false,-1);
    tracep->declBit(c+529,"mem_if_req_ready", false,-1);
    tracep->declBus(c+574,"rct_cfg_RCT_MEM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+574,"rct_cfg_RCT_MEM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+575,"rct_cfg_RCT_MEM_MASK_W", false,-1, 31,0);
    tracep->declBus(c+575,"rct_cfg_CPUNOC_TID_RID_SIZE", false,-1, 31,0);
    tracep->declBus(c+575,"rct_cfg_CPUNOC_TID_SRCID_SIZE", false,-1, 31,0);
    tracep->declBus(c+550,"rct_cfg_CPUNOC_TID_TID_SIZE", false,-1, 31,0);
    tracep->declArray(c+62,"mem_if_req", false,-1, 86,0);
    tracep->declBit(c+276,"mem_if_resp_valid", false,-1);
    tracep->declBit(c+20,"mem_if_resp_ready", false,-1);
    tracep->declQuad(c+530,"mem_if_resp", false,-1, 50,0);
    tracep->declBit(c+514,"ti_clk_i", false,-1);
    tracep->declBit(c+516,"ti_rstn_i", false,-1);
    tracep->declBus(c+583,"ti_mod_i", false,-1, 1,0);
    tracep->declBus(c+453,"ti_dat_i", false,-1, 0,0);
    tracep->declBit(c+514,"ti_clk_o", false,-1);
    tracep->declBit(c+540,"ti_clk_oen", false,-1);
    tracep->declBus(c+459,"ti_dat_o", false,-1, 0,0);
    tracep->declBus(c+80,"ti_dat_oen", false,-1, 0,0);
    tracep->declBit(c+540,"ti_int_o", false,-1);
    tracep->declBus(c+614,"TI_IDLE", false,-1, 3,0);
    tracep->declBus(c+615,"TI_WR_SEND", false,-1, 3,0);
    tracep->declBus(c+616,"TI_WR_RCV_IDLE", false,-1, 3,0);
    tracep->declBus(c+617,"TI_WR_RCV_ACK", false,-1, 3,0);
    tracep->declBus(c+618,"TI_WR_RCV_PARITY", false,-1, 3,0);
    tracep->declBus(c+619,"TI_WR_RCV", false,-1, 3,0);
    tracep->declBus(c+620,"TI_RD_SEND", false,-1, 3,0);
    tracep->declBus(c+621,"TI_RD_RCV_IDLE", false,-1, 3,0);
    tracep->declBus(c+622,"TI_RD_RCV_ACK", false,-1, 3,0);
    tracep->declBus(c+623,"TI_RD_RCV", false,-1, 3,0);
    tracep->declBus(c+624,"TI_RESP", false,-1, 3,0);
    tracep->declBus(c+625,"TI_ACK_ERR", false,-1, 3,0);
    tracep->declBus(c+626,"MODE_OUTPUT_WORD", false,-1, 31,0);
    tracep->declBus(c+627,"IDLE_DATA_VALUE", false,-1, 31,0);
    tracep->declBus(c+583,"MODE_BIT", false,-1, 1,0);
    tracep->declBus(c+584,"MODE_BYTE", false,-1, 1,0);
    tracep->declBus(c+585,"MODE_HALF", false,-1, 1,0);
    tracep->declBus(c+628,"MODE_WORD", false,-1, 1,0);
    tracep->declBus(c+579,"TI_BIT", false,-1, 31,0);
    tracep->declBus(c+550,"TI_BYTE", false,-1, 31,0);
    tracep->declBus(c+629,"TI_HALF", false,-1, 31,0);
    tracep->declBus(c+574,"TI_WORD", false,-1, 31,0);
    tracep->declQuad(c+21,"dff_mem_if_resp", false,-1, 50,0);
    tracep->declBit(c+19,"ti_valid", false,-1);
    tracep->declBit(c+65,"ti_type", false,-1);
    tracep->declBit(c+20,"ti_mem_if_resq_ready", false,-1);
    tracep->declBus(c+66,"ti_strb", false,-1, 3,0);
    tracep->declBus(c+67,"ti_addr", false,-1, 31,0);
    tracep->declBus(c+68,"ti_data", false,-1, 31,0);
    tracep->declBit(c+529,"mem_if_cap_rdy", false,-1);
    tracep->declBus(c+277,"ti_current_state", false,-1, 3,0);
    tracep->declBus(c+278,"ti_pre_state", false,-1, 3,0);
    tracep->declBus(c+69,"ti_next_state", false,-1, 3,0);
    tracep->declBit(c+279,"is_idle", false,-1);
    tracep->declBit(c+280,"is_wr_send", false,-1);
    tracep->declBit(c+281,"is_rd_send", false,-1);
    tracep->declBit(c+282,"is_rd_rcv", false,-1);
    tracep->declBit(c+276,"is_resp", false,-1);
    tracep->declBit(c+464,"ti_send_done", false,-1);
    tracep->declBit(c+465,"ti_rcv_start", false,-1);
    tracep->declBit(c+466,"ti_rcv_ack", false,-1);
    tracep->declBit(c+467,"ti_rcv_parity", false,-1);
    tracep->declBit(c+468,"ti_rcv_stop", false,-1);
    tracep->declBit(c+469,"ti_rcv_done", false,-1);
    tracep->declBit(c+283,"is_send_mode", false,-1);
    tracep->declBit(c+284,"is_counter_ena", false,-1);
    tracep->declBit(c+285,"is_state_changed", false,-1);
    tracep->declBus(c+470,"ti_fsm_ctrl_mux", false,-1, 5,0);
    tracep->declBus(c+470,"ti_fsm_ctrl_bit", false,-1, 5,0);
    tracep->declBus(c+471,"ti_ctrl", false,-1, 5,0);
    tracep->declBus(c+471,"ti_ctrl_bit", false,-1, 5,0);
    tracep->declBus(c+70,"ti_send_mode", false,-1, 3,0);
    tracep->declBus(c+286,"resp_data_mux", false,-1, 31,0);
    tracep->declBus(c+286,"resp_data_bit", false,-1, 31,0);
    tracep->declBus(c+532,"ti_send_data_mux", false,-1, 0,0);
    tracep->declBit(c+532,"ti_send_data_bit", false,-1);
    tracep->declBus(c+81,"ti_data_oen_mux", false,-1, 0,0);
    tracep->declBit(c+81,"ti_data_oen_bit", false,-1);
    tracep->declBus(c+459,"rff_ti_send_data", false,-1, 0,0);
    tracep->declBus(c+80,"rff_ti_data_oen", false,-1, 0,0);
    tracep->declBit(c+564,"ti_en_bit", false,-1);
    tracep->pushNamePrefix("testio_trx_bit_u ");
    tracep->declBus(c+574,"DATA_W", false,-1, 31,0);
    tracep->declBus(c+575,"MASK_W", false,-1, 31,0);
    tracep->declBus(c+579,"TI_W", false,-1, 31,0);
    tracep->declBit(c+65,"req_type", false,-1);
    tracep->declBus(c+67,"req_addr", false,-1, 31,0);
    tracep->declBus(c+68,"req_data", false,-1, 31,0);
    tracep->declBus(c+66,"req_strb", false,-1, 3,0);
    tracep->declBus(c+286,"resp_data", false,-1, 31,0);
    tracep->declBit(c+533,"resp_data_err", false,-1);
    tracep->declBus(c+471,"ti_ctrl", false,-1, 5,0);
    tracep->declBit(c+514,"ti_clk", false,-1);
    tracep->declBit(c+516,"ti_rstn", false,-1);
    tracep->declBus(c+453,"ti_din", false,-1, 0,0);
    tracep->declBus(c+532,"ti_dout", false,-1, 0,0);
    tracep->declBus(c+81,"ti_doen", false,-1, 0,0);
    tracep->declBus(c+470,"ti_fsm_ctrl", false,-1, 5,0);
    tracep->declBus(c+550,"N_CNT_BITS", false,-1, 31,0);
    tracep->declBus(c+579,"TI_START_CYCLE", false,-1, 31,0);
    tracep->declBus(c+579,"TI_TYPE_CYCLE", false,-1, 31,0);
    tracep->declBus(c+579,"TI_PARITY_CYCLE", false,-1, 31,0);
    tracep->declBus(c+579,"TI_STOP_CYCLE", false,-1, 31,0);
    tracep->declBus(c+579,"TI_ACK_CYCLE", false,-1, 31,0);
    tracep->declBus(c+574,"TI_ADDR_CYCLE", false,-1, 31,0);
    tracep->declBus(c+575,"TI_STRB_CYCLE", false,-1, 31,0);
    tracep->declBus(c+574,"TI_DATA_CYCLE", false,-1, 31,0);
    tracep->declBus(c+551,"TI_HOST_CYC_COM", false,-1, 31,0);
    tracep->declBus(c+581,"TI_WR_ACK_CYC", false,-1, 31,0);
    tracep->declBus(c+579,"TI_RD_ACK_CYC", false,-1, 31,0);
    tracep->declBus(c+630,"TI_WR_HOST_CYC", false,-1, 31,0);
    tracep->declBus(c+631,"TI_RD_HOST_CYC", false,-1, 31,0);
    tracep->declBus(c+582,"TI_RD_TARG_CYC", false,-1, 31,0);
    tracep->declBus(c+632,"TI_SEND_BUF_W", false,-1, 31,0);
    tracep->declBus(c+633,"TI_RCV_BUF_W", false,-1, 31,0);
    tracep->declBus(c+575,"TI_MASK_W", false,-1, 31,0);
    tracep->declBus(c+580,"START", false,-1, 0,0);
    tracep->declBus(c+593,"STOP", false,-1, 0,0);
    tracep->declBus(c+593,"WRITE", false,-1, 0,0);
    tracep->declBus(c+580,"READ", false,-1, 0,0);
    tracep->declBus(c+580,"ACK_OK", false,-1, 0,0);
    tracep->declBus(c+593,"ACK_ERR", false,-1, 0,0);
    tracep->declBus(c+580,"PARITY_OK", false,-1, 0,0);
    tracep->declBus(c+593,"PARITY_ERR", false,-1, 0,0);
    tracep->declBus(c+627,"MODE_INPUT_WORD", false,-1, 31,0);
    tracep->declBus(c+626,"MODE_OUTPUT_WORD", false,-1, 31,0);
    tracep->declBus(c+627,"IDLE_DATA_VALUE", false,-1, 31,0);
    tracep->declBus(c+634,"ti_wr_host_cycle", false,-1, 7,0);
    tracep->declBus(c+635,"ti_rd_host_cycle", false,-1, 7,0);
    tracep->declBus(c+636,"ti_rd_targ_cycle", false,-1, 7,0);
    tracep->declArray(c+534,"ti_wr_send_data_mux", false,-1, 71,0);
    tracep->declBus(c+472,"ti_cycle_count", false,-1, 7,0);
    tracep->declBus(c+473,"ti_cycle_counter", false,-1, 7,0);
    tracep->declArray(c+460,"ti_send_buf", false,-1, 71,0);
    tracep->declBus(c+463,"ti_data_parity", false,-1, 0,0);
    tracep->declQuad(c+287,"ti_rcv_buf", false,-1, 33,0);
    tracep->declBus(c+289,"ti_rcv_data_parity", false,-1, 0,0);
    tracep->declBus(c+66,"ti_strb", false,-1, 3,0);
    tracep->declBus(c+67,"ti_addr", false,-1, 31,0);
    tracep->declBus(c+68,"ti_data", false,-1, 31,0);
    tracep->declBit(c+474,"is_wr_send", false,-1);
    tracep->declBit(c+475,"is_rd_send", false,-1);
    tracep->declBit(c+476,"is_rd_rcv", false,-1);
    tracep->declBit(c+477,"is_send_mode", false,-1);
    tracep->declBit(c+478,"is_counter_ena", false,-1);
    tracep->declBit(c+479,"is_state_changed", false,-1);
    tracep->declBit(c+479,"is_counter_reload", false,-1);
    tracep->declBit(c+480,"is_cycle_count_eq_zero", false,-1);
    tracep->declBit(c+481,"is_cycle_count_eq_one", false,-1);
    tracep->declBit(c+480,"ti_send_done", false,-1);
    tracep->declBit(c+457,"ti_rcv_start", false,-1);
    tracep->declBit(c+457,"ti_rcv_ack", false,-1);
    tracep->declBit(c+458,"ti_rcv_parity", false,-1);
    tracep->declBit(c+453,"ti_rcv_stop", false,-1);
    tracep->declBit(c+480,"ti_rcv_done", false,-1);
    tracep->declArray(c+71,"ti_wr_send_data", false,-1, 71,0);
    tracep->declArray(c+74,"ti_rd_send_data", false,-1, 71,0);
    tracep->declBus(c+540,"ti_wr_send_parity_w", false,-1, 0,0);
    tracep->declBus(c+540,"ti_start_w", false,-1, 0,0);
    tracep->declBus(c+564,"ti_write_w", false,-1, 0,0);
    tracep->declBus(c+540,"ti_read_w", false,-1, 0,0);
    tracep->declBus(c+564,"ti_stop_w", false,-1, 0,0);
    tracep->declBus(c+67,"ti_addr_w", false,-1, 31,0);
    tracep->declBus(c+68,"ti_data_w", false,-1, 31,0);
    tracep->declBus(c+66,"ti_strb_w", false,-1, 3,0);
    tracep->declBus(c+418,"rff_ti_rcv_data", false,-1, 0,0);
    tracep->declBus(c+637,"rff_ti_data_parity", false,-1, 0,0);
    tracep->declBus(c+537,"rff_ti_rcv_data_parity", false,-1, 0,0);
    tracep->declBus(c+81,"ti_data_oen", false,-1, 0,0);
    tracep->declBus(c+532,"ti_send_data", false,-1, 0,0);
    tracep->pushNamePrefix("sv2v_autoblock_1 ");
    tracep->declBus(c+82,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ti_rcv_data_parity_u ");
    tracep->declBus(c+579,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+514,"clk", false,-1);
    tracep->declBit(c+525,"rstn", false,-1);
    tracep->declBit(c+481,"en", false,-1);
    tracep->declBus(c+289,"d", false,-1, 0,0);
    tracep->declBus(c+537,"q", false,-1, 0,0);
    tracep->declBus(c+537,"dff_q", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ti_rcv_data_u ");
    tracep->declBus(c+579,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+514,"clk", false,-1);
    tracep->declBit(c+525,"rstn", false,-1);
    tracep->declBus(c+453,"d", false,-1, 0,0);
    tracep->declBus(c+418,"q", false,-1, 0,0);
    tracep->declBus(c+418,"dff_q", false,-1, 0,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("w2m_bridge_ti_u ");
    tracep->declBus(c+574,"BUS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+575,"BUS_MASK", false,-1, 31,0);
    tracep->declBit(c+514,"clk_i", false,-1);
    tracep->declBit(c+516,"rstn_i", false,-1);
    tracep->declBit(c+499,"wb_stb_i", false,-1);
    tracep->declBus(c+501,"wb_addr_i", false,-1, 31,0);
    tracep->declBit(c+500,"wb_we_i", false,-1);
    tracep->declBus(c+502,"wb_data_i", false,-1, 31,0);
    tracep->declBus(c+549,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+498,"wb_cyc_i", false,-1);
    tracep->declBit(c+505,"wb_ack_o", false,-1);
    tracep->declBit(c+540,"wb_err_o", false,-1);
    tracep->declBus(c+503,"wb_data_o", false,-1, 31,0);
    tracep->declBit(c+19,"mem_if_req_valid", false,-1);
    tracep->declBit(c+529,"mem_if_req_ready", false,-1);
    tracep->declBus(c+574,"rct_cfg_RCT_MEM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+574,"rct_cfg_RCT_MEM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+575,"rct_cfg_RCT_MEM_MASK_W", false,-1, 31,0);
    tracep->declBus(c+575,"rct_cfg_CPUNOC_TID_RID_SIZE", false,-1, 31,0);
    tracep->declBus(c+575,"rct_cfg_CPUNOC_TID_SRCID_SIZE", false,-1, 31,0);
    tracep->declBus(c+550,"rct_cfg_CPUNOC_TID_TID_SIZE", false,-1, 31,0);
    tracep->declArray(c+62,"mem_if_req", false,-1, 86,0);
    tracep->declBit(c+276,"mem_if_resp_valid", false,-1);
    tracep->declBit(c+20,"mem_if_resp_ready", false,-1);
    tracep->declQuad(c+530,"mem_if_resp", false,-1, 50,0);
    tracep->declBus(c+583,"MEM_IF_IDLE", false,-1, 1,0);
    tracep->declBus(c+584,"MEM_IF_REQ", false,-1, 1,0);
    tracep->declBus(c+585,"MEM_IF_RESP", false,-1, 1,0);
    tracep->declBit(c+77,"wb_valid", false,-1);
    tracep->declBit(c+638,"mem_if_ready", false,-1);
    tracep->declBit(c+639,"rff_mem_if_ready", false,-1);
    tracep->declBus(c+23,"wb_current_state", false,-1, 1,0);
    tracep->declBus(c+538,"wb_next_state", false,-1, 1,0);
    tracep->declBit(c+24,"is_idle", false,-1);
    tracep->declBit(c+19,"is_req", false,-1);
    tracep->declBit(c+20,"is_resp", false,-1);
    tracep->declBit(c+539,"is_req_ready", false,-1);
    tracep->declBit(c+78,"is_resp_ready", false,-1);
    tracep->pushNamePrefix("wb_state_u ");
    tracep->declBus(c+581,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+514,"clk", false,-1);
    tracep->declBit(c+525,"rstn", false,-1);
    tracep->declBus(c+538,"d", false,-1, 1,0);
    tracep->declBus(c+23,"q", false,-1, 1,0);
    tracep->declBus(c+23,"dff_q", false,-1, 1,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("uart_u ");
    tracep->declBit(c+515,"clk", false,-1);
    tracep->declBit(c+525,"rst", false,-1);
    tracep->declBit(c+564,"uart_rx_i", false,-1);
    tracep->declBit(c+84,"uart_tx_o", false,-1);
    tracep->declBit(c+83,"uart_plic_irq_o", false,-1);
    tracep->declBit(c+506,"wbm_uart_cyc_i", false,-1);
    tracep->declBit(c+507,"wbm_uart_stb_i", false,-1);
    tracep->declBus(c+509,"wbm_uart_addr_i", false,-1, 31,0);
    tracep->declBus(c+510,"wbm_uart_wdata_i", false,-1, 31,0);
    tracep->declBus(c+549,"wbm_uart_sel_i", false,-1, 3,0);
    tracep->declBit(c+508,"wbm_uart_we_i", false,-1);
    tracep->declBus(c+511,"uart_wbm_rdata_o", false,-1, 31,0);
    tracep->declBit(c+139,"debug_ringback", false,-1);
    tracep->declBit(c+513,"uart_wbm_ack_o", false,-1);
    tracep->declBus(c+550,"FIFO_DEPTH", false,-1, 31,0);
    tracep->declBus(c+551,"LOG_FIFO_DEPTH", false,-1, 31,0);
    tracep->declBus(c+140,"in_watermark", false,-1, 2,0);
    tracep->declBit(c+141,"in_irq_en", false,-1);
    tracep->declBit(c+142,"stop_bit_ctrl", false,-1);
    tracep->declBit(c+143,"out_en", false,-1);
    tracep->declBit(c+144,"in_en", false,-1);
    tracep->declBit(c+145,"ack_ff", false,-1);
    tracep->declBus(c+146,"fifo_tx_data", false,-1, 7,0);
    tracep->declBus(c+147,"tx_data", false,-1, 7,0);
    tracep->declBus(c+148,"fifo_rx_data", false,-1, 7,0);
    tracep->declBus(c+149,"rx_elements", false,-1, 3,0);
    tracep->declBus(c+150,"tx_elements", false,-1, 3,0);
    tracep->declBit(c+151,"tx_valid", false,-1);
    tracep->declBit(c+152,"fifo_ready_in", false,-1);
    tracep->declBit(c+153,"tx_data_ready", false,-1);
    tracep->declBit(c+79,"fifo_rx_ready", false,-1);
    tracep->declBit(c+154,"fifo_rx_valid", false,-1);
    tracep->declBus(c+155,"rx_data", false,-1, 7,0);
    tracep->declBit(c+156,"tx_ready", false,-1);
    tracep->declBit(c+157,"rx_valid", false,-1);
    tracep->declBit(c+158,"rx_ready", false,-1);
    tracep->pushNamePrefix("uart_rx_fifo ");
    tracep->declBus(c+550,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+550,"BUFFER_DEPTH", false,-1, 31,0);
    tracep->declBus(c+551,"LOG_BUFFER_DEPTH", false,-1, 31,0);
    tracep->declBit(c+515,"clk", false,-1);
    tracep->declBit(c+525,"rst", false,-1);
    tracep->declBit(c+540,"clr_i", false,-1);
    tracep->declBus(c+149,"elements_o", false,-1, 3,0);
    tracep->declBus(c+148,"data_o", false,-1, 7,0);
    tracep->declBit(c+154,"valid_o", false,-1);
    tracep->declBit(c+79,"ready_i", false,-1);
    tracep->declBit(c+157,"valid_i", false,-1);
    tracep->declBus(c+155,"data_i", false,-1, 7,0);
    tracep->declBit(c+158,"ready_o", false,-1);
    tracep->declBus(c+159,"pointer_in", false,-1, 2,0);
    tracep->declBus(c+160,"pointer_out", false,-1, 2,0);
    tracep->declBus(c+149,"elements", false,-1, 3,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+161+i*1,"buffer", true,(i+0), 7,0);
    }
    tracep->declBit(c+169,"full", false,-1);
    tracep->declBus(c+170,"loop1", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("uart_rx_u ");
    tracep->declBus(c+563,"BAUD_RATE", false,-1, 31,0);
    tracep->declBit(c+515,"clk", false,-1);
    tracep->declBit(c+525,"rst", false,-1);
    tracep->declBit(c+564,"rx_i", false,-1);
    tracep->declBit(c+564,"cfg_en_i", false,-1);
    tracep->declBus(c+155,"rx_data_o", false,-1, 7,0);
    tracep->declBit(c+157,"rx_valid_o", false,-1);
    tracep->declBit(c+158,"rx_ready_i", false,-1);
    tracep->declBus(c+565,"BAUD_CNT", false,-1, 31,0);
    tracep->declBus(c+566,"IDLE", false,-1, 2,0);
    tracep->declBus(c+567,"START_BIT", false,-1, 2,0);
    tracep->declBus(c+568,"DATA", false,-1, 2,0);
    tracep->declBus(c+569,"SAVE_DATA", false,-1, 2,0);
    tracep->declBus(c+570,"PARITY", false,-1, 2,0);
    tracep->declBus(c+571,"STOP_BIT", false,-1, 2,0);
    tracep->declBus(c+171,"CS", false,-1, 2,0);
    tracep->declBus(c+172,"NS", false,-1, 2,0);
    tracep->declBus(c+155,"reg_data", false,-1, 7,0);
    tracep->declBus(c+173,"reg_data_next", false,-1, 7,0);
    tracep->declBus(c+174,"reg_rx_sync", false,-1, 2,0);
    tracep->declBus(c+175,"reg_bit_count", false,-1, 2,0);
    tracep->declBus(c+176,"reg_bit_count_next", false,-1, 2,0);
    tracep->declBit(c+177,"parity_bit", false,-1);
    tracep->declBit(c+178,"parity_bit_next", false,-1);
    tracep->declBit(c+179,"sampleData", false,-1);
    tracep->declBus(c+180,"baud_cnt", false,-1, 8,0);
    tracep->declBit(c+181,"baudgen_en", false,-1);
    tracep->declBit(c+182,"bit_done", false,-1);
    tracep->declBit(c+183,"start_bit", false,-1);
    tracep->declBit(c+184,"s_rx_fall", false,-1);
    tracep->declBit(c+185,"caonima", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("uart_tx_fifo ");
    tracep->declBus(c+550,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+550,"BUFFER_DEPTH", false,-1, 31,0);
    tracep->declBus(c+551,"LOG_BUFFER_DEPTH", false,-1, 31,0);
    tracep->declBit(c+515,"clk", false,-1);
    tracep->declBit(c+525,"rst", false,-1);
    tracep->declBit(c+540,"clr_i", false,-1);
    tracep->declBus(c+150,"elements_o", false,-1, 3,0);
    tracep->declBus(c+147,"data_o", false,-1, 7,0);
    tracep->declBit(c+151,"valid_o", false,-1);
    tracep->declBit(c+156,"ready_i", false,-1);
    tracep->declBit(c+153,"valid_i", false,-1);
    tracep->declBus(c+146,"data_i", false,-1, 7,0);
    tracep->declBit(c+152,"ready_o", false,-1);
    tracep->declBus(c+186,"pointer_in", false,-1, 2,0);
    tracep->declBus(c+187,"pointer_out", false,-1, 2,0);
    tracep->declBus(c+150,"elements", false,-1, 3,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+188+i*1,"buffer", true,(i+0), 7,0);
    }
    tracep->declBit(c+196,"full", false,-1);
    tracep->declBus(c+197,"loop1", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("uart_tx_u ");
    tracep->declBus(c+563,"BAUD_RATE", false,-1, 31,0);
    tracep->declBit(c+515,"clk", false,-1);
    tracep->declBit(c+525,"rst", false,-1);
    tracep->declBit(c+84,"tx_o", false,-1);
    tracep->declBit(c+143,"cfg_en_i", false,-1);
    tracep->declBit(c+142,"cfg_stop_bits_i", false,-1);
    tracep->declBus(c+147,"tx_data_i", false,-1, 7,0);
    tracep->declBit(c+151,"tx_valid_i", false,-1);
    tracep->declBit(c+156,"tx_ready_o", false,-1);
    tracep->declBus(c+565,"BAUD_CNT", false,-1, 31,0);
    tracep->declBus(c+566,"IDLE", false,-1, 2,0);
    tracep->declBus(c+567,"START_BIT", false,-1, 2,0);
    tracep->declBus(c+568,"DATA", false,-1, 2,0);
    tracep->declBus(c+569,"PARITY", false,-1, 2,0);
    tracep->declBus(c+570,"STOP_BIT_FIRST", false,-1, 2,0);
    tracep->declBus(c+571,"STOP_BIT_LAST", false,-1, 2,0);
    tracep->declBus(c+198,"CS", false,-1, 2,0);
    tracep->declBus(c+199,"NS", false,-1, 2,0);
    tracep->declBus(c+200,"reg_data", false,-1, 7,0);
    tracep->declBus(c+201,"reg_data_next", false,-1, 7,0);
    tracep->declBus(c+202,"reg_bit_count", false,-1, 2,0);
    tracep->declBus(c+203,"reg_bit_count_next", false,-1, 2,0);
    tracep->declBit(c+204,"parity_bit", false,-1);
    tracep->declBit(c+205,"parity_bit_next", false,-1);
    tracep->declBit(c+206,"sampleData", false,-1);
    tracep->declBus(c+207,"baud_cnt", false,-1, 8,0);
    tracep->declBit(c+208,"baudgen_en", false,-1);
    tracep->declBit(c+209,"bit_done", false,-1);
    tracep->declBit(c+210,"caonima", false,-1);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vsoc_tb___024root__trace_init_top(Vsoc_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root__trace_init_top\n"); );
    // Body
    Vsoc_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vsoc_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsoc_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsoc_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vsoc_tb___024root__trace_register(Vsoc_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vsoc_tb___024root__trace_full_top_0, vlSelf, nullptr);
    tracep->addChgCb(&Vsoc_tb___024root__trace_chg_top_0, vlSelf, nullptr);
    tracep->addCleanupCb(&Vsoc_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vsoc_tb___024root__trace_full_sub_0(Vsoc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vsoc_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root__trace_full_top_0\n"); );
    // Init
    Vsoc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsoc_tb___024root*>(voidSelf);
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vsoc_tb___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsoc_tb___024root__trace_full_sub_0(Vsoc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_hbd0c0501__0;
    VlWide<3>/*95:0*/ __Vtemp_h5e337890__0;
    VlWide<3>/*95:0*/ __Vtemp_hc961096c__0;
    VlWide<3>/*95:0*/ __Vtemp_h03cdb204__0;
    // Body
    bufp->fullWData(oldp+1,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__mem[0]),69);
    bufp->fullWData(oldp+4,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__mem[1]),69);
    bufp->fullWData(oldp+7,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__mem[2]),69);
    bufp->fullWData(oldp+10,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__mem[3]),69);
    bufp->fullQData(oldp+13,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__rd_data_q),33);
    bufp->fullBit(oldp+15,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__ack));
    bufp->fullBit(oldp+16,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__ack));
    bufp->fullQData(oldp+17,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_payload),36);
    bufp->fullBit(oldp+19,((1U == (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__w2m_bridge_ti_u__DOT__wb_state_u__DOT__dff_q))));
    bufp->fullBit(oldp+20,((2U == (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__w2m_bridge_ti_u__DOT__wb_state_u__DOT__dff_q))));
    bufp->fullQData(oldp+21,(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__dff_mem_if_resp),51);
    bufp->fullCData(oldp+23,(vlSelf->soc_tb__DOT__testio_wb_u__DOT__w2m_bridge_ti_u__DOT__wb_state_u__DOT__dff_q),2);
    bufp->fullBit(oldp+24,((0U == (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__w2m_bridge_ti_u__DOT__wb_state_u__DOT__dff_q))));
    bufp->fullBit(oldp+25,(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_cyc));
    bufp->fullBit(oldp+26,(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_stb));
    bufp->fullIData(oldp+27,(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr),32);
    bufp->fullIData(oldp+28,(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_wdata),32);
    bufp->fullBit(oldp+29,(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_we));
    bufp->fullIData(oldp+30,(vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__rdata),32);
    bufp->fullBit(oldp+31,(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_cyc));
    bufp->fullBit(oldp+32,(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_stb));
    bufp->fullIData(oldp+33,(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_addr),32);
    bufp->fullIData(oldp+34,(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_wdata),32);
    bufp->fullBit(oldp+35,(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_we));
    bufp->fullIData(oldp+36,(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_rdata),32);
    bufp->fullBit(oldp+37,(vlSelf->soc_tb__DOT__soc_top_u__DOT__ti_soc_ack));
    bufp->fullBit(oldp+38,(vlSelf->soc_tb__DOT__soc_top_u__DOT__domain2_clk));
    bufp->fullBit(oldp+39,(vlSelf->soc_tb__DOT__soc_top_u__DOT__domain1_clk));
    bufp->fullQData(oldp+40,(vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__next_mtime),64);
    bufp->fullQData(oldp+42,(vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__next_stime),64);
    bufp->fullBit(oldp+44,(vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__next_msip));
    bufp->fullBit(oldp+45,(vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__next_ssip));
    bufp->fullQData(oldp+46,(vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__next_mtimecmp),64);
    bufp->fullQData(oldp+48,(vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__next_stimecmp),64);
    bufp->fullBit(oldp+50,(vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__next_ack_ff));
    bufp->fullBit(oldp+51,(vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__clk1_latch));
    bufp->fullBit(oldp+52,(vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__clk2_latch));
    bufp->fullBit(oldp+53,(vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__clk3_latch));
    bufp->fullBit(oldp+54,(vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__clk4_latch));
    bufp->fullBit(oldp+55,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__s_resp_wr_en));
    bufp->fullQData(oldp+56,((QData)((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_rdata))),33);
    bufp->fullBit(oldp+58,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__fifo_rx_ready));
    bufp->fullCData(oldp+59,(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_sel),4);
    bufp->fullCData(oldp+60,(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__wbm_plic_sel_o),4);
    bufp->fullBit(oldp+61,(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_ack));
    bufp->fullWData(oldp+62,(vlSelf->soc_tb__DOT__testio_wb_u__DOT__ti_mem_if_req),87);
    bufp->fullBit(oldp+65,((1U == (7U & (vlSelf->soc_tb__DOT__testio_wb_u__DOT__ti_mem_if_req[2U] 
                                         >> 0x14U)))));
    bufp->fullCData(oldp+66,((0xfU & vlSelf->soc_tb__DOT__testio_wb_u__DOT__ti_mem_if_req[1U])),4);
    bufp->fullIData(oldp+67,(((vlSelf->soc_tb__DOT__testio_wb_u__DOT__ti_mem_if_req[2U] 
                               << 0x1cU) | (vlSelf->soc_tb__DOT__testio_wb_u__DOT__ti_mem_if_req[1U] 
                                            >> 4U))),32);
    bufp->fullIData(oldp+68,(vlSelf->soc_tb__DOT__testio_wb_u__DOT__ti_mem_if_req[0U]),32);
    bufp->fullCData(oldp+69,(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_next_state),4);
    bufp->fullCData(oldp+70,(((1U == (7U & (vlSelf->soc_tb__DOT__testio_wb_u__DOT__ti_mem_if_req[2U] 
                                            >> 0x14U)))
                               ? 1U : 6U)),4);
    __Vtemp_hbd0c0501__0[0U] = (IData)((1ULL | (((QData)((IData)(
                                                                 (0xfU 
                                                                  & vlSelf->soc_tb__DOT__testio_wb_u__DOT__ti_mem_if_req[1U]))) 
                                                 << 0x22U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->soc_tb__DOT__testio_wb_u__DOT__ti_mem_if_req[0U])) 
                                                   << 2U))));
    __Vtemp_hbd0c0501__0[1U] = ((0xffffffc0U & (vlSelf->soc_tb__DOT__testio_wb_u__DOT__ti_mem_if_req[1U] 
                                                << 2U)) 
                                | (IData)(((1ULL | 
                                            (((QData)((IData)(
                                                              (0xfU 
                                                               & vlSelf->soc_tb__DOT__testio_wb_u__DOT__ti_mem_if_req[1U]))) 
                                              << 0x22U) 
                                             | ((QData)((IData)(
                                                                vlSelf->soc_tb__DOT__testio_wb_u__DOT__ti_mem_if_req[0U])) 
                                                << 2U))) 
                                           >> 0x20U)));
    __Vtemp_hbd0c0501__0[2U] = (0x40U | (0x3fU & ((0x3cU 
                                                   & (vlSelf->soc_tb__DOT__testio_wb_u__DOT__ti_mem_if_req[2U] 
                                                      << 2U)) 
                                                  | (vlSelf->soc_tb__DOT__testio_wb_u__DOT__ti_mem_if_req[1U] 
                                                     >> 0x1eU))));
    bufp->fullWData(oldp+71,(__Vtemp_hbd0c0501__0),72);
    __Vtemp_h5e337890__0[0U] = 0xffffffffU;
    __Vtemp_h5e337890__0[1U] = (0x1fU | ((IData)((QData)((IData)(
                                                                 ((vlSelf->soc_tb__DOT__testio_wb_u__DOT__ti_mem_if_req[2U] 
                                                                   << 0x1cU) 
                                                                  | (vlSelf->soc_tb__DOT__testio_wb_u__DOT__ti_mem_if_req[1U] 
                                                                     >> 4U))))) 
                                         << 6U));
    __Vtemp_h5e337890__0[2U] = (((IData)((QData)((IData)(
                                                         ((vlSelf->soc_tb__DOT__testio_wb_u__DOT__ti_mem_if_req[2U] 
                                                           << 0x1cU) 
                                                          | (vlSelf->soc_tb__DOT__testio_wb_u__DOT__ti_mem_if_req[1U] 
                                                             >> 4U))))) 
                                 >> 0x1aU) | ((IData)(
                                                      ((QData)((IData)(
                                                                       ((vlSelf->soc_tb__DOT__testio_wb_u__DOT__ti_mem_if_req[2U] 
                                                                         << 0x1cU) 
                                                                        | (vlSelf->soc_tb__DOT__testio_wb_u__DOT__ti_mem_if_req[1U] 
                                                                           >> 4U)))) 
                                                       >> 0x20U)) 
                                              << 6U));
    bufp->fullWData(oldp+74,(__Vtemp_h5e337890__0),72);
    bufp->fullBit(oldp+77,(vlSelf->soc_tb__DOT__testio_wb_u__DOT__w2m_bridge_ti_u__DOT__wb_valid));
    bufp->fullBit(oldp+78,(vlSelf->soc_tb__DOT__testio_wb_u__DOT__w2m_bridge_ti_u__DOT__is_resp_ready));
    bufp->fullBit(oldp+79,(vlSelf->soc_tb__DOT__uart_u__DOT__fifo_rx_ready));
    bufp->fullBit(oldp+80,(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__rff_ti_data_oen));
    bufp->fullBit(oldp+81,(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_data_oen));
    bufp->fullIData(oldp+82,(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__sv2v_autoblock_1__DOT__i),32);
    bufp->fullBit(oldp+83,(((IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__elements) 
                            >= (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__in_watermark))));
    bufp->fullBit(oldp+84,(vlSelf->soc_tb__DOT__soc_uart_rx));
    bufp->fullCData(oldp+85,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__buffer
                             [vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__pointer_out]),8);
    bufp->fullCData(oldp+86,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__elements),4);
    bufp->fullBit(oldp+87,((0U != (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__elements))));
    bufp->fullCData(oldp+88,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__reg_data),8);
    bufp->fullBit(oldp+89,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__rx_valid));
    bufp->fullBit(oldp+90,((8U != (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__elements))));
    bufp->fullBit(oldp+91,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__tx_ready));
    bufp->fullCData(oldp+92,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__pointer_in),3);
    bufp->fullCData(oldp+93,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__pointer_out),3);
    bufp->fullCData(oldp+94,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__buffer[0]),8);
    bufp->fullCData(oldp+95,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__buffer[1]),8);
    bufp->fullCData(oldp+96,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__buffer[2]),8);
    bufp->fullCData(oldp+97,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__buffer[3]),8);
    bufp->fullCData(oldp+98,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__buffer[4]),8);
    bufp->fullCData(oldp+99,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__buffer[5]),8);
    bufp->fullCData(oldp+100,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__buffer[6]),8);
    bufp->fullCData(oldp+101,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__buffer[7]),8);
    bufp->fullBit(oldp+102,((8U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__elements))));
    bufp->fullIData(oldp+103,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__loop1),32);
    bufp->fullCData(oldp+104,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__CS),3);
    bufp->fullCData(oldp+105,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__NS),3);
    bufp->fullCData(oldp+106,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__reg_data_next),8);
    bufp->fullCData(oldp+107,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__reg_rx_sync),3);
    bufp->fullCData(oldp+108,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__reg_bit_count),3);
    bufp->fullCData(oldp+109,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__reg_bit_count_next),3);
    bufp->fullBit(oldp+110,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__parity_bit));
    bufp->fullBit(oldp+111,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__parity_bit_next));
    bufp->fullBit(oldp+112,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__sampleData));
    bufp->fullSData(oldp+113,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__baud_cnt),9);
    bufp->fullBit(oldp+114,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__baudgen_en));
    bufp->fullBit(oldp+115,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__bit_done));
    bufp->fullBit(oldp+116,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__start_bit));
    bufp->fullBit(oldp+117,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__s_rx_fall));
    bufp->fullBit(oldp+118,((0x1b2U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__baud_cnt))));
    bufp->fullCData(oldp+119,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__CS),3);
    bufp->fullCData(oldp+120,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__NS),3);
    bufp->fullCData(oldp+121,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__reg_data),8);
    bufp->fullCData(oldp+122,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__reg_data_next),8);
    bufp->fullCData(oldp+123,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__reg_bit_count),3);
    bufp->fullCData(oldp+124,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__reg_bit_count_next),3);
    bufp->fullBit(oldp+125,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__parity_bit));
    bufp->fullBit(oldp+126,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__parity_bit_next));
    bufp->fullBit(oldp+127,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__sampleData));
    bufp->fullSData(oldp+128,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__baud_cnt),9);
    bufp->fullBit(oldp+129,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__baudgen_en));
    bufp->fullBit(oldp+130,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__bit_done));
    bufp->fullBit(oldp+131,((0x1b2U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__baud_cnt))));
    bufp->fullWData(oldp+132,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__rd_data_q),69);
    bufp->fullQData(oldp+135,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__mem[0]),33);
    bufp->fullQData(oldp+137,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__mem[1]),33);
    bufp->fullBit(oldp+139,(vlSelf->soc_tb__DOT__uart_u__DOT__debug_ringback));
    bufp->fullCData(oldp+140,(vlSelf->soc_tb__DOT__uart_u__DOT__in_watermark),3);
    bufp->fullBit(oldp+141,(vlSelf->soc_tb__DOT__uart_u__DOT__in_irq_en));
    bufp->fullBit(oldp+142,(vlSelf->soc_tb__DOT__uart_u__DOT__stop_bit_ctrl));
    bufp->fullBit(oldp+143,(vlSelf->soc_tb__DOT__uart_u__DOT__out_en));
    bufp->fullBit(oldp+144,(vlSelf->soc_tb__DOT__uart_u__DOT__in_en));
    bufp->fullBit(oldp+145,(vlSelf->soc_tb__DOT__uart_u__DOT__ack_ff));
    bufp->fullCData(oldp+146,(vlSelf->soc_tb__DOT__uart_u__DOT__fifo_tx_data),8);
    bufp->fullCData(oldp+147,(vlSelf->soc_tb__DOT__uart_u__DOT__tx_data),8);
    bufp->fullCData(oldp+148,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer
                              [vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__pointer_out]),8);
    bufp->fullCData(oldp+149,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__elements),4);
    bufp->fullCData(oldp+150,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__elements),4);
    bufp->fullBit(oldp+151,((0U != (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__elements))));
    bufp->fullBit(oldp+152,((8U != (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__elements))));
    bufp->fullBit(oldp+153,(vlSelf->soc_tb__DOT__uart_u__DOT__tx_data_ready));
    bufp->fullBit(oldp+154,((0U != (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__elements))));
    bufp->fullCData(oldp+155,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__reg_data),8);
    bufp->fullBit(oldp+156,(vlSelf->soc_tb__DOT__uart_u__DOT__tx_ready));
    bufp->fullBit(oldp+157,(vlSelf->soc_tb__DOT__uart_u__DOT__rx_valid));
    bufp->fullBit(oldp+158,((8U != (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__elements))));
    bufp->fullCData(oldp+159,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__pointer_in),3);
    bufp->fullCData(oldp+160,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__pointer_out),3);
    bufp->fullCData(oldp+161,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer[0]),8);
    bufp->fullCData(oldp+162,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer[1]),8);
    bufp->fullCData(oldp+163,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer[2]),8);
    bufp->fullCData(oldp+164,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer[3]),8);
    bufp->fullCData(oldp+165,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer[4]),8);
    bufp->fullCData(oldp+166,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer[5]),8);
    bufp->fullCData(oldp+167,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer[6]),8);
    bufp->fullCData(oldp+168,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer[7]),8);
    bufp->fullBit(oldp+169,((8U == (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__elements))));
    bufp->fullIData(oldp+170,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__loop1),32);
    bufp->fullCData(oldp+171,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__CS),3);
    bufp->fullCData(oldp+172,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__NS),3);
    bufp->fullCData(oldp+173,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__reg_data_next),8);
    bufp->fullCData(oldp+174,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__reg_rx_sync),3);
    bufp->fullCData(oldp+175,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__reg_bit_count),3);
    bufp->fullCData(oldp+176,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__reg_bit_count_next),3);
    bufp->fullBit(oldp+177,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__parity_bit));
    bufp->fullBit(oldp+178,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__parity_bit_next));
    bufp->fullBit(oldp+179,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__sampleData));
    bufp->fullSData(oldp+180,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__baud_cnt),9);
    bufp->fullBit(oldp+181,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__baudgen_en));
    bufp->fullBit(oldp+182,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__bit_done));
    bufp->fullBit(oldp+183,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__start_bit));
    bufp->fullBit(oldp+184,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__s_rx_fall));
    bufp->fullBit(oldp+185,((0x1b2U == (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__baud_cnt))));
    bufp->fullCData(oldp+186,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__pointer_in),3);
    bufp->fullCData(oldp+187,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__pointer_out),3);
    bufp->fullCData(oldp+188,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer[0]),8);
    bufp->fullCData(oldp+189,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer[1]),8);
    bufp->fullCData(oldp+190,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer[2]),8);
    bufp->fullCData(oldp+191,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer[3]),8);
    bufp->fullCData(oldp+192,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer[4]),8);
    bufp->fullCData(oldp+193,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer[5]),8);
    bufp->fullCData(oldp+194,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer[6]),8);
    bufp->fullCData(oldp+195,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer[7]),8);
    bufp->fullBit(oldp+196,((8U == (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__elements))));
    bufp->fullIData(oldp+197,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__loop1),32);
    bufp->fullCData(oldp+198,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__CS),3);
    bufp->fullCData(oldp+199,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__NS),3);
    bufp->fullCData(oldp+200,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__reg_data),8);
    bufp->fullCData(oldp+201,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__reg_data_next),8);
    bufp->fullCData(oldp+202,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__reg_bit_count),3);
    bufp->fullCData(oldp+203,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__reg_bit_count_next),3);
    bufp->fullBit(oldp+204,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__parity_bit));
    bufp->fullBit(oldp+205,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__parity_bit_next));
    bufp->fullBit(oldp+206,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__sampleData));
    bufp->fullSData(oldp+207,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__baud_cnt),9);
    bufp->fullBit(oldp+208,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__baudgen_en));
    bufp->fullBit(oldp+209,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__bit_done));
    bufp->fullBit(oldp+210,((0x1b2U == (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__baud_cnt))));
    bufp->fullBit(oldp+211,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__wbs_ack_f));
    bufp->fullCData(oldp+212,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__sync_wr_ptr_0),3);
    bufp->fullCData(oldp+213,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__sync_wr_ptr_1),3);
    bufp->fullCData(oldp+214,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__sync_wr_ptr),3);
    bufp->fullBit(oldp+215,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__empty_q));
    bufp->fullCData(oldp+216,((7U & ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__sync_wr_ptr) 
                                     - (IData)(1U)))),3);
    bufp->fullCData(oldp+217,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__sync_rd_ptr_0),2);
    bufp->fullCData(oldp+218,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__sync_rd_ptr_1),2);
    bufp->fullCData(oldp+219,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__sync_rd_ptr),2);
    bufp->fullBit(oldp+220,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__full_q));
    bufp->fullCData(oldp+221,(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_master),3);
    bufp->fullCData(oldp+222,(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__next_master),3);
    bufp->fullCData(oldp+223,(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__slave_select),4);
    bufp->fullBit(oldp+224,(vlSelf->soc_tb__DOT__soc_ti_oen));
    bufp->fullBit(oldp+225,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_stb));
    bufp->fullBit(oldp+226,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_we));
    bufp->fullCData(oldp+227,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_mask),4);
    bufp->fullBit(oldp+228,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_cyc));
    bufp->fullBit(oldp+229,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__wbm_ack_i));
    bufp->fullBit(oldp+230,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__ti_ma_mem_if_req_valid));
    bufp->fullBit(oldp+231,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__memif_req_ready));
    bufp->fullBit(oldp+232,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__memif_resp_valid));
    bufp->fullBit(oldp+233,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__ti_ma_mem_if_resp_ready));
    bufp->fullQData(oldp+234,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__ti_ma_mem_if_resp),51);
    bufp->fullIData(oldp+236,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_addr),32);
    bufp->fullIData(oldp+237,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_data),32);
    bufp->fullBit(oldp+238,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__PendingRd));
    bufp->fullBit(oldp+239,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__m_cmd_wr_en));
    __Vtemp_hc961096c__0[0U] = (IData)((((QData)((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_we)) 
                                         << 0x24U) 
                                        | (((QData)((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_data)) 
                                            << 4U) 
                                           | (QData)((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_mask)))));
    __Vtemp_hc961096c__0[1U] = ((vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_addr 
                                 << 5U) | (IData)((
                                                   (((QData)((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_we)) 
                                                     << 0x24U) 
                                                    | (((QData)((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_data)) 
                                                        << 4U) 
                                                       | (QData)((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_mask)))) 
                                                   >> 0x20U)));
    __Vtemp_hc961096c__0[2U] = (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_addr 
                                >> 0x1bU);
    bufp->fullWData(oldp+240,(__Vtemp_hc961096c__0),69);
    bufp->fullBit(oldp+243,((4U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__wr_cnt))));
    bufp->fullBit(oldp+244,((3U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__wr_cnt))));
    bufp->fullBit(oldp+245,((0U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__rd_cnt))));
    bufp->fullBit(oldp+246,((1U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__rd_cnt))));
    bufp->fullBit(oldp+247,((0U != (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__rd_cnt))));
    bufp->fullCData(oldp+248,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__sync_rd_ptr_0),3);
    bufp->fullCData(oldp+249,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__sync_rd_ptr_1),3);
    bufp->fullCData(oldp+250,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__sync_rd_ptr),3);
    bufp->fullCData(oldp+251,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__wr_ptr),3);
    bufp->fullCData(oldp+252,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__grey_wr_ptr),3);
    bufp->fullBit(oldp+253,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__full_q));
    bufp->fullCData(oldp+254,((7U & ((IData)(1U) + (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__wr_ptr)))),3);
    bufp->fullCData(oldp+255,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__wr_cnt),3);
    bufp->fullCData(oldp+256,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__grey_rd_ptr),2);
    bufp->fullCData(oldp+257,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__sync_wr_ptr_0),2);
    bufp->fullCData(oldp+258,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__sync_wr_ptr_1),2);
    bufp->fullCData(oldp+259,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__sync_wr_ptr),2);
    bufp->fullCData(oldp+260,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__rd_ptr),2);
    bufp->fullBit(oldp+261,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__empty_q));
    bufp->fullCData(oldp+262,((3U & ((IData)(1U) + (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__rd_ptr)))),2);
    bufp->fullCData(oldp+263,((3U & ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__sync_wr_ptr) 
                                     - (IData)(1U)))),2);
    bufp->fullCData(oldp+264,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__rd_cnt),2);
    bufp->fullIData(oldp+265,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__memif_resp_data),32);
    bufp->fullCData(oldp+266,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__memif_resp_type),3);
    bufp->fullSData(oldp+267,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__memif_resp_tid),16);
    bufp->fullBit(oldp+268,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_valid));
    bufp->fullSData(oldp+269,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_tid),16);
    bufp->fullBit(oldp+270,(((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_valid) 
                             & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__wbm_ack_i))));
    bufp->fullIData(oldp+271,((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__ti_ma_mem_if_resp)),32);
    bufp->fullCData(oldp+272,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__rff_cdcst),3);
    bufp->fullBit(oldp+273,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_test_din_en));
    bufp->fullCData(oldp+274,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__rff_payload_idx),7);
    bufp->fullBit(oldp+275,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__rff_payload_in_progress));
    bufp->fullBit(oldp+276,((0xaU == (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_current_state))));
    bufp->fullCData(oldp+277,(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_current_state),4);
    bufp->fullCData(oldp+278,(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_pre_state),4);
    bufp->fullBit(oldp+279,((0U == (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_current_state))));
    bufp->fullBit(oldp+280,((1U == (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_current_state))));
    bufp->fullBit(oldp+281,((6U == (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_current_state))));
    bufp->fullBit(oldp+282,((9U == (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_current_state))));
    bufp->fullBit(oldp+283,(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__is_send_mode));
    bufp->fullBit(oldp+284,(((IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__is_send_mode) 
                             | (9U == (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_current_state)))));
    bufp->fullBit(oldp+285,(((IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_current_state) 
                             != (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_pre_state))));
    bufp->fullIData(oldp+286,((IData)((vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_rcv_buf 
                                       >> 2U))),32);
    bufp->fullQData(oldp+287,(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_rcv_buf),34);
    bufp->fullBit(oldp+289,(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_rcv_data_parity));
    bufp->fullBit(oldp+290,(vlSelf->soc_tb__DOT__soc_ei));
    bufp->fullBit(oldp+291,((vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__mtime 
                             >= vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__mtimecmp)));
    bufp->fullBit(oldp+292,((vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__stime 
                             >= vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__stimecmp)));
    bufp->fullBit(oldp+293,(vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__msip));
    bufp->fullBit(oldp+294,(vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__ssip));
    bufp->fullIData(oldp+295,(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_rdata),32);
    bufp->fullQData(oldp+296,(vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__mtime),64);
    bufp->fullQData(oldp+298,(vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__stime),64);
    bufp->fullQData(oldp+300,(vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__mtimecmp),64);
    bufp->fullQData(oldp+302,(vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__stimecmp),64);
    bufp->fullBit(oldp+304,(vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__ack_ff));
    bufp->fullCData(oldp+305,(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__irq_priority[0]),3);
    bufp->fullCData(oldp+306,(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__irq_priority[1]),3);
    bufp->fullBit(oldp+307,(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__gateway_blocking[0]));
    bufp->fullBit(oldp+308,(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__gateway_blocking[1]));
    bufp->fullBit(oldp+309,(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__ip[0]));
    bufp->fullBit(oldp+310,(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__ip[1]));
    bufp->fullBit(oldp+311,(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__enable[0]));
    bufp->fullBit(oldp+312,(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__enable[1]));
    bufp->fullCData(oldp+313,(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__irq_threshold),3);
    bufp->fullCData(oldp+314,(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__irq_response),2);
    bufp->fullBit(oldp+315,(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__ip_restore));
    bufp->fullBit(oldp+316,(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__gateway_restore));
    bufp->fullCData(oldp+317,(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__restore_gateway_id),3);
    bufp->fullIData(oldp+318,(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__i),32);
    bufp->fullCData(oldp+319,(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__prior_irq_id_h),2);
    bufp->fullCData(oldp+320,(((2U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__prior_irq_id_h))
                                ? 1U : 2U)),2);
    bufp->fullCData(oldp+321,(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__next_irq_response),2);
    bufp->fullBit(oldp+322,(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__ack_ff));
    bufp->fullBit(oldp+323,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_tx_o));
    bufp->fullBit(oldp+324,(vlSelf->soc_tb__DOT__soc_top_u__DOT__debug_ringback));
    bufp->fullIData(oldp+325,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_rdata),32);
    bufp->fullBit(oldp+326,(((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__elements) 
                             >= (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__in_watermark))));
    bufp->fullCData(oldp+327,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__in_watermark),3);
    bufp->fullBit(oldp+328,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__in_irq_en));
    bufp->fullBit(oldp+329,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__stop_bit_ctrl));
    bufp->fullBit(oldp+330,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__out_en));
    bufp->fullBit(oldp+331,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__in_en));
    bufp->fullBit(oldp+332,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__ack_ff));
    bufp->fullCData(oldp+333,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__fifo_tx_data),8);
    bufp->fullCData(oldp+334,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__tx_data),8);
    bufp->fullCData(oldp+335,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer
                              [vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__pointer_out]),8);
    bufp->fullCData(oldp+336,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__elements),4);
    bufp->fullCData(oldp+337,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__elements),4);
    bufp->fullBit(oldp+338,((0U != (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__elements))));
    bufp->fullBit(oldp+339,((8U != (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__elements))));
    bufp->fullBit(oldp+340,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__tx_data_ready));
    bufp->fullBit(oldp+341,((0U != (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__elements))));
    bufp->fullCData(oldp+342,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__reg_data),8);
    bufp->fullBit(oldp+343,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__tx_ready));
    bufp->fullBit(oldp+344,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__rx_valid));
    bufp->fullBit(oldp+345,((8U != (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__elements))));
    bufp->fullCData(oldp+346,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__pointer_in),3);
    bufp->fullCData(oldp+347,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__pointer_out),3);
    bufp->fullCData(oldp+348,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer[0]),8);
    bufp->fullCData(oldp+349,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer[1]),8);
    bufp->fullCData(oldp+350,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer[2]),8);
    bufp->fullCData(oldp+351,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer[3]),8);
    bufp->fullCData(oldp+352,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer[4]),8);
    bufp->fullCData(oldp+353,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer[5]),8);
    bufp->fullCData(oldp+354,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer[6]),8);
    bufp->fullCData(oldp+355,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer[7]),8);
    bufp->fullBit(oldp+356,((8U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__elements))));
    bufp->fullIData(oldp+357,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__loop1),32);
    bufp->fullCData(oldp+358,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__CS),3);
    bufp->fullCData(oldp+359,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__NS),3);
    bufp->fullCData(oldp+360,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__reg_data_next),8);
    bufp->fullCData(oldp+361,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__reg_rx_sync),3);
    bufp->fullCData(oldp+362,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__reg_bit_count),3);
    bufp->fullCData(oldp+363,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__reg_bit_count_next),3);
    bufp->fullBit(oldp+364,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__parity_bit));
    bufp->fullBit(oldp+365,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__parity_bit_next));
    bufp->fullBit(oldp+366,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__sampleData));
    bufp->fullSData(oldp+367,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__baud_cnt),9);
    bufp->fullBit(oldp+368,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__baudgen_en));
    bufp->fullBit(oldp+369,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__bit_done));
    bufp->fullBit(oldp+370,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__start_bit));
    bufp->fullBit(oldp+371,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__s_rx_fall));
    bufp->fullBit(oldp+372,((0x1b2U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__baud_cnt))));
    bufp->fullCData(oldp+373,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__pointer_in),3);
    bufp->fullCData(oldp+374,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__pointer_out),3);
    bufp->fullCData(oldp+375,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer[0]),8);
    bufp->fullCData(oldp+376,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer[1]),8);
    bufp->fullCData(oldp+377,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer[2]),8);
    bufp->fullCData(oldp+378,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer[3]),8);
    bufp->fullCData(oldp+379,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer[4]),8);
    bufp->fullCData(oldp+380,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer[5]),8);
    bufp->fullCData(oldp+381,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer[6]),8);
    bufp->fullCData(oldp+382,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer[7]),8);
    bufp->fullBit(oldp+383,((8U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__elements))));
    bufp->fullIData(oldp+384,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__loop1),32);
    bufp->fullCData(oldp+385,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__CS),3);
    bufp->fullCData(oldp+386,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__NS),3);
    bufp->fullCData(oldp+387,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__reg_data),8);
    bufp->fullCData(oldp+388,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__reg_data_next),8);
    bufp->fullCData(oldp+389,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__reg_bit_count),3);
    bufp->fullCData(oldp+390,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__reg_bit_count_next),3);
    bufp->fullBit(oldp+391,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__parity_bit));
    bufp->fullBit(oldp+392,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__parity_bit_next));
    bufp->fullBit(oldp+393,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__sampleData));
    bufp->fullSData(oldp+394,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__baud_cnt),9);
    bufp->fullBit(oldp+395,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__baudgen_en));
    bufp->fullBit(oldp+396,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__bit_done));
    bufp->fullBit(oldp+397,((0x1b2U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__baud_cnt))));
    bufp->fullWData(oldp+398,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__ti_ma_mem_if_req),87);
    bufp->fullCData(oldp+401,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_state_u__DOT__dff_q),2);
    bufp->fullBit(oldp+402,((0U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_state_u__DOT__dff_q))));
    bufp->fullBit(oldp+403,((1U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_state_u__DOT__dff_q))));
    bufp->fullBit(oldp+404,((2U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_state_u__DOT__dff_q))));
    bufp->fullBit(oldp+405,((1U == (7U & (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__ti_ma_mem_if_req[2U] 
                                          >> 0x14U)))));
    bufp->fullBit(oldp+406,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_test_din));
    bufp->fullCData(oldp+407,(((1U & vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[0U])
                                ? 0x46U : ((1U & vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[0U])
                                            ? 0x7fU
                                            : 0x22U))),7);
    bufp->fullBit(oldp+408,((1U & vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[0U])));
    bufp->fullWData(oldp+409,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf),70);
    bufp->fullIData(oldp+412,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__addr),32);
    bufp->fullCData(oldp+413,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__wstrb),4);
    bufp->fullIData(oldp+414,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__wdata),32);
    bufp->fullBit(oldp+415,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__prty));
    bufp->fullBit(oldp+416,((1U & (~ (VL_REDXOR_32(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__addr) 
                                      ^ (VL_REDXOR_4(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__wstrb) 
                                         ^ VL_REDXOR_32(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__wdata)))))));
    bufp->fullBit(oldp+417,((1U & VL_REDXOR_32(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__addr))));
    bufp->fullBit(oldp+418,(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_rcv_data_u__DOT__dff_q));
    bufp->fullIData(oldp+419,((((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain4_rst_r) 
                                << 7U) | (((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain3_rst_r) 
                                           << 6U) | 
                                          (((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain2_rst_r) 
                                            << 5U) 
                                           | (((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain1_rst_r) 
                                               << 4U) 
                                              | (((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain4_clk_en) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain3_clk_en) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain2_clk_en) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain1_clk_en))))))))),32);
    bufp->fullBit(oldp+420,(vlSelf->soc_tb__DOT__soc_top_u__DOT__ti_soc_cyc));
    bufp->fullBit(oldp+421,(vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain2_rst_r));
    bufp->fullBit(oldp+422,(vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain1_rst_r));
    bufp->fullBit(oldp+423,(vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain3_rst_r));
    bufp->fullBit(oldp+424,(vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain1_clk_en));
    bufp->fullBit(oldp+425,(vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain2_clk_en));
    bufp->fullBit(oldp+426,(vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain3_clk_en));
    bufp->fullBit(oldp+427,(vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain4_clk_en));
    bufp->fullBit(oldp+428,(vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain4_rst_r));
    bufp->fullBit(oldp+429,(vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__ack_ff));
    bufp->fullBit(oldp+430,((0U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__rd_cnt))));
    bufp->fullBit(oldp+431,((1U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__rd_cnt))));
    bufp->fullBit(oldp+432,((2U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__wr_cnt))));
    bufp->fullBit(oldp+433,((1U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__wr_cnt))));
    bufp->fullCData(oldp+434,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__grey_rd_ptr),3);
    bufp->fullCData(oldp+435,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__rd_ptr),3);
    bufp->fullCData(oldp+436,((7U & ((IData)(1U) + (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__rd_ptr)))),3);
    bufp->fullCData(oldp+437,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__rd_cnt),3);
    bufp->fullCData(oldp+438,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__wr_ptr),2);
    bufp->fullCData(oldp+439,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__grey_wr_ptr),2);
    bufp->fullCData(oldp+440,((3U & ((IData)(1U) + (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__wr_ptr)))),2);
    bufp->fullCData(oldp+441,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__wr_cnt),2);
    bufp->fullIData(oldp+442,(vlSelf->soc_tb__DOT__soc_top_u__DOT__ti_soc_addr),32);
    bufp->fullIData(oldp+443,(vlSelf->soc_tb__DOT__soc_top_u__DOT__ti_soc_wdata),32);
    bufp->fullCData(oldp+444,(vlSelf->soc_tb__DOT__soc_top_u__DOT__ti_soc_strb),4);
    bufp->fullBit(oldp+445,(vlSelf->soc_tb__DOT__soc_top_u__DOT__ti_soc_we));
    bufp->fullBit(oldp+446,((1U & (IData)((vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__rd_data_c 
                                           >> 0x20U)))));
    bufp->fullIData(oldp+447,((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__rd_data_c)),32);
    bufp->fullQData(oldp+448,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__rd_data_c),33);
    bufp->fullWData(oldp+450,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__rd_data_c),69);
    bufp->fullBit(oldp+453,(vlSelf->soc_tb__DOT__master_ti_i));
    bufp->fullCData(oldp+454,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__next_cdcst),3);
    bufp->fullBit(oldp+455,((0U != (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__rff_cmd_idx))));
    bufp->fullCData(oldp+456,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__rff_cmd_idx),7);
    bufp->fullBit(oldp+457,((1U & (~ (IData)(vlSelf->soc_tb__DOT__master_ti_i)))));
    bufp->fullBit(oldp+458,((1U & (~ (IData)(vlSelf->soc_tb__DOT__master_ti_i)))));
    bufp->fullBit(oldp+459,(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__rff_ti_send_data));
    bufp->fullWData(oldp+460,(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_send_buf),72);
    bufp->fullBit(oldp+463,(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_data_parity));
    bufp->fullBit(oldp+464,((1U & (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_fsm_ctrl_bit))));
    bufp->fullBit(oldp+465,((1U & ((IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_fsm_ctrl_bit) 
                                   >> 5U))));
    bufp->fullBit(oldp+466,((1U & ((IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_fsm_ctrl_bit) 
                                   >> 4U))));
    bufp->fullBit(oldp+467,((1U & ((IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_fsm_ctrl_bit) 
                                   >> 3U))));
    bufp->fullBit(oldp+468,((1U & ((IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_fsm_ctrl_bit) 
                                   >> 2U))));
    bufp->fullBit(oldp+469,((1U & ((IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_fsm_ctrl_bit) 
                                   >> 1U))));
    bufp->fullCData(oldp+470,(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_fsm_ctrl_bit),6);
    bufp->fullCData(oldp+471,(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_ctrl),6);
    bufp->fullCData(oldp+472,(((0x10U & (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_ctrl))
                                ? 0x47U : ((8U & (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_ctrl))
                                            ? 0x23U
                                            : ((4U 
                                                & (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_ctrl))
                                                ? 0x21U
                                                : 0xffU)))),8);
    bufp->fullCData(oldp+473,(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_cycle_counter),8);
    bufp->fullBit(oldp+474,((1U & ((IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_ctrl) 
                                   >> 4U))));
    bufp->fullBit(oldp+475,((1U & ((IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_ctrl) 
                                   >> 3U))));
    bufp->fullBit(oldp+476,((1U & ((IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_ctrl) 
                                   >> 2U))));
    bufp->fullBit(oldp+477,((1U & ((IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_ctrl) 
                                   >> 1U))));
    bufp->fullBit(oldp+478,((1U & (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_ctrl))));
    bufp->fullBit(oldp+479,((1U & ((IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_ctrl) 
                                   >> 5U))));
    bufp->fullBit(oldp+480,((0U == (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_cycle_counter))));
    bufp->fullBit(oldp+481,((1U == (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_cycle_counter))));
    bufp->fullBit(oldp+482,(vlSelf->m1_cyc));
    bufp->fullBit(oldp+483,(vlSelf->m1_stb));
    bufp->fullBit(oldp+484,(vlSelf->m1_we));
    bufp->fullIData(oldp+485,(vlSelf->m1_addr),32);
    bufp->fullIData(oldp+486,(vlSelf->m1_wdata),32);
    bufp->fullIData(oldp+487,(vlSelf->m1_rdata),32);
    bufp->fullCData(oldp+488,(vlSelf->m1_sel),4);
    bufp->fullBit(oldp+489,(vlSelf->m1_ack));
    bufp->fullBit(oldp+490,(vlSelf->m2_cyc));
    bufp->fullBit(oldp+491,(vlSelf->m2_stb));
    bufp->fullBit(oldp+492,(vlSelf->m2_we));
    bufp->fullIData(oldp+493,(vlSelf->m2_addr),32);
    bufp->fullIData(oldp+494,(vlSelf->m2_wdata),32);
    bufp->fullIData(oldp+495,(vlSelf->m2_rdata),32);
    bufp->fullCData(oldp+496,(vlSelf->m2_sel),4);
    bufp->fullBit(oldp+497,(vlSelf->m2_ack));
    bufp->fullBit(oldp+498,(vlSelf->m3_cyc));
    bufp->fullBit(oldp+499,(vlSelf->m3_stb));
    bufp->fullBit(oldp+500,(vlSelf->m3_we));
    bufp->fullIData(oldp+501,(vlSelf->m3_addr),32);
    bufp->fullIData(oldp+502,(vlSelf->m3_wdata),32);
    bufp->fullIData(oldp+503,(vlSelf->m3_rdata),32);
    bufp->fullCData(oldp+504,(vlSelf->m3_sel),4);
    bufp->fullBit(oldp+505,(vlSelf->m3_ack));
    bufp->fullBit(oldp+506,(vlSelf->m4_cyc));
    bufp->fullBit(oldp+507,(vlSelf->m4_stb));
    bufp->fullBit(oldp+508,(vlSelf->m4_we));
    bufp->fullIData(oldp+509,(vlSelf->m4_addr),32);
    bufp->fullIData(oldp+510,(vlSelf->m4_wdata),32);
    bufp->fullIData(oldp+511,(vlSelf->m4_rdata),32);
    bufp->fullCData(oldp+512,(vlSelf->m4_sel),4);
    bufp->fullBit(oldp+513,(vlSelf->m4_ack));
    bufp->fullBit(oldp+514,(vlSelf->testio_clk));
    bufp->fullBit(oldp+515,(vlSelf->clk));
    bufp->fullBit(oldp+516,(vlSelf->rst));
    bufp->fullBit(oldp+517,(vlSelf->clk4));
    bufp->fullBit(oldp+518,(vlSelf->rst4));
    bufp->fullBit(oldp+519,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_rx_i));
    bufp->fullBit(oldp+520,(((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_cyc) 
                             & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__ack_ff))));
    bufp->fullBit(oldp+521,(((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_cyc) 
                             & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__ack_ff))));
    bufp->fullBit(oldp+522,((((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__ack_ff) 
                              & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_cyc)) 
                             & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_stb))));
    bufp->fullBit(oldp+523,(((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_cyc) 
                             & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__ack_ff))));
    bufp->fullBit(oldp+524,(((IData)(vlSelf->clk) & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__clk3_latch))));
    bufp->fullBit(oldp+525,((1U & (~ (IData)(vlSelf->rst)))));
    bufp->fullCData(oldp+526,(((0U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_state_u__DOT__dff_q))
                                ? ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__ti_ma_mem_if_req_valid)
                                    ? 1U : (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_state_u__DOT__dff_q))
                                : ((1U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_state_u__DOT__dff_q))
                                    ? (((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_valid) 
                                        & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__wbm_ack_i))
                                        ? 2U : (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_state_u__DOT__dff_q))
                                    : ((2U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_state_u__DOT__dff_q))
                                        ? ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__ti_ma_mem_if_resp_ready)
                                            ? 0U : (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_state_u__DOT__dff_q))
                                        : 0U)))),2);
    bufp->fullBit(oldp+527,(((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_test_din) 
                             & (~ (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__rff_ti_send_data)))));
    bufp->fullBit(oldp+528,((1U & ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__ack) 
                                   ^ VL_REDXOR_32((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__ti_ma_mem_if_resp))))));
    bufp->fullBit(oldp+529,(((1U == (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__w2m_bridge_ti_u__DOT__wb_state_u__DOT__dff_q)) 
                             & (0U == (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_current_state)))));
    bufp->fullQData(oldp+530,((((QData)((IData)((0x7ffffU 
                                                 & (IData)(
                                                           (vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__dff_mem_if_resp 
                                                            >> 0x20U))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((0xaU 
                                                              == (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_current_state))
                                                              ? (IData)(
                                                                        (vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_rcv_buf 
                                                                         >> 2U))
                                                              : 0xffffffffU))))),51);
    bufp->fullBit(oldp+532,((1U & ((~ (IData)((2U == 
                                               (0x22U 
                                                & (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_ctrl))))) 
                                   | ((1U == (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_cycle_counter))
                                       ? (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_data_parity)
                                       : vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_send_buf[0U])))));
    bufp->fullBit(oldp+533,((((IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_rcv_data_parity_u__DOT__dff_q) 
                              != (1U & (IData)((vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_rcv_buf 
                                                >> 1U)))) 
                             & (~ ((IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_ctrl) 
                                   >> 2U)))));
    if ((0x10U & (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_ctrl))) {
        __Vtemp_h03cdb204__0[0U] = (IData)((1ULL | 
                                            (((QData)((IData)(
                                                              (0xfU 
                                                               & vlSelf->soc_tb__DOT__testio_wb_u__DOT__ti_mem_if_req[1U]))) 
                                              << 0x22U) 
                                             | ((QData)((IData)(
                                                                vlSelf->soc_tb__DOT__testio_wb_u__DOT__ti_mem_if_req[0U])) 
                                                << 2U))));
        __Vtemp_h03cdb204__0[1U] = ((0xffffffc0U & 
                                     (vlSelf->soc_tb__DOT__testio_wb_u__DOT__ti_mem_if_req[1U] 
                                      << 2U)) | (IData)(
                                                        ((1ULL 
                                                          | (((QData)((IData)(
                                                                              (0xfU 
                                                                               & vlSelf->soc_tb__DOT__testio_wb_u__DOT__ti_mem_if_req[1U]))) 
                                                              << 0x22U) 
                                                             | ((QData)((IData)(
                                                                                vlSelf->soc_tb__DOT__testio_wb_u__DOT__ti_mem_if_req[0U])) 
                                                                << 2U))) 
                                                         >> 0x20U)));
        __Vtemp_h03cdb204__0[2U] = (0x40U | (0x3fU 
                                             & ((0x3cU 
                                                 & (vlSelf->soc_tb__DOT__testio_wb_u__DOT__ti_mem_if_req[2U] 
                                                    << 2U)) 
                                                | (vlSelf->soc_tb__DOT__testio_wb_u__DOT__ti_mem_if_req[1U] 
                                                   >> 0x1eU))));
    } else {
        __Vtemp_h03cdb204__0[0U] = 0xffffffffU;
        __Vtemp_h03cdb204__0[1U] = (0x1fU | ((IData)((QData)((IData)(
                                                                     ((vlSelf->soc_tb__DOT__testio_wb_u__DOT__ti_mem_if_req[2U] 
                                                                       << 0x1cU) 
                                                                      | (vlSelf->soc_tb__DOT__testio_wb_u__DOT__ti_mem_if_req[1U] 
                                                                         >> 4U))))) 
                                             << 6U));
        __Vtemp_h03cdb204__0[2U] = (((IData)((QData)((IData)(
                                                             ((vlSelf->soc_tb__DOT__testio_wb_u__DOT__ti_mem_if_req[2U] 
                                                               << 0x1cU) 
                                                              | (vlSelf->soc_tb__DOT__testio_wb_u__DOT__ti_mem_if_req[1U] 
                                                                 >> 4U))))) 
                                     >> 0x1aU) | ((IData)(
                                                          ((QData)((IData)(
                                                                           ((vlSelf->soc_tb__DOT__testio_wb_u__DOT__ti_mem_if_req[2U] 
                                                                             << 0x1cU) 
                                                                            | (vlSelf->soc_tb__DOT__testio_wb_u__DOT__ti_mem_if_req[1U] 
                                                                               >> 4U)))) 
                                                           >> 0x20U)) 
                                                  << 6U));
    }
    bufp->fullWData(oldp+534,(__Vtemp_h03cdb204__0),72);
    bufp->fullBit(oldp+537,(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_rcv_data_parity_u__DOT__dff_q));
    bufp->fullCData(oldp+538,(((0U == (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__w2m_bridge_ti_u__DOT__wb_state_u__DOT__dff_q))
                                ? ((IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__w2m_bridge_ti_u__DOT__wb_valid)
                                    ? 1U : (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__w2m_bridge_ti_u__DOT__wb_state_u__DOT__dff_q))
                                : ((1U == (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__w2m_bridge_ti_u__DOT__wb_state_u__DOT__dff_q))
                                    ? (((IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__w2m_bridge_ti_u__DOT__wb_valid) 
                                        & ((1U == (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__w2m_bridge_ti_u__DOT__wb_state_u__DOT__dff_q)) 
                                           & (0U == (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_current_state))))
                                        ? 2U : (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__w2m_bridge_ti_u__DOT__wb_state_u__DOT__dff_q))
                                    : ((2U == (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__w2m_bridge_ti_u__DOT__wb_state_u__DOT__dff_q))
                                        ? ((IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__w2m_bridge_ti_u__DOT__is_resp_ready)
                                            ? 0U : (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__w2m_bridge_ti_u__DOT__wb_state_u__DOT__dff_q))
                                        : 0U)))),2);
    bufp->fullBit(oldp+539,(((IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__w2m_bridge_ti_u__DOT__wb_valid) 
                             & ((1U == (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__w2m_bridge_ti_u__DOT__wb_state_u__DOT__dff_q)) 
                                & (0U == (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_current_state))))));
    bufp->fullBit(oldp+540,(0U));
    bufp->fullBit(oldp+541,(vlSelf->soc_tb__DOT__soc_top_u__DOT__gpio_cyc));
    bufp->fullBit(oldp+542,(vlSelf->soc_tb__DOT__soc_top_u__DOT__gpio_stb));
    bufp->fullIData(oldp+543,(vlSelf->soc_tb__DOT__soc_top_u__DOT__gpio_addr),32);
    bufp->fullIData(oldp+544,(vlSelf->soc_tb__DOT__soc_top_u__DOT__gpio_wdata),32);
    bufp->fullBit(oldp+545,(vlSelf->soc_tb__DOT__soc_top_u__DOT__gpio_we));
    bufp->fullIData(oldp+546,(vlSelf->soc_tb__DOT__soc_top_u__DOT__gpio_rdata),32);
    bufp->fullBit(oldp+547,(vlSelf->soc_tb__DOT__soc_top_u__DOT__gpio_ack));
    bufp->fullBit(oldp+548,(vlSelf->soc_tb__DOT__soc_top_u__DOT__gpio_irq));
    bufp->fullCData(oldp+549,(0xfU),4);
    bufp->fullIData(oldp+550,(8U),32);
    bufp->fullIData(oldp+551,(3U),32);
    bufp->fullCData(oldp+552,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__in_watermark),3);
    bufp->fullBit(oldp+553,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__in_irq_en));
    bufp->fullBit(oldp+554,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__stop_bit_ctrl));
    bufp->fullBit(oldp+555,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__out_en));
    bufp->fullBit(oldp+556,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__in_en));
    bufp->fullBit(oldp+557,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__ack_ff));
    bufp->fullCData(oldp+558,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__fifo_tx_data),8);
    bufp->fullCData(oldp+559,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__fifo_rx_data),8);
    bufp->fullCData(oldp+560,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__rx_elements),4);
    bufp->fullBit(oldp+561,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__fifo_ready_in));
    bufp->fullBit(oldp+562,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__tx_data_ready));
    bufp->fullIData(oldp+563,(0x1c200U),32);
    bufp->fullBit(oldp+564,(1U));
    bufp->fullIData(oldp+565,(0x1b2U),32);
    bufp->fullCData(oldp+566,(0U),3);
    bufp->fullCData(oldp+567,(1U),3);
    bufp->fullCData(oldp+568,(2U),3);
    bufp->fullCData(oldp+569,(3U),3);
    bufp->fullCData(oldp+570,(4U),3);
    bufp->fullCData(oldp+571,(5U),3);
    bufp->fullIData(oldp+572,(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__write_data),32);
    bufp->fullIData(oldp+573,(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__read_data),32);
    bufp->fullIData(oldp+574,(0x20U),32);
    bufp->fullIData(oldp+575,(4U),32);
    bufp->fullIData(oldp+576,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__wbm_adr_o),32);
    bufp->fullIData(oldp+577,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__wbm_dat_i),32);
    bufp->fullIData(oldp+578,(0x45U),32);
    bufp->fullIData(oldp+579,(1U),32);
    bufp->fullBit(oldp+580,(0U));
    bufp->fullIData(oldp+581,(2U),32);
    bufp->fullIData(oldp+582,(0x21U),32);
    bufp->fullCData(oldp+583,(0U),2);
    bufp->fullCData(oldp+584,(1U),2);
    bufp->fullCData(oldp+585,(2U),2);
    bufp->fullBit(oldp+586,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__clk));
    bufp->fullBit(oldp+587,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__rstn));
    bufp->fullIData(oldp+588,(7U),32);
    bufp->fullCData(oldp+589,(1U),7);
    bufp->fullCData(oldp+590,(0x20U),7);
    bufp->fullCData(oldp+591,(4U),7);
    bufp->fullCData(oldp+592,(0x46U),7);
    bufp->fullBit(oldp+593,(1U));
    bufp->fullSData(oldp+594,(0U),9);
    bufp->fullBit(oldp+595,(vlSelf->soc_tb__DOT__testio_wb_u__DOT__wbm_clk_i));
    bufp->fullBit(oldp+596,(vlSelf->soc_tb__DOT__testio_wb_u__DOT__wbs_clk_i));
    bufp->fullBit(oldp+597,(vlSelf->soc_tb__DOT__testio_wb_u__DOT__wbm_rst_n));
    bufp->fullBit(oldp+598,(vlSelf->soc_tb__DOT__testio_wb_u__DOT__wbs_rst_n));
    bufp->fullBit(oldp+599,(vlSelf->soc_tb__DOT__testio_wb_u__DOT__ti_clk_div));
    bufp->fullBit(oldp+600,(vlSelf->soc_tb__DOT__testio_wb_u__DOT__ti_clk_mux));
    bufp->fullBit(oldp+601,(vlSelf->soc_tb__DOT__testio_wb_u__DOT__ti_clk));
    bufp->fullBit(oldp+602,(vlSelf->soc_tb__DOT__testio_wb_u__DOT__ti_clk_src_sel));
    bufp->fullCData(oldp+603,(vlSelf->soc_tb__DOT__testio_wb_u__DOT__ti_clk_div_ratio),8);
    bufp->fullCData(oldp+604,(vlSelf->soc_tb__DOT__testio_wb_u__DOT__ti_mod_o),2);
    bufp->fullBit(oldp+605,(vlSelf->soc_tb__DOT__testio_wb_u__DOT__wbs_stb_o));
    bufp->fullIData(oldp+606,(vlSelf->soc_tb__DOT__testio_wb_u__DOT__wbs_adr_o),32);
    bufp->fullBit(oldp+607,(vlSelf->soc_tb__DOT__testio_wb_u__DOT__wbs_we_o));
    bufp->fullIData(oldp+608,(vlSelf->soc_tb__DOT__testio_wb_u__DOT__wbs_dat_o),32);
    bufp->fullCData(oldp+609,(vlSelf->soc_tb__DOT__testio_wb_u__DOT__wbs_sel_o),4);
    bufp->fullBit(oldp+610,(vlSelf->soc_tb__DOT__testio_wb_u__DOT__wbs_cyc_o));
    bufp->fullBit(oldp+611,(vlSelf->soc_tb__DOT__testio_wb_u__DOT__wbs_ack_i));
    bufp->fullBit(oldp+612,(vlSelf->soc_tb__DOT__testio_wb_u__DOT__wbs_err_i));
    bufp->fullIData(oldp+613,(vlSelf->soc_tb__DOT__testio_wb_u__DOT__wbs_dat_i),32);
    bufp->fullCData(oldp+614,(0U),4);
    bufp->fullCData(oldp+615,(1U),4);
    bufp->fullCData(oldp+616,(2U),4);
    bufp->fullCData(oldp+617,(3U),4);
    bufp->fullCData(oldp+618,(4U),4);
    bufp->fullCData(oldp+619,(5U),4);
    bufp->fullCData(oldp+620,(6U),4);
    bufp->fullCData(oldp+621,(7U),4);
    bufp->fullCData(oldp+622,(8U),4);
    bufp->fullCData(oldp+623,(9U),4);
    bufp->fullCData(oldp+624,(0xaU),4);
    bufp->fullCData(oldp+625,(0xbU),4);
    bufp->fullIData(oldp+626,(0U),32);
    bufp->fullIData(oldp+627,(0xffffffffU),32);
    bufp->fullCData(oldp+628,(3U),2);
    bufp->fullIData(oldp+629,(0x10U),32);
    bufp->fullIData(oldp+630,(0x47U),32);
    bufp->fullIData(oldp+631,(0x23U),32);
    bufp->fullIData(oldp+632,(0x48U),32);
    bufp->fullIData(oldp+633,(0x22U),32);
    bufp->fullCData(oldp+634,(0x47U),8);
    bufp->fullCData(oldp+635,(0x23U),8);
    bufp->fullCData(oldp+636,(0x21U),8);
    bufp->fullBit(oldp+637,(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__rff_ti_data_parity));
    bufp->fullBit(oldp+638,(vlSelf->soc_tb__DOT__testio_wb_u__DOT__w2m_bridge_ti_u__DOT__mem_if_ready));
    bufp->fullBit(oldp+639,(vlSelf->soc_tb__DOT__testio_wb_u__DOT__w2m_bridge_ti_u__DOT__rff_mem_if_ready));
}
