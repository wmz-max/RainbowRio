// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vsoc_tb__Syms.h"
#include "Vsoc_tb.h"
#include "Vsoc_tb___024root.h"

// FUNCTIONS
Vsoc_tb__Syms::~Vsoc_tb__Syms()
{
}

Vsoc_tb__Syms::Vsoc_tb__Syms(VerilatedContext* contextp, const char* namep,Vsoc_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
