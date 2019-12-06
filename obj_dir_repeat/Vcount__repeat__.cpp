// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcount__repeat__.h for the primary calling header

#include "Vcount__repeat__.h"
#include "Vcount__repeat____Syms.h"

//@@整體與while檔案很像
//--------------------
// STATIC VARIABLES


//--------------------
//same
VL_CTOR_IMP(Vcount__repeat__) {
    Vcount__repeat____Syms* __restrict vlSymsp = __VlSymsp = new Vcount__repeat____Syms(this, name());
    Vcount__repeat__* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vcount__repeat__::__Vconfigure(Vcount__repeat____Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vcount__repeat__::~Vcount__repeat__() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vcount__repeat__::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcount__repeat__::eval\n"); );
    Vcount__repeat____Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vcount__repeat__* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void Vcount__repeat__::_eval_initial_loop(Vcount__repeat____Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void Vcount__repeat__::_combo__TOP__1(Vcount__repeat____Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcount__repeat__::_combo__TOP__1\n"); );
    Vcount__repeat__* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at count__repeat__.v:9
//@@以下不一樣，但推測功能一樣是存變數
//與while不一樣(使用^)，但類似

//以下似乎是邏輯部分*******************
    vlTOPp->NUMBER = 0U;
    if ((0x8000U & (IData)(vlTOPp->I))) { //全部為0  //
	vlTOPp->NUMBER = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->NUMBER)));
    }
    if ((1U & (IData)(vlTOPp->I))) { //意思應該是0001
	vlTOPp->NUMBER = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->NUMBER)));
    }
    if ((2U & (IData)(vlTOPp->I))) { //0010
	vlTOPp->NUMBER = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->NUMBER)));
    }
    if ((4U & (IData)(vlTOPp->I))) { //0100
	vlTOPp->NUMBER = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->NUMBER)));
    }
    if ((8U & (IData)(vlTOPp->I))) { //1000
	vlTOPp->NUMBER = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->NUMBER)));
    }
    if ((0x10U & (IData)(vlTOPp->I))) { //十六進位 16 = 10000
	vlTOPp->NUMBER = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->NUMBER)));
    }
    if ((0x20U & (IData)(vlTOPp->I))) {
	vlTOPp->NUMBER = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->NUMBER)));
    }
    if ((0x40U & (IData)(vlTOPp->I))) {
	vlTOPp->NUMBER = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->NUMBER)));
    }
    if ((0x80U & (IData)(vlTOPp->I))) {
	vlTOPp->NUMBER = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->NUMBER)));
    }
    if ((0x100U & (IData)(vlTOPp->I))) {
	vlTOPp->NUMBER = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->NUMBER)));
    }
    if ((0x200U & (IData)(vlTOPp->I))) {
	vlTOPp->NUMBER = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->NUMBER)));
    }
    if ((0x400U & (IData)(vlTOPp->I))) {
	vlTOPp->NUMBER = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->NUMBER)));
    }
    if ((0x800U & (IData)(vlTOPp->I))) {
	vlTOPp->NUMBER = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->NUMBER)));
    }
    if ((0x1000U & (IData)(vlTOPp->I))) {
	vlTOPp->NUMBER = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->NUMBER)));
    }
    if ((0x2000U & (IData)(vlTOPp->I))) {
	vlTOPp->NUMBER = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->NUMBER)));
    }
    if ((0x4000U & (IData)(vlTOPp->I))) {
	vlTOPp->NUMBER = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->NUMBER)));
    }
}

void Vcount__repeat__::_eval(Vcount__repeat____Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcount__repeat__::_eval\n"); );
    Vcount__repeat__* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void Vcount__repeat__::_eval_initial(Vcount__repeat____Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcount__repeat__::_eval_initial\n"); );
    Vcount__repeat__* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vcount__repeat__::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcount__repeat__::final\n"); );
    // Variables
    Vcount__repeat____Syms* __restrict vlSymsp = this->__VlSymsp;
    Vcount__repeat__* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vcount__repeat__::_eval_settle(Vcount__repeat____Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcount__repeat__::_eval_settle\n"); );
    Vcount__repeat__* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData Vcount__repeat__::_change_request(Vcount__repeat____Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcount__repeat__::_change_request\n"); );
    Vcount__repeat__* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}
//VHW1 VL_DEBUG這裡多很多東西，推測是inputs較多
#ifdef VL_DEBUG
void Vcount__repeat__::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcount__repeat__::_eval_debug_assertions\n"); );
}
#endif // VL_DEBUG
//以下 VHW1 Vcount__repeat__::_ctor_var_reset多很多東西，已解決
void Vcount__repeat__::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcount__repeat__::_ctor_var_reset\n"); );
    // Body
    I = VL_RAND_RESET_I(16); //數字不一樣可研究，結論: 16bits
    NUMBER = VL_RAND_RESET_I(5);//結論: 5bits
}
