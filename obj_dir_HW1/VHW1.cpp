// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VHW1.h for the primary calling header

#include "VHW1.h"
#include "VHW1__Syms.h"


//--------------------
// STATIC VARIABLES

// Begin mtask footprint  all: 
VL_ST_SIG8(VHW1::__Vtable1_MuxOut[64],0,0);

//--------------------

VL_CTOR_IMP(VHW1) {
    VHW1__Syms* __restrict vlSymsp = __VlSymsp = new VHW1__Syms(this, name());
    VHW1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VHW1::__Vconfigure(VHW1__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VHW1::~VHW1() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VHW1::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VHW1::eval\n"); );
    VHW1__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VHW1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VHW1::_eval_initial_loop(VHW1__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VHW1::_combo__TOP__1(VHW1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHW1::_combo__TOP__1\n"); );
    VHW1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // @@always
    // Body
    // ALWAYS at HW1.v:11
    vlTOPp->__Vtableidx1 = (((IData)(vlTOPp->D) << 5U) 
			    | (((IData)(vlTOPp->C) 
				<< 4U) | (((IData)(vlTOPp->B) 
					   << 3U) | 
					  (((IData)(vlTOPp->A) 
					    << 2U) 
					   | (IData)(vlTOPp->Sel)))));
    vlTOPp->MuxOut = vlTOPp->__Vtable1_MuxOut[vlTOPp->__Vtableidx1];
}

void VHW1::_eval(VHW1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHW1::_eval\n"); );
    VHW1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void VHW1::_eval_initial(VHW1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHW1::_eval_initial\n"); );
    VHW1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VHW1::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHW1::final\n"); );
    // Variables
    VHW1__Syms* __restrict vlSymsp = this->__VlSymsp;
    VHW1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VHW1::_eval_settle(VHW1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHW1::_eval_settle\n"); );
    VHW1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VHW1::_change_request(VHW1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHW1::_change_request\n"); );
    VHW1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VHW1::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHW1::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((A & 0xfeU))) {
	Verilated::overWidthError("A");}
    if (VL_UNLIKELY((B & 0xfeU))) {
	Verilated::overWidthError("B");}
    if (VL_UNLIKELY((C & 0xfeU))) {
	Verilated::overWidthError("C");}
    if (VL_UNLIKELY((D & 0xfeU))) {
	Verilated::overWidthError("D");}
    if (VL_UNLIKELY((Sel & 0xfcU))) {
	Verilated::overWidthError("Sel");}
}
#endif // VL_DEBUG

void VHW1::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHW1::_ctor_var_reset\n"); );
    // Body
    MuxOut = VL_RAND_RESET_I(1);
    A = VL_RAND_RESET_I(1);
    B = VL_RAND_RESET_I(1);
    C = VL_RAND_RESET_I(1);
    D = VL_RAND_RESET_I(1);
    Sel = VL_RAND_RESET_I(2);
    __Vtableidx1 = VL_RAND_RESET_I(6);
    __Vtable1_MuxOut[0] = 0U;
    __Vtable1_MuxOut[1] = 1U;
    __Vtable1_MuxOut[2] = 1U;
    __Vtable1_MuxOut[3] = 0U;
    __Vtable1_MuxOut[4] = 0U;
    __Vtable1_MuxOut[5] = 1U;
    __Vtable1_MuxOut[6] = 0U;
    __Vtable1_MuxOut[7] = 1U;
    __Vtable1_MuxOut[8] = 0U;
    __Vtable1_MuxOut[9] = 1U;
    __Vtable1_MuxOut[10] = 0U;
    __Vtable1_MuxOut[11] = 1U;
    __Vtable1_MuxOut[12] = 0U;
    __Vtable1_MuxOut[13] = 0U;
    __Vtable1_MuxOut[14] = 1U;
    __Vtable1_MuxOut[15] = 0U;
    __Vtable1_MuxOut[16] = 0U;
    __Vtable1_MuxOut[17] = 1U;
    __Vtable1_MuxOut[18] = 0U;
    __Vtable1_MuxOut[19] = 1U;
    __Vtable1_MuxOut[20] = 0U;
    __Vtable1_MuxOut[21] = 1U;
    __Vtable1_MuxOut[22] = 0U;
    __Vtable1_MuxOut[23] = 0U;
    __Vtable1_MuxOut[24] = 0U;
    __Vtable1_MuxOut[25] = 1U;
    __Vtable1_MuxOut[26] = 0U;
    __Vtable1_MuxOut[27] = 0U;
    __Vtable1_MuxOut[28] = 0U;
    __Vtable1_MuxOut[29] = 0U;
    __Vtable1_MuxOut[30] = 0U;
    __Vtable1_MuxOut[31] = 1U;
    __Vtable1_MuxOut[32] = 0U;
    __Vtable1_MuxOut[33] = 1U;
    __Vtable1_MuxOut[34] = 0U;
    __Vtable1_MuxOut[35] = 1U;
    __Vtable1_MuxOut[36] = 0U;
    __Vtable1_MuxOut[37] = 1U;
    __Vtable1_MuxOut[38] = 0U;
    __Vtable1_MuxOut[39] = 0U;
    __Vtable1_MuxOut[40] = 0U;
    __Vtable1_MuxOut[41] = 1U;
    __Vtable1_MuxOut[42] = 0U;
    __Vtable1_MuxOut[43] = 0U;
    __Vtable1_MuxOut[44] = 0U;
    __Vtable1_MuxOut[45] = 0U;
    __Vtable1_MuxOut[46] = 0U;
    __Vtable1_MuxOut[47] = 1U;
    __Vtable1_MuxOut[48] = 0U;
    __Vtable1_MuxOut[49] = 0U;
    __Vtable1_MuxOut[50] = 1U;
    __Vtable1_MuxOut[51] = 0U;
    __Vtable1_MuxOut[52] = 0U;
    __Vtable1_MuxOut[53] = 0U;
    __Vtable1_MuxOut[54] = 0U;
    __Vtable1_MuxOut[55] = 1U;
    __Vtable1_MuxOut[56] = 0U;
    __Vtable1_MuxOut[57] = 0U;
    __Vtable1_MuxOut[58] = 0U;
    __Vtable1_MuxOut[59] = 1U;
    __Vtable1_MuxOut[60] = 1U;
    __Vtable1_MuxOut[61] = 0U;
    __Vtable1_MuxOut[62] = 1U;
    __Vtable1_MuxOut[63] = 0U;
}
