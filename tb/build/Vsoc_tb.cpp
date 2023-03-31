// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsoc_tb.h"
#include "Vsoc_tb__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vsoc_tb::Vsoc_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vsoc_tb__Syms(_vcontextp__, _vcname__, this)}
    , testio_clk{vlSymsp->TOP.testio_clk}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , m1_cyc{vlSymsp->TOP.m1_cyc}
    , m1_stb{vlSymsp->TOP.m1_stb}
    , m1_we{vlSymsp->TOP.m1_we}
    , m1_sel{vlSymsp->TOP.m1_sel}
    , m1_ack{vlSymsp->TOP.m1_ack}
    , m2_cyc{vlSymsp->TOP.m2_cyc}
    , m2_stb{vlSymsp->TOP.m2_stb}
    , m2_we{vlSymsp->TOP.m2_we}
    , m2_sel{vlSymsp->TOP.m2_sel}
    , m2_ack{vlSymsp->TOP.m2_ack}
    , m3_cyc{vlSymsp->TOP.m3_cyc}
    , m3_stb{vlSymsp->TOP.m3_stb}
    , m3_we{vlSymsp->TOP.m3_we}
    , m3_sel{vlSymsp->TOP.m3_sel}
    , m3_ack{vlSymsp->TOP.m3_ack}
    , m4_cyc{vlSymsp->TOP.m4_cyc}
    , m4_stb{vlSymsp->TOP.m4_stb}
    , m4_we{vlSymsp->TOP.m4_we}
    , m4_sel{vlSymsp->TOP.m4_sel}
    , m4_ack{vlSymsp->TOP.m4_ack}
    , clk4{vlSymsp->TOP.clk4}
    , rst4{vlSymsp->TOP.rst4}
    , m1_addr{vlSymsp->TOP.m1_addr}
    , m1_wdata{vlSymsp->TOP.m1_wdata}
    , m1_rdata{vlSymsp->TOP.m1_rdata}
    , m2_addr{vlSymsp->TOP.m2_addr}
    , m2_wdata{vlSymsp->TOP.m2_wdata}
    , m2_rdata{vlSymsp->TOP.m2_rdata}
    , m3_addr{vlSymsp->TOP.m3_addr}
    , m3_wdata{vlSymsp->TOP.m3_wdata}
    , m3_rdata{vlSymsp->TOP.m3_rdata}
    , m4_addr{vlSymsp->TOP.m4_addr}
    , m4_wdata{vlSymsp->TOP.m4_wdata}
    , m4_rdata{vlSymsp->TOP.m4_rdata}
    , rootp{&(vlSymsp->TOP)}
{
}

Vsoc_tb::Vsoc_tb(const char* _vcname__)
    : Vsoc_tb(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vsoc_tb::~Vsoc_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vsoc_tb___024root___eval_initial(Vsoc_tb___024root* vlSelf);
void Vsoc_tb___024root___eval_settle(Vsoc_tb___024root* vlSelf);
void Vsoc_tb___024root___eval(Vsoc_tb___024root* vlSelf);
QData Vsoc_tb___024root___change_request(Vsoc_tb___024root* vlSelf);
#ifdef VL_DEBUG
void Vsoc_tb___024root___eval_debug_assertions(Vsoc_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vsoc_tb___024root___final(Vsoc_tb___024root* vlSelf);

static void _eval_initial_loop(Vsoc_tb__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vsoc_tb___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vsoc_tb___024root___eval_settle(&(vlSymsp->TOP));
        Vsoc_tb___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vsoc_tb___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("tb_perips/soc_ut/soc_tb.v", 3, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vsoc_tb___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vsoc_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsoc_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsoc_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vsoc_tb___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vsoc_tb___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("tb_perips/soc_ut/soc_tb.v", 3, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vsoc_tb___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vsoc_tb::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vsoc_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vsoc_tb::final() {
    Vsoc_tb___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void Vsoc_tb___024root__trace_init_top(Vsoc_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vsoc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsoc_tb___024root*>(voidSelf);
    Vsoc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vsoc_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vsoc_tb___024root__trace_register(Vsoc_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vsoc_tb::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vsoc_tb___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
