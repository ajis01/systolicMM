// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUInt2Bundle.h for the primary calling header

#include "VUInt2Bundle.h"      // For This
#include "VUInt2Bundle__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VUInt2Bundle) {
    VUInt2Bundle__Syms* __restrict vlSymsp = __VlSymsp = new VUInt2Bundle__Syms(this, name());
    VUInt2Bundle* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VUInt2Bundle::__Vconfigure(VUInt2Bundle__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VUInt2Bundle::~VUInt2Bundle() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VUInt2Bundle::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VUInt2Bundle::eval\n"); );
    VUInt2Bundle__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VUInt2Bundle* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VUInt2Bundle::_eval_initial_loop(VUInt2Bundle__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VUInt2Bundle::_sequent__TOP__1(VUInt2Bundle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUInt2Bundle::_sequent__TOP__1\n"); );
    VUInt2Bundle* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__UInt2Bundle__DOT__value,0,0);
    // Body
    __Vdly__UInt2Bundle__DOT__value = vlTOPp->UInt2Bundle__DOT__value;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/UInt2Bundle/2020030622445516429898742625677342/UInt2Bundle.v:47
    __Vdly__UInt2Bundle__DOT__value = ((~ (IData)(vlTOPp->reset)) 
				       & (IData)(vlTOPp->UInt2Bundle__DOT___T_2));
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->UInt2Bundle__DOT__value) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FINISH_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/UInt2Bundle/2020030622445516429898742625677342/UInt2Bundle.v",58,"");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->reset))))) {
	    VL_FWRITEF(0x80000002U,"MyBundle(foo -> 11, bar ->  4)");
	}
    }
    vlTOPp->UInt2Bundle__DOT__value = __Vdly__UInt2Bundle__DOT__value;
    vlTOPp->UInt2Bundle__DOT___T_2 = (1U & ((IData)(1U) 
					    + (IData)(vlTOPp->UInt2Bundle__DOT__value)));
}

void VUInt2Bundle::_settle__TOP__2(VUInt2Bundle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUInt2Bundle::_settle__TOP__2\n"); );
    VUInt2Bundle* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->UInt2Bundle__DOT___T_2 = (1U & ((IData)(1U) 
					    + (IData)(vlTOPp->UInt2Bundle__DOT__value)));
}

void VUInt2Bundle::_eval(VUInt2Bundle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUInt2Bundle::_eval\n"); );
    VUInt2Bundle* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VUInt2Bundle::_eval_initial(VUInt2Bundle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUInt2Bundle::_eval_initial\n"); );
    VUInt2Bundle* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VUInt2Bundle::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUInt2Bundle::final\n"); );
    // Variables
    VUInt2Bundle__Syms* __restrict vlSymsp = this->__VlSymsp;
    VUInt2Bundle* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VUInt2Bundle::_eval_settle(VUInt2Bundle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUInt2Bundle::_eval_settle\n"); );
    VUInt2Bundle* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

VL_INLINE_OPT QData VUInt2Bundle::_change_request(VUInt2Bundle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUInt2Bundle::_change_request\n"); );
    VUInt2Bundle* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VUInt2Bundle::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUInt2Bundle::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG

void VUInt2Bundle::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUInt2Bundle::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    UInt2Bundle__DOT__value = VL_RAND_RESET_I(1);
    UInt2Bundle__DOT___T_2 = VL_RAND_RESET_I(1);
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
