// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRecordSerializationTest.h for the primary calling header

#include "VRecordSerializationTest.h" // For This
#include "VRecordSerializationTest__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VRecordSerializationTest) {
    VRecordSerializationTest__Syms* __restrict vlSymsp = __VlSymsp = new VRecordSerializationTest__Syms(this, name());
    VRecordSerializationTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VRecordSerializationTest::__Vconfigure(VRecordSerializationTest__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VRecordSerializationTest::~VRecordSerializationTest() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VRecordSerializationTest::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VRecordSerializationTest::eval\n"); );
    VRecordSerializationTest__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VRecordSerializationTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VRecordSerializationTest::_eval_initial_loop(VRecordSerializationTest__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VRecordSerializationTest::_sequent__TOP__1(VRecordSerializationTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRecordSerializationTest::_sequent__TOP__1\n"); );
    VRecordSerializationTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/RecordSerializationTest/2020030622464916242785028490231680/RecordSerializationTest.v:7
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->reset))))) {
	    VL_FINISH_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/RecordSerializationTest/2020030622464916242785028490231680/RecordSerializationTest.v",13,"");
	}
    }
}

void VRecordSerializationTest::_eval(VRecordSerializationTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRecordSerializationTest::_eval\n"); );
    VRecordSerializationTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VRecordSerializationTest::_eval_initial(VRecordSerializationTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRecordSerializationTest::_eval_initial\n"); );
    VRecordSerializationTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VRecordSerializationTest::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRecordSerializationTest::final\n"); );
    // Variables
    VRecordSerializationTest__Syms* __restrict vlSymsp = this->__VlSymsp;
    VRecordSerializationTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VRecordSerializationTest::_eval_settle(VRecordSerializationTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRecordSerializationTest::_eval_settle\n"); );
    VRecordSerializationTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

VL_INLINE_OPT QData VRecordSerializationTest::_change_request(VRecordSerializationTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRecordSerializationTest::_change_request\n"); );
    VRecordSerializationTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VRecordSerializationTest::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRecordSerializationTest::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG

void VRecordSerializationTest::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRecordSerializationTest::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
