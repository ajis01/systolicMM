// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSucceedingAssertTester.h for the primary calling header

#include "VSucceedingAssertTester.h" // For This
#include "VSucceedingAssertTester__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VSucceedingAssertTester) {
    VSucceedingAssertTester__Syms* __restrict vlSymsp = __VlSymsp = new VSucceedingAssertTester__Syms(this, name());
    VSucceedingAssertTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VSucceedingAssertTester::__Vconfigure(VSucceedingAssertTester__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VSucceedingAssertTester::~VSucceedingAssertTester() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VSucceedingAssertTester::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VSucceedingAssertTester::eval\n"); );
    VSucceedingAssertTester__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VSucceedingAssertTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VSucceedingAssertTester::_eval_initial_loop(VSucceedingAssertTester__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VSucceedingAssertTester::_sequent__TOP__1(VSucceedingAssertTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSucceedingAssertTester::_sequent__TOP__1\n"); );
    VSucceedingAssertTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/SucceedingAssertTester/202003062245339766783232396144440/SucceedingAssertTester.v:51
    if (vlTOPp->reset) {
	vlTOPp->SucceedingAssertTester__DOT__value = 0U;
    } else {
	if ((1U & (~ (IData)(vlTOPp->reset)))) {
	    vlTOPp->SucceedingAssertTester__DOT__value 
		= vlTOPp->SucceedingAssertTester__DOT___T_7;
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->SucceedingAssertTester__DOT__done) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FINISH_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/SucceedingAssertTester/202003062245339766783232396144440/SucceedingAssertTester.v",64,"");
	}
    }
    vlTOPp->SucceedingAssertTester__DOT___T_7 = (3U 
						 & ((IData)(1U) 
						    + (IData)(vlTOPp->SucceedingAssertTester__DOT__value)));
}

void VSucceedingAssertTester::_settle__TOP__2(VSucceedingAssertTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSucceedingAssertTester::_settle__TOP__2\n"); );
    VSucceedingAssertTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->SucceedingAssertTester__DOT___T_7 = (3U 
						 & ((IData)(1U) 
						    + (IData)(vlTOPp->SucceedingAssertTester__DOT__value)));
    vlTOPp->SucceedingAssertTester__DOT__done = ((~ (IData)(vlTOPp->reset)) 
						 & (3U 
						    == (IData)(vlTOPp->SucceedingAssertTester__DOT__value)));
}

VL_INLINE_OPT void VSucceedingAssertTester::_combo__TOP__3(VSucceedingAssertTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSucceedingAssertTester::_combo__TOP__3\n"); );
    VSucceedingAssertTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->SucceedingAssertTester__DOT__done = ((~ (IData)(vlTOPp->reset)) 
						 & (3U 
						    == (IData)(vlTOPp->SucceedingAssertTester__DOT__value)));
}

void VSucceedingAssertTester::_eval(VSucceedingAssertTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSucceedingAssertTester::_eval\n"); );
    VSucceedingAssertTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__3(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VSucceedingAssertTester::_eval_initial(VSucceedingAssertTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSucceedingAssertTester::_eval_initial\n"); );
    VSucceedingAssertTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VSucceedingAssertTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSucceedingAssertTester::final\n"); );
    // Variables
    VSucceedingAssertTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VSucceedingAssertTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VSucceedingAssertTester::_eval_settle(VSucceedingAssertTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSucceedingAssertTester::_eval_settle\n"); );
    VSucceedingAssertTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

VL_INLINE_OPT QData VSucceedingAssertTester::_change_request(VSucceedingAssertTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSucceedingAssertTester::_change_request\n"); );
    VSucceedingAssertTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VSucceedingAssertTester::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSucceedingAssertTester::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG

void VSucceedingAssertTester::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSucceedingAssertTester::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    SucceedingAssertTester__DOT__value = VL_RAND_RESET_I(2);
    SucceedingAssertTester__DOT___T_7 = VL_RAND_RESET_I(2);
    SucceedingAssertTester__DOT__done = VL_RAND_RESET_I(1);
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
