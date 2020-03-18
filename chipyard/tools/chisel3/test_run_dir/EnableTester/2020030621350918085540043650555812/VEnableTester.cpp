// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VEnableTester.h for the primary calling header

#include "VEnableTester.h"     // For This
#include "VEnableTester__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VEnableTester) {
    VEnableTester__Syms* __restrict vlSymsp = __VlSymsp = new VEnableTester__Syms(this, name());
    VEnableTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VEnableTester::__Vconfigure(VEnableTester__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VEnableTester::~VEnableTester() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VEnableTester::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VEnableTester::eval\n"); );
    VEnableTester__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VEnableTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VEnableTester::_eval_initial_loop(VEnableTester__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VEnableTester::_sequent__TOP__1(VEnableTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEnableTester::_sequent__TOP__1\n"); );
    VEnableTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnableTester/2020030621350918085540043650555812/EnableTester.v:73
    vlTOPp->EnableTester__DOT__ens = ((IData)(vlTOPp->reset)
				       ? 0x16197494U
				       : vlTOPp->EnableTester__DOT___T);
    if (vlTOPp->reset) {
	vlTOPp->EnableTester__DOT__value = 0U;
    } else {
	if (vlTOPp->EnableTester__DOT___T_1) {
	    vlTOPp->EnableTester__DOT__value = vlTOPp->EnableTester__DOT___T_4;
	}
    }
    vlTOPp->EnableTester__DOT__value_1 = ((IData)(vlTOPp->reset)
					   ? 0U : ((IData)(vlTOPp->EnableTester__DOT__done)
						    ? 0U
						    : (IData)(vlTOPp->EnableTester__DOT___T_8)));
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->EnableTester__DOT__done) 
			 & (~ (IData)(vlTOPp->EnableTester__DOT___T_11))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Counter.scala:25 assert(cntEnVal === popCount(seed).asUInt)\n");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->EnableTester__DOT__done) 
			 & (~ (IData)(vlTOPp->EnableTester__DOT___T_11))))) {
	    VL_WRITEF("[%0t] %%Error: EnableTester.v:111: Assertion failed in %NEnableTester\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnableTester/2020030621350918085540043650555812/EnableTester.v",111,"");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->EnableTester__DOT__done) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FINISH_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnableTester/2020030621350918085540043650555812/EnableTester.v",122,"");
	}
    }
    vlTOPp->EnableTester__DOT___T = (0xfffffffU & (vlTOPp->EnableTester__DOT__ens 
						   >> 1U));
    vlTOPp->EnableTester__DOT___T_1 = (1U & vlTOPp->EnableTester__DOT__ens);
    vlTOPp->EnableTester__DOT__done = (0x20U == (IData)(vlTOPp->EnableTester__DOT__value_1));
    vlTOPp->EnableTester__DOT___T_8 = (0x3fU & ((IData)(1U) 
						+ (IData)(vlTOPp->EnableTester__DOT__value_1)));
    vlTOPp->EnableTester__DOT___T_4 = (0x1fU & ((IData)(1U) 
						+ (IData)(vlTOPp->EnableTester__DOT__value)));
}

void VEnableTester::_settle__TOP__2(VEnableTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEnableTester::_settle__TOP__2\n"); );
    VEnableTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->EnableTester__DOT___T = (0xfffffffU & (vlTOPp->EnableTester__DOT__ens 
						   >> 1U));
    vlTOPp->EnableTester__DOT___T_1 = (1U & vlTOPp->EnableTester__DOT__ens);
    vlTOPp->EnableTester__DOT___T_4 = (0x1fU & ((IData)(1U) 
						+ (IData)(vlTOPp->EnableTester__DOT__value)));
    vlTOPp->EnableTester__DOT__done = (0x20U == (IData)(vlTOPp->EnableTester__DOT__value_1));
    vlTOPp->EnableTester__DOT___T_8 = (0x3fU & ((IData)(1U) 
						+ (IData)(vlTOPp->EnableTester__DOT__value_1)));
    vlTOPp->EnableTester__DOT___T_11 = ((0xdU == (IData)(vlTOPp->EnableTester__DOT__value)) 
					| (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VEnableTester::_combo__TOP__3(VEnableTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEnableTester::_combo__TOP__3\n"); );
    VEnableTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->EnableTester__DOT___T_11 = ((0xdU == (IData)(vlTOPp->EnableTester__DOT__value)) 
					| (IData)(vlTOPp->reset));
}

void VEnableTester::_eval(VEnableTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEnableTester::_eval\n"); );
    VEnableTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__3(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VEnableTester::_eval_initial(VEnableTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEnableTester::_eval_initial\n"); );
    VEnableTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VEnableTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEnableTester::final\n"); );
    // Variables
    VEnableTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VEnableTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VEnableTester::_eval_settle(VEnableTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEnableTester::_eval_settle\n"); );
    VEnableTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

VL_INLINE_OPT QData VEnableTester::_change_request(VEnableTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEnableTester::_change_request\n"); );
    VEnableTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VEnableTester::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEnableTester::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG

void VEnableTester::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEnableTester::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    EnableTester__DOT__ens = VL_RAND_RESET_I(29);
    EnableTester__DOT___T = VL_RAND_RESET_I(28);
    EnableTester__DOT___T_1 = VL_RAND_RESET_I(1);
    EnableTester__DOT__value = VL_RAND_RESET_I(5);
    EnableTester__DOT___T_4 = VL_RAND_RESET_I(5);
    EnableTester__DOT__value_1 = VL_RAND_RESET_I(6);
    EnableTester__DOT__done = VL_RAND_RESET_I(1);
    EnableTester__DOT___T_8 = VL_RAND_RESET_I(6);
    EnableTester__DOT___T_11 = VL_RAND_RESET_I(1);
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
