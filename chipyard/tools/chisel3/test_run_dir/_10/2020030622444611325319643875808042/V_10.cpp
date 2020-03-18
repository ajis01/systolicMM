// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See V_10.h for the primary calling header

#include "V_10.h"              // For This
#include "V_10__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(V_10) {
    V_10__Syms* __restrict vlSymsp = __VlSymsp = new V_10__Syms(this, name());
    V_10* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void V_10::__Vconfigure(V_10__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

V_10::~V_10() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void V_10::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate V_10::eval\n"); );
    V_10__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    V_10* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void V_10::_eval_initial_loop(V_10__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void V_10::_sequent__TOP__1(V_10__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    V_10::_sequent__TOP__1\n"); );
    V_10* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/_10/2020030622444611325319643875808042/_10.v:49
    vlTOPp->_10__DOT__value = ((IData)(vlTOPp->reset)
			        ? 0U : (IData)(vlTOPp->_10__DOT___T_10));
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->_10__DOT__done) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FINISH_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/_10/2020030622444611325319643875808042/_10.v",60,"");
	}
    }
    vlTOPp->_10__DOT__done = (3U == (IData)(vlTOPp->_10__DOT__value));
    vlTOPp->_10__DOT___T_10 = (3U & ((IData)(1U) + (IData)(vlTOPp->_10__DOT__value)));
}

void V_10::_settle__TOP__2(V_10__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    V_10::_settle__TOP__2\n"); );
    V_10* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_10__DOT__done = (3U == (IData)(vlTOPp->_10__DOT__value));
    vlTOPp->_10__DOT___T_10 = (3U & ((IData)(1U) + (IData)(vlTOPp->_10__DOT__value)));
}

void V_10::_eval(V_10__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    V_10::_eval\n"); );
    V_10* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void V_10::_eval_initial(V_10__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    V_10::_eval_initial\n"); );
    V_10* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void V_10::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    V_10::final\n"); );
    // Variables
    V_10__Syms* __restrict vlSymsp = this->__VlSymsp;
    V_10* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void V_10::_eval_settle(V_10__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    V_10::_eval_settle\n"); );
    V_10* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

VL_INLINE_OPT QData V_10::_change_request(V_10__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    V_10::_change_request\n"); );
    V_10* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void V_10::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    V_10::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG

void V_10::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    V_10::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    _10__DOT__value = VL_RAND_RESET_I(2);
    _10__DOT__done = VL_RAND_RESET_I(1);
    _10__DOT___T_10 = VL_RAND_RESET_I(2);
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
