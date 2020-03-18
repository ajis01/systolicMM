// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VStrongEnumFSMTester.h for the primary calling header

#include "VStrongEnumFSMTester.h" // For This
#include "VStrongEnumFSMTester__Syms.h"


//--------------------
// STATIC VARIABLES

VL_ST_SIG8(VStrongEnumFSMTester::__Vtable1_StrongEnumFSMTester__DOT__dut__DOT__state[64],1,0);

//--------------------

VL_CTOR_IMP(VStrongEnumFSMTester) {
    VStrongEnumFSMTester__Syms* __restrict vlSymsp = __VlSymsp = new VStrongEnumFSMTester__Syms(this, name());
    VStrongEnumFSMTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VStrongEnumFSMTester::__Vconfigure(VStrongEnumFSMTester__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VStrongEnumFSMTester::~VStrongEnumFSMTester() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VStrongEnumFSMTester::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VStrongEnumFSMTester::eval\n"); );
    VStrongEnumFSMTester__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VStrongEnumFSMTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VStrongEnumFSMTester::_eval_initial_loop(VStrongEnumFSMTester__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VStrongEnumFSMTester::_sequent__TOP__1(VStrongEnumFSMTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStrongEnumFSMTester::_sequent__TOP__1\n"); );
    VStrongEnumFSMTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vtableidx1,5,0);
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/StrongEnumFSMTester/202003062134359465493920514084870/StrongEnumFSMTester.v:213
    vlTOPp->StrongEnumFSMTester__DOT__value = ((IData)(vlTOPp->reset)
					        ? 0U
					        : ((IData)(vlTOPp->StrongEnumFSMTester__DOT___T_8)
						    ? 0U
						    : (IData)(vlTOPp->StrongEnumFSMTester__DOT___T_10)));
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->StrongEnumFSMTester__DOT___T_2))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at StrongEnum.scala:262 assert(dut.io.out === expected(cycle))\n");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->StrongEnumFSMTester__DOT___T_2))))) {
	    VL_WRITEF("[%0t] %%Error: StrongEnumFSMTester.v:239: Assertion failed in %NStrongEnumFSMTester\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/StrongEnumFSMTester/202003062134359465493920514084870/StrongEnumFSMTester.v",239,"");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->StrongEnumFSMTester__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at StrongEnum.scala:263 assert(dut.io.state === expected_state(cycle))\n");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->StrongEnumFSMTester__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: StrongEnumFSMTester.v:261: Assertion failed in %NStrongEnumFSMTester\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/StrongEnumFSMTester/202003062134359465493920514084870/StrongEnumFSMTester.v",261,"");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->StrongEnumFSMTester__DOT___T_8) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FINISH_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/StrongEnumFSMTester/202003062134359465493920514084870/StrongEnumFSMTester.v",272,"");
	}
    }
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/StrongEnumFSMTester/202003062134359465493920514084870/StrongEnumFSMTester.v:58
    __Vtableidx1 = ((0x20U & ((~ (IData)(vlTOPp->StrongEnumFSMTester__DOT__dut_io_in)) 
			      << 5U)) | (((IData)(vlTOPp->StrongEnumFSMTester__DOT__dut__DOT___T_9) 
					  << 4U) | 
					 (((IData)(vlTOPp->StrongEnumFSMTester__DOT__dut__DOT___T_6) 
					   << 3U) | 
					  (((IData)(vlTOPp->StrongEnumFSMTester__DOT__dut_io_in) 
					    << 2U) 
					   | (((IData)(vlTOPp->StrongEnumFSMTester__DOT__dut__DOT___T_3) 
					       << 1U) 
					      | (IData)(vlTOPp->reset))))));
    if (vlTOPp->__Vtablechg1[__Vtableidx1]) {
	vlTOPp->StrongEnumFSMTester__DOT__dut__DOT__state 
	    = vlTOPp->__Vtable1_StrongEnumFSMTester__DOT__dut__DOT__state
	    [__Vtableidx1];
    }
    vlTOPp->StrongEnumFSMTester__DOT___T_8 = (9U == (IData)(vlTOPp->StrongEnumFSMTester__DOT__value));
    vlTOPp->StrongEnumFSMTester__DOT___T_10 = (0xfU 
					       & ((IData)(1U) 
						  + (IData)(vlTOPp->StrongEnumFSMTester__DOT__value)));
    vlTOPp->StrongEnumFSMTester__DOT__dut_io_in = (
						   (9U 
						    != (IData)(vlTOPp->StrongEnumFSMTester__DOT__value)) 
						   & ((8U 
						       == (IData)(vlTOPp->StrongEnumFSMTester__DOT__value)) 
						      | ((7U 
							  == (IData)(vlTOPp->StrongEnumFSMTester__DOT__value)) 
							 | ((6U 
							     != (IData)(vlTOPp->StrongEnumFSMTester__DOT__value)) 
							    & ((5U 
								== (IData)(vlTOPp->StrongEnumFSMTester__DOT__value)) 
							       | ((4U 
								   == (IData)(vlTOPp->StrongEnumFSMTester__DOT__value)) 
								  | ((3U 
								      == (IData)(vlTOPp->StrongEnumFSMTester__DOT__value)) 
								     | ((2U 
									 != (IData)(vlTOPp->StrongEnumFSMTester__DOT__value)) 
									& (1U 
									   == (IData)(vlTOPp->StrongEnumFSMTester__DOT__value))))))))));
    vlTOPp->StrongEnumFSMTester__DOT__dut__DOT___T_3 
	= (0U == (IData)(vlTOPp->StrongEnumFSMTester__DOT__dut__DOT__state));
    vlTOPp->StrongEnumFSMTester__DOT__dut__DOT___T_6 
	= (1U == (IData)(vlTOPp->StrongEnumFSMTester__DOT__dut__DOT__state));
    vlTOPp->StrongEnumFSMTester__DOT__dut__DOT___T_9 
	= (2U == (IData)(vlTOPp->StrongEnumFSMTester__DOT__dut__DOT__state));
}

void VStrongEnumFSMTester::_settle__TOP__2(VStrongEnumFSMTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStrongEnumFSMTester::_settle__TOP__2\n"); );
    VStrongEnumFSMTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->StrongEnumFSMTester__DOT___T_8 = (9U == (IData)(vlTOPp->StrongEnumFSMTester__DOT__value));
    vlTOPp->StrongEnumFSMTester__DOT___T_10 = (0xfU 
					       & ((IData)(1U) 
						  + (IData)(vlTOPp->StrongEnumFSMTester__DOT__value)));
    vlTOPp->StrongEnumFSMTester__DOT__dut_io_in = (
						   (9U 
						    != (IData)(vlTOPp->StrongEnumFSMTester__DOT__value)) 
						   & ((8U 
						       == (IData)(vlTOPp->StrongEnumFSMTester__DOT__value)) 
						      | ((7U 
							  == (IData)(vlTOPp->StrongEnumFSMTester__DOT__value)) 
							 | ((6U 
							     != (IData)(vlTOPp->StrongEnumFSMTester__DOT__value)) 
							    & ((5U 
								== (IData)(vlTOPp->StrongEnumFSMTester__DOT__value)) 
							       | ((4U 
								   == (IData)(vlTOPp->StrongEnumFSMTester__DOT__value)) 
								  | ((3U 
								      == (IData)(vlTOPp->StrongEnumFSMTester__DOT__value)) 
								     | ((2U 
									 != (IData)(vlTOPp->StrongEnumFSMTester__DOT__value)) 
									& (1U 
									   == (IData)(vlTOPp->StrongEnumFSMTester__DOT__value))))))))));
    vlTOPp->StrongEnumFSMTester__DOT__dut__DOT___T_3 
	= (0U == (IData)(vlTOPp->StrongEnumFSMTester__DOT__dut__DOT__state));
    vlTOPp->StrongEnumFSMTester__DOT__dut__DOT___T_6 
	= (1U == (IData)(vlTOPp->StrongEnumFSMTester__DOT__dut__DOT__state));
    vlTOPp->StrongEnumFSMTester__DOT__dut__DOT___T_9 
	= (2U == (IData)(vlTOPp->StrongEnumFSMTester__DOT__dut__DOT__state));
    vlTOPp->StrongEnumFSMTester__DOT___T_2 = (((2U 
						== (IData)(vlTOPp->StrongEnumFSMTester__DOT__dut__DOT__state)) 
					       == (
						   (9U 
						    == (IData)(vlTOPp->StrongEnumFSMTester__DOT__value)) 
						   | ((8U 
						       != (IData)(vlTOPp->StrongEnumFSMTester__DOT__value)) 
						      & ((7U 
							  != (IData)(vlTOPp->StrongEnumFSMTester__DOT__value)) 
							 & ((6U 
							     == (IData)(vlTOPp->StrongEnumFSMTester__DOT__value)) 
							    | (5U 
							       == (IData)(vlTOPp->StrongEnumFSMTester__DOT__value))))))) 
					      | (IData)(vlTOPp->reset));
    vlTOPp->StrongEnumFSMTester__DOT___T_6 = (((IData)(vlTOPp->StrongEnumFSMTester__DOT__dut__DOT__state) 
					       == (
						   (9U 
						    == (IData)(vlTOPp->StrongEnumFSMTester__DOT__value))
						    ? 2U
						    : 
						   ((8U 
						     == (IData)(vlTOPp->StrongEnumFSMTester__DOT__value))
						     ? 1U
						     : 
						    ((7U 
						      == (IData)(vlTOPp->StrongEnumFSMTester__DOT__value))
						      ? 0U
						      : 
						     ((6U 
						       == (IData)(vlTOPp->StrongEnumFSMTester__DOT__value))
						       ? 2U
						       : 
						      ((5U 
							== (IData)(vlTOPp->StrongEnumFSMTester__DOT__value))
						        ? 2U
						        : 
						       ((4U 
							 == (IData)(vlTOPp->StrongEnumFSMTester__DOT__value))
							 ? 1U
							 : 
							((3U 
							  == (IData)(vlTOPp->StrongEnumFSMTester__DOT__value))
							  ? 0U
							  : 
							 ((2U 
							   == (IData)(vlTOPp->StrongEnumFSMTester__DOT__value))
							   ? 1U
							   : 0U))))))))) 
					      | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VStrongEnumFSMTester::_combo__TOP__3(VStrongEnumFSMTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStrongEnumFSMTester::_combo__TOP__3\n"); );
    VStrongEnumFSMTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->StrongEnumFSMTester__DOT___T_2 = (((2U 
						== (IData)(vlTOPp->StrongEnumFSMTester__DOT__dut__DOT__state)) 
					       == (
						   (9U 
						    == (IData)(vlTOPp->StrongEnumFSMTester__DOT__value)) 
						   | ((8U 
						       != (IData)(vlTOPp->StrongEnumFSMTester__DOT__value)) 
						      & ((7U 
							  != (IData)(vlTOPp->StrongEnumFSMTester__DOT__value)) 
							 & ((6U 
							     == (IData)(vlTOPp->StrongEnumFSMTester__DOT__value)) 
							    | (5U 
							       == (IData)(vlTOPp->StrongEnumFSMTester__DOT__value))))))) 
					      | (IData)(vlTOPp->reset));
    vlTOPp->StrongEnumFSMTester__DOT___T_6 = (((IData)(vlTOPp->StrongEnumFSMTester__DOT__dut__DOT__state) 
					       == (
						   (9U 
						    == (IData)(vlTOPp->StrongEnumFSMTester__DOT__value))
						    ? 2U
						    : 
						   ((8U 
						     == (IData)(vlTOPp->StrongEnumFSMTester__DOT__value))
						     ? 1U
						     : 
						    ((7U 
						      == (IData)(vlTOPp->StrongEnumFSMTester__DOT__value))
						      ? 0U
						      : 
						     ((6U 
						       == (IData)(vlTOPp->StrongEnumFSMTester__DOT__value))
						       ? 2U
						       : 
						      ((5U 
							== (IData)(vlTOPp->StrongEnumFSMTester__DOT__value))
						        ? 2U
						        : 
						       ((4U 
							 == (IData)(vlTOPp->StrongEnumFSMTester__DOT__value))
							 ? 1U
							 : 
							((3U 
							  == (IData)(vlTOPp->StrongEnumFSMTester__DOT__value))
							  ? 0U
							  : 
							 ((2U 
							   == (IData)(vlTOPp->StrongEnumFSMTester__DOT__value))
							   ? 1U
							   : 0U))))))))) 
					      | (IData)(vlTOPp->reset));
}

void VStrongEnumFSMTester::_eval(VStrongEnumFSMTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStrongEnumFSMTester::_eval\n"); );
    VStrongEnumFSMTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__3(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VStrongEnumFSMTester::_eval_initial(VStrongEnumFSMTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStrongEnumFSMTester::_eval_initial\n"); );
    VStrongEnumFSMTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VStrongEnumFSMTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStrongEnumFSMTester::final\n"); );
    // Variables
    VStrongEnumFSMTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VStrongEnumFSMTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VStrongEnumFSMTester::_eval_settle(VStrongEnumFSMTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStrongEnumFSMTester::_eval_settle\n"); );
    VStrongEnumFSMTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

VL_INLINE_OPT QData VStrongEnumFSMTester::_change_request(VStrongEnumFSMTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStrongEnumFSMTester::_change_request\n"); );
    VStrongEnumFSMTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VStrongEnumFSMTester::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStrongEnumFSMTester::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG

void VStrongEnumFSMTester::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStrongEnumFSMTester::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    StrongEnumFSMTester__DOT__dut_io_in = VL_RAND_RESET_I(1);
    StrongEnumFSMTester__DOT__value = VL_RAND_RESET_I(4);
    StrongEnumFSMTester__DOT___T_2 = VL_RAND_RESET_I(1);
    StrongEnumFSMTester__DOT___T_6 = VL_RAND_RESET_I(1);
    StrongEnumFSMTester__DOT___T_8 = VL_RAND_RESET_I(1);
    StrongEnumFSMTester__DOT___T_10 = VL_RAND_RESET_I(4);
    StrongEnumFSMTester__DOT__dut__DOT__state = VL_RAND_RESET_I(2);
    StrongEnumFSMTester__DOT__dut__DOT___T_3 = VL_RAND_RESET_I(1);
    StrongEnumFSMTester__DOT__dut__DOT___T_6 = VL_RAND_RESET_I(1);
    StrongEnumFSMTester__DOT__dut__DOT___T_9 = VL_RAND_RESET_I(1);
    __Vtablechg1[0] = 0U;
    __Vtablechg1[1] = 1U;
    __Vtablechg1[2] = 0U;
    __Vtablechg1[3] = 1U;
    __Vtablechg1[4] = 0U;
    __Vtablechg1[5] = 1U;
    __Vtablechg1[6] = 1U;
    __Vtablechg1[7] = 1U;
    __Vtablechg1[8] = 1U;
    __Vtablechg1[9] = 1U;
    __Vtablechg1[10] = 0U;
    __Vtablechg1[11] = 1U;
    __Vtablechg1[12] = 1U;
    __Vtablechg1[13] = 1U;
    __Vtablechg1[14] = 1U;
    __Vtablechg1[15] = 1U;
    __Vtablechg1[16] = 0U;
    __Vtablechg1[17] = 1U;
    __Vtablechg1[18] = 0U;
    __Vtablechg1[19] = 1U;
    __Vtablechg1[20] = 0U;
    __Vtablechg1[21] = 1U;
    __Vtablechg1[22] = 1U;
    __Vtablechg1[23] = 1U;
    __Vtablechg1[24] = 1U;
    __Vtablechg1[25] = 1U;
    __Vtablechg1[26] = 0U;
    __Vtablechg1[27] = 1U;
    __Vtablechg1[28] = 1U;
    __Vtablechg1[29] = 1U;
    __Vtablechg1[30] = 1U;
    __Vtablechg1[31] = 1U;
    __Vtablechg1[32] = 0U;
    __Vtablechg1[33] = 1U;
    __Vtablechg1[34] = 0U;
    __Vtablechg1[35] = 1U;
    __Vtablechg1[36] = 0U;
    __Vtablechg1[37] = 1U;
    __Vtablechg1[38] = 1U;
    __Vtablechg1[39] = 1U;
    __Vtablechg1[40] = 1U;
    __Vtablechg1[41] = 1U;
    __Vtablechg1[42] = 0U;
    __Vtablechg1[43] = 1U;
    __Vtablechg1[44] = 1U;
    __Vtablechg1[45] = 1U;
    __Vtablechg1[46] = 1U;
    __Vtablechg1[47] = 1U;
    __Vtablechg1[48] = 1U;
    __Vtablechg1[49] = 1U;
    __Vtablechg1[50] = 0U;
    __Vtablechg1[51] = 1U;
    __Vtablechg1[52] = 1U;
    __Vtablechg1[53] = 1U;
    __Vtablechg1[54] = 1U;
    __Vtablechg1[55] = 1U;
    __Vtablechg1[56] = 1U;
    __Vtablechg1[57] = 1U;
    __Vtablechg1[58] = 0U;
    __Vtablechg1[59] = 1U;
    __Vtablechg1[60] = 1U;
    __Vtablechg1[61] = 1U;
    __Vtablechg1[62] = 1U;
    __Vtablechg1[63] = 1U;
    __Vtable1_StrongEnumFSMTester__DOT__dut__DOT__state[0] = 0U;
    __Vtable1_StrongEnumFSMTester__DOT__dut__DOT__state[1] = 0U;
    __Vtable1_StrongEnumFSMTester__DOT__dut__DOT__state[2] = 0U;
    __Vtable1_StrongEnumFSMTester__DOT__dut__DOT__state[3] = 0U;
    __Vtable1_StrongEnumFSMTester__DOT__dut__DOT__state[4] = 0U;
    __Vtable1_StrongEnumFSMTester__DOT__dut__DOT__state[5] = 0U;
    __Vtable1_StrongEnumFSMTester__DOT__dut__DOT__state[6] = 1U;
    __Vtable1_StrongEnumFSMTester__DOT__dut__DOT__state[7] = 0U;
    __Vtable1_StrongEnumFSMTester__DOT__dut__DOT__state[8] = 0U;
    __Vtable1_StrongEnumFSMTester__DOT__dut__DOT__state[9] = 0U;
    __Vtable1_StrongEnumFSMTester__DOT__dut__DOT__state[10] = 0U;
    __Vtable1_StrongEnumFSMTester__DOT__dut__DOT__state[11] = 0U;
    __Vtable1_StrongEnumFSMTester__DOT__dut__DOT__state[12] = 2U;
    __Vtable1_StrongEnumFSMTester__DOT__dut__DOT__state[13] = 0U;
    __Vtable1_StrongEnumFSMTester__DOT__dut__DOT__state[14] = 1U;
    __Vtable1_StrongEnumFSMTester__DOT__dut__DOT__state[15] = 0U;
    __Vtable1_StrongEnumFSMTester__DOT__dut__DOT__state[16] = 0U;
    __Vtable1_StrongEnumFSMTester__DOT__dut__DOT__state[17] = 0U;
    __Vtable1_StrongEnumFSMTester__DOT__dut__DOT__state[18] = 0U;
    __Vtable1_StrongEnumFSMTester__DOT__dut__DOT__state[19] = 0U;
    __Vtable1_StrongEnumFSMTester__DOT__dut__DOT__state[20] = 0U;
    __Vtable1_StrongEnumFSMTester__DOT__dut__DOT__state[21] = 0U;
    __Vtable1_StrongEnumFSMTester__DOT__dut__DOT__state[22] = 1U;
    __Vtable1_StrongEnumFSMTester__DOT__dut__DOT__state[23] = 0U;
    __Vtable1_StrongEnumFSMTester__DOT__dut__DOT__state[24] = 0U;
    __Vtable1_StrongEnumFSMTester__DOT__dut__DOT__state[25] = 0U;
    __Vtable1_StrongEnumFSMTester__DOT__dut__DOT__state[26] = 0U;
    __Vtable1_StrongEnumFSMTester__DOT__dut__DOT__state[27] = 0U;
    __Vtable1_StrongEnumFSMTester__DOT__dut__DOT__state[28] = 2U;
    __Vtable1_StrongEnumFSMTester__DOT__dut__DOT__state[29] = 0U;
    __Vtable1_StrongEnumFSMTester__DOT__dut__DOT__state[30] = 1U;
    __Vtable1_StrongEnumFSMTester__DOT__dut__DOT__state[31] = 0U;
    __Vtable1_StrongEnumFSMTester__DOT__dut__DOT__state[32] = 0U;
    __Vtable1_StrongEnumFSMTester__DOT__dut__DOT__state[33] = 0U;
    __Vtable1_StrongEnumFSMTester__DOT__dut__DOT__state[34] = 0U;
    __Vtable1_StrongEnumFSMTester__DOT__dut__DOT__state[35] = 0U;
    __Vtable1_StrongEnumFSMTester__DOT__dut__DOT__state[36] = 0U;
    __Vtable1_StrongEnumFSMTester__DOT__dut__DOT__state[37] = 0U;
    __Vtable1_StrongEnumFSMTester__DOT__dut__DOT__state[38] = 1U;
    __Vtable1_StrongEnumFSMTester__DOT__dut__DOT__state[39] = 0U;
    __Vtable1_StrongEnumFSMTester__DOT__dut__DOT__state[40] = 0U;
    __Vtable1_StrongEnumFSMTester__DOT__dut__DOT__state[41] = 0U;
    __Vtable1_StrongEnumFSMTester__DOT__dut__DOT__state[42] = 0U;
    __Vtable1_StrongEnumFSMTester__DOT__dut__DOT__state[43] = 0U;
    __Vtable1_StrongEnumFSMTester__DOT__dut__DOT__state[44] = 2U;
    __Vtable1_StrongEnumFSMTester__DOT__dut__DOT__state[45] = 0U;
    __Vtable1_StrongEnumFSMTester__DOT__dut__DOT__state[46] = 1U;
    __Vtable1_StrongEnumFSMTester__DOT__dut__DOT__state[47] = 0U;
    __Vtable1_StrongEnumFSMTester__DOT__dut__DOT__state[48] = 0U;
    __Vtable1_StrongEnumFSMTester__DOT__dut__DOT__state[49] = 0U;
    __Vtable1_StrongEnumFSMTester__DOT__dut__DOT__state[50] = 0U;
    __Vtable1_StrongEnumFSMTester__DOT__dut__DOT__state[51] = 0U;
    __Vtable1_StrongEnumFSMTester__DOT__dut__DOT__state[52] = 0U;
    __Vtable1_StrongEnumFSMTester__DOT__dut__DOT__state[53] = 0U;
    __Vtable1_StrongEnumFSMTester__DOT__dut__DOT__state[54] = 1U;
    __Vtable1_StrongEnumFSMTester__DOT__dut__DOT__state[55] = 0U;
    __Vtable1_StrongEnumFSMTester__DOT__dut__DOT__state[56] = 0U;
    __Vtable1_StrongEnumFSMTester__DOT__dut__DOT__state[57] = 0U;
    __Vtable1_StrongEnumFSMTester__DOT__dut__DOT__state[58] = 0U;
    __Vtable1_StrongEnumFSMTester__DOT__dut__DOT__state[59] = 0U;
    __Vtable1_StrongEnumFSMTester__DOT__dut__DOT__state[60] = 2U;
    __Vtable1_StrongEnumFSMTester__DOT__dut__DOT__state[61] = 0U;
    __Vtable1_StrongEnumFSMTester__DOT__dut__DOT__state[62] = 1U;
    __Vtable1_StrongEnumFSMTester__DOT__dut__DOT__state[63] = 0U;
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
