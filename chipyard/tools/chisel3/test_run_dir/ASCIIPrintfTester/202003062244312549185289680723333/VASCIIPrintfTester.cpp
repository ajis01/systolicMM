// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VASCIIPrintfTester.h for the primary calling header

#include "VASCIIPrintfTester.h" // For This
#include "VASCIIPrintfTester__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VASCIIPrintfTester) {
    VASCIIPrintfTester__Syms* __restrict vlSymsp = __VlSymsp = new VASCIIPrintfTester__Syms(this, name());
    VASCIIPrintfTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VASCIIPrintfTester::__Vconfigure(VASCIIPrintfTester__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VASCIIPrintfTester::~VASCIIPrintfTester() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VASCIIPrintfTester::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VASCIIPrintfTester::eval\n"); );
    VASCIIPrintfTester__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VASCIIPrintfTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VASCIIPrintfTester::_eval_initial_loop(VASCIIPrintfTester__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VASCIIPrintfTester::_sequent__TOP__1(VASCIIPrintfTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VASCIIPrintfTester::_sequent__TOP__1\n"); );
    VASCIIPrintfTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ASCIIPrintfTester/202003062244312549185289680723333/ASCIIPrintfTester.v:7
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->reset))))) {
	    VL_FWRITEF(0x80000002U," !\"#$%%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->reset))))) {
	    VL_FINISH_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ASCIIPrintfTester/202003062244312549185289680723333/ASCIIPrintfTester.v",24,"");
	}
    }
}

void VASCIIPrintfTester::_eval(VASCIIPrintfTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VASCIIPrintfTester::_eval\n"); );
    VASCIIPrintfTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VASCIIPrintfTester::_eval_initial(VASCIIPrintfTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VASCIIPrintfTester::_eval_initial\n"); );
    VASCIIPrintfTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VASCIIPrintfTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VASCIIPrintfTester::final\n"); );
    // Variables
    VASCIIPrintfTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VASCIIPrintfTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VASCIIPrintfTester::_eval_settle(VASCIIPrintfTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VASCIIPrintfTester::_eval_settle\n"); );
    VASCIIPrintfTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

VL_INLINE_OPT QData VASCIIPrintfTester::_change_request(VASCIIPrintfTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VASCIIPrintfTester::_change_request\n"); );
    VASCIIPrintfTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VASCIIPrintfTester::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VASCIIPrintfTester::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG

void VASCIIPrintfTester::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VASCIIPrintfTester::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
