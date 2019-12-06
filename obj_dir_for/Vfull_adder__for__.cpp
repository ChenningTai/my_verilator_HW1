// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfull_adder__for__.h for the primary calling header

#include "Vfull_adder__for__.h"
#include "Vfull_adder__for____Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vfull_adder__for__) {
    Vfull_adder__for____Syms* __restrict vlSymsp = __VlSymsp = new Vfull_adder__for____Syms(this, name());
    Vfull_adder__for__* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vfull_adder__for__::__Vconfigure(Vfull_adder__for____Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vfull_adder__for__::~Vfull_adder__for__() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vfull_adder__for__::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vfull_adder__for__::eval\n"); );
    Vfull_adder__for____Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vfull_adder__for__* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
	VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
	_eval(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) {
	    // About to fail, so enable debug to see what's not settling.
	    // Note you must run make with OPT=-DVL_DEBUG for debug prints.
	    int __Vsaved_debug = Verilated::debug();
	    Verilated::debug(1);
	    __Vchange = _change_request(vlSymsp);
	    Verilated::debug(__Vsaved_debug);
	    VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
	} else {
	    __Vchange = _change_request(vlSymsp);
	}
    } while (VL_UNLIKELY(__Vchange));
}

void Vfull_adder__for__::_eval_initial_loop(Vfull_adder__for____Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) {
	    // About to fail, so enable debug to see what's not settling.
	    // Note you must run make with OPT=-DVL_DEBUG for debug prints.
	    int __Vsaved_debug = Verilated::debug();
	    Verilated::debug(1);
	    __Vchange = _change_request(vlSymsp);
	    Verilated::debug(__Vsaved_debug);
	    VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
	} else {
	    __Vchange = _change_request(vlSymsp);
	}
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

VL_INLINE_OPT void Vfull_adder__for__::_combo__TOP__1(Vfull_adder__for____Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_adder__for__::_combo__TOP__1\n"); );
    Vfull_adder__for__* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at full_adder__for__.v:15
    vlTOPp->FULL_ADDER__DOT__CARRY = vlTOPp->C0;
    vlTOPp->S = ((0xeU & (IData)(vlTOPp->S)) | (1U 
						& (((IData)(vlTOPp->X) 
						    ^ (IData)(vlTOPp->Y)) 
						   ^ (IData)(vlTOPp->FULL_ADDER__DOT__CARRY))));
    vlTOPp->FULL_ADDER__DOT__CARRY = (1U & (((IData)(vlTOPp->X) 
					     & ((IData)(vlTOPp->Y) 
						| (IData)(vlTOPp->FULL_ADDER__DOT__CARRY))) 
					    | ((IData)(vlTOPp->Y) 
					       & (IData)(vlTOPp->FULL_ADDER__DOT__CARRY))));
    vlTOPp->S = ((0xdU & (IData)(vlTOPp->S)) | (2U 
						& ((0xfffffffeU 
						    & ((IData)(vlTOPp->X) 
						       ^ (IData)(vlTOPp->Y))) 
						   ^ 
						   ((IData)(vlTOPp->FULL_ADDER__DOT__CARRY) 
						    << 1U))));
    vlTOPp->FULL_ADDER__DOT__CARRY = (1U & (((((IData)(vlTOPp->X) 
					       & (IData)(vlTOPp->Y)) 
					      >> 1U) 
					     | (((IData)(vlTOPp->X) 
						 >> 1U) 
						& (IData)(vlTOPp->FULL_ADDER__DOT__CARRY))) 
					    | (((IData)(vlTOPp->Y) 
						>> 1U) 
					       & (IData)(vlTOPp->FULL_ADDER__DOT__CARRY))));
    vlTOPp->S = ((0xbU & (IData)(vlTOPp->S)) | (4U 
						& ((0xfffffffcU 
						    & ((IData)(vlTOPp->X) 
						       ^ (IData)(vlTOPp->Y))) 
						   ^ 
						   ((IData)(vlTOPp->FULL_ADDER__DOT__CARRY) 
						    << 2U))));
    vlTOPp->FULL_ADDER__DOT__CARRY = (1U & (((((IData)(vlTOPp->X) 
					       & (IData)(vlTOPp->Y)) 
					      >> 2U) 
					     | (((IData)(vlTOPp->X) 
						 >> 2U) 
						& (IData)(vlTOPp->FULL_ADDER__DOT__CARRY))) 
					    | (((IData)(vlTOPp->Y) 
						>> 2U) 
					       & (IData)(vlTOPp->FULL_ADDER__DOT__CARRY))));
    vlTOPp->S = ((7U & (IData)(vlTOPp->S)) | (8U & 
					      ((0xfffffff8U 
						& ((IData)(vlTOPp->X) 
						   ^ (IData)(vlTOPp->Y))) 
					       ^ ((IData)(vlTOPp->FULL_ADDER__DOT__CARRY) 
						  << 3U))));
    vlTOPp->FULL_ADDER__DOT__CARRY = (1U & (((((IData)(vlTOPp->X) 
					       & (IData)(vlTOPp->Y)) 
					      >> 3U) 
					     | (((IData)(vlTOPp->X) 
						 >> 3U) 
						& (IData)(vlTOPp->FULL_ADDER__DOT__CARRY))) 
					    | (((IData)(vlTOPp->Y) 
						>> 3U) 
					       & (IData)(vlTOPp->FULL_ADDER__DOT__CARRY))));
    vlTOPp->C4 = vlTOPp->FULL_ADDER__DOT__CARRY;
}

void Vfull_adder__for__::_eval(Vfull_adder__for____Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_adder__for__::_eval\n"); );
    Vfull_adder__for__* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void Vfull_adder__for__::_eval_initial(Vfull_adder__for____Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_adder__for__::_eval_initial\n"); );
    Vfull_adder__for__* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vfull_adder__for__::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_adder__for__::final\n"); );
    // Variables
    Vfull_adder__for____Syms* __restrict vlSymsp = this->__VlSymsp;
    Vfull_adder__for__* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vfull_adder__for__::_eval_settle(Vfull_adder__for____Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_adder__for__::_eval_settle\n"); );
    Vfull_adder__for__* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData Vfull_adder__for__::_change_request(Vfull_adder__for____Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_adder__for__::_change_request\n"); );
    Vfull_adder__for__* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vfull_adder__for__::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_adder__for__::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((C0 & 0xfeU))) {
	Verilated::overWidthError("C0");}
    if (VL_UNLIKELY((X & 0xf0U))) {
	Verilated::overWidthError("X");}
    if (VL_UNLIKELY((Y & 0xf0U))) {
	Verilated::overWidthError("Y");}
}
#endif // VL_DEBUG

void Vfull_adder__for__::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_adder__for__::_ctor_var_reset\n"); );
    // Body
    C0 = VL_RAND_RESET_I(1);
    X = VL_RAND_RESET_I(4);
    Y = VL_RAND_RESET_I(4);
    C4 = VL_RAND_RESET_I(1);
    S = VL_RAND_RESET_I(4);
    FULL_ADDER__DOT__CARRY = VL_RAND_RESET_I(1);
}
