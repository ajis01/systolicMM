// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRecordIOTester.h for the primary calling header

#include "VRecordIOTester.h"   // For This
#include "VRecordIOTester__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VRecordIOTester) {
    VRecordIOTester__Syms* __restrict vlSymsp = __VlSymsp = new VRecordIOTester__Syms(this, name());
    VRecordIOTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VRecordIOTester::__Vconfigure(VRecordIOTester__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VRecordIOTester::~VRecordIOTester() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VRecordIOTester::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VRecordIOTester::eval\n"); );
    VRecordIOTester__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VRecordIOTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VRecordIOTester::_eval_initial_loop(VRecordIOTester__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VRecordIOTester::_sequent__TOP__1(VRecordIOTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRecordIOTester::_sequent__TOP__1\n"); );
    VRecordIOTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/RecordIOTester/2020030621362311429496166045126006/RecordIOTester.v:7
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->reset))))) {
	    VL_FINISH_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/RecordIOTester/2020030621362311429496166045126006/RecordIOTester.v",13,"");
	}
    }
}

void VRecordIOTester::_eval(VRecordIOTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRecordIOTester::_eval\n"); );
    VRecordIOTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VRecordIOTester::_eval_initial(VRecordIOTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRecordIOTester::_eval_initial\n"); );
    VRecordIOTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VRecordIOTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRecordIOTester::final\n"); );
    // Variables
    VRecordIOTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VRecordIOTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VRecordIOTester::_eval_settle(VRecordIOTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRecordIOTester::_eval_settle\n"); );
    VRecordIOTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

VL_INLINE_OPT QData VRecordIOTester::_change_request(VRecordIOTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRecordIOTester::_change_request\n"); );
    VRecordIOTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VRecordIOTester::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRecordIOTester::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG

void VRecordIOTester::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRecordIOTester::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
