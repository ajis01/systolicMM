// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VWrapTester.h for the primary calling header

#include "VWrapTester.h"       // For This
#include "VWrapTester__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VWrapTester) {
    VWrapTester__Syms* __restrict vlSymsp = __VlSymsp = new VWrapTester__Syms(this, name());
    VWrapTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VWrapTester::__Vconfigure(VWrapTester__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VWrapTester::~VWrapTester() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VWrapTester::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VWrapTester::eval\n"); );
    VWrapTester__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VWrapTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VWrapTester::_eval_initial_loop(VWrapTester__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VWrapTester::_sequent__TOP__1(VWrapTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWrapTester::_sequent__TOP__1\n"); );
    VWrapTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/WrapTester/2020030622461312387175921063159631/WrapTester.v:53
    vlTOPp->WrapTester__DOT__value = ((IData)(vlTOPp->reset)
				       ? 0U : (IData)(vlTOPp->WrapTester__DOT___T_2));
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->WrapTester__DOT__wrap) 
			 & (~ (IData)(vlTOPp->WrapTester__DOT___T_5))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Counter.scala:33 assert(cnt === (max - 1).asUInt)\n");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->WrapTester__DOT__wrap) 
			 & (~ (IData)(vlTOPp->WrapTester__DOT___T_5))))) {
	    VL_WRITEF("[%0t] %%Error: WrapTester.v:75: Assertion failed in %NWrapTester\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/WrapTester/2020030622461312387175921063159631/WrapTester.v",75,"");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->WrapTester__DOT__wrap) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FINISH_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/WrapTester/2020030622461312387175921063159631/WrapTester.v",86,"");
	}
    }
    vlTOPp->WrapTester__DOT__wrap = (3U == (IData)(vlTOPp->WrapTester__DOT__value));
    vlTOPp->WrapTester__DOT___T_2 = (3U & ((IData)(1U) 
					   + (IData)(vlTOPp->WrapTester__DOT__value)));
}

void VWrapTester::_settle__TOP__2(VWrapTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWrapTester::_settle__TOP__2\n"); );
    VWrapTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->WrapTester__DOT__wrap = (3U == (IData)(vlTOPp->WrapTester__DOT__value));
    vlTOPp->WrapTester__DOT___T_2 = (3U & ((IData)(1U) 
					   + (IData)(vlTOPp->WrapTester__DOT__value)));
    vlTOPp->WrapTester__DOT___T_5 = ((3U == (IData)(vlTOPp->WrapTester__DOT__value)) 
				     | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VWrapTester::_combo__TOP__3(VWrapTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWrapTester::_combo__TOP__3\n"); );
    VWrapTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->WrapTester__DOT___T_5 = ((3U == (IData)(vlTOPp->WrapTester__DOT__value)) 
				     | (IData)(vlTOPp->reset));
}

void VWrapTester::_eval(VWrapTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWrapTester::_eval\n"); );
    VWrapTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__3(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VWrapTester::_eval_initial(VWrapTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWrapTester::_eval_initial\n"); );
    VWrapTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VWrapTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWrapTester::final\n"); );
    // Variables
    VWrapTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VWrapTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VWrapTester::_eval_settle(VWrapTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWrapTester::_eval_settle\n"); );
    VWrapTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

VL_INLINE_OPT QData VWrapTester::_change_request(VWrapTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWrapTester::_change_request\n"); );
    VWrapTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VWrapTester::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWrapTester::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG

void VWrapTester::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWrapTester::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    WrapTester__DOT__value = VL_RAND_RESET_I(2);
    WrapTester__DOT__wrap = VL_RAND_RESET_I(1);
    WrapTester__DOT___T_2 = VL_RAND_RESET_I(2);
    WrapTester__DOT___T_5 = VL_RAND_RESET_I(1);
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
