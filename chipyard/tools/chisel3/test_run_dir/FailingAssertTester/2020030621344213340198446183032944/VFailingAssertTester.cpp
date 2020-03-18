// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFailingAssertTester.h for the primary calling header

#include "VFailingAssertTester.h" // For This
#include "VFailingAssertTester__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VFailingAssertTester) {
    VFailingAssertTester__Syms* __restrict vlSymsp = __VlSymsp = new VFailingAssertTester__Syms(this, name());
    VFailingAssertTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VFailingAssertTester::__Vconfigure(VFailingAssertTester__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VFailingAssertTester::~VFailingAssertTester() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VFailingAssertTester::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VFailingAssertTester::eval\n"); );
    VFailingAssertTester__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VFailingAssertTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VFailingAssertTester::_eval_initial_loop(VFailingAssertTester__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VFailingAssertTester::_sequent__TOP__1(VFailingAssertTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFailingAssertTester::_sequent__TOP__1\n"); );
    VFailingAssertTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/FailingAssertTester/2020030621344213340198446183032944/FailingAssertTester.v:51
    if (vlTOPp->reset) {
	vlTOPp->FailingAssertTester__DOT__value = 0U;
    } else {
	if ((1U & (~ (IData)(vlTOPp->reset)))) {
	    vlTOPp->FailingAssertTester__DOT__value 
		= vlTOPp->FailingAssertTester__DOT___T_7;
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Assert.scala:10 assert(false.B)\n");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->reset))))) {
	    VL_WRITEF("[%0t] %%Error: FailingAssertTester.v:75: Assertion failed in %NFailingAssertTester\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/FailingAssertTester/2020030621344213340198446183032944/FailingAssertTester.v",75,"");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->FailingAssertTester__DOT__done) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FINISH_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/FailingAssertTester/2020030621344213340198446183032944/FailingAssertTester.v",86,"");
	}
    }
    vlTOPp->FailingAssertTester__DOT___T_7 = (3U & 
					      ((IData)(1U) 
					       + (IData)(vlTOPp->FailingAssertTester__DOT__value)));
}

void VFailingAssertTester::_settle__TOP__2(VFailingAssertTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFailingAssertTester::_settle__TOP__2\n"); );
    VFailingAssertTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->FailingAssertTester__DOT___T_7 = (3U & 
					      ((IData)(1U) 
					       + (IData)(vlTOPp->FailingAssertTester__DOT__value)));
    vlTOPp->FailingAssertTester__DOT__done = ((~ (IData)(vlTOPp->reset)) 
					      & (3U 
						 == (IData)(vlTOPp->FailingAssertTester__DOT__value)));
}

VL_INLINE_OPT void VFailingAssertTester::_combo__TOP__3(VFailingAssertTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFailingAssertTester::_combo__TOP__3\n"); );
    VFailingAssertTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->FailingAssertTester__DOT__done = ((~ (IData)(vlTOPp->reset)) 
					      & (3U 
						 == (IData)(vlTOPp->FailingAssertTester__DOT__value)));
}

void VFailingAssertTester::_eval(VFailingAssertTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFailingAssertTester::_eval\n"); );
    VFailingAssertTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__3(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VFailingAssertTester::_eval_initial(VFailingAssertTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFailingAssertTester::_eval_initial\n"); );
    VFailingAssertTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VFailingAssertTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFailingAssertTester::final\n"); );
    // Variables
    VFailingAssertTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VFailingAssertTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VFailingAssertTester::_eval_settle(VFailingAssertTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFailingAssertTester::_eval_settle\n"); );
    VFailingAssertTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

VL_INLINE_OPT QData VFailingAssertTester::_change_request(VFailingAssertTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFailingAssertTester::_change_request\n"); );
    VFailingAssertTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VFailingAssertTester::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFailingAssertTester::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG

void VFailingAssertTester::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFailingAssertTester::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    FailingAssertTester__DOT__value = VL_RAND_RESET_I(2);
    FailingAssertTester__DOT___T_7 = VL_RAND_RESET_I(2);
    FailingAssertTester__DOT__done = VL_RAND_RESET_I(1);
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
