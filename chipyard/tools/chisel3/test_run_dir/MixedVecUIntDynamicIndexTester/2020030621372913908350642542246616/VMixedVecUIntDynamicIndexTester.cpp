// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMixedVecUIntDynamicIndexTester.h for the primary calling header

#include "VMixedVecUIntDynamicIndexTester.h" // For This
#include "VMixedVecUIntDynamicIndexTester__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VMixedVecUIntDynamicIndexTester) {
    VMixedVecUIntDynamicIndexTester__Syms* __restrict vlSymsp = __VlSymsp = new VMixedVecUIntDynamicIndexTester__Syms(this, name());
    VMixedVecUIntDynamicIndexTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VMixedVecUIntDynamicIndexTester::__Vconfigure(VMixedVecUIntDynamicIndexTester__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VMixedVecUIntDynamicIndexTester::~VMixedVecUIntDynamicIndexTester() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VMixedVecUIntDynamicIndexTester::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VMixedVecUIntDynamicIndexTester::eval\n"); );
    VMixedVecUIntDynamicIndexTester__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VMixedVecUIntDynamicIndexTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VMixedVecUIntDynamicIndexTester::_eval_initial_loop(VMixedVecUIntDynamicIndexTester__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VMixedVecUIntDynamicIndexTester::_sequent__TOP__1(VMixedVecUIntDynamicIndexTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecUIntDynamicIndexTester::_sequent__TOP__1\n"); );
    VMixedVecUIntDynamicIndexTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/MixedVecUIntDynamicIndexTester/2020030621372913908350642542246616/MixedVecUIntDynamicIndexTester.v:63
    vlTOPp->MixedVecUIntDynamicIndexTester__DOT__value 
	= ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->MixedVecUIntDynamicIndexTester__DOT___T_2));
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->MixedVecUIntDynamicIndexTester__DOT___T_5))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at MixedVecSpec.scala:87 assert(vecWire(cycle) === cycle)\n");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->MixedVecUIntDynamicIndexTester__DOT___T_5))))) {
	    VL_WRITEF("[%0t] %%Error: MixedVecUIntDynamicIndexTester.v:85: Assertion failed in %NMixedVecUIntDynamicIndexTester\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/MixedVecUIntDynamicIndexTester/2020030621372913908350642542246616/MixedVecUIntDynamicIndexTester.v",85,"");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->MixedVecUIntDynamicIndexTester__DOT__done) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FINISH_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/MixedVecUIntDynamicIndexTester/2020030621372913908350642542246616/MixedVecUIntDynamicIndexTester.v",96,"");
	}
    }
    vlTOPp->MixedVecUIntDynamicIndexTester__DOT__done 
	= (3U == (IData)(vlTOPp->MixedVecUIntDynamicIndexTester__DOT__value));
    vlTOPp->MixedVecUIntDynamicIndexTester__DOT___T_2 
	= (3U & ((IData)(1U) + (IData)(vlTOPp->MixedVecUIntDynamicIndexTester__DOT__value)));
}

void VMixedVecUIntDynamicIndexTester::_settle__TOP__2(VMixedVecUIntDynamicIndexTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecUIntDynamicIndexTester::_settle__TOP__2\n"); );
    VMixedVecUIntDynamicIndexTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->MixedVecUIntDynamicIndexTester__DOT__done 
	= (3U == (IData)(vlTOPp->MixedVecUIntDynamicIndexTester__DOT__value));
    vlTOPp->MixedVecUIntDynamicIndexTester__DOT___T_2 
	= (3U & ((IData)(1U) + (IData)(vlTOPp->MixedVecUIntDynamicIndexTester__DOT__value)));
    vlTOPp->MixedVecUIntDynamicIndexTester__DOT___T_5 
	= ((((3U == (IData)(vlTOPp->MixedVecUIntDynamicIndexTester__DOT__value))
	      ? 3U : ((2U == (IData)(vlTOPp->MixedVecUIntDynamicIndexTester__DOT__value))
		       ? 2U : ((1U == (IData)(vlTOPp->MixedVecUIntDynamicIndexTester__DOT__value))
			        ? 1U : 0U))) == (IData)(vlTOPp->MixedVecUIntDynamicIndexTester__DOT__value)) 
	   | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VMixedVecUIntDynamicIndexTester::_combo__TOP__3(VMixedVecUIntDynamicIndexTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecUIntDynamicIndexTester::_combo__TOP__3\n"); );
    VMixedVecUIntDynamicIndexTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->MixedVecUIntDynamicIndexTester__DOT___T_5 
	= ((((3U == (IData)(vlTOPp->MixedVecUIntDynamicIndexTester__DOT__value))
	      ? 3U : ((2U == (IData)(vlTOPp->MixedVecUIntDynamicIndexTester__DOT__value))
		       ? 2U : ((1U == (IData)(vlTOPp->MixedVecUIntDynamicIndexTester__DOT__value))
			        ? 1U : 0U))) == (IData)(vlTOPp->MixedVecUIntDynamicIndexTester__DOT__value)) 
	   | (IData)(vlTOPp->reset));
}

void VMixedVecUIntDynamicIndexTester::_eval(VMixedVecUIntDynamicIndexTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecUIntDynamicIndexTester::_eval\n"); );
    VMixedVecUIntDynamicIndexTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__3(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VMixedVecUIntDynamicIndexTester::_eval_initial(VMixedVecUIntDynamicIndexTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecUIntDynamicIndexTester::_eval_initial\n"); );
    VMixedVecUIntDynamicIndexTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VMixedVecUIntDynamicIndexTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecUIntDynamicIndexTester::final\n"); );
    // Variables
    VMixedVecUIntDynamicIndexTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VMixedVecUIntDynamicIndexTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VMixedVecUIntDynamicIndexTester::_eval_settle(VMixedVecUIntDynamicIndexTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecUIntDynamicIndexTester::_eval_settle\n"); );
    VMixedVecUIntDynamicIndexTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

VL_INLINE_OPT QData VMixedVecUIntDynamicIndexTester::_change_request(VMixedVecUIntDynamicIndexTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecUIntDynamicIndexTester::_change_request\n"); );
    VMixedVecUIntDynamicIndexTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VMixedVecUIntDynamicIndexTester::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecUIntDynamicIndexTester::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG

void VMixedVecUIntDynamicIndexTester::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecUIntDynamicIndexTester::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    MixedVecUIntDynamicIndexTester__DOT__value = VL_RAND_RESET_I(2);
    MixedVecUIntDynamicIndexTester__DOT__done = VL_RAND_RESET_I(1);
    MixedVecUIntDynamicIndexTester__DOT___T_2 = VL_RAND_RESET_I(2);
    MixedVecUIntDynamicIndexTester__DOT___T_5 = VL_RAND_RESET_I(1);
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}