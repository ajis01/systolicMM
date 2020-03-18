// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See V_4.h for the primary calling header

#include "V_4.h"               // For This
#include "V_4__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(V_4) {
    V_4__Syms* __restrict vlSymsp = __VlSymsp = new V_4__Syms(this, name());
    V_4* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void V_4::__Vconfigure(V_4__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

V_4::~V_4() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void V_4::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate V_4::eval\n"); );
    V_4__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    V_4* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void V_4::_eval_initial_loop(V_4__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void V_4::_sequent__TOP__1(V_4__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    V_4::_sequent__TOP__1\n"); );
    V_4* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/_4/20200306224502740918316911041728/_4.v:7
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->reset))))) {
	    VL_FINISH_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/_4/20200306224502740918316911041728/_4.v",13,"");
	}
    }
}

void V_4::_eval(V_4__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    V_4::_eval\n"); );
    V_4* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void V_4::_eval_initial(V_4__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    V_4::_eval_initial\n"); );
    V_4* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void V_4::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    V_4::final\n"); );
    // Variables
    V_4__Syms* __restrict vlSymsp = this->__VlSymsp;
    V_4* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void V_4::_eval_settle(V_4__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    V_4::_eval_settle\n"); );
    V_4* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

VL_INLINE_OPT QData V_4::_change_request(V_4__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    V_4::_change_request\n"); );
    V_4* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void V_4::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    V_4::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG

void V_4::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    V_4::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
