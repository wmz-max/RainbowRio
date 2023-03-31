// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsoc_tb__Syms.h"


void Vsoc_tb___024root__trace_chg_sub_0(Vsoc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vsoc_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root__trace_chg_top_0\n"); );
    // Init
    Vsoc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsoc_tb___024root*>(voidSelf);
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vsoc_tb___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vsoc_tb___024root__trace_chg_sub_0(Vsoc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<3>/*95:0*/ __Vtemp_hbd0c0501__0;
    VlWide<3>/*95:0*/ __Vtemp_h5e337890__0;
    VlWide<3>/*95:0*/ __Vtemp_hc961096c__0;
    VlWide<3>/*95:0*/ __Vtemp_h03cdb204__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgWData(oldp+0,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__mem[0]),69);
        bufp->chgWData(oldp+3,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__mem[1]),69);
        bufp->chgWData(oldp+6,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__mem[2]),69);
        bufp->chgWData(oldp+9,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__mem[3]),69);
        bufp->chgQData(oldp+12,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__rd_data_q),33);
        bufp->chgBit(oldp+14,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__ack));
        bufp->chgBit(oldp+15,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__ack));
        bufp->chgQData(oldp+16,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_payload),36);
        bufp->chgBit(oldp+18,((1U == (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__w2m_bridge_ti_u__DOT__wb_state_u__DOT__dff_q))));
        bufp->chgBit(oldp+19,((2U == (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__w2m_bridge_ti_u__DOT__wb_state_u__DOT__dff_q))));
        bufp->chgQData(oldp+20,(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__dff_mem_if_resp),51);
        bufp->chgCData(oldp+22,(vlSelf->soc_tb__DOT__testio_wb_u__DOT__w2m_bridge_ti_u__DOT__wb_state_u__DOT__dff_q),2);
        bufp->chgBit(oldp+23,((0U == (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__w2m_bridge_ti_u__DOT__wb_state_u__DOT__dff_q))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+24,(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_cyc));
        bufp->chgBit(oldp+25,(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_stb));
        bufp->chgIData(oldp+26,(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr),32);
        bufp->chgIData(oldp+27,(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_wdata),32);
        bufp->chgBit(oldp+28,(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_we));
        bufp->chgIData(oldp+29,(vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__rdata),32);
        bufp->chgBit(oldp+30,(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_cyc));
        bufp->chgBit(oldp+31,(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_stb));
        bufp->chgIData(oldp+32,(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_addr),32);
        bufp->chgIData(oldp+33,(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_wdata),32);
        bufp->chgBit(oldp+34,(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_we));
        bufp->chgIData(oldp+35,(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_rdata),32);
        bufp->chgBit(oldp+36,(vlSelf->soc_tb__DOT__soc_top_u__DOT__ti_soc_ack));
        bufp->chgBit(oldp+37,(vlSelf->soc_tb__DOT__soc_top_u__DOT__domain2_clk));
        bufp->chgBit(oldp+38,(vlSelf->soc_tb__DOT__soc_top_u__DOT__domain1_clk));
        bufp->chgQData(oldp+39,(vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__next_mtime),64);
        bufp->chgQData(oldp+41,(vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__next_stime),64);
        bufp->chgBit(oldp+43,(vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__next_msip));
        bufp->chgBit(oldp+44,(vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__next_ssip));
        bufp->chgQData(oldp+45,(vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__next_mtimecmp),64);
        bufp->chgQData(oldp+47,(vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__next_stimecmp),64);
        bufp->chgBit(oldp+49,(vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__next_ack_ff));
        bufp->chgBit(oldp+50,(vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__clk1_latch));
        bufp->chgBit(oldp+51,(vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__clk2_latch));
        bufp->chgBit(oldp+52,(vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__clk3_latch));
        bufp->chgBit(oldp+53,(vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__clk4_latch));
        bufp->chgBit(oldp+54,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__s_resp_wr_en));
        bufp->chgQData(oldp+55,((QData)((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_rdata))),33);
        bufp->chgBit(oldp+57,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__fifo_rx_ready));
        bufp->chgCData(oldp+58,(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_sel),4);
        bufp->chgCData(oldp+59,(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__wbm_plic_sel_o),4);
        bufp->chgBit(oldp+60,(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_ack));
        bufp->chgWData(oldp+61,(vlSelf->soc_tb__DOT__testio_wb_u__DOT__ti_mem_if_req),87);
        bufp->chgBit(oldp+64,((1U == (7U & (vlSelf->soc_tb__DOT__testio_wb_u__DOT__ti_mem_if_req[2U] 
                                            >> 0x14U)))));
        bufp->chgCData(oldp+65,((0xfU & vlSelf->soc_tb__DOT__testio_wb_u__DOT__ti_mem_if_req[1U])),4);
        bufp->chgIData(oldp+66,(((vlSelf->soc_tb__DOT__testio_wb_u__DOT__ti_mem_if_req[2U] 
                                  << 0x1cU) | (vlSelf->soc_tb__DOT__testio_wb_u__DOT__ti_mem_if_req[1U] 
                                               >> 4U))),32);
        bufp->chgIData(oldp+67,(vlSelf->soc_tb__DOT__testio_wb_u__DOT__ti_mem_if_req[0U]),32);
        bufp->chgCData(oldp+68,(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_next_state),4);
        bufp->chgCData(oldp+69,(((1U == (7U & (vlSelf->soc_tb__DOT__testio_wb_u__DOT__ti_mem_if_req[2U] 
                                               >> 0x14U)))
                                  ? 1U : 6U)),4);
        __Vtemp_hbd0c0501__0[0U] = (IData)((1ULL | 
                                            (((QData)((IData)(
                                                              (0xfU 
                                                               & vlSelf->soc_tb__DOT__testio_wb_u__DOT__ti_mem_if_req[1U]))) 
                                              << 0x22U) 
                                             | ((QData)((IData)(
                                                                vlSelf->soc_tb__DOT__testio_wb_u__DOT__ti_mem_if_req[0U])) 
                                                << 2U))));
        __Vtemp_hbd0c0501__0[1U] = ((0xffffffc0U & 
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
        __Vtemp_hbd0c0501__0[2U] = (0x40U | (0x3fU 
                                             & ((0x3cU 
                                                 & (vlSelf->soc_tb__DOT__testio_wb_u__DOT__ti_mem_if_req[2U] 
                                                    << 2U)) 
                                                | (vlSelf->soc_tb__DOT__testio_wb_u__DOT__ti_mem_if_req[1U] 
                                                   >> 0x1eU))));
        bufp->chgWData(oldp+70,(__Vtemp_hbd0c0501__0),72);
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
        bufp->chgWData(oldp+73,(__Vtemp_h5e337890__0),72);
        bufp->chgBit(oldp+76,(vlSelf->soc_tb__DOT__testio_wb_u__DOT__w2m_bridge_ti_u__DOT__wb_valid));
        bufp->chgBit(oldp+77,(vlSelf->soc_tb__DOT__testio_wb_u__DOT__w2m_bridge_ti_u__DOT__is_resp_ready));
        bufp->chgBit(oldp+78,(vlSelf->soc_tb__DOT__uart_u__DOT__fifo_rx_ready));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+79,(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__rff_ti_data_oen));
        bufp->chgBit(oldp+80,(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_data_oen));
        bufp->chgIData(oldp+81,(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__sv2v_autoblock_1__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+82,(((IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__elements) 
                               >= (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__in_watermark))));
        bufp->chgBit(oldp+83,(vlSelf->soc_tb__DOT__soc_uart_rx));
        bufp->chgCData(oldp+84,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__buffer
                                [vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__pointer_out]),8);
        bufp->chgCData(oldp+85,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__elements),4);
        bufp->chgBit(oldp+86,((0U != (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__elements))));
        bufp->chgCData(oldp+87,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__reg_data),8);
        bufp->chgBit(oldp+88,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__rx_valid));
        bufp->chgBit(oldp+89,((8U != (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__elements))));
        bufp->chgBit(oldp+90,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__tx_ready));
        bufp->chgCData(oldp+91,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__pointer_in),3);
        bufp->chgCData(oldp+92,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__pointer_out),3);
        bufp->chgCData(oldp+93,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__buffer[0]),8);
        bufp->chgCData(oldp+94,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__buffer[1]),8);
        bufp->chgCData(oldp+95,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__buffer[2]),8);
        bufp->chgCData(oldp+96,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__buffer[3]),8);
        bufp->chgCData(oldp+97,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__buffer[4]),8);
        bufp->chgCData(oldp+98,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__buffer[5]),8);
        bufp->chgCData(oldp+99,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__buffer[6]),8);
        bufp->chgCData(oldp+100,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__buffer[7]),8);
        bufp->chgBit(oldp+101,((8U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__elements))));
        bufp->chgIData(oldp+102,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__loop1),32);
        bufp->chgCData(oldp+103,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__CS),3);
        bufp->chgCData(oldp+104,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__NS),3);
        bufp->chgCData(oldp+105,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__reg_data_next),8);
        bufp->chgCData(oldp+106,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__reg_rx_sync),3);
        bufp->chgCData(oldp+107,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__reg_bit_count),3);
        bufp->chgCData(oldp+108,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__reg_bit_count_next),3);
        bufp->chgBit(oldp+109,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__parity_bit));
        bufp->chgBit(oldp+110,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__parity_bit_next));
        bufp->chgBit(oldp+111,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__sampleData));
        bufp->chgSData(oldp+112,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__baud_cnt),9);
        bufp->chgBit(oldp+113,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__baudgen_en));
        bufp->chgBit(oldp+114,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__bit_done));
        bufp->chgBit(oldp+115,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__start_bit));
        bufp->chgBit(oldp+116,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__s_rx_fall));
        bufp->chgBit(oldp+117,((0x1b2U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__baud_cnt))));
        bufp->chgCData(oldp+118,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__CS),3);
        bufp->chgCData(oldp+119,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__NS),3);
        bufp->chgCData(oldp+120,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__reg_data),8);
        bufp->chgCData(oldp+121,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__reg_data_next),8);
        bufp->chgCData(oldp+122,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__reg_bit_count),3);
        bufp->chgCData(oldp+123,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__reg_bit_count_next),3);
        bufp->chgBit(oldp+124,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__parity_bit));
        bufp->chgBit(oldp+125,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__parity_bit_next));
        bufp->chgBit(oldp+126,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__sampleData));
        bufp->chgSData(oldp+127,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__baud_cnt),9);
        bufp->chgBit(oldp+128,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__baudgen_en));
        bufp->chgBit(oldp+129,(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__bit_done));
        bufp->chgBit(oldp+130,((0x1b2U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__baud_cnt))));
        bufp->chgWData(oldp+131,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__rd_data_q),69);
        bufp->chgQData(oldp+134,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__mem[0]),33);
        bufp->chgQData(oldp+136,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__mem[1]),33);
        bufp->chgBit(oldp+138,(vlSelf->soc_tb__DOT__uart_u__DOT__debug_ringback));
        bufp->chgCData(oldp+139,(vlSelf->soc_tb__DOT__uart_u__DOT__in_watermark),3);
        bufp->chgBit(oldp+140,(vlSelf->soc_tb__DOT__uart_u__DOT__in_irq_en));
        bufp->chgBit(oldp+141,(vlSelf->soc_tb__DOT__uart_u__DOT__stop_bit_ctrl));
        bufp->chgBit(oldp+142,(vlSelf->soc_tb__DOT__uart_u__DOT__out_en));
        bufp->chgBit(oldp+143,(vlSelf->soc_tb__DOT__uart_u__DOT__in_en));
        bufp->chgBit(oldp+144,(vlSelf->soc_tb__DOT__uart_u__DOT__ack_ff));
        bufp->chgCData(oldp+145,(vlSelf->soc_tb__DOT__uart_u__DOT__fifo_tx_data),8);
        bufp->chgCData(oldp+146,(vlSelf->soc_tb__DOT__uart_u__DOT__tx_data),8);
        bufp->chgCData(oldp+147,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer
                                 [vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__pointer_out]),8);
        bufp->chgCData(oldp+148,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__elements),4);
        bufp->chgCData(oldp+149,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__elements),4);
        bufp->chgBit(oldp+150,((0U != (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__elements))));
        bufp->chgBit(oldp+151,((8U != (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__elements))));
        bufp->chgBit(oldp+152,(vlSelf->soc_tb__DOT__uart_u__DOT__tx_data_ready));
        bufp->chgBit(oldp+153,((0U != (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__elements))));
        bufp->chgCData(oldp+154,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__reg_data),8);
        bufp->chgBit(oldp+155,(vlSelf->soc_tb__DOT__uart_u__DOT__tx_ready));
        bufp->chgBit(oldp+156,(vlSelf->soc_tb__DOT__uart_u__DOT__rx_valid));
        bufp->chgBit(oldp+157,((8U != (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__elements))));
        bufp->chgCData(oldp+158,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__pointer_in),3);
        bufp->chgCData(oldp+159,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__pointer_out),3);
        bufp->chgCData(oldp+160,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer[0]),8);
        bufp->chgCData(oldp+161,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer[1]),8);
        bufp->chgCData(oldp+162,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer[2]),8);
        bufp->chgCData(oldp+163,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer[3]),8);
        bufp->chgCData(oldp+164,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer[4]),8);
        bufp->chgCData(oldp+165,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer[5]),8);
        bufp->chgCData(oldp+166,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer[6]),8);
        bufp->chgCData(oldp+167,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer[7]),8);
        bufp->chgBit(oldp+168,((8U == (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__elements))));
        bufp->chgIData(oldp+169,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__loop1),32);
        bufp->chgCData(oldp+170,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__CS),3);
        bufp->chgCData(oldp+171,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__NS),3);
        bufp->chgCData(oldp+172,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__reg_data_next),8);
        bufp->chgCData(oldp+173,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__reg_rx_sync),3);
        bufp->chgCData(oldp+174,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__reg_bit_count),3);
        bufp->chgCData(oldp+175,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__reg_bit_count_next),3);
        bufp->chgBit(oldp+176,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__parity_bit));
        bufp->chgBit(oldp+177,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__parity_bit_next));
        bufp->chgBit(oldp+178,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__sampleData));
        bufp->chgSData(oldp+179,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__baud_cnt),9);
        bufp->chgBit(oldp+180,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__baudgen_en));
        bufp->chgBit(oldp+181,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__bit_done));
        bufp->chgBit(oldp+182,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__start_bit));
        bufp->chgBit(oldp+183,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__s_rx_fall));
        bufp->chgBit(oldp+184,((0x1b2U == (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__baud_cnt))));
        bufp->chgCData(oldp+185,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__pointer_in),3);
        bufp->chgCData(oldp+186,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__pointer_out),3);
        bufp->chgCData(oldp+187,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer[0]),8);
        bufp->chgCData(oldp+188,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer[1]),8);
        bufp->chgCData(oldp+189,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer[2]),8);
        bufp->chgCData(oldp+190,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer[3]),8);
        bufp->chgCData(oldp+191,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer[4]),8);
        bufp->chgCData(oldp+192,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer[5]),8);
        bufp->chgCData(oldp+193,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer[6]),8);
        bufp->chgCData(oldp+194,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer[7]),8);
        bufp->chgBit(oldp+195,((8U == (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__elements))));
        bufp->chgIData(oldp+196,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__loop1),32);
        bufp->chgCData(oldp+197,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__CS),3);
        bufp->chgCData(oldp+198,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__NS),3);
        bufp->chgCData(oldp+199,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__reg_data),8);
        bufp->chgCData(oldp+200,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__reg_data_next),8);
        bufp->chgCData(oldp+201,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__reg_bit_count),3);
        bufp->chgCData(oldp+202,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__reg_bit_count_next),3);
        bufp->chgBit(oldp+203,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__parity_bit));
        bufp->chgBit(oldp+204,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__parity_bit_next));
        bufp->chgBit(oldp+205,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__sampleData));
        bufp->chgSData(oldp+206,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__baud_cnt),9);
        bufp->chgBit(oldp+207,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__baudgen_en));
        bufp->chgBit(oldp+208,(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__bit_done));
        bufp->chgBit(oldp+209,((0x1b2U == (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__baud_cnt))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgBit(oldp+210,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__wbs_ack_f));
        bufp->chgCData(oldp+211,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__sync_wr_ptr_0),3);
        bufp->chgCData(oldp+212,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__sync_wr_ptr_1),3);
        bufp->chgCData(oldp+213,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__sync_wr_ptr),3);
        bufp->chgBit(oldp+214,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__empty_q));
        bufp->chgCData(oldp+215,((7U & ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__sync_wr_ptr) 
                                        - (IData)(1U)))),3);
        bufp->chgCData(oldp+216,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__sync_rd_ptr_0),2);
        bufp->chgCData(oldp+217,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__sync_rd_ptr_1),2);
        bufp->chgCData(oldp+218,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__sync_rd_ptr),2);
        bufp->chgBit(oldp+219,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__full_q));
        bufp->chgCData(oldp+220,(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_master),3);
        bufp->chgCData(oldp+221,(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__next_master),3);
        bufp->chgCData(oldp+222,(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__slave_select),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgBit(oldp+223,(vlSelf->soc_tb__DOT__soc_ti_oen));
        bufp->chgBit(oldp+224,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_stb));
        bufp->chgBit(oldp+225,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_we));
        bufp->chgCData(oldp+226,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_mask),4);
        bufp->chgBit(oldp+227,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_cyc));
        bufp->chgBit(oldp+228,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__wbm_ack_i));
        bufp->chgBit(oldp+229,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__ti_ma_mem_if_req_valid));
        bufp->chgBit(oldp+230,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__memif_req_ready));
        bufp->chgBit(oldp+231,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__memif_resp_valid));
        bufp->chgBit(oldp+232,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__ti_ma_mem_if_resp_ready));
        bufp->chgQData(oldp+233,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__ti_ma_mem_if_resp),51);
        bufp->chgIData(oldp+235,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_addr),32);
        bufp->chgIData(oldp+236,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_data),32);
        bufp->chgBit(oldp+237,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__PendingRd));
        bufp->chgBit(oldp+238,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__m_cmd_wr_en));
        __Vtemp_hc961096c__0[0U] = (IData)((((QData)((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_we)) 
                                             << 0x24U) 
                                            | (((QData)((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_data)) 
                                                << 4U) 
                                               | (QData)((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_mask)))));
        __Vtemp_hc961096c__0[1U] = ((vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_addr 
                                     << 5U) | (IData)(
                                                      ((((QData)((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_we)) 
                                                         << 0x24U) 
                                                        | (((QData)((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_data)) 
                                                            << 4U) 
                                                           | (QData)((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_mask)))) 
                                                       >> 0x20U)));
        __Vtemp_hc961096c__0[2U] = (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_addr 
                                    >> 0x1bU);
        bufp->chgWData(oldp+239,(__Vtemp_hc961096c__0),69);
        bufp->chgBit(oldp+242,((4U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__wr_cnt))));
        bufp->chgBit(oldp+243,((3U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__wr_cnt))));
        bufp->chgBit(oldp+244,((0U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__rd_cnt))));
        bufp->chgBit(oldp+245,((1U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__rd_cnt))));
        bufp->chgBit(oldp+246,((0U != (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__rd_cnt))));
        bufp->chgCData(oldp+247,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__sync_rd_ptr_0),3);
        bufp->chgCData(oldp+248,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__sync_rd_ptr_1),3);
        bufp->chgCData(oldp+249,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__sync_rd_ptr),3);
        bufp->chgCData(oldp+250,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__wr_ptr),3);
        bufp->chgCData(oldp+251,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__grey_wr_ptr),3);
        bufp->chgBit(oldp+252,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__full_q));
        bufp->chgCData(oldp+253,((7U & ((IData)(1U) 
                                        + (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__wr_ptr)))),3);
        bufp->chgCData(oldp+254,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__wr_cnt),3);
        bufp->chgCData(oldp+255,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__grey_rd_ptr),2);
        bufp->chgCData(oldp+256,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__sync_wr_ptr_0),2);
        bufp->chgCData(oldp+257,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__sync_wr_ptr_1),2);
        bufp->chgCData(oldp+258,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__sync_wr_ptr),2);
        bufp->chgCData(oldp+259,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__rd_ptr),2);
        bufp->chgBit(oldp+260,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__empty_q));
        bufp->chgCData(oldp+261,((3U & ((IData)(1U) 
                                        + (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__rd_ptr)))),2);
        bufp->chgCData(oldp+262,((3U & ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__sync_wr_ptr) 
                                        - (IData)(1U)))),2);
        bufp->chgCData(oldp+263,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__rd_cnt),2);
        bufp->chgIData(oldp+264,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__memif_resp_data),32);
        bufp->chgCData(oldp+265,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__memif_resp_type),3);
        bufp->chgSData(oldp+266,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__memif_resp_tid),16);
        bufp->chgBit(oldp+267,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_valid));
        bufp->chgSData(oldp+268,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_tid),16);
        bufp->chgBit(oldp+269,(((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_valid) 
                                & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__wbm_ack_i))));
        bufp->chgIData(oldp+270,((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__ti_ma_mem_if_resp)),32);
        bufp->chgCData(oldp+271,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__rff_cdcst),3);
        bufp->chgBit(oldp+272,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_test_din_en));
        bufp->chgCData(oldp+273,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__rff_payload_idx),7);
        bufp->chgBit(oldp+274,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__rff_payload_in_progress));
        bufp->chgBit(oldp+275,((0xaU == (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_current_state))));
        bufp->chgCData(oldp+276,(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_current_state),4);
        bufp->chgCData(oldp+277,(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_pre_state),4);
        bufp->chgBit(oldp+278,((0U == (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_current_state))));
        bufp->chgBit(oldp+279,((1U == (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_current_state))));
        bufp->chgBit(oldp+280,((6U == (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_current_state))));
        bufp->chgBit(oldp+281,((9U == (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_current_state))));
        bufp->chgBit(oldp+282,(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__is_send_mode));
        bufp->chgBit(oldp+283,(((IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__is_send_mode) 
                                | (9U == (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_current_state)))));
        bufp->chgBit(oldp+284,(((IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_current_state) 
                                != (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_pre_state))));
        bufp->chgIData(oldp+285,((IData)((vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_rcv_buf 
                                          >> 2U))),32);
        bufp->chgQData(oldp+286,(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_rcv_buf),34);
        bufp->chgBit(oldp+288,(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_rcv_data_parity));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[7U])) {
        bufp->chgBit(oldp+289,(vlSelf->soc_tb__DOT__soc_ei));
        bufp->chgBit(oldp+290,((vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__mtime 
                                >= vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__mtimecmp)));
        bufp->chgBit(oldp+291,((vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__stime 
                                >= vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__stimecmp)));
        bufp->chgBit(oldp+292,(vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__msip));
        bufp->chgBit(oldp+293,(vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__ssip));
        bufp->chgIData(oldp+294,(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_rdata),32);
        bufp->chgQData(oldp+295,(vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__mtime),64);
        bufp->chgQData(oldp+297,(vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__stime),64);
        bufp->chgQData(oldp+299,(vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__mtimecmp),64);
        bufp->chgQData(oldp+301,(vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__stimecmp),64);
        bufp->chgBit(oldp+303,(vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__ack_ff));
        bufp->chgCData(oldp+304,(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__irq_priority[0]),3);
        bufp->chgCData(oldp+305,(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__irq_priority[1]),3);
        bufp->chgBit(oldp+306,(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__gateway_blocking[0]));
        bufp->chgBit(oldp+307,(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__gateway_blocking[1]));
        bufp->chgBit(oldp+308,(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__ip[0]));
        bufp->chgBit(oldp+309,(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__ip[1]));
        bufp->chgBit(oldp+310,(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__enable[0]));
        bufp->chgBit(oldp+311,(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__enable[1]));
        bufp->chgCData(oldp+312,(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__irq_threshold),3);
        bufp->chgCData(oldp+313,(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__irq_response),2);
        bufp->chgBit(oldp+314,(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__ip_restore));
        bufp->chgBit(oldp+315,(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__gateway_restore));
        bufp->chgCData(oldp+316,(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__restore_gateway_id),3);
        bufp->chgIData(oldp+317,(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__i),32);
        bufp->chgCData(oldp+318,(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__prior_irq_id_h),2);
        bufp->chgCData(oldp+319,(((2U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__prior_irq_id_h))
                                   ? 1U : 2U)),2);
        bufp->chgCData(oldp+320,(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__next_irq_response),2);
        bufp->chgBit(oldp+321,(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__ack_ff));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[8U])) {
        bufp->chgBit(oldp+322,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_tx_o));
        bufp->chgBit(oldp+323,(vlSelf->soc_tb__DOT__soc_top_u__DOT__debug_ringback));
        bufp->chgIData(oldp+324,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_rdata),32);
        bufp->chgBit(oldp+325,(((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__elements) 
                                >= (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__in_watermark))));
        bufp->chgCData(oldp+326,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__in_watermark),3);
        bufp->chgBit(oldp+327,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__in_irq_en));
        bufp->chgBit(oldp+328,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__stop_bit_ctrl));
        bufp->chgBit(oldp+329,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__out_en));
        bufp->chgBit(oldp+330,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__in_en));
        bufp->chgBit(oldp+331,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__ack_ff));
        bufp->chgCData(oldp+332,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__fifo_tx_data),8);
        bufp->chgCData(oldp+333,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__tx_data),8);
        bufp->chgCData(oldp+334,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer
                                 [vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__pointer_out]),8);
        bufp->chgCData(oldp+335,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__elements),4);
        bufp->chgCData(oldp+336,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__elements),4);
        bufp->chgBit(oldp+337,((0U != (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__elements))));
        bufp->chgBit(oldp+338,((8U != (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__elements))));
        bufp->chgBit(oldp+339,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__tx_data_ready));
        bufp->chgBit(oldp+340,((0U != (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__elements))));
        bufp->chgCData(oldp+341,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__reg_data),8);
        bufp->chgBit(oldp+342,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__tx_ready));
        bufp->chgBit(oldp+343,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__rx_valid));
        bufp->chgBit(oldp+344,((8U != (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__elements))));
        bufp->chgCData(oldp+345,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__pointer_in),3);
        bufp->chgCData(oldp+346,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__pointer_out),3);
        bufp->chgCData(oldp+347,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer[0]),8);
        bufp->chgCData(oldp+348,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer[1]),8);
        bufp->chgCData(oldp+349,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer[2]),8);
        bufp->chgCData(oldp+350,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer[3]),8);
        bufp->chgCData(oldp+351,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer[4]),8);
        bufp->chgCData(oldp+352,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer[5]),8);
        bufp->chgCData(oldp+353,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer[6]),8);
        bufp->chgCData(oldp+354,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer[7]),8);
        bufp->chgBit(oldp+355,((8U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__elements))));
        bufp->chgIData(oldp+356,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__loop1),32);
        bufp->chgCData(oldp+357,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__CS),3);
        bufp->chgCData(oldp+358,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__NS),3);
        bufp->chgCData(oldp+359,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__reg_data_next),8);
        bufp->chgCData(oldp+360,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__reg_rx_sync),3);
        bufp->chgCData(oldp+361,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__reg_bit_count),3);
        bufp->chgCData(oldp+362,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__reg_bit_count_next),3);
        bufp->chgBit(oldp+363,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__parity_bit));
        bufp->chgBit(oldp+364,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__parity_bit_next));
        bufp->chgBit(oldp+365,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__sampleData));
        bufp->chgSData(oldp+366,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__baud_cnt),9);
        bufp->chgBit(oldp+367,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__baudgen_en));
        bufp->chgBit(oldp+368,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__bit_done));
        bufp->chgBit(oldp+369,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__start_bit));
        bufp->chgBit(oldp+370,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__s_rx_fall));
        bufp->chgBit(oldp+371,((0x1b2U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__baud_cnt))));
        bufp->chgCData(oldp+372,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__pointer_in),3);
        bufp->chgCData(oldp+373,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__pointer_out),3);
        bufp->chgCData(oldp+374,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer[0]),8);
        bufp->chgCData(oldp+375,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer[1]),8);
        bufp->chgCData(oldp+376,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer[2]),8);
        bufp->chgCData(oldp+377,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer[3]),8);
        bufp->chgCData(oldp+378,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer[4]),8);
        bufp->chgCData(oldp+379,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer[5]),8);
        bufp->chgCData(oldp+380,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer[6]),8);
        bufp->chgCData(oldp+381,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer[7]),8);
        bufp->chgBit(oldp+382,((8U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__elements))));
        bufp->chgIData(oldp+383,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__loop1),32);
        bufp->chgCData(oldp+384,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__CS),3);
        bufp->chgCData(oldp+385,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__NS),3);
        bufp->chgCData(oldp+386,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__reg_data),8);
        bufp->chgCData(oldp+387,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__reg_data_next),8);
        bufp->chgCData(oldp+388,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__reg_bit_count),3);
        bufp->chgCData(oldp+389,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__reg_bit_count_next),3);
        bufp->chgBit(oldp+390,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__parity_bit));
        bufp->chgBit(oldp+391,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__parity_bit_next));
        bufp->chgBit(oldp+392,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__sampleData));
        bufp->chgSData(oldp+393,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__baud_cnt),9);
        bufp->chgBit(oldp+394,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__baudgen_en));
        bufp->chgBit(oldp+395,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__bit_done));
        bufp->chgBit(oldp+396,((0x1b2U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__baud_cnt))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[9U])) {
        bufp->chgWData(oldp+397,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__ti_ma_mem_if_req),87);
        bufp->chgCData(oldp+400,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_state_u__DOT__dff_q),2);
        bufp->chgBit(oldp+401,((0U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_state_u__DOT__dff_q))));
        bufp->chgBit(oldp+402,((1U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_state_u__DOT__dff_q))));
        bufp->chgBit(oldp+403,((2U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_state_u__DOT__dff_q))));
        bufp->chgBit(oldp+404,((1U == (7U & (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__ti_ma_mem_if_req[2U] 
                                             >> 0x14U)))));
        bufp->chgBit(oldp+405,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_test_din));
        bufp->chgCData(oldp+406,(((1U & vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[0U])
                                   ? 0x46U : ((1U & 
                                               vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[0U])
                                               ? 0x7fU
                                               : 0x22U))),7);
        bufp->chgBit(oldp+407,((1U & vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[0U])));
        bufp->chgWData(oldp+408,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf),70);
        bufp->chgIData(oldp+411,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__addr),32);
        bufp->chgCData(oldp+412,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__wstrb),4);
        bufp->chgIData(oldp+413,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__wdata),32);
        bufp->chgBit(oldp+414,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__prty));
        bufp->chgBit(oldp+415,((1U & (~ (VL_REDXOR_32(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__addr) 
                                         ^ (VL_REDXOR_4(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__wstrb) 
                                            ^ VL_REDXOR_32(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__wdata)))))));
        bufp->chgBit(oldp+416,((1U & VL_REDXOR_32(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__addr))));
        bufp->chgBit(oldp+417,(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_rcv_data_u__DOT__dff_q));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xaU])) {
        bufp->chgIData(oldp+418,((((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain4_rst_r) 
                                   << 7U) | (((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain3_rst_r) 
                                              << 6U) 
                                             | (((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain2_rst_r) 
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
        bufp->chgBit(oldp+419,(vlSelf->soc_tb__DOT__soc_top_u__DOT__ti_soc_cyc));
        bufp->chgBit(oldp+420,(vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain2_rst_r));
        bufp->chgBit(oldp+421,(vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain1_rst_r));
        bufp->chgBit(oldp+422,(vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain3_rst_r));
        bufp->chgBit(oldp+423,(vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain1_clk_en));
        bufp->chgBit(oldp+424,(vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain2_clk_en));
        bufp->chgBit(oldp+425,(vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain3_clk_en));
        bufp->chgBit(oldp+426,(vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain4_clk_en));
        bufp->chgBit(oldp+427,(vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain4_rst_r));
        bufp->chgBit(oldp+428,(vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__ack_ff));
        bufp->chgBit(oldp+429,((0U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__rd_cnt))));
        bufp->chgBit(oldp+430,((1U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__rd_cnt))));
        bufp->chgBit(oldp+431,((2U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__wr_cnt))));
        bufp->chgBit(oldp+432,((1U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__wr_cnt))));
        bufp->chgCData(oldp+433,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__grey_rd_ptr),3);
        bufp->chgCData(oldp+434,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__rd_ptr),3);
        bufp->chgCData(oldp+435,((7U & ((IData)(1U) 
                                        + (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__rd_ptr)))),3);
        bufp->chgCData(oldp+436,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__rd_cnt),3);
        bufp->chgCData(oldp+437,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__wr_ptr),2);
        bufp->chgCData(oldp+438,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__grey_wr_ptr),2);
        bufp->chgCData(oldp+439,((3U & ((IData)(1U) 
                                        + (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__wr_ptr)))),2);
        bufp->chgCData(oldp+440,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__wr_cnt),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xbU])) {
        bufp->chgIData(oldp+441,(vlSelf->soc_tb__DOT__soc_top_u__DOT__ti_soc_addr),32);
        bufp->chgIData(oldp+442,(vlSelf->soc_tb__DOT__soc_top_u__DOT__ti_soc_wdata),32);
        bufp->chgCData(oldp+443,(vlSelf->soc_tb__DOT__soc_top_u__DOT__ti_soc_strb),4);
        bufp->chgBit(oldp+444,(vlSelf->soc_tb__DOT__soc_top_u__DOT__ti_soc_we));
        bufp->chgBit(oldp+445,((1U & (IData)((vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__rd_data_c 
                                              >> 0x20U)))));
        bufp->chgIData(oldp+446,((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__rd_data_c)),32);
        bufp->chgQData(oldp+447,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__rd_data_c),33);
        bufp->chgWData(oldp+449,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__rd_data_c),69);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xcU])) {
        bufp->chgBit(oldp+452,(vlSelf->soc_tb__DOT__master_ti_i));
        bufp->chgCData(oldp+453,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__next_cdcst),3);
        bufp->chgBit(oldp+454,((0U != (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__rff_cmd_idx))));
        bufp->chgCData(oldp+455,(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__rff_cmd_idx),7);
        bufp->chgBit(oldp+456,((1U & (~ (IData)(vlSelf->soc_tb__DOT__master_ti_i)))));
        bufp->chgBit(oldp+457,((1U & (~ (IData)(vlSelf->soc_tb__DOT__master_ti_i)))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xdU])) {
        bufp->chgBit(oldp+458,(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__rff_ti_send_data));
        bufp->chgWData(oldp+459,(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_send_buf),72);
        bufp->chgBit(oldp+462,(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_data_parity));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xeU])) {
        bufp->chgBit(oldp+463,((1U & (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_fsm_ctrl_bit))));
        bufp->chgBit(oldp+464,((1U & ((IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_fsm_ctrl_bit) 
                                      >> 5U))));
        bufp->chgBit(oldp+465,((1U & ((IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_fsm_ctrl_bit) 
                                      >> 4U))));
        bufp->chgBit(oldp+466,((1U & ((IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_fsm_ctrl_bit) 
                                      >> 3U))));
        bufp->chgBit(oldp+467,((1U & ((IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_fsm_ctrl_bit) 
                                      >> 2U))));
        bufp->chgBit(oldp+468,((1U & ((IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_fsm_ctrl_bit) 
                                      >> 1U))));
        bufp->chgCData(oldp+469,(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_fsm_ctrl_bit),6);
        bufp->chgCData(oldp+470,(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_ctrl),6);
        bufp->chgCData(oldp+471,(((0x10U & (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_ctrl))
                                   ? 0x47U : ((8U & (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_ctrl))
                                               ? 0x23U
                                               : ((4U 
                                                   & (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_ctrl))
                                                   ? 0x21U
                                                   : 0xffU)))),8);
        bufp->chgCData(oldp+472,(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_cycle_counter),8);
        bufp->chgBit(oldp+473,((1U & ((IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_ctrl) 
                                      >> 4U))));
        bufp->chgBit(oldp+474,((1U & ((IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_ctrl) 
                                      >> 3U))));
        bufp->chgBit(oldp+475,((1U & ((IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_ctrl) 
                                      >> 2U))));
        bufp->chgBit(oldp+476,((1U & ((IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_ctrl) 
                                      >> 1U))));
        bufp->chgBit(oldp+477,((1U & (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_ctrl))));
        bufp->chgBit(oldp+478,((1U & ((IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_ctrl) 
                                      >> 5U))));
        bufp->chgBit(oldp+479,((0U == (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_cycle_counter))));
        bufp->chgBit(oldp+480,((1U == (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_cycle_counter))));
    }
    bufp->chgBit(oldp+481,(vlSelf->m1_cyc));
    bufp->chgBit(oldp+482,(vlSelf->m1_stb));
    bufp->chgBit(oldp+483,(vlSelf->m1_we));
    bufp->chgIData(oldp+484,(vlSelf->m1_addr),32);
    bufp->chgIData(oldp+485,(vlSelf->m1_wdata),32);
    bufp->chgIData(oldp+486,(vlSelf->m1_rdata),32);
    bufp->chgCData(oldp+487,(vlSelf->m1_sel),4);
    bufp->chgBit(oldp+488,(vlSelf->m1_ack));
    bufp->chgBit(oldp+489,(vlSelf->m2_cyc));
    bufp->chgBit(oldp+490,(vlSelf->m2_stb));
    bufp->chgBit(oldp+491,(vlSelf->m2_we));
    bufp->chgIData(oldp+492,(vlSelf->m2_addr),32);
    bufp->chgIData(oldp+493,(vlSelf->m2_wdata),32);
    bufp->chgIData(oldp+494,(vlSelf->m2_rdata),32);
    bufp->chgCData(oldp+495,(vlSelf->m2_sel),4);
    bufp->chgBit(oldp+496,(vlSelf->m2_ack));
    bufp->chgBit(oldp+497,(vlSelf->m3_cyc));
    bufp->chgBit(oldp+498,(vlSelf->m3_stb));
    bufp->chgBit(oldp+499,(vlSelf->m3_we));
    bufp->chgIData(oldp+500,(vlSelf->m3_addr),32);
    bufp->chgIData(oldp+501,(vlSelf->m3_wdata),32);
    bufp->chgIData(oldp+502,(vlSelf->m3_rdata),32);
    bufp->chgCData(oldp+503,(vlSelf->m3_sel),4);
    bufp->chgBit(oldp+504,(vlSelf->m3_ack));
    bufp->chgBit(oldp+505,(vlSelf->m4_cyc));
    bufp->chgBit(oldp+506,(vlSelf->m4_stb));
    bufp->chgBit(oldp+507,(vlSelf->m4_we));
    bufp->chgIData(oldp+508,(vlSelf->m4_addr),32);
    bufp->chgIData(oldp+509,(vlSelf->m4_wdata),32);
    bufp->chgIData(oldp+510,(vlSelf->m4_rdata),32);
    bufp->chgCData(oldp+511,(vlSelf->m4_sel),4);
    bufp->chgBit(oldp+512,(vlSelf->m4_ack));
    bufp->chgBit(oldp+513,(vlSelf->testio_clk));
    bufp->chgBit(oldp+514,(vlSelf->clk));
    bufp->chgBit(oldp+515,(vlSelf->rst));
    bufp->chgBit(oldp+516,(vlSelf->clk4));
    bufp->chgBit(oldp+517,(vlSelf->rst4));
    bufp->chgBit(oldp+518,(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_rx_i));
    bufp->chgBit(oldp+519,(((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_cyc) 
                            & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__ack_ff))));
    bufp->chgBit(oldp+520,(((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_cyc) 
                            & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__ack_ff))));
    bufp->chgBit(oldp+521,((((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__ack_ff) 
                             & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_cyc)) 
                            & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_stb))));
    bufp->chgBit(oldp+522,(((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_cyc) 
                            & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__ack_ff))));
    bufp->chgBit(oldp+523,(((IData)(vlSelf->clk) & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__clk3_latch))));
    bufp->chgBit(oldp+524,((1U & (~ (IData)(vlSelf->rst)))));
    bufp->chgCData(oldp+525,(((0U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_state_u__DOT__dff_q))
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
    bufp->chgBit(oldp+526,(((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_test_din) 
                            & (~ (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__rff_ti_send_data)))));
    bufp->chgBit(oldp+527,((1U & ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__ack) 
                                  ^ VL_REDXOR_32((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__ti_ma_mem_if_resp))))));
    bufp->chgBit(oldp+528,(((1U == (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__w2m_bridge_ti_u__DOT__wb_state_u__DOT__dff_q)) 
                            & (0U == (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_current_state)))));
    bufp->chgQData(oldp+529,((((QData)((IData)((0x7ffffU 
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
    bufp->chgBit(oldp+531,((1U & ((~ (IData)((2U == 
                                              (0x22U 
                                               & (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_ctrl))))) 
                                  | ((1U == (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_cycle_counter))
                                      ? (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_data_parity)
                                      : vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_send_buf[0U])))));
    bufp->chgBit(oldp+532,((((IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_rcv_data_parity_u__DOT__dff_q) 
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
    bufp->chgWData(oldp+533,(__Vtemp_h03cdb204__0),72);
    bufp->chgBit(oldp+536,(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_rcv_data_parity_u__DOT__dff_q));
    bufp->chgCData(oldp+537,(((0U == (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__w2m_bridge_ti_u__DOT__wb_state_u__DOT__dff_q))
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
    bufp->chgBit(oldp+538,(((IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__w2m_bridge_ti_u__DOT__wb_valid) 
                            & ((1U == (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__w2m_bridge_ti_u__DOT__wb_state_u__DOT__dff_q)) 
                               & (0U == (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_current_state))))));
}

void Vsoc_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root__trace_cleanup\n"); );
    // Init
    Vsoc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsoc_tb___024root*>(voidSelf);
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xaU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xbU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xcU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xeU] = 0U;
}
