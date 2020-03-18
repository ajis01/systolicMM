// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VQueuePipeTester.h for the primary calling header

#include "VQueuePipeTester.h"  // For This
#include "VQueuePipeTester__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VQueuePipeTester) {
    VQueuePipeTester__Syms* __restrict vlSymsp = __VlSymsp = new VQueuePipeTester__Syms(this, name());
    VQueuePipeTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VQueuePipeTester::__Vconfigure(VQueuePipeTester__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VQueuePipeTester::~VQueuePipeTester() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VQueuePipeTester::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VQueuePipeTester::eval\n"); );
    VQueuePipeTester__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VQueuePipeTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VQueuePipeTester::_eval_initial_loop(VQueuePipeTester__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VQueuePipeTester::_sequent__TOP__1(VQueuePipeTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueuePipeTester::_sequent__TOP__1\n"); );
    VQueuePipeTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_0,0,0);
    // Body
    __Vdly__QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_0 
	= vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/202003062137439184216981180839750/QueuePipeTester.v:502
    if (vlTOPp->reset) {
	vlTOPp->QueuePipeTester__DOT__value = 0U;
    } else {
	if (vlTOPp->QueuePipeTester__DOT___T_24) {
	    vlTOPp->QueuePipeTester__DOT__value = ((IData)(vlTOPp->QueuePipeTester__DOT___T_25)
						    ? 0U
						    : (IData)(vlTOPp->QueuePipeTester__DOT___T_27));
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->QueuePipeTester__DOT__value_1 = 0U;
    } else {
	if ((1U & (((IData)(vlTOPp->QueuePipeTester__DOT___T_15) 
		    >> 5U) & (~ (IData)(vlTOPp->QueuePipeTester__DOT__q__DOT___T_4))))) {
	    vlTOPp->QueuePipeTester__DOT__value_1 = 
		((IData)(vlTOPp->QueuePipeTester__DOT___T_29)
		  ? 0U : (IData)(vlTOPp->QueuePipeTester__DOT___T_31));
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY((1U & (~ (((IData)(vlTOPp->QueuePipeTester__DOT__q_io_enq_ready) 
				   | ((4U == ((((IData)(vlTOPp->QueuePipeTester__DOT__q__DOT___T_1) 
						& (IData)(vlTOPp->QueuePipeTester__DOT__q__DOT___T_2))
					        ? 4U
					        : 0U) 
					      | (3U 
						 & ((IData)(vlTOPp->QueuePipeTester__DOT__q__DOT__value) 
						    - (IData)(vlTOPp->QueuePipeTester__DOT__q__DOT__value_1))))) 
				      & (~ ((IData)(vlTOPp->QueuePipeTester__DOT___T_15) 
					    >> 5U)))) 
				  | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at QueueSpec.scala:129 assert(q.io.enq.ready || (q.io.count === queueDepth.U && !q.io.deq.ready))\n");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY((1U & (~ (((IData)(vlTOPp->QueuePipeTester__DOT__q_io_enq_ready) 
				   | ((4U == ((((IData)(vlTOPp->QueuePipeTester__DOT__q__DOT___T_1) 
						& (IData)(vlTOPp->QueuePipeTester__DOT__q__DOT___T_2))
					        ? 4U
					        : 0U) 
					      | (3U 
						 & ((IData)(vlTOPp->QueuePipeTester__DOT__q__DOT__value) 
						    - (IData)(vlTOPp->QueuePipeTester__DOT__q__DOT__value_1))))) 
				      & (~ ((IData)(vlTOPp->QueuePipeTester__DOT___T_15) 
					    >> 5U)))) 
				  | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: QueuePipeTester.v:541: Assertion failed in %NQueuePipeTester\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/202003062137439184216981180839750/QueuePipeTester.v",541,"");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->QueuePipeTester__DOT___T_29) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FINISH_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/202003062137439184216981180839750/QueuePipeTester.v",552,"");
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/202003062137439184216981180839750/QueuePipeTester.v:286
    __Vdly__QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_0 
	= ((IData)(vlTOPp->reset) | ((((IData)(vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_15) 
				       ^ (IData)(vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_13)) 
				      ^ (IData)(vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_12)) 
				     ^ (IData)(vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_10)));
    vlTOPp->QueuePipeTester__DOT___T_29 = (0x14U == (IData)(vlTOPp->QueuePipeTester__DOT__value_1));
    vlTOPp->QueuePipeTester__DOT___T_31 = (0x1fU & 
					   ((IData)(1U) 
					    + (IData)(vlTOPp->QueuePipeTester__DOT__value_1)));
    vlTOPp->QueuePipeTester__DOT___T_25 = (0x14U == (IData)(vlTOPp->QueuePipeTester__DOT__value));
    vlTOPp->QueuePipeTester__DOT___T_27 = (0x1fU & 
					   ((IData)(1U) 
					    + (IData)(vlTOPp->QueuePipeTester__DOT__value)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/202003062137439184216981180839750/QueuePipeTester.v:92
    if (vlTOPp->reset) {
	vlTOPp->QueuePipeTester__DOT__q__DOT___T_1 = 0U;
    } else {
	if (((IData)(vlTOPp->QueuePipeTester__DOT__q__DOT___T_6) 
	     != (IData)(vlTOPp->QueuePipeTester__DOT__q__DOT___T_8))) {
	    vlTOPp->QueuePipeTester__DOT__q__DOT___T_1 
		= vlTOPp->QueuePipeTester__DOT__q__DOT___T_6;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/202003062137439184216981180839750/QueuePipeTester.v:92
    if (vlTOPp->reset) {
	vlTOPp->QueuePipeTester__DOT__q__DOT__value = 0U;
    } else {
	if (vlTOPp->QueuePipeTester__DOT__q__DOT___T_6) {
	    vlTOPp->QueuePipeTester__DOT__q__DOT__value 
		= vlTOPp->QueuePipeTester__DOT__q__DOT___T_12;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/202003062137439184216981180839750/QueuePipeTester.v:92
    if (vlTOPp->reset) {
	vlTOPp->QueuePipeTester__DOT__q__DOT__value_1 = 0U;
    } else {
	if (vlTOPp->QueuePipeTester__DOT__q__DOT___T_8) {
	    vlTOPp->QueuePipeTester__DOT__q__DOT__value_1 
		= vlTOPp->QueuePipeTester__DOT__q__DOT___T_14;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/202003062137439184216981180839750/QueuePipeTester.v:286
    vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_15 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_14));
    vlTOPp->QueuePipeTester__DOT__q__DOT___T_12 = (3U 
						   & ((IData)(1U) 
						      + (IData)(vlTOPp->QueuePipeTester__DOT__q__DOT__value)));
    vlTOPp->QueuePipeTester__DOT__q__DOT___T_14 = (3U 
						   & ((IData)(1U) 
						      + (IData)(vlTOPp->QueuePipeTester__DOT__q__DOT__value_1)));
    vlTOPp->QueuePipeTester__DOT__q__DOT___T_2 = ((IData)(vlTOPp->QueuePipeTester__DOT__q__DOT__value) 
						  == (IData)(vlTOPp->QueuePipeTester__DOT__q__DOT__value_1));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/202003062137439184216981180839750/QueuePipeTester.v:286
    vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_14 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_13));
    vlTOPp->QueuePipeTester__DOT__q__DOT___T_4 = ((IData)(vlTOPp->QueuePipeTester__DOT__q__DOT___T_2) 
						  & (~ (IData)(vlTOPp->QueuePipeTester__DOT__q__DOT___T_1)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/202003062137439184216981180839750/QueuePipeTester.v:286
    vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_13 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_12));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/202003062137439184216981180839750/QueuePipeTester.v:286
    vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_12 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_11));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/202003062137439184216981180839750/QueuePipeTester.v:286
    vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_11 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_10));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/202003062137439184216981180839750/QueuePipeTester.v:286
    vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_10 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_9));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/202003062137439184216981180839750/QueuePipeTester.v:286
    vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_9 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_8));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/202003062137439184216981180839750/QueuePipeTester.v:286
    vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_8 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_7));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/202003062137439184216981180839750/QueuePipeTester.v:286
    vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_7 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_6));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/202003062137439184216981180839750/QueuePipeTester.v:286
    vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_6 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_5));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/202003062137439184216981180839750/QueuePipeTester.v:286
    vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_5 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_4));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/202003062137439184216981180839750/QueuePipeTester.v:286
    vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_4 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_3));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/202003062137439184216981180839750/QueuePipeTester.v:286
    vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_3 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_2));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/202003062137439184216981180839750/QueuePipeTester.v:286
    vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_2 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_1));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueuePipeTester/202003062137439184216981180839750/QueuePipeTester.v:286
    vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_1 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_0));
    vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_0 
	= __Vdly__QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_0;
    vlTOPp->QueuePipeTester__DOT___T_15 = (((IData)(vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_15) 
					    << 0xfU) 
					   | (((IData)(vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_14) 
					       << 0xeU) 
					      | (((IData)(vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_13) 
						  << 0xdU) 
						 | (((IData)(vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_12) 
						     << 0xcU) 
						    | (((IData)(vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_11) 
							<< 0xbU) 
						       | (((IData)(vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_10) 
							   << 0xaU) 
							  | (((IData)(vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_9) 
							      << 9U) 
							     | (((IData)(vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_8) 
								 << 8U) 
								| (((IData)(vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_7) 
								    << 7U) 
								   | (((IData)(vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_6) 
								       << 6U) 
								      | (((IData)(vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_5) 
									  << 5U) 
									 | (((IData)(vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_4) 
									     << 4U) 
									    | (((IData)(vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_3) 
										<< 3U) 
									       | (((IData)(vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_2) 
										<< 2U) 
										| (((IData)(vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_1) 
										<< 1U) 
										| (IData)(vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_0))))))))))))))));
    vlTOPp->QueuePipeTester__DOT__q__DOT___T_8 = (1U 
						  & (((IData)(vlTOPp->QueuePipeTester__DOT___T_15) 
						      >> 5U) 
						     & (~ (IData)(vlTOPp->QueuePipeTester__DOT__q__DOT___T_4))));
    vlTOPp->QueuePipeTester__DOT__q_io_enq_ready = 
	(1U & (((IData)(vlTOPp->QueuePipeTester__DOT___T_15) 
		>> 5U) | (~ ((IData)(vlTOPp->QueuePipeTester__DOT__q__DOT___T_2) 
			     & (IData)(vlTOPp->QueuePipeTester__DOT__q__DOT___T_1)))));
    vlTOPp->QueuePipeTester__DOT___T_24 = ((IData)(vlTOPp->QueuePipeTester__DOT__q_io_enq_ready) 
					   & (0x14U 
					      > (IData)(vlTOPp->QueuePipeTester__DOT__value)));
    vlTOPp->QueuePipeTester__DOT__q__DOT___T_6 = ((IData)(vlTOPp->QueuePipeTester__DOT__q_io_enq_ready) 
						  & (0x14U 
						     > (IData)(vlTOPp->QueuePipeTester__DOT__value)));
}

void VQueuePipeTester::_settle__TOP__2(VQueuePipeTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueuePipeTester::_settle__TOP__2\n"); );
    VQueuePipeTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->QueuePipeTester__DOT___T_25 = (0x14U == (IData)(vlTOPp->QueuePipeTester__DOT__value));
    vlTOPp->QueuePipeTester__DOT___T_27 = (0x1fU & 
					   ((IData)(1U) 
					    + (IData)(vlTOPp->QueuePipeTester__DOT__value)));
    vlTOPp->QueuePipeTester__DOT___T_29 = (0x14U == (IData)(vlTOPp->QueuePipeTester__DOT__value_1));
    vlTOPp->QueuePipeTester__DOT___T_31 = (0x1fU & 
					   ((IData)(1U) 
					    + (IData)(vlTOPp->QueuePipeTester__DOT__value_1)));
    vlTOPp->QueuePipeTester__DOT__q__DOT___T_12 = (3U 
						   & ((IData)(1U) 
						      + (IData)(vlTOPp->QueuePipeTester__DOT__q__DOT__value)));
    vlTOPp->QueuePipeTester__DOT__q__DOT___T_14 = (3U 
						   & ((IData)(1U) 
						      + (IData)(vlTOPp->QueuePipeTester__DOT__q__DOT__value_1)));
    vlTOPp->QueuePipeTester__DOT__q__DOT___T_2 = ((IData)(vlTOPp->QueuePipeTester__DOT__q__DOT__value) 
						  == (IData)(vlTOPp->QueuePipeTester__DOT__q__DOT__value_1));
    vlTOPp->QueuePipeTester__DOT___T_15 = (((IData)(vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_15) 
					    << 0xfU) 
					   | (((IData)(vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_14) 
					       << 0xeU) 
					      | (((IData)(vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_13) 
						  << 0xdU) 
						 | (((IData)(vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_12) 
						     << 0xcU) 
						    | (((IData)(vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_11) 
							<< 0xbU) 
						       | (((IData)(vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_10) 
							   << 0xaU) 
							  | (((IData)(vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_9) 
							      << 9U) 
							     | (((IData)(vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_8) 
								 << 8U) 
								| (((IData)(vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_7) 
								    << 7U) 
								   | (((IData)(vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_6) 
								       << 6U) 
								      | (((IData)(vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_5) 
									  << 5U) 
									 | (((IData)(vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_4) 
									     << 4U) 
									    | (((IData)(vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_3) 
										<< 3U) 
									       | (((IData)(vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_2) 
										<< 2U) 
										| (((IData)(vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_1) 
										<< 1U) 
										| (IData)(vlTOPp->QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_0))))))))))))))));
    vlTOPp->QueuePipeTester__DOT__q__DOT___T_4 = ((IData)(vlTOPp->QueuePipeTester__DOT__q__DOT___T_2) 
						  & (~ (IData)(vlTOPp->QueuePipeTester__DOT__q__DOT___T_1)));
    vlTOPp->QueuePipeTester__DOT__q_io_enq_ready = 
	(1U & (((IData)(vlTOPp->QueuePipeTester__DOT___T_15) 
		>> 5U) | (~ ((IData)(vlTOPp->QueuePipeTester__DOT__q__DOT___T_2) 
			     & (IData)(vlTOPp->QueuePipeTester__DOT__q__DOT___T_1)))));
    vlTOPp->QueuePipeTester__DOT__q__DOT___T_8 = (1U 
						  & (((IData)(vlTOPp->QueuePipeTester__DOT___T_15) 
						      >> 5U) 
						     & (~ (IData)(vlTOPp->QueuePipeTester__DOT__q__DOT___T_4))));
    vlTOPp->QueuePipeTester__DOT___T_24 = ((IData)(vlTOPp->QueuePipeTester__DOT__q_io_enq_ready) 
					   & (0x14U 
					      > (IData)(vlTOPp->QueuePipeTester__DOT__value)));
    vlTOPp->QueuePipeTester__DOT__q__DOT___T_6 = ((IData)(vlTOPp->QueuePipeTester__DOT__q_io_enq_ready) 
						  & (0x14U 
						     > (IData)(vlTOPp->QueuePipeTester__DOT__value)));
}

void VQueuePipeTester::_eval(VQueuePipeTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueuePipeTester::_eval\n"); );
    VQueuePipeTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VQueuePipeTester::_eval_initial(VQueuePipeTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueuePipeTester::_eval_initial\n"); );
    VQueuePipeTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VQueuePipeTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueuePipeTester::final\n"); );
    // Variables
    VQueuePipeTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VQueuePipeTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VQueuePipeTester::_eval_settle(VQueuePipeTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueuePipeTester::_eval_settle\n"); );
    VQueuePipeTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

VL_INLINE_OPT QData VQueuePipeTester::_change_request(VQueuePipeTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueuePipeTester::_change_request\n"); );
    VQueuePipeTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VQueuePipeTester::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueuePipeTester::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG

void VQueuePipeTester::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueuePipeTester::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    QueuePipeTester__DOT__q_io_enq_ready = VL_RAND_RESET_I(1);
    QueuePipeTester__DOT__value = VL_RAND_RESET_I(5);
    QueuePipeTester__DOT__value_1 = VL_RAND_RESET_I(5);
    QueuePipeTester__DOT___T_15 = VL_RAND_RESET_I(16);
    QueuePipeTester__DOT___T_24 = VL_RAND_RESET_I(1);
    QueuePipeTester__DOT___T_25 = VL_RAND_RESET_I(1);
    QueuePipeTester__DOT___T_27 = VL_RAND_RESET_I(5);
    QueuePipeTester__DOT___T_29 = VL_RAND_RESET_I(1);
    QueuePipeTester__DOT___T_31 = VL_RAND_RESET_I(5);
    QueuePipeTester__DOT__q__DOT__value = VL_RAND_RESET_I(2);
    QueuePipeTester__DOT__q__DOT__value_1 = VL_RAND_RESET_I(2);
    QueuePipeTester__DOT__q__DOT___T_1 = VL_RAND_RESET_I(1);
    QueuePipeTester__DOT__q__DOT___T_2 = VL_RAND_RESET_I(1);
    QueuePipeTester__DOT__q__DOT___T_4 = VL_RAND_RESET_I(1);
    QueuePipeTester__DOT__q__DOT___T_6 = VL_RAND_RESET_I(1);
    QueuePipeTester__DOT__q__DOT___T_8 = VL_RAND_RESET_I(1);
    QueuePipeTester__DOT__q__DOT___T_12 = VL_RAND_RESET_I(2);
    QueuePipeTester__DOT__q__DOT___T_14 = VL_RAND_RESET_I(2);
    QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_0 = VL_RAND_RESET_I(1);
    QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_1 = VL_RAND_RESET_I(1);
    QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_2 = VL_RAND_RESET_I(1);
    QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_3 = VL_RAND_RESET_I(1);
    QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_4 = VL_RAND_RESET_I(1);
    QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_5 = VL_RAND_RESET_I(1);
    QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_6 = VL_RAND_RESET_I(1);
    QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_7 = VL_RAND_RESET_I(1);
    QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_8 = VL_RAND_RESET_I(1);
    QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_9 = VL_RAND_RESET_I(1);
    QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_10 = VL_RAND_RESET_I(1);
    QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_11 = VL_RAND_RESET_I(1);
    QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_12 = VL_RAND_RESET_I(1);
    QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_13 = VL_RAND_RESET_I(1);
    QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_14 = VL_RAND_RESET_I(1);
    QueuePipeTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_15 = VL_RAND_RESET_I(1);
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
