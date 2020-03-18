// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMixedVecRegTester.h for the primary calling header

#include "VMixedVecRegTester.h" // For This
#include "VMixedVecRegTester__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VMixedVecRegTester) {
    VMixedVecRegTester__Syms* __restrict vlSymsp = __VlSymsp = new VMixedVecRegTester__Syms(this, name());
    VMixedVecRegTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VMixedVecRegTester::__Vconfigure(VMixedVecRegTester__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VMixedVecRegTester::~VMixedVecRegTester() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VMixedVecRegTester::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VMixedVecRegTester::eval\n"); );
    VMixedVecRegTester__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VMixedVecRegTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VMixedVecRegTester::_eval_initial_loop(VMixedVecRegTester__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VMixedVecRegTester::_sequent__TOP__1(VMixedVecRegTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecRegTester::_sequent__TOP__1\n"); );
    VMixedVecRegTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__MixedVecRegTester__DOT__reg_7,0,0);
    VL_SIG8(__Vdly__MixedVecRegTester__DOT__reg_6,0,0);
    VL_SIG8(__Vdly__MixedVecRegTester__DOT__reg_3,0,0);
    VL_SIG8(__Vdly__MixedVecRegTester__DOT__reg_1,0,0);
    // Body
    __Vdly__MixedVecRegTester__DOT__reg_7 = vlTOPp->MixedVecRegTester__DOT__reg_7;
    __Vdly__MixedVecRegTester__DOT__reg_6 = vlTOPp->MixedVecRegTester__DOT__reg_6;
    __Vdly__MixedVecRegTester__DOT__reg_3 = vlTOPp->MixedVecRegTester__DOT__reg_3;
    __Vdly__MixedVecRegTester__DOT__reg_1 = vlTOPp->MixedVecRegTester__DOT__reg_1;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/MixedVecRegTester/202003062246072983036929099760157/MixedVecRegTester.v:90
    __Vdly__MixedVecRegTester__DOT__reg_7 = (1U & (
						   (~ (IData)(vlTOPp->MixedVecRegTester__DOT__doneReg)) 
						   | (IData)(vlTOPp->MixedVecRegTester__DOT__reg_7)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/MixedVecRegTester/202003062246072983036929099760157/MixedVecRegTester.v:90
    __Vdly__MixedVecRegTester__DOT__reg_6 = (1U & (
						   (~ (IData)(vlTOPp->MixedVecRegTester__DOT__doneReg)) 
						   | (IData)(vlTOPp->MixedVecRegTester__DOT__reg_6)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/MixedVecRegTester/202003062246072983036929099760157/MixedVecRegTester.v:90
    __Vdly__MixedVecRegTester__DOT__reg_3 = (1U & (
						   (~ (IData)(vlTOPp->MixedVecRegTester__DOT__doneReg)) 
						   | (IData)(vlTOPp->MixedVecRegTester__DOT__reg_3)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/MixedVecRegTester/202003062246072983036929099760157/MixedVecRegTester.v:90
    __Vdly__MixedVecRegTester__DOT__reg_1 = (1U & (
						   (~ (IData)(vlTOPp->MixedVecRegTester__DOT__doneReg)) 
						   | (IData)(vlTOPp->MixedVecRegTester__DOT__reg_1)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/MixedVecRegTester/202003062246072983036929099760157/MixedVecRegTester.v:90
    vlTOPp->MixedVecRegTester__DOT__doneReg = (1U & 
					       (~ (IData)(vlTOPp->reset)));
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->MixedVecRegTester__DOT___GEN_8) 
			 & (~ ((IData)(vlTOPp->MixedVecRegTester__DOT__reg_1) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at MixedVecSpec.scala:31 assert(a === b.asUInt)\n");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->MixedVecRegTester__DOT___GEN_8) 
			 & (~ ((IData)(vlTOPp->MixedVecRegTester__DOT__reg_1) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: MixedVecRegTester.v:115: Assertion failed in %NMixedVecRegTester\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/MixedVecRegTester/202003062246072983036929099760157/MixedVecRegTester.v",115,"");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->MixedVecRegTester__DOT___GEN_8) 
			 & (~ ((IData)(vlTOPp->MixedVecRegTester__DOT__reg_3) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at MixedVecSpec.scala:31 assert(a === b.asUInt)\n");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->MixedVecRegTester__DOT___GEN_8) 
			 & (~ ((IData)(vlTOPp->MixedVecRegTester__DOT__reg_3) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: MixedVecRegTester.v:137: Assertion failed in %NMixedVecRegTester\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/MixedVecRegTester/202003062246072983036929099760157/MixedVecRegTester.v",137,"");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->MixedVecRegTester__DOT___GEN_8) 
			 & (~ ((IData)(vlTOPp->MixedVecRegTester__DOT__reg_6) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at MixedVecSpec.scala:31 assert(a === b.asUInt)\n");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->MixedVecRegTester__DOT___GEN_8) 
			 & (~ ((IData)(vlTOPp->MixedVecRegTester__DOT__reg_6) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: MixedVecRegTester.v:159: Assertion failed in %NMixedVecRegTester\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/MixedVecRegTester/202003062246072983036929099760157/MixedVecRegTester.v",159,"");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->MixedVecRegTester__DOT___GEN_8) 
			 & (~ ((IData)(vlTOPp->MixedVecRegTester__DOT__reg_7) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at MixedVecSpec.scala:31 assert(a === b.asUInt)\n");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->MixedVecRegTester__DOT___GEN_8) 
			 & (~ ((IData)(vlTOPp->MixedVecRegTester__DOT__reg_7) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: MixedVecRegTester.v:181: Assertion failed in %NMixedVecRegTester\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/MixedVecRegTester/202003062246072983036929099760157/MixedVecRegTester.v",181,"");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->MixedVecRegTester__DOT___GEN_8) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FINISH_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/MixedVecRegTester/202003062246072983036929099760157/MixedVecRegTester.v",192,"");
	}
    }
    vlTOPp->MixedVecRegTester__DOT__reg_1 = __Vdly__MixedVecRegTester__DOT__reg_1;
    vlTOPp->MixedVecRegTester__DOT__reg_3 = __Vdly__MixedVecRegTester__DOT__reg_3;
    vlTOPp->MixedVecRegTester__DOT__reg_6 = __Vdly__MixedVecRegTester__DOT__reg_6;
    vlTOPp->MixedVecRegTester__DOT__reg_7 = __Vdly__MixedVecRegTester__DOT__reg_7;
    vlTOPp->MixedVecRegTester__DOT___GEN_8 = vlTOPp->MixedVecRegTester__DOT__doneReg;
}

void VMixedVecRegTester::_settle__TOP__2(VMixedVecRegTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecRegTester::_settle__TOP__2\n"); );
    VMixedVecRegTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->MixedVecRegTester__DOT___GEN_8 = vlTOPp->MixedVecRegTester__DOT__doneReg;
}

void VMixedVecRegTester::_eval(VMixedVecRegTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecRegTester::_eval\n"); );
    VMixedVecRegTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VMixedVecRegTester::_eval_initial(VMixedVecRegTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecRegTester::_eval_initial\n"); );
    VMixedVecRegTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VMixedVecRegTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecRegTester::final\n"); );
    // Variables
    VMixedVecRegTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VMixedVecRegTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VMixedVecRegTester::_eval_settle(VMixedVecRegTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecRegTester::_eval_settle\n"); );
    VMixedVecRegTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

VL_INLINE_OPT QData VMixedVecRegTester::_change_request(VMixedVecRegTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecRegTester::_change_request\n"); );
    VMixedVecRegTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VMixedVecRegTester::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecRegTester::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG

void VMixedVecRegTester::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecRegTester::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    MixedVecRegTester__DOT__reg_7 = VL_RAND_RESET_I(1);
    MixedVecRegTester__DOT__reg_6 = VL_RAND_RESET_I(1);
    MixedVecRegTester__DOT__reg_3 = VL_RAND_RESET_I(1);
    MixedVecRegTester__DOT__reg_1 = VL_RAND_RESET_I(1);
    MixedVecRegTester__DOT__doneReg = VL_RAND_RESET_I(1);
    MixedVecRegTester__DOT___GEN_8 = VL_RAND_RESET_I(1);
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
