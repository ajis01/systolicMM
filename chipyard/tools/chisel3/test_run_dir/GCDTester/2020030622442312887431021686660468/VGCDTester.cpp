// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VGCDTester.h for the primary calling header

#include "VGCDTester.h"        // For This
#include "VGCDTester__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VGCDTester) {
    VGCDTester__Syms* __restrict vlSymsp = __VlSymsp = new VGCDTester__Syms(this, name());
    VGCDTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VGCDTester::__Vconfigure(VGCDTester__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VGCDTester::~VGCDTester() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VGCDTester::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VGCDTester::eval\n"); );
    VGCDTester__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VGCDTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VGCDTester::_eval_initial_loop(VGCDTester__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VGCDTester::_sequent__TOP__1(VGCDTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCDTester::_sequent__TOP__1\n"); );
    VGCDTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG(__Vdly__GCDTester__DOT__dut__DOT__x,31,0);
    // Body
    __Vdly__GCDTester__DOT__dut__DOT__x = vlTOPp->GCDTester__DOT__dut__DOT__x;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/GCDTester/2020030622442312887431021686660468/GCDTester.v:60
    if (vlTOPp->GCDTester__DOT__first) {
	__Vdly__GCDTester__DOT__dut__DOT__x = 0x40U;
    } else {
	if (vlTOPp->GCDTester__DOT__dut__DOT___T) {
	    __Vdly__GCDTester__DOT__dut__DOT__x = vlTOPp->GCDTester__DOT__dut__DOT___T_2;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/GCDTester/2020030622442312887431021686660468/GCDTester.v:60
    if (vlTOPp->GCDTester__DOT__first) {
	vlTOPp->GCDTester__DOT__dut__DOT__y = 0x30U;
    } else {
	if ((1U & (~ (IData)(vlTOPp->GCDTester__DOT__dut__DOT___T)))) {
	    vlTOPp->GCDTester__DOT__dut__DOT__y = vlTOPp->GCDTester__DOT__dut__DOT___T_4;
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/GCDTester/2020030622442312887431021686660468/GCDTester.v:144
    vlTOPp->GCDTester__DOT__first = ((IData)(vlTOPp->reset) 
				     | (IData)(vlTOPp->GCDTester__DOT___GEN_0));
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->GCDTester__DOT___T_1) 
			 & (~ ((0x10U == vlTOPp->GCDTester__DOT__dut__DOT__x) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at GCD.scala:33 assert(dut.io.z === z.U)\n");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->GCDTester__DOT___T_1) 
			 & (~ ((0x10U == vlTOPp->GCDTester__DOT__dut__DOT__x) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: GCDTester.v:162: Assertion failed in %NGCDTester\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/GCDTester/2020030622442312887431021686660468/GCDTester.v",162,"");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->GCDTester__DOT___T_1) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FINISH_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/GCDTester/2020030622442312887431021686660468/GCDTester.v",173,"");
	}
    }
    vlTOPp->GCDTester__DOT__dut__DOT__x = __Vdly__GCDTester__DOT__dut__DOT__x;
    vlTOPp->GCDTester__DOT___GEN_0 = ((~ (IData)(vlTOPp->GCDTester__DOT__first)) 
				      & (IData)(vlTOPp->GCDTester__DOT__first));
    vlTOPp->GCDTester__DOT___T_1 = ((~ (IData)(vlTOPp->GCDTester__DOT__first)) 
				    & (0U == vlTOPp->GCDTester__DOT__dut__DOT__y));
    vlTOPp->GCDTester__DOT__dut__DOT___T = (vlTOPp->GCDTester__DOT__dut__DOT__x 
					    > vlTOPp->GCDTester__DOT__dut__DOT__y);
    vlTOPp->GCDTester__DOT__dut__DOT___T_2 = (vlTOPp->GCDTester__DOT__dut__DOT__x 
					      - vlTOPp->GCDTester__DOT__dut__DOT__y);
    vlTOPp->GCDTester__DOT__dut__DOT___T_4 = (vlTOPp->GCDTester__DOT__dut__DOT__y 
					      - vlTOPp->GCDTester__DOT__dut__DOT__x);
}

void VGCDTester::_settle__TOP__2(VGCDTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCDTester::_settle__TOP__2\n"); );
    VGCDTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->GCDTester__DOT___GEN_0 = ((~ (IData)(vlTOPp->GCDTester__DOT__first)) 
				      & (IData)(vlTOPp->GCDTester__DOT__first));
    vlTOPp->GCDTester__DOT___T_1 = ((~ (IData)(vlTOPp->GCDTester__DOT__first)) 
				    & (0U == vlTOPp->GCDTester__DOT__dut__DOT__y));
    vlTOPp->GCDTester__DOT__dut__DOT___T = (vlTOPp->GCDTester__DOT__dut__DOT__x 
					    > vlTOPp->GCDTester__DOT__dut__DOT__y);
    vlTOPp->GCDTester__DOT__dut__DOT___T_2 = (vlTOPp->GCDTester__DOT__dut__DOT__x 
					      - vlTOPp->GCDTester__DOT__dut__DOT__y);
    vlTOPp->GCDTester__DOT__dut__DOT___T_4 = (vlTOPp->GCDTester__DOT__dut__DOT__y 
					      - vlTOPp->GCDTester__DOT__dut__DOT__x);
}

void VGCDTester::_eval(VGCDTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCDTester::_eval\n"); );
    VGCDTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VGCDTester::_eval_initial(VGCDTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCDTester::_eval_initial\n"); );
    VGCDTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VGCDTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCDTester::final\n"); );
    // Variables
    VGCDTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VGCDTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VGCDTester::_eval_settle(VGCDTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCDTester::_eval_settle\n"); );
    VGCDTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

VL_INLINE_OPT QData VGCDTester::_change_request(VGCDTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCDTester::_change_request\n"); );
    VGCDTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VGCDTester::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCDTester::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG

void VGCDTester::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCDTester::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    GCDTester__DOT__first = VL_RAND_RESET_I(1);
    GCDTester__DOT___GEN_0 = VL_RAND_RESET_I(1);
    GCDTester__DOT___T_1 = VL_RAND_RESET_I(1);
    GCDTester__DOT__dut__DOT__x = VL_RAND_RESET_I(32);
    GCDTester__DOT__dut__DOT__y = VL_RAND_RESET_I(32);
    GCDTester__DOT__dut__DOT___T = VL_RAND_RESET_I(1);
    GCDTester__DOT__dut__DOT___T_2 = VL_RAND_RESET_I(32);
    GCDTester__DOT__dut__DOT___T_4 = VL_RAND_RESET_I(32);
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
