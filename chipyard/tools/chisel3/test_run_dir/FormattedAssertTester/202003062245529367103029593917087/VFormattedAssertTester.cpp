// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFormattedAssertTester.h for the primary calling header

#include "VFormattedAssertTester.h" // For This
#include "VFormattedAssertTester__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VFormattedAssertTester) {
    VFormattedAssertTester__Syms* __restrict vlSymsp = __VlSymsp = new VFormattedAssertTester__Syms(this, name());
    VFormattedAssertTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VFormattedAssertTester::__Vconfigure(VFormattedAssertTester__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VFormattedAssertTester::~VFormattedAssertTester() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VFormattedAssertTester::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VFormattedAssertTester::eval\n"); );
    VFormattedAssertTester__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VFormattedAssertTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VFormattedAssertTester::_eval_initial_loop(VFormattedAssertTester__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VFormattedAssertTester::_sequent__TOP__1(VFormattedAssertTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFormattedAssertTester::_sequent__TOP__1\n"); );
    VFormattedAssertTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/FormattedAssertTester/202003062245529367103029593917087/FormattedAssertTester.v:7
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->reset))))) {
	    VL_FINISH_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/FormattedAssertTester/202003062245529367103029593917087/FormattedAssertTester.v",13,"");
	}
    }
}

void VFormattedAssertTester::_eval(VFormattedAssertTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFormattedAssertTester::_eval\n"); );
    VFormattedAssertTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VFormattedAssertTester::_eval_initial(VFormattedAssertTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFormattedAssertTester::_eval_initial\n"); );
    VFormattedAssertTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VFormattedAssertTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFormattedAssertTester::final\n"); );
    // Variables
    VFormattedAssertTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VFormattedAssertTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VFormattedAssertTester::_eval_settle(VFormattedAssertTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFormattedAssertTester::_eval_settle\n"); );
    VFormattedAssertTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

VL_INLINE_OPT QData VFormattedAssertTester::_change_request(VFormattedAssertTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFormattedAssertTester::_change_request\n"); );
    VFormattedAssertTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VFormattedAssertTester::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFormattedAssertTester::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG

void VFormattedAssertTester::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFormattedAssertTester::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
