// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See V_1.h for the primary calling header

#include "V_1.h"               // For This
#include "V_1__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(V_1) {
    V_1__Syms* __restrict vlSymsp = __VlSymsp = new V_1__Syms(this, name());
    V_1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void V_1::__Vconfigure(V_1__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

V_1::~V_1() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void V_1::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate V_1::eval\n"); );
    V_1__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    V_1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void V_1::_eval_initial_loop(V_1__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void V_1::_sequent__TOP__1(V_1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    V_1::_sequent__TOP__1\n"); );
    V_1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly___1__DOT__value,0,0);
    // Body
    __Vdly___1__DOT__value = vlTOPp->_1__DOT__value;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/_1/202003062134349005052709556895381/_1.v:47
    __Vdly___1__DOT__value = ((~ (IData)(vlTOPp->reset)) 
			      & (IData)(vlTOPp->_1__DOT___T_5));
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->_1__DOT__value) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FINISH_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/_1/202003062134349005052709556895381/_1.v",58,"");
	}
    }
    vlTOPp->_1__DOT__value = __Vdly___1__DOT__value;
    vlTOPp->_1__DOT___T_5 = (1U & ((IData)(1U) + (IData)(vlTOPp->_1__DOT__value)));
}

void V_1::_settle__TOP__2(V_1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    V_1::_settle__TOP__2\n"); );
    V_1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_1__DOT___T_5 = (1U & ((IData)(1U) + (IData)(vlTOPp->_1__DOT__value)));
}

void V_1::_eval(V_1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    V_1::_eval\n"); );
    V_1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void V_1::_eval_initial(V_1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    V_1::_eval_initial\n"); );
    V_1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void V_1::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    V_1::final\n"); );
    // Variables
    V_1__Syms* __restrict vlSymsp = this->__VlSymsp;
    V_1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void V_1::_eval_settle(V_1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    V_1::_eval_settle\n"); );
    V_1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

VL_INLINE_OPT QData V_1::_change_request(V_1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    V_1::_change_request\n"); );
    V_1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void V_1::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    V_1::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG

void V_1::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    V_1::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    _1__DOT__value = VL_RAND_RESET_I(1);
    _1__DOT___T_5 = VL_RAND_RESET_I(1);
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
