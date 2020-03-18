// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VLFSRResetTester.h for the primary calling header

#include "VLFSRResetTester.h"  // For This
#include "VLFSRResetTester__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VLFSRResetTester) {
    VLFSRResetTester__Syms* __restrict vlSymsp = __VlSymsp = new VLFSRResetTester__Syms(this, name());
    VLFSRResetTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VLFSRResetTester::__Vconfigure(VLFSRResetTester__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VLFSRResetTester::~VLFSRResetTester() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VLFSRResetTester::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VLFSRResetTester::eval\n"); );
    VLFSRResetTester__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VLFSRResetTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VLFSRResetTester::_eval_initial_loop(VLFSRResetTester__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VLFSRResetTester::_sequent__TOP__1(VLFSRResetTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSRResetTester::_sequent__TOP__1\n"); );
    VLFSRResetTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__LFSRResetTester__DOT__lfsr__DOT__state_0,0,0);
    // Body
    __Vdly__LFSRResetTester__DOT__lfsr__DOT__state_0 
	= vlTOPp->LFSRResetTester__DOT__lfsr__DOT__state_0;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRResetTester/202003062133379721422194598129854/LFSRResetTester.v:48
    __Vdly__LFSRResetTester__DOT__lfsr__DOT__state_0 
	= ((3U == (IData)(vlTOPp->LFSRResetTester__DOT__value)) 
	   | (IData)(vlTOPp->LFSRResetTester__DOT__lfsr__DOT___GEN_4));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRResetTester/202003062133379721422194598129854/LFSRResetTester.v:129
    vlTOPp->LFSRResetTester__DOT__value = ((IData)(vlTOPp->reset)
					    ? 0U : 
					   ((IData)(vlTOPp->LFSRResetTester__DOT__done)
					     ? 0U : (IData)(vlTOPp->LFSRResetTester__DOT___T_2)));
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->LFSRResetTester__DOT___T_4) 
			 & (~ ((~ (IData)(vlTOPp->LFSRResetTester__DOT__lfsr__DOT__state_0)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: LFSR is NOT locked up, but should be!\n    at LFSRSpec.scala:38 assert(lfsr.io.out.asUInt === lockUpValue.U, \"LFSR is NOT locked up, but should be!\")\n");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->LFSRResetTester__DOT___T_4) 
			 & (~ ((~ (IData)(vlTOPp->LFSRResetTester__DOT__lfsr__DOT__state_0)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: LFSRResetTester.v:155: Assertion failed in %NLFSRResetTester\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRResetTester/202003062133379721422194598129854/LFSRResetTester.v",155,"");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->LFSRResetTester__DOT__done) 
			 & (~ ((IData)(vlTOPp->LFSRResetTester__DOT__lfsr__DOT__state_0) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: LFSR is locked up, but should not be after reset!\n    at LFSRSpec.scala:44 assert(lfsr.io.out.asUInt =/= lockUpValue.U, \"LFSR is locked up, but should not be after reset!\")\n");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->LFSRResetTester__DOT__done) 
			 & (~ ((IData)(vlTOPp->LFSRResetTester__DOT__lfsr__DOT__state_0) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: LFSRResetTester.v:177: Assertion failed in %NLFSRResetTester\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRResetTester/202003062133379721422194598129854/LFSRResetTester.v",177,"");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->LFSRResetTester__DOT__done) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FINISH_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRResetTester/202003062133379721422194598129854/LFSRResetTester.v",188,"");
	}
    }
    vlTOPp->LFSRResetTester__DOT__lfsr__DOT__state_0 
	= __Vdly__LFSRResetTester__DOT__lfsr__DOT__state_0;
    vlTOPp->LFSRResetTester__DOT__done = (4U == (IData)(vlTOPp->LFSRResetTester__DOT__value));
    vlTOPp->LFSRResetTester__DOT___T_2 = (7U & ((IData)(1U) 
						+ (IData)(vlTOPp->LFSRResetTester__DOT__value)));
    vlTOPp->LFSRResetTester__DOT___T_4 = (2U == (IData)(vlTOPp->LFSRResetTester__DOT__value));
    vlTOPp->LFSRResetTester__DOT__lfsr__DOT___GEN_4 
	= ((1U != (IData)(vlTOPp->LFSRResetTester__DOT__value)) 
	   & (IData)(vlTOPp->LFSRResetTester__DOT__lfsr__DOT__state_0));
}

void VLFSRResetTester::_settle__TOP__2(VLFSRResetTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSRResetTester::_settle__TOP__2\n"); );
    VLFSRResetTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LFSRResetTester__DOT__done = (4U == (IData)(vlTOPp->LFSRResetTester__DOT__value));
    vlTOPp->LFSRResetTester__DOT___T_2 = (7U & ((IData)(1U) 
						+ (IData)(vlTOPp->LFSRResetTester__DOT__value)));
    vlTOPp->LFSRResetTester__DOT___T_4 = (2U == (IData)(vlTOPp->LFSRResetTester__DOT__value));
    vlTOPp->LFSRResetTester__DOT__lfsr__DOT___GEN_4 
	= ((1U != (IData)(vlTOPp->LFSRResetTester__DOT__value)) 
	   & (IData)(vlTOPp->LFSRResetTester__DOT__lfsr__DOT__state_0));
}

void VLFSRResetTester::_eval(VLFSRResetTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSRResetTester::_eval\n"); );
    VLFSRResetTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VLFSRResetTester::_eval_initial(VLFSRResetTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSRResetTester::_eval_initial\n"); );
    VLFSRResetTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VLFSRResetTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSRResetTester::final\n"); );
    // Variables
    VLFSRResetTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VLFSRResetTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VLFSRResetTester::_eval_settle(VLFSRResetTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSRResetTester::_eval_settle\n"); );
    VLFSRResetTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

VL_INLINE_OPT QData VLFSRResetTester::_change_request(VLFSRResetTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSRResetTester::_change_request\n"); );
    VLFSRResetTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VLFSRResetTester::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSRResetTester::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG

void VLFSRResetTester::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSRResetTester::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    LFSRResetTester__DOT__value = VL_RAND_RESET_I(3);
    LFSRResetTester__DOT__done = VL_RAND_RESET_I(1);
    LFSRResetTester__DOT___T_2 = VL_RAND_RESET_I(3);
    LFSRResetTester__DOT___T_4 = VL_RAND_RESET_I(1);
    LFSRResetTester__DOT__lfsr__DOT__state_0 = VL_RAND_RESET_I(1);
    LFSRResetTester__DOT__lfsr__DOT___GEN_4 = VL_RAND_RESET_I(1);
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
