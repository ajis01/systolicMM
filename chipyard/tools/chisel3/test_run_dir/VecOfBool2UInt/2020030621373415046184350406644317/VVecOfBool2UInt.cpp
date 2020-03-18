// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVecOfBool2UInt.h for the primary calling header

#include "VVecOfBool2UInt.h"   // For This
#include "VVecOfBool2UInt__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VVecOfBool2UInt) {
    VVecOfBool2UInt__Syms* __restrict vlSymsp = __VlSymsp = new VVecOfBool2UInt__Syms(this, name());
    VVecOfBool2UInt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VVecOfBool2UInt::__Vconfigure(VVecOfBool2UInt__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VVecOfBool2UInt::~VVecOfBool2UInt() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VVecOfBool2UInt::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VVecOfBool2UInt::eval\n"); );
    VVecOfBool2UInt__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VVecOfBool2UInt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    while (VL_LIKELY(__Vchange)) {
	VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
	vlSymsp->__Vm_activity = true;
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
    }
}

void VVecOfBool2UInt::_eval_initial_loop(VVecOfBool2UInt__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    int __VclockLoop = 0;
    QData __Vchange = 1;
    while (VL_LIKELY(__Vchange)) {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
    }
}

//--------------------
// Internal Methods

VL_INLINE_OPT void VVecOfBool2UInt::_sequent__TOP__1(VVecOfBool2UInt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVecOfBool2UInt::_sequent__TOP__1\n"); );
    VVecOfBool2UInt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__VecOfBool2UInt__DOT__value,0,0);
    // Body
    __Vdly__VecOfBool2UInt__DOT__value = vlTOPp->VecOfBool2UInt__DOT__value;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/VecOfBool2UInt/2020030621373415046184350406644317/VecOfBool2UInt.v:47
    __Vdly__VecOfBool2UInt__DOT__value = ((~ (IData)(vlTOPp->reset)) 
					  & (IData)(vlTOPp->VecOfBool2UInt__DOT___T_2));
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->VecOfBool2UInt__DOT__value) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FINISH_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/VecOfBool2UInt/2020030621373415046184350406644317/VecOfBool2UInt.v",58,"");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->reset))))) {
	    VL_FWRITEF(0x80000002U,"13");
	}
    }
    vlTOPp->VecOfBool2UInt__DOT__value = __Vdly__VecOfBool2UInt__DOT__value;
    vlTOPp->VecOfBool2UInt__DOT___T_2 = (1U & ((IData)(1U) 
					       + (IData)(vlTOPp->VecOfBool2UInt__DOT__value)));
}

void VVecOfBool2UInt::_settle__TOP__2(VVecOfBool2UInt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVecOfBool2UInt::_settle__TOP__2\n"); );
    VVecOfBool2UInt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->VecOfBool2UInt__DOT___T_2 = (1U & ((IData)(1U) 
					       + (IData)(vlTOPp->VecOfBool2UInt__DOT__value)));
}

void VVecOfBool2UInt::_eval(VVecOfBool2UInt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVecOfBool2UInt::_eval\n"); );
    VVecOfBool2UInt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VVecOfBool2UInt::_eval_initial(VVecOfBool2UInt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVecOfBool2UInt::_eval_initial\n"); );
    VVecOfBool2UInt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VVecOfBool2UInt::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVecOfBool2UInt::final\n"); );
    // Variables
    VVecOfBool2UInt__Syms* __restrict vlSymsp = this->__VlSymsp;
    VVecOfBool2UInt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VVecOfBool2UInt::_eval_settle(VVecOfBool2UInt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVecOfBool2UInt::_eval_settle\n"); );
    VVecOfBool2UInt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

VL_INLINE_OPT QData VVecOfBool2UInt::_change_request(VVecOfBool2UInt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVecOfBool2UInt::_change_request\n"); );
    VVecOfBool2UInt* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VVecOfBool2UInt::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVecOfBool2UInt::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG

void VVecOfBool2UInt::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVecOfBool2UInt::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    VecOfBool2UInt__DOT__value = VL_RAND_RESET_I(1);
    VecOfBool2UInt__DOT___T_2 = VL_RAND_RESET_I(1);
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
