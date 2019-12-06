// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Veven_parity_generator__while__.h for the primary calling header

#include "Veven_parity_generator__while__.h"
#include "Veven_parity_generator__while____Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Veven_parity_generator__while__) {
    Veven_parity_generator__while____Syms* __restrict vlSymsp = __VlSymsp = new Veven_parity_generator__while____Syms(this, name());
    Veven_parity_generator__while__* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Veven_parity_generator__while__::__Vconfigure(Veven_parity_generator__while____Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Veven_parity_generator__while__::~Veven_parity_generator__while__() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Veven_parity_generator__while__::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Veven_parity_generator__while__::eval\n"); );
    Veven_parity_generator__while____Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Veven_parity_generator__while__* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void Veven_parity_generator__while__::_eval_initial_loop(Veven_parity_generator__while____Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void Veven_parity_generator__while__::_combo__TOP__1(Veven_parity_generator__while____Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Veven_parity_generator__while__::_combo__TOP__1\n"); );
    Veven_parity_generator__while__* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at even_parity_generator__while__.v:8
    vlTOPp->PE = 0U;
    vlTOPp->PE = (1U & ((IData)(vlTOPp->PE) ^ (IData)(vlTOPp->I)));
    vlTOPp->PE = (1U & ((IData)(vlTOPp->PE) ^ ((IData)(vlTOPp->I) 
					       >> 1U)));
    vlTOPp->PE = (1U & ((IData)(vlTOPp->PE) ^ ((IData)(vlTOPp->I) 
					       >> 2U)));
    vlTOPp->PE = (1U & ((IData)(vlTOPp->PE) ^ ((IData)(vlTOPp->I) 
					       >> 3U)));
    vlTOPp->PE = (1U & ((IData)(vlTOPp->PE) ^ ((IData)(vlTOPp->I) 
					       >> 4U)));
    vlTOPp->PE = (1U & ((IData)(vlTOPp->PE) ^ ((IData)(vlTOPp->I) 
					       >> 5U)));
    vlTOPp->PE = (1U & ((IData)(vlTOPp->PE) ^ ((IData)(vlTOPp->I) 
					       >> 6U)));
    vlTOPp->PE = (1U & ((IData)(vlTOPp->PE) ^ ((IData)(vlTOPp->I) 
					       >> 7U)));
}

void Veven_parity_generator__while__::_eval(Veven_parity_generator__while____Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Veven_parity_generator__while__::_eval\n"); );
    Veven_parity_generator__while__* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void Veven_parity_generator__while__::_eval_initial(Veven_parity_generator__while____Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Veven_parity_generator__while__::_eval_initial\n"); );
    Veven_parity_generator__while__* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Veven_parity_generator__while__::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Veven_parity_generator__while__::final\n"); );
    // Variables
    Veven_parity_generator__while____Syms* __restrict vlSymsp = this->__VlSymsp;
    Veven_parity_generator__while__* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Veven_parity_generator__while__::_eval_settle(Veven_parity_generator__while____Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Veven_parity_generator__while__::_eval_settle\n"); );
    Veven_parity_generator__while__* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData Veven_parity_generator__while__::_change_request(Veven_parity_generator__while____Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Veven_parity_generator__while__::_change_request\n"); );
    Veven_parity_generator__while__* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Veven_parity_generator__while__::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Veven_parity_generator__while__::_eval_debug_assertions\n"); );
}
#endif // VL_DEBUG

void Veven_parity_generator__while__::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Veven_parity_generator__while__::_ctor_var_reset\n"); );
    // Body
    I = VL_RAND_RESET_I(8);
    PE = VL_RAND_RESET_I(1);
}
