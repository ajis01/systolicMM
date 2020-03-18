// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VStopImmediatelyTester.h for the primary calling header

#include "VStopImmediatelyTester.h" // For This
#include "VStopImmediatelyTester__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VStopImmediatelyTester) {
    VStopImmediatelyTester__Syms* __restrict vlSymsp = __VlSymsp = new VStopImmediatelyTester__Syms(this, name());
    VStopImmediatelyTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VStopImmediatelyTester::__Vconfigure(VStopImmediatelyTester__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VStopImmediatelyTester::~VStopImmediatelyTester() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VStopImmediatelyTester::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VStopImmediatelyTester::eval\n"); );
    VStopImmediatelyTester__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VStopImmediatelyTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VStopImmediatelyTester::_eval_initial_loop(VStopImmediatelyTester__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VStopImmediatelyTester::_sequent__TOP__1(VStopImmediatelyTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStopImmediatelyTester::_sequent__TOP__1\n"); );
    VStopImmediatelyTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/StopImmediatelyTester/2020030621345711938306014946892378/StopImmediatelyTester.v:55
    vlTOPp->StopImmediatelyTester__DOT__cycle = ((IData)(vlTOPp->reset)
						  ? 0U
						  : (IData)(vlTOPp->StopImmediatelyTester__DOT___T_1));
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->StopImmediatelyTester__DOT___T_2) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FINISH_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/StopImmediatelyTester/2020030621345711938306014946892378/StopImmediatelyTester.v",66,"");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->StopImmediatelyTester__DOT___T_7))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: Simulation did not exit upon executing stop()\n    at Stop.scala:18 assert(cycle =/= 5.U, \"Simulation did not exit upon executing stop()\")\n");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->StopImmediatelyTester__DOT___T_7))))) {
	    VL_WRITEF("[%0t] %%Error: StopImmediatelyTester.v:88: Assertion failed in %NStopImmediatelyTester\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/StopImmediatelyTester/2020030621345711938306014946892378/StopImmediatelyTester.v",88,"");
	}
    }
    vlTOPp->StopImmediatelyTester__DOT___T_1 = (0xfU 
						& ((IData)(1U) 
						   + (IData)(vlTOPp->StopImmediatelyTester__DOT__cycle)));
    vlTOPp->StopImmediatelyTester__DOT___T_2 = (4U 
						== (IData)(vlTOPp->StopImmediatelyTester__DOT__cycle));
}

void VStopImmediatelyTester::_settle__TOP__2(VStopImmediatelyTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStopImmediatelyTester::_settle__TOP__2\n"); );
    VStopImmediatelyTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->StopImmediatelyTester__DOT___T_1 = (0xfU 
						& ((IData)(1U) 
						   + (IData)(vlTOPp->StopImmediatelyTester__DOT__cycle)));
    vlTOPp->StopImmediatelyTester__DOT___T_2 = (4U 
						== (IData)(vlTOPp->StopImmediatelyTester__DOT__cycle));
    vlTOPp->StopImmediatelyTester__DOT___T_7 = ((5U 
						 != (IData)(vlTOPp->StopImmediatelyTester__DOT__cycle)) 
						| (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VStopImmediatelyTester::_combo__TOP__3(VStopImmediatelyTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStopImmediatelyTester::_combo__TOP__3\n"); );
    VStopImmediatelyTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->StopImmediatelyTester__DOT___T_7 = ((5U 
						 != (IData)(vlTOPp->StopImmediatelyTester__DOT__cycle)) 
						| (IData)(vlTOPp->reset));
}

void VStopImmediatelyTester::_eval(VStopImmediatelyTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStopImmediatelyTester::_eval\n"); );
    VStopImmediatelyTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__3(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VStopImmediatelyTester::_eval_initial(VStopImmediatelyTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStopImmediatelyTester::_eval_initial\n"); );
    VStopImmediatelyTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VStopImmediatelyTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStopImmediatelyTester::final\n"); );
    // Variables
    VStopImmediatelyTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VStopImmediatelyTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VStopImmediatelyTester::_eval_settle(VStopImmediatelyTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStopImmediatelyTester::_eval_settle\n"); );
    VStopImmediatelyTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

VL_INLINE_OPT QData VStopImmediatelyTester::_change_request(VStopImmediatelyTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStopImmediatelyTester::_change_request\n"); );
    VStopImmediatelyTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VStopImmediatelyTester::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStopImmediatelyTester::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG

void VStopImmediatelyTester::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStopImmediatelyTester::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    StopImmediatelyTester__DOT__cycle = VL_RAND_RESET_I(4);
    StopImmediatelyTester__DOT___T_1 = VL_RAND_RESET_I(4);
    StopImmediatelyTester__DOT___T_2 = VL_RAND_RESET_I(1);
    StopImmediatelyTester__DOT___T_7 = VL_RAND_RESET_I(1);
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
