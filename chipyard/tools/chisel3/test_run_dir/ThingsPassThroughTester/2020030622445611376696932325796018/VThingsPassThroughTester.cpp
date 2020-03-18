// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VThingsPassThroughTester.h for the primary calling header

#include "VThingsPassThroughTester.h" // For This
#include "VThingsPassThroughTester__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VThingsPassThroughTester) {
    VThingsPassThroughTester__Syms* __restrict vlSymsp = __VlSymsp = new VThingsPassThroughTester__Syms(this, name());
    VThingsPassThroughTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VThingsPassThroughTester::__Vconfigure(VThingsPassThroughTester__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VThingsPassThroughTester::~VThingsPassThroughTester() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VThingsPassThroughTester::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VThingsPassThroughTester::eval\n"); );
    VThingsPassThroughTester__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VThingsPassThroughTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VThingsPassThroughTester::_eval_initial_loop(VThingsPassThroughTester__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VThingsPassThroughTester::_sequent__TOP__1(VThingsPassThroughTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VThingsPassThroughTester::_sequent__TOP__1\n"); );
    VThingsPassThroughTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdlyvdim0__ThingsPassThroughTester__DOT__q__DOT___T__v0,1,0);
    VL_SIG8(__Vdlyvval__ThingsPassThroughTester__DOT__q__DOT___T__v0,2,0);
    VL_SIG8(__Vdlyvset__ThingsPassThroughTester__DOT__q__DOT___T__v0,0,0);
    VL_SIG8(__Vdly__ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_0,0,0);
    // Body
    __Vdlyvset__ThingsPassThroughTester__DOT__q__DOT___T__v0 = 0U;
    __Vdly__ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_0 
	= vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622445611376696932325796018/ThingsPassThroughTester.v:102
    if (vlTOPp->reset) {
	vlTOPp->ThingsPassThroughTester__DOT__q__DOT___T_1 = 0U;
    } else {
	if (((IData)(vlTOPp->ThingsPassThroughTester__DOT__q__DOT___T_6) 
	     != (IData)(vlTOPp->ThingsPassThroughTester__DOT__q__DOT___T_8))) {
	    vlTOPp->ThingsPassThroughTester__DOT__q__DOT___T_1 
		= vlTOPp->ThingsPassThroughTester__DOT__q__DOT___T_6;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622445611376696932325796018/ThingsPassThroughTester.v:102
    if (vlTOPp->reset) {
	vlTOPp->ThingsPassThroughTester__DOT__q__DOT__value_1 = 0U;
    } else {
	if (vlTOPp->ThingsPassThroughTester__DOT__q__DOT___T_8) {
	    vlTOPp->ThingsPassThroughTester__DOT__q__DOT__value_1 
		= vlTOPp->ThingsPassThroughTester__DOT__q__DOT___T_14;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622445611376696932325796018/ThingsPassThroughTester.v:102
    if (((~ (IData)(vlTOPp->ThingsPassThroughTester__DOT__q__DOT___T_5)) 
	 & (0x14U > (IData)(vlTOPp->ThingsPassThroughTester__DOT__value)))) {
	__Vdlyvval__ThingsPassThroughTester__DOT__q__DOT___T__v0 
	    = ((0x13U == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
	        ? 6U : ((0x12U == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
			 ? 5U : ((0x11U == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
				  ? 1U : ((0x10U == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
					   ? 4U : (
						   (0xfU 
						    == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
						    ? 6U
						    : 
						   ((0xeU 
						     == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
						     ? 5U
						     : 
						    ((0xdU 
						      == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
						      ? 0U
						      : 
						     ((0xcU 
						       == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
						       ? 2U
						       : 
						      ((0xbU 
							== (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
						        ? 3U
						        : 
						       ((0xaU 
							 == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
							 ? 3U
							 : 
							((9U 
							  == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
							  ? 3U
							  : 
							 ((8U 
							   == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
							   ? 7U
							   : 
							  ((7U 
							    == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
							    ? 0U
							    : 
							   ((6U 
							     == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
							     ? 5U
							     : 
							    ((5U 
							      == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
							      ? 6U
							      : 
							     ((4U 
							       == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
							       ? 2U
							       : 
							      ((3U 
								== (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
							        ? 7U
							        : 
							       ((2U 
								 == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
								 ? 0U
								 : 
								((1U 
								  == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value))
								  ? 1U
								  : 6U)))))))))))))))))));
	__Vdlyvset__ThingsPassThroughTester__DOT__q__DOT___T__v0 = 1U;
	__Vdlyvdim0__ThingsPassThroughTester__DOT__q__DOT___T__v0 
	    = vlTOPp->ThingsPassThroughTester__DOT__q__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622445611376696932325796018/ThingsPassThroughTester.v:299
    __Vdly__ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_0 
	= ((IData)(vlTOPp->reset) | ((((IData)(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_15) 
				       ^ (IData)(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_13)) 
				      ^ (IData)(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_12)) 
				     ^ (IData)(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_10)));
    // ALWAYSPOST at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622445611376696932325796018/ThingsPassThroughTester.v:103
    if (__Vdlyvset__ThingsPassThroughTester__DOT__q__DOT___T__v0) {
	vlTOPp->ThingsPassThroughTester__DOT__q__DOT___T[__Vdlyvdim0__ThingsPassThroughTester__DOT__q__DOT___T__v0] 
	    = __Vdlyvval__ThingsPassThroughTester__DOT__q__DOT___T__v0;
    }
    vlTOPp->ThingsPassThroughTester__DOT__q__DOT___T_14 
	= (3U & ((IData)(1U) + (IData)(vlTOPp->ThingsPassThroughTester__DOT__q__DOT__value_1)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622445611376696932325796018/ThingsPassThroughTester.v:586
    if (vlTOPp->reset) {
	vlTOPp->ThingsPassThroughTester__DOT__value = 0U;
    } else {
	if (vlTOPp->ThingsPassThroughTester__DOT___T_17) {
	    vlTOPp->ThingsPassThroughTester__DOT__value 
		= ((IData)(vlTOPp->ThingsPassThroughTester__DOT___T_18)
		    ? 0U : (IData)(vlTOPp->ThingsPassThroughTester__DOT___T_20));
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->ThingsPassThroughTester__DOT__value_1 = 0U;
    } else {
	if (vlTOPp->ThingsPassThroughTester__DOT___T_21) {
	    vlTOPp->ThingsPassThroughTester__DOT__value_1 
		= ((IData)(vlTOPp->ThingsPassThroughTester__DOT___T_26)
		    ? 0U : (IData)(vlTOPp->ThingsPassThroughTester__DOT___T_28));
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->ThingsPassThroughTester__DOT___T_21) 
			 & (~ (IData)(vlTOPp->ThingsPassThroughTester__DOT___T_24))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at QueueSpec.scala:29 assert(elems(outCnt.value) === q.io.deq.bits)\n");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->ThingsPassThroughTester__DOT___T_21) 
			 & (~ (IData)(vlTOPp->ThingsPassThroughTester__DOT___T_24))))) {
	    VL_WRITEF("[%0t] %%Error: ThingsPassThroughTester.v:625: Assertion failed in %NThingsPassThroughTester\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622445611376696932325796018/ThingsPassThroughTester.v",625,"");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->ThingsPassThroughTester__DOT___T_26) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FINISH_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622445611376696932325796018/ThingsPassThroughTester.v",636,"");
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622445611376696932325796018/ThingsPassThroughTester.v:102
    if (vlTOPp->reset) {
	vlTOPp->ThingsPassThroughTester__DOT__q__DOT__value = 0U;
    } else {
	if (vlTOPp->ThingsPassThroughTester__DOT__q__DOT___T_6) {
	    vlTOPp->ThingsPassThroughTester__DOT__q__DOT__value 
		= vlTOPp->ThingsPassThroughTester__DOT__q__DOT___T_12;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622445611376696932325796018/ThingsPassThroughTester.v:299
    vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_15 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_14));
    vlTOPp->ThingsPassThroughTester__DOT___T_26 = (0x14U 
						   == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1));
    vlTOPp->ThingsPassThroughTester__DOT___T_28 = (0x1fU 
						   & ((IData)(1U) 
						      + (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1)));
    vlTOPp->ThingsPassThroughTester__DOT___T_18 = (0x14U 
						   == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value));
    vlTOPp->ThingsPassThroughTester__DOT___T_20 = (0x1fU 
						   & ((IData)(1U) 
						      + (IData)(vlTOPp->ThingsPassThroughTester__DOT__value)));
    vlTOPp->ThingsPassThroughTester__DOT__q__DOT___T_12 
	= (3U & ((IData)(1U) + (IData)(vlTOPp->ThingsPassThroughTester__DOT__q__DOT__value)));
    vlTOPp->ThingsPassThroughTester__DOT__q__DOT___T_2 
	= ((IData)(vlTOPp->ThingsPassThroughTester__DOT__q__DOT__value) 
	   == (IData)(vlTOPp->ThingsPassThroughTester__DOT__q__DOT__value_1));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622445611376696932325796018/ThingsPassThroughTester.v:299
    vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_14 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_13));
    vlTOPp->ThingsPassThroughTester__DOT__q__DOT___T_4 
	= ((IData)(vlTOPp->ThingsPassThroughTester__DOT__q__DOT___T_2) 
	   & (~ (IData)(vlTOPp->ThingsPassThroughTester__DOT__q__DOT___T_1)));
    vlTOPp->ThingsPassThroughTester__DOT__q__DOT___T_5 
	= ((IData)(vlTOPp->ThingsPassThroughTester__DOT__q__DOT___T_2) 
	   & (IData)(vlTOPp->ThingsPassThroughTester__DOT__q__DOT___T_1));
    vlTOPp->ThingsPassThroughTester__DOT___T_17 = (
						   (~ (IData)(vlTOPp->ThingsPassThroughTester__DOT__q__DOT___T_5)) 
						   & (0x14U 
						      > (IData)(vlTOPp->ThingsPassThroughTester__DOT__value)));
    vlTOPp->ThingsPassThroughTester__DOT__q__DOT___T_6 
	= ((~ (IData)(vlTOPp->ThingsPassThroughTester__DOT__q__DOT___T_5)) 
	   & (0x14U > (IData)(vlTOPp->ThingsPassThroughTester__DOT__value)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622445611376696932325796018/ThingsPassThroughTester.v:299
    vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_13 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_12));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622445611376696932325796018/ThingsPassThroughTester.v:299
    vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_12 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_11));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622445611376696932325796018/ThingsPassThroughTester.v:299
    vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_11 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_10));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622445611376696932325796018/ThingsPassThroughTester.v:299
    vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_10 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_9));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622445611376696932325796018/ThingsPassThroughTester.v:299
    vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_9 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_8));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622445611376696932325796018/ThingsPassThroughTester.v:299
    vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_8 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_7));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622445611376696932325796018/ThingsPassThroughTester.v:299
    vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_7 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_6));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622445611376696932325796018/ThingsPassThroughTester.v:299
    vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_6 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_5));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622445611376696932325796018/ThingsPassThroughTester.v:299
    vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_5 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_4));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622445611376696932325796018/ThingsPassThroughTester.v:299
    vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_4 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_3));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622445611376696932325796018/ThingsPassThroughTester.v:299
    vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_3 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_2));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622445611376696932325796018/ThingsPassThroughTester.v:299
    vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_2 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_1));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ThingsPassThroughTester/2020030622445611376696932325796018/ThingsPassThroughTester.v:299
    vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_1 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_0));
    vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_0 
	= __Vdly__ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_0;
    vlTOPp->ThingsPassThroughTester__DOT___T_15 = (
						   ((IData)(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_15) 
						    << 0xfU) 
						   | (((IData)(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_14) 
						       << 0xeU) 
						      | (((IData)(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_13) 
							  << 0xdU) 
							 | (((IData)(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_12) 
							     << 0xcU) 
							    | (((IData)(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_11) 
								<< 0xbU) 
							       | (((IData)(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_10) 
								   << 0xaU) 
								  | (((IData)(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_9) 
								      << 9U) 
								     | (((IData)(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_8) 
									 << 8U) 
									| (((IData)(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_7) 
									    << 7U) 
									   | (((IData)(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_6) 
									       << 6U) 
									      | (((IData)(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_5) 
										<< 5U) 
										| (((IData)(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_4) 
										<< 4U) 
										| (((IData)(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_3) 
										<< 3U) 
										| (((IData)(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_2) 
										<< 2U) 
										| (((IData)(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_1) 
										<< 1U) 
										| (IData)(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_0))))))))))))))));
    vlTOPp->ThingsPassThroughTester__DOT___T_21 = (1U 
						   & (((IData)(vlTOPp->ThingsPassThroughTester__DOT___T_15) 
						       >> 4U) 
						      & (~ (IData)(vlTOPp->ThingsPassThroughTester__DOT__q__DOT___T_4))));
    vlTOPp->ThingsPassThroughTester__DOT__q__DOT___T_8 
	= (1U & (((IData)(vlTOPp->ThingsPassThroughTester__DOT___T_15) 
		  >> 4U) & (~ (IData)(vlTOPp->ThingsPassThroughTester__DOT__q__DOT___T_4))));
}

void VThingsPassThroughTester::_settle__TOP__2(VThingsPassThroughTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VThingsPassThroughTester::_settle__TOP__2\n"); );
    VThingsPassThroughTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ThingsPassThroughTester__DOT__q__DOT___T_14 
	= (3U & ((IData)(1U) + (IData)(vlTOPp->ThingsPassThroughTester__DOT__q__DOT__value_1)));
    vlTOPp->ThingsPassThroughTester__DOT___T_18 = (0x14U 
						   == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value));
    vlTOPp->ThingsPassThroughTester__DOT___T_20 = (0x1fU 
						   & ((IData)(1U) 
						      + (IData)(vlTOPp->ThingsPassThroughTester__DOT__value)));
    vlTOPp->ThingsPassThroughTester__DOT___T_26 = (0x14U 
						   == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1));
    vlTOPp->ThingsPassThroughTester__DOT___T_28 = (0x1fU 
						   & ((IData)(1U) 
						      + (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1)));
    vlTOPp->ThingsPassThroughTester__DOT__q__DOT___T_12 
	= (3U & ((IData)(1U) + (IData)(vlTOPp->ThingsPassThroughTester__DOT__q__DOT__value)));
    vlTOPp->ThingsPassThroughTester__DOT___T_24 = (
						   (((0x13U 
						      == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
						      ? 6U
						      : 
						     ((0x12U 
						       == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
						       ? 5U
						       : 
						      ((0x11U 
							== (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
						        ? 1U
						        : 
						       ((0x10U 
							 == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
							 ? 4U
							 : 
							((0xfU 
							  == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
							  ? 6U
							  : 
							 ((0xeU 
							   == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
							   ? 5U
							   : 
							  ((0xdU 
							    == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
							    ? 0U
							    : 
							   ((0xcU 
							     == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
							     ? 2U
							     : 
							    ((0xbU 
							      == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
							      ? 3U
							      : 
							     ((0xaU 
							       == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
							       ? 3U
							       : 
							      ((9U 
								== (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
							        ? 3U
							        : 
							       ((8U 
								 == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
								 ? 7U
								 : 
								((7U 
								  == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
								  ? 0U
								  : 
								 ((6U 
								   == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
								   ? 5U
								   : 
								  ((5U 
								    == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
								    ? 6U
								    : 
								   ((4U 
								     == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
								     ? 2U
								     : 
								    ((3U 
								      == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
								      ? 7U
								      : 
								     ((2U 
								       == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
								       ? 0U
								       : 
								      ((1U 
									== (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
								        ? 1U
								        : 6U))))))))))))))))))) 
						    == 
						    vlTOPp->ThingsPassThroughTester__DOT__q__DOT___T
						    [vlTOPp->ThingsPassThroughTester__DOT__q__DOT__value_1]) 
						   | (IData)(vlTOPp->reset));
    vlTOPp->ThingsPassThroughTester__DOT__q__DOT___T_2 
	= ((IData)(vlTOPp->ThingsPassThroughTester__DOT__q__DOT__value) 
	   == (IData)(vlTOPp->ThingsPassThroughTester__DOT__q__DOT__value_1));
    vlTOPp->ThingsPassThroughTester__DOT___T_15 = (
						   ((IData)(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_15) 
						    << 0xfU) 
						   | (((IData)(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_14) 
						       << 0xeU) 
						      | (((IData)(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_13) 
							  << 0xdU) 
							 | (((IData)(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_12) 
							     << 0xcU) 
							    | (((IData)(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_11) 
								<< 0xbU) 
							       | (((IData)(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_10) 
								   << 0xaU) 
								  | (((IData)(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_9) 
								      << 9U) 
								     | (((IData)(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_8) 
									 << 8U) 
									| (((IData)(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_7) 
									    << 7U) 
									   | (((IData)(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_6) 
									       << 6U) 
									      | (((IData)(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_5) 
										<< 5U) 
										| (((IData)(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_4) 
										<< 4U) 
										| (((IData)(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_3) 
										<< 3U) 
										| (((IData)(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_2) 
										<< 2U) 
										| (((IData)(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_1) 
										<< 1U) 
										| (IData)(vlTOPp->ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_0))))))))))))))));
    vlTOPp->ThingsPassThroughTester__DOT__q__DOT___T_4 
	= ((IData)(vlTOPp->ThingsPassThroughTester__DOT__q__DOT___T_2) 
	   & (~ (IData)(vlTOPp->ThingsPassThroughTester__DOT__q__DOT___T_1)));
    vlTOPp->ThingsPassThroughTester__DOT__q__DOT___T_5 
	= ((IData)(vlTOPp->ThingsPassThroughTester__DOT__q__DOT___T_2) 
	   & (IData)(vlTOPp->ThingsPassThroughTester__DOT__q__DOT___T_1));
    vlTOPp->ThingsPassThroughTester__DOT___T_21 = (1U 
						   & (((IData)(vlTOPp->ThingsPassThroughTester__DOT___T_15) 
						       >> 4U) 
						      & (~ (IData)(vlTOPp->ThingsPassThroughTester__DOT__q__DOT___T_4))));
    vlTOPp->ThingsPassThroughTester__DOT__q__DOT___T_8 
	= (1U & (((IData)(vlTOPp->ThingsPassThroughTester__DOT___T_15) 
		  >> 4U) & (~ (IData)(vlTOPp->ThingsPassThroughTester__DOT__q__DOT___T_4))));
    vlTOPp->ThingsPassThroughTester__DOT___T_17 = (
						   (~ (IData)(vlTOPp->ThingsPassThroughTester__DOT__q__DOT___T_5)) 
						   & (0x14U 
						      > (IData)(vlTOPp->ThingsPassThroughTester__DOT__value)));
    vlTOPp->ThingsPassThroughTester__DOT__q__DOT___T_6 
	= ((~ (IData)(vlTOPp->ThingsPassThroughTester__DOT__q__DOT___T_5)) 
	   & (0x14U > (IData)(vlTOPp->ThingsPassThroughTester__DOT__value)));
}

VL_INLINE_OPT void VThingsPassThroughTester::_combo__TOP__3(VThingsPassThroughTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VThingsPassThroughTester::_combo__TOP__3\n"); );
    VThingsPassThroughTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ThingsPassThroughTester__DOT___T_24 = (
						   (((0x13U 
						      == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
						      ? 6U
						      : 
						     ((0x12U 
						       == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
						       ? 5U
						       : 
						      ((0x11U 
							== (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
						        ? 1U
						        : 
						       ((0x10U 
							 == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
							 ? 4U
							 : 
							((0xfU 
							  == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
							  ? 6U
							  : 
							 ((0xeU 
							   == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
							   ? 5U
							   : 
							  ((0xdU 
							    == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
							    ? 0U
							    : 
							   ((0xcU 
							     == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
							     ? 2U
							     : 
							    ((0xbU 
							      == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
							      ? 3U
							      : 
							     ((0xaU 
							       == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
							       ? 3U
							       : 
							      ((9U 
								== (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
							        ? 3U
							        : 
							       ((8U 
								 == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
								 ? 7U
								 : 
								((7U 
								  == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
								  ? 0U
								  : 
								 ((6U 
								   == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
								   ? 5U
								   : 
								  ((5U 
								    == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
								    ? 6U
								    : 
								   ((4U 
								     == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
								     ? 2U
								     : 
								    ((3U 
								      == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
								      ? 7U
								      : 
								     ((2U 
								       == (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
								       ? 0U
								       : 
								      ((1U 
									== (IData)(vlTOPp->ThingsPassThroughTester__DOT__value_1))
								        ? 1U
								        : 6U))))))))))))))))))) 
						    == 
						    vlTOPp->ThingsPassThroughTester__DOT__q__DOT___T
						    [vlTOPp->ThingsPassThroughTester__DOT__q__DOT__value_1]) 
						   | (IData)(vlTOPp->reset));
}

void VThingsPassThroughTester::_eval(VThingsPassThroughTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VThingsPassThroughTester::_eval\n"); );
    VThingsPassThroughTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__3(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VThingsPassThroughTester::_eval_initial(VThingsPassThroughTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VThingsPassThroughTester::_eval_initial\n"); );
    VThingsPassThroughTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VThingsPassThroughTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VThingsPassThroughTester::final\n"); );
    // Variables
    VThingsPassThroughTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VThingsPassThroughTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VThingsPassThroughTester::_eval_settle(VThingsPassThroughTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VThingsPassThroughTester::_eval_settle\n"); );
    VThingsPassThroughTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

VL_INLINE_OPT QData VThingsPassThroughTester::_change_request(VThingsPassThroughTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VThingsPassThroughTester::_change_request\n"); );
    VThingsPassThroughTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VThingsPassThroughTester::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VThingsPassThroughTester::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG

void VThingsPassThroughTester::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VThingsPassThroughTester::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    ThingsPassThroughTester__DOT__value = VL_RAND_RESET_I(5);
    ThingsPassThroughTester__DOT__value_1 = VL_RAND_RESET_I(5);
    ThingsPassThroughTester__DOT___T_15 = VL_RAND_RESET_I(16);
    ThingsPassThroughTester__DOT___T_17 = VL_RAND_RESET_I(1);
    ThingsPassThroughTester__DOT___T_18 = VL_RAND_RESET_I(1);
    ThingsPassThroughTester__DOT___T_20 = VL_RAND_RESET_I(5);
    ThingsPassThroughTester__DOT___T_21 = VL_RAND_RESET_I(1);
    ThingsPassThroughTester__DOT___T_24 = VL_RAND_RESET_I(1);
    ThingsPassThroughTester__DOT___T_26 = VL_RAND_RESET_I(1);
    ThingsPassThroughTester__DOT___T_28 = VL_RAND_RESET_I(5);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
	    ThingsPassThroughTester__DOT__q__DOT___T[__Vi0] = VL_RAND_RESET_I(3);
    }}
    ThingsPassThroughTester__DOT__q__DOT__value = VL_RAND_RESET_I(2);
    ThingsPassThroughTester__DOT__q__DOT__value_1 = VL_RAND_RESET_I(2);
    ThingsPassThroughTester__DOT__q__DOT___T_1 = VL_RAND_RESET_I(1);
    ThingsPassThroughTester__DOT__q__DOT___T_2 = VL_RAND_RESET_I(1);
    ThingsPassThroughTester__DOT__q__DOT___T_4 = VL_RAND_RESET_I(1);
    ThingsPassThroughTester__DOT__q__DOT___T_5 = VL_RAND_RESET_I(1);
    ThingsPassThroughTester__DOT__q__DOT___T_6 = VL_RAND_RESET_I(1);
    ThingsPassThroughTester__DOT__q__DOT___T_8 = VL_RAND_RESET_I(1);
    ThingsPassThroughTester__DOT__q__DOT___T_12 = VL_RAND_RESET_I(2);
    ThingsPassThroughTester__DOT__q__DOT___T_14 = VL_RAND_RESET_I(2);
    ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_0 = VL_RAND_RESET_I(1);
    ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_1 = VL_RAND_RESET_I(1);
    ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_2 = VL_RAND_RESET_I(1);
    ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_3 = VL_RAND_RESET_I(1);
    ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_4 = VL_RAND_RESET_I(1);
    ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_5 = VL_RAND_RESET_I(1);
    ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_6 = VL_RAND_RESET_I(1);
    ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_7 = VL_RAND_RESET_I(1);
    ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_8 = VL_RAND_RESET_I(1);
    ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_9 = VL_RAND_RESET_I(1);
    ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_10 = VL_RAND_RESET_I(1);
    ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_11 = VL_RAND_RESET_I(1);
    ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_12 = VL_RAND_RESET_I(1);
    ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_13 = VL_RAND_RESET_I(1);
    ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_14 = VL_RAND_RESET_I(1);
    ThingsPassThroughTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_15 = VL_RAND_RESET_I(1);
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
