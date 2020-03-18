// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUInt2VecOfBool.h for the primary calling header

#include "VUInt2VecOfBool.h"   // For This
#include "VUInt2VecOfBool__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VUInt2VecOfBool) {
    VUInt2VecOfBool__Syms* __restrict vlSymsp = __VlSymsp = new VUInt2VecOfBool__Syms(this, name());
    VUInt2VecOfBool* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VUInt2VecOfBool::__Vconfigure(VUInt2VecOfBool__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VUInt2VecOfBool::~VUInt2VecOfBool() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VUInt2VecOfBool::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VUInt2VecOfBool::eval\n"); );
    VUInt2VecOfBool__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VUInt2VecOfBool* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VUInt2VecOfBool::_eval_initial_loop(VUInt2VecOfBool__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VUInt2VecOfBool::_sequent__TOP__1(VUInt2VecOfBool__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUInt2VecOfBool::_sequent__TOP__1\n"); );
    VUInt2VecOfBool* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__UInt2VecOfBool__DOT__value,0,0);
    // Body
    __Vdly__UInt2VecOfBool__DOT__value = vlTOPp->UInt2VecOfBool__DOT__value;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/UInt2VecOfBool/202003062137136939446939340098143/UInt2VecOfBool.v:47
    __Vdly__UInt2VecOfBool__DOT__value = ((~ (IData)(vlTOPp->reset)) 
					  & (IData)(vlTOPp->UInt2VecOfBool__DOT___T_2));
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->UInt2VecOfBool__DOT__value) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FINISH_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/UInt2VecOfBool/202003062137136939446939340098143/UInt2VecOfBool.v",58,"");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->reset))))) {
	    VL_FWRITEF(0x80000002U,"Vec(0, 0, 1, 1)");
	}
    }
    vlTOPp->UInt2VecOfBool__DOT__value = __Vdly__UInt2VecOfBool__DOT__value;
    vlTOPp->UInt2VecOfBool__DOT___T_2 = (1U & ((IData)(1U) 
					       + (IData)(vlTOPp->UInt2VecOfBool__DOT__value)));
}

void VUInt2VecOfBool::_settle__TOP__2(VUInt2VecOfBool__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUInt2VecOfBool::_settle__TOP__2\n"); );
    VUInt2VecOfBool* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->UInt2VecOfBool__DOT___T_2 = (1U & ((IData)(1U) 
					       + (IData)(vlTOPp->UInt2VecOfBool__DOT__value)));
}

void VUInt2VecOfBool::_eval(VUInt2VecOfBool__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUInt2VecOfBool::_eval\n"); );
    VUInt2VecOfBool* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VUInt2VecOfBool::_eval_initial(VUInt2VecOfBool__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUInt2VecOfBool::_eval_initial\n"); );
    VUInt2VecOfBool* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VUInt2VecOfBool::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUInt2VecOfBool::final\n"); );
    // Variables
    VUInt2VecOfBool__Syms* __restrict vlSymsp = this->__VlSymsp;
    VUInt2VecOfBool* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VUInt2VecOfBool::_eval_settle(VUInt2VecOfBool__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUInt2VecOfBool::_eval_settle\n"); );
    VUInt2VecOfBool* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

VL_INLINE_OPT QData VUInt2VecOfBool::_change_request(VUInt2VecOfBool__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUInt2VecOfBool::_change_request\n"); );
    VUInt2VecOfBool* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VUInt2VecOfBool::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUInt2VecOfBool::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG

void VUInt2VecOfBool::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUInt2VecOfBool::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    UInt2VecOfBool__DOT__value = VL_RAND_RESET_I(1);
    UInt2VecOfBool__DOT___T_2 = VL_RAND_RESET_I(1);
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
