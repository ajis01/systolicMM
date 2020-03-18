// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VQueueCloneTester.h for the primary calling header

#include "VQueueCloneTester.h" // For This
#include "VQueueCloneTester__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VQueueCloneTester) {
    VQueueCloneTester__Syms* __restrict vlSymsp = __VlSymsp = new VQueueCloneTester__Syms(this, name());
    VQueueCloneTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VQueueCloneTester::__Vconfigure(VQueueCloneTester__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VQueueCloneTester::~VQueueCloneTester() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VQueueCloneTester::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VQueueCloneTester::eval\n"); );
    VQueueCloneTester__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VQueueCloneTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VQueueCloneTester::_eval_initial_loop(VQueueCloneTester__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VQueueCloneTester::_sequent__TOP__1(VQueueCloneTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueCloneTester::_sequent__TOP__1\n"); );
    VQueueCloneTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdlyvdim0__QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT___T__v0,0,0);
    VL_SIG8(__Vdlyvset__QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT___T__v0,0,0);
    VL_SIG8(__Vdlyvdim0__QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT___T__v0,0,0);
    VL_SIG8(__Vdlyvset__QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT___T__v0,0,0);
    VL_SIG(__Vdlyvval__QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT___T__v0,31,0);
    // Body
    __Vdlyvset__QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT___T__v0 = 0U;
    __Vdlyvset__QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT___T__v0 = 0U;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/2020030621354712420316267793390517/QueueCloneTester.v:102
    if (vlTOPp->reset) {
	vlTOPp->QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT___T_1 = 0U;
    } else {
	if (((IData)(vlTOPp->QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT___T_6) 
	     != (IData)(vlTOPp->QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT___T_8))) {
	    vlTOPp->QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT___T_1 
		= vlTOPp->QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT___T_6;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/2020030621354712420316267793390517/QueueCloneTester.v:102
    if (vlTOPp->reset) {
	vlTOPp->QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT___T_1 = 0U;
    } else {
	if (((IData)(vlTOPp->QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT___T_6) 
	     != (IData)(vlTOPp->QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT___T_8))) {
	    vlTOPp->QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT___T_1 
		= vlTOPp->QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT___T_6;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/2020030621354712420316267793390517/QueueCloneTester.v:102
    if ((1U & ((~ (IData)(vlTOPp->QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT___T_5)) 
	       & (~ (IData)(vlTOPp->QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT___T_4))))) {
	__Vdlyvval__QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT___T__v0 
	    = vlTOPp->QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT___T
	    [vlTOPp->QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT__value_1];
	__Vdlyvset__QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT___T__v0 = 1U;
	__Vdlyvdim0__QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT___T__v0 
	    = vlTOPp->QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT__value;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/2020030621354712420316267793390517/QueueCloneTester.v:102
    if (((~ (IData)(vlTOPp->QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT___T_5)) 
	 & (IData)(vlTOPp->QueueCloneTester__DOT__start))) {
	__Vdlyvset__QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT___T__v0 = 1U;
	__Vdlyvdim0__QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT___T__v0 
	    = vlTOPp->QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT__value;
    }
    // ALWAYSPOST at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/2020030621354712420316267793390517/QueueCloneTester.v:103
    if (__Vdlyvset__QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT___T__v0) {
	vlTOPp->QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT___T[__Vdlyvdim0__QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT___T__v0] = 0x2aU;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/2020030621354712420316267793390517/QueueCloneTester.v:102
    if (vlTOPp->reset) {
	vlTOPp->QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT__value_1 = 0U;
    } else {
	if (vlTOPp->QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT___T_8) {
	    vlTOPp->QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT__value_1 
		= vlTOPp->QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT___T_14;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/2020030621354712420316267793390517/QueueCloneTester.v:102
    if (vlTOPp->reset) {
	vlTOPp->QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT__value = 0U;
    } else {
	if (vlTOPp->QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT___T_6) {
	    vlTOPp->QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT__value 
		= vlTOPp->QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT___T_12;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/2020030621354712420316267793390517/QueueCloneTester.v:102
    if (vlTOPp->reset) {
	vlTOPp->QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT__value = 0U;
    } else {
	if (vlTOPp->QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT___T_6) {
	    vlTOPp->QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT__value 
		= vlTOPp->QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT___T_12;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/2020030621354712420316267793390517/QueueCloneTester.v:304
    vlTOPp->QueueCloneTester__DOT__start = ((IData)(vlTOPp->reset) 
					    | (IData)(vlTOPp->QueueCloneTester__DOT___T));
    vlTOPp->QueueCloneTester__DOT__accept = (1U & (
						   (~ (IData)(vlTOPp->reset)) 
						   & (~ (IData)(vlTOPp->QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT___T_4))));
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->QueueCloneTester__DOT___T_1) 
			 & (~ ((0x2aU == vlTOPp->QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT___T
				[vlTOPp->QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT__value_1]) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at CloneModuleSpec.scala:54 assert(dut.io.deq.bits === x.U)\n");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->QueueCloneTester__DOT___T_1) 
			 & (~ ((0x2aU == vlTOPp->QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT___T
				[vlTOPp->QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT__value_1]) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: QueueCloneTester.v:327: Assertion failed in %NQueueCloneTester\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/2020030621354712420316267793390517/QueueCloneTester.v",327,"");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->QueueCloneTester__DOT___T_1) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FINISH_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/2020030621354712420316267793390517/QueueCloneTester.v",338,"");
	}
    }
    // ALWAYSPOST at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/2020030621354712420316267793390517/QueueCloneTester.v:103
    if (__Vdlyvset__QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT___T__v0) {
	vlTOPp->QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT___T[__Vdlyvdim0__QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT___T__v0] 
	    = __Vdlyvval__QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT___T__v0;
    }
    vlTOPp->QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT___T_14 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT__value_1)));
    vlTOPp->QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT___T_12 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT__value)));
    vlTOPp->QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT___T_12 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT__value)));
    vlTOPp->QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT___T_2 
	= ((IData)(vlTOPp->QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT__value) 
	   == (IData)(vlTOPp->QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT__value_1));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/QueueCloneTester/2020030621354712420316267793390517/QueueCloneTester.v:102
    if (vlTOPp->reset) {
	vlTOPp->QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT__value_1 = 0U;
    } else {
	if (vlTOPp->QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT___T_8) {
	    vlTOPp->QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT__value_1 
		= vlTOPp->QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT___T_14;
	}
    }
    vlTOPp->QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT___T_4 
	= ((IData)(vlTOPp->QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT___T_2) 
	   & (~ (IData)(vlTOPp->QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT___T_1)));
    vlTOPp->QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT___T_5 
	= ((IData)(vlTOPp->QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT___T_2) 
	   & (IData)(vlTOPp->QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT___T_1));
    vlTOPp->QueueCloneTester__DOT___T = ((~ (IData)(vlTOPp->QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT___T_5)) 
					 & (IData)(vlTOPp->QueueCloneTester__DOT__start));
    vlTOPp->QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT___T_6 
	= ((~ (IData)(vlTOPp->QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT___T_5)) 
	   & (IData)(vlTOPp->QueueCloneTester__DOT__start));
    vlTOPp->QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT___T_14 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT__value_1)));
    vlTOPp->QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT___T_2 
	= ((IData)(vlTOPp->QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT__value) 
	   == (IData)(vlTOPp->QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT__value_1));
    vlTOPp->QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT___T_4 
	= ((IData)(vlTOPp->QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT___T_2) 
	   & (~ (IData)(vlTOPp->QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT___T_1)));
    vlTOPp->QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT___T_5 
	= ((IData)(vlTOPp->QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT___T_2) 
	   & (IData)(vlTOPp->QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT___T_1));
    vlTOPp->QueueCloneTester__DOT___T_1 = ((IData)(vlTOPp->QueueCloneTester__DOT__accept) 
					   & (~ (IData)(vlTOPp->QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT___T_4)));
    vlTOPp->QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT___T_8 
	= ((IData)(vlTOPp->QueueCloneTester__DOT__accept) 
	   & (~ (IData)(vlTOPp->QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT___T_4)));
    vlTOPp->QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT___T_8 
	= (1U & ((~ (IData)(vlTOPp->QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT___T_5)) 
		 & (~ (IData)(vlTOPp->QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT___T_4))));
    vlTOPp->QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT___T_6 
	= (1U & ((~ (IData)(vlTOPp->QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT___T_5)) 
		 & (~ (IData)(vlTOPp->QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT___T_4))));
}

void VQueueCloneTester::_settle__TOP__2(VQueueCloneTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueCloneTester::_settle__TOP__2\n"); );
    VQueueCloneTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT___T_12 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT__value)));
    vlTOPp->QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT___T_14 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT__value_1)));
    vlTOPp->QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT___T_12 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT__value)));
    vlTOPp->QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT___T_2 
	= ((IData)(vlTOPp->QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT__value) 
	   == (IData)(vlTOPp->QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT__value_1));
    vlTOPp->QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT___T_14 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT__value_1)));
    vlTOPp->QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT___T_2 
	= ((IData)(vlTOPp->QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT__value) 
	   == (IData)(vlTOPp->QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT__value_1));
    vlTOPp->QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT___T_4 
	= ((IData)(vlTOPp->QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT___T_2) 
	   & (~ (IData)(vlTOPp->QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT___T_1)));
    vlTOPp->QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT___T_5 
	= ((IData)(vlTOPp->QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT___T_2) 
	   & (IData)(vlTOPp->QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT___T_1));
    vlTOPp->QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT___T_4 
	= ((IData)(vlTOPp->QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT___T_2) 
	   & (~ (IData)(vlTOPp->QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT___T_1)));
    vlTOPp->QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT___T_5 
	= ((IData)(vlTOPp->QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT___T_2) 
	   & (IData)(vlTOPp->QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT___T_1));
    vlTOPp->QueueCloneTester__DOT___T = ((~ (IData)(vlTOPp->QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT___T_5)) 
					 & (IData)(vlTOPp->QueueCloneTester__DOT__start));
    vlTOPp->QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT___T_6 
	= ((~ (IData)(vlTOPp->QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT___T_5)) 
	   & (IData)(vlTOPp->QueueCloneTester__DOT__start));
    vlTOPp->QueueCloneTester__DOT___T_1 = ((IData)(vlTOPp->QueueCloneTester__DOT__accept) 
					   & (~ (IData)(vlTOPp->QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT___T_4)));
    vlTOPp->QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT___T_8 
	= ((IData)(vlTOPp->QueueCloneTester__DOT__accept) 
	   & (~ (IData)(vlTOPp->QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT___T_4)));
    vlTOPp->QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT___T_8 
	= (1U & ((~ (IData)(vlTOPp->QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT___T_5)) 
		 & (~ (IData)(vlTOPp->QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT___T_4))));
    vlTOPp->QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT___T_6 
	= (1U & ((~ (IData)(vlTOPp->QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT___T_5)) 
		 & (~ (IData)(vlTOPp->QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT___T_4))));
}

void VQueueCloneTester::_eval(VQueueCloneTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueCloneTester::_eval\n"); );
    VQueueCloneTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VQueueCloneTester::_eval_initial(VQueueCloneTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueCloneTester::_eval_initial\n"); );
    VQueueCloneTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VQueueCloneTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueCloneTester::final\n"); );
    // Variables
    VQueueCloneTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VQueueCloneTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VQueueCloneTester::_eval_settle(VQueueCloneTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueCloneTester::_eval_settle\n"); );
    VQueueCloneTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

VL_INLINE_OPT QData VQueueCloneTester::_change_request(VQueueCloneTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueCloneTester::_change_request\n"); );
    VQueueCloneTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VQueueCloneTester::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueCloneTester::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG

void VQueueCloneTester::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueCloneTester::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    QueueCloneTester__DOT___T = VL_RAND_RESET_I(1);
    QueueCloneTester__DOT__start = VL_RAND_RESET_I(1);
    QueueCloneTester__DOT__accept = VL_RAND_RESET_I(1);
    QueueCloneTester__DOT___T_1 = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
	    QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT___T[__Vi0] = VL_RAND_RESET_I(32);
    }}
    QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT__value = VL_RAND_RESET_I(1);
    QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT__value_1 = VL_RAND_RESET_I(1);
    QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT___T_1 = VL_RAND_RESET_I(1);
    QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT___T_2 = VL_RAND_RESET_I(1);
    QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT___T_4 = VL_RAND_RESET_I(1);
    QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT___T_5 = VL_RAND_RESET_I(1);
    QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT___T_6 = VL_RAND_RESET_I(1);
    QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT___T_8 = VL_RAND_RESET_I(1);
    QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT___T_12 = VL_RAND_RESET_I(1);
    QueueCloneTester__DOT__dut__DOT__MultiIOQueue__DOT__impl__DOT___T_14 = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
	    QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT___T[__Vi0] = VL_RAND_RESET_I(32);
    }}
    QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT__value = VL_RAND_RESET_I(1);
    QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT__value_1 = VL_RAND_RESET_I(1);
    QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT___T_1 = VL_RAND_RESET_I(1);
    QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT___T_2 = VL_RAND_RESET_I(1);
    QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT___T_4 = VL_RAND_RESET_I(1);
    QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT___T_5 = VL_RAND_RESET_I(1);
    QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT___T_6 = VL_RAND_RESET_I(1);
    QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT___T_8 = VL_RAND_RESET_I(1);
    QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT___T_12 = VL_RAND_RESET_I(1);
    QueueCloneTester__DOT__dut__DOT___T__DOT__impl__DOT___T_14 = VL_RAND_RESET_I(1);
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
