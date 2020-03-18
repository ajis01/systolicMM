// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRecordQueueTester.h for the primary calling header

#include "VRecordQueueTester.h" // For This
#include "VRecordQueueTester__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VRecordQueueTester) {
    VRecordQueueTester__Syms* __restrict vlSymsp = __VlSymsp = new VRecordQueueTester__Syms(this, name());
    VRecordQueueTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VRecordQueueTester::__Vconfigure(VRecordQueueTester__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VRecordQueueTester::~VRecordQueueTester() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VRecordQueueTester::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VRecordQueueTester::eval\n"); );
    VRecordQueueTester__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VRecordQueueTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VRecordQueueTester::_eval_initial_loop(VRecordQueueTester__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VRecordQueueTester::_sequent__TOP__1(VRecordQueueTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRecordQueueTester::_sequent__TOP__1\n"); );
    VRecordQueueTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdlyvdim0__RecordQueueTester__DOT__queue__DOT___T_4_bar__v0,1,0);
    VL_SIG8(__Vdlyvset__RecordQueueTester__DOT__queue__DOT___T_4_bar__v0,0,0);
    VL_SIG8(__Vdlyvdim0__RecordQueueTester__DOT__queue__DOT___T_4_foo__v0,1,0);
    VL_SIG8(__Vdlyvset__RecordQueueTester__DOT__queue__DOT___T_4_foo__v0,0,0);
    // Body
    __Vdlyvset__RecordQueueTester__DOT__queue__DOT___T_4_bar__v0 = 0U;
    __Vdlyvset__RecordQueueTester__DOT__queue__DOT___T_4_foo__v0 = 0U;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/RecordQueueTester/202003062136164367938248267532133/RecordQueueTester.v:119
    if (vlTOPp->reset) {
	vlTOPp->RecordQueueTester__DOT__queue__DOT___T_5 = 0U;
    } else {
	if (((IData)(vlTOPp->RecordQueueTester__DOT__queue__DOT___T_10) 
	     != (1U & (~ (IData)(vlTOPp->RecordQueueTester__DOT__queue__DOT___T_8))))) {
	    vlTOPp->RecordQueueTester__DOT__queue__DOT___T_5 
		= vlTOPp->RecordQueueTester__DOT__queue__DOT___T_10;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/RecordQueueTester/202003062136164367938248267532133/RecordQueueTester.v:119
    if (((~ (IData)(vlTOPp->RecordQueueTester__DOT__queue__DOT___T_9)) 
	 & (0U == (IData)(vlTOPp->RecordQueueTester__DOT__value)))) {
	__Vdlyvset__RecordQueueTester__DOT__queue__DOT___T_4_bar__v0 = 1U;
	__Vdlyvdim0__RecordQueueTester__DOT__queue__DOT___T_4_bar__v0 
	    = vlTOPp->RecordQueueTester__DOT__queue__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/RecordQueueTester/202003062136164367938248267532133/RecordQueueTester.v:119
    if (((~ (IData)(vlTOPp->RecordQueueTester__DOT__queue__DOT___T_9)) 
	 & (0U == (IData)(vlTOPp->RecordQueueTester__DOT__value)))) {
	__Vdlyvset__RecordQueueTester__DOT__queue__DOT___T_4_foo__v0 = 1U;
	__Vdlyvdim0__RecordQueueTester__DOT__queue__DOT___T_4_foo__v0 
	    = vlTOPp->RecordQueueTester__DOT__queue__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/RecordQueueTester/202003062136164367938248267532133/RecordQueueTester.v:119
    if (vlTOPp->reset) {
	vlTOPp->RecordQueueTester__DOT__queue__DOT__value = 0U;
    } else {
	if (vlTOPp->RecordQueueTester__DOT__queue__DOT___T_10) {
	    vlTOPp->RecordQueueTester__DOT__queue__DOT__value 
		= vlTOPp->RecordQueueTester__DOT__queue__DOT___T_18;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/RecordQueueTester/202003062136164367938248267532133/RecordQueueTester.v:235
    vlTOPp->RecordQueueTester__DOT__value = ((IData)(vlTOPp->reset)
					      ? 0U : (IData)(vlTOPp->RecordQueueTester__DOT___T_2));
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->RecordQueueTester__DOT___T_4) 
			 & (~ ((~ (IData)(vlTOPp->RecordQueueTester__DOT__queue__DOT___T_8)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at RecordSpec.scala:75 assert(queue.io.deq.valid === true.B)\n");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->RecordQueueTester__DOT___T_4) 
			 & (~ ((~ (IData)(vlTOPp->RecordQueueTester__DOT__queue__DOT___T_8)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: RecordQueueTester.v:257: Assertion failed in %NRecordQueueTester\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/RecordQueueTester/202003062136164367938248267532133/RecordQueueTester.v",257,"");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->RecordQueueTester__DOT___T_4) 
			 & (~ ((0x4d2U == vlTOPp->RecordQueueTester__DOT__queue__DOT___T_4_foo
				[vlTOPp->RecordQueueTester__DOT__queue__DOT__value_1]) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at RecordSpec.scala:76 assert(queue.io.deq.bits(\"foo\").asUInt === 1234.U)\n");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->RecordQueueTester__DOT___T_4) 
			 & (~ ((0x4d2U == vlTOPp->RecordQueueTester__DOT__queue__DOT___T_4_foo
				[vlTOPp->RecordQueueTester__DOT__queue__DOT__value_1]) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: RecordQueueTester.v:279: Assertion failed in %NRecordQueueTester\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/RecordQueueTester/202003062136164367938248267532133/RecordQueueTester.v",279,"");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->RecordQueueTester__DOT___T_4) 
			 & (~ ((0x162eU == vlTOPp->RecordQueueTester__DOT__queue__DOT___T_4_bar
				[vlTOPp->RecordQueueTester__DOT__queue__DOT__value_1]) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at RecordSpec.scala:77 assert(queue.io.deq.bits(\"bar\").asUInt === 5678.U)\n");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->RecordQueueTester__DOT___T_4) 
			 & (~ ((0x162eU == vlTOPp->RecordQueueTester__DOT__queue__DOT___T_4_bar
				[vlTOPp->RecordQueueTester__DOT__queue__DOT__value_1]) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: RecordQueueTester.v:301: Assertion failed in %NRecordQueueTester\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/RecordQueueTester/202003062136164367938248267532133/RecordQueueTester.v",301,"");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->RecordQueueTester__DOT__done) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FINISH_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/RecordQueueTester/202003062136164367938248267532133/RecordQueueTester.v",312,"");
	}
    }
    // ALWAYSPOST at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/RecordQueueTester/202003062136164367938248267532133/RecordQueueTester.v:123
    if (__Vdlyvset__RecordQueueTester__DOT__queue__DOT___T_4_foo__v0) {
	vlTOPp->RecordQueueTester__DOT__queue__DOT___T_4_foo[__Vdlyvdim0__RecordQueueTester__DOT__queue__DOT___T_4_foo__v0] = 0x4d2U;
    }
    // ALWAYSPOST at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/RecordQueueTester/202003062136164367938248267532133/RecordQueueTester.v:120
    if (__Vdlyvset__RecordQueueTester__DOT__queue__DOT___T_4_bar__v0) {
	vlTOPp->RecordQueueTester__DOT__queue__DOT___T_4_bar[__Vdlyvdim0__RecordQueueTester__DOT__queue__DOT___T_4_bar__v0] = 0x162eU;
    }
    vlTOPp->RecordQueueTester__DOT__queue__DOT___T_18 
	= (3U & ((IData)(1U) + (IData)(vlTOPp->RecordQueueTester__DOT__queue__DOT__value)));
    vlTOPp->RecordQueueTester__DOT__done = (3U == (IData)(vlTOPp->RecordQueueTester__DOT__value));
    vlTOPp->RecordQueueTester__DOT___T_2 = (3U & ((IData)(1U) 
						  + (IData)(vlTOPp->RecordQueueTester__DOT__value)));
    vlTOPp->RecordQueueTester__DOT___T_4 = (1U == (IData)(vlTOPp->RecordQueueTester__DOT__value));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/RecordQueueTester/202003062136164367938248267532133/RecordQueueTester.v:119
    if (vlTOPp->reset) {
	vlTOPp->RecordQueueTester__DOT__queue__DOT__value_1 = 0U;
    } else {
	if ((1U & (~ (IData)(vlTOPp->RecordQueueTester__DOT__queue__DOT___T_8)))) {
	    vlTOPp->RecordQueueTester__DOT__queue__DOT__value_1 
		= vlTOPp->RecordQueueTester__DOT__queue__DOT___T_20;
	}
    }
    vlTOPp->RecordQueueTester__DOT__queue__DOT___T_20 
	= (3U & ((IData)(1U) + (IData)(vlTOPp->RecordQueueTester__DOT__queue__DOT__value_1)));
    vlTOPp->RecordQueueTester__DOT__queue__DOT___T_6 
	= ((IData)(vlTOPp->RecordQueueTester__DOT__queue__DOT__value) 
	   == (IData)(vlTOPp->RecordQueueTester__DOT__queue__DOT__value_1));
    vlTOPp->RecordQueueTester__DOT__queue__DOT___T_8 
	= ((IData)(vlTOPp->RecordQueueTester__DOT__queue__DOT___T_6) 
	   & (~ (IData)(vlTOPp->RecordQueueTester__DOT__queue__DOT___T_5)));
    vlTOPp->RecordQueueTester__DOT__queue__DOT___T_9 
	= ((IData)(vlTOPp->RecordQueueTester__DOT__queue__DOT___T_6) 
	   & (IData)(vlTOPp->RecordQueueTester__DOT__queue__DOT___T_5));
    vlTOPp->RecordQueueTester__DOT__queue__DOT___T_10 
	= ((~ (IData)(vlTOPp->RecordQueueTester__DOT__queue__DOT___T_9)) 
	   & (0U == (IData)(vlTOPp->RecordQueueTester__DOT__value)));
}

void VRecordQueueTester::_settle__TOP__2(VRecordQueueTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRecordQueueTester::_settle__TOP__2\n"); );
    VRecordQueueTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->RecordQueueTester__DOT__done = (3U == (IData)(vlTOPp->RecordQueueTester__DOT__value));
    vlTOPp->RecordQueueTester__DOT___T_2 = (3U & ((IData)(1U) 
						  + (IData)(vlTOPp->RecordQueueTester__DOT__value)));
    vlTOPp->RecordQueueTester__DOT___T_4 = (1U == (IData)(vlTOPp->RecordQueueTester__DOT__value));
    vlTOPp->RecordQueueTester__DOT__queue__DOT___T_18 
	= (3U & ((IData)(1U) + (IData)(vlTOPp->RecordQueueTester__DOT__queue__DOT__value)));
    vlTOPp->RecordQueueTester__DOT__queue__DOT___T_20 
	= (3U & ((IData)(1U) + (IData)(vlTOPp->RecordQueueTester__DOT__queue__DOT__value_1)));
    vlTOPp->RecordQueueTester__DOT__queue__DOT___T_6 
	= ((IData)(vlTOPp->RecordQueueTester__DOT__queue__DOT__value) 
	   == (IData)(vlTOPp->RecordQueueTester__DOT__queue__DOT__value_1));
    vlTOPp->RecordQueueTester__DOT__queue__DOT___T_8 
	= ((IData)(vlTOPp->RecordQueueTester__DOT__queue__DOT___T_6) 
	   & (~ (IData)(vlTOPp->RecordQueueTester__DOT__queue__DOT___T_5)));
    vlTOPp->RecordQueueTester__DOT__queue__DOT___T_9 
	= ((IData)(vlTOPp->RecordQueueTester__DOT__queue__DOT___T_6) 
	   & (IData)(vlTOPp->RecordQueueTester__DOT__queue__DOT___T_5));
    vlTOPp->RecordQueueTester__DOT__queue__DOT___T_10 
	= ((~ (IData)(vlTOPp->RecordQueueTester__DOT__queue__DOT___T_9)) 
	   & (0U == (IData)(vlTOPp->RecordQueueTester__DOT__value)));
}

void VRecordQueueTester::_eval(VRecordQueueTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRecordQueueTester::_eval\n"); );
    VRecordQueueTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VRecordQueueTester::_eval_initial(VRecordQueueTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRecordQueueTester::_eval_initial\n"); );
    VRecordQueueTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VRecordQueueTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRecordQueueTester::final\n"); );
    // Variables
    VRecordQueueTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VRecordQueueTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VRecordQueueTester::_eval_settle(VRecordQueueTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRecordQueueTester::_eval_settle\n"); );
    VRecordQueueTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

VL_INLINE_OPT QData VRecordQueueTester::_change_request(VRecordQueueTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRecordQueueTester::_change_request\n"); );
    VRecordQueueTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VRecordQueueTester::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRecordQueueTester::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG

void VRecordQueueTester::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRecordQueueTester::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    RecordQueueTester__DOT__value = VL_RAND_RESET_I(2);
    RecordQueueTester__DOT__done = VL_RAND_RESET_I(1);
    RecordQueueTester__DOT___T_2 = VL_RAND_RESET_I(2);
    RecordQueueTester__DOT___T_4 = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
	    RecordQueueTester__DOT__queue__DOT___T_4_bar[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
	    RecordQueueTester__DOT__queue__DOT___T_4_foo[__Vi0] = VL_RAND_RESET_I(32);
    }}
    RecordQueueTester__DOT__queue__DOT__value = VL_RAND_RESET_I(2);
    RecordQueueTester__DOT__queue__DOT__value_1 = VL_RAND_RESET_I(2);
    RecordQueueTester__DOT__queue__DOT___T_5 = VL_RAND_RESET_I(1);
    RecordQueueTester__DOT__queue__DOT___T_6 = VL_RAND_RESET_I(1);
    RecordQueueTester__DOT__queue__DOT___T_8 = VL_RAND_RESET_I(1);
    RecordQueueTester__DOT__queue__DOT___T_9 = VL_RAND_RESET_I(1);
    RecordQueueTester__DOT__queue__DOT___T_10 = VL_RAND_RESET_I(1);
    RecordQueueTester__DOT__queue__DOT___T_18 = VL_RAND_RESET_I(2);
    RecordQueueTester__DOT__queue__DOT___T_20 = VL_RAND_RESET_I(2);
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
