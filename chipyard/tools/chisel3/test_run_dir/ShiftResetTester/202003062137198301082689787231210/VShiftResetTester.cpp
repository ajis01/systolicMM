// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VShiftResetTester.h for the primary calling header

#include "VShiftResetTester.h" // For This
#include "VShiftResetTester__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VShiftResetTester) {
    VShiftResetTester__Syms* __restrict vlSymsp = __VlSymsp = new VShiftResetTester__Syms(this, name());
    VShiftResetTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VShiftResetTester::__Vconfigure(VShiftResetTester__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VShiftResetTester::~VShiftResetTester() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VShiftResetTester::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VShiftResetTester::eval\n"); );
    VShiftResetTester__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VShiftResetTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VShiftResetTester::_eval_initial_loop(VShiftResetTester__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VShiftResetTester::_sequent__TOP__1(VShiftResetTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftResetTester::_sequent__TOP__1\n"); );
    VShiftResetTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__ShiftResetTester__DOT___T_5,4,0);
    VL_SIG8(__Vdly__ShiftResetTester__DOT___T_6,4,0);
    VL_SIG8(__Vdly__ShiftResetTester__DOT___T_7,4,0);
    // Body
    __Vdly__ShiftResetTester__DOT___T_5 = vlTOPp->ShiftResetTester__DOT___T_5;
    __Vdly__ShiftResetTester__DOT___T_6 = vlTOPp->ShiftResetTester__DOT___T_6;
    __Vdly__ShiftResetTester__DOT___T_7 = vlTOPp->ShiftResetTester__DOT___T_7;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ShiftResetTester/202003062137198301082689787231210/ShiftResetTester.v:83
    vlTOPp->ShiftResetTester__DOT__value = ((IData)(vlTOPp->reset)
					     ? 0U : 
					    ((IData)(vlTOPp->ShiftResetTester__DOT__done)
					      ? 0U : (IData)(vlTOPp->ShiftResetTester__DOT___T_2)));
    __Vdly__ShiftResetTester__DOT___T_5 = ((IData)(vlTOPp->reset)
					    ? 1U : (IData)(vlTOPp->ShiftResetTester__DOT___T_4));
    __Vdly__ShiftResetTester__DOT___T_6 = ((IData)(vlTOPp->reset)
					    ? 1U : (IData)(vlTOPp->ShiftResetTester__DOT___T_5));
    __Vdly__ShiftResetTester__DOT___T_7 = ((IData)(vlTOPp->reset)
					    ? 1U : (IData)(vlTOPp->ShiftResetTester__DOT___T_6));
    vlTOPp->ShiftResetTester__DOT__sr = ((IData)(vlTOPp->reset)
					  ? 1U : (IData)(vlTOPp->ShiftResetTester__DOT___T_7));
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->ShiftResetTester__DOT__done) 
			 & (~ (IData)(vlTOPp->ShiftResetTester__DOT___T_10))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Reg.scala:57 assert(sr === 1.U)\n");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->ShiftResetTester__DOT__done) 
			 & (~ (IData)(vlTOPp->ShiftResetTester__DOT___T_10))))) {
	    VL_WRITEF("[%0t] %%Error: ShiftResetTester.v:129: Assertion failed in %NShiftResetTester\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ShiftResetTester/202003062137198301082689787231210/ShiftResetTester.v",129,"");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->ShiftResetTester__DOT__done) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FINISH_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ShiftResetTester/202003062137198301082689787231210/ShiftResetTester.v",140,"");
	}
    }
    vlTOPp->ShiftResetTester__DOT___T_5 = __Vdly__ShiftResetTester__DOT___T_5;
    vlTOPp->ShiftResetTester__DOT___T_6 = __Vdly__ShiftResetTester__DOT___T_6;
    vlTOPp->ShiftResetTester__DOT___T_7 = __Vdly__ShiftResetTester__DOT___T_7;
    vlTOPp->ShiftResetTester__DOT__done = (2U == (IData)(vlTOPp->ShiftResetTester__DOT__value));
    vlTOPp->ShiftResetTester__DOT___T_2 = (3U & ((IData)(1U) 
						 + (IData)(vlTOPp->ShiftResetTester__DOT__value)));
    vlTOPp->ShiftResetTester__DOT___T_4 = (0x1fU & 
					   ((IData)(0x17U) 
					    + (IData)(vlTOPp->ShiftResetTester__DOT__value)));
}

void VShiftResetTester::_settle__TOP__2(VShiftResetTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftResetTester::_settle__TOP__2\n"); );
    VShiftResetTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ShiftResetTester__DOT__done = (2U == (IData)(vlTOPp->ShiftResetTester__DOT__value));
    vlTOPp->ShiftResetTester__DOT___T_2 = (3U & ((IData)(1U) 
						 + (IData)(vlTOPp->ShiftResetTester__DOT__value)));
    vlTOPp->ShiftResetTester__DOT___T_4 = (0x1fU & 
					   ((IData)(0x17U) 
					    + (IData)(vlTOPp->ShiftResetTester__DOT__value)));
    vlTOPp->ShiftResetTester__DOT___T_10 = ((1U == (IData)(vlTOPp->ShiftResetTester__DOT__sr)) 
					    | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VShiftResetTester::_combo__TOP__3(VShiftResetTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftResetTester::_combo__TOP__3\n"); );
    VShiftResetTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ShiftResetTester__DOT___T_10 = ((1U == (IData)(vlTOPp->ShiftResetTester__DOT__sr)) 
					    | (IData)(vlTOPp->reset));
}

void VShiftResetTester::_eval(VShiftResetTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftResetTester::_eval\n"); );
    VShiftResetTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__3(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VShiftResetTester::_eval_initial(VShiftResetTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftResetTester::_eval_initial\n"); );
    VShiftResetTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VShiftResetTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftResetTester::final\n"); );
    // Variables
    VShiftResetTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VShiftResetTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VShiftResetTester::_eval_settle(VShiftResetTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftResetTester::_eval_settle\n"); );
    VShiftResetTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

VL_INLINE_OPT QData VShiftResetTester::_change_request(VShiftResetTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftResetTester::_change_request\n"); );
    VShiftResetTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VShiftResetTester::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftResetTester::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG

void VShiftResetTester::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftResetTester::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    ShiftResetTester__DOT__value = VL_RAND_RESET_I(2);
    ShiftResetTester__DOT__done = VL_RAND_RESET_I(1);
    ShiftResetTester__DOT___T_2 = VL_RAND_RESET_I(2);
    ShiftResetTester__DOT___T_4 = VL_RAND_RESET_I(5);
    ShiftResetTester__DOT___T_5 = VL_RAND_RESET_I(5);
    ShiftResetTester__DOT___T_6 = VL_RAND_RESET_I(5);
    ShiftResetTester__DOT___T_7 = VL_RAND_RESET_I(5);
    ShiftResetTester__DOT__sr = VL_RAND_RESET_I(5);
    ShiftResetTester__DOT___T_10 = VL_RAND_RESET_I(1);
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
