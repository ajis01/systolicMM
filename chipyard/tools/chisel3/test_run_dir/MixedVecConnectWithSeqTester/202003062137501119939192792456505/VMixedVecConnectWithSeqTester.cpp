// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMixedVecConnectWithSeqTester.h for the primary calling header

#include "VMixedVecConnectWithSeqTester.h" // For This
#include "VMixedVecConnectWithSeqTester__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VMixedVecConnectWithSeqTester) {
    VMixedVecConnectWithSeqTester__Syms* __restrict vlSymsp = __VlSymsp = new VMixedVecConnectWithSeqTester__Syms(this, name());
    VMixedVecConnectWithSeqTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VMixedVecConnectWithSeqTester::__Vconfigure(VMixedVecConnectWithSeqTester__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VMixedVecConnectWithSeqTester::~VMixedVecConnectWithSeqTester() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VMixedVecConnectWithSeqTester::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VMixedVecConnectWithSeqTester::eval\n"); );
    VMixedVecConnectWithSeqTester__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VMixedVecConnectWithSeqTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VMixedVecConnectWithSeqTester::_eval_initial_loop(VMixedVecConnectWithSeqTester__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VMixedVecConnectWithSeqTester::_sequent__TOP__1(VMixedVecConnectWithSeqTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecConnectWithSeqTester::_sequent__TOP__1\n"); );
    VMixedVecConnectWithSeqTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/MixedVecConnectWithSeqTester/202003062137501119939192792456505/MixedVecConnectWithSeqTester.v:7
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->reset))))) {
	    VL_FINISH_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/MixedVecConnectWithSeqTester/202003062137501119939192792456505/MixedVecConnectWithSeqTester.v",13,"");
	}
    }
}

void VMixedVecConnectWithSeqTester::_eval(VMixedVecConnectWithSeqTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecConnectWithSeqTester::_eval\n"); );
    VMixedVecConnectWithSeqTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VMixedVecConnectWithSeqTester::_eval_initial(VMixedVecConnectWithSeqTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecConnectWithSeqTester::_eval_initial\n"); );
    VMixedVecConnectWithSeqTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VMixedVecConnectWithSeqTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecConnectWithSeqTester::final\n"); );
    // Variables
    VMixedVecConnectWithSeqTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VMixedVecConnectWithSeqTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VMixedVecConnectWithSeqTester::_eval_settle(VMixedVecConnectWithSeqTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecConnectWithSeqTester::_eval_settle\n"); );
    VMixedVecConnectWithSeqTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

VL_INLINE_OPT QData VMixedVecConnectWithSeqTester::_change_request(VMixedVecConnectWithSeqTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecConnectWithSeqTester::_change_request\n"); );
    VMixedVecConnectWithSeqTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VMixedVecConnectWithSeqTester::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecConnectWithSeqTester::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG

void VMixedVecConnectWithSeqTester::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecConnectWithSeqTester::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
