// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VShiftTester.h for the primary calling header

#include "VShiftTester.h"      // For This
#include "VShiftTester__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VShiftTester) {
    VShiftTester__Syms* __restrict vlSymsp = __VlSymsp = new VShiftTester__Syms(this, name());
    VShiftTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VShiftTester::__Vconfigure(VShiftTester__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VShiftTester::~VShiftTester() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VShiftTester::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VShiftTester::eval\n"); );
    VShiftTester__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VShiftTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VShiftTester::_eval_initial_loop(VShiftTester__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VShiftTester::_sequent__TOP__1(VShiftTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftTester::_sequent__TOP__1\n"); );
    VShiftTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__ShiftTester__DOT__sr,4,0);
    // Body
    __Vdly__ShiftTester__DOT__sr = vlTOPp->ShiftTester__DOT__sr;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ShiftTester/202003062136164419644375402093448/ShiftTester.v:83
    __Vdly__ShiftTester__DOT__sr = vlTOPp->ShiftTester__DOT___T_7;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ShiftTester/202003062136164419644375402093448/ShiftTester.v:83
    vlTOPp->ShiftTester__DOT___T_7 = vlTOPp->ShiftTester__DOT___T_6;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ShiftTester/202003062136164419644375402093448/ShiftTester.v:83
    vlTOPp->ShiftTester__DOT___T_6 = vlTOPp->ShiftTester__DOT___T_5;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ShiftTester/202003062136164419644375402093448/ShiftTester.v:83
    vlTOPp->ShiftTester__DOT___T_5 = (0x1fU & ((IData)(0x17U) 
					       + (IData)(vlTOPp->ShiftTester__DOT__value)));
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ShiftTester/202003062136164419644375402093448/ShiftTester.v:83
    vlTOPp->ShiftTester__DOT__value = ((IData)(vlTOPp->reset)
				        ? 0U : (IData)(vlTOPp->ShiftTester__DOT___T_2));
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->ShiftTester__DOT__done) 
			 & (~ ((0x17U == (IData)(vlTOPp->ShiftTester__DOT__sr)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Reg.scala:47 assert(sr === start)\n");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->ShiftTester__DOT__done) 
			 & (~ ((0x17U == (IData)(vlTOPp->ShiftTester__DOT__sr)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: ShiftTester.v:107: Assertion failed in %NShiftTester\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ShiftTester/202003062136164419644375402093448/ShiftTester.v",107,"");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->ShiftTester__DOT__done) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FINISH_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ShiftTester/202003062136164419644375402093448/ShiftTester.v",118,"");
	}
    }
    vlTOPp->ShiftTester__DOT__sr = __Vdly__ShiftTester__DOT__sr;
    vlTOPp->ShiftTester__DOT__done = (3U == (IData)(vlTOPp->ShiftTester__DOT__value));
    vlTOPp->ShiftTester__DOT___T_2 = (3U & ((IData)(1U) 
					    + (IData)(vlTOPp->ShiftTester__DOT__value)));
}

void VShiftTester::_settle__TOP__2(VShiftTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftTester::_settle__TOP__2\n"); );
    VShiftTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ShiftTester__DOT__done = (3U == (IData)(vlTOPp->ShiftTester__DOT__value));
    vlTOPp->ShiftTester__DOT___T_2 = (3U & ((IData)(1U) 
					    + (IData)(vlTOPp->ShiftTester__DOT__value)));
}

void VShiftTester::_eval(VShiftTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftTester::_eval\n"); );
    VShiftTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VShiftTester::_eval_initial(VShiftTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftTester::_eval_initial\n"); );
    VShiftTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VShiftTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftTester::final\n"); );
    // Variables
    VShiftTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VShiftTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VShiftTester::_eval_settle(VShiftTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftTester::_eval_settle\n"); );
    VShiftTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

VL_INLINE_OPT QData VShiftTester::_change_request(VShiftTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftTester::_change_request\n"); );
    VShiftTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VShiftTester::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftTester::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG

void VShiftTester::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftTester::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    ShiftTester__DOT__value = VL_RAND_RESET_I(2);
    ShiftTester__DOT__done = VL_RAND_RESET_I(1);
    ShiftTester__DOT___T_2 = VL_RAND_RESET_I(2);
    ShiftTester__DOT___T_5 = VL_RAND_RESET_I(5);
    ShiftTester__DOT___T_6 = VL_RAND_RESET_I(5);
    ShiftTester__DOT___T_7 = VL_RAND_RESET_I(5);
    ShiftTester__DOT__sr = VL_RAND_RESET_I(5);
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
