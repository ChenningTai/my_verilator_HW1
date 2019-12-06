// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VHW1__Syms_H_
#define _VHW1__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VHW1.h"

// SYMS CLASS
class VHW1__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VHW1*                          TOPp;
    
    // CREATORS
    VHW1__Syms(VHW1* topp, const char* namep);
    ~VHW1__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif  // guard
