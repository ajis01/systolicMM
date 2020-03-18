// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTblTester.h for the primary calling header

#include "VTblTester.h"        // For This
#include "VTblTester__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VTblTester) {
    VTblTester__Syms* __restrict vlSymsp = __VlSymsp = new VTblTester__Syms(this, name());
    VTblTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VTblTester::__Vconfigure(VTblTester__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VTblTester::~VTblTester() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VTblTester::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VTblTester::eval\n"); );
    VTblTester__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VTblTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VTblTester::_eval_initial_loop(VTblTester__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VTblTester::_sequent__TOP__1(VTblTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTblTester::_sequent__TOP__1\n"); );
    VTblTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdlyvdim0__TblTester__DOT__dut__DOT__m__v0,0,0);
    VL_SIG8(__Vdlyvval__TblTester__DOT__dut__DOT__m__v0,0,0);
    // Body
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/202003062137134842628618414117753/TblTester.v:62
    __Vdlyvval__TblTester__DOT__dut__DOT__m__v0 = vlTOPp->TblTester__DOT__dut_io_d;
    __Vdlyvdim0__TblTester__DOT__dut__DOT__m__v0 = vlTOPp->TblTester__DOT__dut_io_wi;
    // ALWAYS at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/202003062137134842628618414117753/TblTester.v:232
    vlTOPp->TblTester__DOT__value = ((IData)(vlTOPp->reset)
				      ? 0U : (IData)(vlTOPp->TblTester__DOT___T_2));
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TblTester__DOT___GEN_54) 
			 & (~ (IData)(vlTOPp->TblTester__DOT___T_11))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Tbl.scala:40 assert(dut.io.o === vvalues(cnt))\n");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TblTester__DOT___GEN_54) 
			 & (~ (IData)(vlTOPp->TblTester__DOT___T_11))))) {
	    VL_WRITEF("[%0t] %%Error: TblTester.v:254: Assertion failed in %NTblTester\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/202003062137134842628618414117753/TblTester.v",254,"");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TblTester__DOT___GEN_57) 
			 & (~ (IData)(vlTOPp->TblTester__DOT___T_15))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Tbl.scala:42 assert(dut.io.o === prev_value)\n");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TblTester__DOT___GEN_57) 
			 & (~ (IData)(vlTOPp->TblTester__DOT___T_15))))) {
	    VL_WRITEF("[%0t] %%Error: TblTester.v:276: Assertion failed in %NTblTester\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    VL_STOP_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/202003062137134842628618414117753/TblTester.v",276,"");
	}
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TblTester__DOT__wrap) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FINISH_MT("/home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/202003062137134842628618414117753/TblTester.v",287,"");
	}
    }
    // ALWAYSPOST at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/202003062137134842628618414117753/TblTester.v:64
    vlTOPp->TblTester__DOT__dut__DOT__m[__Vdlyvdim0__TblTester__DOT__dut__DOT__m__v0] 
	= __Vdlyvval__TblTester__DOT__dut__DOT__m__v0;
    vlTOPp->TblTester__DOT__wrap = (7U == (IData)(vlTOPp->TblTester__DOT__value));
    vlTOPp->TblTester__DOT___T_2 = (7U & ((IData)(1U) 
					  + (IData)(vlTOPp->TblTester__DOT__value)));
    vlTOPp->TblTester__DOT___GEN_23 = ((6U == (IData)(vlTOPp->TblTester__DOT__value)) 
				       | ((5U != (IData)(vlTOPp->TblTester__DOT__value)) 
					  & ((4U == (IData)(vlTOPp->TblTester__DOT__value)) 
					     | ((3U 
						 == (IData)(vlTOPp->TblTester__DOT__value)) 
						| ((2U 
						    != (IData)(vlTOPp->TblTester__DOT__value)) 
						   & (1U 
						      != (IData)(vlTOPp->TblTester__DOT__value)))))));
    vlTOPp->TblTester__DOT___GEN_7 = ((6U == (IData)(vlTOPp->TblTester__DOT__value)) 
				      | ((5U == (IData)(vlTOPp->TblTester__DOT__value)) 
					 | ((4U == (IData)(vlTOPp->TblTester__DOT__value)) 
					    | ((3U 
						!= (IData)(vlTOPp->TblTester__DOT__value)) 
					       & ((2U 
						   == (IData)(vlTOPp->TblTester__DOT__value)) 
						  | (1U 
						     != (IData)(vlTOPp->TblTester__DOT__value)))))));
    vlTOPp->TblTester__DOT___GEN_15 = ((6U == (7U & 
					       ((IData)(vlTOPp->TblTester__DOT__value) 
						- (IData)(1U)))) 
				       | ((5U == (7U 
						  & ((IData)(vlTOPp->TblTester__DOT__value) 
						     - (IData)(1U)))) 
					  | ((4U == 
					      (7U & 
					       ((IData)(vlTOPp->TblTester__DOT__value) 
						- (IData)(1U)))) 
					     | ((3U 
						 != 
						 (7U 
						  & ((IData)(vlTOPp->TblTester__DOT__value) 
						     - (IData)(1U)))) 
						& ((2U 
						    == 
						    (7U 
						     & ((IData)(vlTOPp->TblTester__DOT__value) 
							- (IData)(1U)))) 
						   | (1U 
						      != 
						      (7U 
						       & ((IData)(vlTOPp->TblTester__DOT__value) 
							  - (IData)(1U)))))))));
    vlTOPp->TblTester__DOT__dut_io_d = ((7U == (IData)(vlTOPp->TblTester__DOT__value)) 
					| (IData)(vlTOPp->TblTester__DOT___GEN_23));
    vlTOPp->TblTester__DOT__dut_io_wi = ((7U == (IData)(vlTOPp->TblTester__DOT__value)) 
					 | (IData)(vlTOPp->TblTester__DOT___GEN_7));
    vlTOPp->TblTester__DOT___T_8 = (((7U == (7U & ((IData)(vlTOPp->TblTester__DOT__value) 
						   - (IData)(1U)))) 
				     | (IData)(vlTOPp->TblTester__DOT___GEN_15)) 
				    == ((7U == (IData)(vlTOPp->TblTester__DOT__value)) 
					| (IData)(vlTOPp->TblTester__DOT___GEN_7)));
    vlTOPp->TblTester__DOT__dut_io_ri = ((7U == (7U 
						 & ((IData)(vlTOPp->TblTester__DOT__value) 
						    - (IData)(1U)))) 
					 | (IData)(vlTOPp->TblTester__DOT___GEN_15));
    vlTOPp->TblTester__DOT___GEN_54 = ((0U < (IData)(vlTOPp->TblTester__DOT__value)) 
				       & (IData)(vlTOPp->TblTester__DOT___T_8));
    vlTOPp->TblTester__DOT___GEN_57 = ((0U < (IData)(vlTOPp->TblTester__DOT__value)) 
				       & (~ (IData)(vlTOPp->TblTester__DOT___T_8)));
    vlTOPp->TblTester__DOT__dut_io_o = (((IData)(vlTOPp->TblTester__DOT__dut_io_ri) 
					 == (IData)(vlTOPp->TblTester__DOT__dut_io_wi))
					 ? (IData)(vlTOPp->TblTester__DOT__dut_io_d)
					 : vlTOPp->TblTester__DOT__dut__DOT__m
					[vlTOPp->TblTester__DOT__dut_io_ri]);
}

void VTblTester::_settle__TOP__2(VTblTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTblTester::_settle__TOP__2\n"); );
    VTblTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TblTester__DOT__wrap = (7U == (IData)(vlTOPp->TblTester__DOT__value));
    vlTOPp->TblTester__DOT___T_2 = (7U & ((IData)(1U) 
					  + (IData)(vlTOPp->TblTester__DOT__value)));
    vlTOPp->TblTester__DOT___GEN_23 = ((6U == (IData)(vlTOPp->TblTester__DOT__value)) 
				       | ((5U != (IData)(vlTOPp->TblTester__DOT__value)) 
					  & ((4U == (IData)(vlTOPp->TblTester__DOT__value)) 
					     | ((3U 
						 == (IData)(vlTOPp->TblTester__DOT__value)) 
						| ((2U 
						    != (IData)(vlTOPp->TblTester__DOT__value)) 
						   & (1U 
						      != (IData)(vlTOPp->TblTester__DOT__value)))))));
    vlTOPp->TblTester__DOT___GEN_7 = ((6U == (IData)(vlTOPp->TblTester__DOT__value)) 
				      | ((5U == (IData)(vlTOPp->TblTester__DOT__value)) 
					 | ((4U == (IData)(vlTOPp->TblTester__DOT__value)) 
					    | ((3U 
						!= (IData)(vlTOPp->TblTester__DOT__value)) 
					       & ((2U 
						   == (IData)(vlTOPp->TblTester__DOT__value)) 
						  | (1U 
						     != (IData)(vlTOPp->TblTester__DOT__value)))))));
    vlTOPp->TblTester__DOT___GEN_15 = ((6U == (7U & 
					       ((IData)(vlTOPp->TblTester__DOT__value) 
						- (IData)(1U)))) 
				       | ((5U == (7U 
						  & ((IData)(vlTOPp->TblTester__DOT__value) 
						     - (IData)(1U)))) 
					  | ((4U == 
					      (7U & 
					       ((IData)(vlTOPp->TblTester__DOT__value) 
						- (IData)(1U)))) 
					     | ((3U 
						 != 
						 (7U 
						  & ((IData)(vlTOPp->TblTester__DOT__value) 
						     - (IData)(1U)))) 
						& ((2U 
						    == 
						    (7U 
						     & ((IData)(vlTOPp->TblTester__DOT__value) 
							- (IData)(1U)))) 
						   | (1U 
						      != 
						      (7U 
						       & ((IData)(vlTOPp->TblTester__DOT__value) 
							  - (IData)(1U)))))))));
    vlTOPp->TblTester__DOT__dut_io_d = ((7U == (IData)(vlTOPp->TblTester__DOT__value)) 
					| (IData)(vlTOPp->TblTester__DOT___GEN_23));
    vlTOPp->TblTester__DOT__dut_io_wi = ((7U == (IData)(vlTOPp->TblTester__DOT__value)) 
					 | (IData)(vlTOPp->TblTester__DOT___GEN_7));
    vlTOPp->TblTester__DOT___T_8 = (((7U == (7U & ((IData)(vlTOPp->TblTester__DOT__value) 
						   - (IData)(1U)))) 
				     | (IData)(vlTOPp->TblTester__DOT___GEN_15)) 
				    == ((7U == (IData)(vlTOPp->TblTester__DOT__value)) 
					| (IData)(vlTOPp->TblTester__DOT___GEN_7)));
    vlTOPp->TblTester__DOT__dut_io_ri = ((7U == (7U 
						 & ((IData)(vlTOPp->TblTester__DOT__value) 
						    - (IData)(1U)))) 
					 | (IData)(vlTOPp->TblTester__DOT___GEN_15));
    vlTOPp->TblTester__DOT___GEN_54 = ((0U < (IData)(vlTOPp->TblTester__DOT__value)) 
				       & (IData)(vlTOPp->TblTester__DOT___T_8));
    vlTOPp->TblTester__DOT___GEN_57 = ((0U < (IData)(vlTOPp->TblTester__DOT__value)) 
				       & (~ (IData)(vlTOPp->TblTester__DOT___T_8)));
    vlTOPp->TblTester__DOT__dut_io_o = (((IData)(vlTOPp->TblTester__DOT__dut_io_ri) 
					 == (IData)(vlTOPp->TblTester__DOT__dut_io_wi))
					 ? (IData)(vlTOPp->TblTester__DOT__dut_io_d)
					 : vlTOPp->TblTester__DOT__dut__DOT__m
					[vlTOPp->TblTester__DOT__dut_io_ri]);
    vlTOPp->TblTester__DOT___T_15 = (((IData)(vlTOPp->TblTester__DOT__dut_io_o) 
				      == ((7U == (7U 
						  & ((IData)(vlTOPp->TblTester__DOT__value) 
						     - (IData)(1U)))) 
					  | ((6U == 
					      (7U & 
					       ((IData)(vlTOPp->TblTester__DOT__value) 
						- (IData)(1U)))) 
					     | ((5U 
						 != 
						 (7U 
						  & ((IData)(vlTOPp->TblTester__DOT__value) 
						     - (IData)(1U)))) 
						& ((4U 
						    == 
						    (7U 
						     & ((IData)(vlTOPp->TblTester__DOT__value) 
							- (IData)(1U)))) 
						   | ((3U 
						       == 
						       (7U 
							& ((IData)(vlTOPp->TblTester__DOT__value) 
							   - (IData)(1U)))) 
						      | ((2U 
							  != 
							  (7U 
							   & ((IData)(vlTOPp->TblTester__DOT__value) 
							      - (IData)(1U)))) 
							 & (1U 
							    != 
							    (7U 
							     & ((IData)(vlTOPp->TblTester__DOT__value) 
								- (IData)(1U))))))))))) 
				     | (IData)(vlTOPp->reset));
    vlTOPp->TblTester__DOT___T_11 = (((IData)(vlTOPp->TblTester__DOT__dut_io_o) 
				      == ((7U == (IData)(vlTOPp->TblTester__DOT__value)) 
					  | (IData)(vlTOPp->TblTester__DOT___GEN_23))) 
				     | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void VTblTester::_combo__TOP__3(VTblTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTblTester::_combo__TOP__3\n"); );
    VTblTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TblTester__DOT___T_15 = (((IData)(vlTOPp->TblTester__DOT__dut_io_o) 
				      == ((7U == (7U 
						  & ((IData)(vlTOPp->TblTester__DOT__value) 
						     - (IData)(1U)))) 
					  | ((6U == 
					      (7U & 
					       ((IData)(vlTOPp->TblTester__DOT__value) 
						- (IData)(1U)))) 
					     | ((5U 
						 != 
						 (7U 
						  & ((IData)(vlTOPp->TblTester__DOT__value) 
						     - (IData)(1U)))) 
						& ((4U 
						    == 
						    (7U 
						     & ((IData)(vlTOPp->TblTester__DOT__value) 
							- (IData)(1U)))) 
						   | ((3U 
						       == 
						       (7U 
							& ((IData)(vlTOPp->TblTester__DOT__value) 
							   - (IData)(1U)))) 
						      | ((2U 
							  != 
							  (7U 
							   & ((IData)(vlTOPp->TblTester__DOT__value) 
							      - (IData)(1U)))) 
							 & (1U 
							    != 
							    (7U 
							     & ((IData)(vlTOPp->TblTester__DOT__value) 
								- (IData)(1U))))))))))) 
				     | (IData)(vlTOPp->reset));
    vlTOPp->TblTester__DOT___T_11 = (((IData)(vlTOPp->TblTester__DOT__dut_io_o) 
				      == ((7U == (IData)(vlTOPp->TblTester__DOT__value)) 
					  | (IData)(vlTOPp->TblTester__DOT___GEN_23))) 
				     | (IData)(vlTOPp->reset));
}

void VTblTester::_eval(VTblTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTblTester::_eval\n"); );
    VTblTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__3(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VTblTester::_eval_initial(VTblTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTblTester::_eval_initial\n"); );
    VTblTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VTblTester::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTblTester::final\n"); );
    // Variables
    VTblTester__Syms* __restrict vlSymsp = this->__VlSymsp;
    VTblTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VTblTester::_eval_settle(VTblTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTblTester::_eval_settle\n"); );
    VTblTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

VL_INLINE_OPT QData VTblTester::_change_request(VTblTester__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTblTester::_change_request\n"); );
    VTblTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VTblTester::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTblTester::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG

void VTblTester::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTblTester::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    TblTester__DOT__dut_io_wi = VL_RAND_RESET_I(1);
    TblTester__DOT__dut_io_ri = VL_RAND_RESET_I(1);
    TblTester__DOT__dut_io_d = VL_RAND_RESET_I(1);
    TblTester__DOT__dut_io_o = VL_RAND_RESET_I(1);
    TblTester__DOT__value = VL_RAND_RESET_I(3);
    TblTester__DOT__wrap = VL_RAND_RESET_I(1);
    TblTester__DOT___T_2 = VL_RAND_RESET_I(3);
    TblTester__DOT___GEN_7 = VL_RAND_RESET_I(1);
    TblTester__DOT___GEN_15 = VL_RAND_RESET_I(1);
    TblTester__DOT___GEN_23 = VL_RAND_RESET_I(1);
    TblTester__DOT___T_8 = VL_RAND_RESET_I(1);
    TblTester__DOT___T_11 = VL_RAND_RESET_I(1);
    TblTester__DOT___T_15 = VL_RAND_RESET_I(1);
    TblTester__DOT___GEN_54 = VL_RAND_RESET_I(1);
    TblTester__DOT___GEN_57 = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
	    TblTester__DOT__dut__DOT__m[__Vi0] = VL_RAND_RESET_I(1);
    }}
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
