// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _Veven_parity_generator__while____Syms_H_
#define _Veven_parity_generator__while____Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Veven_parity_generator__while__.h"

// SYMS CLASS
class Veven_parity_generator__while____Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Veven_parity_generator__while__* TOPp;
    
    // CREATORS
    Veven_parity_generator__while____Syms(Veven_parity_generator__while__* topp, const char* namep);
    ~Veven_parity_generator__while____Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif  // guard
