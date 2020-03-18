// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRegOfVec.h for the primary calling header

#include "VRegOfVec.h"         // For This
#include "VRegOfVec__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VRegOfVec) {
    VRegOfVec__Syms* __restrict vlSymsp = __VlSymsp = new VRegOfVec__Syms(this, name());
    VRegOfVec* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VRegOfVec::__Vconfigure(VRegOfVec__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VRegOfVec::~VRegOfVec() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VRegOfVec::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VRegOfVec::eval\n"); );
    VRegOfVec__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VRegOfVec* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VRegOfVec::_eval_initial_loop(VRegOfVec__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VRegOfVec::_sequent__TOP__1(VRegOfVec__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegOfVec::_sequent__TOP__1\n"); );
    VRegOfVec* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/RegOfVec/202003062245463442662774092741207/RegOfVec.v:49
    vlTOPp->RegOfVec__DOT__value = ((IData)(vlTOPp->reset)
				     ? 0U : ((IData)(vlTOPp->RegOfVec__DOT__done)
					      ? 0U : (IData)(vlTOPp->RegOfVec__DOT___T_2)));
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->RegOfVec__DOT__done) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FINISH_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/RegOfVec/202003062245463442662774092741207/RegOfVec.v",64,"");
	}
    }
    vlTOPp->RegOfVec__DOT__done = (2U == (IData)(vlTOPp->RegOfVec__DOT__value));
    vlTOPp->RegOfVec__DOT___T_2 = (3U & ((IData)(1U) 
					 + (IData)(vlTOPp->RegOfVec__DOT__value)));
}

void VRegOfVec::_settle__TOP__2(VRegOfVec__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegOfVec::_settle__TOP__2\n"); );
    VRegOfVec* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->RegOfVec__DOT__done = (2U == (IData)(vlTOPp->RegOfVec__DOT__value));
    vlTOPp->RegOfVec__DOT___T_2 = (3U & ((IData)(1U) 
					 + (IData)(vlTOPp->RegOfVec__DOT__value)));
}

void VRegOfVec::_eval(VRegOfVec__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegOfVec::_eval\n"); );
    VRegOfVec* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VRegOfVec::_eval_initial(VRegOfVec__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegOfVec::_eval_initial\n"); );
    VRegOfVec* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VRegOfVec::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegOfVec::final\n"); );
    // Variables
    VRegOfVec__Syms* __restrict vlSymsp = this->__VlSymsp;
    VRegOfVec* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VRegOfVec::_eval_settle(VRegOfVec__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegOfVec::_eval_settle\n"); );
    VRegOfVec* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

VL_INLINE_OPT QData VRegOfVec::_change_request(VRegOfVec__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegOfVec::_change_request\n"); );
    VRegOfVec* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VRegOfVec::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegOfVec::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG

void VRegOfVec::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegOfVec::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    RegOfVec__DOT__value = VL_RAND_RESET_I(2);
    RegOfVec__DOT__done = VL_RAND_RESET_I(1);
    RegOfVec__DOT___T_2 = VL_RAND_RESET_I(2);
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
