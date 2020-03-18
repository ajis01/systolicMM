// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VComplexAssignTester.h for the primary calling header

#include "VComplexAssignTester.h" // For This
#include "VComplexAssignTester__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VComplexAssignTester) {
    VComplexAssignTester__Syms* __restrict vlSymsp = __VlSymsp = new VComplexAssignTester__Syms(this, name());
    VComplexAssignTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VComplexAssignTester::__Vconfigure(VComplexAssignTester__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VComplexAssignTester::~VComplexAssignTester() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VComplexAssignTester::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VComplexAssignTester::eval\n"); );
    VComplexAssignTester__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VComplexAssignTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VComplexAssignTester::_eval_initial_loop(VComplexAssignTester__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VComplexAssignTester::_sequent__TOP__1(VComplexAssignTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexAssignTester::_sequent__TOP__1\n"); );
    VComplexAssignTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__ComplexAssignTester__DOT__value,0,0);
    // Body
    __Vdly__ComplexAssignTester__DOT__value = vlTOPp->ComplexAssignTester__DOT__value;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ComplexAssignTester/2020030621363010979458507518268773/ComplexAssignTester.v:79
    __Vdly__ComplexAssignTester__DOT__value = ((~ (IData)(vlTOPp->reset)) 
					       & (IData)(vlTOPp->ComplexAssignTester__DOT___T_2));
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->ComplexAssignTester__DOT__value) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FINISH_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ComplexAssignTester/2020030621363010979458507518268773/ComplexAssignTester.v",112,"");
	}
    }
    vlTOPp->ComplexAssignTester__DOT__value = __Vdly__ComplexAssignTester__DOT__value;
    vlTOPp->ComplexAssignTester__DOT___T_2 = (1U & 
					      ((IData)(1U) 
					       + (IData)(vlTOPp->ComplexAssignTester__DOT__value)));
}

void VComplexAssignTester::_settle__TOP__2(VComplexAssignTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexAssignTester::_settle__TOP__2\n"); );
    VComplexAssignTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ComplexAssignTester__DOT___T_2 = (1U & 
					      ((IData)(1U) 
					       + (IData)(vlTOPp->ComplexAssignTester__DOT__value)));
}

void VComplexAssignTester::_eval(VComplexAssignTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexAssignTester::_eval\n"); );
    VComplexAssignTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VComplexAssignTester::_eval_initial(VComplexAssignTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexAssignTester::_eval_initial\n"); );
    VComplexAssignTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VComplexAssignTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexAssignTester::final\n"); );
    // Variables
    VComplexAssignTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VComplexAssignTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VComplexAssignTester::_eval_settle(VComplexAssignTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexAssignTester::_eval_settle\n"); );
    VComplexAssignTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

VL_INLINE_OPT QData VComplexAssignTester::_change_request(VComplexAssignTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexAssignTester::_change_request\n"); );
    VComplexAssignTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VComplexAssignTester::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexAssignTester::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG

void VComplexAssignTester::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexAssignTester::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    ComplexAssignTester__DOT__value = VL_RAND_RESET_I(1);
    ComplexAssignTester__DOT___T_2 = VL_RAND_RESET_I(1);
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
