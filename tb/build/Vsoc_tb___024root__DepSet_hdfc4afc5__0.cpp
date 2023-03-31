// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsoc_tb.h for the primary calling header

#include "verilated.h"

#include "Vsoc_tb___024root.h"

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__15__PROF__testio_ma__l130(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__15__PROF__testio_ma__l130\n"); );
    // Body
    vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__ack 
        = vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__ack;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__17__PROF__async_fifo__l107(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__17__PROF__async_fifo__l107\n"); );
    // Body
    vlSelf->__Vdlyvset__soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__mem__v0 = 0U;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__18__PROF__async_fifo__l182(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__18__PROF__async_fifo__l182\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__rd_data_q 
        = vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__rd_data_c;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__19__PROF__testio__l91(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__19__PROF__testio__l91\n"); );
    // Body
    if (((1U == (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__w2m_bridge_ti_u__DOT__wb_state_u__DOT__dff_q)) 
         & (0U == (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_current_state)))) {
        vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__dff_mem_if_resp 
            = ((0xffffffffULL & vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__dff_mem_if_resp) 
               | ((QData)((IData)((0x7ffffU & (vlSelf->soc_tb__DOT__testio_wb_u__DOT__ti_mem_if_req[2U] 
                                               >> 4U)))) 
                  << 0x20U));
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__20__PROF__testio_ma__l128(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__20__PROF__testio_ma__l128\n"); );
    // Body
    vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__ack 
        = ((1U & vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[0U])
            ? ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__prty) 
               != (1U & (~ (VL_REDXOR_32(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__addr) 
                            ^ (VL_REDXOR_4(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__wstrb) 
                               ^ VL_REDXOR_32(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__wdata))))))
            : ((1U & vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[0U])
                ? (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__ack)
                : ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__prty) 
                   != (1U & VL_REDXOR_32(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__addr)))));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__21__PROF__testio_ma__l142(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__21__PROF__testio_ma__l142\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_payload 
        = ((1U & vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[0U])
            ? ((1U & vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[0U])
                ? (((5U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__rff_cdcst)) 
                    & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__memif_resp_valid))
                    ? (0x1ffffffffULL | (((QData)((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__ack)) 
                                          << 0x22U) 
                                         | ((QData)((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__ack)) 
                                            << 0x21U)))
                    : vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_payload)
                : vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_payload)
            : (((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__memif_resp_valid) 
                & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__ti_ma_mem_if_resp_ready))
                ? (((QData)((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__ack)) 
                    << 0x22U) | (((QData)((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__ti_ma_mem_if_resp)) 
                                  << 2U) | (QData)((IData)(
                                                           (1U 
                                                            | (2U 
                                                               & (((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__ack) 
                                                                   ^ 
                                                                   VL_REDXOR_32((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__ti_ma_mem_if_resp))) 
                                                                  << 1U)))))))
                : vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_payload));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__22__PROF__async_fifo__l105(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__22__PROF__async_fifo__l105\n"); );
    // Body
    if (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__m_cmd_wr_en) {
        vlSelf->__Vdlyvval__soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__mem__v0[0U] 
            = (IData)((((QData)((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_we)) 
                        << 0x24U) | (((QData)((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_data)) 
                                      << 4U) | (QData)((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_mask)))));
        vlSelf->__Vdlyvval__soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__mem__v0[1U] 
            = ((vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_addr 
                << 5U) | (IData)(((((QData)((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_we)) 
                                    << 0x24U) | (((QData)((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_data)) 
                                                  << 4U) 
                                                 | (QData)((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_mask)))) 
                                  >> 0x20U)));
        vlSelf->__Vdlyvval__soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__mem__v0[2U] 
            = (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_addr 
               >> 0x1bU);
        vlSelf->__Vdlyvset__soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__mem__v0 = 1U;
        vlSelf->__Vdlyvdim0__soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__mem__v0 
            = (3U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__wr_ptr));
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__26__PROF__testio_ma__l130(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__26__PROF__testio_ma__l130\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__ack 
        = vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__ack;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__28__PROF__async_fifo__l107(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__28__PROF__async_fifo__l107\n"); );
    // Body
    if (vlSelf->__Vdlyvset__soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__mem__v0) {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__mem[vlSelf->__Vdlyvdim0__soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__mem__v0][0U] 
            = vlSelf->__Vdlyvval__soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__mem__v0[0U];
        vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__mem[vlSelf->__Vdlyvdim0__soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__mem__v0][1U] 
            = vlSelf->__Vdlyvval__soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__mem__v0[1U];
        vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__mem[vlSelf->__Vdlyvdim0__soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__mem__v0][2U] 
            = vlSelf->__Vdlyvval__soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__mem__v0[2U];
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__29__PROF__std_dffr__l15(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__29__PROF__std_dffr__l15\n"); );
    // Body
    vlSelf->soc_tb__DOT__testio_wb_u__DOT__w2m_bridge_ti_u__DOT__wb_state_u__DOT__dff_q 
        = ((IData)(vlSelf->rst) ? (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__w2m_bridge_ti_u__DOT__wb_next_state)
            : 0U);
}

VL_INLINE_OPT void Vsoc_tb___024root___combo__TOP__0__PROF__w2m_bridge__l62(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___combo__TOP__0__PROF__w2m_bridge__l62\n"); );
    // Body
    vlSelf->soc_tb__DOT__testio_wb_u__DOT__w2m_bridge_ti_u__DOT__wb_valid 
        = ((IData)(vlSelf->m3_cyc) & (IData)(vlSelf->m3_stb));
}

VL_INLINE_OPT void Vsoc_tb___024root___combo__TOP__1__PROF__crg__l35(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___combo__TOP__1__PROF__crg__l35\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->clk)))) {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__clk1_latch 
            = vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain1_clk_en;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___combo__TOP__2__PROF__crg__l35(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___combo__TOP__2__PROF__crg__l35\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->clk)))) {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__clk2_latch 
            = vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain2_clk_en;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___combo__TOP__3__PROF__crg__l43(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___combo__TOP__3__PROF__crg__l43\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__domain1_clk 
        = ((IData)(vlSelf->clk) & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__clk1_latch));
}

VL_INLINE_OPT void Vsoc_tb___024root___combo__TOP__4__PROF__crg__l44(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___combo__TOP__4__PROF__crg__l44\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__domain2_clk 
        = ((IData)(vlSelf->clk) & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__clk2_latch));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__37__PROF__testio_trx__l169(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__37__PROF__testio_trx__l169\n"); );
    // Body
    vlSelf->__Vdly__soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_data_parity 
        = vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_data_parity;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__38__PROF__testio_trx__l161(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__38__PROF__testio_trx__l161\n"); );
    // Body
    vlSelf->__Vdly__soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_send_buf[0U] 
        = vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_send_buf[0U];
    vlSelf->__Vdly__soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_send_buf[1U] 
        = vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_send_buf[1U];
    vlSelf->__Vdly__soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_send_buf[2U] 
        = vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_send_buf[2U];
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__40__PROF__testio_trx__l165(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__40__PROF__testio_trx__l165\n"); );
    // Body
    if (vlSelf->rst) {
        if ((0x20U & (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_ctrl))) {
            vlSelf->__Vdly__soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_data_parity = 0U;
        } else if ((2U & (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_ctrl))) {
            vlSelf->__Vdly__soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_data_parity 
                = (1U & ((IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_data_parity) 
                         ^ vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_send_buf[0U]));
        }
    } else {
        vlSelf->__Vdly__soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_data_parity = 0U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__41__PROF__testio_trx__l154(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__41__PROF__testio_trx__l154\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h343c7283__0;
    VlWide<3>/*95:0*/ __Vtemp_h43af39f1__0;
    VlWide<3>/*95:0*/ __Vtemp_hb96d737f__0;
    // Body
    if (vlSelf->rst) {
        if ((0x20U & (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_ctrl))) {
            vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__sv2v_autoblock_1__DOT__i = 0U;
            while (VL_GTS_III(32, 0x48U, vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__sv2v_autoblock_1__DOT__i)) {
                if ((2U & (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_ctrl))) {
                    if ((0x10U & (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_ctrl))) {
                        __Vtemp_h343c7283__0[0U] = (IData)(
                                                           (1ULL 
                                                            | (((QData)((IData)(
                                                                                (0xfU 
                                                                                & vlSelf->soc_tb__DOT__testio_wb_u__DOT__ti_mem_if_req[1U]))) 
                                                                << 0x22U) 
                                                               | ((QData)((IData)(
                                                                                vlSelf->soc_tb__DOT__testio_wb_u__DOT__ti_mem_if_req[0U])) 
                                                                  << 2U))));
                        __Vtemp_h343c7283__0[1U] = 
                            ((0xffffffc0U & (vlSelf->soc_tb__DOT__testio_wb_u__DOT__ti_mem_if_req[1U] 
                                             << 2U)) 
                             | (IData)(((1ULL | (((QData)((IData)(
                                                                  (0xfU 
                                                                   & vlSelf->soc_tb__DOT__testio_wb_u__DOT__ti_mem_if_req[1U]))) 
                                                  << 0x22U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->soc_tb__DOT__testio_wb_u__DOT__ti_mem_if_req[0U])) 
                                                    << 2U))) 
                                        >> 0x20U)));
                        __Vtemp_h343c7283__0[2U] = 
                            (0x40U | (0x3fU & ((0x3cU 
                                                & (vlSelf->soc_tb__DOT__testio_wb_u__DOT__ti_mem_if_req[2U] 
                                                   << 2U)) 
                                               | (vlSelf->soc_tb__DOT__testio_wb_u__DOT__ti_mem_if_req[1U] 
                                                  >> 0x1eU))));
                    } else {
                        __Vtemp_h343c7283__0[0U] = 0xffffffffU;
                        __Vtemp_h343c7283__0[1U] = 
                            (0x1fU | ((IData)((QData)((IData)(
                                                              ((vlSelf->soc_tb__DOT__testio_wb_u__DOT__ti_mem_if_req[2U] 
                                                                << 0x1cU) 
                                                               | (vlSelf->soc_tb__DOT__testio_wb_u__DOT__ti_mem_if_req[1U] 
                                                                  >> 4U))))) 
                                      << 6U));
                        __Vtemp_h343c7283__0[2U] = 
                            (((IData)((QData)((IData)(
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
                    vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT____Vlvbound_h07bfa1bd__0 
                        = ((0x47U >= (0x7fU & ((IData)(0x47U) 
                                               - vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__sv2v_autoblock_1__DOT__i))) 
                           & (__Vtemp_h343c7283__0[
                              (3U & (((IData)(0x47U) 
                                      - vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__sv2v_autoblock_1__DOT__i) 
                                     >> 5U))] >> (0x1fU 
                                                  & ((IData)(0x47U) 
                                                     - vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__sv2v_autoblock_1__DOT__i))));
                    if (VL_LIKELY((0x47U >= (0x7fU 
                                             & vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__sv2v_autoblock_1__DOT__i)))) {
                        vlSelf->__Vdly__soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_send_buf[(3U 
                                                                                & (vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__sv2v_autoblock_1__DOT__i 
                                                                                >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__sv2v_autoblock_1__DOT__i))) 
                                & vlSelf->__Vdly__soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_send_buf[
                                (3U & (vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__sv2v_autoblock_1__DOT__i 
                                       >> 5U))]) | 
                               ((IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT____Vlvbound_h07bfa1bd__0) 
                                << (0x1fU & vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__sv2v_autoblock_1__DOT__i)));
                    }
                }
                vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__sv2v_autoblock_1__DOT__i 
                    = ((IData)(1U) + vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__sv2v_autoblock_1__DOT__i);
            }
        } else if ((2U & (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_ctrl))) {
            __Vtemp_h43af39f1__0[0U] = ((vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_send_buf[1U] 
                                         << 0x1fU) 
                                        | (vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_send_buf[0U] 
                                           >> 1U));
            __Vtemp_h43af39f1__0[1U] = ((vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_send_buf[2U] 
                                         << 0x1fU) 
                                        | (vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_send_buf[1U] 
                                           >> 1U));
            __Vtemp_h43af39f1__0[2U] = (0x7fU & (vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_send_buf[2U] 
                                                 >> 1U));
            VL_EXTEND_WW(72,71, __Vtemp_hb96d737f__0, __Vtemp_h43af39f1__0);
            vlSelf->__Vdly__soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_send_buf[0U] 
                = __Vtemp_hb96d737f__0[0U];
            vlSelf->__Vdly__soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_send_buf[1U] 
                = __Vtemp_hb96d737f__0[1U];
            vlSelf->__Vdly__soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_send_buf[2U] 
                = __Vtemp_hb96d737f__0[2U];
        }
    } else {
        vlSelf->__Vdly__soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_send_buf[0U] = 0U;
        vlSelf->__Vdly__soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_send_buf[1U] = 0U;
        vlSelf->__Vdly__soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_send_buf[2U] = 0U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__42__PROF__testio__l245(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__42__PROF__testio__l245\n"); );
    // Body
    vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__rff_ti_data_oen 
        = ((IData)(vlSelf->rst) & (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_data_oen));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__45__PROF__testio_trx__l195(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__45__PROF__testio_trx__l195\n"); );
    // Body
    vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_data_oen 
        = (1U & ((~ (IData)(vlSelf->rst)) | (~ (((IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_ctrl) 
                                                 >> 1U) 
                                                & (0U 
                                                   != (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_cycle_counter))))));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__50__PROF__std_dffre__l15(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__50__PROF__std_dffre__l15\n"); );
    // Body
    if (vlSelf->rst) {
        if ((1U == (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_cycle_counter))) {
            vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_rcv_data_parity_u__DOT__dff_q 
                = vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_rcv_data_parity;
        }
    } else {
        vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_rcv_data_parity_u__DOT__dff_q = 0U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__105__PROF__uart_tx__l135(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__105__PROF__uart_tx__l135\n"); );
    // Body
    vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__baud_cnt 
        = vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__baud_cnt;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__106__PROF__uart_tx__l135(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__106__PROF__uart_tx__l135\n"); );
    // Body
    vlSelf->__Vdly__soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__baud_cnt 
        = vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__baud_cnt;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__107__PROF__uart_rx__l141(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__107__PROF__uart_rx__l141\n"); );
    // Body
    vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__baud_cnt 
        = vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__baud_cnt;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__108__PROF__uart_rx__l141(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__108__PROF__uart_rx__l141\n"); );
    // Body
    vlSelf->__Vdly__soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__baud_cnt 
        = vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__baud_cnt;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__109__PROF__io_generic_fifo__l62(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__109__PROF__io_generic_fifo__l62\n"); );
    // Body
    vlSelf->__Vdly__soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__pointer_in 
        = vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__pointer_in;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__110__PROF__io_generic_fifo__l68(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__110__PROF__io_generic_fifo__l68\n"); );
    // Body
    vlSelf->__Vdly__soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__pointer_out 
        = vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__pointer_out;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__111__PROF__io_generic_fifo__l62(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__111__PROF__io_generic_fifo__l62\n"); );
    // Body
    vlSelf->__Vdly__soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__pointer_in 
        = vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__pointer_in;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__115__PROF__io_generic_fifo__l62(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__115__PROF__io_generic_fifo__l62\n"); );
    // Body
    vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__pointer_in 
        = vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__pointer_in;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__118__PROF__uart__l125(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__118__PROF__uart__l125\n"); );
    // Body
    vlSelf->__Vdly__soc_tb__DOT__uart_u__DOT__tx_data_ready 
        = vlSelf->soc_tb__DOT__uart_u__DOT__tx_data_ready;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__121__PROF__io_generic_fifo__l37(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__121__PROF__io_generic_fifo__l37\n"); );
    // Body
    vlSelf->__Vdly__soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__elements 
        = vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__elements;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__125__PROF__io_generic_fifo__l37(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__125__PROF__io_generic_fifo__l37\n"); );
    // Body
    vlSelf->__Vdly__soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__elements 
        = vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__elements;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__127__PROF__async_fifo__l107(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__127__PROF__async_fifo__l107\n"); );
    // Body
    vlSelf->__Vdlyvset__soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__mem__v0 = 0U;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__135__PROF__io_generic_fifo__l51(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__135__PROF__io_generic_fifo__l51\n"); );
    // Body
    vlSelf->__Vdlyvset__soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer__v0 = 0U;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__136__PROF__io_generic_fifo__l48(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__136__PROF__io_generic_fifo__l48\n"); );
    // Body
    vlSelf->__Vdlyvset__soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer__v1 = 0U;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__137__PROF__io_generic_fifo__l51(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__137__PROF__io_generic_fifo__l51\n"); );
    // Body
    vlSelf->__Vdlyvset__soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__buffer__v0 = 0U;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__138__PROF__io_generic_fifo__l48(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__138__PROF__io_generic_fifo__l48\n"); );
    // Body
    vlSelf->__Vdlyvset__soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__buffer__v1 = 0U;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__139__PROF__io_generic_fifo__l51(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__139__PROF__io_generic_fifo__l51\n"); );
    // Body
    vlSelf->__Vdlyvset__soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer__v0 = 0U;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__140__PROF__io_generic_fifo__l48(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__140__PROF__io_generic_fifo__l48\n"); );
    // Body
    vlSelf->__Vdlyvset__soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer__v1 = 0U;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__144__PROF__io_generic_fifo__l37(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__144__PROF__io_generic_fifo__l37\n"); );
    // Body
    vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__elements 
        = vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__elements;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__145__PROF__io_generic_fifo__l45(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__145__PROF__io_generic_fifo__l45\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__loop1 = 8U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__146__PROF__io_generic_fifo__l45(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__146__PROF__io_generic_fifo__l45\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__loop1 = 8U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__147__PROF__io_generic_fifo__l45(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__147__PROF__io_generic_fifo__l45\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__loop1 = 8U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__148__PROF__uart__l51(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__148__PROF__uart__l51\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->soc_tb__DOT__uart_u__DOT__debug_ringback 
            = (((IData)(vlSelf->m4_cyc) & (0x2000304U 
                                           == vlSelf->m4_addr)) 
               & (~ (IData)(vlSelf->m4_we)));
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__149__PROF__uart_tx__l129(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__149__PROF__uart_tx__l129\n"); );
    // Body
    vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__baud_cnt 
        = ((IData)(vlSelf->rst) ? ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__baudgen_en)
                                    ? ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__caonima)
                                        ? 0U : (0x1ffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__baud_cnt))))
                                    : 0U) : 0U);
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__150__PROF__uart_tx__l129(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__150__PROF__uart_tx__l129\n"); );
    // Body
    vlSelf->__Vdly__soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__baud_cnt 
        = ((IData)(vlSelf->rst) ? ((IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__baudgen_en)
                                    ? ((IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__caonima)
                                        ? 0U : (0x1ffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__baud_cnt))))
                                    : 0U) : 0U);
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__151__PROF__uart_rx__l135(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__151__PROF__uart_rx__l135\n"); );
    // Body
    vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__baud_cnt 
        = ((IData)(vlSelf->rst) ? ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__baudgen_en)
                                    ? ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__caonima)
                                        ? 0U : (0x1ffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__baud_cnt))))
                                    : 0U) : 0U);
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__152__PROF__uart_rx__l135(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__152__PROF__uart_rx__l135\n"); );
    // Body
    vlSelf->__Vdly__soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__baud_cnt 
        = ((IData)(vlSelf->rst) ? ((IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__baudgen_en)
                                    ? ((IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__caonima)
                                        ? 0U : (0x1ffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__baud_cnt))))
                                    : 0U) : 0U);
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__153__PROF__io_generic_fifo__l55(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__153__PROF__io_generic_fifo__l55\n"); );
    // Body
    if (vlSelf->rst) {
        if (((IData)(vlSelf->soc_tb__DOT__uart_u__DOT__rx_valid) 
             & (8U != (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__elements)))) {
            vlSelf->__Vdly__soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__pointer_in 
                = ((7U == (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__pointer_in))
                    ? 0U : (7U & ((IData)(1U) + (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__pointer_in))));
        }
    } else {
        vlSelf->__Vdly__soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__pointer_in = 0U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__154__PROF__io_generic_fifo__l55(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__154__PROF__io_generic_fifo__l55\n"); );
    // Body
    if (vlSelf->rst) {
        if (((IData)(vlSelf->soc_tb__DOT__uart_u__DOT__fifo_rx_ready) 
             & (0U != (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__elements)))) {
            vlSelf->__Vdly__soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__pointer_out 
                = ((7U == (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__pointer_out))
                    ? 0U : (7U & ((IData)(1U) + (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__pointer_out))));
        }
    } else {
        vlSelf->__Vdly__soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__pointer_out = 0U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__155__PROF__io_generic_fifo__l55(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__155__PROF__io_generic_fifo__l55\n"); );
    // Body
    if (vlSelf->rst) {
        if (((IData)(vlSelf->soc_tb__DOT__uart_u__DOT__tx_data_ready) 
             & (8U != (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__elements)))) {
            vlSelf->__Vdly__soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__pointer_in 
                = ((7U == (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__pointer_in))
                    ? 0U : (7U & ((IData)(1U) + (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__pointer_in))));
        }
    } else {
        vlSelf->__Vdly__soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__pointer_in = 0U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__156__PROF__uart__l62(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__156__PROF__uart__l62\n"); );
    // Body
    if (vlSelf->rst) {
        if (vlSelf->m4_cyc) {
            if ((0x2000300U == vlSelf->m4_addr)) {
                vlSelf->soc_tb__DOT__uart_u__DOT__ack_ff = 1U;
            } else if ((0x2000304U == vlSelf->m4_addr)) {
                if ((1U & (~ (IData)(vlSelf->m4_we)))) {
                    vlSelf->soc_tb__DOT__uart_u__DOT__ack_ff = 1U;
                }
            } else {
                vlSelf->soc_tb__DOT__uart_u__DOT__ack_ff 
                    = ((0x2000308U == vlSelf->m4_addr) 
                       | (0x200030cU == vlSelf->m4_addr));
            }
        } else {
            vlSelf->soc_tb__DOT__uart_u__DOT__ack_ff = 0U;
        }
    } else {
        vlSelf->soc_tb__DOT__uart_u__DOT__ack_ff = 0U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__157__PROF__uart_rx__l104(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__157__PROF__uart_rx__l104\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__reg_bit_count 
        = ((IData)(vlSelf->rst) ? (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__reg_bit_count_next)
            : 0U);
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__158__PROF__uart_rx__l104(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__158__PROF__uart_rx__l104\n"); );
    // Body
    vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__reg_bit_count 
        = ((IData)(vlSelf->rst) ? (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__reg_bit_count_next)
            : 0U);
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__159__PROF__io_generic_fifo__l55(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__159__PROF__io_generic_fifo__l55\n"); );
    // Body
    if (vlSelf->rst) {
        if (((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__rx_valid) 
             & (8U != (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__elements)))) {
            vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__pointer_in 
                = ((7U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__pointer_in))
                    ? 0U : (7U & ((IData)(1U) + (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__pointer_in))));
        }
    } else {
        vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__pointer_in = 0U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__160__PROF__uart_tx__l108(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__160__PROF__uart_tx__l108\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__reg_bit_count 
        = ((IData)(vlSelf->rst) ? (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__reg_bit_count_next)
            : 0U);
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__161__PROF__uart_tx__l108(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__161__PROF__uart_tx__l108\n"); );
    // Body
    vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__reg_bit_count 
        = ((IData)(vlSelf->rst) ? (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__reg_bit_count_next)
            : 0U);
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__162__PROF__uart__l121(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__162__PROF__uart__l121\n"); );
    // Body
    if (vlSelf->rst) {
        if (((8U != (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__elements)) 
             & (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__tx_data_ready))) {
            vlSelf->__Vdly__soc_tb__DOT__uart_u__DOT__tx_data_ready = 0U;
        } else if ((((IData)(vlSelf->m4_cyc) & (IData)(vlSelf->m4_we)) 
                    & (0x2000300U == vlSelf->m4_addr))) {
            vlSelf->__Vdly__soc_tb__DOT__uart_u__DOT__tx_data_ready = 1U;
        }
    } else {
        vlSelf->__Vdly__soc_tb__DOT__uart_u__DOT__tx_data_ready = 0U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__163__PROF__uart_tx__l108(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__163__PROF__uart_tx__l108\n"); );
    // Body
    if (vlSelf->rst) {
        if (vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__sampleData) {
            vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__reg_data 
                = vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__reg_data_next;
        }
    } else {
        vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__reg_data = 0xffU;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__164__PROF__uart_tx__l108(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__164__PROF__uart_tx__l108\n"); );
    // Body
    if (vlSelf->rst) {
        if (vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__sampleData) {
            vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__reg_data 
                = vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__reg_data_next;
        }
    } else {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__reg_data = 0xffU;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__165__PROF__io_generic_fifo__l32(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__165__PROF__io_generic_fifo__l32\n"); );
    // Body
    if (vlSelf->rst) {
        if ((((IData)(vlSelf->soc_tb__DOT__uart_u__DOT__fifo_rx_ready) 
              & (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__fifo_rx_valid)) 
             & ((~ (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__rx_valid)) 
                | (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__full)))) {
            vlSelf->__Vdly__soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__elements 
                = (0xfU & ((IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__elements) 
                           - (IData)(1U)));
        } else if (((((~ (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__fifo_rx_valid)) 
                      | (~ (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__fifo_rx_ready))) 
                     & (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__rx_valid)) 
                    & (~ (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__full)))) {
            vlSelf->__Vdly__soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__elements 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__elements)));
        }
    } else {
        vlSelf->__Vdly__soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__elements = 0U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__166__PROF__io_generic_fifo__l55(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__166__PROF__io_generic_fifo__l55\n"); );
    // Body
    if (vlSelf->rst) {
        if (((IData)(vlSelf->soc_tb__DOT__uart_u__DOT__tx_ready) 
             & (0U != (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__elements)))) {
            vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__pointer_out 
                = ((7U == (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__pointer_out))
                    ? 0U : (7U & ((IData)(1U) + (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__pointer_out))));
        }
    } else {
        vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__pointer_out = 0U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__167__PROF__uart_rx__l104(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__167__PROF__uart_rx__l104\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__CS 
        = ((IData)(vlSelf->rst) ? (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__NS)
            : 0U);
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__168__PROF__uart_rx__l104(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__168__PROF__uart_rx__l104\n"); );
    // Body
    vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__CS 
        = ((IData)(vlSelf->rst) ? (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__NS)
            : 0U);
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__169__PROF__io_generic_fifo__l32(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__169__PROF__io_generic_fifo__l32\n"); );
    // Body
    if (vlSelf->rst) {
        if ((((IData)(vlSelf->soc_tb__DOT__uart_u__DOT__tx_ready) 
              & (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__tx_valid)) 
             & ((~ (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__tx_data_ready)) 
                | (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__full)))) {
            vlSelf->__Vdly__soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__elements 
                = (0xfU & ((IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__elements) 
                           - (IData)(1U)));
        } else if (((((~ (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__tx_valid)) 
                      | (~ (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__tx_ready))) 
                     & (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__tx_data_ready)) 
                    & (~ (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__full)))) {
            vlSelf->__Vdly__soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__elements 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__elements)));
        }
    } else {
        vlSelf->__Vdly__soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__elements = 0U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__170__PROF__uart_tx__l108(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__170__PROF__uart_tx__l108\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__CS 
        = ((IData)(vlSelf->rst) ? ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__out_en)
                                    ? (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__NS)
                                    : 0U) : 0U);
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__171__PROF__async_fifo__l105(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__171__PROF__async_fifo__l105\n"); );
    // Body
    if (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__s_resp_wr_en) {
        vlSelf->__Vdlyvval__soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__mem__v0 
            = (QData)((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_rdata));
        vlSelf->__Vdlyvset__soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__mem__v0 = 1U;
        vlSelf->__Vdlyvdim0__soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__mem__v0 
            = (1U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__wr_ptr));
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__172__PROF__uart_rx__l123(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__172__PROF__uart_rx__l123\n"); );
    // Body
    vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__reg_rx_sync 
        = ((IData)(vlSelf->rst) ? (1U | (6U & ((IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__reg_rx_sync) 
                                               << 1U)))
            : 7U);
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__173__PROF__uart_rx__l123(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__173__PROF__uart_rx__l123\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__reg_rx_sync 
        = ((IData)(vlSelf->rst) ? ((6U & ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__reg_rx_sync) 
                                          << 1U)) | (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_tx_o))
            : 7U);
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__174__PROF__uart_rx__l104(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__174__PROF__uart_rx__l104\n"); );
    // Body
    if (vlSelf->rst) {
        if (vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__bit_done) {
            vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__parity_bit 
                = vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__parity_bit_next;
        }
    } else {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__parity_bit = 0U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__175__PROF__uart_rx__l104(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__175__PROF__uart_rx__l104\n"); );
    // Body
    if (vlSelf->rst) {
        if (vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__bit_done) {
            vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__parity_bit 
                = vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__parity_bit_next;
        }
    } else {
        vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__parity_bit = 0U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__176__PROF__uart_tx__l108(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__176__PROF__uart_tx__l108\n"); );
    // Body
    if (vlSelf->rst) {
        if (vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__bit_done) {
            vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__parity_bit 
                = vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__parity_bit_next;
        }
    } else {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__parity_bit = 0U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__177__PROF__uart_tx__l108(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__177__PROF__uart_tx__l108\n"); );
    // Body
    if (vlSelf->rst) {
        if (vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__bit_done) {
            vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__parity_bit 
                = vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__parity_bit_next;
        }
    } else {
        vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__parity_bit = 0U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__178__PROF__uart_tx__l108(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__178__PROF__uart_tx__l108\n"); );
    // Body
    vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__CS 
        = ((IData)(vlSelf->rst) ? ((IData)(vlSelf->soc_tb__DOT__uart_u__DOT__out_en)
                                    ? (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__NS)
                                    : 0U) : 0U);
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__179__PROF__io_generic_fifo__l45(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__179__PROF__io_generic_fifo__l45\n"); );
    // Body
    if (vlSelf->rst) {
        if (((IData)(vlSelf->soc_tb__DOT__uart_u__DOT__rx_valid) 
             & (8U != (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__elements)))) {
            vlSelf->__Vdlyvval__soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer__v0 
                = vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__reg_data;
            vlSelf->__Vdlyvset__soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer__v0 = 1U;
            vlSelf->__Vdlyvdim0__soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer__v0 
                = vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__pointer_in;
        }
    } else {
        vlSelf->__Vdlyvset__soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer__v1 = 1U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__180__PROF__io_generic_fifo__l45(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__180__PROF__io_generic_fifo__l45\n"); );
    // Body
    if (vlSelf->rst) {
        if (((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__rx_valid) 
             & (8U != (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__elements)))) {
            vlSelf->__Vdlyvval__soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__buffer__v0 
                = vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__reg_data;
            vlSelf->__Vdlyvset__soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__buffer__v0 = 1U;
            vlSelf->__Vdlyvdim0__soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__buffer__v0 
                = vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__pointer_in;
        }
    } else {
        vlSelf->__Vdlyvset__soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__buffer__v1 = 1U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__181__PROF__io_generic_fifo__l45(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__181__PROF__io_generic_fifo__l45\n"); );
    // Body
    if (vlSelf->rst) {
        if (((IData)(vlSelf->soc_tb__DOT__uart_u__DOT__tx_data_ready) 
             & (8U != (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__elements)))) {
            vlSelf->__Vdlyvval__soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer__v0 
                = vlSelf->soc_tb__DOT__uart_u__DOT__fifo_tx_data;
            vlSelf->__Vdlyvset__soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer__v0 = 1U;
            vlSelf->__Vdlyvdim0__soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer__v0 
                = vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__pointer_in;
        }
    } else {
        vlSelf->__Vdlyvset__soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer__v1 = 1U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__182__PROF__uart__l62(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__182__PROF__uart__l62\n"); );
    // Body
    if (vlSelf->rst) {
        if (vlSelf->m4_cyc) {
            if ((0x2000300U == vlSelf->m4_addr)) {
                if ((1U & (~ (IData)(vlSelf->m4_we)))) {
                    vlSelf->m4_rdata = vlSelf->soc_tb__DOT__uart_u__DOT__tx_data;
                }
            } else if ((0x2000304U == vlSelf->m4_addr)) {
                if ((1U & (~ (IData)(vlSelf->m4_we)))) {
                    vlSelf->m4_rdata = ((0U != (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__elements))
                                         ? vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer
                                        [vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__pointer_out]
                                         : 0U);
                }
            } else if ((0x2000308U == vlSelf->m4_addr)) {
                if ((1U & (~ (IData)(vlSelf->m4_we)))) {
                    vlSelf->m4_rdata = (((IData)(vlSelf->soc_tb__DOT__uart_u__DOT__stop_bit_ctrl) 
                                         << 1U) | (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__out_en));
                }
            } else if ((0x200030cU == vlSelf->m4_addr)) {
                if ((1U & (~ (IData)(vlSelf->m4_we)))) {
                    vlSelf->m4_rdata = (((IData)(vlSelf->soc_tb__DOT__uart_u__DOT__in_watermark) 
                                         << 0x1dU) 
                                        | (((IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__elements) 
                                            << 0x19U) 
                                           | (((IData)(vlSelf->soc_tb__DOT__uart_u__DOT__in_irq_en) 
                                               << 2U) 
                                              | (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__in_en))));
                }
            }
        }
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__183__PROF__async_fifo__l182(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__183__PROF__async_fifo__l182\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__rd_data_q[0U] 
        = vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__rd_data_c[0U];
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__rd_data_q[1U] 
        = vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__rd_data_c[1U];
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__rd_data_q[2U] 
        = vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__rd_data_c[2U];
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__184__PROF__io_generic_fifo__l55(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__184__PROF__io_generic_fifo__l55\n"); );
    // Body
    if (vlSelf->rst) {
        if (((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__debug_ringback) 
             & (0U != (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__elements)))) {
            vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__pointer_out 
                = ((7U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__pointer_out))
                    ? 0U : (7U & ((IData)(1U) + (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__pointer_out))));
        }
    } else {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__pointer_out = 0U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__185__PROF__io_generic_fifo__l32(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__185__PROF__io_generic_fifo__l32\n"); );
    // Body
    if (vlSelf->rst) {
        if ((((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__debug_ringback) 
              & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__tx_valid)) 
             & ((~ (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__rx_valid)) 
                | (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__full)))) {
            vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__elements 
                = (0xfU & ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__elements) 
                           - (IData)(1U)));
        } else if (((((~ (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__tx_valid)) 
                      | (~ (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__debug_ringback))) 
                     & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__rx_valid)) 
                    & (~ (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__full)))) {
            vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__elements 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__elements)));
        }
    } else {
        vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__elements = 0U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__198__PROF__async_fifo__l107(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__198__PROF__async_fifo__l107\n"); );
    // Body
    if (vlSelf->__Vdlyvset__soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__mem__v0) {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__mem[vlSelf->__Vdlyvdim0__soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__mem__v0] 
            = vlSelf->__Vdlyvval__soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__mem__v0;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__210__PROF__io_generic_fifo__l62(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__210__PROF__io_generic_fifo__l62\n"); );
    // Body
    vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__pointer_in 
        = vlSelf->__Vdly__soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__pointer_in;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__212__PROF__io_generic_fifo__l62(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__212__PROF__io_generic_fifo__l62\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__pointer_in 
        = vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__pointer_in;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__213__PROF__io_generic_fifo__l51(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__213__PROF__io_generic_fifo__l51\n"); );
    // Body
    if (vlSelf->__Vdlyvset__soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__buffer__v0) {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__buffer[vlSelf->__Vdlyvdim0__soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__buffer__v0] 
            = vlSelf->__Vdlyvval__soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__buffer__v0;
    }
    if (vlSelf->__Vdlyvset__soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__buffer__v1) {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__buffer[0U] = 0U;
        vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__buffer[1U] = 0U;
        vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__buffer[2U] = 0U;
        vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__buffer[3U] = 0U;
        vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__buffer[4U] = 0U;
        vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__buffer[5U] = 0U;
        vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__buffer[6U] = 0U;
        vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__buffer[7U] = 0U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__215__PROF__io_generic_fifo__l62(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__215__PROF__io_generic_fifo__l62\n"); );
    // Body
    vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__pointer_in 
        = vlSelf->__Vdly__soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__pointer_in;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__216__PROF__uart__l125(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__216__PROF__uart__l125\n"); );
    // Body
    vlSelf->soc_tb__DOT__uart_u__DOT__tx_data_ready 
        = vlSelf->__Vdly__soc_tb__DOT__uart_u__DOT__tx_data_ready;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__217__PROF__io_generic_fifo__l51(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__217__PROF__io_generic_fifo__l51\n"); );
    // Body
    if (vlSelf->__Vdlyvset__soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer__v0) {
        vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer[vlSelf->__Vdlyvdim0__soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer__v0] 
            = vlSelf->__Vdlyvval__soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer__v0;
    }
    if (vlSelf->__Vdlyvset__soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer__v1) {
        vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer[0U] = 0U;
        vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer[1U] = 0U;
        vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer[2U] = 0U;
        vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer[3U] = 0U;
        vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer[4U] = 0U;
        vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer[5U] = 0U;
        vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer[6U] = 0U;
        vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer[7U] = 0U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__218__PROF__io_generic_fifo__l37(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__218__PROF__io_generic_fifo__l37\n"); );
    // Body
    vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__elements 
        = vlSelf->__Vdly__soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__elements;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__221__PROF__io_generic_fifo__l68(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__221__PROF__io_generic_fifo__l68\n"); );
    // Body
    vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__pointer_out 
        = vlSelf->__Vdly__soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__pointer_out;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__222__PROF__io_generic_fifo__l51(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__222__PROF__io_generic_fifo__l51\n"); );
    // Body
    if (vlSelf->__Vdlyvset__soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer__v0) {
        vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer[vlSelf->__Vdlyvdim0__soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer__v0] 
            = vlSelf->__Vdlyvval__soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer__v0;
    }
    if (vlSelf->__Vdlyvset__soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer__v1) {
        vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer[0U] = 0U;
        vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer[1U] = 0U;
        vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer[2U] = 0U;
        vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer[3U] = 0U;
        vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer[4U] = 0U;
        vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer[5U] = 0U;
        vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer[6U] = 0U;
        vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer[7U] = 0U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__223__PROF__io_generic_fifo__l37(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__223__PROF__io_generic_fifo__l37\n"); );
    // Body
    vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__elements 
        = vlSelf->__Vdly__soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__elements;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__231__PROF__io_generic_fifo__l37(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__231__PROF__io_generic_fifo__l37\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__elements 
        = vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__elements;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__232__PROF__uart_rx__l45(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__232__PROF__uart_rx__l45\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__rx_valid = 0U;
    if ((1U & (~ ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__CS) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__CS))) {
            if ((1U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__CS))) {
                vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__rx_valid = 1U;
            }
        }
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__233__PROF__uart_rx__l45(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__233__PROF__uart_rx__l45\n"); );
    // Body
    vlSelf->soc_tb__DOT__uart_u__DOT__rx_valid = 0U;
    if ((1U & (~ ((IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__CS) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__CS))) {
            if ((1U & (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__CS))) {
                vlSelf->soc_tb__DOT__uart_u__DOT__rx_valid = 1U;
            }
        }
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__234__PROF__uart_tx__l41(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__234__PROF__uart_tx__l41\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__tx_ready = 0U;
    if ((1U & (~ ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__CS) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__CS) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__CS)))) {
                if (vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__out_en) {
                    vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__tx_ready = 1U;
                }
            }
        }
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__235__PROF__uart_rx__l132(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__235__PROF__uart_rx__l132\n"); );
    // Body
    vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__s_rx_fall 
        = (IData)((4U == (6U & (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__reg_rx_sync))));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__236__PROF__uart_rx__l132(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__236__PROF__uart_rx__l132\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__s_rx_fall 
        = (IData)((4U == (6U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__reg_rx_sync))));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__237__PROF__uart_rx__l45(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__237__PROF__uart_rx__l45\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__parity_bit_next 
        = vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__parity_bit;
    if ((1U & (~ ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__CS) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__CS))) {
            if ((1U & (~ (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__CS)))) {
                vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__parity_bit_next 
                    = ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__parity_bit) 
                       ^ ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__reg_rx_sync) 
                          >> 2U));
            }
        } else if ((1U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__CS))) {
            vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__parity_bit_next = 0U;
        }
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__238__PROF__uart_rx__l135(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__238__PROF__uart_rx__l135\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__bit_done 
        = ((IData)(vlSelf->rst) & ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__baudgen_en) 
                                   & (0x1b2U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__baud_cnt))));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__239__PROF__uart_rx__l45(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__239__PROF__uart_rx__l45\n"); );
    // Body
    vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__parity_bit_next 
        = vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__parity_bit;
    if ((1U & (~ ((IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__CS) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__CS))) {
            if ((1U & (~ (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__CS)))) {
                vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__parity_bit_next 
                    = ((IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__parity_bit) 
                       ^ ((IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__reg_rx_sync) 
                          >> 2U));
            }
        } else if ((1U & (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__CS))) {
            vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__parity_bit_next = 0U;
        }
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__240__PROF__uart_rx__l135(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__240__PROF__uart_rx__l135\n"); );
    // Body
    vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__bit_done 
        = ((IData)(vlSelf->rst) & ((IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__baudgen_en) 
                                   & (0x1b2U == (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__baud_cnt))));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__241__PROF__uart_tx__l41(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__241__PROF__uart_tx__l41\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__parity_bit_next 
        = vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__parity_bit;
    if ((1U & (~ ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__CS) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__CS))) {
            if ((1U & (~ (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__CS)))) {
                vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__parity_bit_next 
                    = (1U & ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__parity_bit) 
                             ^ (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__reg_data)));
            }
        } else if ((1U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__CS))) {
            vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__parity_bit_next = 0U;
        }
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__242__PROF__uart_tx__l129(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__242__PROF__uart_tx__l129\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__bit_done 
        = ((IData)(vlSelf->rst) & ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__baudgen_en) 
                                   & (0x1b2U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__baud_cnt))));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__243__PROF__uart_tx__l129(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__243__PROF__uart_tx__l129\n"); );
    // Body
    vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__bit_done 
        = ((IData)(vlSelf->rst) & ((IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__baudgen_en) 
                                   & (0x1b2U == (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__baud_cnt))));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__244__PROF__uart_tx__l41(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__244__PROF__uart_tx__l41\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_uart_rx = 1U;
    if ((4U & (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__CS))) {
        if ((1U & (~ ((IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__CS) 
                      >> 1U)))) {
            vlSelf->soc_tb__DOT__soc_uart_rx = 1U;
        }
    } else if ((2U & (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__CS))) {
        vlSelf->soc_tb__DOT__soc_uart_rx = (1U & ((1U 
                                                   & (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__CS))
                                                   ? (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__parity_bit)
                                                   : (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__reg_data)));
    } else if ((1U & (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__CS))) {
        vlSelf->soc_tb__DOT__soc_uart_rx = 0U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__245__PROF__uart_tx__l41(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__245__PROF__uart_tx__l41\n"); );
    // Body
    vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__parity_bit_next 
        = vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__parity_bit;
    if ((1U & (~ ((IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__CS) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__CS))) {
            if ((1U & (~ (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__CS)))) {
                vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__parity_bit_next 
                    = (1U & ((IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__parity_bit) 
                             ^ (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__reg_data)));
            }
        } else if ((1U & (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__CS))) {
            vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__parity_bit_next = 0U;
        }
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__246__PROF__uart_rx__l104(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__246__PROF__uart_rx__l104\n"); );
    // Body
    if (vlSelf->rst) {
        if (vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__sampleData) {
            vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__reg_data 
                = vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__reg_data_next;
        }
    } else {
        vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__reg_data = 0xffU;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__247__PROF__uart_rx__l104(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__247__PROF__uart_rx__l104\n"); );
    // Body
    if (vlSelf->rst) {
        if (vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__sampleData) {
            vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__reg_data 
                = vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__reg_data_next;
        }
    } else {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__reg_data = 0xffU;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__248__PROF__io_generic_fifo__l76(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__248__PROF__io_generic_fifo__l76\n"); );
    // Body
    vlSelf->soc_tb__DOT__uart_u__DOT__tx_data = vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer
        [vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__pointer_out];
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__249__PROF__io_generic_fifo__l29(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__249__PROF__io_generic_fifo__l29\n"); );
    // Body
    vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__full 
        = (8U == (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__elements));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__250__PROF__io_generic_fifo__l77(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__250__PROF__io_generic_fifo__l77\n"); );
    // Body
    vlSelf->soc_tb__DOT__uart_u__DOT__tx_valid = (0U 
                                                  != (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__elements));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__251__PROF__uart__l62(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__251__PROF__uart__l62\n"); );
    // Body
    if (vlSelf->rst) {
        if (vlSelf->m4_cyc) {
            if ((0x2000300U == vlSelf->m4_addr)) {
                if (vlSelf->m4_we) {
                    vlSelf->soc_tb__DOT__uart_u__DOT__fifo_tx_data 
                        = (0xffU & vlSelf->m4_wdata);
                }
            }
        }
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__252__PROF__io_generic_fifo__l29(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__252__PROF__io_generic_fifo__l29\n"); );
    // Body
    vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__full 
        = (8U == (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__elements));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__253__PROF__io_generic_fifo__l77(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__253__PROF__io_generic_fifo__l77\n"); );
    // Body
    vlSelf->soc_tb__DOT__uart_u__DOT__fifo_rx_valid 
        = (0U != (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__elements));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__254__PROF__uart__l62(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__254__PROF__uart__l62\n"); );
    // Body
    if (vlSelf->rst) {
        if (vlSelf->m4_cyc) {
            if ((0x2000300U != vlSelf->m4_addr)) {
                if ((0x2000304U != vlSelf->m4_addr)) {
                    if ((0x2000308U != vlSelf->m4_addr)) {
                        if ((0x200030cU == vlSelf->m4_addr)) {
                            if (vlSelf->m4_we) {
                                vlSelf->soc_tb__DOT__uart_u__DOT__in_watermark 
                                    = (vlSelf->m4_wdata 
                                       >> 0x1dU);
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSelf->soc_tb__DOT__uart_u__DOT__in_watermark = 1U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__255__PROF__uart__l62(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__255__PROF__uart__l62\n"); );
    // Body
    if (vlSelf->rst) {
        if (vlSelf->m4_cyc) {
            if ((0x2000300U != vlSelf->m4_addr)) {
                if ((0x2000304U != vlSelf->m4_addr)) {
                    if ((0x2000308U != vlSelf->m4_addr)) {
                        if ((0x200030cU == vlSelf->m4_addr)) {
                            if (vlSelf->m4_we) {
                                vlSelf->soc_tb__DOT__uart_u__DOT__in_irq_en 
                                    = (1U & (vlSelf->m4_wdata 
                                             >> 2U));
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSelf->soc_tb__DOT__uart_u__DOT__in_irq_en = 1U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__256__PROF__uart__l62(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__256__PROF__uart__l62\n"); );
    // Body
    if (vlSelf->rst) {
        if (vlSelf->m4_cyc) {
            if ((0x2000300U != vlSelf->m4_addr)) {
                if ((0x2000304U != vlSelf->m4_addr)) {
                    if ((0x2000308U != vlSelf->m4_addr)) {
                        if ((0x200030cU == vlSelf->m4_addr)) {
                            if (vlSelf->m4_we) {
                                vlSelf->soc_tb__DOT__uart_u__DOT__in_en 
                                    = (1U & vlSelf->m4_wdata);
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSelf->soc_tb__DOT__uart_u__DOT__in_en = 1U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__257__PROF__uart__l62(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__257__PROF__uart__l62\n"); );
    // Body
    if (vlSelf->rst) {
        if (vlSelf->m4_cyc) {
            if ((0x2000300U != vlSelf->m4_addr)) {
                if ((0x2000304U != vlSelf->m4_addr)) {
                    if ((0x2000308U == vlSelf->m4_addr)) {
                        if (vlSelf->m4_we) {
                            vlSelf->soc_tb__DOT__uart_u__DOT__out_en 
                                = (1U & vlSelf->m4_wdata);
                        }
                    }
                }
            }
        }
    } else {
        vlSelf->soc_tb__DOT__uart_u__DOT__out_en = 1U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__258__PROF__uart__l62(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__258__PROF__uart__l62\n"); );
    // Body
    if (vlSelf->rst) {
        if (vlSelf->m4_cyc) {
            if ((0x2000300U != vlSelf->m4_addr)) {
                if ((0x2000304U != vlSelf->m4_addr)) {
                    if ((0x2000308U == vlSelf->m4_addr)) {
                        if (vlSelf->m4_we) {
                            vlSelf->soc_tb__DOT__uart_u__DOT__stop_bit_ctrl 
                                = (1U & (vlSelf->m4_wdata 
                                         >> 1U));
                        }
                    }
                }
            }
        }
    } else {
        vlSelf->soc_tb__DOT__uart_u__DOT__stop_bit_ctrl = 0U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__259__PROF__io_generic_fifo__l29(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__259__PROF__io_generic_fifo__l29\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__full 
        = (8U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__elements));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__260__PROF__io_generic_fifo__l77(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__260__PROF__io_generic_fifo__l77\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__tx_valid 
        = (0U != (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__elements));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__261__PROF__uart_tx__l41(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__261__PROF__uart_tx__l41\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__reg_data_next 
        = (0x80U | (0x7fU & ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__reg_data) 
                             >> 1U)));
    if ((1U & (~ ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__CS) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__CS) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__CS)))) {
                if ((0U != (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__elements))) {
                    vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__reg_data_next 
                        = vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__buffer
                        [vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__pointer_out];
                }
            }
        }
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__262__PROF__uart_rx__l45(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__262__PROF__uart_rx__l45\n"); );
    // Body
    vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__start_bit = 0U;
    if ((1U & (~ ((IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__CS) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__CS) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__CS))) {
                vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__start_bit = 1U;
            } else if (vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__s_rx_fall) {
                vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__start_bit = 1U;
            }
        }
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__263__PROF__uart_rx__l45(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__263__PROF__uart_rx__l45\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__start_bit = 0U;
    if ((1U & (~ ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__CS) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__CS) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__CS))) {
                vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__start_bit = 1U;
            } else if (vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__s_rx_fall) {
                vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__start_bit = 1U;
            }
        }
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__264__PROF__uart_rx__l45(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__264__PROF__uart_rx__l45\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__baudgen_en = 0U;
    if ((4U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__CS))) {
        if ((1U & (~ ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__CS) 
                      >> 1U)))) {
            vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__baudgen_en = 1U;
        }
    } else if ((2U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__CS))) {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__baudgen_en = 1U;
    } else if ((1U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__CS))) {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__baudgen_en = 1U;
    } else if (vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__s_rx_fall) {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__baudgen_en = 1U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__265__PROF__uart_rx__l141(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__265__PROF__uart_rx__l141\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__baud_cnt 
        = vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__baud_cnt;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__267__PROF__uart_rx__l45(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__267__PROF__uart_rx__l45\n"); );
    // Body
    vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__baudgen_en = 0U;
    if ((4U & (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__CS))) {
        if ((1U & (~ ((IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__CS) 
                      >> 1U)))) {
            vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__baudgen_en = 1U;
        }
    } else if ((2U & (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__CS))) {
        vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__baudgen_en = 1U;
    } else if ((1U & (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__CS))) {
        vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__baudgen_en = 1U;
    } else if (vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__s_rx_fall) {
        vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__baudgen_en = 1U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__268__PROF__uart_rx__l141(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__268__PROF__uart_rx__l141\n"); );
    // Body
    vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__baud_cnt 
        = vlSelf->__Vdly__soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__baud_cnt;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__270__PROF__uart_tx__l41(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__270__PROF__uart_tx__l41\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__baudgen_en = 0U;
    if ((4U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__CS))) {
        if ((1U & (~ ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__CS) 
                      >> 1U)))) {
            vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__baudgen_en = 1U;
        }
    } else if ((2U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__CS))) {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__baudgen_en = 1U;
    } else if ((1U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__CS))) {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__baudgen_en = 1U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__271__PROF__uart_tx__l135(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__271__PROF__uart_tx__l135\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__baud_cnt 
        = vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__baud_cnt;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__273__PROF__uart_tx__l41(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__273__PROF__uart_tx__l41\n"); );
    // Body
    vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__baudgen_en = 0U;
    if ((4U & (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__CS))) {
        if ((1U & (~ ((IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__CS) 
                      >> 1U)))) {
            vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__baudgen_en = 1U;
        }
    } else if ((2U & (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__CS))) {
        vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__baudgen_en = 1U;
    } else if ((1U & (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__CS))) {
        vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__baudgen_en = 1U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__274__PROF__uart_tx__l135(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__274__PROF__uart_tx__l135\n"); );
    // Body
    vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__baud_cnt 
        = vlSelf->__Vdly__soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__baud_cnt;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__278__PROF__uart_tx__l41(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__278__PROF__uart_tx__l41\n"); );
    // Body
    vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__reg_data_next 
        = (0x80U | (0x7fU & ((IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__reg_data) 
                             >> 1U)));
    if ((1U & (~ ((IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__CS) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__CS) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__CS)))) {
                if ((0U != (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__elements))) {
                    vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__reg_data_next 
                        = vlSelf->soc_tb__DOT__uart_u__DOT__tx_data;
                }
            }
        }
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__285__PROF__uart_rx__l134(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__285__PROF__uart_rx__l134\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__caonima 
        = (0x1b2U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__baud_cnt));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__286__PROF__uart_rx__l45(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__286__PROF__uart_rx__l45\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__sampleData = 0U;
    if ((1U & (~ ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__CS) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__CS))) {
            if ((1U & (~ (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__CS)))) {
                if (vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__bit_done) {
                    vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__sampleData = 1U;
                }
            }
        }
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__287__PROF__uart_rx__l45(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__287__PROF__uart_rx__l45\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__reg_bit_count_next 
        = vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__reg_bit_count;
    if ((1U & (~ ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__CS) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__CS))) {
            if ((1U & (~ (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__CS)))) {
                if (vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__bit_done) {
                    vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__reg_bit_count_next 
                        = ((7U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__reg_bit_count))
                            ? 0U : (7U & ((IData)(1U) 
                                          + (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__reg_bit_count))));
                }
            }
        }
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__288__PROF__uart_rx__l45(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__288__PROF__uart_rx__l45\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__NS 
        = vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__CS;
    if ((4U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__CS))) {
        if ((2U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__CS))) {
            vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__NS = 0U;
        } else if ((1U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__CS))) {
            if (vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__bit_done) {
                vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__NS = 0U;
            }
        } else if (vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__bit_done) {
            vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__NS = 5U;
        }
    } else if ((2U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__CS))) {
        if ((1U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__CS))) {
            if ((8U != (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__elements))) {
                vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__NS = 4U;
            }
        } else if (vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__bit_done) {
            if ((7U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__reg_bit_count))) {
                vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__NS = 3U;
            }
        }
    } else if ((1U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__CS))) {
        if (vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__bit_done) {
            vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__NS = 2U;
        }
    } else if (vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__s_rx_fall) {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__NS = 1U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__289__PROF__uart_rx__l134(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__289__PROF__uart_rx__l134\n"); );
    // Body
    vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__caonima 
        = (0x1b2U == (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__baud_cnt));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__290__PROF__uart_rx__l45(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__290__PROF__uart_rx__l45\n"); );
    // Body
    vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__sampleData = 0U;
    if ((1U & (~ ((IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__CS) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__CS))) {
            if ((1U & (~ (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__CS)))) {
                if (vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__bit_done) {
                    vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__sampleData = 1U;
                }
            }
        }
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__291__PROF__uart_rx__l45(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__291__PROF__uart_rx__l45\n"); );
    // Body
    vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__reg_bit_count_next 
        = vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__reg_bit_count;
    if ((1U & (~ ((IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__CS) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__CS))) {
            if ((1U & (~ (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__CS)))) {
                if (vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__bit_done) {
                    vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__reg_bit_count_next 
                        = ((7U == (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__reg_bit_count))
                            ? 0U : (7U & ((IData)(1U) 
                                          + (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__reg_bit_count))));
                }
            }
        }
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__292__PROF__uart_rx__l45(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__292__PROF__uart_rx__l45\n"); );
    // Body
    vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__NS 
        = vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__CS;
    if ((4U & (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__CS))) {
        if ((2U & (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__CS))) {
            vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__NS = 0U;
        } else if ((1U & (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__CS))) {
            if (vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__bit_done) {
                vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__NS = 0U;
            }
        } else if (vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__bit_done) {
            vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__NS = 5U;
        }
    } else if ((2U & (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__CS))) {
        if ((1U & (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__CS))) {
            if ((8U != (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_fifo__DOT__elements))) {
                vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__NS = 4U;
            }
        } else if (vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__bit_done) {
            if ((7U == (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__reg_bit_count))) {
                vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__NS = 3U;
            }
        }
    } else if ((1U & (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__CS))) {
        if (vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__bit_done) {
            vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__NS = 2U;
        }
    } else if (vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__s_rx_fall) {
        vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__NS = 1U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__293__PROF__uart_tx__l127(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__293__PROF__uart_tx__l127\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__caonima 
        = (0x1b2U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__baud_cnt));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__294__PROF__uart_tx__l41(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__294__PROF__uart_tx__l41\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__reg_bit_count_next 
        = vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__reg_bit_count;
    if ((1U & (~ ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__CS) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__CS))) {
            if ((1U & (~ (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__CS)))) {
                if (vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__bit_done) {
                    vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__reg_bit_count_next 
                        = ((7U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__reg_bit_count))
                            ? 0U : (7U & ((IData)(1U) 
                                          + (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__reg_bit_count))));
                }
            }
        }
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__295__PROF__uart_tx__l41(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__295__PROF__uart_tx__l41\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__sampleData = 0U;
    if ((1U & (~ ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__CS) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__CS))) {
            if ((1U & (~ (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__CS)))) {
                if (vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__bit_done) {
                    if ((7U != (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__reg_bit_count))) {
                        vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__sampleData = 1U;
                    }
                }
            }
        } else if ((1U & (~ (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__CS)))) {
            if ((0U != (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__elements))) {
                vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__sampleData = 1U;
            }
        }
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__296__PROF__uart_tx__l41(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__296__PROF__uart_tx__l41\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__NS 
        = vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__CS;
    if ((4U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__CS))) {
        if ((2U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__CS))) {
            vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__NS = 0U;
        } else if ((1U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__CS))) {
            if (vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__bit_done) {
                vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__NS = 0U;
            }
        } else if (vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__bit_done) {
            vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__NS 
                = ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__stop_bit_ctrl)
                    ? 5U : 0U);
        }
    } else if ((2U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__CS))) {
        if ((1U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__CS))) {
            if (vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__bit_done) {
                vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__NS = 4U;
            }
        } else if (vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__bit_done) {
            if ((7U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__reg_bit_count))) {
                vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__NS = 3U;
            }
        }
    } else if ((1U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__CS))) {
        if (vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__bit_done) {
            vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__NS = 2U;
        }
    } else if ((0U != (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_fifo__DOT__elements))) {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__NS = 1U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__297__PROF__uart_tx__l127(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__297__PROF__uart_tx__l127\n"); );
    // Body
    vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__caonima 
        = (0x1b2U == (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__baud_cnt));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__298__PROF__uart_tx__l41(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__298__PROF__uart_tx__l41\n"); );
    // Body
    vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__reg_bit_count_next 
        = vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__reg_bit_count;
    if ((1U & (~ ((IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__CS) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__CS))) {
            if ((1U & (~ (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__CS)))) {
                if (vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__bit_done) {
                    vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__reg_bit_count_next 
                        = ((7U == (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__reg_bit_count))
                            ? 0U : (7U & ((IData)(1U) 
                                          + (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__reg_bit_count))));
                }
            }
        }
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__299__PROF__uart_tx__l41(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__299__PROF__uart_tx__l41\n"); );
    // Body
    vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__sampleData = 0U;
    if ((1U & (~ ((IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__CS) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__CS))) {
            if ((1U & (~ (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__CS)))) {
                if (vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__bit_done) {
                    if ((7U != (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__reg_bit_count))) {
                        vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__sampleData = 1U;
                    }
                }
            }
        } else if ((1U & (~ (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__CS)))) {
            if ((0U != (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__elements))) {
                vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__sampleData = 1U;
            }
        }
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__300__PROF__uart_rx__l45(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__300__PROF__uart_rx__l45\n"); );
    // Body
    vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__reg_data_next 
        = vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__reg_data;
    if ((1U & (~ ((IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__CS) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__CS))) {
            if ((1U & (~ (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__CS)))) {
                vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__reg_data_next 
                    = ((0x80U & ((IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__reg_rx_sync) 
                                 << 5U)) | (0x7fU & 
                                            ((IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_rx_u__DOT__reg_data) 
                                             >> 1U)));
            }
        }
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__301__PROF__uart_rx__l45(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__301__PROF__uart_rx__l45\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__reg_data_next 
        = vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__reg_data;
    if ((1U & (~ ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__CS) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__CS))) {
            if ((1U & (~ (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__CS)))) {
                vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__reg_data_next 
                    = ((0x80U & ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__reg_rx_sync) 
                                 << 5U)) | (0x7fU & 
                                            ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_rx_u__DOT__reg_data) 
                                             >> 1U)));
            }
        }
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__302__PROF__uart_tx__l41(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__302__PROF__uart_tx__l41\n"); );
    // Body
    vlSelf->soc_tb__DOT__uart_u__DOT__tx_ready = 0U;
    if ((1U & (~ ((IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__CS) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__CS) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__CS)))) {
                if (vlSelf->soc_tb__DOT__uart_u__DOT__out_en) {
                    vlSelf->soc_tb__DOT__uart_u__DOT__tx_ready = 1U;
                }
            }
        }
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__303__PROF__uart_tx__l41(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__303__PROF__uart_tx__l41\n"); );
    // Body
    vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__NS 
        = vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__CS;
    if ((4U & (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__CS))) {
        if ((2U & (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__CS))) {
            vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__NS = 0U;
        } else if ((1U & (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__CS))) {
            if (vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__bit_done) {
                vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__NS = 0U;
            }
        } else if (vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__bit_done) {
            vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__NS 
                = ((IData)(vlSelf->soc_tb__DOT__uart_u__DOT__stop_bit_ctrl)
                    ? 5U : 0U);
        }
    } else if ((2U & (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__CS))) {
        if ((1U & (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__CS))) {
            if (vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__bit_done) {
                vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__NS = 4U;
            }
        } else if (vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__bit_done) {
            if ((7U == (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__reg_bit_count))) {
                vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__NS = 3U;
            }
        }
    } else if ((1U & (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__CS))) {
        if (vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__bit_done) {
            vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__NS = 2U;
        }
    } else if ((0U != (IData)(vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_fifo__DOT__elements))) {
        vlSelf->soc_tb__DOT__uart_u__DOT__uart_tx_u__DOT__NS = 1U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__328__PROF__async_fifo__l99(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__328__PROF__async_fifo__l99\n"); );
    // Body
    vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__full_q 
        = vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__full_q;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__338__PROF__async_fifo__l174(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__338__PROF__async_fifo__l174\n"); );
    // Body
    vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__empty_q 
        = vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__empty_q;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__341__PROF__async_fifo__l89(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__341__PROF__async_fifo__l89\n"); );
    // Body
    if (vlSelf->rst) {
        if (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__s_resp_wr_en) {
            if ((1U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__wr_cnt))) {
                vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__full_q = 1U;
            }
        } else if (((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__full_q) 
                    & (2U > (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__wr_cnt)))) {
            vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__full_q = 0U;
        }
    } else {
        vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__full_q = 0U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__342__PROF__wbinterconnect__l192(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__342__PROF__wbinterconnect__l192\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__slave_select 
        = ((IData)(vlSelf->rst) ? (0xfU & (vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr 
                                           >> 8U)) : 0U);
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__343__PROF__async_fifo__l111(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__343__PROF__async_fifo__l111\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__sync_rd_ptr_1 
        = ((IData)(vlSelf->rst) ? (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__sync_rd_ptr_0)
            : 0U);
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__344__PROF__async_wb__l82(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__344__PROF__async_wb__l82\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__wbs_ack_f 
        = ((IData)(vlSelf->rst) & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__ti_soc_ack));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__345__PROF__async_fifo__l164(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__345__PROF__async_fifo__l164\n"); );
    // Body
    if (vlSelf->rst) {
        if (vlSelf->soc_tb__DOT__soc_top_u__DOT__ti_soc_ack) {
            if ((1U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__rd_cnt))) {
                vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__empty_q = 1U;
            }
        } else if (((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__empty_q) 
                    & (0U != (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__rd_cnt)))) {
            vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__empty_q = 0U;
        }
    } else {
        vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__empty_q = 1U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__346__PROF__wbinterconnect__l149(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__346__PROF__wbinterconnect__l149\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_master 
        = ((IData)(vlSelf->rst) ? ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_cyc)
                                    ? (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_master)
                                    : (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__next_master))
            : 1U);
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__347__PROF__async_fifo__l187(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__347__PROF__async_fifo__l187\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__sync_wr_ptr_1 
        = ((IData)(vlSelf->rst) ? (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__sync_wr_ptr_0)
            : 0U);
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__348__PROF__async_fifo__l99(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__348__PROF__async_fifo__l99\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__full_q 
        = vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__full_q;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__353__PROF__async_fifo__l174(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__353__PROF__async_fifo__l174\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__empty_q 
        = vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__empty_q;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__357__PROF__async_fifo__l151(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__357__PROF__async_fifo__l151\n"); );
    // Init
    CData/*1:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__grey2bin__29__Vfuncout;
    CData/*1:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__grey2bin__29__grey;
    SData/*8:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__grey2bin__29__grey_8;
    CData/*1:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__30__Vfuncout;
    CData/*2:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__30__grey;
    CData/*1:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__31__Vfuncout;
    CData/*2:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__31__grey;
    CData/*1:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__32__Vfuncout;
    CData/*2:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__32__grey;
    CData/*1:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__33__Vfuncout;
    CData/*2:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__33__grey;
    // Body
    __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__grey2bin__29__grey 
        = vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__sync_rd_ptr_1;
    __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__grey2bin__29__grey_8 
        = __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__grey2bin__29__grey;
    vlSelf->__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__grey2bin__29__bin_8 
        = ((0xffU & (IData)(vlSelf->__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__grey2bin__29__bin_8)) 
           | (0x100U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__grey2bin__29__grey_8)));
    __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__30__grey 
        = ((4U & ((IData)(vlSelf->__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__grey2bin__29__bin_8) 
                  >> 6U)) | (3U & ((IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__grey2bin__29__grey_8) 
                                   >> 6U)));
    __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__30__Vfuncout 
        = ((4U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__30__grey))
            ? ((2U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__30__grey))
                ? ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__30__grey))
                    ? 1U : 0U) : ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__30__grey))
                                   ? 2U : 3U)) : ((2U 
                                                   & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__30__grey))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__30__grey))
                                                    ? 2U
                                                    : 3U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__30__grey))
                                                    ? 1U
                                                    : 0U)));
    vlSelf->__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__grey2bin__29__bin_8 
        = ((0x13fU & (IData)(vlSelf->__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__grey2bin__29__bin_8)) 
           | ((IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__30__Vfuncout) 
              << 6U));
    __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__31__grey 
        = ((4U & ((IData)(vlSelf->__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__grey2bin__29__bin_8) 
                  >> 4U)) | (3U & ((IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__grey2bin__29__grey_8) 
                                   >> 4U)));
    __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__31__Vfuncout 
        = ((4U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__31__grey))
            ? ((2U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__31__grey))
                ? ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__31__grey))
                    ? 1U : 0U) : ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__31__grey))
                                   ? 2U : 3U)) : ((2U 
                                                   & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__31__grey))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__31__grey))
                                                    ? 2U
                                                    : 3U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__31__grey))
                                                    ? 1U
                                                    : 0U)));
    vlSelf->__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__grey2bin__29__bin_8 
        = ((0x1cfU & (IData)(vlSelf->__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__grey2bin__29__bin_8)) 
           | ((IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__31__Vfuncout) 
              << 4U));
    __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__32__grey 
        = ((4U & ((IData)(vlSelf->__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__grey2bin__29__bin_8) 
                  >> 2U)) | (3U & ((IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__grey2bin__29__grey_8) 
                                   >> 2U)));
    __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__32__Vfuncout 
        = ((4U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__32__grey))
            ? ((2U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__32__grey))
                ? ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__32__grey))
                    ? 1U : 0U) : ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__32__grey))
                                   ? 2U : 3U)) : ((2U 
                                                   & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__32__grey))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__32__grey))
                                                    ? 2U
                                                    : 3U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__32__grey))
                                                    ? 1U
                                                    : 0U)));
    vlSelf->__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__grey2bin__29__bin_8 
        = ((0x1f3U & (IData)(vlSelf->__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__grey2bin__29__bin_8)) 
           | ((IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__32__Vfuncout) 
              << 2U));
    __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__33__grey 
        = ((4U & (IData)(vlSelf->__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__grey2bin__29__bin_8)) 
           | (3U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__grey2bin__29__grey_8)));
    __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__33__Vfuncout 
        = ((4U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__33__grey))
            ? ((2U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__33__grey))
                ? ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__33__grey))
                    ? 1U : 0U) : ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__33__grey))
                                   ? 2U : 3U)) : ((2U 
                                                   & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__33__grey))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__33__grey))
                                                    ? 2U
                                                    : 3U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__33__grey))
                                                    ? 1U
                                                    : 0U)));
    vlSelf->__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__grey2bin__29__bin_8 
        = ((0x1fcU & (IData)(vlSelf->__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__grey2bin__29__bin_8)) 
           | (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__33__Vfuncout));
    __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__grey2bin__29__Vfuncout 
        = (3U & (IData)(vlSelf->__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__grey2bin__29__bin_8));
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__sync_rd_ptr 
        = __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__grey2bin__29__Vfuncout;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__358__PROF__async_fifo__l111(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__358__PROF__async_fifo__l111\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__sync_rd_ptr_0 
        = ((IData)(vlSelf->rst) ? (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__grey_rd_ptr)
            : 0U);
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__359__PROF__wbinterconnect__l96(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__359__PROF__wbinterconnect__l96\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__next_master 
        = ((1U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_master))
            ? 2U : ((2U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_master))
                     ? 4U : ((4U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_master))
                              ? 1U : 2U)));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__360__PROF__async_fifo__l187(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__360__PROF__async_fifo__l187\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__sync_wr_ptr_0 
        = ((IData)(vlSelf->rst) ? (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__grey_wr_ptr)
            : 0U);
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__361__PROF__async_fifo__l196(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__361__PROF__async_fifo__l196\n"); );
    // Init
    CData/*2:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__grey2bin__18__Vfuncout;
    CData/*2:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__grey2bin__18__grey;
    SData/*8:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__grey2bin__18__grey_8;
    CData/*1:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__19__Vfuncout;
    CData/*2:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__19__grey;
    CData/*1:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__20__Vfuncout;
    CData/*2:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__20__grey;
    CData/*1:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__21__Vfuncout;
    CData/*2:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__21__grey;
    CData/*1:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__22__Vfuncout;
    CData/*2:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__22__grey;
    // Body
    __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__grey2bin__18__grey 
        = vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__sync_wr_ptr_1;
    __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__grey2bin__18__grey_8 
        = __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__grey2bin__18__grey;
    vlSelf->__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__grey2bin__18__bin_8 
        = ((0xffU & (IData)(vlSelf->__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__grey2bin__18__bin_8)) 
           | (0x100U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__grey2bin__18__grey_8)));
    __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__19__grey 
        = ((4U & ((IData)(vlSelf->__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__grey2bin__18__bin_8) 
                  >> 6U)) | (3U & ((IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__grey2bin__18__grey_8) 
                                   >> 6U)));
    __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__19__Vfuncout 
        = ((4U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__19__grey))
            ? ((2U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__19__grey))
                ? ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__19__grey))
                    ? 1U : 0U) : ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__19__grey))
                                   ? 2U : 3U)) : ((2U 
                                                   & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__19__grey))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__19__grey))
                                                    ? 2U
                                                    : 3U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__19__grey))
                                                    ? 1U
                                                    : 0U)));
    vlSelf->__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__grey2bin__18__bin_8 
        = ((0x13fU & (IData)(vlSelf->__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__grey2bin__18__bin_8)) 
           | ((IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__19__Vfuncout) 
              << 6U));
    __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__20__grey 
        = ((4U & ((IData)(vlSelf->__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__grey2bin__18__bin_8) 
                  >> 4U)) | (3U & ((IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__grey2bin__18__grey_8) 
                                   >> 4U)));
    __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__20__Vfuncout 
        = ((4U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__20__grey))
            ? ((2U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__20__grey))
                ? ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__20__grey))
                    ? 1U : 0U) : ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__20__grey))
                                   ? 2U : 3U)) : ((2U 
                                                   & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__20__grey))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__20__grey))
                                                    ? 2U
                                                    : 3U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__20__grey))
                                                    ? 1U
                                                    : 0U)));
    vlSelf->__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__grey2bin__18__bin_8 
        = ((0x1cfU & (IData)(vlSelf->__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__grey2bin__18__bin_8)) 
           | ((IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__20__Vfuncout) 
              << 4U));
    __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__21__grey 
        = ((4U & ((IData)(vlSelf->__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__grey2bin__18__bin_8) 
                  >> 2U)) | (3U & ((IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__grey2bin__18__grey_8) 
                                   >> 2U)));
    __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__21__Vfuncout 
        = ((4U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__21__grey))
            ? ((2U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__21__grey))
                ? ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__21__grey))
                    ? 1U : 0U) : ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__21__grey))
                                   ? 2U : 3U)) : ((2U 
                                                   & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__21__grey))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__21__grey))
                                                    ? 2U
                                                    : 3U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__21__grey))
                                                    ? 1U
                                                    : 0U)));
    vlSelf->__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__grey2bin__18__bin_8 
        = ((0x1f3U & (IData)(vlSelf->__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__grey2bin__18__bin_8)) 
           | ((IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__21__Vfuncout) 
              << 2U));
    __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__22__grey 
        = ((4U & (IData)(vlSelf->__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__grey2bin__18__bin_8)) 
           | (3U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__grey2bin__18__grey_8)));
    __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__22__Vfuncout 
        = ((4U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__22__grey))
            ? ((2U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__22__grey))
                ? ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__22__grey))
                    ? 1U : 0U) : ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__22__grey))
                                   ? 2U : 3U)) : ((2U 
                                                   & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__22__grey))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__22__grey))
                                                    ? 2U
                                                    : 3U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__22__grey))
                                                    ? 1U
                                                    : 0U)));
    vlSelf->__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__grey2bin__18__bin_8 
        = ((0x1fcU & (IData)(vlSelf->__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__grey2bin__18__bin_8)) 
           | (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__22__Vfuncout));
    __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__grey2bin__18__Vfuncout 
        = (7U & (IData)(vlSelf->__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__grey2bin__18__bin_8));
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__sync_wr_ptr 
        = __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__grey2bin__18__Vfuncout;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__403__PROF__testio_trx__l143(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__403__PROF__testio_trx__l143\n"); );
    // Body
    vlSelf->__Vdly__soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_cycle_counter 
        = vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_cycle_counter;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__404__PROF__async_fifo__l99(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__404__PROF__async_fifo__l99\n"); );
    // Body
    vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__full_q 
        = vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__full_q;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__405__PROF__testio_trx__l183(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__405__PROF__testio_trx__l183\n"); );
    // Body
    vlSelf->__Vdly__soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_rcv_data_parity 
        = vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_rcv_data_parity;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__406__PROF__testio_trx__l176(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__406__PROF__testio_trx__l176\n"); );
    // Body
    vlSelf->__Vdly__soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_rcv_buf 
        = vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_rcv_buf;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__420__PROF__async_wb__l66(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__420__PROF__async_wb__l66\n"); );
    // Body
    vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__PendingRd 
        = vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__PendingRd;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__421__PROF__testio_ma__l80(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__421__PROF__testio_ma__l80\n"); );
    // Body
    vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__rff_cmd_idx 
        = vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__rff_cmd_idx;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__422__PROF__testio_ma__l169(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__422__PROF__testio_ma__l169\n"); );
    // Body
    vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__rff_payload_idx 
        = vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__rff_payload_idx;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__424__PROF__testio_ma__l63(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__424__PROF__testio_ma__l63\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_test_din_en 
        = ((IData)(vlSelf->rst) & (0U != (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__rff_cmd_idx)));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__425__PROF__async_fifo__l164(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__425__PROF__async_fifo__l164\n"); );
    // Body
    if (vlSelf->rst) {
        if ((0U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__rd_cnt))) {
            if (((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__empty_q) 
                 & (0U != (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__rd_cnt)))) {
                vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__empty_q = 0U;
            }
        } else if ((1U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__rd_cnt))) {
            vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__empty_q = 1U;
        }
    } else {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__empty_q = 1U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__426__PROF__testio_trx__l139(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__426__PROF__testio_trx__l139\n"); );
    // Body
    if (vlSelf->rst) {
        if ((0x20U & (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_ctrl))) {
            vlSelf->__Vdly__soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_cycle_counter 
                = ((0x10U & (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_ctrl))
                    ? 0x47U : ((8U & (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_ctrl))
                                ? 0x23U : ((4U & (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_ctrl))
                                            ? 0x21U
                                            : 0xffU)));
        } else if ((1U & (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_ctrl))) {
            vlSelf->__Vdly__soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_cycle_counter 
                = (0xffU & ((IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_cycle_counter) 
                            - (IData)(1U)));
        }
    } else {
        vlSelf->__Vdly__soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_cycle_counter = 0xffU;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__427__PROF__async_fifo__l89(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__427__PROF__async_fifo__l89\n"); );
    // Body
    if (vlSelf->rst) {
        if (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__m_cmd_wr_en) {
            if ((3U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__wr_cnt))) {
                vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__full_q = 1U;
            }
        } else if (((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__full_q) 
                    & (4U > (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__wr_cnt)))) {
            vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__full_q = 0U;
        }
    } else {
        vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__full_q = 0U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__428__PROF__testio_trx__l179(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__428__PROF__testio_trx__l179\n"); );
    // Body
    if (vlSelf->rst) {
        if ((0x20U & (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_ctrl))) {
            vlSelf->__Vdly__soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_rcv_data_parity = 0U;
        } else if ((4U & (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_ctrl))) {
            vlSelf->__Vdly__soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_rcv_data_parity 
                = ((IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_rcv_data_parity) 
                   ^ (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_rcv_data_u__DOT__dff_q));
        }
    } else {
        vlSelf->__Vdly__soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_rcv_data_parity = 0U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__429__PROF__testio_trx__l172(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__429__PROF__testio_trx__l172\n"); );
    // Body
    if (vlSelf->rst) {
        if ((0x20U & (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_ctrl))) {
            vlSelf->__Vdly__soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_rcv_buf 
                = vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_rcv_buf;
        } else if ((4U & (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_ctrl))) {
            vlSelf->__Vdly__soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_rcv_buf 
                = ((0x3fffffffeULL & (vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_rcv_buf 
                                      << 1U)) | (QData)((IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_rcv_data_u__DOT__dff_q)));
        }
    } else {
        vlSelf->__Vdly__soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_rcv_buf = 0ULL;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__430__PROF__m2w_bridge__l90(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__430__PROF__m2w_bridge__l90\n"); );
    // Body
    if (vlSelf->rst) {
        if ((0U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_state_u__DOT__dff_q))) {
            if (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__ti_ma_mem_if_req_valid) {
                vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_mask 
                    = (0xfU & vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__ti_ma_mem_if_req[1U]);
            }
        }
    } else {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_mask = 0U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__431__PROF__m2w_bridge__l90(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__431__PROF__m2w_bridge__l90\n"); );
    // Body
    if (vlSelf->rst) {
        if ((0U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_state_u__DOT__dff_q))) {
            if (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__ti_ma_mem_if_req_valid) {
                vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_addr 
                    = ((vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__ti_ma_mem_if_req[2U] 
                        << 0x1cU) | (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__ti_ma_mem_if_req[1U] 
                                     >> 4U));
            }
        }
    } else {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_addr = 0U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__432__PROF__m2w_bridge__l90(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__432__PROF__m2w_bridge__l90\n"); );
    // Body
    if (vlSelf->rst) {
        if ((0U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_state_u__DOT__dff_q))) {
            if (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__ti_ma_mem_if_req_valid) {
                vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_data 
                    = vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__ti_ma_mem_if_req[0U];
            }
        }
    } else {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_data = 0U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__433__PROF__m2w_bridge__l90(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__433__PROF__m2w_bridge__l90\n"); );
    // Body
    if (vlSelf->rst) {
        if ((0U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_state_u__DOT__dff_q))) {
            vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_valid 
                = vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__ti_ma_mem_if_req_valid;
        }
    } else {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_valid = 0U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__434__PROF__m2w_bridge__l90(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__434__PROF__m2w_bridge__l90\n"); );
    // Body
    if (vlSelf->rst) {
        if ((0U != (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_state_u__DOT__dff_q))) {
            if ((1U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_state_u__DOT__dff_q))) {
                if (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__wbm_ack_i) {
                    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__memif_resp_data 
                        = (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__rd_data_c);
                }
            }
        }
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__435__PROF__m2w_bridge__l90(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__435__PROF__m2w_bridge__l90\n"); );
    // Body
    if (vlSelf->rst) {
        if ((0U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_state_u__DOT__dff_q))) {
            vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_cyc 
                = vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__ti_ma_mem_if_req_valid;
        } else if ((1U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_state_u__DOT__dff_q))) {
            if (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__wbm_ack_i) {
                vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_cyc = 0U;
            }
        }
    } else {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_cyc = 0U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__436__PROF__m2w_bridge__l90(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__436__PROF__m2w_bridge__l90\n"); );
    // Body
    if (vlSelf->rst) {
        if ((0U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_state_u__DOT__dff_q))) {
            vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__memif_req_ready 
                = vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__ti_ma_mem_if_req_valid;
        } else if ((1U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_state_u__DOT__dff_q))) {
            vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__memif_req_ready = 0U;
        }
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__437__PROF__testio__l127(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__437__PROF__testio__l127\n"); );
    // Body
    vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_pre_state 
        = ((IData)(vlSelf->rst) ? (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_current_state)
            : 0U);
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__438__PROF__async_fifo__l164(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__438__PROF__async_fifo__l164\n"); );
    // Init
    CData/*1:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__bin2grey__35__Vfuncout;
    CData/*1:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__bin2grey__35__bin;
    SData/*8:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__bin2grey__35__bin_8;
    SData/*8:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__bin2grey__35__grey_8;
    CData/*1:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__36__Vfuncout;
    CData/*2:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__36__bin;
    CData/*1:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__37__Vfuncout;
    CData/*2:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__37__bin;
    CData/*1:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__38__Vfuncout;
    CData/*2:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__38__bin;
    CData/*1:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__39__Vfuncout;
    CData/*2:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__39__bin;
    // Body
    if (vlSelf->rst) {
        if ((0U != (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__rd_cnt))) {
            __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__bin2grey__35__bin 
                = (3U & ((IData)(1U) + (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__rd_ptr)));
            __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__bin2grey__35__bin_8 
                = __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__bin2grey__35__bin;
            __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__36__bin 
                = (7U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__bin2grey__35__bin_8));
            __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__36__Vfuncout 
                = ((4U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__36__bin))
                    ? ((2U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__36__bin))
                        ? ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__36__bin))
                            ? 0U : 1U) : ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__36__bin))
                                           ? 3U : 2U))
                    : ((2U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__36__bin))
                        ? ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__36__bin))
                            ? 2U : 3U) : ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__36__bin))
                                           ? 1U : 0U)));
            __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__bin2grey__35__grey_8 
                = ((0x1fcU & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__bin2grey__35__grey_8)) 
                   | (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__36__Vfuncout));
            __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__37__bin 
                = (7U & ((IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__bin2grey__35__bin_8) 
                         >> 2U));
            __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__37__Vfuncout 
                = ((4U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__37__bin))
                    ? ((2U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__37__bin))
                        ? ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__37__bin))
                            ? 0U : 1U) : ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__37__bin))
                                           ? 3U : 2U))
                    : ((2U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__37__bin))
                        ? ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__37__bin))
                            ? 2U : 3U) : ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__37__bin))
                                           ? 1U : 0U)));
            __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__bin2grey__35__grey_8 
                = ((0x1f3U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__bin2grey__35__grey_8)) 
                   | ((IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__37__Vfuncout) 
                      << 2U));
            __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__38__bin 
                = (7U & ((IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__bin2grey__35__bin_8) 
                         >> 4U));
            __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__38__Vfuncout 
                = ((4U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__38__bin))
                    ? ((2U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__38__bin))
                        ? ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__38__bin))
                            ? 0U : 1U) : ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__38__bin))
                                           ? 3U : 2U))
                    : ((2U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__38__bin))
                        ? ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__38__bin))
                            ? 2U : 3U) : ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__38__bin))
                                           ? 1U : 0U)));
            __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__bin2grey__35__grey_8 
                = ((0x1cfU & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__bin2grey__35__grey_8)) 
                   | ((IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__38__Vfuncout) 
                      << 4U));
            __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__39__bin 
                = (7U & ((IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__bin2grey__35__bin_8) 
                         >> 6U));
            __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__39__Vfuncout 
                = ((4U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__39__bin))
                    ? ((2U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__39__bin))
                        ? ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__39__bin))
                            ? 0U : 1U) : ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__39__bin))
                                           ? 3U : 2U))
                    : ((2U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__39__bin))
                        ? ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__39__bin))
                            ? 2U : 3U) : ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__39__bin))
                                           ? 1U : 0U)));
            __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__bin2grey__35__grey_8 
                = ((0x3fU & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__bin2grey__35__grey_8)) 
                   | ((0x100U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__bin2grey__35__bin_8)) 
                      | ((IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__39__Vfuncout) 
                         << 6U)));
            __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__bin2grey__35__Vfuncout 
                = (3U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__bin2grey__35__grey_8));
            vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__grey_rd_ptr 
                = __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__bin2grey__35__Vfuncout;
        }
    } else {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__grey_rd_ptr = 0U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__439__PROF__m2w_bridge__l90(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__439__PROF__m2w_bridge__l90\n"); );
    // Body
    if (vlSelf->rst) {
        if ((0U != (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_state_u__DOT__dff_q))) {
            if ((1U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_state_u__DOT__dff_q))) {
                if (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__wbm_ack_i) {
                    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__memif_resp_tid 
                        = vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_tid;
                }
            }
        }
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__440__PROF__async_fifo__l89(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__440__PROF__async_fifo__l89\n"); );
    // Init
    CData/*2:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__bin2grey__2__Vfuncout;
    CData/*2:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__bin2grey__2__bin;
    SData/*8:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__bin2grey__2__bin_8;
    SData/*8:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__bin2grey__2__grey_8;
    CData/*1:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__3__Vfuncout;
    CData/*2:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__3__bin;
    CData/*1:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__4__Vfuncout;
    CData/*2:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__4__bin;
    CData/*1:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__5__Vfuncout;
    CData/*2:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__5__bin;
    CData/*1:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__6__Vfuncout;
    CData/*2:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__6__bin;
    // Body
    if (vlSelf->rst) {
        if (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__m_cmd_wr_en) {
            __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__bin2grey__2__bin 
                = (7U & ((IData)(1U) + (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__wr_ptr)));
            __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__bin2grey__2__bin_8 
                = __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__bin2grey__2__bin;
            __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__3__bin 
                = (7U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__bin2grey__2__bin_8));
            __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__3__Vfuncout 
                = ((4U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__3__bin))
                    ? ((2U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__3__bin))
                        ? ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__3__bin))
                            ? 0U : 1U) : ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__3__bin))
                                           ? 3U : 2U))
                    : ((2U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__3__bin))
                        ? ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__3__bin))
                            ? 2U : 3U) : ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__3__bin))
                                           ? 1U : 0U)));
            __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__bin2grey__2__grey_8 
                = ((0x1fcU & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__bin2grey__2__grey_8)) 
                   | (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__3__Vfuncout));
            __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__4__bin 
                = (7U & ((IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__bin2grey__2__bin_8) 
                         >> 2U));
            __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__4__Vfuncout 
                = ((4U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__4__bin))
                    ? ((2U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__4__bin))
                        ? ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__4__bin))
                            ? 0U : 1U) : ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__4__bin))
                                           ? 3U : 2U))
                    : ((2U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__4__bin))
                        ? ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__4__bin))
                            ? 2U : 3U) : ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__4__bin))
                                           ? 1U : 0U)));
            __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__bin2grey__2__grey_8 
                = ((0x1f3U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__bin2grey__2__grey_8)) 
                   | ((IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__4__Vfuncout) 
                      << 2U));
            __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__5__bin 
                = (7U & ((IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__bin2grey__2__bin_8) 
                         >> 4U));
            __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__5__Vfuncout 
                = ((4U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__5__bin))
                    ? ((2U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__5__bin))
                        ? ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__5__bin))
                            ? 0U : 1U) : ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__5__bin))
                                           ? 3U : 2U))
                    : ((2U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__5__bin))
                        ? ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__5__bin))
                            ? 2U : 3U) : ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__5__bin))
                                           ? 1U : 0U)));
            __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__bin2grey__2__grey_8 
                = ((0x1cfU & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__bin2grey__2__grey_8)) 
                   | ((IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__5__Vfuncout) 
                      << 4U));
            __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__6__bin 
                = (7U & ((IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__bin2grey__2__bin_8) 
                         >> 6U));
            __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__6__Vfuncout 
                = ((4U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__6__bin))
                    ? ((2U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__6__bin))
                        ? ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__6__bin))
                            ? 0U : 1U) : ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__6__bin))
                                           ? 3U : 2U))
                    : ((2U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__6__bin))
                        ? ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__6__bin))
                            ? 2U : 3U) : ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__6__bin))
                                           ? 1U : 0U)));
            __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__bin2grey__2__grey_8 
                = ((0x3fU & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__bin2grey__2__grey_8)) 
                   | ((0x100U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__bin2grey__2__bin_8)) 
                      | ((IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__6__Vfuncout) 
                         << 6U)));
            __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__bin2grey__2__Vfuncout 
                = (7U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__bin2grey__2__grey_8));
            vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__grey_wr_ptr 
                = __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__bin2grey__2__Vfuncout;
        }
    } else {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__grey_wr_ptr = 0U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__441__PROF__m2w_bridge__l90(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__441__PROF__m2w_bridge__l90\n"); );
    // Body
    if (vlSelf->rst) {
        if ((0U != (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_state_u__DOT__dff_q))) {
            if ((1U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_state_u__DOT__dff_q))) {
                if (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__wbm_ack_i) {
                    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__memif_resp_type 
                        = ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_we)
                            ? 1U : 0U);
                }
            }
        }
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__442__PROF__async_fifo__l187(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__442__PROF__async_fifo__l187\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__sync_wr_ptr_1 
        = ((IData)(vlSelf->rst) ? (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__sync_wr_ptr_0)
            : 0U);
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__443__PROF__async_wb__l62(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__443__PROF__async_wb__l62\n"); );
    // Body
    if (vlSelf->rst) {
        if (((((~ (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__PendingRd)) 
               & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_stb)) 
              & (~ (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_we))) 
             & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__m_cmd_wr_en))) {
            vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__PendingRd = 1U;
        } else if (((((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__PendingRd) 
                      & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_stb)) 
                     & (~ (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_we))) 
                    & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__wbm_ack_i))) {
            vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__PendingRd = 0U;
        }
    } else {
        vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__PendingRd = 0U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__444__PROF__testio_ma__l76(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__444__PROF__testio_ma__l76\n"); );
    // Body
    vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__rff_cmd_idx 
        = ((IData)(vlSelf->rst) ? (((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__rff_cmd_idx) 
                                    >= ((1U & vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[0U])
                                         ? 0x46U : 
                                        ((1U & vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[0U])
                                          ? 0x7fU : 0x22U)))
                                    ? 0U : (0x7fU & 
                                            ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__test_din_en)
                                              ? ((IData)(1U) 
                                                 + (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__rff_cmd_idx))
                                              : (((IData)(vlSelf->soc_tb__DOT__soc_ti_oen) 
                                                  & ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_test_din) 
                                                     & (~ (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__rff_ti_send_data))))
                                                  ? 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__rff_cmd_idx))
                                                  : 0U))))
            : 0U);
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__445__PROF__testio_ma__l157(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__445__PROF__testio_ma__l157\n"); );
    // Body
    if (vlSelf->rst) {
        if ((1U & vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[0U])) {
            if ((1U & vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[0U])) {
                if (((5U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__rff_cdcst)) 
                     & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__memif_resp_valid))) {
                    vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__rff_payload_idx = 0U;
                } else if (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__rff_payload_in_progress) {
                    vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__rff_payload_idx 
                        = (0x7fU & ((IData)(1U) + (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__rff_payload_idx)));
                }
            }
        } else if (((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__memif_resp_valid) 
                    & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__ti_ma_mem_if_resp_ready))) {
            vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__rff_payload_idx = 0U;
        } else if (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__rff_payload_in_progress) {
            vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__rff_payload_idx 
                = (0x7fU & ((IData)(1U) + (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__rff_payload_idx)));
        }
    } else {
        vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__rff_payload_idx = 0U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__446__PROF__async_fifo__l111(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__446__PROF__async_fifo__l111\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__sync_rd_ptr_1 
        = ((IData)(vlSelf->rst) ? (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__sync_rd_ptr_0)
            : 0U);
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__449__PROF__async_fifo__l99(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__449__PROF__async_fifo__l99\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__full_q 
        = vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__full_q;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__450__PROF__testio_trx__l183(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__450__PROF__testio_trx__l183\n"); );
    // Body
    vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_rcv_data_parity 
        = vlSelf->__Vdly__soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_rcv_data_parity;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__451__PROF__testio_trx__l176(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__451__PROF__testio_trx__l176\n"); );
    // Body
    vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_rcv_buf 
        = vlSelf->__Vdly__soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_rcv_buf;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__470__PROF__async_wb__l66(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__470__PROF__async_wb__l66\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__PendingRd 
        = vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__PendingRd;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__476__PROF__testio__l132(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__476__PROF__testio__l132\n"); );
    // Body
    vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_current_state 
        = ((IData)(vlSelf->rst) ? (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_next_state)
            : 0U);
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__477__PROF__async_fifo__l164(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__477__PROF__async_fifo__l164\n"); );
    // Body
    if (vlSelf->rst) {
        if ((0U != (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__rd_cnt))) {
            vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__rd_ptr 
                = vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__rd_ptr_inc;
        }
    } else {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__rd_ptr = 0U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__478__PROF__m2w_bridge__l90(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__478__PROF__m2w_bridge__l90\n"); );
    // Body
    if (vlSelf->rst) {
        if ((0U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_state_u__DOT__dff_q))) {
            if (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__ti_ma_mem_if_req_valid) {
                vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_tid 
                    = (0xffffU & (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__ti_ma_mem_if_req[2U] 
                                  >> 4U));
            }
        }
    } else {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_tid = 0U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__479__PROF__async_fifo__l89(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__479__PROF__async_fifo__l89\n"); );
    // Body
    if (vlSelf->rst) {
        if (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__m_cmd_wr_en) {
            vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__wr_ptr 
                = vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__wr_ptr_inc;
        }
    } else {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__wr_ptr = 0U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__480__PROF__m2w_bridge__l141(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__480__PROF__m2w_bridge__l141\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__ti_ma_mem_if_resp 
        = (((QData)((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__memif_resp_type)) 
            << 0x30U) | (((QData)((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__memif_resp_tid)) 
                          << 0x20U) | (QData)((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__memif_resp_data))));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__481__PROF__async_fifo__l196(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__481__PROF__async_fifo__l196\n"); );
    // Init
    CData/*1:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__grey2bin__40__Vfuncout;
    CData/*1:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__grey2bin__40__grey;
    SData/*8:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__grey2bin__40__grey_8;
    CData/*1:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__41__Vfuncout;
    CData/*2:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__41__grey;
    CData/*1:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__42__Vfuncout;
    CData/*2:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__42__grey;
    CData/*1:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__43__Vfuncout;
    CData/*2:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__43__grey;
    CData/*1:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__44__Vfuncout;
    CData/*2:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__44__grey;
    // Body
    __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__grey2bin__40__grey 
        = vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__sync_wr_ptr_1;
    __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__grey2bin__40__grey_8 
        = __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__grey2bin__40__grey;
    vlSelf->__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__grey2bin__40__bin_8 
        = ((0xffU & (IData)(vlSelf->__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__grey2bin__40__bin_8)) 
           | (0x100U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__grey2bin__40__grey_8)));
    __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__41__grey 
        = ((4U & ((IData)(vlSelf->__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__grey2bin__40__bin_8) 
                  >> 6U)) | (3U & ((IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__grey2bin__40__grey_8) 
                                   >> 6U)));
    __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__41__Vfuncout 
        = ((4U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__41__grey))
            ? ((2U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__41__grey))
                ? ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__41__grey))
                    ? 1U : 0U) : ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__41__grey))
                                   ? 2U : 3U)) : ((2U 
                                                   & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__41__grey))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__41__grey))
                                                    ? 2U
                                                    : 3U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__41__grey))
                                                    ? 1U
                                                    : 0U)));
    vlSelf->__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__grey2bin__40__bin_8 
        = ((0x13fU & (IData)(vlSelf->__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__grey2bin__40__bin_8)) 
           | ((IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__41__Vfuncout) 
              << 6U));
    __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__42__grey 
        = ((4U & ((IData)(vlSelf->__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__grey2bin__40__bin_8) 
                  >> 4U)) | (3U & ((IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__grey2bin__40__grey_8) 
                                   >> 4U)));
    __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__42__Vfuncout 
        = ((4U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__42__grey))
            ? ((2U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__42__grey))
                ? ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__42__grey))
                    ? 1U : 0U) : ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__42__grey))
                                   ? 2U : 3U)) : ((2U 
                                                   & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__42__grey))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__42__grey))
                                                    ? 2U
                                                    : 3U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__42__grey))
                                                    ? 1U
                                                    : 0U)));
    vlSelf->__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__grey2bin__40__bin_8 
        = ((0x1cfU & (IData)(vlSelf->__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__grey2bin__40__bin_8)) 
           | ((IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__42__Vfuncout) 
              << 4U));
    __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__43__grey 
        = ((4U & ((IData)(vlSelf->__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__grey2bin__40__bin_8) 
                  >> 2U)) | (3U & ((IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__grey2bin__40__grey_8) 
                                   >> 2U)));
    __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__43__Vfuncout 
        = ((4U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__43__grey))
            ? ((2U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__43__grey))
                ? ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__43__grey))
                    ? 1U : 0U) : ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__43__grey))
                                   ? 2U : 3U)) : ((2U 
                                                   & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__43__grey))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__43__grey))
                                                    ? 2U
                                                    : 3U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__43__grey))
                                                    ? 1U
                                                    : 0U)));
    vlSelf->__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__grey2bin__40__bin_8 
        = ((0x1f3U & (IData)(vlSelf->__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__grey2bin__40__bin_8)) 
           | ((IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__43__Vfuncout) 
              << 2U));
    __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__44__grey 
        = ((4U & (IData)(vlSelf->__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__grey2bin__40__bin_8)) 
           | (3U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__grey2bin__40__grey_8)));
    __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__44__Vfuncout 
        = ((4U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__44__grey))
            ? ((2U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__44__grey))
                ? ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__44__grey))
                    ? 1U : 0U) : ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__44__grey))
                                   ? 2U : 3U)) : ((2U 
                                                   & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__44__grey))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__44__grey))
                                                    ? 2U
                                                    : 3U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__44__grey))
                                                    ? 1U
                                                    : 0U)));
    vlSelf->__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__grey2bin__40__bin_8 
        = ((0x1fcU & (IData)(vlSelf->__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__grey2bin__40__bin_8)) 
           | (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_bin__44__Vfuncout));
    __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__grey2bin__40__Vfuncout 
        = (3U & (IData)(vlSelf->__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__grey2bin__40__bin_8));
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__sync_wr_ptr 
        = __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__grey2bin__40__Vfuncout;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__482__PROF__async_fifo__l187(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__482__PROF__async_fifo__l187\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__sync_wr_ptr_0 
        = ((IData)(vlSelf->rst) ? (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__grey_wr_ptr)
            : 0U);
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__483__PROF__m2w_bridge__l90(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__483__PROF__m2w_bridge__l90\n"); );
    // Body
    if (vlSelf->rst) {
        if ((0U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_state_u__DOT__dff_q))) {
            vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_we 
                = ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__ti_ma_mem_if_req_valid) 
                   & (0x100000U == (0x700000U & vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__ti_ma_mem_if_req[2U])));
        } else if ((1U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_state_u__DOT__dff_q))) {
            if (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__wbm_ack_i) {
                vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_we = 0U;
            }
        }
    } else {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_we = 0U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__484__PROF__m2w_bridge__l90(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__484__PROF__m2w_bridge__l90\n"); );
    // Body
    if (vlSelf->rst) {
        if ((0U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_state_u__DOT__dff_q))) {
            vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_stb 
                = vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__ti_ma_mem_if_req_valid;
        } else if ((1U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_state_u__DOT__dff_q))) {
            if (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__wbm_ack_i) {
                vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_stb = 0U;
            }
        }
    } else {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_stb = 0U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__485__PROF__testio_ma__l173(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__485__PROF__testio_ma__l173\n"); );
    // Body
    if (vlSelf->rst) {
        if ((1U & vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[0U])) {
            if ((1U & vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[0U])) {
                if (((5U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__rff_cdcst)) 
                     & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__memif_resp_valid))) {
                    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__rff_payload_in_progress = 1U;
                } else if ((3U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__rff_payload_idx))) {
                    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__rff_payload_in_progress = 0U;
                }
            }
        } else if (((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__memif_resp_valid) 
                    & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__ti_ma_mem_if_resp_ready))) {
            vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__rff_payload_in_progress = 1U;
        } else if ((0x23U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__rff_payload_idx))) {
            vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__rff_payload_in_progress = 0U;
        }
    } else {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__rff_payload_in_progress = 0U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__486__PROF__async_fifo__l151(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__486__PROF__async_fifo__l151\n"); );
    // Init
    CData/*2:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__grey2bin__7__Vfuncout;
    CData/*2:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__grey2bin__7__grey;
    SData/*8:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__grey2bin__7__grey_8;
    CData/*1:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__8__Vfuncout;
    CData/*2:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__8__grey;
    CData/*1:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__9__Vfuncout;
    CData/*2:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__9__grey;
    CData/*1:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__10__Vfuncout;
    CData/*2:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__10__grey;
    CData/*1:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__11__Vfuncout;
    CData/*2:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__11__grey;
    // Body
    __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__grey2bin__7__grey 
        = vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__sync_rd_ptr_1;
    __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__grey2bin__7__grey_8 
        = __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__grey2bin__7__grey;
    vlSelf->__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__grey2bin__7__bin_8 
        = ((0xffU & (IData)(vlSelf->__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__grey2bin__7__bin_8)) 
           | (0x100U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__grey2bin__7__grey_8)));
    __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__8__grey 
        = ((4U & ((IData)(vlSelf->__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__grey2bin__7__bin_8) 
                  >> 6U)) | (3U & ((IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__grey2bin__7__grey_8) 
                                   >> 6U)));
    __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__8__Vfuncout 
        = ((4U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__8__grey))
            ? ((2U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__8__grey))
                ? ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__8__grey))
                    ? 1U : 0U) : ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__8__grey))
                                   ? 2U : 3U)) : ((2U 
                                                   & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__8__grey))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__8__grey))
                                                    ? 2U
                                                    : 3U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__8__grey))
                                                    ? 1U
                                                    : 0U)));
    vlSelf->__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__grey2bin__7__bin_8 
        = ((0x13fU & (IData)(vlSelf->__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__grey2bin__7__bin_8)) 
           | ((IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__8__Vfuncout) 
              << 6U));
    __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__9__grey 
        = ((4U & ((IData)(vlSelf->__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__grey2bin__7__bin_8) 
                  >> 4U)) | (3U & ((IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__grey2bin__7__grey_8) 
                                   >> 4U)));
    __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__9__Vfuncout 
        = ((4U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__9__grey))
            ? ((2U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__9__grey))
                ? ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__9__grey))
                    ? 1U : 0U) : ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__9__grey))
                                   ? 2U : 3U)) : ((2U 
                                                   & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__9__grey))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__9__grey))
                                                    ? 2U
                                                    : 3U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__9__grey))
                                                    ? 1U
                                                    : 0U)));
    vlSelf->__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__grey2bin__7__bin_8 
        = ((0x1cfU & (IData)(vlSelf->__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__grey2bin__7__bin_8)) 
           | ((IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__9__Vfuncout) 
              << 4U));
    __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__10__grey 
        = ((4U & ((IData)(vlSelf->__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__grey2bin__7__bin_8) 
                  >> 2U)) | (3U & ((IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__grey2bin__7__grey_8) 
                                   >> 2U)));
    __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__10__Vfuncout 
        = ((4U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__10__grey))
            ? ((2U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__10__grey))
                ? ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__10__grey))
                    ? 1U : 0U) : ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__10__grey))
                                   ? 2U : 3U)) : ((2U 
                                                   & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__10__grey))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__10__grey))
                                                    ? 2U
                                                    : 3U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__10__grey))
                                                    ? 1U
                                                    : 0U)));
    vlSelf->__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__grey2bin__7__bin_8 
        = ((0x1f3U & (IData)(vlSelf->__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__grey2bin__7__bin_8)) 
           | ((IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__10__Vfuncout) 
              << 2U));
    __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__11__grey 
        = ((4U & (IData)(vlSelf->__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__grey2bin__7__bin_8)) 
           | (3U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__grey2bin__7__grey_8)));
    __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__11__Vfuncout 
        = ((4U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__11__grey))
            ? ((2U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__11__grey))
                ? ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__11__grey))
                    ? 1U : 0U) : ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__11__grey))
                                   ? 2U : 3U)) : ((2U 
                                                   & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__11__grey))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__11__grey))
                                                    ? 2U
                                                    : 3U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__11__grey))
                                                    ? 1U
                                                    : 0U)));
    vlSelf->__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__grey2bin__7__bin_8 
        = ((0x1fcU & (IData)(vlSelf->__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__grey2bin__7__bin_8)) 
           | (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_bin__11__Vfuncout));
    __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__grey2bin__7__Vfuncout 
        = (7U & (IData)(vlSelf->__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__grey2bin__7__bin_8));
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__sync_rd_ptr 
        = __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__grey2bin__7__Vfuncout;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__487__PROF__async_fifo__l111(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__487__PROF__async_fifo__l111\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__sync_rd_ptr_0 
        = ((IData)(vlSelf->rst) ? (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__grey_rd_ptr)
            : 0U);
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__495__PROF__testio_ma__l169(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__495__PROF__testio_ma__l169\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__rff_payload_idx 
        = vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__rff_payload_idx;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__500__PROF__w2m_bridge__l86(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__500__PROF__w2m_bridge__l86\n"); );
    // Body
    vlSelf->m3_rdata = ((0xaU == (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_current_state))
                         ? (IData)((vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_rcv_buf 
                                    >> 2U)) : 0xffffffffU);
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__501__PROF__testio__l107(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__501__PROF__testio__l107\n"); );
    // Body
    vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__is_send_mode 
        = ((1U == (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_current_state)) 
           | (6U == (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_current_state)));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__502__PROF__async_fifo__l159(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__502__PROF__async_fifo__l159\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__rd_ptr_inc 
        = (3U & ((IData)(1U) + (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__rd_ptr)));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__503__PROF__async_fifo__l161(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__503__PROF__async_fifo__l161\n"); );
    // Init
    CData/*1:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__get_cnt__34__Vfuncout;
    CData/*1:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__get_cnt__34__wr_ptr;
    CData/*1:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__get_cnt__34__rd_ptr;
    // Body
    __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__get_cnt__34__rd_ptr 
        = vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__rd_ptr;
    __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__get_cnt__34__wr_ptr 
        = vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__sync_wr_ptr;
    __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__get_cnt__34__Vfuncout 
        = (3U & (((IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__get_cnt__34__wr_ptr) 
                  >= (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__get_cnt__34__rd_ptr))
                  ? ((IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__get_cnt__34__wr_ptr) 
                     - (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__get_cnt__34__rd_ptr))
                  : (- ((IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__get_cnt__34__rd_ptr) 
                        - (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__get_cnt__34__wr_ptr)))));
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__rd_cnt 
        = __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__get_cnt__34__Vfuncout;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__504__PROF__async_fifo__l46(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__504__PROF__async_fifo__l46\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__wr_ptr_inc 
        = (7U & ((IData)(1U) + (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__wr_ptr)));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__505__PROF__async_fifo__l55(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__505__PROF__async_fifo__l55\n"); );
    // Init
    CData/*2:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__get_cnt__1__Vfuncout;
    CData/*2:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__get_cnt__1__wr_ptr;
    CData/*2:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__get_cnt__1__rd_ptr;
    // Body
    __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__get_cnt__1__rd_ptr 
        = vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__sync_rd_ptr;
    __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__get_cnt__1__wr_ptr 
        = vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__wr_ptr;
    __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__get_cnt__1__Vfuncout 
        = (7U & (((IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__get_cnt__1__wr_ptr) 
                  >= (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__get_cnt__1__rd_ptr))
                  ? ((IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__get_cnt__1__wr_ptr) 
                     - (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__get_cnt__1__rd_ptr))
                  : (- ((IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__get_cnt__1__rd_ptr) 
                        - (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__get_cnt__1__wr_ptr)))));
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__wr_cnt 
        = __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__get_cnt__1__Vfuncout;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__506__PROF__testio_ma__l222(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__506__PROF__testio_ma__l222\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_ti_oen = 1U;
    if (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__rff_payload_in_progress) {
        vlSelf->soc_tb__DOT__soc_ti_oen = 0U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__507__PROF__testio_ma__l189(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__507__PROF__testio_ma__l189\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__rff_cdcst 
        = ((IData)(vlSelf->rst) ? (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__next_cdcst)
            : 0U);
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__508__PROF__m2w_bridge__l90(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__508__PROF__m2w_bridge__l90\n"); );
    // Body
    if (vlSelf->rst) {
        if ((0U != (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_state_u__DOT__dff_q))) {
            if ((1U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_state_u__DOT__dff_q))) {
                if (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__wbm_ack_i) {
                    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__memif_resp_valid = 1U;
                }
            } else if ((2U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_state_u__DOT__dff_q))) {
                if (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__ti_ma_mem_if_resp_ready) {
                    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__memif_resp_valid = 0U;
                }
            }
        }
    } else {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__memif_resp_valid = 0U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__509__PROF__async_wb__l60(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__509__PROF__async_wb__l60\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__m_cmd_wr_en 
        = ((((~ (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__PendingRd)) 
             & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_stb)) 
            & (4U != (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__wr_cnt))) 
           & (3U != (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__wr_cnt)));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__512__PROF__async_wb__l69(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__512__PROF__async_wb__l69\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__wbm_ack_i 
        = (((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_stb) 
            & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_we))
            ? (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__m_cmd_wr_en)
            : (((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_stb) 
                & (~ (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_we))) 
               & (0U != (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__rd_cnt))));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__513__PROF__testio_ma__l230(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__513__PROF__testio_ma__l230\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__ti_ma_mem_if_req_valid 
        = ((4U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__rff_cdcst)) 
           | (2U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__rff_cdcst)));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__514__PROF__testio_ma__l236(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__514__PROF__testio_ma__l236\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__ti_ma_mem_if_resp_ready 
        = ((5U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__rff_cdcst)) 
           | (3U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__rff_cdcst)));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__541__PROF__plic__l105(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__541__PROF__plic__l105\n"); );
    // Body
    vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__gateway_restore 
        = vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__gateway_restore;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__542__PROF__plic__l95(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__542__PROF__plic__l95\n"); );
    // Body
    vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__ip_restore 
        = vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__ip_restore;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__543__PROF__plic__l98(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__543__PROF__plic__l98\n"); );
    // Body
    vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__irq_threshold 
        = vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__irq_threshold;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__546__PROF__plic__l51(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__546__PROF__plic__l51\n"); );
    // Body
    vlSelf->__Vdlyvset__soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__gateway_blocking__v2 = 0U;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__547__PROF__plic__l102(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__547__PROF__plic__l102\n"); );
    // Body
    vlSelf->__Vdlyvset__soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__enable__v0 = 0U;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__548__PROF__plic__l136(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__548__PROF__plic__l136\n"); );
    // Body
    vlSelf->__Vdlyvset__soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__enable__v2 = 0U;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__549__PROF__plic__l146(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__549__PROF__plic__l146\n"); );
    // Body
    vlSelf->__Vdlyvset__soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__enable__v3 = 0U;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__550__PROF__plic__l96(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__550__PROF__plic__l96\n"); );
    // Body
    vlSelf->__Vdlyvset__soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__irq_priority__v0 = 0U;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__551__PROF__plic__l155(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__551__PROF__plic__l155\n"); );
    // Body
    vlSelf->__Vdlyvset__soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__irq_priority__v2 = 0U;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__552__PROF__plic__l164(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__552__PROF__plic__l164\n"); );
    // Body
    vlSelf->__Vdlyvset__soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__irq_priority__v3 = 0U;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__553__PROF__plic__l97(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__553__PROF__plic__l97\n"); );
    // Body
    vlSelf->__Vdlyvset__soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__irq_priority__v1 = 0U;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__554__PROF__plic__l49(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__554__PROF__plic__l49\n"); );
    // Body
    vlSelf->__Vdlyvset__soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__ip__v2 = 0U;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__555__PROF__plic__l43(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__555__PROF__plic__l43\n"); );
    // Body
    vlSelf->__Vdlyvset__soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__ip__v0 = 0U;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__556__PROF__plic__l58(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__556__PROF__plic__l58\n"); );
    // Body
    vlSelf->__Vdlyvset__soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__ip__v3 = 0U;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__557__PROF__plic__l40(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__557__PROF__plic__l40\n"); );
    // Body
    if (vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain1_rst_r) {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__i = 3U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__559__PROF__clint__l39(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__559__PROF__clint__l39\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__mtime 
        = ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain1_rst_r)
            ? 0ULL : vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__next_mtime);
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__560__PROF__clint__l39(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__560__PROF__clint__l39\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__ssip 
        = ((~ (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain1_rst_r)) 
           & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__next_ssip));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__561__PROF__clint__l39(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__561__PROF__clint__l39\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__stimecmp 
        = ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain1_rst_r)
            ? 0xffffULL : vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__next_stimecmp);
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__562__PROF__clint__l39(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__562__PROF__clint__l39\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__mtimecmp 
        = ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain1_rst_r)
            ? 0xffffULL : vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__next_mtimecmp);
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__563__PROF__clint__l39(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__563__PROF__clint__l39\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__msip 
        = ((~ (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain1_rst_r)) 
           & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__next_msip));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__564__PROF__clint__l39(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__564__PROF__clint__l39\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__stime 
        = ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain1_rst_r)
            ? 0ULL : vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__next_stime);
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__565__PROF__clint__l39(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__565__PROF__clint__l39\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__ack_ff 
        = ((~ (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain1_rst_r)) 
           & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__next_ack_ff));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__566__PROF__plic__l40(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__566__PROF__plic__l40\n"); );
    // Body
    if (vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain1_rst_r) {
        vlSelf->__Vdlyvset__soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__ip__v0 = 1U;
    } else if (vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__ip_restore) {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT____Vlvbound_h6566a99a__0 = 0U;
        if ((1U >= (3U & ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__irq_response) 
                          - (IData)(1U))))) {
            vlSelf->__Vdlyvval__soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__ip__v2 
                = vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT____Vlvbound_h6566a99a__0;
            vlSelf->__Vdlyvset__soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__ip__v2 = 1U;
            vlSelf->__Vdlyvdim0__soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__ip__v2 
                = (3U & ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__irq_response) 
                         - (IData)(1U)));
        }
    } else if (vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__gateway_restore) {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT____Vlvbound_h01391c18__0 = 0U;
        if ((1U >= (3U & ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__restore_gateway_id) 
                          - (IData)(1U))))) {
            vlSelf->__Vdlyvval__soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__gateway_blocking__v2 
                = vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT____Vlvbound_h01391c18__0;
            vlSelf->__Vdlyvset__soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__gateway_blocking__v2 = 1U;
            vlSelf->__Vdlyvdim0__soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__gateway_blocking__v2 
                = (3U & ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__restore_gateway_id) 
                         - (IData)(1U)));
        }
    } else if ((((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__elements) 
                 >= (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__in_watermark)) 
                & (~ vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__gateway_blocking
                   [0U]))) {
        vlSelf->__Vdlyvset__soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__ip__v3 = 1U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__574__PROF__plic__l44(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__574__PROF__plic__l44\n"); );
    // Body
    if (vlSelf->__Vdlyvset__soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__ip__v0) {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__gateway_blocking[0U] = 0U;
        vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__gateway_blocking[1U] = 0U;
    }
    if (vlSelf->__Vdlyvset__soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__gateway_blocking__v2) {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__gateway_blocking[vlSelf->__Vdlyvdim0__soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__gateway_blocking__v2] 
            = vlSelf->__Vdlyvval__soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__gateway_blocking__v2;
    }
    if (vlSelf->__Vdlyvset__soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__ip__v3) {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__gateway_blocking[0U] = 1U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__575__PROF__plic__l43(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__575__PROF__plic__l43\n"); );
    // Body
    if (vlSelf->__Vdlyvset__soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__ip__v0) {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__ip[0U] = 0U;
        vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__ip[1U] = 0U;
    }
    if (vlSelf->__Vdlyvset__soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__ip__v2) {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__ip[vlSelf->__Vdlyvdim0__soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__ip__v2] 
            = vlSelf->__Vdlyvval__soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__ip__v2;
    }
    if (vlSelf->__Vdlyvset__soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__ip__v3) {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__ip[0U] = 1U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__577__PROF__plic__l93(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__577__PROF__plic__l93\n"); );
    // Body
    if (vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain1_rst_r) {
        vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__ip_restore = 0U;
        vlSelf->__Vdlyvset__soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__irq_priority__v0 = 1U;
        vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__irq_threshold = 0U;
        vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__ack_ff = 0U;
        vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_rdata = 0U;
        vlSelf->__Vdlyvset__soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__enable__v0 = 1U;
        vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__restore_gateway_id = 0U;
        vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__gateway_restore = 0U;
        vlSelf->__Vdlyvset__soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__irq_priority__v1 = 1U;
    } else if (((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_cyc) 
                & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_stb))) {
        if (((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__ip_restore) 
             | (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__gateway_restore))) {
            if (vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__ip_restore) {
                vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__ip_restore = 0U;
            }
            if (vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__gateway_restore) {
                vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__gateway_restore = 0U;
            }
        } else if ((0x2000114U == vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_addr)) {
            if ((1U & (~ (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_we)))) {
                vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_rdata 
                    = vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__irq_response;
                vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__ack_ff = 1U;
                vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__ip_restore = 1U;
            }
        } else if ((0x2000118U == vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_addr)) {
            if (vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_we) {
                vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__gateway_restore = 1U;
                vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__ack_ff = 1U;
                vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__restore_gateway_id 
                    = (3U & vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_wdata);
            }
        } else if ((0x200011cU == vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_addr)) {
            if (vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_we) {
                vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_rdata 
                    = vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__enable
                    [0U];
                vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__ack_ff = 1U;
            } else {
                vlSelf->__Vdlyvval__soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__enable__v2 
                    = (1U & vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_wdata);
                vlSelf->__Vdlyvset__soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__enable__v2 = 1U;
                vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__ack_ff = 1U;
            }
        } else if ((0x2000120U == vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_addr)) {
            if (vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_we) {
                vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__ack_ff = 1U;
                vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_rdata 
                    = vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__enable
                    [1U];
            } else {
                vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__ack_ff = 1U;
                vlSelf->__Vdlyvval__soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__enable__v3 
                    = (1U & vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_wdata);
                vlSelf->__Vdlyvset__soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__enable__v3 = 1U;
            }
        } else if ((0x2000100U == vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_addr)) {
            if (vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_we) {
                vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__ack_ff = 1U;
                vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_rdata 
                    = vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__irq_priority
                    [0U];
            } else {
                vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__ack_ff = 1U;
                vlSelf->__Vdlyvval__soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__irq_priority__v2 
                    = (1U & vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_wdata);
                vlSelf->__Vdlyvset__soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__irq_priority__v2 = 1U;
            }
        } else if ((0x2000104U == vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_addr)) {
            if (vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_we) {
                vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__ack_ff = 1U;
                vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_rdata 
                    = vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__irq_priority
                    [1U];
            } else {
                vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__ack_ff = 1U;
                vlSelf->__Vdlyvval__soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__irq_priority__v3 
                    = (1U & vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_wdata);
                vlSelf->__Vdlyvset__soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__irq_priority__v3 = 1U;
            }
        } else if ((0x2000110U == vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_addr)) {
            if (vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_we) {
                vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__ack_ff = 1U;
                vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_rdata 
                    = vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__irq_threshold;
            } else {
                vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__ack_ff = 1U;
                vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__irq_threshold 
                    = (7U & vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_wdata);
            }
        } else {
            vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__ack_ff = 0U;
            vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_rdata = 0U;
        }
    } else {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__ack_ff = 0U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__579__PROF__plic__l95(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__579__PROF__plic__l95\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__ip_restore 
        = vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__ip_restore;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__580__PROF__plic__l105(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__580__PROF__plic__l105\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__gateway_restore 
        = vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__gateway_restore;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__581__PROF__plic__l98(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__581__PROF__plic__l98\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__irq_threshold 
        = vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__irq_threshold;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__584__PROF__plic__l102(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__584__PROF__plic__l102\n"); );
    // Body
    if (vlSelf->__Vdlyvset__soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__enable__v0) {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__enable[0U] = 1U;
    }
    if (vlSelf->__Vdlyvset__soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__irq_priority__v1) {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__enable[1U] = 1U;
    }
    if (vlSelf->__Vdlyvset__soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__enable__v2) {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__enable[0U] 
            = vlSelf->__Vdlyvval__soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__enable__v2;
    }
    if (vlSelf->__Vdlyvset__soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__enable__v3) {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__enable[1U] 
            = vlSelf->__Vdlyvval__soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__enable__v3;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__585__PROF__plic__l96(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__585__PROF__plic__l96\n"); );
    // Body
    if (vlSelf->__Vdlyvset__soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__irq_priority__v0) {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__irq_priority[1U] = 2U;
    }
    if (vlSelf->__Vdlyvset__soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__irq_priority__v1) {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__irq_priority[0U] = 3U;
    }
    if (vlSelf->__Vdlyvset__soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__irq_priority__v2) {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__irq_priority[0U] 
            = vlSelf->__Vdlyvval__soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__irq_priority__v2;
    }
    if (vlSelf->__Vdlyvset__soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__irq_priority__v3) {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__irq_priority[1U] 
            = vlSelf->__Vdlyvval__soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__irq_priority__v3;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__587__PROF__plic__l66(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__587__PROF__plic__l66\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__prior_irq_id_h 
        = ((vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__irq_priority
            [1U] > vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__irq_priority
            [0U]) ? 2U : 1U);
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__588__PROF__plic__l83(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__588__PROF__plic__l83\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__irq_response 
        = ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain1_rst_r)
            ? 0U : (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__next_irq_response));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__589__PROF__plic__l71(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__589__PROF__plic__l71\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_ei = 0U;
    if ((((((1U >= (3U & ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__prior_irq_id_h) 
                          - (IData)(1U)))) ? vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__irq_priority
            [(3U & ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__prior_irq_id_h) 
                    - (IData)(1U)))] : 0U) > (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__irq_threshold)) 
          & ((1U >= (3U & ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__prior_irq_id_h) 
                           - (IData)(1U)))) & vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__ip
             [(3U & ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__prior_irq_id_h) 
                     - (IData)(1U)))])) & ((1U >= (3U 
                                                   & ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__prior_irq_id_h) 
                                                      - (IData)(1U)))) 
                                           & vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__enable
                                           [(3U & ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__prior_irq_id_h) 
                                                   - (IData)(1U)))]))) {
        vlSelf->soc_tb__DOT__soc_ei = 1U;
    } else if ((((((1U >= (3U & (((2U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__prior_irq_id_h))
                                   ? 1U : 2U) - (IData)(1U))))
                    ? vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__irq_priority
                   [(3U & (((2U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__prior_irq_id_h))
                             ? 1U : 2U) - (IData)(1U)))]
                    : 0U) > (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__irq_threshold)) 
                 & ((1U >= (3U & (((2U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__prior_irq_id_h))
                                    ? 1U : 2U) - (IData)(1U)))) 
                    & vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__ip
                    [(3U & (((2U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__prior_irq_id_h))
                              ? 1U : 2U) - (IData)(1U)))])) 
                & ((1U >= (3U & (((2U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__prior_irq_id_h))
                                   ? 1U : 2U) - (IData)(1U)))) 
                   & vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__enable
                   [(3U & (((2U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__prior_irq_id_h))
                             ? 1U : 2U) - (IData)(1U)))]))) {
        vlSelf->soc_tb__DOT__soc_ei = 1U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__591__PROF__plic__l71(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__591__PROF__plic__l71\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__next_irq_response 
        = vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__irq_response;
    if ((((((1U >= (3U & ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__prior_irq_id_h) 
                          - (IData)(1U)))) ? vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__irq_priority
            [(3U & ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__prior_irq_id_h) 
                    - (IData)(1U)))] : 0U) > (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__irq_threshold)) 
          & ((1U >= (3U & ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__prior_irq_id_h) 
                           - (IData)(1U)))) & vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__ip
             [(3U & ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__prior_irq_id_h) 
                     - (IData)(1U)))])) & ((1U >= (3U 
                                                   & ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__prior_irq_id_h) 
                                                      - (IData)(1U)))) 
                                           & vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__enable
                                           [(3U & ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__prior_irq_id_h) 
                                                   - (IData)(1U)))]))) {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__next_irq_response 
            = vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__prior_irq_id_h;
    } else if ((((((1U >= (3U & (((2U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__prior_irq_id_h))
                                   ? 1U : 2U) - (IData)(1U))))
                    ? vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__irq_priority
                   [(3U & (((2U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__prior_irq_id_h))
                             ? 1U : 2U) - (IData)(1U)))]
                    : 0U) > (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__irq_threshold)) 
                 & ((1U >= (3U & (((2U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__prior_irq_id_h))
                                    ? 1U : 2U) - (IData)(1U)))) 
                    & vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__ip
                    [(3U & (((2U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__prior_irq_id_h))
                              ? 1U : 2U) - (IData)(1U)))])) 
                & ((1U >= (3U & (((2U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__prior_irq_id_h))
                                   ? 1U : 2U) - (IData)(1U)))) 
                   & vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__enable
                   [(3U & (((2U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__prior_irq_id_h))
                             ? 1U : 2U) - (IData)(1U)))]))) {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__next_irq_response 
            = ((2U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__prior_irq_id_h))
                ? 1U : 2U);
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__624__PROF__uart_tx__l131(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__624__PROF__uart_tx__l131\n"); );
    // Body
    vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__baud_cnt 
        = vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__baud_cnt;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__625__PROF__uart_rx__l137(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__625__PROF__uart_rx__l137\n"); );
    // Body
    vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__baud_cnt 
        = vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__baud_cnt;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__626__PROF__io_generic_fifo__l58(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__626__PROF__io_generic_fifo__l58\n"); );
    // Body
    vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__pointer_in 
        = vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__pointer_in;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__627__PROF__io_generic_fifo__l57(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__627__PROF__io_generic_fifo__l57\n"); );
    // Body
    vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__pointer_out 
        = vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__pointer_out;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__628__PROF__io_generic_fifo__l58(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__628__PROF__io_generic_fifo__l58\n"); );
    // Body
    vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__pointer_in 
        = vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__pointer_in;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__632__PROF__io_generic_fifo__l34(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__632__PROF__io_generic_fifo__l34\n"); );
    // Body
    vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__elements 
        = vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__elements;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__633__PROF__io_generic_fifo__l57(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__633__PROF__io_generic_fifo__l57\n"); );
    // Body
    vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__pointer_out 
        = vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__pointer_out;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__635__PROF__io_generic_fifo__l34(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__635__PROF__io_generic_fifo__l34\n"); );
    // Body
    vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__elements 
        = vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__elements;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__638__PROF__uart__l123(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__638__PROF__uart__l123\n"); );
    // Body
    vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__tx_data_ready 
        = vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__tx_data_ready;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__643__PROF__io_generic_fifo__l48(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__643__PROF__io_generic_fifo__l48\n"); );
    // Body
    vlSelf->__Vdlyvset__soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer__v0 = 0U;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__644__PROF__io_generic_fifo__l51(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__644__PROF__io_generic_fifo__l51\n"); );
    // Body
    vlSelf->__Vdlyvset__soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer__v8 = 0U;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__645__PROF__io_generic_fifo__l48(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__645__PROF__io_generic_fifo__l48\n"); );
    // Body
    vlSelf->__Vdlyvset__soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer__v0 = 0U;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__646__PROF__io_generic_fifo__l51(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__646__PROF__io_generic_fifo__l51\n"); );
    // Body
    vlSelf->__Vdlyvset__soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer__v8 = 0U;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__648__PROF__io_generic_fifo__l45(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__648__PROF__io_generic_fifo__l45\n"); );
    // Body
    if (vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain2_rst_r) {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__loop1 = 8U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__649__PROF__io_generic_fifo__l45(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__649__PROF__io_generic_fifo__l45\n"); );
    // Body
    if (vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain2_rst_r) {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__loop1 = 8U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__650__PROF__uart_tx__l129(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__650__PROF__uart_tx__l129\n"); );
    // Body
    vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__baud_cnt 
        = ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain2_rst_r)
            ? 0U : ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__baudgen_en)
                     ? ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__caonima)
                         ? 0U : (0x1ffU & ((IData)(1U) 
                                           + (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__baud_cnt))))
                     : 0U));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__651__PROF__uart_rx__l135(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__651__PROF__uart_rx__l135\n"); );
    // Body
    vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__baud_cnt 
        = ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain2_rst_r)
            ? 0U : ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__baudgen_en)
                     ? ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__caonima)
                         ? 0U : (0x1ffU & ((IData)(1U) 
                                           + (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__baud_cnt))))
                     : 0U));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__652__PROF__io_generic_fifo__l55(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__652__PROF__io_generic_fifo__l55\n"); );
    // Body
    if (vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain2_rst_r) {
        vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__pointer_in = 0U;
    } else if (((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__rx_valid) 
                & (8U != (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__elements)))) {
        vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__pointer_in 
            = ((7U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__pointer_in))
                ? 0U : (7U & ((IData)(1U) + (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__pointer_in))));
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__653__PROF__io_generic_fifo__l55(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__653__PROF__io_generic_fifo__l55\n"); );
    // Body
    if (vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain2_rst_r) {
        vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__pointer_out = 0U;
    } else if (((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__fifo_rx_ready) 
                & (0U != (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__elements)))) {
        vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__pointer_out 
            = ((7U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__pointer_out))
                ? 0U : (7U & ((IData)(1U) + (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__pointer_out))));
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__654__PROF__io_generic_fifo__l55(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__654__PROF__io_generic_fifo__l55\n"); );
    // Body
    if (vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain2_rst_r) {
        vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__pointer_in = 0U;
    } else if (((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__tx_data_ready) 
                & (8U != (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__elements)))) {
        vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__pointer_in 
            = ((7U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__pointer_in))
                ? 0U : (7U & ((IData)(1U) + (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__pointer_in))));
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__655__PROF__uart_rx__l104(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__655__PROF__uart_rx__l104\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__reg_bit_count 
        = ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain2_rst_r)
            ? 0U : (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__reg_bit_count_next));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__656__PROF__uart_tx__l108(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__656__PROF__uart_tx__l108\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__reg_bit_count 
        = ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain2_rst_r)
            ? 0U : (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__reg_bit_count_next));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__657__PROF__uart_tx__l108(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__657__PROF__uart_tx__l108\n"); );
    // Body
    if (vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain2_rst_r) {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__reg_data = 0xffU;
    } else if (vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__sampleData) {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__reg_data 
            = vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__reg_data_next;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__658__PROF__io_generic_fifo__l32(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__658__PROF__io_generic_fifo__l32\n"); );
    // Body
    if (vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain2_rst_r) {
        vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__elements = 0U;
    } else if ((((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__fifo_rx_ready) 
                 & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__fifo_rx_valid)) 
                & ((~ (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__rx_valid)) 
                   | (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__full)))) {
        vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__elements 
            = (0xfU & ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__elements) 
                       - (IData)(1U)));
    } else if (((((~ (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__fifo_rx_valid)) 
                  | (~ (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__fifo_rx_ready))) 
                 & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__rx_valid)) 
                & (~ (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__full)))) {
        vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__elements 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__elements)));
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__659__PROF__io_generic_fifo__l55(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__659__PROF__io_generic_fifo__l55\n"); );
    // Body
    if (vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain2_rst_r) {
        vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__pointer_out = 0U;
    } else if (((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__tx_ready) 
                & (0U != (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__elements)))) {
        vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__pointer_out 
            = ((7U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__pointer_out))
                ? 0U : (7U & ((IData)(1U) + (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__pointer_out))));
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__660__PROF__uart_rx__l104(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__660__PROF__uart_rx__l104\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__CS 
        = ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain2_rst_r)
            ? 0U : (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__NS));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__661__PROF__io_generic_fifo__l32(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__661__PROF__io_generic_fifo__l32\n"); );
    // Body
    if (vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain2_rst_r) {
        vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__elements = 0U;
    } else if ((((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__tx_ready) 
                 & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__tx_valid)) 
                & ((~ (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__tx_data_ready)) 
                   | (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__full)))) {
        vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__elements 
            = (0xfU & ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__elements) 
                       - (IData)(1U)));
    } else if (((((~ (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__tx_valid)) 
                  | (~ (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__tx_ready))) 
                 & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__tx_data_ready)) 
                & (~ (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__full)))) {
        vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__elements 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__elements)));
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__662__PROF__uart_rx__l123(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__662__PROF__uart_rx__l123\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__reg_rx_sync 
        = ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain2_rst_r)
            ? 7U : ((6U & ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__reg_rx_sync) 
                           << 1U)) | (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_rx_i)));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__663__PROF__uart__l51(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__663__PROF__uart__l51\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain2_rst_r)))) {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__debug_ringback 
            = (((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_cyc) 
                & (0x2000304U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) 
               & (~ (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_we)));
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__664__PROF__uart__l121(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__664__PROF__uart__l121\n"); );
    // Body
    if (vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain2_rst_r) {
        vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__tx_data_ready = 0U;
    } else if (((8U != (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__elements)) 
                & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__tx_data_ready))) {
        vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__tx_data_ready = 0U;
    } else if ((((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_cyc) 
                 & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_we)) 
                & (0x2000300U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr))) {
        vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__tx_data_ready = 1U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__665__PROF__uart__l62(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__665__PROF__uart__l62\n"); );
    // Body
    if (vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain2_rst_r) {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__ack_ff = 0U;
    } else if (vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_cyc) {
        if ((0x2000300U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) {
            vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__ack_ff = 1U;
        } else if ((0x2000304U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) {
            if ((1U & (~ (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_we)))) {
                vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__ack_ff = 1U;
            }
        } else {
            vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__ack_ff 
                = ((0x2000308U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr) 
                   | (0x200030cU == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr));
        }
    } else {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__ack_ff = 0U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__666__PROF__uart_rx__l104(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__666__PROF__uart_rx__l104\n"); );
    // Body
    if (vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain2_rst_r) {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__parity_bit = 0U;
    } else if (vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__bit_done) {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__parity_bit 
            = vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__parity_bit_next;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__667__PROF__uart_tx__l108(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__667__PROF__uart_tx__l108\n"); );
    // Body
    if (vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain2_rst_r) {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__parity_bit = 0U;
    } else if (vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__bit_done) {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__parity_bit 
            = vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__parity_bit_next;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__668__PROF__uart_tx__l108(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__668__PROF__uart_tx__l108\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__CS 
        = ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain2_rst_r)
            ? 0U : ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__out_en)
                     ? (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__NS)
                     : 0U));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__669__PROF__io_generic_fifo__l45(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__669__PROF__io_generic_fifo__l45\n"); );
    // Body
    if (vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain2_rst_r) {
        vlSelf->__Vdlyvset__soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer__v0 = 1U;
    } else if (((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__rx_valid) 
                & (8U != (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__elements)))) {
        vlSelf->__Vdlyvval__soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer__v8 
            = vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__reg_data;
        vlSelf->__Vdlyvset__soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer__v8 = 1U;
        vlSelf->__Vdlyvdim0__soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer__v8 
            = vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__pointer_in;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__670__PROF__io_generic_fifo__l45(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__670__PROF__io_generic_fifo__l45\n"); );
    // Body
    if (vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain2_rst_r) {
        vlSelf->__Vdlyvset__soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer__v0 = 1U;
    } else if (((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__tx_data_ready) 
                & (8U != (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__elements)))) {
        vlSelf->__Vdlyvval__soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer__v8 
            = vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__fifo_tx_data;
        vlSelf->__Vdlyvset__soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer__v8 = 1U;
        vlSelf->__Vdlyvdim0__soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer__v8 
            = vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__pointer_in;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__671__PROF__uart__l62(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__671__PROF__uart__l62\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain2_rst_r)))) {
        if (vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_cyc) {
            if ((0x2000300U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) {
                if ((1U & (~ (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_we)))) {
                    vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_rdata 
                        = vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__tx_data;
                }
            } else if ((0x2000304U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) {
                if ((1U & (~ (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_we)))) {
                    vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_rdata 
                        = ((0U != (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__elements))
                            ? vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer
                           [vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__pointer_out]
                            : 0U);
                }
            } else if ((0x2000308U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) {
                if ((1U & (~ (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_we)))) {
                    vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_rdata 
                        = (((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__stop_bit_ctrl) 
                            << 1U) | (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__out_en));
                }
            } else if ((0x200030cU == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) {
                if ((1U & (~ (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_we)))) {
                    vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_rdata 
                        = (((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__in_watermark) 
                            << 0x1dU) | (((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__elements) 
                                          << 0x19U) 
                                         | (((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__in_irq_en) 
                                             << 2U) 
                                            | (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__in_en))));
                }
            }
        }
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__675__PROF__io_generic_fifo__l57(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__675__PROF__io_generic_fifo__l57\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__pointer_out 
        = vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__pointer_out;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__685__PROF__io_generic_fifo__l58(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__685__PROF__io_generic_fifo__l58\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__pointer_in 
        = vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__pointer_in;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__687__PROF__io_generic_fifo__l58(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__687__PROF__io_generic_fifo__l58\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__pointer_in 
        = vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__pointer_in;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__688__PROF__uart__l123(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__688__PROF__uart__l123\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__tx_data_ready 
        = vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__tx_data_ready;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__689__PROF__io_generic_fifo__l48(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__689__PROF__io_generic_fifo__l48\n"); );
    // Body
    if (vlSelf->__Vdlyvset__soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer__v0) {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer[0U] = 0U;
        vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer[1U] = 0U;
        vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer[2U] = 0U;
        vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer[3U] = 0U;
        vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer[4U] = 0U;
        vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer[5U] = 0U;
        vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer[6U] = 0U;
        vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer[7U] = 0U;
    }
    if (vlSelf->__Vdlyvset__soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer__v8) {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer[vlSelf->__Vdlyvdim0__soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer__v8] 
            = vlSelf->__Vdlyvval__soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer__v8;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__690__PROF__io_generic_fifo__l34(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__690__PROF__io_generic_fifo__l34\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__elements 
        = vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__elements;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__692__PROF__io_generic_fifo__l57(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__692__PROF__io_generic_fifo__l57\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__pointer_out 
        = vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__pointer_out;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__693__PROF__io_generic_fifo__l48(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__693__PROF__io_generic_fifo__l48\n"); );
    // Body
    if (vlSelf->__Vdlyvset__soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer__v0) {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer[0U] = 0U;
        vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer[1U] = 0U;
        vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer[2U] = 0U;
        vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer[3U] = 0U;
        vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer[4U] = 0U;
        vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer[5U] = 0U;
        vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer[6U] = 0U;
        vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer[7U] = 0U;
    }
    if (vlSelf->__Vdlyvset__soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer__v8) {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer[vlSelf->__Vdlyvdim0__soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer__v8] 
            = vlSelf->__Vdlyvval__soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__buffer__v8;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__694__PROF__io_generic_fifo__l34(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__694__PROF__io_generic_fifo__l34\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__elements 
        = vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__elements;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__701__PROF__uart_rx__l45(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__701__PROF__uart_rx__l45\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__rx_valid = 0U;
    if ((1U & (~ ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__CS) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__CS))) {
            if ((1U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__CS))) {
                vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__rx_valid = 1U;
            }
        }
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__702__PROF__uart_rx__l132(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__702__PROF__uart_rx__l132\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__s_rx_fall 
        = (IData)((4U == (6U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__reg_rx_sync))));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__703__PROF__uart_rx__l45(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__703__PROF__uart_rx__l45\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__parity_bit_next 
        = vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__parity_bit;
    if ((1U & (~ ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__CS) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__CS))) {
            if ((1U & (~ (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__CS)))) {
                vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__parity_bit_next 
                    = ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__parity_bit) 
                       ^ ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__reg_rx_sync) 
                          >> 2U));
            }
        } else if ((1U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__CS))) {
            vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__parity_bit_next = 0U;
        }
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__704__PROF__uart_rx__l135(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__704__PROF__uart_rx__l135\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__bit_done 
        = ((~ (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain2_rst_r)) 
           & ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__baudgen_en) 
              & (0x1b2U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__baud_cnt))));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__705__PROF__uart_tx__l129(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__705__PROF__uart_tx__l129\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__bit_done 
        = ((~ (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain2_rst_r)) 
           & ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__baudgen_en) 
              & (0x1b2U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__baud_cnt))));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__706__PROF__uart_tx__l41(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__706__PROF__uart_tx__l41\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_tx_o = 1U;
    if ((4U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__CS))) {
        if ((1U & (~ ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__CS) 
                      >> 1U)))) {
            vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_tx_o = 1U;
        }
    } else if ((2U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__CS))) {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_tx_o 
            = (1U & ((1U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__CS))
                      ? (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__parity_bit)
                      : (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__reg_data)));
    } else if ((1U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__CS))) {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_tx_o = 0U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__707__PROF__uart_tx__l41(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__707__PROF__uart_tx__l41\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__parity_bit_next 
        = vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__parity_bit;
    if ((1U & (~ ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__CS) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__CS))) {
            if ((1U & (~ (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__CS)))) {
                vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__parity_bit_next 
                    = (1U & ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__parity_bit) 
                             ^ (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__reg_data)));
            }
        } else if ((1U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__CS))) {
            vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__parity_bit_next = 0U;
        }
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__708__PROF__uart_rx__l104(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__708__PROF__uart_rx__l104\n"); );
    // Body
    if (vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain2_rst_r) {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__reg_data = 0xffU;
    } else if (vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__sampleData) {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__reg_data 
            = vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__reg_data_next;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__709__PROF__io_generic_fifo__l76(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__709__PROF__io_generic_fifo__l76\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__tx_data 
        = vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__buffer
        [vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__pointer_out];
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__710__PROF__io_generic_fifo__l29(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__710__PROF__io_generic_fifo__l29\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__full 
        = (8U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__elements));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__711__PROF__io_generic_fifo__l77(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__711__PROF__io_generic_fifo__l77\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__tx_valid 
        = (0U != (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__elements));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__712__PROF__uart__l62(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__712__PROF__uart__l62\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain2_rst_r)))) {
        if (vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_cyc) {
            if ((0x2000300U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) {
                if (vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_we) {
                    vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__fifo_tx_data 
                        = (0xffU & vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_wdata);
                }
            }
        }
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__713__PROF__io_generic_fifo__l29(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__713__PROF__io_generic_fifo__l29\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__full 
        = (8U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__elements));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__714__PROF__io_generic_fifo__l77(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__714__PROF__io_generic_fifo__l77\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__fifo_rx_valid 
        = (0U != (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__elements));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__715__PROF__uart__l62(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__715__PROF__uart__l62\n"); );
    // Body
    if (vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain2_rst_r) {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__in_irq_en = 1U;
    } else if (vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_cyc) {
        if ((0x2000300U != vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) {
            if ((0x2000304U != vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) {
                if ((0x2000308U != vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) {
                    if ((0x200030cU == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) {
                        if (vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_we) {
                            vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__in_irq_en 
                                = (1U & (vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_wdata 
                                         >> 2U));
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__716__PROF__uart__l62(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__716__PROF__uart__l62\n"); );
    // Body
    if (vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain2_rst_r) {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__in_en = 1U;
    } else if (vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_cyc) {
        if ((0x2000300U != vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) {
            if ((0x2000304U != vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) {
                if ((0x2000308U != vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) {
                    if ((0x200030cU == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) {
                        if (vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_we) {
                            vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__in_en 
                                = (1U & vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_wdata);
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__717__PROF__uart__l62(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__717__PROF__uart__l62\n"); );
    // Body
    if (vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain2_rst_r) {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__in_watermark = 1U;
    } else if (vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_cyc) {
        if ((0x2000300U != vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) {
            if ((0x2000304U != vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) {
                if ((0x2000308U != vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) {
                    if ((0x200030cU == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) {
                        if (vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_we) {
                            vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__in_watermark 
                                = (vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_wdata 
                                   >> 0x1dU);
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__718__PROF__uart__l62(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__718__PROF__uart__l62\n"); );
    // Body
    if (vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain2_rst_r) {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__out_en = 1U;
    } else if (vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_cyc) {
        if ((0x2000300U != vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) {
            if ((0x2000304U != vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) {
                if ((0x2000308U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) {
                    if (vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_we) {
                        vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__out_en 
                            = (1U & vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_wdata);
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__719__PROF__uart__l62(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__719__PROF__uart__l62\n"); );
    // Body
    if (vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain2_rst_r) {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__stop_bit_ctrl = 0U;
    } else if (vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_cyc) {
        if ((0x2000300U != vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) {
            if ((0x2000304U != vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) {
                if ((0x2000308U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) {
                    if (vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_we) {
                        vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__stop_bit_ctrl 
                            = (1U & (vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_wdata 
                                     >> 1U));
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__720__PROF__uart_rx__l45(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__720__PROF__uart_rx__l45\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__start_bit = 0U;
    if ((1U & (~ ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__CS) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__CS) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__CS))) {
                vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__start_bit = 1U;
            } else if (vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__s_rx_fall) {
                vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__start_bit = 1U;
            }
        }
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__721__PROF__uart_rx__l45(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__721__PROF__uart_rx__l45\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__baudgen_en = 0U;
    if ((4U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__CS))) {
        if ((1U & (~ ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__CS) 
                      >> 1U)))) {
            vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__baudgen_en = 1U;
        }
    } else if ((2U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__CS))) {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__baudgen_en = 1U;
    } else if ((1U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__CS))) {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__baudgen_en = 1U;
    } else if (vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__s_rx_fall) {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__baudgen_en = 1U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__722__PROF__uart_rx__l137(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__722__PROF__uart_rx__l137\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__baud_cnt 
        = vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__baud_cnt;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__724__PROF__uart_tx__l41(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__724__PROF__uart_tx__l41\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__baudgen_en = 0U;
    if ((4U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__CS))) {
        if ((1U & (~ ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__CS) 
                      >> 1U)))) {
            vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__baudgen_en = 1U;
        }
    } else if ((2U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__CS))) {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__baudgen_en = 1U;
    } else if ((1U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__CS))) {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__baudgen_en = 1U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__725__PROF__uart_tx__l131(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__725__PROF__uart_tx__l131\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__baud_cnt 
        = vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__baud_cnt;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__728__PROF__uart_tx__l41(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__728__PROF__uart_tx__l41\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__reg_data_next 
        = (0x80U | (0x7fU & ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__reg_data) 
                             >> 1U)));
    if ((1U & (~ ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__CS) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__CS) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__CS)))) {
                if ((0U != (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__elements))) {
                    vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__reg_data_next 
                        = vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__tx_data;
                }
            }
        }
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__735__PROF__uart_rx__l134(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__735__PROF__uart_rx__l134\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__caonima 
        = (0x1b2U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__baud_cnt));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__736__PROF__uart_rx__l45(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__736__PROF__uart_rx__l45\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__sampleData = 0U;
    if ((1U & (~ ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__CS) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__CS))) {
            if ((1U & (~ (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__CS)))) {
                if (vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__bit_done) {
                    vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__sampleData = 1U;
                }
            }
        }
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__737__PROF__uart_rx__l45(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__737__PROF__uart_rx__l45\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__reg_bit_count_next 
        = vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__reg_bit_count;
    if ((1U & (~ ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__CS) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__CS))) {
            if ((1U & (~ (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__CS)))) {
                if (vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__bit_done) {
                    vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__reg_bit_count_next 
                        = ((7U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__reg_bit_count))
                            ? 0U : (7U & ((IData)(1U) 
                                          + (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__reg_bit_count))));
                }
            }
        }
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__738__PROF__uart_rx__l45(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__738__PROF__uart_rx__l45\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__NS 
        = vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__CS;
    if ((4U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__CS))) {
        if ((2U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__CS))) {
            vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__NS = 0U;
        } else if ((1U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__CS))) {
            if (vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__bit_done) {
                vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__NS = 0U;
            }
        } else if (vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__bit_done) {
            vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__NS = 5U;
        }
    } else if ((2U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__CS))) {
        if ((1U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__CS))) {
            if ((8U != (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_fifo__DOT__elements))) {
                vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__NS = 4U;
            }
        } else if (vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__bit_done) {
            if ((7U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__reg_bit_count))) {
                vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__NS = 3U;
            }
        }
    } else if ((1U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__CS))) {
        if (vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__bit_done) {
            vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__NS = 2U;
        }
    } else if (vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__s_rx_fall) {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__NS = 1U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__739__PROF__uart_tx__l127(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__739__PROF__uart_tx__l127\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__caonima 
        = (0x1b2U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__baud_cnt));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__740__PROF__uart_tx__l41(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__740__PROF__uart_tx__l41\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__reg_bit_count_next 
        = vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__reg_bit_count;
    if ((1U & (~ ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__CS) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__CS))) {
            if ((1U & (~ (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__CS)))) {
                if (vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__bit_done) {
                    vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__reg_bit_count_next 
                        = ((7U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__reg_bit_count))
                            ? 0U : (7U & ((IData)(1U) 
                                          + (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__reg_bit_count))));
                }
            }
        }
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__741__PROF__uart_tx__l41(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__741__PROF__uart_tx__l41\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__sampleData = 0U;
    if ((1U & (~ ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__CS) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__CS))) {
            if ((1U & (~ (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__CS)))) {
                if (vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__bit_done) {
                    if ((7U != (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__reg_bit_count))) {
                        vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__sampleData = 1U;
                    }
                }
            }
        } else if ((1U & (~ (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__CS)))) {
            if ((0U != (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__elements))) {
                vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__sampleData = 1U;
            }
        }
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__742__PROF__uart_rx__l45(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__742__PROF__uart_rx__l45\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__reg_data_next 
        = vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__reg_data;
    if ((1U & (~ ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__CS) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__CS))) {
            if ((1U & (~ (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__CS)))) {
                vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__reg_data_next 
                    = ((0x80U & ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__reg_rx_sync) 
                                 << 5U)) | (0x7fU & 
                                            ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_rx_u__DOT__reg_data) 
                                             >> 1U)));
            }
        }
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__743__PROF__uart_tx__l41(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__743__PROF__uart_tx__l41\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__tx_ready = 0U;
    if ((1U & (~ ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__CS) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__CS) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__CS)))) {
                if (vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__out_en) {
                    vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__tx_ready = 1U;
                }
            }
        }
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__744__PROF__uart_tx__l41(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__744__PROF__uart_tx__l41\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__NS 
        = vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__CS;
    if ((4U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__CS))) {
        if ((2U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__CS))) {
            vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__NS = 0U;
        } else if ((1U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__CS))) {
            if (vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__bit_done) {
                vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__NS = 0U;
            }
        } else if (vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__bit_done) {
            vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__NS 
                = ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__stop_bit_ctrl)
                    ? 5U : 0U);
        }
    } else if ((2U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__CS))) {
        if ((1U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__CS))) {
            if (vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__bit_done) {
                vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__NS = 4U;
            }
        } else if (vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__bit_done) {
            if ((7U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__reg_bit_count))) {
                vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__NS = 3U;
            }
        }
    } else if ((1U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__CS))) {
        if (vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__bit_done) {
            vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__NS = 2U;
        }
    } else if ((0U != (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_fifo__DOT__elements))) {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__uart_tx_u__DOT__NS = 1U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___combo__TOP__5__PROF__w2m_bridge__l79(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___combo__TOP__5__PROF__w2m_bridge__l79\n"); );
    // Body
    vlSelf->soc_tb__DOT__testio_wb_u__DOT__ti_mem_if_req[0U] 
        = (IData)((0xf00000000ULL | (QData)((IData)(vlSelf->m3_wdata))));
    vlSelf->soc_tb__DOT__testio_wb_u__DOT__ti_mem_if_req[1U] 
        = (((IData)((((QData)((IData)(((IData)(vlSelf->m3_we)
                                        ? 1U : 0U))) 
                      << 0x30U) | (QData)((IData)(vlSelf->m3_addr)))) 
            << 4U) | (IData)(((0xf00000000ULL | (QData)((IData)(vlSelf->m3_wdata))) 
                              >> 0x20U)));
    vlSelf->soc_tb__DOT__testio_wb_u__DOT__ti_mem_if_req[2U] 
        = (((IData)((((QData)((IData)(((IData)(vlSelf->m3_we)
                                        ? 1U : 0U))) 
                      << 0x30U) | (QData)((IData)(vlSelf->m3_addr)))) 
            >> 0x1cU) | ((IData)(((((QData)((IData)(
                                                    ((IData)(vlSelf->m3_we)
                                                      ? 1U
                                                      : 0U))) 
                                    << 0x30U) | (QData)((IData)(vlSelf->m3_addr))) 
                                  >> 0x20U)) << 4U));
}

VL_INLINE_OPT void Vsoc_tb___024root___combo__TOP__6__PROF__uart__l44(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___combo__TOP__6__PROF__uart__l44\n"); );
    // Body
    vlSelf->soc_tb__DOT__uart_u__DOT__fifo_rx_ready 
        = (((IData)(vlSelf->m4_cyc) & (0x2000304U == vlSelf->m4_addr)) 
           & (~ (IData)(vlSelf->m4_we)));
}

VL_INLINE_OPT void Vsoc_tb___024root___combo__TOP__7__PROF__uart__l183(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___combo__TOP__7__PROF__uart__l183\n"); );
    // Body
    vlSelf->m4_ack = (((IData)(vlSelf->soc_tb__DOT__uart_u__DOT__ack_ff) 
                       & (IData)(vlSelf->m4_cyc)) & (IData)(vlSelf->m4_stb));
}

VL_INLINE_OPT void Vsoc_tb___024root___combo__TOP__8__PROF__w2m_bridge__l64(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___combo__TOP__8__PROF__w2m_bridge__l64\n"); );
    // Body
    vlSelf->soc_tb__DOT__testio_wb_u__DOT__w2m_bridge_ti_u__DOT__is_resp_ready 
        = ((IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__w2m_bridge_ti_u__DOT__wb_valid) 
           & (0xaU == (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_current_state)));
}

VL_INLINE_OPT void Vsoc_tb___024root___combo__TOP__9__PROF__w2m_bridge__l85(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___combo__TOP__9__PROF__w2m_bridge__l85\n"); );
    // Body
    vlSelf->m3_ack = vlSelf->soc_tb__DOT__testio_wb_u__DOT__w2m_bridge_ti_u__DOT__is_resp_ready;
}

VL_INLINE_OPT void Vsoc_tb___024root___combo__TOP__10__PROF__w2m_bridge__l71(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___combo__TOP__10__PROF__w2m_bridge__l71\n"); );
    // Body
    vlSelf->soc_tb__DOT__testio_wb_u__DOT__w2m_bridge_ti_u__DOT__wb_next_state 
        = ((0U == (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__w2m_bridge_ti_u__DOT__wb_state_u__DOT__dff_q))
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
                    : 0U)));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__749__PROF__std_dffr__l15(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__749__PROF__std_dffr__l15\n"); );
    // Body
    vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_rcv_data_u__DOT__dff_q 
        = ((IData)(vlSelf->rst) & (IData)(vlSelf->soc_tb__DOT__master_ti_i));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__750__PROF__testio_ma__l55(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__750__PROF__testio_ma__l55\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_test_din 
        = vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__rff_ti_send_data;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__751__PROF__testio_ma__l88(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__751__PROF__testio_ma__l88\n"); );
    // Body
    if ((0U != (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__rff_cmd_idx))) {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT____Vlvbound_hae007a83__0 
            = vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__rff_ti_send_data;
        if ((0x45U >= (0x7fU & ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__rff_cmd_idx) 
                                - (IData)(1U))))) {
            vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[(3U 
                                                                                & (((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__rff_cmd_idx) 
                                                                                - (IData)(1U)) 
                                                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x1fU & ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__rff_cmd_idx) 
                                                 - (IData)(1U))))) 
                    & vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[
                    (3U & (((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__rff_cmd_idx) 
                            - (IData)(1U)) >> 5U))]) 
                   | ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT____Vlvbound_hae007a83__0) 
                      << (0x1fU & ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__rff_cmd_idx) 
                                   - (IData)(1U)))));
        }
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__752__PROF__std_dffr__l15(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__752__PROF__std_dffr__l15\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_state_u__DOT__dff_q 
        = ((IData)(vlSelf->rst) ? (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_next_state)
            : 0U);
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__757__PROF__testio_ma__l120(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__757__PROF__testio_ma__l120\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__prty 
        = (1U & ((1U & vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[0U])
                  ? (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[2U] 
                     >> 5U) : (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[1U] 
                               >> 1U)));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__758__PROF__testio_ma__l104(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__758__PROF__testio_ma__l104\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__wstrb 
        = ((8U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__wstrb)) 
           | ((4U & vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[1U]) 
              | ((2U & (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[1U] 
                        >> 2U)) | (1U & (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[1U] 
                                         >> 4U)))));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__759__PROF__testio_ma__l104(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__759__PROF__testio_ma__l104\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__wstrb 
        = ((7U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__wstrb)) 
           | (8U & (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[1U] 
                    << 2U)));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__760__PROF__testio_ma__l101(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__760__PROF__testio_ma__l101\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__addr 
        = ((0xfffffff8U & vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__addr) 
           | ((4U & (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[0U] 
                     >> 0x1cU)) | ((2U & (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[0U] 
                                          >> 0x1eU)) 
                                   | (1U & vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[1U]))));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__761__PROF__testio_ma__l101(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__761__PROF__testio_ma__l101\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__addr 
        = ((0xffffffc7U & vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__addr) 
           | ((0x20U & (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[0U] 
                        >> 0x16U)) | ((0x10U & (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[0U] 
                                                >> 0x18U)) 
                                      | (8U & (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[0U] 
                                               >> 0x1aU)))));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__762__PROF__testio_ma__l101(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__762__PROF__testio_ma__l101\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__addr 
        = ((0xfffffe3fU & vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__addr) 
           | ((0x100U & (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[0U] 
                         >> 0x10U)) | ((0x80U & (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[0U] 
                                                 >> 0x12U)) 
                                       | (0x40U & (
                                                   vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[0U] 
                                                   >> 0x14U)))));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__763__PROF__testio_ma__l101(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__763__PROF__testio_ma__l101\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__addr 
        = ((0xfffff1ffU & vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__addr) 
           | ((0x800U & (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[0U] 
                         >> 0xaU)) | ((0x400U & (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[0U] 
                                                 >> 0xcU)) 
                                      | (0x200U & (
                                                   vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[0U] 
                                                   >> 0xeU)))));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__764__PROF__testio_ma__l101(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__764__PROF__testio_ma__l101\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__addr 
        = ((0xffff8fffU & vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__addr) 
           | ((0x4000U & (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[0U] 
                          >> 4U)) | ((0x2000U & (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[0U] 
                                                 >> 6U)) 
                                     | (0x1000U & (
                                                   vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[0U] 
                                                   >> 8U)))));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__765__PROF__testio_ma__l101(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__765__PROF__testio_ma__l101\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__addr 
        = ((0xfffc7fffU & vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__addr) 
           | ((0x20000U & (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[0U] 
                           << 2U)) | ((0x10000U & vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[0U]) 
                                      | (0x8000U & 
                                         (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[0U] 
                                          >> 2U)))));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__766__PROF__testio_ma__l101(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__766__PROF__testio_ma__l101\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__addr 
        = ((0xffe3ffffU & vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__addr) 
           | ((0x100000U & (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[0U] 
                            << 8U)) | ((0x80000U & 
                                        (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[0U] 
                                         << 6U)) | 
                                       (0x40000U & 
                                        (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[0U] 
                                         << 4U)))));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__767__PROF__testio_ma__l101(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__767__PROF__testio_ma__l101\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__addr 
        = ((0xff1fffffU & vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__addr) 
           | ((0x800000U & (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[0U] 
                            << 0xeU)) | ((0x400000U 
                                          & (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[0U] 
                                             << 0xcU)) 
                                         | (0x200000U 
                                            & (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[0U] 
                                               << 0xaU)))));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__768__PROF__testio_ma__l101(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__768__PROF__testio_ma__l101\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__addr 
        = ((0xf8ffffffU & vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__addr) 
           | ((0x4000000U & (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[0U] 
                             << 0x14U)) | ((0x2000000U 
                                            & (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[0U] 
                                               << 0x12U)) 
                                           | (0x1000000U 
                                              & (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[0U] 
                                                 << 0x10U)))));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__769__PROF__testio_ma__l101(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__769__PROF__testio_ma__l101\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__addr 
        = ((0xc7ffffffU & vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__addr) 
           | ((0x20000000U & (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[0U] 
                              << 0x1aU)) | ((0x10000000U 
                                             & (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[0U] 
                                                << 0x18U)) 
                                            | (0x8000000U 
                                               & (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[0U] 
                                                  << 0x16U)))));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__770__PROF__testio_ma__l101(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__770__PROF__testio_ma__l101\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__addr 
        = ((0x3fffffffU & vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__addr) 
           | ((0x80000000U & (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[0U] 
                              << 0x1eU)) | (0x40000000U 
                                            & (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[0U] 
                                               << 0x1cU))));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__771__PROF__testio_ma__l107(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__771__PROF__testio_ma__l107\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__wdata 
        = ((0xfffffff8U & vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__wdata) 
           | ((4U & vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[2U]) 
              | ((2U & (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[2U] 
                        >> 2U)) | (1U & (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[2U] 
                                         >> 4U)))));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__772__PROF__testio_ma__l107(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__772__PROF__testio_ma__l107\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__wdata 
        = ((0xffffffc7U & vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__wdata) 
           | ((0x20U & (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[1U] 
                        >> 0x1aU)) | ((0x10U & (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[2U] 
                                                << 4U)) 
                                      | (8U & (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[2U] 
                                               << 2U)))));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__773__PROF__testio_ma__l107(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__773__PROF__testio_ma__l107\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__wdata 
        = ((0xfffffe3fU & vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__wdata) 
           | ((0x100U & (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[1U] 
                         >> 0x14U)) | ((0x80U & (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[1U] 
                                                 >> 0x16U)) 
                                       | (0x40U & (
                                                   vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[1U] 
                                                   >> 0x18U)))));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__774__PROF__testio_ma__l107(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__774__PROF__testio_ma__l107\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__wdata 
        = ((0xfffff1ffU & vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__wdata) 
           | ((0x800U & (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[1U] 
                         >> 0xeU)) | ((0x400U & (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[1U] 
                                                 >> 0x10U)) 
                                      | (0x200U & (
                                                   vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[1U] 
                                                   >> 0x12U)))));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__775__PROF__testio_ma__l107(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__775__PROF__testio_ma__l107\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__wdata 
        = ((0xffff8fffU & vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__wdata) 
           | ((0x4000U & (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[1U] 
                          >> 8U)) | ((0x2000U & (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[1U] 
                                                 >> 0xaU)) 
                                     | (0x1000U & (
                                                   vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[1U] 
                                                   >> 0xcU)))));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__776__PROF__testio_ma__l107(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__776__PROF__testio_ma__l107\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__wdata 
        = ((0xfffc7fffU & vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__wdata) 
           | ((0x20000U & (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[1U] 
                           >> 2U)) | ((0x10000U & (
                                                   vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[1U] 
                                                   >> 4U)) 
                                      | (0x8000U & 
                                         (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[1U] 
                                          >> 6U)))));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__777__PROF__testio_ma__l107(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__777__PROF__testio_ma__l107\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__wdata 
        = ((0xffe3ffffU & vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__wdata) 
           | ((0x100000U & (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[1U] 
                            << 4U)) | ((0x80000U & 
                                        (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[1U] 
                                         << 2U)) | 
                                       (0x40000U & 
                                        vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[1U]))));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__778__PROF__testio_ma__l107(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__778__PROF__testio_ma__l107\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__wdata 
        = ((0xff1fffffU & vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__wdata) 
           | ((0x800000U & (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[1U] 
                            << 0xaU)) | ((0x400000U 
                                          & (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[1U] 
                                             << 8U)) 
                                         | (0x200000U 
                                            & (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[1U] 
                                               << 6U)))));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__779__PROF__testio_ma__l107(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__779__PROF__testio_ma__l107\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__wdata 
        = ((0xf8ffffffU & vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__wdata) 
           | ((0x4000000U & (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[1U] 
                             << 0x10U)) | ((0x2000000U 
                                            & (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[1U] 
                                               << 0xeU)) 
                                           | (0x1000000U 
                                              & (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[1U] 
                                                 << 0xcU)))));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__780__PROF__testio_ma__l107(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__780__PROF__testio_ma__l107\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__wdata 
        = ((0xc7ffffffU & vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__wdata) 
           | ((0x20000000U & (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[1U] 
                              << 0x16U)) | ((0x10000000U 
                                             & (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[1U] 
                                                << 0x14U)) 
                                            | (0x8000000U 
                                               & (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[1U] 
                                                  << 0x12U)))));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__781__PROF__testio_ma__l107(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__781__PROF__testio_ma__l107\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__wdata 
        = ((0x3fffffffU & vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__wdata) 
           | ((0x80000000U & (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[1U] 
                              << 0x1aU)) | (0x40000000U 
                                            & (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[1U] 
                                               << 0x18U))));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__782__PROF__testio_ma__l231(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__782__PROF__testio_ma__l231\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__ti_ma_mem_if_req[0U] 
        = (IData)((((QData)((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__wstrb)) 
                    << 0x20U) | (QData)((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__wdata))));
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__ti_ma_mem_if_req[1U] 
        = (((IData)((QData)((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__addr))) 
            << 4U) | (IData)(((((QData)((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__wstrb)) 
                                << 0x20U) | (QData)((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__wdata))) 
                              >> 0x20U)));
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__ti_ma_mem_if_req[2U] 
        = ((((1U & vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[0U])
              ? 1U : 0U) << 0x14U) | (((IData)((QData)((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__addr))) 
                                       >> 0x1cU) | 
                                      ((IData)(((QData)((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__addr)) 
                                                >> 0x20U)) 
                                       << 4U)));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__787__PROF__async_fifo__l89(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__787__PROF__async_fifo__l89\n"); );
    // Init
    CData/*1:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__bin2grey__24__Vfuncout;
    CData/*1:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__bin2grey__24__bin;
    SData/*8:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__bin2grey__24__bin_8;
    SData/*8:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__bin2grey__24__grey_8;
    CData/*1:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__25__Vfuncout;
    CData/*2:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__25__bin;
    CData/*1:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__26__Vfuncout;
    CData/*2:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__26__bin;
    CData/*1:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__27__Vfuncout;
    CData/*2:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__27__bin;
    CData/*1:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__28__Vfuncout;
    CData/*2:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__28__bin;
    // Body
    if (vlSelf->rst) {
        if (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__s_resp_wr_en) {
            __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__bin2grey__24__bin 
                = (3U & ((IData)(1U) + (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__wr_ptr)));
            __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__bin2grey__24__bin_8 
                = __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__bin2grey__24__bin;
            __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__25__bin 
                = (7U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__bin2grey__24__bin_8));
            __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__25__Vfuncout 
                = ((4U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__25__bin))
                    ? ((2U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__25__bin))
                        ? ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__25__bin))
                            ? 0U : 1U) : ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__25__bin))
                                           ? 3U : 2U))
                    : ((2U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__25__bin))
                        ? ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__25__bin))
                            ? 2U : 3U) : ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__25__bin))
                                           ? 1U : 0U)));
            __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__bin2grey__24__grey_8 
                = ((0x1fcU & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__bin2grey__24__grey_8)) 
                   | (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__25__Vfuncout));
            __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__26__bin 
                = (7U & ((IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__bin2grey__24__bin_8) 
                         >> 2U));
            __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__26__Vfuncout 
                = ((4U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__26__bin))
                    ? ((2U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__26__bin))
                        ? ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__26__bin))
                            ? 0U : 1U) : ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__26__bin))
                                           ? 3U : 2U))
                    : ((2U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__26__bin))
                        ? ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__26__bin))
                            ? 2U : 3U) : ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__26__bin))
                                           ? 1U : 0U)));
            __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__bin2grey__24__grey_8 
                = ((0x1f3U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__bin2grey__24__grey_8)) 
                   | ((IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__26__Vfuncout) 
                      << 2U));
            __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__27__bin 
                = (7U & ((IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__bin2grey__24__bin_8) 
                         >> 4U));
            __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__27__Vfuncout 
                = ((4U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__27__bin))
                    ? ((2U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__27__bin))
                        ? ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__27__bin))
                            ? 0U : 1U) : ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__27__bin))
                                           ? 3U : 2U))
                    : ((2U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__27__bin))
                        ? ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__27__bin))
                            ? 2U : 3U) : ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__27__bin))
                                           ? 1U : 0U)));
            __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__bin2grey__24__grey_8 
                = ((0x1cfU & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__bin2grey__24__grey_8)) 
                   | ((IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__27__Vfuncout) 
                      << 4U));
            __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__28__bin 
                = (7U & ((IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__bin2grey__24__bin_8) 
                         >> 6U));
            __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__28__Vfuncout 
                = ((4U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__28__bin))
                    ? ((2U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__28__bin))
                        ? ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__28__bin))
                            ? 0U : 1U) : ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__28__bin))
                                           ? 3U : 2U))
                    : ((2U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__28__bin))
                        ? ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__28__bin))
                            ? 2U : 3U) : ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__28__bin))
                                           ? 1U : 0U)));
            __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__bin2grey__24__grey_8 
                = ((0x3fU & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__bin2grey__24__grey_8)) 
                   | ((0x100U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__bin2grey__24__bin_8)) 
                      | ((IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__do_grey__28__Vfuncout) 
                         << 6U)));
            __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__bin2grey__24__Vfuncout 
                = (3U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__bin2grey__24__grey_8));
            vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__grey_wr_ptr 
                = __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__bin2grey__24__Vfuncout;
        }
    } else {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__grey_wr_ptr = 0U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__788__PROF__async_fifo__l164(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__788__PROF__async_fifo__l164\n"); );
    // Init
    CData/*2:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__bin2grey__13__Vfuncout;
    CData/*2:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__bin2grey__13__bin;
    SData/*8:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__bin2grey__13__bin_8;
    SData/*8:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__bin2grey__13__grey_8;
    CData/*1:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__14__Vfuncout;
    CData/*2:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__14__bin;
    CData/*1:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__15__Vfuncout;
    CData/*2:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__15__bin;
    CData/*1:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__16__Vfuncout;
    CData/*2:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__16__bin;
    CData/*1:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__17__Vfuncout;
    CData/*2:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__17__bin;
    // Body
    if (vlSelf->rst) {
        if (vlSelf->soc_tb__DOT__soc_top_u__DOT__ti_soc_ack) {
            __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__bin2grey__13__bin 
                = (7U & ((IData)(1U) + (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__rd_ptr)));
            __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__bin2grey__13__bin_8 
                = __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__bin2grey__13__bin;
            __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__14__bin 
                = (7U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__bin2grey__13__bin_8));
            __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__14__Vfuncout 
                = ((4U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__14__bin))
                    ? ((2U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__14__bin))
                        ? ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__14__bin))
                            ? 0U : 1U) : ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__14__bin))
                                           ? 3U : 2U))
                    : ((2U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__14__bin))
                        ? ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__14__bin))
                            ? 2U : 3U) : ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__14__bin))
                                           ? 1U : 0U)));
            __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__bin2grey__13__grey_8 
                = ((0x1fcU & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__bin2grey__13__grey_8)) 
                   | (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__14__Vfuncout));
            __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__15__bin 
                = (7U & ((IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__bin2grey__13__bin_8) 
                         >> 2U));
            __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__15__Vfuncout 
                = ((4U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__15__bin))
                    ? ((2U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__15__bin))
                        ? ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__15__bin))
                            ? 0U : 1U) : ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__15__bin))
                                           ? 3U : 2U))
                    : ((2U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__15__bin))
                        ? ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__15__bin))
                            ? 2U : 3U) : ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__15__bin))
                                           ? 1U : 0U)));
            __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__bin2grey__13__grey_8 
                = ((0x1f3U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__bin2grey__13__grey_8)) 
                   | ((IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__15__Vfuncout) 
                      << 2U));
            __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__16__bin 
                = (7U & ((IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__bin2grey__13__bin_8) 
                         >> 4U));
            __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__16__Vfuncout 
                = ((4U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__16__bin))
                    ? ((2U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__16__bin))
                        ? ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__16__bin))
                            ? 0U : 1U) : ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__16__bin))
                                           ? 3U : 2U))
                    : ((2U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__16__bin))
                        ? ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__16__bin))
                            ? 2U : 3U) : ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__16__bin))
                                           ? 1U : 0U)));
            __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__bin2grey__13__grey_8 
                = ((0x1cfU & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__bin2grey__13__grey_8)) 
                   | ((IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__16__Vfuncout) 
                      << 4U));
            __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__17__bin 
                = (7U & ((IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__bin2grey__13__bin_8) 
                         >> 6U));
            __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__17__Vfuncout 
                = ((4U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__17__bin))
                    ? ((2U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__17__bin))
                        ? ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__17__bin))
                            ? 0U : 1U) : ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__17__bin))
                                           ? 3U : 2U))
                    : ((2U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__17__bin))
                        ? ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__17__bin))
                            ? 2U : 3U) : ((1U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__17__bin))
                                           ? 1U : 0U)));
            __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__bin2grey__13__grey_8 
                = ((0x3fU & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__bin2grey__13__grey_8)) 
                   | ((0x100U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__bin2grey__13__bin_8)) 
                      | ((IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__do_grey__17__Vfuncout) 
                         << 6U)));
            __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__bin2grey__13__Vfuncout 
                = (7U & (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__bin2grey__13__grey_8));
            vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__grey_rd_ptr 
                = __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__bin2grey__13__Vfuncout;
        }
    } else {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__grey_rd_ptr = 0U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__789__PROF__crg__l79(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__789__PROF__crg__l79\n"); );
    // Body
    if (vlSelf->rst) {
        if (((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_stb) 
             & (0x2000400U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr))) {
            if (((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_we) 
                 & (~ (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__ack_ff)))) {
                vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain1_rst_r 
                    = (1U & (vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_wdata 
                             >> 4U));
                vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain2_rst_r 
                    = (1U & (vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_wdata 
                             >> 5U));
                vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain3_rst_r 
                    = (1U & (vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_wdata 
                             >> 6U));
                vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain4_rst_r 
                    = (1U & (vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_wdata 
                             >> 7U));
                vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain1_clk_en 
                    = (1U & vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_wdata);
                vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain2_clk_en 
                    = (1U & (vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_wdata 
                             >> 1U));
                vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain3_clk_en 
                    = (1U & (vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_wdata 
                             >> 2U));
                vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain4_clk_en 
                    = (1U & (vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_wdata 
                             >> 3U));
            }
        }
    } else {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain1_clk_en = 0U;
        vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain2_clk_en = 0U;
        vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain3_clk_en = 0U;
        vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain4_clk_en = 0U;
        vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain1_rst_r = 1U;
        vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain2_rst_r = 1U;
        vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain3_rst_r = 1U;
        vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain4_rst_r = 1U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__803__PROF__async_fifo__l89(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__803__PROF__async_fifo__l89\n"); );
    // Body
    if (vlSelf->rst) {
        if (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__s_resp_wr_en) {
            vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__wr_ptr 
                = vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__wr_ptr_inc;
        }
    } else {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__wr_ptr = 0U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__804__PROF__async_fifo__l164(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__804__PROF__async_fifo__l164\n"); );
    // Body
    if (vlSelf->rst) {
        if (vlSelf->soc_tb__DOT__soc_top_u__DOT__ti_soc_ack) {
            vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__rd_ptr 
                = vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__rd_ptr_inc;
        }
    } else {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__rd_ptr = 0U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__805__PROF__crg__l76(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__805__PROF__crg__l76\n"); );
    // Body
    vlSelf->rst4 = vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain4_rst_r;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__806__PROF__crg__l79(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__806__PROF__crg__l79\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__ack_ff 
        = ((IData)(vlSelf->rst) & ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_stb) 
                                   & (0x2000400U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__810__PROF__async_fifo__l46(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__810__PROF__async_fifo__l46\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__wr_ptr_inc 
        = (3U & ((IData)(1U) + (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__wr_ptr)));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__811__PROF__async_fifo__l55(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__811__PROF__async_fifo__l55\n"); );
    // Init
    CData/*1:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__get_cnt__23__Vfuncout;
    CData/*1:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__get_cnt__23__wr_ptr;
    CData/*1:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__get_cnt__23__rd_ptr;
    // Body
    __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__get_cnt__23__rd_ptr 
        = vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__sync_rd_ptr;
    __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__get_cnt__23__wr_ptr 
        = vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__wr_ptr;
    __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__get_cnt__23__Vfuncout 
        = (3U & (((IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__get_cnt__23__wr_ptr) 
                  >= (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__get_cnt__23__rd_ptr))
                  ? ((IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__get_cnt__23__wr_ptr) 
                     - (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__get_cnt__23__rd_ptr))
                  : (- ((IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__get_cnt__23__rd_ptr) 
                        - (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__get_cnt__23__wr_ptr)))));
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__wr_cnt 
        = __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__get_cnt__23__Vfuncout;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__812__PROF__async_fifo__l159(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__812__PROF__async_fifo__l159\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__rd_ptr_inc 
        = (7U & ((IData)(1U) + (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__rd_ptr)));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__813__PROF__async_fifo__l161(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__813__PROF__async_fifo__l161\n"); );
    // Init
    CData/*2:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__get_cnt__12__Vfuncout;
    CData/*2:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__get_cnt__12__wr_ptr;
    CData/*2:0*/ __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__get_cnt__12__rd_ptr;
    // Body
    __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__get_cnt__12__rd_ptr 
        = vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__rd_ptr;
    __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__get_cnt__12__wr_ptr 
        = vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__sync_wr_ptr;
    __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__get_cnt__12__Vfuncout 
        = (7U & (((IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__get_cnt__12__wr_ptr) 
                  >= (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__get_cnt__12__rd_ptr))
                  ? ((IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__get_cnt__12__wr_ptr) 
                     - (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__get_cnt__12__rd_ptr))
                  : (- ((IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__get_cnt__12__rd_ptr) 
                        - (IData)(__Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__get_cnt__12__wr_ptr)))));
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__rd_cnt 
        = __Vfunc_soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__get_cnt__12__Vfuncout;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__814__PROF__async_wb__l89(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__814__PROF__async_wb__l89\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__ti_soc_cyc 
        = ((~ (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__wbs_ack_f)) 
           & (0U != (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__rd_cnt)));
}

VL_INLINE_OPT void Vsoc_tb___024root___multiclk__TOP__0__PROF__async_fifo__l181(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___multiclk__TOP__0__PROF__async_fifo__l181\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__rd_data_c 
        = vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__mem
        [(1U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__rd_ptr))];
}

VL_INLINE_OPT void Vsoc_tb___024root___multiclk__TOP__1__PROF__async_fifo__l181(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___multiclk__TOP__1__PROF__async_fifo__l181\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__rd_data_c[0U] 
        = vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__mem
        [(3U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__rd_ptr))][0U];
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__rd_data_c[1U] 
        = vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__mem
        [(3U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__rd_ptr))][1U];
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__rd_data_c[2U] 
        = vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__mem
        [(3U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__rd_ptr))][2U];
}

VL_INLINE_OPT void Vsoc_tb___024root___multiclk__TOP__2__PROF__async_wb__l87(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___multiclk__TOP__2__PROF__async_wb__l87\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__ti_soc_strb 
        = ((0U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__rd_cnt))
            ? 0U : (0xfU & vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__rd_data_c[0U]));
}

VL_INLINE_OPT void Vsoc_tb___024root___multiclk__TOP__3__PROF__async_wb__l87(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___multiclk__TOP__3__PROF__async_wb__l87\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__ti_soc_wdata 
        = ((((0U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__rd_cnt))
              ? 0U : vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__rd_data_c[1U]) 
            << 0x1cU) | (((0U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__rd_cnt))
                           ? 0U : vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__rd_data_c[0U]) 
                         >> 4U));
}

VL_INLINE_OPT void Vsoc_tb___024root___multiclk__TOP__4__PROF__async_wb__l87(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___multiclk__TOP__4__PROF__async_wb__l87\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__ti_soc_addr 
        = ((((0U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__rd_cnt))
              ? 0U : vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__rd_data_c[2U]) 
            << 0x1bU) | (((0U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__rd_cnt))
                           ? 0U : vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__rd_data_c[1U]) 
                         >> 5U));
}

VL_INLINE_OPT void Vsoc_tb___024root___multiclk__TOP__5__PROF__async_wb__l87(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___multiclk__TOP__5__PROF__async_wb__l87\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__ti_soc_we 
        = (1U & (((0U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__rd_cnt))
                   ? 0U : vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_cmd_if__DOT__rd_data_c[1U]) 
                 >> 4U));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__815__PROF__uart_tx__l41(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__815__PROF__uart_tx__l41\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_rx_i = 1U;
    if ((4U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__CS))) {
        if ((1U & (~ ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__CS) 
                      >> 1U)))) {
            vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_rx_i = 1U;
        }
    } else if ((2U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__CS))) {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_rx_i 
            = (1U & ((1U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__CS))
                      ? (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__parity_bit)
                      : (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__reg_data)));
    } else if ((1U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__outuart_u__DOT__uart_tx_u__DOT__CS))) {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_rx_i = 0U;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__816__PROF__testio_ma__l222(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__816__PROF__testio_ma__l222\n"); );
    // Body
    vlSelf->soc_tb__DOT__master_ti_i = 1U;
    if (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__rff_payload_in_progress) {
        vlSelf->soc_tb__DOT__master_ti_i = ((0x23U 
                                             >= (0x3fU 
                                                 & ((IData)(0x23U) 
                                                    - (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__rff_payload_idx)))) 
                                            & (IData)(
                                                      (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_payload 
                                                       >> 
                                                       (0x3fU 
                                                        & ((IData)(0x23U) 
                                                           - (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__rff_payload_idx))))));
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__817__PROF__testio_ma__l80(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__817__PROF__testio_ma__l80\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__rff_cmd_idx 
        = vlSelf->__Vdly__soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__rff_cmd_idx;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__818__PROF__m2w_bridge__l83(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__818__PROF__m2w_bridge__l83\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_next_state 
        = ((0U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_state_u__DOT__dff_q))
            ? ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__ti_ma_mem_if_req_valid)
                ? 1U : (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_state_u__DOT__dff_q))
            : ((1U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_state_u__DOT__dff_q))
                ? (((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_valid) 
                    & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__wbm_ack_i))
                    ? 2U : (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_state_u__DOT__dff_q))
                : ((2U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_state_u__DOT__dff_q))
                    ? ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__ti_ma_mem_if_resp_ready)
                        ? 0U : (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__wb_state_u__DOT__dff_q))
                    : 0U)));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__819__PROF__testio_ma__l61(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__819__PROF__testio_ma__l61\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__test_din_en 
        = (0U != (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__rff_cmd_idx));
}

extern const VlUnpacked<CData/*2:0*/, 256> Vsoc_tb__ConstPool__TABLE_he0bafd49_0;

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__820__PROF__testio_ma__l195(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__820__PROF__testio_ma__l195\n"); );
    // Init
    CData/*7:0*/ __Vtableidx1;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__memif_resp_valid) 
                     << 7U) | (((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__m2w_bridge_ti_ma_u__DOT__memif_req_ready) 
                                << 6U) | ((0x20U & 
                                           (vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_cmdbuf[0U] 
                                            << 5U)) 
                                          | (((IData)(
                                                      (0U 
                                                       != (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__rff_cmd_idx))) 
                                              << 4U) 
                                             | (((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__dff_test_din_en) 
                                                 << 3U) 
                                                | (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__rff_cdcst))))));
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__testio_ma__DOT__next_cdcst 
        = Vsoc_tb__ConstPool__TABLE_he0bafd49_0[__Vtableidx1];
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__822__PROF__testio__l240(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__822__PROF__testio__l240\n"); );
    // Body
    vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__rff_ti_send_data 
        = ((IData)(vlSelf->rst) & ((~ (IData)((2U == 
                                               (0x22U 
                                                & (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_ctrl))))) 
                                   | ((1U == (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_cycle_counter))
                                       ? (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_data_parity)
                                       : vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_send_buf[0U])));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__823__PROF__testio_trx__l169(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__823__PROF__testio_trx__l169\n"); );
    // Body
    vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_data_parity 
        = vlSelf->__Vdly__soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_data_parity;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__825__PROF__testio_trx__l161(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__825__PROF__testio_trx__l161\n"); );
    // Body
    vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_send_buf[0U] 
        = vlSelf->__Vdly__soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_send_buf[0U];
    vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_send_buf[1U] 
        = vlSelf->__Vdly__soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_send_buf[1U];
    vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_send_buf[2U] 
        = vlSelf->__Vdly__soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_send_buf[2U];
}

VL_INLINE_OPT void Vsoc_tb___024root___combo__TOP__11__PROF__crg__l35(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___combo__TOP__11__PROF__crg__l35\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->clk)))) {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__clk3_latch 
            = vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain3_clk_en;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___combo__TOP__12__PROF__crg__l35(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___combo__TOP__12__PROF__crg__l35\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->clk)))) {
        vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__clk4_latch 
            = vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain4_clk_en;
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___combo__TOP__13__PROF__wbinterconnect__l96(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___combo__TOP__13__PROF__wbinterconnect__l96\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_cyc 
        = ((1U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_master))
            ? (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__ti_soc_cyc)
            : ((2U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_master))
                ? (IData)(vlSelf->m1_cyc) : ((4U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_master))
                                              ? (IData)(vlSelf->m2_cyc)
                                              : (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__ti_soc_cyc))));
}

VL_INLINE_OPT void Vsoc_tb___024root___combo__TOP__14__PROF__wbinterconnect__l96(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___combo__TOP__14__PROF__wbinterconnect__l96\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_stb 
        = ((1U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_master))
            ? (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__ti_soc_cyc)
            : ((2U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_master))
                ? (IData)(vlSelf->m1_stb) : ((4U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_master))
                                              ? (IData)(vlSelf->m2_stb)
                                              : (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__ti_soc_cyc))));
}

VL_INLINE_OPT void Vsoc_tb___024root___combo__TOP__15__PROF__wbinterconnect__l96(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___combo__TOP__15__PROF__wbinterconnect__l96\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_sel 
        = ((1U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_master))
            ? (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__ti_soc_strb)
            : ((2U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_master))
                ? (IData)(vlSelf->m1_sel) : ((4U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_master))
                                              ? (IData)(vlSelf->m2_sel)
                                              : (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__ti_soc_strb))));
}

VL_INLINE_OPT void Vsoc_tb___024root___combo__TOP__16__PROF__wbinterconnect__l96(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___combo__TOP__16__PROF__wbinterconnect__l96\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_wdata 
        = ((1U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_master))
            ? vlSelf->soc_tb__DOT__soc_top_u__DOT__ti_soc_wdata
            : ((2U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_master))
                ? vlSelf->m1_wdata : ((4U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_master))
                                       ? vlSelf->m2_wdata
                                       : vlSelf->soc_tb__DOT__soc_top_u__DOT__ti_soc_wdata)));
}

VL_INLINE_OPT void Vsoc_tb___024root___combo__TOP__17__PROF__wbinterconnect__l96(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___combo__TOP__17__PROF__wbinterconnect__l96\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr 
        = ((1U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_master))
            ? vlSelf->soc_tb__DOT__soc_top_u__DOT__ti_soc_addr
            : ((2U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_master))
                ? vlSelf->m1_addr : ((4U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_master))
                                      ? vlSelf->m2_addr
                                      : vlSelf->soc_tb__DOT__soc_top_u__DOT__ti_soc_addr)));
}

VL_INLINE_OPT void Vsoc_tb___024root___combo__TOP__18__PROF__wbinterconnect__l96(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___combo__TOP__18__PROF__wbinterconnect__l96\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_we 
        = ((1U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_master))
            ? (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__ti_soc_we)
            : ((2U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_master))
                ? (IData)(vlSelf->m1_we) : ((4U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_master))
                                             ? (IData)(vlSelf->m2_we)
                                             : (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__ti_soc_we))));
}

VL_INLINE_OPT void Vsoc_tb___024root___combo__TOP__19__PROF__crg__l46(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___combo__TOP__19__PROF__crg__l46\n"); );
    // Body
    vlSelf->clk4 = ((IData)(vlSelf->clk) & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__clk4_latch));
}

VL_INLINE_OPT void Vsoc_tb___024root___combo__TOP__21__PROF__wbinterconnect__l236(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___combo__TOP__21__PROF__wbinterconnect__l236\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_cyc = vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_cyc;
}

VL_INLINE_OPT void Vsoc_tb___024root___combo__TOP__23__PROF__wbinterconnect__l237(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___combo__TOP__23__PROF__wbinterconnect__l237\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_stb = vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_stb;
}

VL_INLINE_OPT void Vsoc_tb___024root___combo__TOP__25__PROF__wbinterconnect__l240(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___combo__TOP__25__PROF__wbinterconnect__l240\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__wbm_plic_sel_o 
        = vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_sel;
}

VL_INLINE_OPT void Vsoc_tb___024root___combo__TOP__27__PROF__wbinterconnect__l239(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___combo__TOP__27__PROF__wbinterconnect__l239\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_wdata 
        = vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_wdata;
}

VL_INLINE_OPT void Vsoc_tb___024root___combo__TOP__29__PROF__wbinterconnect__l238(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___combo__TOP__29__PROF__wbinterconnect__l238\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_addr 
        = vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr;
}

VL_INLINE_OPT void Vsoc_tb___024root___combo__TOP__31__PROF__wbinterconnect__l241(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___combo__TOP__31__PROF__wbinterconnect__l241\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_we = vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_we;
}

VL_INLINE_OPT void Vsoc_tb___024root___combo__TOP__32__PROF__uart__l44(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___combo__TOP__32__PROF__uart__l44\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__fifo_rx_ready 
        = (((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_cyc) 
            & (0x2000304U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) 
           & (~ (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_we)));
}

VL_INLINE_OPT void Vsoc_tb___024root___combo__TOP__33__PROF__clint__l62(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___combo__TOP__33__PROF__clint__l62\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__next_ack_ff = 0U;
    if ((((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_stb) 
          & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_cyc)) 
         & (~ (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__ack_ff)))) {
        if (vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_we) {
            if (((((((((0x2000500U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr) 
                       | (0x2000504U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) 
                      | (0x2000510U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) 
                     | (0x2000508U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) 
                    | (0x200050cU == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) 
                   | (0x2000520U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) 
                  | (0x2000524U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) 
                 | (0x2000530U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr))) {
                vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__next_ack_ff = 1U;
            } else if ((0x2000528U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) {
                vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__next_ack_ff = 1U;
            } else if ((0x200052cU == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) {
                vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__next_ack_ff = 1U;
            }
        } else if (((((((((0x2000500U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr) 
                          | (0x2000504U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) 
                         | (0x2000510U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) 
                        | (0x2000508U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) 
                       | (0x200050cU == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) 
                      | (0x2000520U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) 
                     | (0x2000524U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) 
                    | (0x2000530U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr))) {
            vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__next_ack_ff = 1U;
        } else if ((0x2000528U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) {
            vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__next_ack_ff = 1U;
        } else if ((0x200052cU == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) {
            vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__next_ack_ff = 1U;
        }
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___combo__TOP__34__PROF__clint__l62(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___combo__TOP__34__PROF__clint__l62\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__next_msip 
        = vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__msip;
    if ((((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_stb) 
          & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_cyc)) 
         & (~ (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__ack_ff)))) {
        if (vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_we) {
            if (((((((((0x2000500U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr) 
                       | (0x2000504U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) 
                      | (0x2000510U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) 
                     | (0x2000508U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) 
                    | (0x200050cU == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) 
                   | (0x2000520U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) 
                  | (0x2000524U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) 
                 | (0x2000530U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr))) {
                if ((0x2000500U != vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) {
                    if ((0x2000504U != vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) {
                        if ((0x2000510U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) {
                            vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__next_msip 
                                = (1U & vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_wdata);
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___combo__TOP__35__PROF__clint__l62(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___combo__TOP__35__PROF__clint__l62\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__next_mtime 
        = (1ULL + vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__mtime);
    if ((((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_stb) 
          & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_cyc)) 
         & (~ (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__ack_ff)))) {
        if (vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_we) {
            if (((((((((0x2000500U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr) 
                       | (0x2000504U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) 
                      | (0x2000510U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) 
                     | (0x2000508U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) 
                    | (0x200050cU == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) 
                   | (0x2000520U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) 
                  | (0x2000524U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) 
                 | (0x2000530U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr))) {
                if ((0x2000500U != vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) {
                    if ((0x2000504U != vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) {
                        if ((0x2000510U != vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) {
                            if ((0x2000508U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) {
                                vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__next_mtime 
                                    = (((QData)((IData)(
                                                        (vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__mtime 
                                                         >> 0x20U))) 
                                        << 0x20U) | (QData)((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_wdata)));
                            } else if ((0x200050cU 
                                        == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) {
                                vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__next_mtime 
                                    = (((QData)((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_wdata)) 
                                        << 0x20U) | (QData)((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__mtime)));
                            }
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___combo__TOP__36__PROF__clint__l62(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___combo__TOP__36__PROF__clint__l62\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__next_mtimecmp 
        = vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__mtimecmp;
    if ((((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_stb) 
          & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_cyc)) 
         & (~ (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__ack_ff)))) {
        if (vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_we) {
            if (((((((((0x2000500U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr) 
                       | (0x2000504U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) 
                      | (0x2000510U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) 
                     | (0x2000508U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) 
                    | (0x200050cU == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) 
                   | (0x2000520U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) 
                  | (0x2000524U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) 
                 | (0x2000530U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr))) {
                if ((0x2000500U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) {
                    vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__next_mtimecmp 
                        = (((QData)((IData)((vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__mtimecmp 
                                             >> 0x20U))) 
                            << 0x20U) | (QData)((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_wdata)));
                } else if ((0x2000504U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) {
                    vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__next_mtimecmp 
                        = (((QData)((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_wdata)) 
                            << 0x20U) | (QData)((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__mtimecmp)));
                }
            }
        }
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___combo__TOP__37__PROF__clint__l62(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___combo__TOP__37__PROF__clint__l62\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__next_ssip 
        = vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__ssip;
    if ((((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_stb) 
          & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_cyc)) 
         & (~ (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__ack_ff)))) {
        if (vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_we) {
            if (((((((((0x2000500U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr) 
                       | (0x2000504U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) 
                      | (0x2000510U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) 
                     | (0x2000508U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) 
                    | (0x200050cU == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) 
                   | (0x2000520U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) 
                  | (0x2000524U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) 
                 | (0x2000530U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr))) {
                if ((0x2000500U != vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) {
                    if ((0x2000504U != vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) {
                        if ((0x2000510U != vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) {
                            if ((0x2000508U != vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) {
                                if ((0x200050cU != vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) {
                                    if ((0x2000520U 
                                         != vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) {
                                        if ((0x2000524U 
                                             != vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) {
                                            vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__next_ssip 
                                                = (1U 
                                                   & vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_wdata);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___combo__TOP__38__PROF__clint__l62(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___combo__TOP__38__PROF__clint__l62\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__next_stime 
        = (1ULL + vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__stime);
    if ((((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_stb) 
          & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_cyc)) 
         & (~ (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__ack_ff)))) {
        if (vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_we) {
            if ((1U & (~ ((((((((0x2000500U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr) 
                                | (0x2000504U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) 
                               | (0x2000510U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) 
                              | (0x2000508U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) 
                             | (0x200050cU == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) 
                            | (0x2000520U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) 
                           | (0x2000524U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) 
                          | (0x2000530U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr))))) {
                if ((0x2000528U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) {
                    vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__next_stime 
                        = (((QData)((IData)((vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__stime 
                                             >> 0x20U))) 
                            << 0x20U) | (QData)((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_wdata)));
                } else if ((0x200052cU == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) {
                    vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__next_stime 
                        = (((QData)((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_wdata)) 
                            << 0x20U) | (QData)((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__stime)));
                }
            }
        }
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___combo__TOP__39__PROF__clint__l62(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___combo__TOP__39__PROF__clint__l62\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__next_stimecmp 
        = vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__stimecmp;
    if ((((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_stb) 
          & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_cyc)) 
         & (~ (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__ack_ff)))) {
        if (vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_we) {
            if (((((((((0x2000500U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr) 
                       | (0x2000504U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) 
                      | (0x2000510U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) 
                     | (0x2000508U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) 
                    | (0x200050cU == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) 
                   | (0x2000520U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) 
                  | (0x2000524U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) 
                 | (0x2000530U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr))) {
                if ((0x2000500U != vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) {
                    if ((0x2000504U != vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) {
                        if ((0x2000510U != vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) {
                            if ((0x2000508U != vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) {
                                if ((0x200050cU != vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) {
                                    if ((0x2000520U 
                                         == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) {
                                        vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__next_stimecmp 
                                            = (((QData)((IData)(
                                                                (vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__stimecmp 
                                                                 >> 0x20U))) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_wdata)));
                                    } else if ((0x2000524U 
                                                == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) {
                                        vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__next_stimecmp 
                                            = (((QData)((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_wdata)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__stimecmp)));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___combo__TOP__40__PROF__clint__l62(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___combo__TOP__40__PROF__clint__l62\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__rdata = 0U;
    if ((((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_stb) 
          & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_cyc)) 
         & (~ (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__ack_ff)))) {
        if ((1U & (~ (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_we)))) {
            if (((((((((0x2000500U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr) 
                       | (0x2000504U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) 
                      | (0x2000510U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) 
                     | (0x2000508U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) 
                    | (0x200050cU == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) 
                   | (0x2000520U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) 
                  | (0x2000524U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) 
                 | (0x2000530U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr))) {
                vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__rdata 
                    = ((0x2000500U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)
                        ? (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__mtimecmp)
                        : ((0x2000504U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)
                            ? (IData)((vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__mtimecmp 
                                       >> 0x20U)) : 
                           ((0x2000510U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)
                             ? (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__msip)
                             : ((0x2000508U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)
                                 ? (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__mtime)
                                 : ((0x200050cU == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)
                                     ? (IData)((vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__mtime 
                                                >> 0x20U))
                                     : ((0x2000520U 
                                         == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)
                                         ? (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__stimecmp)
                                         : ((0x2000524U 
                                             == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)
                                             ? (IData)(
                                                       (vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__stimecmp 
                                                        >> 0x20U))
                                             : (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__ssip))))))));
            } else if ((0x2000528U == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) {
                vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__rdata 
                    = (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__stime);
            } else if ((0x200052cU == vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_addr)) {
                vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__rdata 
                    = (IData)((vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__stime 
                               >> 0x20U));
            }
        }
    }
}

VL_INLINE_OPT void Vsoc_tb___024root___combo__TOP__41__PROF__wbinterconnect__l164(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___combo__TOP__41__PROF__wbinterconnect__l164\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_ack 
        = ((~ ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__slave_select) 
               >> 3U)) & ((4U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__slave_select))
                           ? ((~ ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__slave_select) 
                                  >> 1U)) & ((1U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__slave_select))
                                              ? ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_cyc) 
                                                 & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__ack_ff))
                                              : ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_cyc) 
                                                 & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__ack_ff))))
                           : ((2U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__slave_select))
                               ? ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__slave_select) 
                                  & (((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_u__DOT__ack_ff) 
                                      & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_cyc)) 
                                     & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_stb)))
                               : ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__slave_select) 
                                  & ((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_cyc) 
                                     & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_u__DOT__ack_ff))))));
}

VL_INLINE_OPT void Vsoc_tb___024root___combo__TOP__42__PROF__wbinterconnect__l164(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___combo__TOP__42__PROF__wbinterconnect__l164\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_rdata 
        = ((8U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__slave_select))
            ? 0U : ((4U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__slave_select))
                     ? ((2U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__slave_select))
                         ? 0U : ((1U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__slave_select))
                                  ? vlSelf->soc_tb__DOT__soc_top_u__DOT__clint_u__DOT__rdata
                                  : (((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain4_rst_r) 
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
                                                               | (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain1_clk_en))))))))))
                     : ((2U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__slave_select))
                         ? ((1U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__slave_select))
                             ? vlSelf->soc_tb__DOT__soc_top_u__DOT__uart_rdata
                             : 0U) : ((1U & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__slave_select))
                                       ? vlSelf->soc_tb__DOT__soc_top_u__DOT__plic_rdata
                                       : 0U))));
}

VL_INLINE_OPT void Vsoc_tb___024root___combo__TOP__43__PROF__wbinterconnect__l96(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___combo__TOP__43__PROF__wbinterconnect__l96\n"); );
    // Body
    vlSelf->m2_ack = ((1U != (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_master)) 
                      & ((2U != (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_master)) 
                         & ((4U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_master)) 
                            & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_ack))));
}

VL_INLINE_OPT void Vsoc_tb___024root___combo__TOP__44__PROF__wbinterconnect__l96(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___combo__TOP__44__PROF__wbinterconnect__l96\n"); );
    // Body
    vlSelf->m1_ack = ((1U != (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_master)) 
                      & ((2U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_master)) 
                         & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_ack)));
}

VL_INLINE_OPT void Vsoc_tb___024root___combo__TOP__45__PROF__wbinterconnect__l96(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___combo__TOP__45__PROF__wbinterconnect__l96\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__ti_soc_ack 
        = ((1U == (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_master))
            ? (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_ack)
            : ((2U != (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_master)) 
               & ((4U != (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_master)) 
                  & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_ack))));
}

VL_INLINE_OPT void Vsoc_tb___024root___combo__TOP__46__PROF__wbinterconnect__l243(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___combo__TOP__46__PROF__wbinterconnect__l243\n"); );
    // Body
    vlSelf->m1_rdata = vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_rdata;
}

VL_INLINE_OPT void Vsoc_tb___024root___combo__TOP__47__PROF__wbinterconnect__l244(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___combo__TOP__47__PROF__wbinterconnect__l244\n"); );
    // Body
    vlSelf->m2_rdata = vlSelf->soc_tb__DOT__soc_top_u__DOT__wbinterconnect_u__DOT__current_wbs_rdata;
}

VL_INLINE_OPT void Vsoc_tb___024root___combo__TOP__48__PROF__async_wb__l91(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___combo__TOP__48__PROF__async_wb__l91\n"); );
    // Body
    vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__s_resp_wr_en 
        = ((((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__ti_soc_cyc) 
             & (~ (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__ti_soc_we))) 
            & (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__ti_soc_ack)) 
           & (2U != (IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__testio_ma_wb__DOT__async_wb_u__DOT__u_resp_if__DOT__wr_cnt)));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__826__PROF__testio__l126(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__826__PROF__testio__l126\n"); );
    // Body
    vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_ctrl 
        = ((((IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_current_state) 
             != (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_pre_state)) 
            << 5U) | (((1U == (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_current_state)) 
                       << 4U) | (((6U == (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_current_state)) 
                                  << 3U) | (((9U == (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_current_state)) 
                                             << 2U) 
                                            | (((IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__is_send_mode) 
                                                << 1U) 
                                               | ((IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__is_send_mode) 
                                                  | (9U 
                                                     == (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_current_state))))))));
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__827__PROF__testio_trx__l143(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__827__PROF__testio_trx__l143\n"); );
    // Body
    vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_cycle_counter 
        = vlSelf->__Vdly__soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_cycle_counter;
}

VL_INLINE_OPT void Vsoc_tb___024root___sequent__TOP__828__PROF__testio_trx__l100(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___sequent__TOP__828__PROF__testio_trx__l100\n"); );
    // Body
    vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_fsm_ctrl_bit 
        = (((0x20U & ((~ (IData)(vlSelf->soc_tb__DOT__master_ti_i)) 
                      << 5U)) | ((0x10U & ((~ (IData)(vlSelf->soc_tb__DOT__master_ti_i)) 
                                           << 4U)) 
                                 | ((8U & ((~ (IData)(vlSelf->soc_tb__DOT__master_ti_i)) 
                                           << 3U)) 
                                    | ((IData)(vlSelf->soc_tb__DOT__master_ti_i) 
                                       << 2U)))) | 
           (((0U == (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_cycle_counter)) 
             << 1U) | (0U == (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__testio_trx_bit_u__DOT__ti_cycle_counter))));
}

VL_INLINE_OPT void Vsoc_tb___024root___combo__TOP__49__PROF__testio__l139(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___combo__TOP__49__PROF__testio__l139\n"); );
    // Body
    vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_next_state 
        = ((8U & (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_current_state))
            ? ((4U & (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_current_state))
                ? 0U : ((2U & (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_current_state))
                         ? ((1U & (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_current_state))
                             ? 0U : ((2U == (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__w2m_bridge_ti_u__DOT__wb_state_u__DOT__dff_q))
                                      ? 0U : (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_current_state)))
                         : ((1U & (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_current_state))
                             ? ((2U & (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_fsm_ctrl_bit))
                                 ? 0xaU : (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_current_state))
                             : ((0x10U & (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_fsm_ctrl_bit))
                                 ? 9U : 0xbU)))) : 
           ((4U & (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_current_state))
             ? ((2U & (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_current_state))
                 ? ((1U & (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_current_state))
                     ? ((0x20U & (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_fsm_ctrl_bit))
                         ? 8U : (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_current_state))
                     : ((1U & (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_fsm_ctrl_bit))
                         ? 7U : (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_current_state)))
                 : ((1U & (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_current_state))
                     ? ((4U & (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_fsm_ctrl_bit))
                         ? 0xaU : (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_current_state))
                     : ((8U & (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_fsm_ctrl_bit))
                         ? 5U : 0xbU))) : ((2U & (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_current_state))
                                            ? ((1U 
                                                & (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_current_state))
                                                ? (
                                                   (0x10U 
                                                    & (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_fsm_ctrl_bit))
                                                    ? 4U
                                                    : 0xbU)
                                                : (
                                                   (0x20U 
                                                    & (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_fsm_ctrl_bit))
                                                    ? 3U
                                                    : (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_current_state)))
                                            : ((1U 
                                                & (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_current_state))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_fsm_ctrl_bit))
                                                    ? 2U
                                                    : (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_current_state))
                                                : (
                                                   (1U 
                                                    == (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__w2m_bridge_ti_u__DOT__wb_state_u__DOT__dff_q))
                                                    ? 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->soc_tb__DOT__testio_wb_u__DOT__ti_mem_if_req[2U] 
                                                         >> 0x14U)))
                                                     ? 1U
                                                     : 6U)
                                                    : (IData)(vlSelf->soc_tb__DOT__testio_wb_u__DOT__testio_u__DOT__ti_current_state))))));
}

void Vsoc_tb___024root___eval(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->testio_clk) & (~ (IData)(vlSelf->__Vclklast__TOP__testio_clk)))) {
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Vsoc_tb___024root___sequent__TOP__15__PROF__testio_ma__l130(vlSelf);
        Vsoc_tb___024root___sequent__TOP__17__PROF__async_fifo__l107(vlSelf);
        Vsoc_tb___024root___sequent__TOP__18__PROF__async_fifo__l182(vlSelf);
        Vsoc_tb___024root___sequent__TOP__19__PROF__testio__l91(vlSelf);
        Vsoc_tb___024root___sequent__TOP__20__PROF__testio_ma__l128(vlSelf);
        Vsoc_tb___024root___sequent__TOP__21__PROF__testio_ma__l142(vlSelf);
        Vsoc_tb___024root___sequent__TOP__22__PROF__async_fifo__l105(vlSelf);
        Vsoc_tb___024root___sequent__TOP__26__PROF__testio_ma__l130(vlSelf);
        Vsoc_tb___024root___sequent__TOP__28__PROF__async_fifo__l107(vlSelf);
        Vsoc_tb___024root___sequent__TOP__29__PROF__std_dffr__l15(vlSelf);
    }
    Vsoc_tb___024root___combo__TOP__0__PROF__w2m_bridge__l62(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    Vsoc_tb___024root___combo__TOP__1__PROF__crg__l35(vlSelf);
    Vsoc_tb___024root___combo__TOP__2__PROF__crg__l35(vlSelf);
    Vsoc_tb___024root___combo__TOP__3__PROF__crg__l43(vlSelf);
    Vsoc_tb___024root___combo__TOP__4__PROF__crg__l44(vlSelf);
    if ((((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->__Vclklast__TOP__rst)) 
         | ((~ (IData)(vlSelf->testio_clk)) & (IData)(vlSelf->__Vclklast__TOP__testio_clk)))) {
        vlSelf->__Vm_traceActivity[3U] = 1U;
        Vsoc_tb___024root___sequent__TOP__37__PROF__testio_trx__l169(vlSelf);
        Vsoc_tb___024root___sequent__TOP__38__PROF__testio_trx__l161(vlSelf);
        Vsoc_tb___024root___sequent__TOP__40__PROF__testio_trx__l165(vlSelf);
        Vsoc_tb___024root___sequent__TOP__41__PROF__testio_trx__l154(vlSelf);
        Vsoc_tb___024root___sequent__TOP__42__PROF__testio__l245(vlSelf);
        Vsoc_tb___024root___sequent__TOP__45__PROF__testio_trx__l195(vlSelf);
    }
    if ((((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))) 
         | ((IData)(vlSelf->testio_clk) & (~ (IData)(vlSelf->__Vclklast__TOP__testio_clk))))) {
        Vsoc_tb___024root___sequent__TOP__50__PROF__std_dffre__l15(vlSelf);
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        vlSelf->__Vm_traceActivity[4U] = 1U;
        Vsoc_tb___024root___sequent__TOP__105__PROF__uart_tx__l135(vlSelf);
        Vsoc_tb___024root___sequent__TOP__106__PROF__uart_tx__l135(vlSelf);
        Vsoc_tb___024root___sequent__TOP__107__PROF__uart_rx__l141(vlSelf);
        Vsoc_tb___024root___sequent__TOP__108__PROF__uart_rx__l141(vlSelf);
        Vsoc_tb___024root___sequent__TOP__109__PROF__io_generic_fifo__l62(vlSelf);
        Vsoc_tb___024root___sequent__TOP__110__PROF__io_generic_fifo__l68(vlSelf);
        Vsoc_tb___024root___sequent__TOP__111__PROF__io_generic_fifo__l62(vlSelf);
        Vsoc_tb___024root___sequent__TOP__115__PROF__io_generic_fifo__l62(vlSelf);
        Vsoc_tb___024root___sequent__TOP__118__PROF__uart__l125(vlSelf);
        Vsoc_tb___024root___sequent__TOP__121__PROF__io_generic_fifo__l37(vlSelf);
        Vsoc_tb___024root___sequent__TOP__125__PROF__io_generic_fifo__l37(vlSelf);
        Vsoc_tb___024root___sequent__TOP__127__PROF__async_fifo__l107(vlSelf);
        Vsoc_tb___024root___sequent__TOP__135__PROF__io_generic_fifo__l51(vlSelf);
        Vsoc_tb___024root___sequent__TOP__136__PROF__io_generic_fifo__l48(vlSelf);
        Vsoc_tb___024root___sequent__TOP__137__PROF__io_generic_fifo__l51(vlSelf);
        Vsoc_tb___024root___sequent__TOP__138__PROF__io_generic_fifo__l48(vlSelf);
        Vsoc_tb___024root___sequent__TOP__139__PROF__io_generic_fifo__l51(vlSelf);
        Vsoc_tb___024root___sequent__TOP__140__PROF__io_generic_fifo__l48(vlSelf);
        Vsoc_tb___024root___sequent__TOP__144__PROF__io_generic_fifo__l37(vlSelf);
        Vsoc_tb___024root___sequent__TOP__145__PROF__io_generic_fifo__l45(vlSelf);
        Vsoc_tb___024root___sequent__TOP__146__PROF__io_generic_fifo__l45(vlSelf);
        Vsoc_tb___024root___sequent__TOP__147__PROF__io_generic_fifo__l45(vlSelf);
        Vsoc_tb___024root___sequent__TOP__148__PROF__uart__l51(vlSelf);
        Vsoc_tb___024root___sequent__TOP__149__PROF__uart_tx__l129(vlSelf);
        Vsoc_tb___024root___sequent__TOP__150__PROF__uart_tx__l129(vlSelf);
        Vsoc_tb___024root___sequent__TOP__151__PROF__uart_rx__l135(vlSelf);
        Vsoc_tb___024root___sequent__TOP__152__PROF__uart_rx__l135(vlSelf);
        Vsoc_tb___024root___sequent__TOP__153__PROF__io_generic_fifo__l55(vlSelf);
        Vsoc_tb___024root___sequent__TOP__154__PROF__io_generic_fifo__l55(vlSelf);
        Vsoc_tb___024root___sequent__TOP__155__PROF__io_generic_fifo__l55(vlSelf);
        Vsoc_tb___024root___sequent__TOP__156__PROF__uart__l62(vlSelf);
        Vsoc_tb___024root___sequent__TOP__157__PROF__uart_rx__l104(vlSelf);
        Vsoc_tb___024root___sequent__TOP__158__PROF__uart_rx__l104(vlSelf);
        Vsoc_tb___024root___sequent__TOP__159__PROF__io_generic_fifo__l55(vlSelf);
        Vsoc_tb___024root___sequent__TOP__160__PROF__uart_tx__l108(vlSelf);
        Vsoc_tb___024root___sequent__TOP__161__PROF__uart_tx__l108(vlSelf);
        Vsoc_tb___024root___sequent__TOP__162__PROF__uart__l121(vlSelf);
        Vsoc_tb___024root___sequent__TOP__163__PROF__uart_tx__l108(vlSelf);
        Vsoc_tb___024root___sequent__TOP__164__PROF__uart_tx__l108(vlSelf);
        Vsoc_tb___024root___sequent__TOP__165__PROF__io_generic_fifo__l32(vlSelf);
        Vsoc_tb___024root___sequent__TOP__166__PROF__io_generic_fifo__l55(vlSelf);
        Vsoc_tb___024root___sequent__TOP__167__PROF__uart_rx__l104(vlSelf);
        Vsoc_tb___024root___sequent__TOP__168__PROF__uart_rx__l104(vlSelf);
        Vsoc_tb___024root___sequent__TOP__169__PROF__io_generic_fifo__l32(vlSelf);
        Vsoc_tb___024root___sequent__TOP__170__PROF__uart_tx__l108(vlSelf);
        Vsoc_tb___024root___sequent__TOP__171__PROF__async_fifo__l105(vlSelf);
        Vsoc_tb___024root___sequent__TOP__172__PROF__uart_rx__l123(vlSelf);
        Vsoc_tb___024root___sequent__TOP__173__PROF__uart_rx__l123(vlSelf);
        Vsoc_tb___024root___sequent__TOP__174__PROF__uart_rx__l104(vlSelf);
        Vsoc_tb___024root___sequent__TOP__175__PROF__uart_rx__l104(vlSelf);
        Vsoc_tb___024root___sequent__TOP__176__PROF__uart_tx__l108(vlSelf);
        Vsoc_tb___024root___sequent__TOP__177__PROF__uart_tx__l108(vlSelf);
        Vsoc_tb___024root___sequent__TOP__178__PROF__uart_tx__l108(vlSelf);
        Vsoc_tb___024root___sequent__TOP__179__PROF__io_generic_fifo__l45(vlSelf);
        Vsoc_tb___024root___sequent__TOP__180__PROF__io_generic_fifo__l45(vlSelf);
        Vsoc_tb___024root___sequent__TOP__181__PROF__io_generic_fifo__l45(vlSelf);
        Vsoc_tb___024root___sequent__TOP__182__PROF__uart__l62(vlSelf);
        Vsoc_tb___024root___sequent__TOP__183__PROF__async_fifo__l182(vlSelf);
        Vsoc_tb___024root___sequent__TOP__184__PROF__io_generic_fifo__l55(vlSelf);
        Vsoc_tb___024root___sequent__TOP__185__PROF__io_generic_fifo__l32(vlSelf);
        Vsoc_tb___024root___sequent__TOP__198__PROF__async_fifo__l107(vlSelf);
        Vsoc_tb___024root___sequent__TOP__210__PROF__io_generic_fifo__l62(vlSelf);
        Vsoc_tb___024root___sequent__TOP__212__PROF__io_generic_fifo__l62(vlSelf);
        Vsoc_tb___024root___sequent__TOP__213__PROF__io_generic_fifo__l51(vlSelf);
        Vsoc_tb___024root___sequent__TOP__215__PROF__io_generic_fifo__l62(vlSelf);
        Vsoc_tb___024root___sequent__TOP__216__PROF__uart__l125(vlSelf);
        Vsoc_tb___024root___sequent__TOP__217__PROF__io_generic_fifo__l51(vlSelf);
        Vsoc_tb___024root___sequent__TOP__218__PROF__io_generic_fifo__l37(vlSelf);
        Vsoc_tb___024root___sequent__TOP__221__PROF__io_generic_fifo__l68(vlSelf);
        Vsoc_tb___024root___sequent__TOP__222__PROF__io_generic_fifo__l51(vlSelf);
        Vsoc_tb___024root___sequent__TOP__223__PROF__io_generic_fifo__l37(vlSelf);
        Vsoc_tb___024root___sequent__TOP__231__PROF__io_generic_fifo__l37(vlSelf);
        Vsoc_tb___024root___sequent__TOP__232__PROF__uart_rx__l45(vlSelf);
        Vsoc_tb___024root___sequent__TOP__233__PROF__uart_rx__l45(vlSelf);
        Vsoc_tb___024root___sequent__TOP__234__PROF__uart_tx__l41(vlSelf);
        Vsoc_tb___024root___sequent__TOP__235__PROF__uart_rx__l132(vlSelf);
        Vsoc_tb___024root___sequent__TOP__236__PROF__uart_rx__l132(vlSelf);
        Vsoc_tb___024root___sequent__TOP__237__PROF__uart_rx__l45(vlSelf);
        Vsoc_tb___024root___sequent__TOP__238__PROF__uart_rx__l135(vlSelf);
        Vsoc_tb___024root___sequent__TOP__239__PROF__uart_rx__l45(vlSelf);
        Vsoc_tb___024root___sequent__TOP__240__PROF__uart_rx__l135(vlSelf);
        Vsoc_tb___024root___sequent__TOP__241__PROF__uart_tx__l41(vlSelf);
        Vsoc_tb___024root___sequent__TOP__242__PROF__uart_tx__l129(vlSelf);
        Vsoc_tb___024root___sequent__TOP__243__PROF__uart_tx__l129(vlSelf);
        Vsoc_tb___024root___sequent__TOP__244__PROF__uart_tx__l41(vlSelf);
        Vsoc_tb___024root___sequent__TOP__245__PROF__uart_tx__l41(vlSelf);
        Vsoc_tb___024root___sequent__TOP__246__PROF__uart_rx__l104(vlSelf);
        Vsoc_tb___024root___sequent__TOP__247__PROF__uart_rx__l104(vlSelf);
        Vsoc_tb___024root___sequent__TOP__248__PROF__io_generic_fifo__l76(vlSelf);
        Vsoc_tb___024root___sequent__TOP__249__PROF__io_generic_fifo__l29(vlSelf);
        Vsoc_tb___024root___sequent__TOP__250__PROF__io_generic_fifo__l77(vlSelf);
        Vsoc_tb___024root___sequent__TOP__251__PROF__uart__l62(vlSelf);
        Vsoc_tb___024root___sequent__TOP__252__PROF__io_generic_fifo__l29(vlSelf);
        Vsoc_tb___024root___sequent__TOP__253__PROF__io_generic_fifo__l77(vlSelf);
        Vsoc_tb___024root___sequent__TOP__254__PROF__uart__l62(vlSelf);
        Vsoc_tb___024root___sequent__TOP__255__PROF__uart__l62(vlSelf);
        Vsoc_tb___024root___sequent__TOP__256__PROF__uart__l62(vlSelf);
        Vsoc_tb___024root___sequent__TOP__257__PROF__uart__l62(vlSelf);
        Vsoc_tb___024root___sequent__TOP__258__PROF__uart__l62(vlSelf);
        Vsoc_tb___024root___sequent__TOP__259__PROF__io_generic_fifo__l29(vlSelf);
        Vsoc_tb___024root___sequent__TOP__260__PROF__io_generic_fifo__l77(vlSelf);
        Vsoc_tb___024root___sequent__TOP__261__PROF__uart_tx__l41(vlSelf);
        Vsoc_tb___024root___sequent__TOP__262__PROF__uart_rx__l45(vlSelf);
        Vsoc_tb___024root___sequent__TOP__263__PROF__uart_rx__l45(vlSelf);
        Vsoc_tb___024root___sequent__TOP__264__PROF__uart_rx__l45(vlSelf);
        Vsoc_tb___024root___sequent__TOP__265__PROF__uart_rx__l141(vlSelf);
        Vsoc_tb___024root___sequent__TOP__267__PROF__uart_rx__l45(vlSelf);
        Vsoc_tb___024root___sequent__TOP__268__PROF__uart_rx__l141(vlSelf);
        Vsoc_tb___024root___sequent__TOP__270__PROF__uart_tx__l41(vlSelf);
        Vsoc_tb___024root___sequent__TOP__271__PROF__uart_tx__l135(vlSelf);
        Vsoc_tb___024root___sequent__TOP__273__PROF__uart_tx__l41(vlSelf);
        Vsoc_tb___024root___sequent__TOP__274__PROF__uart_tx__l135(vlSelf);
        Vsoc_tb___024root___sequent__TOP__278__PROF__uart_tx__l41(vlSelf);
        Vsoc_tb___024root___sequent__TOP__285__PROF__uart_rx__l134(vlSelf);
        Vsoc_tb___024root___sequent__TOP__286__PROF__uart_rx__l45(vlSelf);
        Vsoc_tb___024root___sequent__TOP__287__PROF__uart_rx__l45(vlSelf);
        Vsoc_tb___024root___sequent__TOP__288__PROF__uart_rx__l45(vlSelf);
        Vsoc_tb___024root___sequent__TOP__289__PROF__uart_rx__l134(vlSelf);
        Vsoc_tb___024root___sequent__TOP__290__PROF__uart_rx__l45(vlSelf);
        Vsoc_tb___024root___sequent__TOP__291__PROF__uart_rx__l45(vlSelf);
        Vsoc_tb___024root___sequent__TOP__292__PROF__uart_rx__l45(vlSelf);
        Vsoc_tb___024root___sequent__TOP__293__PROF__uart_tx__l127(vlSelf);
        Vsoc_tb___024root___sequent__TOP__294__PROF__uart_tx__l41(vlSelf);
        Vsoc_tb___024root___sequent__TOP__295__PROF__uart_tx__l41(vlSelf);
        Vsoc_tb___024root___sequent__TOP__296__PROF__uart_tx__l41(vlSelf);
        Vsoc_tb___024root___sequent__TOP__297__PROF__uart_tx__l127(vlSelf);
        Vsoc_tb___024root___sequent__TOP__298__PROF__uart_tx__l41(vlSelf);
        Vsoc_tb___024root___sequent__TOP__299__PROF__uart_tx__l41(vlSelf);
        Vsoc_tb___024root___sequent__TOP__300__PROF__uart_rx__l45(vlSelf);
        Vsoc_tb___024root___sequent__TOP__301__PROF__uart_rx__l45(vlSelf);
        Vsoc_tb___024root___sequent__TOP__302__PROF__uart_tx__l41(vlSelf);
        Vsoc_tb___024root___sequent__TOP__303__PROF__uart_tx__l41(vlSelf);
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->__Vclklast__TOP__rst)))) {
        vlSelf->__Vm_traceActivity[5U] = 1U;
        Vsoc_tb___024root___sequent__TOP__328__PROF__async_fifo__l99(vlSelf);
        Vsoc_tb___024root___sequent__TOP__338__PROF__async_fifo__l174(vlSelf);
        Vsoc_tb___024root___sequent__TOP__341__PROF__async_fifo__l89(vlSelf);
        Vsoc_tb___024root___sequent__TOP__342__PROF__wbinterconnect__l192(vlSelf);
        Vsoc_tb___024root___sequent__TOP__343__PROF__async_fifo__l111(vlSelf);
        Vsoc_tb___024root___sequent__TOP__344__PROF__async_wb__l82(vlSelf);
        Vsoc_tb___024root___sequent__TOP__345__PROF__async_fifo__l164(vlSelf);
        Vsoc_tb___024root___sequent__TOP__346__PROF__wbinterconnect__l149(vlSelf);
        Vsoc_tb___024root___sequent__TOP__347__PROF__async_fifo__l187(vlSelf);
        Vsoc_tb___024root___sequent__TOP__348__PROF__async_fifo__l99(vlSelf);
        Vsoc_tb___024root___sequent__TOP__353__PROF__async_fifo__l174(vlSelf);
        Vsoc_tb___024root___sequent__TOP__357__PROF__async_fifo__l151(vlSelf);
        Vsoc_tb___024root___sequent__TOP__358__PROF__async_fifo__l111(vlSelf);
        Vsoc_tb___024root___sequent__TOP__359__PROF__wbinterconnect__l96(vlSelf);
        Vsoc_tb___024root___sequent__TOP__360__PROF__async_fifo__l187(vlSelf);
        Vsoc_tb___024root___sequent__TOP__361__PROF__async_fifo__l196(vlSelf);
    }
    if ((((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->__Vclklast__TOP__rst)) 
         | ((IData)(vlSelf->testio_clk) & (~ (IData)(vlSelf->__Vclklast__TOP__testio_clk))))) {
        vlSelf->__Vm_traceActivity[6U] = 1U;
        Vsoc_tb___024root___sequent__TOP__403__PROF__testio_trx__l143(vlSelf);
        Vsoc_tb___024root___sequent__TOP__404__PROF__async_fifo__l99(vlSelf);
        Vsoc_tb___024root___sequent__TOP__405__PROF__testio_trx__l183(vlSelf);
        Vsoc_tb___024root___sequent__TOP__406__PROF__testio_trx__l176(vlSelf);
        Vsoc_tb___024root___sequent__TOP__420__PROF__async_wb__l66(vlSelf);
        Vsoc_tb___024root___sequent__TOP__421__PROF__testio_ma__l80(vlSelf);
        Vsoc_tb___024root___sequent__TOP__422__PROF__testio_ma__l169(vlSelf);
        Vsoc_tb___024root___sequent__TOP__424__PROF__testio_ma__l63(vlSelf);
        Vsoc_tb___024root___sequent__TOP__425__PROF__async_fifo__l164(vlSelf);
        Vsoc_tb___024root___sequent__TOP__426__PROF__testio_trx__l139(vlSelf);
        Vsoc_tb___024root___sequent__TOP__427__PROF__async_fifo__l89(vlSelf);
        Vsoc_tb___024root___sequent__TOP__428__PROF__testio_trx__l179(vlSelf);
        Vsoc_tb___024root___sequent__TOP__429__PROF__testio_trx__l172(vlSelf);
        Vsoc_tb___024root___sequent__TOP__430__PROF__m2w_bridge__l90(vlSelf);
        Vsoc_tb___024root___sequent__TOP__431__PROF__m2w_bridge__l90(vlSelf);
        Vsoc_tb___024root___sequent__TOP__432__PROF__m2w_bridge__l90(vlSelf);
        Vsoc_tb___024root___sequent__TOP__433__PROF__m2w_bridge__l90(vlSelf);
        Vsoc_tb___024root___sequent__TOP__434__PROF__m2w_bridge__l90(vlSelf);
        Vsoc_tb___024root___sequent__TOP__435__PROF__m2w_bridge__l90(vlSelf);
        Vsoc_tb___024root___sequent__TOP__436__PROF__m2w_bridge__l90(vlSelf);
        Vsoc_tb___024root___sequent__TOP__437__PROF__testio__l127(vlSelf);
        Vsoc_tb___024root___sequent__TOP__438__PROF__async_fifo__l164(vlSelf);
        Vsoc_tb___024root___sequent__TOP__439__PROF__m2w_bridge__l90(vlSelf);
        Vsoc_tb___024root___sequent__TOP__440__PROF__async_fifo__l89(vlSelf);
        Vsoc_tb___024root___sequent__TOP__441__PROF__m2w_bridge__l90(vlSelf);
        Vsoc_tb___024root___sequent__TOP__442__PROF__async_fifo__l187(vlSelf);
        Vsoc_tb___024root___sequent__TOP__443__PROF__async_wb__l62(vlSelf);
        Vsoc_tb___024root___sequent__TOP__444__PROF__testio_ma__l76(vlSelf);
        Vsoc_tb___024root___sequent__TOP__445__PROF__testio_ma__l157(vlSelf);
        Vsoc_tb___024root___sequent__TOP__446__PROF__async_fifo__l111(vlSelf);
        Vsoc_tb___024root___sequent__TOP__449__PROF__async_fifo__l99(vlSelf);
        Vsoc_tb___024root___sequent__TOP__450__PROF__testio_trx__l183(vlSelf);
        Vsoc_tb___024root___sequent__TOP__451__PROF__testio_trx__l176(vlSelf);
        Vsoc_tb___024root___sequent__TOP__470__PROF__async_wb__l66(vlSelf);
        Vsoc_tb___024root___sequent__TOP__476__PROF__testio__l132(vlSelf);
        Vsoc_tb___024root___sequent__TOP__477__PROF__async_fifo__l164(vlSelf);
        Vsoc_tb___024root___sequent__TOP__478__PROF__m2w_bridge__l90(vlSelf);
        Vsoc_tb___024root___sequent__TOP__479__PROF__async_fifo__l89(vlSelf);
        Vsoc_tb___024root___sequent__TOP__480__PROF__m2w_bridge__l141(vlSelf);
        Vsoc_tb___024root___sequent__TOP__481__PROF__async_fifo__l196(vlSelf);
        Vsoc_tb___024root___sequent__TOP__482__PROF__async_fifo__l187(vlSelf);
        Vsoc_tb___024root___sequent__TOP__483__PROF__m2w_bridge__l90(vlSelf);
        Vsoc_tb___024root___sequent__TOP__484__PROF__m2w_bridge__l90(vlSelf);
        Vsoc_tb___024root___sequent__TOP__485__PROF__testio_ma__l173(vlSelf);
        Vsoc_tb___024root___sequent__TOP__486__PROF__async_fifo__l151(vlSelf);
        Vsoc_tb___024root___sequent__TOP__487__PROF__async_fifo__l111(vlSelf);
        Vsoc_tb___024root___sequent__TOP__495__PROF__testio_ma__l169(vlSelf);
        Vsoc_tb___024root___sequent__TOP__500__PROF__w2m_bridge__l86(vlSelf);
        Vsoc_tb___024root___sequent__TOP__501__PROF__testio__l107(vlSelf);
        Vsoc_tb___024root___sequent__TOP__502__PROF__async_fifo__l159(vlSelf);
        Vsoc_tb___024root___sequent__TOP__503__PROF__async_fifo__l161(vlSelf);
        Vsoc_tb___024root___sequent__TOP__504__PROF__async_fifo__l46(vlSelf);
        Vsoc_tb___024root___sequent__TOP__505__PROF__async_fifo__l55(vlSelf);
        Vsoc_tb___024root___sequent__TOP__506__PROF__testio_ma__l222(vlSelf);
        Vsoc_tb___024root___sequent__TOP__507__PROF__testio_ma__l189(vlSelf);
        Vsoc_tb___024root___sequent__TOP__508__PROF__m2w_bridge__l90(vlSelf);
        Vsoc_tb___024root___sequent__TOP__509__PROF__async_wb__l60(vlSelf);
        Vsoc_tb___024root___sequent__TOP__512__PROF__async_wb__l69(vlSelf);
        Vsoc_tb___024root___sequent__TOP__513__PROF__testio_ma__l230(vlSelf);
        Vsoc_tb___024root___sequent__TOP__514__PROF__testio_ma__l236(vlSelf);
    }
    if (((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__domain1_clk) 
         & (~ (IData)(vlSelf->__Vclklast__TOP__soc_tb__DOT__soc_top_u__DOT__domain1_clk)))) {
        vlSelf->__Vm_traceActivity[7U] = 1U;
        Vsoc_tb___024root___sequent__TOP__541__PROF__plic__l105(vlSelf);
        Vsoc_tb___024root___sequent__TOP__542__PROF__plic__l95(vlSelf);
        Vsoc_tb___024root___sequent__TOP__543__PROF__plic__l98(vlSelf);
        Vsoc_tb___024root___sequent__TOP__546__PROF__plic__l51(vlSelf);
        Vsoc_tb___024root___sequent__TOP__547__PROF__plic__l102(vlSelf);
        Vsoc_tb___024root___sequent__TOP__548__PROF__plic__l136(vlSelf);
        Vsoc_tb___024root___sequent__TOP__549__PROF__plic__l146(vlSelf);
        Vsoc_tb___024root___sequent__TOP__550__PROF__plic__l96(vlSelf);
        Vsoc_tb___024root___sequent__TOP__551__PROF__plic__l155(vlSelf);
        Vsoc_tb___024root___sequent__TOP__552__PROF__plic__l164(vlSelf);
        Vsoc_tb___024root___sequent__TOP__553__PROF__plic__l97(vlSelf);
        Vsoc_tb___024root___sequent__TOP__554__PROF__plic__l49(vlSelf);
        Vsoc_tb___024root___sequent__TOP__555__PROF__plic__l43(vlSelf);
        Vsoc_tb___024root___sequent__TOP__556__PROF__plic__l58(vlSelf);
        Vsoc_tb___024root___sequent__TOP__557__PROF__plic__l40(vlSelf);
        Vsoc_tb___024root___sequent__TOP__557__PROF__plic__l40(vlSelf);
        Vsoc_tb___024root___sequent__TOP__559__PROF__clint__l39(vlSelf);
        Vsoc_tb___024root___sequent__TOP__560__PROF__clint__l39(vlSelf);
        Vsoc_tb___024root___sequent__TOP__561__PROF__clint__l39(vlSelf);
        Vsoc_tb___024root___sequent__TOP__562__PROF__clint__l39(vlSelf);
        Vsoc_tb___024root___sequent__TOP__563__PROF__clint__l39(vlSelf);
        Vsoc_tb___024root___sequent__TOP__564__PROF__clint__l39(vlSelf);
        Vsoc_tb___024root___sequent__TOP__565__PROF__clint__l39(vlSelf);
        Vsoc_tb___024root___sequent__TOP__566__PROF__plic__l40(vlSelf);
        Vsoc_tb___024root___sequent__TOP__574__PROF__plic__l44(vlSelf);
        Vsoc_tb___024root___sequent__TOP__575__PROF__plic__l43(vlSelf);
        Vsoc_tb___024root___sequent__TOP__577__PROF__plic__l93(vlSelf);
        Vsoc_tb___024root___sequent__TOP__579__PROF__plic__l95(vlSelf);
        Vsoc_tb___024root___sequent__TOP__580__PROF__plic__l105(vlSelf);
        Vsoc_tb___024root___sequent__TOP__581__PROF__plic__l98(vlSelf);
        Vsoc_tb___024root___sequent__TOP__584__PROF__plic__l102(vlSelf);
        Vsoc_tb___024root___sequent__TOP__585__PROF__plic__l96(vlSelf);
        Vsoc_tb___024root___sequent__TOP__587__PROF__plic__l66(vlSelf);
        Vsoc_tb___024root___sequent__TOP__588__PROF__plic__l83(vlSelf);
        Vsoc_tb___024root___sequent__TOP__589__PROF__plic__l71(vlSelf);
        Vsoc_tb___024root___sequent__TOP__591__PROF__plic__l71(vlSelf);
    }
    if (((IData)(vlSelf->soc_tb__DOT__soc_top_u__DOT__domain2_clk) 
         & (~ (IData)(vlSelf->__Vclklast__TOP__soc_tb__DOT__soc_top_u__DOT__domain2_clk)))) {
        vlSelf->__Vm_traceActivity[8U] = 1U;
        Vsoc_tb___024root___sequent__TOP__624__PROF__uart_tx__l131(vlSelf);
        Vsoc_tb___024root___sequent__TOP__625__PROF__uart_rx__l137(vlSelf);
        Vsoc_tb___024root___sequent__TOP__626__PROF__io_generic_fifo__l58(vlSelf);
        Vsoc_tb___024root___sequent__TOP__627__PROF__io_generic_fifo__l57(vlSelf);
        Vsoc_tb___024root___sequent__TOP__628__PROF__io_generic_fifo__l58(vlSelf);
        Vsoc_tb___024root___sequent__TOP__632__PROF__io_generic_fifo__l34(vlSelf);
        Vsoc_tb___024root___sequent__TOP__633__PROF__io_generic_fifo__l57(vlSelf);
        Vsoc_tb___024root___sequent__TOP__635__PROF__io_generic_fifo__l34(vlSelf);
        Vsoc_tb___024root___sequent__TOP__638__PROF__uart__l123(vlSelf);
        Vsoc_tb___024root___sequent__TOP__643__PROF__io_generic_fifo__l48(vlSelf);
        Vsoc_tb___024root___sequent__TOP__644__PROF__io_generic_fifo__l51(vlSelf);
        Vsoc_tb___024root___sequent__TOP__645__PROF__io_generic_fifo__l48(vlSelf);
        Vsoc_tb___024root___sequent__TOP__646__PROF__io_generic_fifo__l51(vlSelf);
        Vsoc_tb___024root___sequent__TOP__648__PROF__io_generic_fifo__l45(vlSelf);
        Vsoc_tb___024root___sequent__TOP__649__PROF__io_generic_fifo__l45(vlSelf);
        Vsoc_tb___024root___sequent__TOP__650__PROF__uart_tx__l129(vlSelf);
        Vsoc_tb___024root___sequent__TOP__651__PROF__uart_rx__l135(vlSelf);
        Vsoc_tb___024root___sequent__TOP__652__PROF__io_generic_fifo__l55(vlSelf);
        Vsoc_tb___024root___sequent__TOP__653__PROF__io_generic_fifo__l55(vlSelf);
        Vsoc_tb___024root___sequent__TOP__654__PROF__io_generic_fifo__l55(vlSelf);
        Vsoc_tb___024root___sequent__TOP__655__PROF__uart_rx__l104(vlSelf);
        Vsoc_tb___024root___sequent__TOP__656__PROF__uart_tx__l108(vlSelf);
        Vsoc_tb___024root___sequent__TOP__657__PROF__uart_tx__l108(vlSelf);
        Vsoc_tb___024root___sequent__TOP__658__PROF__io_generic_fifo__l32(vlSelf);
        Vsoc_tb___024root___sequent__TOP__659__PROF__io_generic_fifo__l55(vlSelf);
        Vsoc_tb___024root___sequent__TOP__660__PROF__uart_rx__l104(vlSelf);
        Vsoc_tb___024root___sequent__TOP__661__PROF__io_generic_fifo__l32(vlSelf);
        Vsoc_tb___024root___sequent__TOP__662__PROF__uart_rx__l123(vlSelf);
        Vsoc_tb___024root___sequent__TOP__663__PROF__uart__l51(vlSelf);
        Vsoc_tb___024root___sequent__TOP__664__PROF__uart__l121(vlSelf);
        Vsoc_tb___024root___sequent__TOP__665__PROF__uart__l62(vlSelf);
        Vsoc_tb___024root___sequent__TOP__666__PROF__uart_rx__l104(vlSelf);
        Vsoc_tb___024root___sequent__TOP__667__PROF__uart_tx__l108(vlSelf);
        Vsoc_tb___024root___sequent__TOP__668__PROF__uart_tx__l108(vlSelf);
        Vsoc_tb___024root___sequent__TOP__669__PROF__io_generic_fifo__l45(vlSelf);
        Vsoc_tb___024root___sequent__TOP__670__PROF__io_generic_fifo__l45(vlSelf);
        Vsoc_tb___024root___sequent__TOP__671__PROF__uart__l62(vlSelf);
        Vsoc_tb___024root___sequent__TOP__675__PROF__io_generic_fifo__l57(vlSelf);
        Vsoc_tb___024root___sequent__TOP__685__PROF__io_generic_fifo__l58(vlSelf);
        Vsoc_tb___024root___sequent__TOP__687__PROF__io_generic_fifo__l58(vlSelf);
        Vsoc_tb___024root___sequent__TOP__688__PROF__uart__l123(vlSelf);
        Vsoc_tb___024root___sequent__TOP__689__PROF__io_generic_fifo__l48(vlSelf);
        Vsoc_tb___024root___sequent__TOP__690__PROF__io_generic_fifo__l34(vlSelf);
        Vsoc_tb___024root___sequent__TOP__692__PROF__io_generic_fifo__l57(vlSelf);
        Vsoc_tb___024root___sequent__TOP__693__PROF__io_generic_fifo__l48(vlSelf);
        Vsoc_tb___024root___sequent__TOP__694__PROF__io_generic_fifo__l34(vlSelf);
        Vsoc_tb___024root___sequent__TOP__701__PROF__uart_rx__l45(vlSelf);
        Vsoc_tb___024root___sequent__TOP__702__PROF__uart_rx__l132(vlSelf);
        Vsoc_tb___024root___sequent__TOP__703__PROF__uart_rx__l45(vlSelf);
        Vsoc_tb___024root___sequent__TOP__704__PROF__uart_rx__l135(vlSelf);
        Vsoc_tb___024root___sequent__TOP__705__PROF__uart_tx__l129(vlSelf);
        Vsoc_tb___024root___sequent__TOP__706__PROF__uart_tx__l41(vlSelf);
        Vsoc_tb___024root___sequent__TOP__707__PROF__uart_tx__l41(vlSelf);
        Vsoc_tb___024root___sequent__TOP__708__PROF__uart_rx__l104(vlSelf);
        Vsoc_tb___024root___sequent__TOP__709__PROF__io_generic_fifo__l76(vlSelf);
        Vsoc_tb___024root___sequent__TOP__710__PROF__io_generic_fifo__l29(vlSelf);
        Vsoc_tb___024root___sequent__TOP__711__PROF__io_generic_fifo__l77(vlSelf);
        Vsoc_tb___024root___sequent__TOP__712__PROF__uart__l62(vlSelf);
        Vsoc_tb___024root___sequent__TOP__713__PROF__io_generic_fifo__l29(vlSelf);
        Vsoc_tb___024root___sequent__TOP__714__PROF__io_generic_fifo__l77(vlSelf);
        Vsoc_tb___024root___sequent__TOP__715__PROF__uart__l62(vlSelf);
        Vsoc_tb___024root___sequent__TOP__716__PROF__uart__l62(vlSelf);
        Vsoc_tb___024root___sequent__TOP__717__PROF__uart__l62(vlSelf);
        Vsoc_tb___024root___sequent__TOP__718__PROF__uart__l62(vlSelf);
        Vsoc_tb___024root___sequent__TOP__719__PROF__uart__l62(vlSelf);
        Vsoc_tb___024root___sequent__TOP__720__PROF__uart_rx__l45(vlSelf);
        Vsoc_tb___024root___sequent__TOP__721__PROF__uart_rx__l45(vlSelf);
        Vsoc_tb___024root___sequent__TOP__722__PROF__uart_rx__l137(vlSelf);
        Vsoc_tb___024root___sequent__TOP__724__PROF__uart_tx__l41(vlSelf);
        Vsoc_tb___024root___sequent__TOP__725__PROF__uart_tx__l131(vlSelf);
        Vsoc_tb___024root___sequent__TOP__728__PROF__uart_tx__l41(vlSelf);
        Vsoc_tb___024root___sequent__TOP__735__PROF__uart_rx__l134(vlSelf);
        Vsoc_tb___024root___sequent__TOP__736__PROF__uart_rx__l45(vlSelf);
        Vsoc_tb___024root___sequent__TOP__737__PROF__uart_rx__l45(vlSelf);
        Vsoc_tb___024root___sequent__TOP__738__PROF__uart_rx__l45(vlSelf);
        Vsoc_tb___024root___sequent__TOP__739__PROF__uart_tx__l127(vlSelf);
        Vsoc_tb___024root___sequent__TOP__740__PROF__uart_tx__l41(vlSelf);
        Vsoc_tb___024root___sequent__TOP__741__PROF__uart_tx__l41(vlSelf);
        Vsoc_tb___024root___sequent__TOP__742__PROF__uart_rx__l45(vlSelf);
        Vsoc_tb___024root___sequent__TOP__743__PROF__uart_tx__l41(vlSelf);
        Vsoc_tb___024root___sequent__TOP__744__PROF__uart_tx__l41(vlSelf);
    }
    Vsoc_tb___024root___combo__TOP__5__PROF__w2m_bridge__l79(vlSelf);
    Vsoc_tb___024root___combo__TOP__6__PROF__uart__l44(vlSelf);
    Vsoc_tb___024root___combo__TOP__7__PROF__uart__l183(vlSelf);
    Vsoc_tb___024root___combo__TOP__8__PROF__w2m_bridge__l64(vlSelf);
    Vsoc_tb___024root___combo__TOP__9__PROF__w2m_bridge__l85(vlSelf);
    Vsoc_tb___024root___combo__TOP__10__PROF__w2m_bridge__l71(vlSelf);
    if (((IData)(vlSelf->testio_clk) & (~ (IData)(vlSelf->__Vclklast__TOP__testio_clk)))) {
        vlSelf->__Vm_traceActivity[9U] = 1U;
        Vsoc_tb___024root___sequent__TOP__749__PROF__std_dffr__l15(vlSelf);
        Vsoc_tb___024root___sequent__TOP__750__PROF__testio_ma__l55(vlSelf);
        Vsoc_tb___024root___sequent__TOP__751__PROF__testio_ma__l88(vlSelf);
        Vsoc_tb___024root___sequent__TOP__752__PROF__std_dffr__l15(vlSelf);
        Vsoc_tb___024root___sequent__TOP__757__PROF__testio_ma__l120(vlSelf);
        Vsoc_tb___024root___sequent__TOP__758__PROF__testio_ma__l104(vlSelf);
        Vsoc_tb___024root___sequent__TOP__759__PROF__testio_ma__l104(vlSelf);
        Vsoc_tb___024root___sequent__TOP__760__PROF__testio_ma__l101(vlSelf);
        Vsoc_tb___024root___sequent__TOP__761__PROF__testio_ma__l101(vlSelf);
        Vsoc_tb___024root___sequent__TOP__762__PROF__testio_ma__l101(vlSelf);
        Vsoc_tb___024root___sequent__TOP__763__PROF__testio_ma__l101(vlSelf);
        Vsoc_tb___024root___sequent__TOP__764__PROF__testio_ma__l101(vlSelf);
        Vsoc_tb___024root___sequent__TOP__765__PROF__testio_ma__l101(vlSelf);
        Vsoc_tb___024root___sequent__TOP__766__PROF__testio_ma__l101(vlSelf);
        Vsoc_tb___024root___sequent__TOP__767__PROF__testio_ma__l101(vlSelf);
        Vsoc_tb___024root___sequent__TOP__768__PROF__testio_ma__l101(vlSelf);
        Vsoc_tb___024root___sequent__TOP__769__PROF__testio_ma__l101(vlSelf);
        Vsoc_tb___024root___sequent__TOP__770__PROF__testio_ma__l101(vlSelf);
        Vsoc_tb___024root___sequent__TOP__771__PROF__testio_ma__l107(vlSelf);
        Vsoc_tb___024root___sequent__TOP__772__PROF__testio_ma__l107(vlSelf);
        Vsoc_tb___024root___sequent__TOP__773__PROF__testio_ma__l107(vlSelf);
        Vsoc_tb___024root___sequent__TOP__774__PROF__testio_ma__l107(vlSelf);
        Vsoc_tb___024root___sequent__TOP__775__PROF__testio_ma__l107(vlSelf);
        Vsoc_tb___024root___sequent__TOP__776__PROF__testio_ma__l107(vlSelf);
        Vsoc_tb___024root___sequent__TOP__777__PROF__testio_ma__l107(vlSelf);
        Vsoc_tb___024root___sequent__TOP__778__PROF__testio_ma__l107(vlSelf);
        Vsoc_tb___024root___sequent__TOP__779__PROF__testio_ma__l107(vlSelf);
        Vsoc_tb___024root___sequent__TOP__780__PROF__testio_ma__l107(vlSelf);
        Vsoc_tb___024root___sequent__TOP__781__PROF__testio_ma__l107(vlSelf);
        Vsoc_tb___024root___sequent__TOP__782__PROF__testio_ma__l231(vlSelf);
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->__Vclklast__TOP__rst)))) {
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
        Vsoc_tb___024root___sequent__TOP__787__PROF__async_fifo__l89(vlSelf);
        Vsoc_tb___024root___sequent__TOP__788__PROF__async_fifo__l164(vlSelf);
        Vsoc_tb___024root___sequent__TOP__789__PROF__crg__l79(vlSelf);
        Vsoc_tb___024root___sequent__TOP__803__PROF__async_fifo__l89(vlSelf);
        Vsoc_tb___024root___sequent__TOP__804__PROF__async_fifo__l164(vlSelf);
        Vsoc_tb___024root___sequent__TOP__805__PROF__crg__l76(vlSelf);
        Vsoc_tb___024root___sequent__TOP__806__PROF__crg__l79(vlSelf);
        Vsoc_tb___024root___sequent__TOP__810__PROF__async_fifo__l46(vlSelf);
        Vsoc_tb___024root___sequent__TOP__811__PROF__async_fifo__l55(vlSelf);
        Vsoc_tb___024root___sequent__TOP__812__PROF__async_fifo__l159(vlSelf);
        Vsoc_tb___024root___sequent__TOP__813__PROF__async_fifo__l161(vlSelf);
        Vsoc_tb___024root___sequent__TOP__814__PROF__async_wb__l89(vlSelf);
    }
    if (((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
          | ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->__Vclklast__TOP__rst))) 
         | ((IData)(vlSelf->testio_clk) & (~ (IData)(vlSelf->__Vclklast__TOP__testio_clk))))) {
        Vsoc_tb___024root___multiclk__TOP__0__PROF__async_fifo__l181(vlSelf);
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
        Vsoc_tb___024root___multiclk__TOP__1__PROF__async_fifo__l181(vlSelf);
        Vsoc_tb___024root___multiclk__TOP__2__PROF__async_wb__l87(vlSelf);
        Vsoc_tb___024root___multiclk__TOP__3__PROF__async_wb__l87(vlSelf);
        Vsoc_tb___024root___multiclk__TOP__4__PROF__async_wb__l87(vlSelf);
        Vsoc_tb___024root___multiclk__TOP__5__PROF__async_wb__l87(vlSelf);
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vsoc_tb___024root___sequent__TOP__815__PROF__uart_tx__l41(vlSelf);
    }
    if ((((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->__Vclklast__TOP__rst)) 
         | ((IData)(vlSelf->testio_clk) & (~ (IData)(vlSelf->__Vclklast__TOP__testio_clk))))) {
        Vsoc_tb___024root___sequent__TOP__816__PROF__testio_ma__l222(vlSelf);
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
        Vsoc_tb___024root___sequent__TOP__817__PROF__testio_ma__l80(vlSelf);
        Vsoc_tb___024root___sequent__TOP__818__PROF__m2w_bridge__l83(vlSelf);
        Vsoc_tb___024root___sequent__TOP__819__PROF__testio_ma__l61(vlSelf);
        Vsoc_tb___024root___sequent__TOP__820__PROF__testio_ma__l195(vlSelf);
    }
    if ((((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->__Vclklast__TOP__rst)) 
         | ((~ (IData)(vlSelf->testio_clk)) & (IData)(vlSelf->__Vclklast__TOP__testio_clk)))) {
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
        Vsoc_tb___024root___sequent__TOP__822__PROF__testio__l240(vlSelf);
        Vsoc_tb___024root___sequent__TOP__823__PROF__testio_trx__l169(vlSelf);
        Vsoc_tb___024root___sequent__TOP__825__PROF__testio_trx__l161(vlSelf);
    }
    Vsoc_tb___024root___combo__TOP__11__PROF__crg__l35(vlSelf);
    Vsoc_tb___024root___combo__TOP__12__PROF__crg__l35(vlSelf);
    Vsoc_tb___024root___combo__TOP__13__PROF__wbinterconnect__l96(vlSelf);
    Vsoc_tb___024root___combo__TOP__14__PROF__wbinterconnect__l96(vlSelf);
    Vsoc_tb___024root___combo__TOP__15__PROF__wbinterconnect__l96(vlSelf);
    Vsoc_tb___024root___combo__TOP__16__PROF__wbinterconnect__l96(vlSelf);
    Vsoc_tb___024root___combo__TOP__17__PROF__wbinterconnect__l96(vlSelf);
    Vsoc_tb___024root___combo__TOP__18__PROF__wbinterconnect__l96(vlSelf);
    Vsoc_tb___024root___combo__TOP__19__PROF__crg__l46(vlSelf);
    Vsoc_tb___024root___combo__TOP__21__PROF__wbinterconnect__l236(vlSelf);
    Vsoc_tb___024root___combo__TOP__23__PROF__wbinterconnect__l237(vlSelf);
    Vsoc_tb___024root___combo__TOP__25__PROF__wbinterconnect__l240(vlSelf);
    Vsoc_tb___024root___combo__TOP__27__PROF__wbinterconnect__l239(vlSelf);
    Vsoc_tb___024root___combo__TOP__29__PROF__wbinterconnect__l238(vlSelf);
    Vsoc_tb___024root___combo__TOP__31__PROF__wbinterconnect__l241(vlSelf);
    Vsoc_tb___024root___combo__TOP__32__PROF__uart__l44(vlSelf);
    Vsoc_tb___024root___combo__TOP__33__PROF__clint__l62(vlSelf);
    Vsoc_tb___024root___combo__TOP__34__PROF__clint__l62(vlSelf);
    Vsoc_tb___024root___combo__TOP__35__PROF__clint__l62(vlSelf);
    Vsoc_tb___024root___combo__TOP__36__PROF__clint__l62(vlSelf);
    Vsoc_tb___024root___combo__TOP__37__PROF__clint__l62(vlSelf);
    Vsoc_tb___024root___combo__TOP__38__PROF__clint__l62(vlSelf);
    Vsoc_tb___024root___combo__TOP__39__PROF__clint__l62(vlSelf);
    Vsoc_tb___024root___combo__TOP__40__PROF__clint__l62(vlSelf);
    Vsoc_tb___024root___combo__TOP__41__PROF__wbinterconnect__l164(vlSelf);
    Vsoc_tb___024root___combo__TOP__42__PROF__wbinterconnect__l164(vlSelf);
    Vsoc_tb___024root___combo__TOP__43__PROF__wbinterconnect__l96(vlSelf);
    Vsoc_tb___024root___combo__TOP__44__PROF__wbinterconnect__l96(vlSelf);
    Vsoc_tb___024root___combo__TOP__45__PROF__wbinterconnect__l96(vlSelf);
    Vsoc_tb___024root___combo__TOP__46__PROF__wbinterconnect__l243(vlSelf);
    Vsoc_tb___024root___combo__TOP__47__PROF__wbinterconnect__l244(vlSelf);
    Vsoc_tb___024root___combo__TOP__48__PROF__async_wb__l91(vlSelf);
    if ((((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->__Vclklast__TOP__rst)) 
         | ((IData)(vlSelf->testio_clk) & (~ (IData)(vlSelf->__Vclklast__TOP__testio_clk))))) {
        Vsoc_tb___024root___sequent__TOP__826__PROF__testio__l126(vlSelf);
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
        Vsoc_tb___024root___sequent__TOP__827__PROF__testio_trx__l143(vlSelf);
        Vsoc_tb___024root___sequent__TOP__828__PROF__testio_trx__l100(vlSelf);
    }
    Vsoc_tb___024root___combo__TOP__49__PROF__testio__l139(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__testio_clk = vlSelf->testio_clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__soc_tb__DOT__soc_top_u__DOT__domain1_clk 
        = vlSelf->soc_tb__DOT__soc_top_u__DOT__domain1_clk;
    vlSelf->__Vclklast__TOP__soc_tb__DOT__soc_top_u__DOT__domain2_clk 
        = vlSelf->soc_tb__DOT__soc_top_u__DOT__domain2_clk;
}

QData Vsoc_tb___024root___change_request_1(Vsoc_tb___024root* vlSelf);

VL_INLINE_OPT QData Vsoc_tb___024root___change_request(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___change_request\n"); );
    // Body
    return (Vsoc_tb___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vsoc_tb___024root___change_request_1(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain1_clk_en ^ vlSelf->__Vchglast__TOP__soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain1_clk_en)
         | (vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain2_clk_en ^ vlSelf->__Vchglast__TOP__soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain2_clk_en));
    VL_DEBUG_IF( if(__req && ((vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain1_clk_en ^ vlSelf->__Vchglast__TOP__soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain1_clk_en))) VL_DBG_MSGF("        CHANGE: tb_perips/perips/on_chip/crg.v:33: soc_tb.soc_top_u.crg_u.domain1_clk_en\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain2_clk_en ^ vlSelf->__Vchglast__TOP__soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain2_clk_en))) VL_DBG_MSGF("        CHANGE: tb_perips/perips/on_chip/crg.v:33: soc_tb.soc_top_u.crg_u.domain2_clk_en\n"); );
    // Final
    vlSelf->__Vchglast__TOP__soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain1_clk_en 
        = vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain1_clk_en;
    vlSelf->__Vchglast__TOP__soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain2_clk_en 
        = vlSelf->soc_tb__DOT__soc_top_u__DOT__crg_u__DOT__domain2_clk_en;
    return __req;
}

#ifdef VL_DEBUG
void Vsoc_tb___024root___eval_debug_assertions(Vsoc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_tb___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->m1_cyc & 0xfeU))) {
        Verilated::overWidthError("m1_cyc");}
    if (VL_UNLIKELY((vlSelf->m1_stb & 0xfeU))) {
        Verilated::overWidthError("m1_stb");}
    if (VL_UNLIKELY((vlSelf->m1_we & 0xfeU))) {
        Verilated::overWidthError("m1_we");}
    if (VL_UNLIKELY((vlSelf->m1_sel & 0xf0U))) {
        Verilated::overWidthError("m1_sel");}
    if (VL_UNLIKELY((vlSelf->m2_cyc & 0xfeU))) {
        Verilated::overWidthError("m2_cyc");}
    if (VL_UNLIKELY((vlSelf->m2_stb & 0xfeU))) {
        Verilated::overWidthError("m2_stb");}
    if (VL_UNLIKELY((vlSelf->m2_we & 0xfeU))) {
        Verilated::overWidthError("m2_we");}
    if (VL_UNLIKELY((vlSelf->m2_sel & 0xf0U))) {
        Verilated::overWidthError("m2_sel");}
    if (VL_UNLIKELY((vlSelf->m3_cyc & 0xfeU))) {
        Verilated::overWidthError("m3_cyc");}
    if (VL_UNLIKELY((vlSelf->m3_stb & 0xfeU))) {
        Verilated::overWidthError("m3_stb");}
    if (VL_UNLIKELY((vlSelf->m3_we & 0xfeU))) {
        Verilated::overWidthError("m3_we");}
    if (VL_UNLIKELY((vlSelf->m3_sel & 0xf0U))) {
        Verilated::overWidthError("m3_sel");}
    if (VL_UNLIKELY((vlSelf->m4_cyc & 0xfeU))) {
        Verilated::overWidthError("m4_cyc");}
    if (VL_UNLIKELY((vlSelf->m4_stb & 0xfeU))) {
        Verilated::overWidthError("m4_stb");}
    if (VL_UNLIKELY((vlSelf->m4_we & 0xfeU))) {
        Verilated::overWidthError("m4_we");}
    if (VL_UNLIKELY((vlSelf->m4_sel & 0xf0U))) {
        Verilated::overWidthError("m4_sel");}
    if (VL_UNLIKELY((vlSelf->testio_clk & 0xfeU))) {
        Verilated::overWidthError("testio_clk");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
