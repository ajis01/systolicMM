// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSinglePrintfTester.h for the primary calling header

#include "VSinglePrintfTester.h" // For This
#include "VSinglePrintfTester__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VSinglePrintfTester) {
    VSinglePrintfTester__Syms* __restrict vlSymsp = __VlSymsp = new VSinglePrintfTester__Syms(this, name());
    VSinglePrintfTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VSinglePrintfTester::__Vconfigure(VSinglePrintfTester__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VSinglePrintfTester::~VSinglePrintfTester() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VSinglePrintfTester::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VSinglePrintfTester::eval\n"); );
    VSinglePrintfTester__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VSinglePrintfTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VSinglePrintfTester::_eval_initial_loop(VSinglePrintfTester__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VSinglePrintfTester::_sequent__TOP__1(VSinglePrintfTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSinglePrintfTester::_sequent__TOP__1\n"); );
    VSinglePrintfTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/SinglePrintfTester/20200306213331226012562717122457/SinglePrintfTester.v:7
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->reset))))) {
	    VL_FWRITEF(0x80000002U,"x=fe");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->reset))))) {
	    VL_FINISH_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/SinglePrintfTester/20200306213331226012562717122457/SinglePrintfTester.v",24,"");
	}
    }
}

void VSinglePrintfTester::_eval(VSinglePrintfTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSinglePrintfTester::_eval\n"); );
    VSinglePrintfTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VSinglePrintfTester::_eval_initial(VSinglePrintfTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSinglePrintfTester::_eval_initial\n"); );
    VSinglePrintfTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VSinglePrintfTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSinglePrintfTester::final\n"); );
    // Variables
    VSinglePrintfTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VSinglePrintfTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VSinglePrintfTester::_eval_settle(VSinglePrintfTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSinglePrintfTester::_eval_settle\n"); );
    VSinglePrintfTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

VL_INLINE_OPT QData VSinglePrintfTester::_change_request(VSinglePrintfTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSinglePrintfTester::_change_request\n"); );
    VSinglePrintfTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VSinglePrintfTester::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSinglePrintfTester::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG

void VSinglePrintfTester::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSinglePrintfTester::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
