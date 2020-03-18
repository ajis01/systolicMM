// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See dut.h for the primary calling header

#include "dut.h"               // For This
#include "dut__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(dut) {
    dut__Syms* __restrict vlSymsp = __VlSymsp = new dut__Syms(this, name());
    dut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void dut::__Vconfigure(dut__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

dut::~dut() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void dut::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate dut::eval\n"); );
    dut__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    dut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
    }
}

void dut::_eval_initial_loop(dut__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
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

void dut::_initial__TOP__1(dut__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    dut::_initial__TOP__1\n"); );
    dut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at test-RecF16ToUI64/ValExec_RecF16ToUI64.v:248
    vlTOPp->io_check = 1U;
}

VL_INLINE_OPT void dut::_combo__TOP__2(dut__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    dut::_combo__TOP__2\n"); );
    dut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ValExec_RecF16ToUI64__DOT___T_33 = ((0U 
						 == 
						 (0x1fU 
						  & ((IData)(vlTOPp->io_in) 
						     >> 0xaU))) 
						& (0U 
						   == 
						   (0x3ffU 
						    & (IData)(vlTOPp->io_in))));
    vlTOPp->ValExec_RecF16ToUI64__DOT___T_23 = ((0x200U 
						 & (IData)(vlTOPp->io_in))
						 ? 0U
						 : 
						((0x100U 
						  & (IData)(vlTOPp->io_in))
						  ? 1U
						  : 
						 ((0x80U 
						   & (IData)(vlTOPp->io_in))
						   ? 2U
						   : 
						  ((0x40U 
						    & (IData)(vlTOPp->io_in))
						    ? 3U
						    : 
						   ((0x20U 
						     & (IData)(vlTOPp->io_in))
						     ? 4U
						     : 
						    ((0x10U 
						      & (IData)(vlTOPp->io_in))
						      ? 5U
						      : 
						     ((8U 
						       & (IData)(vlTOPp->io_in))
						       ? 6U
						       : 
						      ((4U 
							& (IData)(vlTOPp->io_in))
						        ? 7U
						        : 
						       ((2U 
							 & (IData)(vlTOPp->io_in))
							 ? 8U
							 : 9U)))))))));
    vlTOPp->ValExec_RecF16ToUI64__DOT___T_32 = (0x3fU 
						& (((0U 
						     == 
						     (0x1fU 
						      & ((IData)(vlTOPp->io_in) 
							 >> 0xaU)))
						     ? 
						    (~ (IData)(vlTOPp->ValExec_RecF16ToUI64__DOT___T_23))
						     : 
						    (0x1fU 
						     & ((IData)(vlTOPp->io_in) 
							>> 0xaU))) 
						   + 
						   (0x10U 
						    | ((0U 
							== 
							(0x1fU 
							 & ((IData)(vlTOPp->io_in) 
							    >> 0xaU)))
						        ? 2U
						        : 1U))));
    vlTOPp->ValExec_RecF16ToUI64__DOT__recFNToIN_io_in 
	= (((0x10000U & ((IData)(vlTOPp->io_in) << 1U)) 
	    | (0xe000U & ((((IData)(vlTOPp->ValExec_RecF16ToUI64__DOT___T_33)
			     ? 0U : ((IData)(vlTOPp->ValExec_RecF16ToUI64__DOT___T_32) 
				     >> 3U)) | ((3U 
						 == 
						 (3U 
						  & ((IData)(vlTOPp->ValExec_RecF16ToUI64__DOT___T_32) 
						     >> 4U))) 
						& (0U 
						   != 
						   (0x3ffU 
						    & (IData)(vlTOPp->io_in))))) 
			  << 0xdU))) | ((0x1c00U & 
					 ((IData)(vlTOPp->ValExec_RecF16ToUI64__DOT___T_32) 
					  << 0xaU)) 
					| (0x3ffU & 
					   ((0U == 
					     (0x1fU 
					      & ((IData)(vlTOPp->io_in) 
						 >> 0xaU)))
					     ? (0x3feU 
						& (((0x3ffU 
						     & (IData)(vlTOPp->io_in)) 
						    << (IData)(vlTOPp->ValExec_RecF16ToUI64__DOT___T_23)) 
						   << 1U))
					     : (IData)(vlTOPp->io_in)))));
    vlTOPp->ValExec_RecF16ToUI64__DOT__recFNToIN__DOT__rawIn_isNaN 
	= ((3U == (3U & (vlTOPp->ValExec_RecF16ToUI64__DOT__recFNToIN_io_in 
			 >> 0xeU))) & (vlTOPp->ValExec_RecF16ToUI64__DOT__recFNToIN_io_in 
				       >> 0xdU));
    vlTOPp->ValExec_RecF16ToUI64__DOT__recFNToIN__DOT__magJustBelowOne 
	= ((~ (1U & (vlTOPp->ValExec_RecF16ToUI64__DOT__recFNToIN_io_in 
		     >> 0xfU))) & (0x1fU == (0x1fU 
					     & (vlTOPp->ValExec_RecF16ToUI64__DOT__recFNToIN_io_in 
						>> 0xaU))));
    vlTOPp->ValExec_RecF16ToUI64__DOT__recFNToIN__DOT__shiftedSig 
	= (0x3ffffffU & (((0x400U & (vlTOPp->ValExec_RecF16ToUI64__DOT__recFNToIN_io_in 
				     >> 5U)) | (0x3ffU 
						& vlTOPp->ValExec_RecF16ToUI64__DOT__recFNToIN_io_in)) 
			 << (0xfU & ((0x8000U & vlTOPp->ValExec_RecF16ToUI64__DOT__recFNToIN_io_in)
				      ? (0x3fU & (vlTOPp->ValExec_RecF16ToUI64__DOT__recFNToIN_io_in 
						  >> 0xaU))
				      : 0U))));
    vlTOPp->ValExec_RecF16ToUI64__DOT__recFNToIN__DOT__excSign 
	= (1U & ((~ (IData)(vlTOPp->ValExec_RecF16ToUI64__DOT__recFNToIN__DOT__rawIn_isNaN)) 
		 & (vlTOPp->ValExec_RecF16ToUI64__DOT__recFNToIN_io_in 
		    >> 0x10U)));
    vlTOPp->ValExec_RecF16ToUI64__DOT__recFNToIN__DOT__invalidExc 
	= ((IData)(vlTOPp->ValExec_RecF16ToUI64__DOT__recFNToIN__DOT__rawIn_isNaN) 
	   | ((3U == (3U & (vlTOPp->ValExec_RecF16ToUI64__DOT__recFNToIN_io_in 
			    >> 0xeU))) & (~ (vlTOPp->ValExec_RecF16ToUI64__DOT__recFNToIN_io_in 
					     >> 0xdU))));
    vlTOPp->ValExec_RecF16ToUI64__DOT__recFNToIN__DOT__alignedSig 
	= ((0x3fffeU & (vlTOPp->ValExec_RecF16ToUI64__DOT__recFNToIN__DOT__shiftedSig 
			>> 8U)) | (0U != (0x1ffU & vlTOPp->ValExec_RecF16ToUI64__DOT__recFNToIN__DOT__shiftedSig)));
    vlTOPp->ValExec_RecF16ToUI64__DOT__recFNToIN__DOT__complUnroundedInt 
	= ((0x10000U & vlTOPp->ValExec_RecF16ToUI64__DOT__recFNToIN_io_in)
	    ? (~ (QData)((IData)((0xffffU & (vlTOPp->ValExec_RecF16ToUI64__DOT__recFNToIN__DOT__alignedSig 
					     >> 2U)))))
	    : (QData)((IData)((0xffffU & (vlTOPp->ValExec_RecF16ToUI64__DOT__recFNToIN__DOT__alignedSig 
					  >> 2U)))));
    vlTOPp->ValExec_RecF16ToUI64__DOT__recFNToIN__DOT__common_inexact 
	= ((0x8000U & vlTOPp->ValExec_RecF16ToUI64__DOT__recFNToIN_io_in)
	    ? (0U != (3U & vlTOPp->ValExec_RecF16ToUI64__DOT__recFNToIN__DOT__alignedSig))
	    : (0U != (7U & (vlTOPp->ValExec_RecF16ToUI64__DOT__recFNToIN_io_in 
			    >> 0xdU))));
    vlTOPp->ValExec_RecF16ToUI64__DOT__recFNToIN__DOT__roundIncr 
	= (((((0U == (IData)(vlTOPp->io_roundingMode)) 
	      & ((1U & ((vlTOPp->ValExec_RecF16ToUI64__DOT__recFNToIN_io_in 
			 >> 0xfU) & ((3U == (3U & (vlTOPp->ValExec_RecF16ToUI64__DOT__recFNToIN__DOT__alignedSig 
						   >> 1U))) 
				     | (3U == (3U & vlTOPp->ValExec_RecF16ToUI64__DOT__recFNToIN__DOT__alignedSig))))) 
		 | ((IData)(vlTOPp->ValExec_RecF16ToUI64__DOT__recFNToIN__DOT__magJustBelowOne) 
		    & (0U != (3U & vlTOPp->ValExec_RecF16ToUI64__DOT__recFNToIN__DOT__alignedSig))))) 
	     | ((4U == (IData)(vlTOPp->io_roundingMode)) 
		& ((1U & ((vlTOPp->ValExec_RecF16ToUI64__DOT__recFNToIN_io_in 
			   >> 0xfU) & (vlTOPp->ValExec_RecF16ToUI64__DOT__recFNToIN__DOT__alignedSig 
				       >> 1U))) | (IData)(vlTOPp->ValExec_RecF16ToUI64__DOT__recFNToIN__DOT__magJustBelowOne)))) 
	    | (((2U == (IData)(vlTOPp->io_roundingMode)) 
		| (6U == (IData)(vlTOPp->io_roundingMode))) 
	       & ((vlTOPp->ValExec_RecF16ToUI64__DOT__recFNToIN_io_in 
		   >> 0x10U) & (IData)(vlTOPp->ValExec_RecF16ToUI64__DOT__recFNToIN__DOT__common_inexact)))) 
	   | ((3U == (IData)(vlTOPp->io_roundingMode)) 
	      & ((~ (vlTOPp->ValExec_RecF16ToUI64__DOT__recFNToIN_io_in 
		     >> 0x10U)) & (IData)(vlTOPp->ValExec_RecF16ToUI64__DOT__recFNToIN__DOT__common_inexact))));
    vlTOPp->ValExec_RecF16ToUI64__DOT__recFNToIN__DOT__common_overflow 
	= (1U & ((0x8000U & vlTOPp->ValExec_RecF16ToUI64__DOT__recFNToIN_io_in)
		  ? (vlTOPp->ValExec_RecF16ToUI64__DOT__recFNToIN_io_in 
		     >> 0x10U) : ((vlTOPp->ValExec_RecF16ToUI64__DOT__recFNToIN_io_in 
				   >> 0x10U) & (IData)(vlTOPp->ValExec_RecF16ToUI64__DOT__recFNToIN__DOT__roundIncr))));
    vlTOPp->io_actual_out = (((IData)(vlTOPp->ValExec_RecF16ToUI64__DOT__recFNToIN__DOT__invalidExc) 
			      | (IData)(vlTOPp->ValExec_RecF16ToUI64__DOT__recFNToIN__DOT__common_overflow))
			      ? (((IData)(vlTOPp->ValExec_RecF16ToUI64__DOT__recFNToIN__DOT__excSign)
				   ? VL_ULL(0) : VL_ULL(0x8000000000000000)) 
				 | ((IData)(vlTOPp->ValExec_RecF16ToUI64__DOT__recFNToIN__DOT__excSign)
				     ? VL_ULL(0) : VL_ULL(0x7fffffffffffffff)))
			      : (((1U & ((IData)(vlTOPp->ValExec_RecF16ToUI64__DOT__recFNToIN__DOT__roundIncr) 
					 ^ (vlTOPp->ValExec_RecF16ToUI64__DOT__recFNToIN_io_in 
					    >> 0x10U)))
				   ? (VL_ULL(1) + vlTOPp->ValExec_RecF16ToUI64__DOT__recFNToIN__DOT__complUnroundedInt)
				   : vlTOPp->ValExec_RecF16ToUI64__DOT__recFNToIN__DOT__complUnroundedInt) 
				 | (QData)((IData)(
						   ((6U 
						     == (IData)(vlTOPp->io_roundingMode)) 
						    & (IData)(vlTOPp->ValExec_RecF16ToUI64__DOT__recFNToIN__DOT__common_inexact))))));
    vlTOPp->ValExec_RecF16ToUI64__DOT__recFNToIN_io_intExceptionFlags 
	= (((IData)(vlTOPp->ValExec_RecF16ToUI64__DOT__recFNToIN__DOT__invalidExc) 
	    << 2U) | ((((~ (IData)(vlTOPp->ValExec_RecF16ToUI64__DOT__recFNToIN__DOT__invalidExc)) 
			& (IData)(vlTOPp->ValExec_RecF16ToUI64__DOT__recFNToIN__DOT__common_overflow)) 
		       << 1U) | (((~ (IData)(vlTOPp->ValExec_RecF16ToUI64__DOT__recFNToIN__DOT__invalidExc)) 
				  & (~ (IData)(vlTOPp->ValExec_RecF16ToUI64__DOT__recFNToIN__DOT__common_overflow))) 
				 & (IData)(vlTOPp->ValExec_RecF16ToUI64__DOT__recFNToIN__DOT__common_inexact))));
    vlTOPp->io_actual_exceptionFlags = (((0U != (3U 
						 & ((IData)(vlTOPp->ValExec_RecF16ToUI64__DOT__recFNToIN_io_intExceptionFlags) 
						    >> 1U))) 
					 << 4U) | (1U 
						   & (IData)(vlTOPp->ValExec_RecF16ToUI64__DOT__recFNToIN_io_intExceptionFlags)));
    vlTOPp->io_pass = ((vlTOPp->io_actual_out == vlTOPp->io_expected_out) 
		       & ((IData)(vlTOPp->io_actual_exceptionFlags) 
			  == (IData)(vlTOPp->io_expected_exceptionFlags)));
}

void dut::_eval(dut__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    dut::_eval\n"); );
    dut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
}

void dut::_eval_initial(dut__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    dut::_eval_initial\n"); );
    dut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
}

void dut::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    dut::final\n"); );
    // Variables
    dut__Syms* __restrict vlSymsp = this->__VlSymsp;
    dut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void dut::_eval_settle(dut__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    dut::_eval_settle\n"); );
    dut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
}

VL_INLINE_OPT QData dut::_change_request(dut__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    dut::_change_request\n"); );
    dut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void dut::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    dut::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((io_roundingMode & 0xf8U))) {
	Verilated::overWidthError("io_roundingMode");}
    if (VL_UNLIKELY((io_expected_exceptionFlags & 0xe0U))) {
	Verilated::overWidthError("io_expected_exceptionFlags");}
}
#endif // VL_DEBUG

void dut::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    dut::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_in = VL_RAND_RESET_I(16);
    io_roundingMode = VL_RAND_RESET_I(3);
    io_expected_out = VL_RAND_RESET_Q(64);
    io_expected_exceptionFlags = VL_RAND_RESET_I(5);
    io_actual_out = VL_RAND_RESET_Q(64);
    io_actual_exceptionFlags = VL_RAND_RESET_I(5);
    io_check = VL_RAND_RESET_I(1);
    io_pass = VL_RAND_RESET_I(1);
    ValExec_RecF16ToUI64__DOT__recFNToIN_io_in = VL_RAND_RESET_I(17);
    ValExec_RecF16ToUI64__DOT__recFNToIN_io_intExceptionFlags = VL_RAND_RESET_I(3);
    ValExec_RecF16ToUI64__DOT___T_23 = VL_RAND_RESET_I(4);
    ValExec_RecF16ToUI64__DOT___T_32 = VL_RAND_RESET_I(6);
    ValExec_RecF16ToUI64__DOT___T_33 = VL_RAND_RESET_I(1);
    ValExec_RecF16ToUI64__DOT__recFNToIN__DOT__rawIn_isNaN = VL_RAND_RESET_I(1);
    ValExec_RecF16ToUI64__DOT__recFNToIN__DOT__magJustBelowOne = VL_RAND_RESET_I(1);
    ValExec_RecF16ToUI64__DOT__recFNToIN__DOT__shiftedSig = VL_RAND_RESET_I(26);
    ValExec_RecF16ToUI64__DOT__recFNToIN__DOT__alignedSig = VL_RAND_RESET_I(18);
    ValExec_RecF16ToUI64__DOT__recFNToIN__DOT__common_inexact = VL_RAND_RESET_I(1);
    ValExec_RecF16ToUI64__DOT__recFNToIN__DOT__roundIncr = VL_RAND_RESET_I(1);
    ValExec_RecF16ToUI64__DOT__recFNToIN__DOT__complUnroundedInt = VL_RAND_RESET_Q(64);
    ValExec_RecF16ToUI64__DOT__recFNToIN__DOT__common_overflow = VL_RAND_RESET_I(1);
    ValExec_RecF16ToUI64__DOT__recFNToIN__DOT__invalidExc = VL_RAND_RESET_I(1);
    ValExec_RecF16ToUI64__DOT__recFNToIN__DOT__excSign = VL_RAND_RESET_I(1);
}
