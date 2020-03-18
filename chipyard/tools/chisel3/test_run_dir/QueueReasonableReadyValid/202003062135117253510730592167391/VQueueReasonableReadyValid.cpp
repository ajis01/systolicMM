// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VQueueReasonableReadyValid.h for the primary calling header

#include "VQueueReasonableReadyValid.h" // For This
#include "VQueueReasonableReadyValid__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VQueueReasonableReadyValid) {
    VQueueReasonableReadyValid__Syms* __restrict vlSymsp = __VlSymsp = new VQueueReasonableReadyValid__Syms(this, name());
    VQueueReasonableReadyValid* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VQueueReasonableReadyValid::__Vconfigure(VQueueReasonableReadyValid__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VQueueReasonableReadyValid::~VQueueReasonableReadyValid() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VQueueReasonableReadyValid::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VQueueReasonableReadyValid::eval\n"); );
    VQueueReasonableReadyValid__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VQueueReasonableReadyValid* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VQueueReasonableReadyValid::_eval_initial_loop(VQueueReasonableReadyValid__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VQueueReasonableReadyValid::_sequent__TOP__1(VQueueReasonableReadyValid__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueReasonableReadyValid::_sequent__TOP__1\n"); );
    VQueueReasonableReadyValid* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_0,0,0);
    // Body
    __Vdly__QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_0 
	= vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueReasonableReadyValid/202003062135117253510730592167391/QueueReasonableReadyValid.v:462
    if (vlTOPp->reset) {
	vlTOPp->QueueReasonableReadyValid__DOT__value = 0U;
    } else {
	if (vlTOPp->QueueReasonableReadyValid__DOT___T_27) {
	    vlTOPp->QueueReasonableReadyValid__DOT__value 
		= ((IData)(vlTOPp->QueueReasonableReadyValid__DOT___T_28)
		    ? 0U : (IData)(vlTOPp->QueueReasonableReadyValid__DOT___T_30));
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->QueueReasonableReadyValid__DOT__value_1 = 0U;
    } else {
	if ((((IData)(vlTOPp->QueueReasonableReadyValid__DOT___T_20) 
	      >> 4U) & (IData)(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT___T_1))) {
	    vlTOPp->QueueReasonableReadyValid__DOT__value_1 
		= ((IData)(vlTOPp->QueueReasonableReadyValid__DOT___T_32)
		    ? 0U : (IData)(vlTOPp->QueueReasonableReadyValid__DOT___T_34));
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT___T_1)) 
				   | (IData)(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT___T_1)) 
				  | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at QueueSpec.scala:47 assert(q.io.enq.ready || q.io.count === queueDepth.U)\n");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT___T_1)) 
				   | (IData)(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT___T_1)) 
				  | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: QueueReasonableReadyValid.v:501: Assertion failed in %NQueueReasonableReadyValid\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueReasonableReadyValid/202003062135117253510730592167391/QueueReasonableReadyValid.v",501,"");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY((1U & (~ (((IData)(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT___T_1) 
				   | (~ (IData)(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT___T_1))) 
				  | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at QueueSpec.scala:51 assert(q.io.deq.valid || q.io.count === 0.U)\n");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY((1U & (~ (((IData)(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT___T_1) 
				   | (~ (IData)(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT___T_1))) 
				  | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: QueueReasonableReadyValid.v:523: Assertion failed in %NQueueReasonableReadyValid\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueReasonableReadyValid/202003062135117253510730592167391/QueueReasonableReadyValid.v",523,"");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->QueueReasonableReadyValid__DOT___T_32) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FINISH_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueReasonableReadyValid/202003062135117253510730592167391/QueueReasonableReadyValid.v",534,"");
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueReasonableReadyValid/202003062135117253510730592167391/QueueReasonableReadyValid.v:242
    __Vdly__QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_0 
	= ((IData)(vlTOPp->reset) | ((((IData)(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_15) 
				       ^ (IData)(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_13)) 
				      ^ (IData)(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_12)) 
				     ^ (IData)(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_10)));
    vlTOPp->QueueReasonableReadyValid__DOT___T_32 = 
	(0x14U == (IData)(vlTOPp->QueueReasonableReadyValid__DOT__value_1));
    vlTOPp->QueueReasonableReadyValid__DOT___T_34 = 
	(0x1fU & ((IData)(1U) + (IData)(vlTOPp->QueueReasonableReadyValid__DOT__value_1)));
    vlTOPp->QueueReasonableReadyValid__DOT___T_28 = 
	(0x14U == (IData)(vlTOPp->QueueReasonableReadyValid__DOT__value));
    vlTOPp->QueueReasonableReadyValid__DOT___T_30 = 
	(0x1fU & ((IData)(1U) + (IData)(vlTOPp->QueueReasonableReadyValid__DOT__value)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueReasonableReadyValid/202003062135117253510730592167391/QueueReasonableReadyValid.v:61
    if (vlTOPp->reset) {
	vlTOPp->QueueReasonableReadyValid__DOT__q__DOT___T_1 = 0U;
    } else {
	if (vlTOPp->QueueReasonableReadyValid__DOT__q__DOT___T_11) {
	    vlTOPp->QueueReasonableReadyValid__DOT__q__DOT___T_1 
		= vlTOPp->QueueReasonableReadyValid__DOT__q__DOT___T_6;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueReasonableReadyValid/202003062135117253510730592167391/QueueReasonableReadyValid.v:242
    vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_15 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_14));
    vlTOPp->QueueReasonableReadyValid__DOT___T_27 = 
	((~ (IData)(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT___T_1)) 
	 & (0x14U > (IData)(vlTOPp->QueueReasonableReadyValid__DOT__value)));
    vlTOPp->QueueReasonableReadyValid__DOT__q__DOT___T_6 
	= ((~ (IData)(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT___T_1)) 
	   & (0x14U > (IData)(vlTOPp->QueueReasonableReadyValid__DOT__value)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueReasonableReadyValid/202003062135117253510730592167391/QueueReasonableReadyValid.v:242
    vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_14 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_13));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueReasonableReadyValid/202003062135117253510730592167391/QueueReasonableReadyValid.v:242
    vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_13 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_12));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueReasonableReadyValid/202003062135117253510730592167391/QueueReasonableReadyValid.v:242
    vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_12 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_11));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueReasonableReadyValid/202003062135117253510730592167391/QueueReasonableReadyValid.v:242
    vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_11 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_10));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueReasonableReadyValid/202003062135117253510730592167391/QueueReasonableReadyValid.v:242
    vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_10 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_9));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueReasonableReadyValid/202003062135117253510730592167391/QueueReasonableReadyValid.v:242
    vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_9 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_8));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueReasonableReadyValid/202003062135117253510730592167391/QueueReasonableReadyValid.v:242
    vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_8 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_7));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueReasonableReadyValid/202003062135117253510730592167391/QueueReasonableReadyValid.v:242
    vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_7 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_6));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueReasonableReadyValid/202003062135117253510730592167391/QueueReasonableReadyValid.v:242
    vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_6 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_5));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueReasonableReadyValid/202003062135117253510730592167391/QueueReasonableReadyValid.v:242
    vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_5 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_4));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueReasonableReadyValid/202003062135117253510730592167391/QueueReasonableReadyValid.v:242
    vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_4 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_3));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueReasonableReadyValid/202003062135117253510730592167391/QueueReasonableReadyValid.v:242
    vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_3 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_2));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueReasonableReadyValid/202003062135117253510730592167391/QueueReasonableReadyValid.v:242
    vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_2 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_1));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueReasonableReadyValid/202003062135117253510730592167391/QueueReasonableReadyValid.v:242
    vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_1 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_0));
    vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_0 
	= __Vdly__QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_0;
    vlTOPp->QueueReasonableReadyValid__DOT___T_20 = 
	(((IData)(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_15) 
	  << 0xfU) | (((IData)(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_14) 
		       << 0xeU) | (((IData)(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_13) 
				    << 0xdU) | (((IData)(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_12) 
						 << 0xcU) 
						| (((IData)(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_11) 
						    << 0xbU) 
						   | (((IData)(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_10) 
						       << 0xaU) 
						      | (((IData)(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_9) 
							  << 9U) 
							 | (((IData)(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_8) 
							     << 8U) 
							    | (((IData)(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_7) 
								<< 7U) 
							       | (((IData)(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_6) 
								   << 6U) 
								  | (((IData)(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_5) 
								      << 5U) 
								     | (((IData)(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_4) 
									 << 4U) 
									| (((IData)(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_3) 
									    << 3U) 
									   | (((IData)(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_2) 
									       << 2U) 
									      | (((IData)(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_1) 
										<< 1U) 
										| (IData)(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_0))))))))))))))));
    vlTOPp->QueueReasonableReadyValid__DOT__q__DOT___T_11 
	= ((IData)(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT___T_6) 
	   != (((IData)(vlTOPp->QueueReasonableReadyValid__DOT___T_20) 
		>> 4U) & (IData)(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT___T_1)));
}

void VQueueReasonableReadyValid::_settle__TOP__2(VQueueReasonableReadyValid__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueReasonableReadyValid::_settle__TOP__2\n"); );
    VQueueReasonableReadyValid* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->QueueReasonableReadyValid__DOT___T_28 = 
	(0x14U == (IData)(vlTOPp->QueueReasonableReadyValid__DOT__value));
    vlTOPp->QueueReasonableReadyValid__DOT___T_30 = 
	(0x1fU & ((IData)(1U) + (IData)(vlTOPp->QueueReasonableReadyValid__DOT__value)));
    vlTOPp->QueueReasonableReadyValid__DOT___T_32 = 
	(0x14U == (IData)(vlTOPp->QueueReasonableReadyValid__DOT__value_1));
    vlTOPp->QueueReasonableReadyValid__DOT___T_34 = 
	(0x1fU & ((IData)(1U) + (IData)(vlTOPp->QueueReasonableReadyValid__DOT__value_1)));
    vlTOPp->QueueReasonableReadyValid__DOT___T_27 = 
	((~ (IData)(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT___T_1)) 
	 & (0x14U > (IData)(vlTOPp->QueueReasonableReadyValid__DOT__value)));
    vlTOPp->QueueReasonableReadyValid__DOT__q__DOT___T_6 
	= ((~ (IData)(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT___T_1)) 
	   & (0x14U > (IData)(vlTOPp->QueueReasonableReadyValid__DOT__value)));
    vlTOPp->QueueReasonableReadyValid__DOT___T_20 = 
	(((IData)(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_15) 
	  << 0xfU) | (((IData)(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_14) 
		       << 0xeU) | (((IData)(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_13) 
				    << 0xdU) | (((IData)(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_12) 
						 << 0xcU) 
						| (((IData)(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_11) 
						    << 0xbU) 
						   | (((IData)(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_10) 
						       << 0xaU) 
						      | (((IData)(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_9) 
							  << 9U) 
							 | (((IData)(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_8) 
							     << 8U) 
							    | (((IData)(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_7) 
								<< 7U) 
							       | (((IData)(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_6) 
								   << 6U) 
								  | (((IData)(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_5) 
								      << 5U) 
								     | (((IData)(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_4) 
									 << 4U) 
									| (((IData)(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_3) 
									    << 3U) 
									   | (((IData)(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_2) 
									       << 2U) 
									      | (((IData)(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_1) 
										<< 1U) 
										| (IData)(vlTOPp->QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_0))))))))))))))));
    vlTOPp->QueueReasonableReadyValid__DOT__q__DOT___T_11 
	= ((IData)(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT___T_6) 
	   != (((IData)(vlTOPp->QueueReasonableReadyValid__DOT___T_20) 
		>> 4U) & (IData)(vlTOPp->QueueReasonableReadyValid__DOT__q__DOT___T_1)));
}

void VQueueReasonableReadyValid::_eval(VQueueReasonableReadyValid__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueReasonableReadyValid::_eval\n"); );
    VQueueReasonableReadyValid* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VQueueReasonableReadyValid::_eval_initial(VQueueReasonableReadyValid__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueReasonableReadyValid::_eval_initial\n"); );
    VQueueReasonableReadyValid* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VQueueReasonableReadyValid::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueReasonableReadyValid::final\n"); );
    // Variables
    VQueueReasonableReadyValid__Syms* __restrict vlSymsp = this->__VlSymsp;
    VQueueReasonableReadyValid* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VQueueReasonableReadyValid::_eval_settle(VQueueReasonableReadyValid__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueReasonableReadyValid::_eval_settle\n"); );
    VQueueReasonableReadyValid* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

VL_INLINE_OPT QData VQueueReasonableReadyValid::_change_request(VQueueReasonableReadyValid__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueReasonableReadyValid::_change_request\n"); );
    VQueueReasonableReadyValid* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VQueueReasonableReadyValid::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueReasonableReadyValid::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG

void VQueueReasonableReadyValid::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueReasonableReadyValid::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    QueueReasonableReadyValid__DOT__value = VL_RAND_RESET_I(5);
    QueueReasonableReadyValid__DOT__value_1 = VL_RAND_RESET_I(5);
    QueueReasonableReadyValid__DOT___T_20 = VL_RAND_RESET_I(16);
    QueueReasonableReadyValid__DOT___T_27 = VL_RAND_RESET_I(1);
    QueueReasonableReadyValid__DOT___T_28 = VL_RAND_RESET_I(1);
    QueueReasonableReadyValid__DOT___T_30 = VL_RAND_RESET_I(5);
    QueueReasonableReadyValid__DOT___T_32 = VL_RAND_RESET_I(1);
    QueueReasonableReadyValid__DOT___T_34 = VL_RAND_RESET_I(5);
    QueueReasonableReadyValid__DOT__q__DOT___T_1 = VL_RAND_RESET_I(1);
    QueueReasonableReadyValid__DOT__q__DOT___T_6 = VL_RAND_RESET_I(1);
    QueueReasonableReadyValid__DOT__q__DOT___T_11 = VL_RAND_RESET_I(1);
    QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_0 = VL_RAND_RESET_I(1);
    QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_1 = VL_RAND_RESET_I(1);
    QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_2 = VL_RAND_RESET_I(1);
    QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_3 = VL_RAND_RESET_I(1);
    QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_4 = VL_RAND_RESET_I(1);
    QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_5 = VL_RAND_RESET_I(1);
    QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_6 = VL_RAND_RESET_I(1);
    QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_7 = VL_RAND_RESET_I(1);
    QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_8 = VL_RAND_RESET_I(1);
    QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_9 = VL_RAND_RESET_I(1);
    QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_10 = VL_RAND_RESET_I(1);
    QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_11 = VL_RAND_RESET_I(1);
    QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_12 = VL_RAND_RESET_I(1);
    QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_13 = VL_RAND_RESET_I(1);
    QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_14 = VL_RAND_RESET_I(1);
    QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_15 = VL_RAND_RESET_I(1);
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
