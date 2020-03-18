// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAsyncResetAggregateTester.h for the primary calling header

#include "VAsyncResetAggregateTester.h" // For This
#include "VAsyncResetAggregateTester__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VAsyncResetAggregateTester) {
    VAsyncResetAggregateTester__Syms* __restrict vlSymsp = __VlSymsp = new VAsyncResetAggregateTester__Syms(this, name());
    VAsyncResetAggregateTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VAsyncResetAggregateTester::__Vconfigure(VAsyncResetAggregateTester__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VAsyncResetAggregateTester::~VAsyncResetAggregateTester() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VAsyncResetAggregateTester::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VAsyncResetAggregateTester::eval\n"); );
    VAsyncResetAggregateTester__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VAsyncResetAggregateTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VAsyncResetAggregateTester::_eval_initial_loop(VAsyncResetAggregateTester__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VAsyncResetAggregateTester::_sequent__TOP__1(VAsyncResetAggregateTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetAggregateTester::_sequent__TOP__1\n"); );
    VAsyncResetAggregateTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__AsyncResetAggregateTester__DOT__asyncResetNext 
	= vlTOPp->AsyncResetAggregateTester__DOT__asyncResetNext;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetAggregateTester/2020030621374815940010286238801889/AsyncResetAggregateTester.v:169
    vlTOPp->AsyncResetAggregateTester__DOT__value = 
	((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->AsyncResetAggregateTester__DOT___T_2));
    vlTOPp->AsyncResetAggregateTester__DOT__value_1 
	= ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->AsyncResetAggregateTester__DOT___T_5));
    vlTOPp->__Vdly__AsyncResetAggregateTester__DOT__asyncResetNext 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->AsyncResetAggregateTester__DOT___T_6));
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->AsyncResetAggregateTester__DOT___T_8) 
			 & (~ ((5U == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__reg_0_x)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at AsyncResetSpec.scala:69 assert(reg(0).x === 5.U)\n");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->AsyncResetAggregateTester__DOT___T_8) 
			 & (~ ((5U == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__reg_0_x)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: AsyncResetAggregateTester.v:201: Assertion failed in %NAsyncResetAggregateTester\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetAggregateTester/2020030621374815940010286238801889/AsyncResetAggregateTester.v",201,"");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->AsyncResetAggregateTester__DOT___T_8) 
			 & (~ ((6U == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__reg_0_y)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at AsyncResetSpec.scala:70 assert(reg(0).y === 6.U)\n");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->AsyncResetAggregateTester__DOT___T_8) 
			 & (~ ((6U == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__reg_0_y)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: AsyncResetAggregateTester.v:223: Assertion failed in %NAsyncResetAggregateTester\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetAggregateTester/2020030621374815940010286238801889/AsyncResetAggregateTester.v",223,"");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->AsyncResetAggregateTester__DOT___T_8) 
			 & (~ ((7U == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__reg_1_x)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at AsyncResetSpec.scala:71 assert(reg(1).x === 7.U)\n");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->AsyncResetAggregateTester__DOT___T_8) 
			 & (~ ((7U == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__reg_1_x)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: AsyncResetAggregateTester.v:245: Assertion failed in %NAsyncResetAggregateTester\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetAggregateTester/2020030621374815940010286238801889/AsyncResetAggregateTester.v",245,"");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->AsyncResetAggregateTester__DOT___T_8) 
			 & (~ ((8U == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__reg_1_y)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at AsyncResetSpec.scala:72 assert(reg(1).y === 8.U)\n");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->AsyncResetAggregateTester__DOT___T_8) 
			 & (~ ((8U == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__reg_1_y)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: AsyncResetAggregateTester.v:267: Assertion failed in %NAsyncResetAggregateTester\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetAggregateTester/2020030621374815940010286238801889/AsyncResetAggregateTester.v",267,"");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->AsyncResetAggregateTester__DOT___T_27) 
			 & (~ ((0U == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__reg_0_x)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at AsyncResetSpec.scala:75 assert(reg(0).x === 0.U)\n");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->AsyncResetAggregateTester__DOT___T_27) 
			 & (~ ((0U == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__reg_0_x)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: AsyncResetAggregateTester.v:289: Assertion failed in %NAsyncResetAggregateTester\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetAggregateTester/2020030621374815940010286238801889/AsyncResetAggregateTester.v",289,"");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->AsyncResetAggregateTester__DOT___T_27) 
			 & (~ ((0U == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__reg_0_y)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at AsyncResetSpec.scala:76 assert(reg(0).y === 0.U)\n");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->AsyncResetAggregateTester__DOT___T_27) 
			 & (~ ((0U == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__reg_0_y)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: AsyncResetAggregateTester.v:311: Assertion failed in %NAsyncResetAggregateTester\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetAggregateTester/2020030621374815940010286238801889/AsyncResetAggregateTester.v",311,"");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->AsyncResetAggregateTester__DOT___T_27) 
			 & (~ ((0U == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__reg_1_x)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at AsyncResetSpec.scala:77 assert(reg(1).x === 0.U)\n");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->AsyncResetAggregateTester__DOT___T_27) 
			 & (~ ((0U == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__reg_1_x)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: AsyncResetAggregateTester.v:333: Assertion failed in %NAsyncResetAggregateTester\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetAggregateTester/2020030621374815940010286238801889/AsyncResetAggregateTester.v",333,"");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->AsyncResetAggregateTester__DOT___T_27) 
			 & (~ ((0U == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__reg_1_y)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at AsyncResetSpec.scala:78 assert(reg(1).y === 0.U)\n");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->AsyncResetAggregateTester__DOT___T_27) 
			 & (~ ((0U == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__reg_1_y)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: AsyncResetAggregateTester.v:355: Assertion failed in %NAsyncResetAggregateTester\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetAggregateTester/2020030621374815940010286238801889/AsyncResetAggregateTester.v",355,"");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->AsyncResetAggregateTester__DOT___GEN_3) 
			 & (~ ((5U == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__reg_0_x)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at AsyncResetSpec.scala:80 assert(reg(0).x === 5.U)\n");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->AsyncResetAggregateTester__DOT___GEN_3) 
			 & (~ ((5U == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__reg_0_x)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: AsyncResetAggregateTester.v:377: Assertion failed in %NAsyncResetAggregateTester\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetAggregateTester/2020030621374815940010286238801889/AsyncResetAggregateTester.v",377,"");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->AsyncResetAggregateTester__DOT___GEN_3) 
			 & (~ ((6U == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__reg_0_y)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at AsyncResetSpec.scala:81 assert(reg(0).y === 6.U)\n");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->AsyncResetAggregateTester__DOT___GEN_3) 
			 & (~ ((6U == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__reg_0_y)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: AsyncResetAggregateTester.v:399: Assertion failed in %NAsyncResetAggregateTester\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetAggregateTester/2020030621374815940010286238801889/AsyncResetAggregateTester.v",399,"");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->AsyncResetAggregateTester__DOT___GEN_3) 
			 & (~ ((7U == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__reg_1_x)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at AsyncResetSpec.scala:82 assert(reg(1).x === 7.U)\n");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->AsyncResetAggregateTester__DOT___GEN_3) 
			 & (~ ((7U == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__reg_1_x)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: AsyncResetAggregateTester.v:421: Assertion failed in %NAsyncResetAggregateTester\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetAggregateTester/2020030621374815940010286238801889/AsyncResetAggregateTester.v",421,"");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->AsyncResetAggregateTester__DOT___GEN_3) 
			 & (~ ((8U == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__reg_1_y)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at AsyncResetSpec.scala:83 assert(reg(1).y === 8.U)\n");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->AsyncResetAggregateTester__DOT___GEN_3) 
			 & (~ ((8U == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__reg_1_y)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: AsyncResetAggregateTester.v:443: Assertion failed in %NAsyncResetAggregateTester\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetAggregateTester/2020030621374815940010286238801889/AsyncResetAggregateTester.v",443,"");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->AsyncResetAggregateTester__DOT__done) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FINISH_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetAggregateTester/2020030621374815940010286238801889/AsyncResetAggregateTester.v",454,"");
	}
    }
    vlTOPp->AsyncResetAggregateTester__DOT__done = 
	(0xfU == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__value_1));
    vlTOPp->AsyncResetAggregateTester__DOT___T_5 = 
	(0xfU & ((IData)(1U) + (IData)(vlTOPp->AsyncResetAggregateTester__DOT__value_1)));
    vlTOPp->AsyncResetAggregateTester__DOT___T_6 = 
	(4U == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__value_1));
    vlTOPp->AsyncResetAggregateTester__DOT___T_8 = 
	(3U == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__value_1));
    vlTOPp->AsyncResetAggregateTester__DOT___T_27 = 
	((5U <= (IData)(vlTOPp->AsyncResetAggregateTester__DOT__value_1)) 
	 & (7U > (IData)(vlTOPp->AsyncResetAggregateTester__DOT__value_1)));
    vlTOPp->AsyncResetAggregateTester__DOT___T_2 = 
	(3U & ((IData)(1U) + (IData)(vlTOPp->AsyncResetAggregateTester__DOT__value)));
    vlTOPp->AsyncResetAggregateTester__DOT__slowClk 
	= (3U == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__value));
    vlTOPp->AsyncResetAggregateTester__DOT___GEN_3 
	= ((~ (IData)(vlTOPp->AsyncResetAggregateTester__DOT___T_27)) 
	   & (7U <= (IData)(vlTOPp->AsyncResetAggregateTester__DOT__value_1)));
}

void VAsyncResetAggregateTester::_initial__TOP__2(VAsyncResetAggregateTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetAggregateTester::_initial__TOP__2\n"); );
    VAsyncResetAggregateTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetAggregateTester/2020030621374815940010286238801889/AsyncResetAggregateTester.v:115
    if (vlTOPp->AsyncResetAggregateTester__DOT__asyncResetNext) {
	vlTOPp->AsyncResetAggregateTester__DOT__reg_0_x = 0U;
    }
    if (vlTOPp->AsyncResetAggregateTester__DOT__asyncResetNext) {
	vlTOPp->AsyncResetAggregateTester__DOT__reg_0_y = 0U;
    }
    if (vlTOPp->AsyncResetAggregateTester__DOT__asyncResetNext) {
	vlTOPp->AsyncResetAggregateTester__DOT__reg_1_x = 0U;
    }
    if (vlTOPp->AsyncResetAggregateTester__DOT__asyncResetNext) {
	vlTOPp->AsyncResetAggregateTester__DOT__reg_1_y = 0U;
    }
}

void VAsyncResetAggregateTester::_settle__TOP__3(VAsyncResetAggregateTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetAggregateTester::_settle__TOP__3\n"); );
    VAsyncResetAggregateTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AsyncResetAggregateTester__DOT___T_2 = 
	(3U & ((IData)(1U) + (IData)(vlTOPp->AsyncResetAggregateTester__DOT__value)));
    vlTOPp->AsyncResetAggregateTester__DOT__done = 
	(0xfU == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__value_1));
    vlTOPp->AsyncResetAggregateTester__DOT___T_5 = 
	(0xfU & ((IData)(1U) + (IData)(vlTOPp->AsyncResetAggregateTester__DOT__value_1)));
    vlTOPp->AsyncResetAggregateTester__DOT___T_6 = 
	(4U == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__value_1));
    vlTOPp->AsyncResetAggregateTester__DOT___T_8 = 
	(3U == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__value_1));
    vlTOPp->AsyncResetAggregateTester__DOT___T_27 = 
	((5U <= (IData)(vlTOPp->AsyncResetAggregateTester__DOT__value_1)) 
	 & (7U > (IData)(vlTOPp->AsyncResetAggregateTester__DOT__value_1)));
    vlTOPp->AsyncResetAggregateTester__DOT__slowClk 
	= (3U == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__value));
    vlTOPp->AsyncResetAggregateTester__DOT___GEN_3 
	= ((~ (IData)(vlTOPp->AsyncResetAggregateTester__DOT___T_27)) 
	   & (7U <= (IData)(vlTOPp->AsyncResetAggregateTester__DOT__value_1)));
}

VL_INLINE_OPT void VAsyncResetAggregateTester::_sequent__TOP__4(VAsyncResetAggregateTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetAggregateTester::_sequent__TOP__4\n"); );
    VAsyncResetAggregateTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetAggregateTester/2020030621374815940010286238801889/AsyncResetAggregateTester.v:461
    vlTOPp->AsyncResetAggregateTester__DOT__reg_0_x 
	= ((IData)(vlTOPp->AsyncResetAggregateTester__DOT__asyncResetNext)
	    ? 0U : 5U);
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetAggregateTester/2020030621374815940010286238801889/AsyncResetAggregateTester.v:468
    vlTOPp->AsyncResetAggregateTester__DOT__reg_0_y 
	= ((IData)(vlTOPp->AsyncResetAggregateTester__DOT__asyncResetNext)
	    ? 0U : 6U);
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetAggregateTester/2020030621374815940010286238801889/AsyncResetAggregateTester.v:475
    vlTOPp->AsyncResetAggregateTester__DOT__reg_1_x 
	= ((IData)(vlTOPp->AsyncResetAggregateTester__DOT__asyncResetNext)
	    ? 0U : 7U);
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetAggregateTester/2020030621374815940010286238801889/AsyncResetAggregateTester.v:482
    vlTOPp->AsyncResetAggregateTester__DOT__reg_1_y 
	= ((IData)(vlTOPp->AsyncResetAggregateTester__DOT__asyncResetNext)
	    ? 0U : 8U);
}

VL_INLINE_OPT void VAsyncResetAggregateTester::_sequent__TOP__5(VAsyncResetAggregateTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetAggregateTester::_sequent__TOP__5\n"); );
    VAsyncResetAggregateTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AsyncResetAggregateTester__DOT__asyncResetNext 
	= vlTOPp->__Vdly__AsyncResetAggregateTester__DOT__asyncResetNext;
}

void VAsyncResetAggregateTester::_eval(VAsyncResetAggregateTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetAggregateTester::_eval\n"); );
    VAsyncResetAggregateTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__AsyncResetAggregateTester__DOT__asyncResetNext) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__AsyncResetAggregateTester__DOT__asyncResetNext))) 
	 | ((IData)(vlTOPp->AsyncResetAggregateTester__DOT__slowClk) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP__AsyncResetAggregateTester__DOT__slowClk))))) {
	vlTOPp->_sequent__TOP__4(vlSymsp);
	vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__5(vlSymsp);
	vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__AsyncResetAggregateTester__DOT__asyncResetNext 
	= vlTOPp->__VinpClk__TOP__AsyncResetAggregateTester__DOT__asyncResetNext;
    vlTOPp->__Vclklast__TOP__AsyncResetAggregateTester__DOT__slowClk 
	= vlTOPp->AsyncResetAggregateTester__DOT__slowClk;
    vlTOPp->__VinpClk__TOP__AsyncResetAggregateTester__DOT__asyncResetNext 
	= vlTOPp->AsyncResetAggregateTester__DOT__asyncResetNext;
}

void VAsyncResetAggregateTester::_eval_initial(VAsyncResetAggregateTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetAggregateTester::_eval_initial\n"); );
    VAsyncResetAggregateTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void VAsyncResetAggregateTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetAggregateTester::final\n"); );
    // Variables
    VAsyncResetAggregateTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VAsyncResetAggregateTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VAsyncResetAggregateTester::_eval_settle(VAsyncResetAggregateTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetAggregateTester::_eval_settle\n"); );
    VAsyncResetAggregateTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

VL_INLINE_OPT QData VAsyncResetAggregateTester::_change_request(VAsyncResetAggregateTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetAggregateTester::_change_request\n"); );
    VAsyncResetAggregateTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlTOPp->AsyncResetAggregateTester__DOT__asyncResetNext ^ vlTOPp->__Vchglast__TOP__AsyncResetAggregateTester__DOT__asyncResetNext));
    VL_DEBUG_IF( if(__req && ((vlTOPp->AsyncResetAggregateTester__DOT__asyncResetNext ^ vlTOPp->__Vchglast__TOP__AsyncResetAggregateTester__DOT__asyncResetNext))) VL_DBG_MSGF("        CHANGE: /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetAggregateTester/2020030621374815940010286238801889/AsyncResetAggregateTester.v:14: AsyncResetAggregateTester.asyncResetNext\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__AsyncResetAggregateTester__DOT__asyncResetNext 
	= vlTOPp->AsyncResetAggregateTester__DOT__asyncResetNext;
    return __req;
}

#ifdef VL_DEBUG
void VAsyncResetAggregateTester::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetAggregateTester::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG

void VAsyncResetAggregateTester::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetAggregateTester::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    AsyncResetAggregateTester__DOT__value = VL_RAND_RESET_I(2);
    AsyncResetAggregateTester__DOT___T_2 = VL_RAND_RESET_I(2);
    AsyncResetAggregateTester__DOT__slowClk = VL_RAND_RESET_I(1);
    AsyncResetAggregateTester__DOT__value_1 = VL_RAND_RESET_I(4);
    AsyncResetAggregateTester__DOT__done = VL_RAND_RESET_I(1);
    AsyncResetAggregateTester__DOT___T_5 = VL_RAND_RESET_I(4);
    AsyncResetAggregateTester__DOT__asyncResetNext = VL_RAND_RESET_I(1);
    AsyncResetAggregateTester__DOT___T_6 = VL_RAND_RESET_I(1);
    AsyncResetAggregateTester__DOT__reg_0_x = VL_RAND_RESET_I(8);
    AsyncResetAggregateTester__DOT__reg_0_y = VL_RAND_RESET_I(8);
    AsyncResetAggregateTester__DOT__reg_1_x = VL_RAND_RESET_I(8);
    AsyncResetAggregateTester__DOT__reg_1_y = VL_RAND_RESET_I(8);
    AsyncResetAggregateTester__DOT___T_8 = VL_RAND_RESET_I(1);
    AsyncResetAggregateTester__DOT___T_27 = VL_RAND_RESET_I(1);
    AsyncResetAggregateTester__DOT___GEN_3 = VL_RAND_RESET_I(1);
    __Vdly__AsyncResetAggregateTester__DOT__asyncResetNext = VL_RAND_RESET_I(1);
    __VinpClk__TOP__AsyncResetAggregateTester__DOT__asyncResetNext = VL_RAND_RESET_I(1);
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
    __Vclklast__TOP____VinpClk__TOP__AsyncResetAggregateTester__DOT__asyncResetNext = VL_RAND_RESET_I(1);
    __Vclklast__TOP__AsyncResetAggregateTester__DOT__slowClk = VL_RAND_RESET_I(1);
    __Vchglast__TOP__AsyncResetAggregateTester__DOT__asyncResetNext = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
