// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAsyncResetTester.h for the primary calling header

#include "VAsyncResetTester.h" // For This
#include "VAsyncResetTester__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VAsyncResetTester) {
    VAsyncResetTester__Syms* __restrict vlSymsp = __VlSymsp = new VAsyncResetTester__Syms(this, name());
    VAsyncResetTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VAsyncResetTester::__Vconfigure(VAsyncResetTester__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VAsyncResetTester::~VAsyncResetTester() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VAsyncResetTester::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VAsyncResetTester::eval\n"); );
    VAsyncResetTester__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VAsyncResetTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VAsyncResetTester::_eval_initial_loop(VAsyncResetTester__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VAsyncResetTester::_sequent__TOP__1(VAsyncResetTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetTester::_sequent__TOP__1\n"); );
    VAsyncResetTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__AsyncResetTester__DOT__asyncResetNext 
	= vlTOPp->AsyncResetTester__DOT__asyncResetNext;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetTester/202003062137417656485092151896722/AsyncResetTester.v:106
    vlTOPp->AsyncResetTester__DOT__value = ((IData)(vlTOPp->reset)
					     ? 0U : (IData)(vlTOPp->AsyncResetTester__DOT___T_2));
    vlTOPp->AsyncResetTester__DOT__value_1 = ((IData)(vlTOPp->reset)
					       ? 0U
					       : (IData)(vlTOPp->AsyncResetTester__DOT___T_5));
    vlTOPp->__Vdly__AsyncResetTester__DOT__asyncResetNext 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->AsyncResetTester__DOT___T_6));
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->AsyncResetTester__DOT___T_7) 
			 & (~ ((5U == (IData)(vlTOPp->AsyncResetTester__DOT__reg_)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at AsyncResetSpec.scala:27 assert(reg === 5.U)\n");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->AsyncResetTester__DOT___T_7) 
			 & (~ ((5U == (IData)(vlTOPp->AsyncResetTester__DOT__reg_)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: AsyncResetTester.v:138: Assertion failed in %NAsyncResetTester\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetTester/202003062137417656485092151896722/AsyncResetTester.v",138,"");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->AsyncResetTester__DOT___T_14) 
			 & (~ ((0x7bU == (IData)(vlTOPp->AsyncResetTester__DOT__reg_)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at AsyncResetSpec.scala:30 assert(reg === 123.U)\n");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->AsyncResetTester__DOT___T_14) 
			 & (~ ((0x7bU == (IData)(vlTOPp->AsyncResetTester__DOT__reg_)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: AsyncResetTester.v:160: Assertion failed in %NAsyncResetTester\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetTester/202003062137417656485092151896722/AsyncResetTester.v",160,"");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->AsyncResetTester__DOT___GEN_3) 
			 & (~ ((5U == (IData)(vlTOPp->AsyncResetTester__DOT__reg_)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at AsyncResetSpec.scala:32 assert(reg === 5.U)\n");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->AsyncResetTester__DOT___GEN_3) 
			 & (~ ((5U == (IData)(vlTOPp->AsyncResetTester__DOT__reg_)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: AsyncResetTester.v:182: Assertion failed in %NAsyncResetTester\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetTester/202003062137417656485092151896722/AsyncResetTester.v",182,"");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->AsyncResetTester__DOT__done) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FINISH_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetTester/202003062137417656485092151896722/AsyncResetTester.v",193,"");
	}
    }
    vlTOPp->AsyncResetTester__DOT__done = (0xfU == (IData)(vlTOPp->AsyncResetTester__DOT__value_1));
    vlTOPp->AsyncResetTester__DOT___T_5 = (0xfU & ((IData)(1U) 
						   + (IData)(vlTOPp->AsyncResetTester__DOT__value_1)));
    vlTOPp->AsyncResetTester__DOT___T_6 = (4U == (IData)(vlTOPp->AsyncResetTester__DOT__value_1));
    vlTOPp->AsyncResetTester__DOT___T_7 = (3U == (IData)(vlTOPp->AsyncResetTester__DOT__value_1));
    vlTOPp->AsyncResetTester__DOT___T_14 = ((5U <= (IData)(vlTOPp->AsyncResetTester__DOT__value_1)) 
					    & (7U > (IData)(vlTOPp->AsyncResetTester__DOT__value_1)));
    vlTOPp->AsyncResetTester__DOT___T_2 = (3U & ((IData)(1U) 
						 + (IData)(vlTOPp->AsyncResetTester__DOT__value)));
    vlTOPp->AsyncResetTester__DOT__slowClk = (3U == (IData)(vlTOPp->AsyncResetTester__DOT__value));
    vlTOPp->AsyncResetTester__DOT___GEN_3 = ((~ (IData)(vlTOPp->AsyncResetTester__DOT___T_14)) 
					     & (7U 
						<= (IData)(vlTOPp->AsyncResetTester__DOT__value_1)));
}

void VAsyncResetTester::_initial__TOP__2(VAsyncResetTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetTester::_initial__TOP__2\n"); );
    VAsyncResetTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetTester/202003062137417656485092151896722/AsyncResetTester.v:73
    if (vlTOPp->AsyncResetTester__DOT__asyncResetNext) {
	vlTOPp->AsyncResetTester__DOT__reg_ = 0x7bU;
    }
}

void VAsyncResetTester::_settle__TOP__3(VAsyncResetTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetTester::_settle__TOP__3\n"); );
    VAsyncResetTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AsyncResetTester__DOT___T_2 = (3U & ((IData)(1U) 
						 + (IData)(vlTOPp->AsyncResetTester__DOT__value)));
    vlTOPp->AsyncResetTester__DOT__done = (0xfU == (IData)(vlTOPp->AsyncResetTester__DOT__value_1));
    vlTOPp->AsyncResetTester__DOT___T_5 = (0xfU & ((IData)(1U) 
						   + (IData)(vlTOPp->AsyncResetTester__DOT__value_1)));
    vlTOPp->AsyncResetTester__DOT___T_6 = (4U == (IData)(vlTOPp->AsyncResetTester__DOT__value_1));
    vlTOPp->AsyncResetTester__DOT___T_7 = (3U == (IData)(vlTOPp->AsyncResetTester__DOT__value_1));
    vlTOPp->AsyncResetTester__DOT___T_14 = ((5U <= (IData)(vlTOPp->AsyncResetTester__DOT__value_1)) 
					    & (7U > (IData)(vlTOPp->AsyncResetTester__DOT__value_1)));
    vlTOPp->AsyncResetTester__DOT__slowClk = (3U == (IData)(vlTOPp->AsyncResetTester__DOT__value));
    vlTOPp->AsyncResetTester__DOT___GEN_3 = ((~ (IData)(vlTOPp->AsyncResetTester__DOT___T_14)) 
					     & (7U 
						<= (IData)(vlTOPp->AsyncResetTester__DOT__value_1)));
}

VL_INLINE_OPT void VAsyncResetTester::_sequent__TOP__4(VAsyncResetTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetTester::_sequent__TOP__4\n"); );
    VAsyncResetTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetTester/202003062137417656485092151896722/AsyncResetTester.v:200
    vlTOPp->AsyncResetTester__DOT__reg_ = ((IData)(vlTOPp->AsyncResetTester__DOT__asyncResetNext)
					    ? 0x7bU
					    : 5U);
}

VL_INLINE_OPT void VAsyncResetTester::_sequent__TOP__5(VAsyncResetTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetTester::_sequent__TOP__5\n"); );
    VAsyncResetTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AsyncResetTester__DOT__asyncResetNext = vlTOPp->__Vdly__AsyncResetTester__DOT__asyncResetNext;
}

void VAsyncResetTester::_eval(VAsyncResetTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetTester::_eval\n"); );
    VAsyncResetTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__AsyncResetTester__DOT__asyncResetNext) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__AsyncResetTester__DOT__asyncResetNext))) 
	 | ((IData)(vlTOPp->AsyncResetTester__DOT__slowClk) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP__AsyncResetTester__DOT__slowClk))))) {
	vlTOPp->_sequent__TOP__4(vlSymsp);
	vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__5(vlSymsp);
	vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__AsyncResetTester__DOT__asyncResetNext 
	= vlTOPp->__VinpClk__TOP__AsyncResetTester__DOT__asyncResetNext;
    vlTOPp->__Vclklast__TOP__AsyncResetTester__DOT__slowClk 
	= vlTOPp->AsyncResetTester__DOT__slowClk;
    vlTOPp->__VinpClk__TOP__AsyncResetTester__DOT__asyncResetNext 
	= vlTOPp->AsyncResetTester__DOT__asyncResetNext;
}

void VAsyncResetTester::_eval_initial(VAsyncResetTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetTester::_eval_initial\n"); );
    VAsyncResetTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void VAsyncResetTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetTester::final\n"); );
    // Variables
    VAsyncResetTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VAsyncResetTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VAsyncResetTester::_eval_settle(VAsyncResetTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetTester::_eval_settle\n"); );
    VAsyncResetTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

VL_INLINE_OPT QData VAsyncResetTester::_change_request(VAsyncResetTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetTester::_change_request\n"); );
    VAsyncResetTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlTOPp->AsyncResetTester__DOT__asyncResetNext ^ vlTOPp->__Vchglast__TOP__AsyncResetTester__DOT__asyncResetNext));
    VL_DEBUG_IF( if(__req && ((vlTOPp->AsyncResetTester__DOT__asyncResetNext ^ vlTOPp->__Vchglast__TOP__AsyncResetTester__DOT__asyncResetNext))) VL_DBG_MSGF("        CHANGE: /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetTester/202003062137417656485092151896722/AsyncResetTester.v:14: AsyncResetTester.asyncResetNext\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__AsyncResetTester__DOT__asyncResetNext 
	= vlTOPp->AsyncResetTester__DOT__asyncResetNext;
    return __req;
}

#ifdef VL_DEBUG
void VAsyncResetTester::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetTester::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG

void VAsyncResetTester::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetTester::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    AsyncResetTester__DOT__value = VL_RAND_RESET_I(2);
    AsyncResetTester__DOT___T_2 = VL_RAND_RESET_I(2);
    AsyncResetTester__DOT__slowClk = VL_RAND_RESET_I(1);
    AsyncResetTester__DOT__value_1 = VL_RAND_RESET_I(4);
    AsyncResetTester__DOT__done = VL_RAND_RESET_I(1);
    AsyncResetTester__DOT___T_5 = VL_RAND_RESET_I(4);
    AsyncResetTester__DOT__asyncResetNext = VL_RAND_RESET_I(1);
    AsyncResetTester__DOT___T_6 = VL_RAND_RESET_I(1);
    AsyncResetTester__DOT__reg_ = VL_RAND_RESET_I(8);
    AsyncResetTester__DOT___T_7 = VL_RAND_RESET_I(1);
    AsyncResetTester__DOT___T_14 = VL_RAND_RESET_I(1);
    AsyncResetTester__DOT___GEN_3 = VL_RAND_RESET_I(1);
    __Vdly__AsyncResetTester__DOT__asyncResetNext = VL_RAND_RESET_I(1);
    __VinpClk__TOP__AsyncResetTester__DOT__asyncResetNext = VL_RAND_RESET_I(1);
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
    __Vclklast__TOP____VinpClk__TOP__AsyncResetTester__DOT__asyncResetNext = VL_RAND_RESET_I(1);
    __Vclklast__TOP__AsyncResetTester__DOT__slowClk = VL_RAND_RESET_I(1);
    __Vchglast__TOP__AsyncResetTester__DOT__asyncResetNext = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
