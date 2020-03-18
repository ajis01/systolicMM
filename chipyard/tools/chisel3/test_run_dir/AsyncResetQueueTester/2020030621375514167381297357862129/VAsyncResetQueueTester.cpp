// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAsyncResetQueueTester.h for the primary calling header

#include "VAsyncResetQueueTester.h" // For This
#include "VAsyncResetQueueTester__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VAsyncResetQueueTester) {
    VAsyncResetQueueTester__Syms* __restrict vlSymsp = __VlSymsp = new VAsyncResetQueueTester__Syms(this, name());
    VAsyncResetQueueTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VAsyncResetQueueTester::__Vconfigure(VAsyncResetQueueTester__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VAsyncResetQueueTester::~VAsyncResetQueueTester() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VAsyncResetQueueTester::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VAsyncResetQueueTester::eval\n"); );
    VAsyncResetQueueTester__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VAsyncResetQueueTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VAsyncResetQueueTester::_eval_initial_loop(VAsyncResetQueueTester__Syms* __restrict vlSymsp) {
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

void VAsyncResetQueueTester::_initial__TOP__1(VAsyncResetQueueTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetQueueTester::_initial__TOP__1\n"); );
    VAsyncResetQueueTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetQueueTester/2020030621375514167381297357862129/AsyncResetQueueTester.v:47
    if (vlTOPp->AsyncResetQueueTester__DOT__asyncResetNext) {
	vlTOPp->AsyncResetQueueTester__DOT__queue__DOT__value = 0U;
    }
    if (vlTOPp->AsyncResetQueueTester__DOT__asyncResetNext) {
	vlTOPp->AsyncResetQueueTester__DOT__queue__DOT__value_1 = 0U;
    }
    if (vlTOPp->AsyncResetQueueTester__DOT__asyncResetNext) {
	vlTOPp->AsyncResetQueueTester__DOT__queue__DOT___T_1 = 0U;
    }
}

VL_INLINE_OPT void VAsyncResetQueueTester::_combo__TOP__2(VAsyncResetQueueTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetQueueTester::_combo__TOP__2\n"); );
    VAsyncResetQueueTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AsyncResetQueueTester__DOT__queue_clock 
	= (3U == (IData)(vlTOPp->AsyncResetQueueTester__DOT__value));
}

void VAsyncResetQueueTester::_settle__TOP__3(VAsyncResetQueueTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetQueueTester::_settle__TOP__3\n"); );
    VAsyncResetQueueTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AsyncResetQueueTester__DOT__queue_clock 
	= (3U == (IData)(vlTOPp->AsyncResetQueueTester__DOT__value));
    vlTOPp->AsyncResetQueueTester__DOT___T_2 = (3U 
						& ((IData)(1U) 
						   + (IData)(vlTOPp->AsyncResetQueueTester__DOT__value)));
    vlTOPp->AsyncResetQueueTester__DOT__done = (0xfU 
						== (IData)(vlTOPp->AsyncResetQueueTester__DOT__value_1));
    vlTOPp->AsyncResetQueueTester__DOT___T_5 = (0xfU 
						& ((IData)(1U) 
						   + (IData)(vlTOPp->AsyncResetQueueTester__DOT__value_1)));
    vlTOPp->AsyncResetQueueTester__DOT__queue__DOT___T_2 
	= ((IData)(vlTOPp->AsyncResetQueueTester__DOT__queue__DOT__value) 
	   == (IData)(vlTOPp->AsyncResetQueueTester__DOT__queue__DOT__value_1));
    vlTOPp->AsyncResetQueueTester__DOT__queue__DOT___T_12 
	= (3U & ((IData)(1U) + (IData)(vlTOPp->AsyncResetQueueTester__DOT__queue__DOT__value)));
    vlTOPp->AsyncResetQueueTester__DOT__queue__DOT___T_5 
	= ((IData)(vlTOPp->AsyncResetQueueTester__DOT__queue__DOT___T_2) 
	   & (IData)(vlTOPp->AsyncResetQueueTester__DOT__queue__DOT___T_1));
    vlTOPp->AsyncResetQueueTester__DOT__queue_io_count 
	= ((((IData)(vlTOPp->AsyncResetQueueTester__DOT__queue__DOT___T_1) 
	     & (IData)(vlTOPp->AsyncResetQueueTester__DOT__queue__DOT___T_2))
	     ? 4U : 0U) | (3U & ((IData)(vlTOPp->AsyncResetQueueTester__DOT__queue__DOT__value) 
				 - (IData)(vlTOPp->AsyncResetQueueTester__DOT__queue__DOT__value_1))));
}

VL_INLINE_OPT void VAsyncResetQueueTester::_sequent__TOP__4(VAsyncResetQueueTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetQueueTester::_sequent__TOP__4\n"); );
    VAsyncResetQueueTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__AsyncResetQueueTester__DOT__doCheck 
	= vlTOPp->AsyncResetQueueTester__DOT__doCheck;
}

VL_INLINE_OPT void VAsyncResetQueueTester::_sequent__TOP__5(VAsyncResetQueueTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetQueueTester::_sequent__TOP__5\n"); );
    VAsyncResetQueueTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetQueueTester/2020030621375514167381297357862129/AsyncResetQueueTester.v:96
    if (vlTOPp->AsyncResetQueueTester__DOT__asyncResetNext) {
	vlTOPp->AsyncResetQueueTester__DOT__queue__DOT___T_1 = 0U;
    } else {
	if ((1U & (~ (IData)(vlTOPp->AsyncResetQueueTester__DOT__queue__DOT___T_5)))) {
	    vlTOPp->AsyncResetQueueTester__DOT__queue__DOT___T_1 
		= (1U & (~ (IData)(vlTOPp->AsyncResetQueueTester__DOT__queue__DOT___T_5)));
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetQueueTester/2020030621375514167381297357862129/AsyncResetQueueTester.v:91
    if (vlTOPp->AsyncResetQueueTester__DOT__asyncResetNext) {
	vlTOPp->AsyncResetQueueTester__DOT__queue__DOT__value_1 = 0U;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetQueueTester/2020030621375514167381297357862129/AsyncResetQueueTester.v:82
    if (vlTOPp->AsyncResetQueueTester__DOT__asyncResetNext) {
	vlTOPp->AsyncResetQueueTester__DOT__queue__DOT__value = 0U;
    } else {
	if ((1U & (~ (IData)(vlTOPp->AsyncResetQueueTester__DOT__queue__DOT___T_5)))) {
	    vlTOPp->AsyncResetQueueTester__DOT__queue__DOT__value 
		= vlTOPp->AsyncResetQueueTester__DOT__queue__DOT___T_12;
	}
    }
    vlTOPp->AsyncResetQueueTester__DOT__queue__DOT___T_12 
	= (3U & ((IData)(1U) + (IData)(vlTOPp->AsyncResetQueueTester__DOT__queue__DOT__value)));
    vlTOPp->AsyncResetQueueTester__DOT__queue__DOT___T_2 
	= ((IData)(vlTOPp->AsyncResetQueueTester__DOT__queue__DOT__value) 
	   == (IData)(vlTOPp->AsyncResetQueueTester__DOT__queue__DOT__value_1));
    vlTOPp->AsyncResetQueueTester__DOT__queue__DOT___T_5 
	= ((IData)(vlTOPp->AsyncResetQueueTester__DOT__queue__DOT___T_2) 
	   & (IData)(vlTOPp->AsyncResetQueueTester__DOT__queue__DOT___T_1));
}

VL_INLINE_OPT void VAsyncResetQueueTester::_sequent__TOP__6(VAsyncResetQueueTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetQueueTester::_sequent__TOP__6\n"); );
    VAsyncResetQueueTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetQueueTester/2020030621375514167381297357862129/AsyncResetQueueTester.v:196
    vlTOPp->AsyncResetQueueTester__DOT__value = ((IData)(vlTOPp->reset)
						  ? 0U
						  : (IData)(vlTOPp->AsyncResetQueueTester__DOT___T_2));
    vlTOPp->AsyncResetQueueTester__DOT__value_1 = ((IData)(vlTOPp->reset)
						    ? 0U
						    : (IData)(vlTOPp->AsyncResetQueueTester__DOT___T_5));
    vlTOPp->AsyncResetQueueTester__DOT__asyncResetNext 
	= ((~ (IData)(vlTOPp->reset)) & (3U == (IData)(vlTOPp->AsyncResetQueueTester__DOT__queue_io_count)));
    vlTOPp->__Vdly__AsyncResetQueueTester__DOT__doCheck 
	= ((~ (IData)(vlTOPp->reset)) & (3U == (IData)(vlTOPp->AsyncResetQueueTester__DOT__queue_io_count)));
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->AsyncResetQueueTester__DOT__doCheck) 
			 & (~ ((0U == (IData)(vlTOPp->AsyncResetQueueTester__DOT__queue_io_count)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at AsyncResetSpec.scala:114 assert(queue.io.count === 0.U)\n");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->AsyncResetQueueTester__DOT__doCheck) 
			 & (~ ((0U == (IData)(vlTOPp->AsyncResetQueueTester__DOT__queue_io_count)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: AsyncResetQueueTester.v:233: Assertion failed in %NAsyncResetQueueTester\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetQueueTester/2020030621375514167381297357862129/AsyncResetQueueTester.v",233,"");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->AsyncResetQueueTester__DOT__done) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FINISH_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetQueueTester/2020030621375514167381297357862129/AsyncResetQueueTester.v",244,"");
	}
    }
    vlTOPp->AsyncResetQueueTester__DOT__doCheck = vlTOPp->__Vdly__AsyncResetQueueTester__DOT__doCheck;
    vlTOPp->AsyncResetQueueTester__DOT__done = (0xfU 
						== (IData)(vlTOPp->AsyncResetQueueTester__DOT__value_1));
    vlTOPp->AsyncResetQueueTester__DOT___T_5 = (0xfU 
						& ((IData)(1U) 
						   + (IData)(vlTOPp->AsyncResetQueueTester__DOT__value_1)));
}

VL_INLINE_OPT void VAsyncResetQueueTester::_combo__TOP__7(VAsyncResetQueueTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetQueueTester::_combo__TOP__7\n"); );
    VAsyncResetQueueTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AsyncResetQueueTester__DOT___T_2 = (3U 
						& ((IData)(1U) 
						   + (IData)(vlTOPp->AsyncResetQueueTester__DOT__value)));
}

VL_INLINE_OPT void VAsyncResetQueueTester::_sequent__TOP__8(VAsyncResetQueueTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetQueueTester::_sequent__TOP__8\n"); );
    VAsyncResetQueueTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AsyncResetQueueTester__DOT__queue_io_count 
	= ((((IData)(vlTOPp->AsyncResetQueueTester__DOT__queue__DOT___T_1) 
	     & (IData)(vlTOPp->AsyncResetQueueTester__DOT__queue__DOT___T_2))
	     ? 4U : 0U) | (3U & ((IData)(vlTOPp->AsyncResetQueueTester__DOT__queue__DOT__value) 
				 - (IData)(vlTOPp->AsyncResetQueueTester__DOT__queue__DOT__value_1))));
}

void VAsyncResetQueueTester::_eval(VAsyncResetQueueTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetQueueTester::_eval\n"); );
    VAsyncResetQueueTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__4(vlSymsp);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__AsyncResetQueueTester__DOT__asyncResetNext) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__AsyncResetQueueTester__DOT__asyncResetNext))) 
	 | ((IData)(vlTOPp->AsyncResetQueueTester__DOT__queue_clock) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP__AsyncResetQueueTester__DOT__queue_clock))))) {
	vlTOPp->_sequent__TOP__5(vlSymsp);
	vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__6(vlSymsp);
	vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__7(vlSymsp);
    if ((((IData)(vlTOPp->__VinpClk__TOP__AsyncResetQueueTester__DOT__asyncResetNext) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__AsyncResetQueueTester__DOT__asyncResetNext))) 
	 | ((IData)(vlTOPp->AsyncResetQueueTester__DOT__queue_clock) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP__AsyncResetQueueTester__DOT__queue_clock))))) {
	vlTOPp->_sequent__TOP__8(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x10U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__AsyncResetQueueTester__DOT__asyncResetNext 
	= vlTOPp->__VinpClk__TOP__AsyncResetQueueTester__DOT__asyncResetNext;
    vlTOPp->__Vclklast__TOP__AsyncResetQueueTester__DOT__queue_clock 
	= vlTOPp->AsyncResetQueueTester__DOT__queue_clock;
    vlTOPp->__VinpClk__TOP__AsyncResetQueueTester__DOT__asyncResetNext 
	= vlTOPp->AsyncResetQueueTester__DOT__asyncResetNext;
}

void VAsyncResetQueueTester::_eval_initial(VAsyncResetQueueTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetQueueTester::_eval_initial\n"); );
    VAsyncResetQueueTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void VAsyncResetQueueTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetQueueTester::final\n"); );
    // Variables
    VAsyncResetQueueTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VAsyncResetQueueTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VAsyncResetQueueTester::_eval_settle(VAsyncResetQueueTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetQueueTester::_eval_settle\n"); );
    VAsyncResetQueueTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

VL_INLINE_OPT QData VAsyncResetQueueTester::_change_request(VAsyncResetQueueTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetQueueTester::_change_request\n"); );
    VAsyncResetQueueTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlTOPp->AsyncResetQueueTester__DOT__value ^ vlTOPp->__Vchglast__TOP__AsyncResetQueueTester__DOT__value)
	 | (vlTOPp->AsyncResetQueueTester__DOT__asyncResetNext ^ vlTOPp->__Vchglast__TOP__AsyncResetQueueTester__DOT__asyncResetNext));
    VL_DEBUG_IF( if(__req && ((vlTOPp->AsyncResetQueueTester__DOT__value ^ vlTOPp->__Vchglast__TOP__AsyncResetQueueTester__DOT__value))) VL_DBG_MSGF("        CHANGE: /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetQueueTester/2020030621375514167381297357862129/AsyncResetQueueTester.v:114: AsyncResetQueueTester.value\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->AsyncResetQueueTester__DOT__asyncResetNext ^ vlTOPp->__Vchglast__TOP__AsyncResetQueueTester__DOT__asyncResetNext))) VL_DBG_MSGF("        CHANGE: /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetQueueTester/2020030621375514167381297357862129/AsyncResetQueueTester.v:122: AsyncResetQueueTester.asyncResetNext\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__AsyncResetQueueTester__DOT__value 
	= vlTOPp->AsyncResetQueueTester__DOT__value;
    vlTOPp->__Vchglast__TOP__AsyncResetQueueTester__DOT__asyncResetNext 
	= vlTOPp->AsyncResetQueueTester__DOT__asyncResetNext;
    return __req;
}

#ifdef VL_DEBUG
void VAsyncResetQueueTester::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetQueueTester::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG

void VAsyncResetQueueTester::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetQueueTester::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    AsyncResetQueueTester__DOT__queue_clock = VL_RAND_RESET_I(1);
    AsyncResetQueueTester__DOT__queue_io_count = VL_RAND_RESET_I(3);
    AsyncResetQueueTester__DOT__value = VL_RAND_RESET_I(2);
    AsyncResetQueueTester__DOT___T_2 = VL_RAND_RESET_I(2);
    AsyncResetQueueTester__DOT__value_1 = VL_RAND_RESET_I(4);
    AsyncResetQueueTester__DOT__done = VL_RAND_RESET_I(1);
    AsyncResetQueueTester__DOT___T_5 = VL_RAND_RESET_I(4);
    AsyncResetQueueTester__DOT__asyncResetNext = VL_RAND_RESET_I(1);
    AsyncResetQueueTester__DOT__doCheck = VL_RAND_RESET_I(1);
    AsyncResetQueueTester__DOT__queue__DOT__value = VL_RAND_RESET_I(2);
    AsyncResetQueueTester__DOT__queue__DOT__value_1 = VL_RAND_RESET_I(2);
    AsyncResetQueueTester__DOT__queue__DOT___T_1 = VL_RAND_RESET_I(1);
    AsyncResetQueueTester__DOT__queue__DOT___T_2 = VL_RAND_RESET_I(1);
    AsyncResetQueueTester__DOT__queue__DOT___T_5 = VL_RAND_RESET_I(1);
    AsyncResetQueueTester__DOT__queue__DOT___T_12 = VL_RAND_RESET_I(2);
    __Vdly__AsyncResetQueueTester__DOT__doCheck = VL_RAND_RESET_I(1);
    __VinpClk__TOP__AsyncResetQueueTester__DOT__asyncResetNext = VL_RAND_RESET_I(1);
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
    __Vclklast__TOP____VinpClk__TOP__AsyncResetQueueTester__DOT__asyncResetNext = VL_RAND_RESET_I(1);
    __Vclklast__TOP__AsyncResetQueueTester__DOT__queue_clock = VL_RAND_RESET_I(1);
    __Vchglast__TOP__AsyncResetQueueTester__DOT__value = VL_RAND_RESET_I(2);
    __Vchglast__TOP__AsyncResetQueueTester__DOT__asyncResetNext = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
