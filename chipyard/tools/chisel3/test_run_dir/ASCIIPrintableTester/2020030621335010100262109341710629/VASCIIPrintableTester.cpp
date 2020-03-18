// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VASCIIPrintableTester.h for the primary calling header

#include "VASCIIPrintableTester.h" // For This
#include "VASCIIPrintableTester__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VASCIIPrintableTester) {
    VASCIIPrintableTester__Syms* __restrict vlSymsp = __VlSymsp = new VASCIIPrintableTester__Syms(this, name());
    VASCIIPrintableTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VASCIIPrintableTester::__Vconfigure(VASCIIPrintableTester__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VASCIIPrintableTester::~VASCIIPrintableTester() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VASCIIPrintableTester::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VASCIIPrintableTester::eval\n"); );
    VASCIIPrintableTester__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VASCIIPrintableTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VASCIIPrintableTester::_eval_initial_loop(VASCIIPrintableTester__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VASCIIPrintableTester::_sequent__TOP__1(VASCIIPrintableTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VASCIIPrintableTester::_sequent__TOP__1\n"); );
    VASCIIPrintableTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ASCIIPrintableTester/2020030621335010100262109341710629/ASCIIPrintableTester.v:7
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->reset))))) {
	    VL_FWRITEF(0x80000002U," !\"#$%%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->reset))))) {
	    VL_FINISH_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ASCIIPrintableTester/2020030621335010100262109341710629/ASCIIPrintableTester.v",24,"");
	}
    }
}

void VASCIIPrintableTester::_eval(VASCIIPrintableTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VASCIIPrintableTester::_eval\n"); );
    VASCIIPrintableTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VASCIIPrintableTester::_eval_initial(VASCIIPrintableTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VASCIIPrintableTester::_eval_initial\n"); );
    VASCIIPrintableTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VASCIIPrintableTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VASCIIPrintableTester::final\n"); );
    // Variables
    VASCIIPrintableTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VASCIIPrintableTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VASCIIPrintableTester::_eval_settle(VASCIIPrintableTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VASCIIPrintableTester::_eval_settle\n"); );
    VASCIIPrintableTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

VL_INLINE_OPT QData VASCIIPrintableTester::_change_request(VASCIIPrintableTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VASCIIPrintableTester::_change_request\n"); );
    VASCIIPrintableTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VASCIIPrintableTester::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VASCIIPrintableTester::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG

void VASCIIPrintableTester::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VASCIIPrintableTester::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
