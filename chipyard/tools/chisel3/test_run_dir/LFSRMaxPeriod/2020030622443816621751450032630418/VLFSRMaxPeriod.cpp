// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VLFSRMaxPeriod.h for the primary calling header

#include "VLFSRMaxPeriod.h"    // For This
#include "VLFSRMaxPeriod__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VLFSRMaxPeriod) {
    VLFSRMaxPeriod__Syms* __restrict vlSymsp = __VlSymsp = new VLFSRMaxPeriod__Syms(this, name());
    VLFSRMaxPeriod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VLFSRMaxPeriod::__Vconfigure(VLFSRMaxPeriod__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VLFSRMaxPeriod::~VLFSRMaxPeriod() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VLFSRMaxPeriod::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VLFSRMaxPeriod::eval\n"); );
    VLFSRMaxPeriod__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VLFSRMaxPeriod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VLFSRMaxPeriod::_eval_initial_loop(VLFSRMaxPeriod__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VLFSRMaxPeriod::_sequent__TOP__1(VLFSRMaxPeriod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSRMaxPeriod::_sequent__TOP__1\n"); );
    VLFSRMaxPeriod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__LFSRMaxPeriod__DOT__started,0,0);
    // Body
    __Vdly__LFSRMaxPeriod__DOT__started = vlTOPp->LFSRMaxPeriod__DOT__started;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/2020030622443816621751450032630418/LFSRMaxPeriod.v:164
    if ((1U & (~ (IData)(vlTOPp->LFSRMaxPeriod__DOT__started)))) {
	vlTOPp->LFSRMaxPeriod__DOT__seed = vlTOPp->LFSRMaxPeriod__DOT__rv;
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/2020030622443816621751450032630418/LFSRMaxPeriod.v:164
    __Vdly__LFSRMaxPeriod__DOT__started = (1U & (~ (IData)(vlTOPp->reset)));
    if (vlTOPp->reset) {
	vlTOPp->LFSRMaxPeriod__DOT__value = 0U;
    } else {
	if (vlTOPp->LFSRMaxPeriod__DOT__started) {
	    vlTOPp->LFSRMaxPeriod__DOT__value = ((IData)(vlTOPp->LFSRMaxPeriod__DOT___T_1)
						  ? 0U
						  : (IData)(vlTOPp->LFSRMaxPeriod__DOT___T_3));
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->LFSRMaxPeriod__DOT___T_5) 
			 & (~ (IData)(vlTOPp->LFSRMaxPeriod__DOT___T_7))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at LFSR16.scala:56 chisel3.assert(wrap)\n");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->LFSRMaxPeriod__DOT___T_5) 
			 & (~ (IData)(vlTOPp->LFSRMaxPeriod__DOT___T_7))))) {
	    VL_WRITEF("[%0t] %%Error: LFSRMaxPeriod.v:199: Assertion failed in %NLFSRMaxPeriod\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/2020030622443816621751450032630418/LFSRMaxPeriod.v",199,"");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->LFSRMaxPeriod__DOT___T_5) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FINISH_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/2020030622443816621751450032630418/LFSRMaxPeriod.v",210,"");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY((1U & (~ (((IData)(vlTOPp->LFSRMaxPeriod__DOT__rv) 
				   != (IData)(vlTOPp->LFSRMaxPeriod__DOT__last)) 
				  | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: LFSR last value (0b%b) was equal to current value (0b%b)\n    at LFSR16.scala:61 chisel3.assert(rv =/= last, \"LFSR last value (0b%%b) was equal to current value (0b%%b)\", rv, last)\n",
		       2,vlTOPp->LFSRMaxPeriod__DOT__rv,
		       2,(IData)(vlTOPp->LFSRMaxPeriod__DOT__last));
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY((1U & (~ (((IData)(vlTOPp->LFSRMaxPeriod__DOT__rv) 
				   != (IData)(vlTOPp->LFSRMaxPeriod__DOT__last)) 
				  | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: LFSRMaxPeriod.v:232: Assertion failed in %NLFSRMaxPeriod\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/2020030622443816621751450032630418/LFSRMaxPeriod.v",232,"");
	}
    }
    vlTOPp->LFSRMaxPeriod__DOT__started = __Vdly__LFSRMaxPeriod__DOT__started;
    vlTOPp->LFSRMaxPeriod__DOT___T_1 = (2U == (IData)(vlTOPp->LFSRMaxPeriod__DOT__value));
    vlTOPp->LFSRMaxPeriod__DOT___T_3 = (3U & ((IData)(1U) 
					      + (IData)(vlTOPp->LFSRMaxPeriod__DOT__value)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/2020030622443816621751450032630418/LFSRMaxPeriod.v:164
    vlTOPp->LFSRMaxPeriod__DOT__last = (((IData)(vlTOPp->LFSRMaxPeriod__DOT__GaloisLFSR__DOT__state_1) 
					 << 1U) | (IData)(vlTOPp->LFSRMaxPeriod__DOT__GaloisLFSR__DOT__state_0));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/2020030622443816621751450032630418/LFSRMaxPeriod.v:56
    vlTOPp->LFSRMaxPeriod__DOT__GaloisLFSR__DOT__state_1 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->LFSRMaxPeriod__DOT__GaloisLFSR__DOT__state_0));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LFSRMaxPeriod/2020030622443816621751450032630418/LFSRMaxPeriod.v:56
    vlTOPp->LFSRMaxPeriod__DOT__GaloisLFSR__DOT__state_0 
	= ((IData)(vlTOPp->reset) | (IData)(vlTOPp->LFSRMaxPeriod__DOT__GaloisLFSR__DOT___T_1));
    vlTOPp->LFSRMaxPeriod__DOT__GaloisLFSR__DOT___T_1 
	= ((IData)(vlTOPp->LFSRMaxPeriod__DOT__GaloisLFSR__DOT__state_1) 
	   ^ (IData)(vlTOPp->LFSRMaxPeriod__DOT__GaloisLFSR__DOT__state_0));
    vlTOPp->LFSRMaxPeriod__DOT__rv = (((IData)(vlTOPp->LFSRMaxPeriod__DOT__GaloisLFSR__DOT__state_1) 
				       << 1U) | (IData)(vlTOPp->LFSRMaxPeriod__DOT__GaloisLFSR__DOT__state_0));
    vlTOPp->LFSRMaxPeriod__DOT___T_5 = (((IData)(vlTOPp->LFSRMaxPeriod__DOT__rv) 
					 == (IData)(vlTOPp->LFSRMaxPeriod__DOT__seed)) 
					& (IData)(vlTOPp->LFSRMaxPeriod__DOT__started));
}

void VLFSRMaxPeriod::_settle__TOP__2(VLFSRMaxPeriod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSRMaxPeriod::_settle__TOP__2\n"); );
    VLFSRMaxPeriod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LFSRMaxPeriod__DOT___T_1 = (2U == (IData)(vlTOPp->LFSRMaxPeriod__DOT__value));
    vlTOPp->LFSRMaxPeriod__DOT___T_3 = (3U & ((IData)(1U) 
					      + (IData)(vlTOPp->LFSRMaxPeriod__DOT__value)));
    vlTOPp->LFSRMaxPeriod__DOT___T_7 = (((IData)(vlTOPp->LFSRMaxPeriod__DOT__started) 
					 & (2U == (IData)(vlTOPp->LFSRMaxPeriod__DOT__value))) 
					| (IData)(vlTOPp->reset));
    vlTOPp->LFSRMaxPeriod__DOT__GaloisLFSR__DOT___T_1 
	= ((IData)(vlTOPp->LFSRMaxPeriod__DOT__GaloisLFSR__DOT__state_1) 
	   ^ (IData)(vlTOPp->LFSRMaxPeriod__DOT__GaloisLFSR__DOT__state_0));
    vlTOPp->LFSRMaxPeriod__DOT__rv = (((IData)(vlTOPp->LFSRMaxPeriod__DOT__GaloisLFSR__DOT__state_1) 
				       << 1U) | (IData)(vlTOPp->LFSRMaxPeriod__DOT__GaloisLFSR__DOT__state_0));
    vlTOPp->LFSRMaxPeriod__DOT___T_5 = (((IData)(vlTOPp->LFSRMaxPeriod__DOT__rv) 
					 == (IData)(vlTOPp->LFSRMaxPeriod__DOT__seed)) 
					& (IData)(vlTOPp->LFSRMaxPeriod__DOT__started));
}

VL_INLINE_OPT void VLFSRMaxPeriod::_combo__TOP__3(VLFSRMaxPeriod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSRMaxPeriod::_combo__TOP__3\n"); );
    VLFSRMaxPeriod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->LFSRMaxPeriod__DOT___T_7 = (((IData)(vlTOPp->LFSRMaxPeriod__DOT__started) 
					 & (2U == (IData)(vlTOPp->LFSRMaxPeriod__DOT__value))) 
					| (IData)(vlTOPp->reset));
}

void VLFSRMaxPeriod::_eval(VLFSRMaxPeriod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSRMaxPeriod::_eval\n"); );
    VLFSRMaxPeriod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__3(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VLFSRMaxPeriod::_eval_initial(VLFSRMaxPeriod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSRMaxPeriod::_eval_initial\n"); );
    VLFSRMaxPeriod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VLFSRMaxPeriod::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSRMaxPeriod::final\n"); );
    // Variables
    VLFSRMaxPeriod__Syms* __restrict vlSymsp = this->__VlSymsp;
    VLFSRMaxPeriod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VLFSRMaxPeriod::_eval_settle(VLFSRMaxPeriod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSRMaxPeriod::_eval_settle\n"); );
    VLFSRMaxPeriod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

VL_INLINE_OPT QData VLFSRMaxPeriod::_change_request(VLFSRMaxPeriod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSRMaxPeriod::_change_request\n"); );
    VLFSRMaxPeriod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VLFSRMaxPeriod::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSRMaxPeriod::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG

void VLFSRMaxPeriod::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSRMaxPeriod::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    LFSRMaxPeriod__DOT__rv = VL_RAND_RESET_I(2);
    LFSRMaxPeriod__DOT__started = VL_RAND_RESET_I(1);
    LFSRMaxPeriod__DOT__seed = VL_RAND_RESET_I(2);
    LFSRMaxPeriod__DOT__value = VL_RAND_RESET_I(2);
    LFSRMaxPeriod__DOT___T_1 = VL_RAND_RESET_I(1);
    LFSRMaxPeriod__DOT___T_3 = VL_RAND_RESET_I(2);
    LFSRMaxPeriod__DOT___T_5 = VL_RAND_RESET_I(1);
    LFSRMaxPeriod__DOT___T_7 = VL_RAND_RESET_I(1);
    LFSRMaxPeriod__DOT__last = VL_RAND_RESET_I(2);
    LFSRMaxPeriod__DOT__GaloisLFSR__DOT__state_0 = VL_RAND_RESET_I(1);
    LFSRMaxPeriod__DOT__GaloisLFSR__DOT__state_1 = VL_RAND_RESET_I(1);
    LFSRMaxPeriod__DOT__GaloisLFSR__DOT___T_1 = VL_RAND_RESET_I(1);
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}