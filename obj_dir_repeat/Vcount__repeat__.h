// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vcount__repeat___H_
#define _Vcount__repeat___H_

#include "verilated.h"

class Vcount__repeat____Syms;

//----------

VL_MODULE(Vcount__repeat__) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    // Begin mtask footprint  all: 
    VL_OUT8(NUMBER,4,0);
    VL_IN16(I,15,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vcount__repeat____Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vcount__repeat__);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vcount__repeat__(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vcount__repeat__();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vcount__repeat____Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vcount__repeat____Syms* symsp, bool first);
  private:
    static QData _change_request(Vcount__repeat____Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__1(Vcount__repeat____Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vcount__repeat____Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(Vcount__repeat____Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vcount__repeat____Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(128);

#endif // guard
