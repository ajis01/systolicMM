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
    // INITIAL at test-RecF16ToRecF32/ValExec_RecF16ToRecF32.v:309
    vlTOPp->io_check = 1U;
}

VL_INLINE_OPT void dut::_combo__TOP__2(dut__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    dut::_combo__TOP__2\n"); );
    dut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ValExec_RecF16ToRecF32__DOT___T_114 = (
						   (0U 
						    == 
						    (0xffU 
						     & (vlTOPp->io_expected_out 
							>> 0x17U))) 
						   & (0U 
						      == 
						      (0x7fffffU 
						       & vlTOPp->io_expected_out)));
    vlTOPp->ValExec_RecF16ToRecF32__DOT___T_104 = (
						   (0x400000U 
						    & vlTOPp->io_expected_out)
						    ? 0U
						    : 
						   ((0x200000U 
						     & vlTOPp->io_expected_out)
						     ? 1U
						     : 
						    ((0x100000U 
						      & vlTOPp->io_expected_out)
						      ? 2U
						      : 
						     ((0x80000U 
						       & vlTOPp->io_expected_out)
						       ? 3U
						       : 
						      ((0x40000U 
							& vlTOPp->io_expected_out)
						        ? 4U
						        : 
						       ((0x20000U 
							 & vlTOPp->io_expected_out)
							 ? 5U
							 : 
							((0x10000U 
							  & vlTOPp->io_expected_out)
							  ? 6U
							  : 
							 ((0x8000U 
							   & vlTOPp->io_expected_out)
							   ? 7U
							   : 
							  ((0x4000U 
							    & vlTOPp->io_expected_out)
							    ? 8U
							    : 
							   ((0x2000U 
							     & vlTOPp->io_expected_out)
							     ? 9U
							     : 
							    ((0x1000U 
							      & vlTOPp->io_expected_out)
							      ? 0xaU
							      : 
							     ((0x800U 
							       & vlTOPp->io_expected_out)
							       ? 0xbU
							       : 
							      ((0x400U 
								& vlTOPp->io_expected_out)
							        ? 0xcU
							        : 
							       ((0x200U 
								 & vlTOPp->io_expected_out)
								 ? 0xdU
								 : 
								((0x100U 
								  & vlTOPp->io_expected_out)
								  ? 0xeU
								  : 
								 ((0x80U 
								   & vlTOPp->io_expected_out)
								   ? 0xfU
								   : 
								  ((0x40U 
								    & vlTOPp->io_expected_out)
								    ? 0x10U
								    : 
								   ((0x20U 
								     & vlTOPp->io_expected_out)
								     ? 0x11U
								     : 
								    ((0x10U 
								      & vlTOPp->io_expected_out)
								      ? 0x12U
								      : 
								     ((8U 
								       & vlTOPp->io_expected_out)
								       ? 0x13U
								       : 
								      ((4U 
									& vlTOPp->io_expected_out)
								        ? 0x14U
								        : 
								       ((2U 
									 & vlTOPp->io_expected_out)
									 ? 0x15U
									 : 0x16U))))))))))))))))))))));
    vlTOPp->ValExec_RecF16ToRecF32__DOT___T_33 = ((0U 
						   == 
						   (0x1fU 
						    & ((IData)(vlTOPp->io_in) 
						       >> 0xaU))) 
						  & (0U 
						     == 
						     (0x3ffU 
						      & (IData)(vlTOPp->io_in))));
    vlTOPp->ValExec_RecF16ToRecF32__DOT___T_23 = ((0x200U 
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
    vlTOPp->ValExec_RecF16ToRecF32__DOT___T_113 = (0x1ffU 
						   & (((0U 
							== 
							(0xffU 
							 & (vlTOPp->io_expected_out 
							    >> 0x17U)))
						        ? 
						       (~ (IData)(vlTOPp->ValExec_RecF16ToRecF32__DOT___T_104))
						        : 
						       (0xffU 
							& (vlTOPp->io_expected_out 
							   >> 0x17U))) 
						      + 
						      (0x80U 
						       | ((0U 
							   == 
							   (0xffU 
							    & (vlTOPp->io_expected_out 
							       >> 0x17U)))
							   ? 2U
							   : 1U))));
    vlTOPp->ValExec_RecF16ToRecF32__DOT___T_32 = (0x3fU 
						  & (((0U 
						       == 
						       (0x1fU 
							& ((IData)(vlTOPp->io_in) 
							   >> 0xaU)))
						       ? 
						      (~ (IData)(vlTOPp->ValExec_RecF16ToRecF32__DOT___T_23))
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
    vlTOPp->io_expected_recOut = (((QData)((IData)(
						   ((8U 
						     & (vlTOPp->io_expected_out 
							>> 0x1cU)) 
						    | (7U 
						       & (((IData)(vlTOPp->ValExec_RecF16ToRecF32__DOT___T_114)
							    ? 0U
							    : 
							   ((IData)(vlTOPp->ValExec_RecF16ToRecF32__DOT___T_113) 
							    >> 6U)) 
							  | ((3U 
							      == 
							      (3U 
							       & ((IData)(vlTOPp->ValExec_RecF16ToRecF32__DOT___T_113) 
								  >> 7U))) 
							     & (0U 
								!= 
								(0x7fffffU 
								 & vlTOPp->io_expected_out)))))))) 
				   << 0x1dU) | (QData)((IData)(
							       ((0x1f800000U 
								 & ((IData)(vlTOPp->ValExec_RecF16ToRecF32__DOT___T_113) 
								    << 0x17U)) 
								| (0x7fffffU 
								   & ((0U 
								       == 
								       (0xffU 
									& (vlTOPp->io_expected_out 
									   >> 0x17U)))
								       ? 
								      (0x7ffffeU 
								       & ((IData)(
										(VL_ULL(0x3fffffffffffff) 
										& ((QData)((IData)(
										(0x7fffffU 
										& vlTOPp->io_expected_out))) 
										<< (IData)(vlTOPp->ValExec_RecF16ToRecF32__DOT___T_104)))) 
									  << 1U))
								       : vlTOPp->io_expected_out))))));
    vlTOPp->ValExec_RecF16ToRecF32__DOT__recFNToRecFN_io_in 
	= (((0x10000U & ((IData)(vlTOPp->io_in) << 1U)) 
	    | (0xe000U & ((((IData)(vlTOPp->ValExec_RecF16ToRecF32__DOT___T_33)
			     ? 0U : ((IData)(vlTOPp->ValExec_RecF16ToRecF32__DOT___T_32) 
				     >> 3U)) | ((3U 
						 == 
						 (3U 
						  & ((IData)(vlTOPp->ValExec_RecF16ToRecF32__DOT___T_32) 
						     >> 4U))) 
						& (0U 
						   != 
						   (0x3ffU 
						    & (IData)(vlTOPp->io_in))))) 
			  << 0xdU))) | ((0x1c00U & 
					 ((IData)(vlTOPp->ValExec_RecF16ToRecF32__DOT___T_32) 
					  << 0xaU)) 
					| (0x3ffU & 
					   ((0U == 
					     (0x1fU 
					      & ((IData)(vlTOPp->io_in) 
						 >> 0xaU)))
					     ? (0x3feU 
						& (((0x3ffU 
						     & (IData)(vlTOPp->io_in)) 
						    << (IData)(vlTOPp->ValExec_RecF16ToRecF32__DOT___T_23)) 
						   << 1U))
					     : (IData)(vlTOPp->io_in)))));
    vlTOPp->ValExec_RecF16ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN_io_in_isInf 
	= ((3U == (3U & (vlTOPp->ValExec_RecF16ToRecF32__DOT__recFNToRecFN_io_in 
			 >> 0xeU))) & (~ (vlTOPp->ValExec_RecF16ToRecF32__DOT__recFNToRecFN_io_in 
					  >> 0xdU)));
    vlTOPp->ValExec_RecF16ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN_io_invalidExc 
	= (((3U == (3U & (vlTOPp->ValExec_RecF16ToRecF32__DOT__recFNToRecFN_io_in 
			  >> 0xeU))) & (vlTOPp->ValExec_RecF16ToRecF32__DOT__recFNToRecFN_io_in 
					>> 0xdU)) & 
	   (~ (vlTOPp->ValExec_RecF16ToRecF32__DOT__recFNToRecFN_io_in 
	       >> 9U)));
    vlTOPp->io_actual_exceptionFlags = ((IData)(vlTOPp->ValExec_RecF16ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN_io_invalidExc) 
					<< 4U);
    vlTOPp->ValExec_RecF16ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__isNaNOut 
	= ((IData)(vlTOPp->ValExec_RecF16ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN_io_invalidExc) 
	   | ((3U == (3U & (vlTOPp->ValExec_RecF16ToRecF32__DOT__recFNToRecFN_io_in 
			    >> 0xeU))) & (vlTOPp->ValExec_RecF16ToRecF32__DOT__recFNToRecFN_io_in 
					  >> 0xdU)));
    vlTOPp->io_actual_out = (((QData)((IData)((1U & 
					       ((~ (IData)(vlTOPp->ValExec_RecF16ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__isNaNOut)) 
						& (vlTOPp->ValExec_RecF16ToRecF32__DOT__recFNToRecFN_io_in 
						   >> 0x10U))))) 
			      << 0x20U) | (QData)((IData)(
							  ((0xff800000U 
							    & (((((((IData)(0xe0U) 
								    + 
								    (0x3ffU 
								     & VL_EXTENDS_II(10,9, 
										(0x3fU 
										& (vlTOPp->ValExec_RecF16ToRecF32__DOT__recFNToRecFN_io_in 
										>> 0xaU))))) 
								   & (~ 
								      ((0U 
									== 
									(7U 
									 & (vlTOPp->ValExec_RecF16ToRecF32__DOT__recFNToRecFN_io_in 
									    >> 0xdU)))
								        ? 0x1c0U
								        : 0U))) 
								  & (~ 
								     ((IData)(vlTOPp->ValExec_RecF16ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN_io_in_isInf)
								       ? 0x40U
								       : 0U))) 
								 | ((IData)(vlTOPp->ValExec_RecF16ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN_io_in_isInf)
								     ? 0x180U
								     : 0U)) 
								| ((IData)(vlTOPp->ValExec_RecF16ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__isNaNOut)
								    ? 0x1c0U
								    : 0U)) 
							       << 0x17U)) 
							   | (((IData)(vlTOPp->ValExec_RecF16ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__isNaNOut) 
							       | (0U 
								  == 
								  (7U 
								   & (vlTOPp->ValExec_RecF16ToRecF32__DOT__recFNToRecFN_io_in 
								      >> 0xdU))))
							       ? 
							      ((IData)(vlTOPp->ValExec_RecF16ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__isNaNOut)
							        ? 0x400000U
							        : 0U)
							       : 
							      (0x7fe000U 
							       & (vlTOPp->ValExec_RecF16ToRecF32__DOT__recFNToRecFN_io_in 
								  << 0xdU)))))));
    vlTOPp->ValExec_RecF16ToRecF32__DOT___T_143 = (
						   (0xfU 
						    & (IData)(
							      (vlTOPp->io_actual_out 
							       >> 0x1dU))) 
						   == 
						   (0xfU 
						    & (IData)(
							      (vlTOPp->io_expected_recOut 
							       >> 0x1dU))));
    vlTOPp->io_pass = ((((0U == (7U & (IData)((vlTOPp->io_actual_out 
					       >> 0x1dU)))) 
			 | (7U == (7U & (IData)((vlTOPp->io_actual_out 
						 >> 0x1dU)))))
			 ? ((IData)(vlTOPp->ValExec_RecF16ToRecF32__DOT___T_143) 
			    & ((0x7fffffU & (IData)(vlTOPp->io_actual_out)) 
			       == (0x7fffffU & (IData)(vlTOPp->io_expected_recOut))))
			 : ((6U == (7U & (IData)((vlTOPp->io_actual_out 
						  >> 0x1dU))))
			     ? (IData)(vlTOPp->ValExec_RecF16ToRecF32__DOT___T_143)
			     : (vlTOPp->io_actual_out 
				== vlTOPp->io_expected_recOut))) 
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
    if (VL_UNLIKELY((io_detectTininess & 0xfeU))) {
	Verilated::overWidthError("io_detectTininess");}
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
    io_detectTininess = VL_RAND_RESET_I(1);
    io_expected_out = VL_RAND_RESET_I(32);
    io_expected_exceptionFlags = VL_RAND_RESET_I(5);
    io_expected_recOut = VL_RAND_RESET_Q(33);
    io_actual_out = VL_RAND_RESET_Q(33);
    io_actual_exceptionFlags = VL_RAND_RESET_I(5);
    io_check = VL_RAND_RESET_I(1);
    io_pass = VL_RAND_RESET_I(1);
    ValExec_RecF16ToRecF32__DOT__recFNToRecFN_io_in = VL_RAND_RESET_I(17);
    ValExec_RecF16ToRecF32__DOT___T_23 = VL_RAND_RESET_I(4);
    ValExec_RecF16ToRecF32__DOT___T_32 = VL_RAND_RESET_I(6);
    ValExec_RecF16ToRecF32__DOT___T_33 = VL_RAND_RESET_I(1);
    ValExec_RecF16ToRecF32__DOT___T_104 = VL_RAND_RESET_I(5);
    ValExec_RecF16ToRecF32__DOT___T_113 = VL_RAND_RESET_I(9);
    ValExec_RecF16ToRecF32__DOT___T_114 = VL_RAND_RESET_I(1);
    ValExec_RecF16ToRecF32__DOT___T_143 = VL_RAND_RESET_I(1);
    ValExec_RecF16ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN_io_invalidExc = VL_RAND_RESET_I(1);
    ValExec_RecF16ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN_io_in_isInf = VL_RAND_RESET_I(1);
    ValExec_RecF16ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__isNaNOut = VL_RAND_RESET_I(1);
}
