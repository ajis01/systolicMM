// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VLastAssignTester.h for the primary calling header

#include "VLastAssignTester.h" // For This
#include "VLastAssignTester__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VLastAssignTester) {
    VLastAssignTester__Syms* __restrict vlSymsp = __VlSymsp = new VLastAssignTester__Syms(this, name());
    VLastAssignTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VLastAssignTester::__Vconfigure(VLastAssignTester__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VLastAssignTester::~VLastAssignTester() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VLastAssignTester::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VLastAssignTester::eval\n"); );
    VLastAssignTester__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VLastAssignTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VLastAssignTester::_eval_initial_loop(VLastAssignTester__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VLastAssignTester::_sequent__TOP__1(VLastAssignTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLastAssignTester::_sequent__TOP__1\n"); );
    VLastAssignTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__LastAssignTester__DOT__value,0,0);
    // Body
    __Vdly__LastAssignTester__DOT__value = vlTOPp->LastAssignTester__DOT__value;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LastAssignTester/202003062244448997667615207187037/LastAssignTester.v:47
    __Vdly__LastAssignTester__DOT__value = ((~ (IData)(vlTOPp->reset)) 
					    & (IData)(vlTOPp->LastAssignTester__DOT___T_2));
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->LastAssignTester__DOT__value) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FINISH_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LastAssignTester/202003062244448997667615207187037/LastAssignTester.v",58,"");
	}
    }
    vlTOPp->LastAssignTester__DOT__value = __Vdly__LastAssignTester__DOT__value;
    vlTOPp->LastAssignTester__DOT___T_2 = (1U & ((IData)(1U) 
						 + (IData)(vlTOPp->LastAssignTester__DOT__value)));
}

void VLastAssignTester::_settle__TOP__2(VLastAssignTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLastAssignTester::_settle__TOP__2\n"); );
    VLastAssignTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LastAssignTester__DOT___T_2 = (1U & ((IData)(1U) 
						 + (IData)(vlTOPp->LastAssignTester__DOT__value)));
}

void VLastAssignTester::_eval(VLastAssignTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLastAssignTester::_eval\n"); );
    VLastAssignTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VLastAssignTester::_eval_initial(VLastAssignTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLastAssignTester::_eval_initial\n"); );
    VLastAssignTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VLastAssignTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLastAssignTester::final\n"); );
    // Variables
    VLastAssignTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VLastAssignTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VLastAssignTester::_eval_settle(VLastAssignTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLastAssignTester::_eval_settle\n"); );
    VLastAssignTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

VL_INLINE_OPT QData VLastAssignTester::_change_request(VLastAssignTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLastAssignTester::_change_request\n"); );
    VLastAssignTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VLastAssignTester::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLastAssignTester::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG

void VLastAssignTester::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLastAssignTester::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    LastAssignTester__DOT__value = VL_RAND_RESET_I(1);
    LastAssignTester__DOT___T_2 = VL_RAND_RESET_I(1);
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
