// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCountTester.h for the primary calling header

#include "VCountTester.h"      // For This
#include "VCountTester__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VCountTester) {
    VCountTester__Syms* __restrict vlSymsp = __VlSymsp = new VCountTester__Syms(this, name());
    VCountTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VCountTester::__Vconfigure(VCountTester__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VCountTester::~VCountTester() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VCountTester::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VCountTester::eval\n"); );
    VCountTester__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VCountTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VCountTester::_eval_initial_loop(VCountTester__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VCountTester::_sequent__TOP__1(VCountTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCountTester::_sequent__TOP__1\n"); );
    VCountTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountTester/2020030622445214674713939509061495/CountTester.v:49
    vlTOPp->CountTester__DOT__value = ((IData)(vlTOPp->reset)
				        ? 0U : (IData)(vlTOPp->CountTester__DOT___T_2));
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->CountTester__DOT___T) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FINISH_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountTester/2020030622445214674713939509061495/CountTester.v",60,"");
	}
    }
    vlTOPp->CountTester__DOT___T = (3U == (IData)(vlTOPp->CountTester__DOT__value));
    vlTOPp->CountTester__DOT___T_2 = (3U & ((IData)(1U) 
					    + (IData)(vlTOPp->CountTester__DOT__value)));
}

void VCountTester::_settle__TOP__2(VCountTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCountTester::_settle__TOP__2\n"); );
    VCountTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CountTester__DOT___T = (3U == (IData)(vlTOPp->CountTester__DOT__value));
    vlTOPp->CountTester__DOT___T_2 = (3U & ((IData)(1U) 
					    + (IData)(vlTOPp->CountTester__DOT__value)));
}

void VCountTester::_eval(VCountTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCountTester::_eval\n"); );
    VCountTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VCountTester::_eval_initial(VCountTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCountTester::_eval_initial\n"); );
    VCountTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VCountTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCountTester::final\n"); );
    // Variables
    VCountTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VCountTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VCountTester::_eval_settle(VCountTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCountTester::_eval_settle\n"); );
    VCountTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

VL_INLINE_OPT QData VCountTester::_change_request(VCountTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCountTester::_change_request\n"); );
    VCountTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VCountTester::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCountTester::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG

void VCountTester::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCountTester::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    CountTester__DOT__value = VL_RAND_RESET_I(2);
    CountTester__DOT___T = VL_RAND_RESET_I(1);
    CountTester__DOT___T_2 = VL_RAND_RESET_I(2);
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
