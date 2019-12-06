// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _Vcount__repeat____Syms_H_
#define _Vcount__repeat____Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vcount__repeat__.h"

// SYMS CLASS
class Vcount__repeat____Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vcount__repeat__*              TOPp;
    
    // CREATORS
    Vcount__repeat____Syms(Vcount__repeat__* topp, const char* namep);
    ~Vcount__repeat____Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif  // guard
