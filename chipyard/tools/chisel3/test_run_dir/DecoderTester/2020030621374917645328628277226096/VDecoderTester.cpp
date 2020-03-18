// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDecoderTester.h for the primary calling header

#include "VDecoderTester.h"    // For This
#include "VDecoderTester__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VDecoderTester) {
    VDecoderTester__Syms* __restrict vlSymsp = __VlSymsp = new VDecoderTester__Syms(this, name());
    VDecoderTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VDecoderTester::__Vconfigure(VDecoderTester__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VDecoderTester::~VDecoderTester() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VDecoderTester::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VDecoderTester::eval\n"); );
    VDecoderTester__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VDecoderTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VDecoderTester::_eval_initial_loop(VDecoderTester__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VDecoderTester::_sequent__TOP__1(VDecoderTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoderTester::_sequent__TOP__1\n"); );
    VDecoderTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/DecoderTester/2020030621374917645328628277226096/DecoderTester.v:94
    vlTOPp->DecoderTester__DOT__value = ((IData)(vlTOPp->reset)
					  ? 0U : (IData)(vlTOPp->DecoderTester__DOT___T_2));
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY((1U & ((~ ((((1U == (1U & vlTOPp->DecoderTester__DOT__dut_io_inst)) 
				     | (0x88402026U 
					== (0xcd55af7eU 
					    & vlTOPp->DecoderTester__DOT__dut_io_inst))) 
				    | (0x1ca1fa83U 
				       == (0x1ca1fa83U 
					   & vlTOPp->DecoderTester__DOT__dut_io_inst))) 
				   | (0x502017U == 
				      (0x54a5b7U & vlTOPp->DecoderTester__DOT__dut_io_inst)))) 
			       & (~ (IData)(vlTOPp->DecoderTester__DOT___T_7)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Decoder.scala:25 assert(cnt === 0.U)\n");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY((1U & ((~ ((((1U == (1U & vlTOPp->DecoderTester__DOT__dut_io_inst)) 
				     | (0x88402026U 
					== (0xcd55af7eU 
					    & vlTOPp->DecoderTester__DOT__dut_io_inst))) 
				    | (0x1ca1fa83U 
				       == (0x1ca1fa83U 
					   & vlTOPp->DecoderTester__DOT__dut_io_inst))) 
				   | (0x502017U == 
				      (0x54a5b7U & vlTOPp->DecoderTester__DOT__dut_io_inst)))) 
			       & (~ (IData)(vlTOPp->DecoderTester__DOT___T_7)))))) {
	    VL_WRITEF("[%0t] %%Error: DecoderTester.v:116: Assertion failed in %NDecoderTester\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/DecoderTester/2020030621374917645328628277226096/DecoderTester.v",116,"");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY((1U & ((~ ((((1U == (1U & vlTOPp->DecoderTester__DOT__dut_io_inst)) 
				     | (0x88402026U 
					== (0xcd55af7eU 
					    & vlTOPp->DecoderTester__DOT__dut_io_inst))) 
				    | (0x1ca1fa83U 
				       == (0x1ca1fa83U 
					   & vlTOPp->DecoderTester__DOT__dut_io_inst))) 
				   | (0x502017U == 
				      (0x54a5b7U & vlTOPp->DecoderTester__DOT__dut_io_inst)))) 
			       & (~ (IData)(vlTOPp->reset)))))) {
	    VL_FINISH_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/DecoderTester/2020030621374917645328628277226096/DecoderTester.v",127,"");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->DecoderTester__DOT__wrap) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FINISH_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/DecoderTester/2020030621374917645328628277226096/DecoderTester.v",138,"");
	}
    }
    vlTOPp->DecoderTester__DOT__wrap = (3U == (IData)(vlTOPp->DecoderTester__DOT__value));
    vlTOPp->DecoderTester__DOT___T_2 = (3U & ((IData)(1U) 
					      + (IData)(vlTOPp->DecoderTester__DOT__value)));
    vlTOPp->DecoderTester__DOT__dut_io_inst = ((3U 
						== (IData)(vlTOPp->DecoderTester__DOT__value))
					        ? 0xcdb2857U
					        : (
						   (2U 
						    == (IData)(vlTOPp->DecoderTester__DOT__value))
						    ? 0xffffffffU
						    : 
						   ((1U 
						     == (IData)(vlTOPp->DecoderTester__DOT__value))
						     ? 0x9ae83027U
						     : 1U)));
}

void VDecoderTester::_settle__TOP__2(VDecoderTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoderTester::_settle__TOP__2\n"); );
    VDecoderTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->DecoderTester__DOT__wrap = (3U == (IData)(vlTOPp->DecoderTester__DOT__value));
    vlTOPp->DecoderTester__DOT___T_2 = (3U & ((IData)(1U) 
					      + (IData)(vlTOPp->DecoderTester__DOT__value)));
    vlTOPp->DecoderTester__DOT__dut_io_inst = ((3U 
						== (IData)(vlTOPp->DecoderTester__DOT__value))
					        ? 0xcdb2857U
					        : (
						   (2U 
						    == (IData)(vlTOPp->DecoderTester__DOT__value))
						    ? 0xffffffffU
						    : 
						   ((1U 
						     == (IData)(vlTOPp->DecoderTester__DOT__value))
						     ? 0x9ae83027U
						     : 1U)));
    vlTOPp->DecoderTester__DOT___T_7 = ((0U == (IData)(vlTOPp->DecoderTester__DOT__value)) 
					| (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VDecoderTester::_combo__TOP__3(VDecoderTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoderTester::_combo__TOP__3\n"); );
    VDecoderTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->DecoderTester__DOT___T_7 = ((0U == (IData)(vlTOPp->DecoderTester__DOT__value)) 
					| (IData)(vlTOPp->reset));
}

void VDecoderTester::_eval(VDecoderTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoderTester::_eval\n"); );
    VDecoderTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__3(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VDecoderTester::_eval_initial(VDecoderTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoderTester::_eval_initial\n"); );
    VDecoderTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VDecoderTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoderTester::final\n"); );
    // Variables
    VDecoderTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VDecoderTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VDecoderTester::_eval_settle(VDecoderTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoderTester::_eval_settle\n"); );
    VDecoderTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

VL_INLINE_OPT QData VDecoderTester::_change_request(VDecoderTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoderTester::_change_request\n"); );
    VDecoderTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VDecoderTester::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoderTester::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG

void VDecoderTester::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoderTester::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    DecoderTester__DOT__dut_io_inst = VL_RAND_RESET_I(32);
    DecoderTester__DOT__value = VL_RAND_RESET_I(2);
    DecoderTester__DOT__wrap = VL_RAND_RESET_I(1);
    DecoderTester__DOT___T_2 = VL_RAND_RESET_I(2);
    DecoderTester__DOT___T_7 = VL_RAND_RESET_I(1);
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
