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
    // INITIAL at test-RecF16ToRecF64/ValExec_RecF16ToRecF64.v:367
    vlTOPp->io_check = 1U;
}

VL_INLINE_OPT void dut::_combo__TOP__2(dut__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    dut::_combo__TOP__2\n"); );
    dut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp2,127,0,4);
    VL_SIGW(__Vtemp3,127,0,4);
    VL_SIGW(__Vtemp5,95,0,3);
    VL_SIGW(__Vtemp6,95,0,3);
    // Body
    vlTOPp->ValExec_RecF16ToRecF64__DOT___T_172 = (
						   (0U 
						    == 
						    (0x7ffU 
						     & (IData)(
							       (vlTOPp->io_expected_out 
								>> 0x34U)))) 
						   & (VL_ULL(0) 
						      == 
						      (VL_ULL(0xfffffffffffff) 
						       & vlTOPp->io_expected_out)));
    vlTOPp->ValExec_RecF16ToRecF64__DOT___T_162 = (
						   (1U 
						    & (IData)(
							      (vlTOPp->io_expected_out 
							       >> 0x33U)))
						    ? 0U
						    : 
						   ((1U 
						     & (IData)(
							       (vlTOPp->io_expected_out 
								>> 0x32U)))
						     ? 1U
						     : 
						    ((1U 
						      & (IData)(
								(vlTOPp->io_expected_out 
								 >> 0x31U)))
						      ? 2U
						      : 
						     ((1U 
						       & (IData)(
								 (vlTOPp->io_expected_out 
								  >> 0x30U)))
						       ? 3U
						       : 
						      ((1U 
							& (IData)(
								  (vlTOPp->io_expected_out 
								   >> 0x2fU)))
						        ? 4U
						        : 
						       ((1U 
							 & (IData)(
								   (vlTOPp->io_expected_out 
								    >> 0x2eU)))
							 ? 5U
							 : 
							((1U 
							  & (IData)(
								    (vlTOPp->io_expected_out 
								     >> 0x2dU)))
							  ? 6U
							  : 
							 ((1U 
							   & (IData)(
								     (vlTOPp->io_expected_out 
								      >> 0x2cU)))
							   ? 7U
							   : 
							  ((1U 
							    & (IData)(
								      (vlTOPp->io_expected_out 
								       >> 0x2bU)))
							    ? 8U
							    : 
							   ((1U 
							     & (IData)(
								       (vlTOPp->io_expected_out 
									>> 0x2aU)))
							     ? 9U
							     : 
							    ((1U 
							      & (IData)(
									(vlTOPp->io_expected_out 
									 >> 0x29U)))
							      ? 0xaU
							      : 
							     ((1U 
							       & (IData)(
									 (vlTOPp->io_expected_out 
									  >> 0x28U)))
							       ? 0xbU
							       : 
							      ((1U 
								& (IData)(
									  (vlTOPp->io_expected_out 
									   >> 0x27U)))
							        ? 0xcU
							        : 
							       ((1U 
								 & (IData)(
									   (vlTOPp->io_expected_out 
									    >> 0x26U)))
								 ? 0xdU
								 : 
								((1U 
								  & (IData)(
									    (vlTOPp->io_expected_out 
									     >> 0x25U)))
								  ? 0xeU
								  : 
								 ((1U 
								   & (IData)(
									     (vlTOPp->io_expected_out 
									      >> 0x24U)))
								   ? 0xfU
								   : 
								  ((1U 
								    & (IData)(
									      (vlTOPp->io_expected_out 
									       >> 0x23U)))
								    ? 0x10U
								    : 
								   ((1U 
								     & (IData)(
									       (vlTOPp->io_expected_out 
										>> 0x22U)))
								     ? 0x11U
								     : 
								    ((1U 
								      & (IData)(
										(vlTOPp->io_expected_out 
										>> 0x21U)))
								      ? 0x12U
								      : 
								     ((1U 
								       & (IData)(
										(vlTOPp->io_expected_out 
										>> 0x20U)))
								       ? 0x13U
								       : 
								      ((1U 
									& (IData)(
										(vlTOPp->io_expected_out 
										>> 0x1fU)))
								        ? 0x14U
								        : 
								       ((1U 
									 & (IData)(
										(vlTOPp->io_expected_out 
										>> 0x1eU)))
									 ? 0x15U
									 : 
									((1U 
									  & (IData)(
										(vlTOPp->io_expected_out 
										>> 0x1dU)))
									  ? 0x16U
									  : 
									 ((1U 
									   & (IData)(
										(vlTOPp->io_expected_out 
										>> 0x1cU)))
									   ? 0x17U
									   : 
									  ((1U 
									    & (IData)(
										(vlTOPp->io_expected_out 
										>> 0x1bU)))
									    ? 0x18U
									    : 
									   ((1U 
									     & (IData)(
										(vlTOPp->io_expected_out 
										>> 0x1aU)))
									     ? 0x19U
									     : 
									    ((1U 
									      & (IData)(
										(vlTOPp->io_expected_out 
										>> 0x19U)))
									      ? 0x1aU
									      : 
									     ((1U 
									       & (IData)(
										(vlTOPp->io_expected_out 
										>> 0x18U)))
									       ? 0x1bU
									       : 
									      ((1U 
										& (IData)(
										(vlTOPp->io_expected_out 
										>> 0x17U)))
									        ? 0x1cU
									        : 
									       ((1U 
										& (IData)(
										(vlTOPp->io_expected_out 
										>> 0x16U)))
										 ? 0x1dU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_expected_out 
										>> 0x15U)))
										 ? 0x1eU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_expected_out 
										>> 0x14U)))
										 ? 0x1fU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_expected_out 
										>> 0x13U)))
										 ? 0x20U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_expected_out 
										>> 0x12U)))
										 ? 0x21U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_expected_out 
										>> 0x11U)))
										 ? 0x22U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_expected_out 
										>> 0x10U)))
										 ? 0x23U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_expected_out 
										>> 0xfU)))
										 ? 0x24U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_expected_out 
										>> 0xeU)))
										 ? 0x25U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_expected_out 
										>> 0xdU)))
										 ? 0x26U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_expected_out 
										>> 0xcU)))
										 ? 0x27U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_expected_out 
										>> 0xbU)))
										 ? 0x28U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_expected_out 
										>> 0xaU)))
										 ? 0x29U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_expected_out 
										>> 9U)))
										 ? 0x2aU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_expected_out 
										>> 8U)))
										 ? 0x2bU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_expected_out 
										>> 7U)))
										 ? 0x2cU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_expected_out 
										>> 6U)))
										 ? 0x2dU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_expected_out 
										>> 5U)))
										 ? 0x2eU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_expected_out 
										>> 4U)))
										 ? 0x2fU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_expected_out 
										>> 3U)))
										 ? 0x30U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_expected_out 
										>> 2U)))
										 ? 0x31U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_expected_out 
										>> 1U)))
										 ? 0x32U
										 : 0x33U)))))))))))))))))))))))))))))))))))))))))))))))))));
    vlTOPp->ValExec_RecF16ToRecF64__DOT___T_33 = ((0U 
						   == 
						   (0x1fU 
						    & ((IData)(vlTOPp->io_in) 
						       >> 0xaU))) 
						  & (0U 
						     == 
						     (0x3ffU 
						      & (IData)(vlTOPp->io_in))));
    vlTOPp->ValExec_RecF16ToRecF64__DOT___T_23 = ((0x200U 
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
    vlTOPp->ValExec_RecF16ToRecF64__DOT___T_171 = (0xfffU 
						   & (((0U 
							== 
							(0x7ffU 
							 & (IData)(
								   (vlTOPp->io_expected_out 
								    >> 0x34U))))
						        ? 
						       (~ (IData)(vlTOPp->ValExec_RecF16ToRecF64__DOT___T_162))
						        : 
						       (0x7ffU 
							& (IData)(
								  (vlTOPp->io_expected_out 
								   >> 0x34U)))) 
						      + 
						      (0x400U 
						       | ((0U 
							   == 
							   (0x7ffU 
							    & (IData)(
								      (vlTOPp->io_expected_out 
								       >> 0x34U))))
							   ? 2U
							   : 1U))));
    vlTOPp->ValExec_RecF16ToRecF64__DOT___T_32 = (0x3fU 
						  & (((0U 
						       == 
						       (0x1fU 
							& ((IData)(vlTOPp->io_in) 
							   >> 0xaU)))
						       ? 
						      (~ (IData)(vlTOPp->ValExec_RecF16ToRecF64__DOT___T_23))
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
    VL_EXTEND_WQ(115,52, __Vtemp2, (VL_ULL(0xfffffffffffff) 
				    & vlTOPp->io_expected_out));
    VL_SHIFTL_WWI(115,115,6, __Vtemp3, __Vtemp2, (IData)(vlTOPp->ValExec_RecF16ToRecF64__DOT___T_162));
    __Vtemp5[1U] = ((0xe0000000U & ((((IData)(vlTOPp->ValExec_RecF16ToRecF64__DOT___T_172)
				       ? 0U : ((IData)(vlTOPp->ValExec_RecF16ToRecF64__DOT___T_171) 
					       >> 9U)) 
				     | ((3U == (3U 
						& ((IData)(vlTOPp->ValExec_RecF16ToRecF64__DOT___T_171) 
						   >> 0xaU))) 
					& (VL_ULL(0) 
					   != (VL_ULL(0xfffffffffffff) 
					       & vlTOPp->io_expected_out)))) 
				    << 0x1dU)) | (IData)(
							 ((((QData)((IData)(
									    (0x1ffU 
									     & (IData)(vlTOPp->ValExec_RecF16ToRecF64__DOT___T_171)))) 
							    << 0x34U) 
							   | (VL_ULL(0xfffffffffffff) 
							      & ((0U 
								  == 
								  (0x7ffU 
								   & (IData)(
									     (vlTOPp->io_expected_out 
									      >> 0x34U))))
								  ? 
								 (VL_ULL(0xffffffffffffe) 
								  & (((QData)((IData)(
										__Vtemp3[1U])) 
								      << 0x21U) 
								     | ((QData)((IData)(
										__Vtemp3[0U])) 
									<< 1U)))
								  : vlTOPp->io_expected_out))) 
							  >> 0x20U)));
    vlTOPp->io_expected_recOut[0U] = (IData)((((QData)((IData)(
							       (0x1ffU 
								& (IData)(vlTOPp->ValExec_RecF16ToRecF64__DOT___T_171)))) 
					       << 0x34U) 
					      | (VL_ULL(0xfffffffffffff) 
						 & ((0U 
						     == 
						     (0x7ffU 
						      & (IData)(
								(vlTOPp->io_expected_out 
								 >> 0x34U))))
						     ? 
						    (VL_ULL(0xffffffffffffe) 
						     & (((QData)((IData)(
									 __Vtemp3[1U])) 
							 << 0x21U) 
							| ((QData)((IData)(
									   __Vtemp3[0U])) 
							   << 1U)))
						     : vlTOPp->io_expected_out))));
    vlTOPp->io_expected_recOut[1U] = __Vtemp5[1U];
    vlTOPp->io_expected_recOut[2U] = (1U & (IData)(
						   (vlTOPp->io_expected_out 
						    >> 0x3fU)));
    vlTOPp->ValExec_RecF16ToRecF64__DOT__recFNToRecFN_io_in 
	= (((0x10000U & ((IData)(vlTOPp->io_in) << 1U)) 
	    | (0xe000U & ((((IData)(vlTOPp->ValExec_RecF16ToRecF64__DOT___T_33)
			     ? 0U : ((IData)(vlTOPp->ValExec_RecF16ToRecF64__DOT___T_32) 
				     >> 3U)) | ((3U 
						 == 
						 (3U 
						  & ((IData)(vlTOPp->ValExec_RecF16ToRecF64__DOT___T_32) 
						     >> 4U))) 
						& (0U 
						   != 
						   (0x3ffU 
						    & (IData)(vlTOPp->io_in))))) 
			  << 0xdU))) | ((0x1c00U & 
					 ((IData)(vlTOPp->ValExec_RecF16ToRecF64__DOT___T_32) 
					  << 0xaU)) 
					| (0x3ffU & 
					   ((0U == 
					     (0x1fU 
					      & ((IData)(vlTOPp->io_in) 
						 >> 0xaU)))
					     ? (0x3feU 
						& (((0x3ffU 
						     & (IData)(vlTOPp->io_in)) 
						    << (IData)(vlTOPp->ValExec_RecF16ToRecF64__DOT___T_23)) 
						   << 1U))
					     : (IData)(vlTOPp->io_in)))));
    vlTOPp->ValExec_RecF16ToRecF64__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN_io_in_isInf 
	= ((3U == (3U & (vlTOPp->ValExec_RecF16ToRecF64__DOT__recFNToRecFN_io_in 
			 >> 0xeU))) & (~ (vlTOPp->ValExec_RecF16ToRecF64__DOT__recFNToRecFN_io_in 
					  >> 0xdU)));
    vlTOPp->ValExec_RecF16ToRecF64__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN_io_invalidExc 
	= (((3U == (3U & (vlTOPp->ValExec_RecF16ToRecF64__DOT__recFNToRecFN_io_in 
			  >> 0xeU))) & (vlTOPp->ValExec_RecF16ToRecF64__DOT__recFNToRecFN_io_in 
					>> 0xdU)) & 
	   (~ (vlTOPp->ValExec_RecF16ToRecF64__DOT__recFNToRecFN_io_in 
	       >> 9U)));
    vlTOPp->io_actual_exceptionFlags = ((IData)(vlTOPp->ValExec_RecF16ToRecF64__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN_io_invalidExc) 
					<< 4U);
    vlTOPp->ValExec_RecF16ToRecF64__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__isNaNOut 
	= ((IData)(vlTOPp->ValExec_RecF16ToRecF64__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN_io_invalidExc) 
	   | ((3U == (3U & (vlTOPp->ValExec_RecF16ToRecF64__DOT__recFNToRecFN_io_in 
			    >> 0xeU))) & (vlTOPp->ValExec_RecF16ToRecF64__DOT__recFNToRecFN_io_in 
					  >> 0xdU)));
    __Vtemp6[0U] = (IData)((((QData)((IData)((0xfffU 
					      & ((((((IData)(0x7e0U) 
						     + 
						     (0x1fffU 
						      & VL_EXTENDS_II(13,12, 
								      (0x3fU 
								       & (vlTOPp->ValExec_RecF16ToRecF64__DOT__recFNToRecFN_io_in 
									  >> 0xaU))))) 
						    & (~ 
						       ((0U 
							 == 
							 (7U 
							  & (vlTOPp->ValExec_RecF16ToRecF64__DOT__recFNToRecFN_io_in 
							     >> 0xdU)))
							 ? 0xe00U
							 : 0U))) 
						   & (~ 
						      ((IData)(vlTOPp->ValExec_RecF16ToRecF64__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN_io_in_isInf)
						        ? 0x200U
						        : 0U))) 
						  | ((IData)(vlTOPp->ValExec_RecF16ToRecF64__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN_io_in_isInf)
						      ? 0xc00U
						      : 0U)) 
						 | ((IData)(vlTOPp->ValExec_RecF16ToRecF64__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__isNaNOut)
						     ? 0xe00U
						     : 0U))))) 
			     << 0x34U) | (((IData)(vlTOPp->ValExec_RecF16ToRecF64__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__isNaNOut) 
					   | (0U == 
					      (7U & 
					       (vlTOPp->ValExec_RecF16ToRecF64__DOT__recFNToRecFN_io_in 
						>> 0xdU))))
					   ? ((IData)(vlTOPp->ValExec_RecF16ToRecF64__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__isNaNOut)
					       ? VL_ULL(0x8000000000000)
					       : VL_ULL(0))
					   : ((QData)((IData)(
							      (0x3ffU 
							       & vlTOPp->ValExec_RecF16ToRecF64__DOT__recFNToRecFN_io_in))) 
					      << 0x2aU))));
    __Vtemp6[1U] = (IData)(((((QData)((IData)((0xfffU 
					       & ((((((IData)(0x7e0U) 
						      + 
						      (0x1fffU 
						       & VL_EXTENDS_II(13,12, 
								       (0x3fU 
									& (vlTOPp->ValExec_RecF16ToRecF64__DOT__recFNToRecFN_io_in 
									   >> 0xaU))))) 
						     & (~ 
							((0U 
							  == 
							  (7U 
							   & (vlTOPp->ValExec_RecF16ToRecF64__DOT__recFNToRecFN_io_in 
							      >> 0xdU)))
							  ? 0xe00U
							  : 0U))) 
						    & (~ 
						       ((IData)(vlTOPp->ValExec_RecF16ToRecF64__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN_io_in_isInf)
							 ? 0x200U
							 : 0U))) 
						   | ((IData)(vlTOPp->ValExec_RecF16ToRecF64__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN_io_in_isInf)
						       ? 0xc00U
						       : 0U)) 
						  | ((IData)(vlTOPp->ValExec_RecF16ToRecF64__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__isNaNOut)
						      ? 0xe00U
						      : 0U))))) 
			      << 0x34U) | (((IData)(vlTOPp->ValExec_RecF16ToRecF64__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__isNaNOut) 
					    | (0U == 
					       (7U 
						& (vlTOPp->ValExec_RecF16ToRecF64__DOT__recFNToRecFN_io_in 
						   >> 0xdU))))
					    ? ((IData)(vlTOPp->ValExec_RecF16ToRecF64__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__isNaNOut)
					        ? VL_ULL(0x8000000000000)
					        : VL_ULL(0))
					    : ((QData)((IData)(
							       (0x3ffU 
								& vlTOPp->ValExec_RecF16ToRecF64__DOT__recFNToRecFN_io_in))) 
					       << 0x2aU))) 
			    >> 0x20U));
    vlTOPp->io_actual_out[0U] = __Vtemp6[0U];
    vlTOPp->io_actual_out[1U] = __Vtemp6[1U];
    vlTOPp->io_actual_out[2U] = (1U & ((~ (IData)(vlTOPp->ValExec_RecF16ToRecF64__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__isNaNOut)) 
				       & (vlTOPp->ValExec_RecF16ToRecF64__DOT__recFNToRecFN_io_in 
					  >> 0x10U)));
    vlTOPp->ValExec_RecF16ToRecF64__DOT___T_201 = (
						   (0xfU 
						    & ((vlTOPp->io_actual_out[2U] 
							<< 3U) 
						       | (vlTOPp->io_actual_out[1U] 
							  >> 0x1dU))) 
						   == 
						   (0xfU 
						    & ((vlTOPp->io_expected_recOut[2U] 
							<< 3U) 
						       | (vlTOPp->io_expected_recOut[1U] 
							  >> 0x1dU))));
    vlTOPp->io_pass = ((((0U == (7U & ((vlTOPp->io_actual_out[2U] 
					<< 3U) | (vlTOPp->io_actual_out[1U] 
						  >> 0x1dU)))) 
			 | (7U == (7U & ((vlTOPp->io_actual_out[2U] 
					  << 3U) | 
					 (vlTOPp->io_actual_out[1U] 
					  >> 0x1dU)))))
			 ? ((IData)(vlTOPp->ValExec_RecF16ToRecF64__DOT___T_201) 
			    & ((VL_ULL(0xfffffffffffff) 
				& (((QData)((IData)(
						    vlTOPp->io_actual_out[1U])) 
				    << 0x20U) | (QData)((IData)(
								vlTOPp->io_actual_out[0U])))) 
			       == (VL_ULL(0xfffffffffffff) 
				   & (((QData)((IData)(
						       vlTOPp->io_expected_recOut[1U])) 
				       << 0x20U) | (QData)((IData)(
								   vlTOPp->io_expected_recOut[0U]))))))
			 : ((6U == (7U & ((vlTOPp->io_actual_out[2U] 
					   << 3U) | 
					  (vlTOPp->io_actual_out[1U] 
					   >> 0x1dU))))
			     ? (IData)(vlTOPp->ValExec_RecF16ToRecF64__DOT___T_201)
			     : (0U == (((vlTOPp->io_actual_out[0U] 
					 ^ vlTOPp->io_expected_recOut[0U]) 
					| (vlTOPp->io_actual_out[1U] 
					   ^ vlTOPp->io_expected_recOut[1U])) 
				       | (vlTOPp->io_actual_out[2U] 
					  ^ vlTOPp->io_expected_recOut[2U]))))) 
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
    io_expected_out = VL_RAND_RESET_Q(64);
    io_expected_exceptionFlags = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(65,io_expected_recOut);
    VL_RAND_RESET_W(65,io_actual_out);
    io_actual_exceptionFlags = VL_RAND_RESET_I(5);
    io_check = VL_RAND_RESET_I(1);
    io_pass = VL_RAND_RESET_I(1);
    ValExec_RecF16ToRecF64__DOT__recFNToRecFN_io_in = VL_RAND_RESET_I(17);
    ValExec_RecF16ToRecF64__DOT___T_23 = VL_RAND_RESET_I(4);
    ValExec_RecF16ToRecF64__DOT___T_32 = VL_RAND_RESET_I(6);
    ValExec_RecF16ToRecF64__DOT___T_33 = VL_RAND_RESET_I(1);
    ValExec_RecF16ToRecF64__DOT___T_162 = VL_RAND_RESET_I(6);
    ValExec_RecF16ToRecF64__DOT___T_171 = VL_RAND_RESET_I(12);
    ValExec_RecF16ToRecF64__DOT___T_172 = VL_RAND_RESET_I(1);
    ValExec_RecF16ToRecF64__DOT___T_201 = VL_RAND_RESET_I(1);
    ValExec_RecF16ToRecF64__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN_io_invalidExc = VL_RAND_RESET_I(1);
    ValExec_RecF16ToRecF64__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN_io_in_isInf = VL_RAND_RESET_I(1);
    ValExec_RecF16ToRecF64__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__isNaNOut = VL_RAND_RESET_I(1);
}
