// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCountIsCorrectTester.h for the primary calling header

#include "VCountIsCorrectTester.h" // For This
#include "VCountIsCorrectTester__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VCountIsCorrectTester) {
    VCountIsCorrectTester__Syms* __restrict vlSymsp = __VlSymsp = new VCountIsCorrectTester__Syms(this, name());
    VCountIsCorrectTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VCountIsCorrectTester::__Vconfigure(VCountIsCorrectTester__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VCountIsCorrectTester::~VCountIsCorrectTester() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VCountIsCorrectTester::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VCountIsCorrectTester::eval\n"); );
    VCountIsCorrectTester__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VCountIsCorrectTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VCountIsCorrectTester::_eval_initial_loop(VCountIsCorrectTester__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VCountIsCorrectTester::_sequent__TOP__1(VCountIsCorrectTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCountIsCorrectTester::_sequent__TOP__1\n"); );
    VCountIsCorrectTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_0,0,0);
    // Body
    __Vdly__CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_0 
	= vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/2020030622462818184130049515588766/CountIsCorrectTester.v:498
    if (vlTOPp->reset) {
	vlTOPp->CountIsCorrectTester__DOT__value = 0U;
    } else {
	if (vlTOPp->CountIsCorrectTester__DOT___T_17) {
	    vlTOPp->CountIsCorrectTester__DOT__value 
		= ((IData)(vlTOPp->CountIsCorrectTester__DOT___T_18)
		    ? 0U : (IData)(vlTOPp->CountIsCorrectTester__DOT___T_20));
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->CountIsCorrectTester__DOT__value_1 = 0U;
    } else {
	if (vlTOPp->CountIsCorrectTester__DOT___T_27) {
	    vlTOPp->CountIsCorrectTester__DOT__value_1 
		= ((IData)(vlTOPp->CountIsCorrectTester__DOT___T_28)
		    ? 0U : (IData)(vlTOPp->CountIsCorrectTester__DOT___T_30));
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->CountIsCorrectTester__DOT___T_17) 
			 & (~ (IData)(vlTOPp->CountIsCorrectTester__DOT___T_25))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at QueueSpec.scala:79 assert(q.io.count === (inCnt.value - outCnt.value))\n");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->CountIsCorrectTester__DOT___T_17) 
			 & (~ (IData)(vlTOPp->CountIsCorrectTester__DOT___T_25))))) {
	    VL_WRITEF("[%0t] %%Error: CountIsCorrectTester.v:537: Assertion failed in %NCountIsCorrectTester\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/2020030622462818184130049515588766/CountIsCorrectTester.v",537,"");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->CountIsCorrectTester__DOT___T_27) 
			 & (~ (IData)(vlTOPp->CountIsCorrectTester__DOT___T_25))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at QueueSpec.scala:83 assert(q.io.count === (inCnt.value - outCnt.value))\n");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->CountIsCorrectTester__DOT___T_27) 
			 & (~ (IData)(vlTOPp->CountIsCorrectTester__DOT___T_25))))) {
	    VL_WRITEF("[%0t] %%Error: CountIsCorrectTester.v:559: Assertion failed in %NCountIsCorrectTester\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/2020030622462818184130049515588766/CountIsCorrectTester.v",559,"");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->CountIsCorrectTester__DOT___T_28) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FINISH_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/2020030622462818184130049515588766/CountIsCorrectTester.v",570,"");
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/2020030622462818184130049515588766/CountIsCorrectTester.v:90
    if (vlTOPp->reset) {
	vlTOPp->CountIsCorrectTester__DOT__q__DOT___T_1 = 0U;
    } else {
	if (((IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT___T_6) 
	     != (IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT___T_8))) {
	    vlTOPp->CountIsCorrectTester__DOT__q__DOT___T_1 
		= vlTOPp->CountIsCorrectTester__DOT__q__DOT___T_6;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/2020030622462818184130049515588766/CountIsCorrectTester.v:90
    if (vlTOPp->reset) {
	vlTOPp->CountIsCorrectTester__DOT__q__DOT__value = 0U;
    } else {
	if (vlTOPp->CountIsCorrectTester__DOT__q__DOT___T_6) {
	    vlTOPp->CountIsCorrectTester__DOT__q__DOT__value 
		= vlTOPp->CountIsCorrectTester__DOT__q__DOT___T_12;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/2020030622462818184130049515588766/CountIsCorrectTester.v:90
    if (vlTOPp->reset) {
	vlTOPp->CountIsCorrectTester__DOT__q__DOT__value_1 = 0U;
    } else {
	if (vlTOPp->CountIsCorrectTester__DOT__q__DOT___T_8) {
	    vlTOPp->CountIsCorrectTester__DOT__q__DOT__value_1 
		= vlTOPp->CountIsCorrectTester__DOT__q__DOT___T_14;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/2020030622462818184130049515588766/CountIsCorrectTester.v:284
    __Vdly__CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_0 
	= ((IData)(vlTOPp->reset) | ((((IData)(vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_15) 
				       ^ (IData)(vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_13)) 
				      ^ (IData)(vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_12)) 
				     ^ (IData)(vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_10)));
    vlTOPp->CountIsCorrectTester__DOT___T_28 = (0x14U 
						== (IData)(vlTOPp->CountIsCorrectTester__DOT__value_1));
    vlTOPp->CountIsCorrectTester__DOT___T_30 = (0x1fU 
						& ((IData)(1U) 
						   + (IData)(vlTOPp->CountIsCorrectTester__DOT__value_1)));
    vlTOPp->CountIsCorrectTester__DOT___T_18 = (0x14U 
						== (IData)(vlTOPp->CountIsCorrectTester__DOT__value));
    vlTOPp->CountIsCorrectTester__DOT___T_20 = (0x1fU 
						& ((IData)(1U) 
						   + (IData)(vlTOPp->CountIsCorrectTester__DOT__value)));
    vlTOPp->CountIsCorrectTester__DOT__q__DOT___T_12 
	= (3U & ((IData)(1U) + (IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT__value)));
    vlTOPp->CountIsCorrectTester__DOT__q__DOT___T_14 
	= (3U & ((IData)(1U) + (IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT__value_1)));
    vlTOPp->CountIsCorrectTester__DOT__q__DOT___T_2 
	= ((IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT__value) 
	   == (IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT__value_1));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/2020030622462818184130049515588766/CountIsCorrectTester.v:284
    vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_15 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_14));
    vlTOPp->CountIsCorrectTester__DOT__q__DOT___T_4 
	= ((IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT___T_2) 
	   & (~ (IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT___T_1)));
    vlTOPp->CountIsCorrectTester__DOT__q__DOT___T_5 
	= ((IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT___T_2) 
	   & (IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT___T_1));
    vlTOPp->CountIsCorrectTester__DOT___T_17 = ((~ (IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT___T_5)) 
						& (0x14U 
						   > (IData)(vlTOPp->CountIsCorrectTester__DOT__value)));
    vlTOPp->CountIsCorrectTester__DOT__q__DOT___T_6 
	= ((~ (IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT___T_5)) 
	   & (0x14U > (IData)(vlTOPp->CountIsCorrectTester__DOT__value)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/2020030622462818184130049515588766/CountIsCorrectTester.v:284
    vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_14 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_13));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/2020030622462818184130049515588766/CountIsCorrectTester.v:284
    vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_13 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_12));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/2020030622462818184130049515588766/CountIsCorrectTester.v:284
    vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_12 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_11));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/2020030622462818184130049515588766/CountIsCorrectTester.v:284
    vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_11 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_10));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/2020030622462818184130049515588766/CountIsCorrectTester.v:284
    vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_10 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_9));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/2020030622462818184130049515588766/CountIsCorrectTester.v:284
    vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_9 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_8));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/2020030622462818184130049515588766/CountIsCorrectTester.v:284
    vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_8 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_7));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/2020030622462818184130049515588766/CountIsCorrectTester.v:284
    vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_7 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_6));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/2020030622462818184130049515588766/CountIsCorrectTester.v:284
    vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_6 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_5));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/2020030622462818184130049515588766/CountIsCorrectTester.v:284
    vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_5 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_4));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/2020030622462818184130049515588766/CountIsCorrectTester.v:284
    vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_4 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_3));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/2020030622462818184130049515588766/CountIsCorrectTester.v:284
    vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_3 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_2));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/2020030622462818184130049515588766/CountIsCorrectTester.v:284
    vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_2 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_1));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CountIsCorrectTester/2020030622462818184130049515588766/CountIsCorrectTester.v:284
    vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_1 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_0));
    vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_0 
	= __Vdly__CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_0;
    vlTOPp->CountIsCorrectTester__DOT___T_15 = (((IData)(vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_15) 
						 << 0xfU) 
						| (((IData)(vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_14) 
						    << 0xeU) 
						   | (((IData)(vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_13) 
						       << 0xdU) 
						      | (((IData)(vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_12) 
							  << 0xcU) 
							 | (((IData)(vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_11) 
							     << 0xbU) 
							    | (((IData)(vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_10) 
								<< 0xaU) 
							       | (((IData)(vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_9) 
								   << 9U) 
								  | (((IData)(vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_8) 
								      << 8U) 
								     | (((IData)(vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_7) 
									 << 7U) 
									| (((IData)(vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_6) 
									    << 6U) 
									   | (((IData)(vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_5) 
									       << 5U) 
									      | (((IData)(vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_4) 
										<< 4U) 
										| (((IData)(vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_3) 
										<< 3U) 
										| (((IData)(vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_2) 
										<< 2U) 
										| (((IData)(vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_1) 
										<< 1U) 
										| (IData)(vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_0))))))))))))))));
    vlTOPp->CountIsCorrectTester__DOT___T_27 = (1U 
						& (((IData)(vlTOPp->CountIsCorrectTester__DOT___T_15) 
						    >> 3U) 
						   & (~ (IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT___T_4))));
    vlTOPp->CountIsCorrectTester__DOT__q__DOT___T_8 
	= (1U & (((IData)(vlTOPp->CountIsCorrectTester__DOT___T_15) 
		  >> 3U) & (~ (IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT___T_4))));
}

void VCountIsCorrectTester::_settle__TOP__2(VCountIsCorrectTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCountIsCorrectTester::_settle__TOP__2\n"); );
    VCountIsCorrectTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CountIsCorrectTester__DOT___T_18 = (0x14U 
						== (IData)(vlTOPp->CountIsCorrectTester__DOT__value));
    vlTOPp->CountIsCorrectTester__DOT___T_20 = (0x1fU 
						& ((IData)(1U) 
						   + (IData)(vlTOPp->CountIsCorrectTester__DOT__value)));
    vlTOPp->CountIsCorrectTester__DOT___T_28 = (0x14U 
						== (IData)(vlTOPp->CountIsCorrectTester__DOT__value_1));
    vlTOPp->CountIsCorrectTester__DOT___T_30 = (0x1fU 
						& ((IData)(1U) 
						   + (IData)(vlTOPp->CountIsCorrectTester__DOT__value_1)));
    vlTOPp->CountIsCorrectTester__DOT__q__DOT___T_12 
	= (3U & ((IData)(1U) + (IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT__value)));
    vlTOPp->CountIsCorrectTester__DOT__q__DOT___T_14 
	= (3U & ((IData)(1U) + (IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT__value_1)));
    vlTOPp->CountIsCorrectTester__DOT__q__DOT___T_2 
	= ((IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT__value) 
	   == (IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT__value_1));
    vlTOPp->CountIsCorrectTester__DOT___T_15 = (((IData)(vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_15) 
						 << 0xfU) 
						| (((IData)(vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_14) 
						    << 0xeU) 
						   | (((IData)(vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_13) 
						       << 0xdU) 
						      | (((IData)(vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_12) 
							  << 0xcU) 
							 | (((IData)(vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_11) 
							     << 0xbU) 
							    | (((IData)(vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_10) 
								<< 0xaU) 
							       | (((IData)(vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_9) 
								   << 9U) 
								  | (((IData)(vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_8) 
								      << 8U) 
								     | (((IData)(vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_7) 
									 << 7U) 
									| (((IData)(vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_6) 
									    << 6U) 
									   | (((IData)(vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_5) 
									       << 5U) 
									      | (((IData)(vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_4) 
										<< 4U) 
										| (((IData)(vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_3) 
										<< 3U) 
										| (((IData)(vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_2) 
										<< 2U) 
										| (((IData)(vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_1) 
										<< 1U) 
										| (IData)(vlTOPp->CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_0))))))))))))))));
    vlTOPp->CountIsCorrectTester__DOT___T_25 = ((((
						   ((IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT___T_1) 
						    & (IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT___T_2))
						    ? 4U
						    : 0U) 
						  | (3U 
						     & ((IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT__value) 
							- (IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT__value_1)))) 
						 == 
						 (0x1fU 
						  & ((IData)(vlTOPp->CountIsCorrectTester__DOT__value) 
						     - (IData)(vlTOPp->CountIsCorrectTester__DOT__value_1)))) 
						| (IData)(vlTOPp->reset));
    vlTOPp->CountIsCorrectTester__DOT__q__DOT___T_4 
	= ((IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT___T_2) 
	   & (~ (IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT___T_1)));
    vlTOPp->CountIsCorrectTester__DOT__q__DOT___T_5 
	= ((IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT___T_2) 
	   & (IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT___T_1));
    vlTOPp->CountIsCorrectTester__DOT___T_27 = (1U 
						& (((IData)(vlTOPp->CountIsCorrectTester__DOT___T_15) 
						    >> 3U) 
						   & (~ (IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT___T_4))));
    vlTOPp->CountIsCorrectTester__DOT__q__DOT___T_8 
	= (1U & (((IData)(vlTOPp->CountIsCorrectTester__DOT___T_15) 
		  >> 3U) & (~ (IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT___T_4))));
    vlTOPp->CountIsCorrectTester__DOT___T_17 = ((~ (IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT___T_5)) 
						& (0x14U 
						   > (IData)(vlTOPp->CountIsCorrectTester__DOT__value)));
    vlTOPp->CountIsCorrectTester__DOT__q__DOT___T_6 
	= ((~ (IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT___T_5)) 
	   & (0x14U > (IData)(vlTOPp->CountIsCorrectTester__DOT__value)));
}

VL_INLINE_OPT void VCountIsCorrectTester::_combo__TOP__3(VCountIsCorrectTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCountIsCorrectTester::_combo__TOP__3\n"); );
    VCountIsCorrectTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CountIsCorrectTester__DOT___T_25 = ((((
						   ((IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT___T_1) 
						    & (IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT___T_2))
						    ? 4U
						    : 0U) 
						  | (3U 
						     & ((IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT__value) 
							- (IData)(vlTOPp->CountIsCorrectTester__DOT__q__DOT__value_1)))) 
						 == 
						 (0x1fU 
						  & ((IData)(vlTOPp->CountIsCorrectTester__DOT__value) 
						     - (IData)(vlTOPp->CountIsCorrectTester__DOT__value_1)))) 
						| (IData)(vlTOPp->reset));
}

void VCountIsCorrectTester::_eval(VCountIsCorrectTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCountIsCorrectTester::_eval\n"); );
    VCountIsCorrectTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__3(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VCountIsCorrectTester::_eval_initial(VCountIsCorrectTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCountIsCorrectTester::_eval_initial\n"); );
    VCountIsCorrectTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VCountIsCorrectTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCountIsCorrectTester::final\n"); );
    // Variables
    VCountIsCorrectTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VCountIsCorrectTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VCountIsCorrectTester::_eval_settle(VCountIsCorrectTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCountIsCorrectTester::_eval_settle\n"); );
    VCountIsCorrectTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

VL_INLINE_OPT QData VCountIsCorrectTester::_change_request(VCountIsCorrectTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCountIsCorrectTester::_change_request\n"); );
    VCountIsCorrectTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VCountIsCorrectTester::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCountIsCorrectTester::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG

void VCountIsCorrectTester::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCountIsCorrectTester::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    CountIsCorrectTester__DOT__value = VL_RAND_RESET_I(5);
    CountIsCorrectTester__DOT__value_1 = VL_RAND_RESET_I(5);
    CountIsCorrectTester__DOT___T_15 = VL_RAND_RESET_I(16);
    CountIsCorrectTester__DOT___T_17 = VL_RAND_RESET_I(1);
    CountIsCorrectTester__DOT___T_18 = VL_RAND_RESET_I(1);
    CountIsCorrectTester__DOT___T_20 = VL_RAND_RESET_I(5);
    CountIsCorrectTester__DOT___T_25 = VL_RAND_RESET_I(1);
    CountIsCorrectTester__DOT___T_27 = VL_RAND_RESET_I(1);
    CountIsCorrectTester__DOT___T_28 = VL_RAND_RESET_I(1);
    CountIsCorrectTester__DOT___T_30 = VL_RAND_RESET_I(5);
    CountIsCorrectTester__DOT__q__DOT__value = VL_RAND_RESET_I(2);
    CountIsCorrectTester__DOT__q__DOT__value_1 = VL_RAND_RESET_I(2);
    CountIsCorrectTester__DOT__q__DOT___T_1 = VL_RAND_RESET_I(1);
    CountIsCorrectTester__DOT__q__DOT___T_2 = VL_RAND_RESET_I(1);
    CountIsCorrectTester__DOT__q__DOT___T_4 = VL_RAND_RESET_I(1);
    CountIsCorrectTester__DOT__q__DOT___T_5 = VL_RAND_RESET_I(1);
    CountIsCorrectTester__DOT__q__DOT___T_6 = VL_RAND_RESET_I(1);
    CountIsCorrectTester__DOT__q__DOT___T_8 = VL_RAND_RESET_I(1);
    CountIsCorrectTester__DOT__q__DOT___T_12 = VL_RAND_RESET_I(2);
    CountIsCorrectTester__DOT__q__DOT___T_14 = VL_RAND_RESET_I(2);
    CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_0 = VL_RAND_RESET_I(1);
    CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_1 = VL_RAND_RESET_I(1);
    CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_2 = VL_RAND_RESET_I(1);
    CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_3 = VL_RAND_RESET_I(1);
    CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_4 = VL_RAND_RESET_I(1);
    CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_5 = VL_RAND_RESET_I(1);
    CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_6 = VL_RAND_RESET_I(1);
    CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_7 = VL_RAND_RESET_I(1);
    CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_8 = VL_RAND_RESET_I(1);
    CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_9 = VL_RAND_RESET_I(1);
    CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_10 = VL_RAND_RESET_I(1);
    CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_11 = VL_RAND_RESET_I(1);
    CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_12 = VL_RAND_RESET_I(1);
    CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_13 = VL_RAND_RESET_I(1);
    CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_14 = VL_RAND_RESET_I(1);
    CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_15 = VL_RAND_RESET_I(1);
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
