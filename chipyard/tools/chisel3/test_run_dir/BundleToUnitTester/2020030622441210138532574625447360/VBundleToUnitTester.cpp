// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBundleToUnitTester.h for the primary calling header

#include "VBundleToUnitTester.h" // For This
#include "VBundleToUnitTester__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VBundleToUnitTester) {
    VBundleToUnitTester__Syms* __restrict vlSymsp = __VlSymsp = new VBundleToUnitTester__Syms(this, name());
    VBundleToUnitTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VBundleToUnitTester::__Vconfigure(VBundleToUnitTester__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VBundleToUnitTester::~VBundleToUnitTester() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VBundleToUnitTester::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VBundleToUnitTester::eval\n"); );
    VBundleToUnitTester__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VBundleToUnitTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VBundleToUnitTester::_eval_initial_loop(VBundleToUnitTester__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VBundleToUnitTester::_sequent__TOP__1(VBundleToUnitTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBundleToUnitTester::_sequent__TOP__1\n"); );
    VBundleToUnitTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/BundleToUnitTester/2020030622441210138532574625447360/BundleToUnitTester.v:7
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->reset))))) {
	    VL_FINISH_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/BundleToUnitTester/2020030622441210138532574625447360/BundleToUnitTester.v",13,"");
	}
    }
}

void VBundleToUnitTester::_eval(VBundleToUnitTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBundleToUnitTester::_eval\n"); );
    VBundleToUnitTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VBundleToUnitTester::_eval_initial(VBundleToUnitTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBundleToUnitTester::_eval_initial\n"); );
    VBundleToUnitTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VBundleToUnitTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBundleToUnitTester::final\n"); );
    // Variables
    VBundleToUnitTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VBundleToUnitTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VBundleToUnitTester::_eval_settle(VBundleToUnitTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBundleToUnitTester::_eval_settle\n"); );
    VBundleToUnitTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

VL_INLINE_OPT QData VBundleToUnitTester::_change_request(VBundleToUnitTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBundleToUnitTester::_change_request\n"); );
    VBundleToUnitTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VBundleToUnitTester::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBundleToUnitTester::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG

void VBundleToUnitTester::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBundleToUnitTester::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
