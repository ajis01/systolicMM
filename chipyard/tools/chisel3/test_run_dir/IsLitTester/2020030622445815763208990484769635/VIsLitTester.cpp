// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIsLitTester.h for the primary calling header

#include "VIsLitTester.h"      // For This
#include "VIsLitTester__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VIsLitTester) {
    VIsLitTester__Syms* __restrict vlSymsp = __VlSymsp = new VIsLitTester__Syms(this, name());
    VIsLitTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VIsLitTester::__Vconfigure(VIsLitTester__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VIsLitTester::~VIsLitTester() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VIsLitTester::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VIsLitTester::eval\n"); );
    VIsLitTester__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VIsLitTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VIsLitTester::_eval_initial_loop(VIsLitTester__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VIsLitTester::_sequent__TOP__1(VIsLitTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIsLitTester::_sequent__TOP__1\n"); );
    VIsLitTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/IsLitTester/2020030622445815763208990484769635/IsLitTester.v:7
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->reset))))) {
	    VL_FINISH_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/IsLitTester/2020030622445815763208990484769635/IsLitTester.v",13,"");
	}
    }
}

void VIsLitTester::_eval(VIsLitTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIsLitTester::_eval\n"); );
    VIsLitTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VIsLitTester::_eval_initial(VIsLitTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIsLitTester::_eval_initial\n"); );
    VIsLitTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VIsLitTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIsLitTester::final\n"); );
    // Variables
    VIsLitTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VIsLitTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VIsLitTester::_eval_settle(VIsLitTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIsLitTester::_eval_settle\n"); );
    VIsLitTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

VL_INLINE_OPT QData VIsLitTester::_change_request(VIsLitTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIsLitTester::_change_request\n"); );
    VIsLitTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VIsLitTester::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIsLitTester::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG

void VIsLitTester::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIsLitTester::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
