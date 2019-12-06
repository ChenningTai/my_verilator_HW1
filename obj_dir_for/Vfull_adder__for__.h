// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vfull_adder__for___H_
#define _Vfull_adder__for___H_

#include "verilated.h"

class Vfull_adder__for____Syms;

//----------

VL_MODULE(Vfull_adder__for__) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    // Begin mtask footprint  all: 
    VL_IN8(C0,0,0);
    VL_IN8(X,3,0);
    VL_IN8(Y,3,0);
    VL_OUT8(C4,0,0);
    VL_OUT8(S,3,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Begin mtask footprint  all: 
    VL_SIG8(FULL_ADDER__DOT__CARRY,0,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vfull_adder__for____Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vfull_adder__for__);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vfull_adder__for__(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vfull_adder__for__();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vfull_adder__for____Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vfull_adder__for____Syms* symsp, bool first);
  private:
    static QData _change_request(Vfull_adder__for____Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__1(Vfull_adder__for____Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vfull_adder__for____Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(Vfull_adder__for____Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vfull_adder__for____Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(128);

#endif // guard
