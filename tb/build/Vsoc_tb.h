// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VSOC_TB_H_
#define VERILATED_VSOC_TB_H_  // guard

#include "verilated.h"

class Vsoc_tb__Syms;
class Vsoc_tb___024root;
class VerilatedVcdC;

// This class is the main interface to the Verilated model
class Vsoc_tb VL_NOT_FINAL {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vsoc_tb__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&testio_clk,0,0);
    VL_IN8(&clk,0,0);
    VL_IN8(&rst,0,0);
    VL_IN8(&m1_cyc,0,0);
    VL_IN8(&m1_stb,0,0);
    VL_IN8(&m1_we,0,0);
    VL_IN8(&m1_sel,3,0);
    VL_OUT8(&m1_ack,0,0);
    VL_IN8(&m2_cyc,0,0);
    VL_IN8(&m2_stb,0,0);
    VL_IN8(&m2_we,0,0);
    VL_IN8(&m2_sel,3,0);
    VL_OUT8(&m2_ack,0,0);
    VL_IN8(&m3_cyc,0,0);
    VL_IN8(&m3_stb,0,0);
    VL_IN8(&m3_we,0,0);
    VL_IN8(&m3_sel,3,0);
    VL_OUT8(&m3_ack,0,0);
    VL_IN8(&m4_cyc,0,0);
    VL_IN8(&m4_stb,0,0);
    VL_IN8(&m4_we,0,0);
    VL_IN8(&m4_sel,3,0);
    VL_OUT8(&m4_ack,0,0);
    VL_OUT8(&clk4,0,0);
    VL_OUT8(&rst4,0,0);
    VL_IN(&m1_addr,31,0);
    VL_IN(&m1_wdata,31,0);
    VL_OUT(&m1_rdata,31,0);
    VL_IN(&m2_addr,31,0);
    VL_IN(&m2_wdata,31,0);
    VL_OUT(&m2_rdata,31,0);
    VL_IN(&m3_addr,31,0);
    VL_IN(&m3_wdata,31,0);
    VL_OUT(&m3_rdata,31,0);
    VL_IN(&m4_addr,31,0);
    VL_IN(&m4_wdata,31,0);
    VL_OUT(&m4_rdata,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vsoc_tb___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vsoc_tb(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vsoc_tb(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vsoc_tb();
  private:
    VL_UNCOPYABLE(Vsoc_tb);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Return current simulation context for this model.
    /// Used to get to e.g. simulation time via contextp()->time()
    VerilatedContext* contextp() const;
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
