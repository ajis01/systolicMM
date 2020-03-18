// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPipelinedResetTester.h for the primary calling header

#include "VPipelinedResetTester.h" // For This
#include "VPipelinedResetTester__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VPipelinedResetTester) {
    VPipelinedResetTester__Syms* __restrict vlSymsp = __VlSymsp = new VPipelinedResetTester__Syms(this, name());
    VPipelinedResetTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VPipelinedResetTester::__Vconfigure(VPipelinedResetTester__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VPipelinedResetTester::~VPipelinedResetTester() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VPipelinedResetTester::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VPipelinedResetTester::eval\n"); );
    VPipelinedResetTester__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VPipelinedResetTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VPipelinedResetTester::_eval_initial_loop(VPipelinedResetTester__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VPipelinedResetTester::_sequent__TOP__1(VPipelinedResetTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedResetTester::_sequent__TOP__1\n"); );
    VPipelinedResetTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/PipelinedResetTester/2020030621345710908231399004384010/PipelinedResetTester.v:51
    if (vlTOPp->reset) {
	vlTOPp->PipelinedResetTester__DOT__value = 0U;
    } else {
	if ((1U & (~ (IData)(vlTOPp->reset)))) {
	    vlTOPp->PipelinedResetTester__DOT__value 
		= vlTOPp->PipelinedResetTester__DOT___T_7;
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->PipelinedResetTester__DOT__done) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FINISH_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/PipelinedResetTester/2020030621345710908231399004384010/PipelinedResetTester.v",64,"");
	}
    }
    vlTOPp->PipelinedResetTester__DOT___T_7 = (3U & 
					       ((IData)(1U) 
						+ (IData)(vlTOPp->PipelinedResetTester__DOT__value)));
}

void VPipelinedResetTester::_settle__TOP__2(VPipelinedResetTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedResetTester::_settle__TOP__2\n"); );
    VPipelinedResetTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->PipelinedResetTester__DOT___T_7 = (3U & 
					       ((IData)(1U) 
						+ (IData)(vlTOPp->PipelinedResetTester__DOT__value)));
    vlTOPp->PipelinedResetTester__DOT__done = ((~ (IData)(vlTOPp->reset)) 
					       & (3U 
						  == (IData)(vlTOPp->PipelinedResetTester__DOT__value)));
}

VL_INLINE_OPT void VPipelinedResetTester::_combo__TOP__3(VPipelinedResetTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedResetTester::_combo__TOP__3\n"); );
    VPipelinedResetTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->PipelinedResetTester__DOT__done = ((~ (IData)(vlTOPp->reset)) 
					       & (3U 
						  == (IData)(vlTOPp->PipelinedResetTester__DOT__value)));
}

void VPipelinedResetTester::_eval(VPipelinedResetTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedResetTester::_eval\n"); );
    VPipelinedResetTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__3(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VPipelinedResetTester::_eval_initial(VPipelinedResetTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedResetTester::_eval_initial\n"); );
    VPipelinedResetTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VPipelinedResetTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedResetTester::final\n"); );
    // Variables
    VPipelinedResetTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VPipelinedResetTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VPipelinedResetTester::_eval_settle(VPipelinedResetTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedResetTester::_eval_settle\n"); );
    VPipelinedResetTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

VL_INLINE_OPT QData VPipelinedResetTester::_change_request(VPipelinedResetTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedResetTester::_change_request\n"); );
    VPipelinedResetTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VPipelinedResetTester::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedResetTester::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG

void VPipelinedResetTester::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedResetTester::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    PipelinedResetTester__DOT__value = VL_RAND_RESET_I(2);
    PipelinedResetTester__DOT___T_7 = VL_RAND_RESET_I(2);
    PipelinedResetTester__DOT__done = VL_RAND_RESET_I(1);
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
