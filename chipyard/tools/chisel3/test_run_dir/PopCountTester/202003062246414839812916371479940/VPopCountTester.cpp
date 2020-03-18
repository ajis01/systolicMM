// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPopCountTester.h for the primary calling header

#include "VPopCountTester.h"   // For This
#include "VPopCountTester__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VPopCountTester) {
    VPopCountTester__Syms* __restrict vlSymsp = __VlSymsp = new VPopCountTester__Syms(this, name());
    VPopCountTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VPopCountTester::__Vconfigure(VPopCountTester__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VPopCountTester::~VPopCountTester() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VPopCountTester::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VPopCountTester::eval\n"); );
    VPopCountTester__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VPopCountTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VPopCountTester::_eval_initial_loop(VPopCountTester__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VPopCountTester::_sequent__TOP__1(VPopCountTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPopCountTester::_sequent__TOP__1\n"); );
    VPopCountTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__PopCountTester__DOT___T_4,0,0);
    // Body
    __Vdly__PopCountTester__DOT___T_4 = vlTOPp->PopCountTester__DOT___T_4;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/PopCountTester/202003062246414839812916371479940/PopCountTester.v:75
    __Vdly__PopCountTester__DOT___T_4 = (3U == (IData)(vlTOPp->PopCountTester__DOT__x));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/PopCountTester/202003062246414839812916371479940/PopCountTester.v:75
    vlTOPp->PopCountTester__DOT__x = ((IData)(vlTOPp->reset)
				       ? 0U : (IData)(vlTOPp->PopCountTester__DOT___T_1));
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->PopCountTester__DOT___T_4) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FINISH_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/PopCountTester/202003062246414839812916371479940/PopCountTester.v",85,"");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->PopCountTester__DOT___T_15))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at PopCount.scala:16 assert(result === expected)\n");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->PopCountTester__DOT___T_15))))) {
	    VL_WRITEF("[%0t] %%Error: PopCountTester.v:107: Assertion failed in %NPopCountTester\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/PopCountTester/202003062246414839812916371479940/PopCountTester.v",107,"");
	}
    }
    vlTOPp->PopCountTester__DOT___T_4 = __Vdly__PopCountTester__DOT___T_4;
    vlTOPp->PopCountTester__DOT___T_1 = (3U & ((IData)(1U) 
					       + (IData)(vlTOPp->PopCountTester__DOT__x)));
}

void VPopCountTester::_settle__TOP__2(VPopCountTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPopCountTester::_settle__TOP__2\n"); );
    VPopCountTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->PopCountTester__DOT___T_1 = (3U & ((IData)(1U) 
					       + (IData)(vlTOPp->PopCountTester__DOT__x)));
    vlTOPp->PopCountTester__DOT___T_15 = (((3U & ((1U 
						   & (IData)(vlTOPp->PopCountTester__DOT__x)) 
						  + 
						  (1U 
						   & ((IData)(vlTOPp->PopCountTester__DOT__x) 
						      >> 1U)))) 
					   == (7U & 
					       ((1U 
						 & (IData)(vlTOPp->PopCountTester__DOT__x)) 
						+ (1U 
						   & ((IData)(vlTOPp->PopCountTester__DOT__x) 
						      >> 1U))))) 
					  | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VPopCountTester::_combo__TOP__3(VPopCountTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPopCountTester::_combo__TOP__3\n"); );
    VPopCountTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->PopCountTester__DOT___T_15 = (((3U & ((1U 
						   & (IData)(vlTOPp->PopCountTester__DOT__x)) 
						  + 
						  (1U 
						   & ((IData)(vlTOPp->PopCountTester__DOT__x) 
						      >> 1U)))) 
					   == (7U & 
					       ((1U 
						 & (IData)(vlTOPp->PopCountTester__DOT__x)) 
						+ (1U 
						   & ((IData)(vlTOPp->PopCountTester__DOT__x) 
						      >> 1U))))) 
					  | (IData)(vlTOPp->reset));
}

void VPopCountTester::_eval(VPopCountTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPopCountTester::_eval\n"); );
    VPopCountTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__3(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VPopCountTester::_eval_initial(VPopCountTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPopCountTester::_eval_initial\n"); );
    VPopCountTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VPopCountTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPopCountTester::final\n"); );
    // Variables
    VPopCountTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VPopCountTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VPopCountTester::_eval_settle(VPopCountTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPopCountTester::_eval_settle\n"); );
    VPopCountTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

VL_INLINE_OPT QData VPopCountTester::_change_request(VPopCountTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPopCountTester::_change_request\n"); );
    VPopCountTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VPopCountTester::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPopCountTester::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG

void VPopCountTester::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPopCountTester::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    PopCountTester__DOT__x = VL_RAND_RESET_I(2);
    PopCountTester__DOT___T_1 = VL_RAND_RESET_I(2);
    PopCountTester__DOT___T_4 = VL_RAND_RESET_I(1);
    PopCountTester__DOT___T_15 = VL_RAND_RESET_I(1);
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
