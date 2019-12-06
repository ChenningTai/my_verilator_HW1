// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VHW1_H_
#define _VHW1_H_

#include "verilated.h"

class VHW1__Syms;

//----------

VL_MODULE(VHW1) {
  public:
    //@@
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    // Begin mtask footprint  all: 
    VL_OUT8(MuxOut,0,0);
    VL_IN8(A,0,0);
    VL_IN8(B,0,0);
    VL_IN8(C,0,0);
    VL_IN8(D,0,0);
    VL_IN8(Sel,1,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code //通常不會被應用程序代碼影響
    // Begin mtask footprint  all: 
    VL_SIG8(__Vtableidx1,5,0);
    static VL_ST_SIG8(__Vtable1_MuxOut[64],0,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VHW1__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VHW1);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VHW1(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VHW1();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VHW1__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VHW1__Syms* symsp, bool first);
  private:
    static QData _change_request(VHW1__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__1(VHW1__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VHW1__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(VHW1__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VHW1__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(128);

#endif // guard
