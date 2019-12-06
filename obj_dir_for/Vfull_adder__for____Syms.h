// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _Vfull_adder__for____Syms_H_
#define _Vfull_adder__for____Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vfull_adder__for__.h"

// SYMS CLASS
class Vfull_adder__for____Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vfull_adder__for__*            TOPp;
    
    // CREATORS
    Vfull_adder__for____Syms(Vfull_adder__for__* topp, const char* namep);
    ~Vfull_adder__for____Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif  // guard
