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
    // INITIAL at test-RecF64ToRecF16/ValExec_RecF64ToRecF16.v:565
    vlTOPp->io_check = 1U;
}

VL_INLINE_OPT void dut::_combo__TOP__2(dut__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    dut::_combo__TOP__2\n"); );
    dut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp2,127,0,4);
    VL_SIGW(__Vtemp3,127,0,4);
    VL_SIGW(__Vtemp5,95,0,3);
    VL_SIGW(__Vtemp7,95,0,3);
    VL_SIGW(__Vtemp8,95,0,3);
    VL_SIGW(__Vtemp11,95,0,3);
    VL_SIGW(__Vtemp12,95,0,3);
    VL_SIGW(__Vtemp15,95,0,3);
    VL_SIGW(__Vtemp16,95,0,3);
    VL_SIGW(__Vtemp19,95,0,3);
    VL_SIGW(__Vtemp20,95,0,3);
    VL_SIGW(__Vtemp23,95,0,3);
    VL_SIGW(__Vtemp24,95,0,3);
    VL_SIGW(__Vtemp27,95,0,3);
    VL_SIGW(__Vtemp28,95,0,3);
    // Body
    vlTOPp->ValExec_RecF64ToRecF16__DOT___T_172 = (
						   (0U 
						    == 
						    (0x1fU 
						     & ((IData)(vlTOPp->io_expected_out) 
							>> 0xaU))) 
						   & (0U 
						      == 
						      (0x3ffU 
						       & (IData)(vlTOPp->io_expected_out))));
    vlTOPp->ValExec_RecF64ToRecF16__DOT___T_162 = (
						   (0x200U 
						    & (IData)(vlTOPp->io_expected_out))
						    ? 0U
						    : 
						   ((0x100U 
						     & (IData)(vlTOPp->io_expected_out))
						     ? 1U
						     : 
						    ((0x80U 
						      & (IData)(vlTOPp->io_expected_out))
						      ? 2U
						      : 
						     ((0x40U 
						       & (IData)(vlTOPp->io_expected_out))
						       ? 3U
						       : 
						      ((0x20U 
							& (IData)(vlTOPp->io_expected_out))
						        ? 4U
						        : 
						       ((0x10U 
							 & (IData)(vlTOPp->io_expected_out))
							 ? 5U
							 : 
							((8U 
							  & (IData)(vlTOPp->io_expected_out))
							  ? 6U
							  : 
							 ((4U 
							   & (IData)(vlTOPp->io_expected_out))
							   ? 7U
							   : 
							  ((2U 
							    & (IData)(vlTOPp->io_expected_out))
							    ? 8U
							    : 9U)))))))));
    vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_62 
	= ((0U == (IData)(vlTOPp->io_roundingMode)) 
	   | (4U == (IData)(vlTOPp->io_roundingMode)));
    vlTOPp->ValExec_RecF64ToRecF16__DOT___T_117 = (
						   (0U 
						    == 
						    (0x7ffU 
						     & (IData)(
							       (vlTOPp->io_in 
								>> 0x34U)))) 
						   & (VL_ULL(0) 
						      == 
						      (VL_ULL(0xfffffffffffff) 
						       & vlTOPp->io_in)));
    vlTOPp->ValExec_RecF64ToRecF16__DOT___T_107 = (
						   (1U 
						    & (IData)(
							      (vlTOPp->io_in 
							       >> 0x33U)))
						    ? 0U
						    : 
						   ((1U 
						     & (IData)(
							       (vlTOPp->io_in 
								>> 0x32U)))
						     ? 1U
						     : 
						    ((1U 
						      & (IData)(
								(vlTOPp->io_in 
								 >> 0x31U)))
						      ? 2U
						      : 
						     ((1U 
						       & (IData)(
								 (vlTOPp->io_in 
								  >> 0x30U)))
						       ? 3U
						       : 
						      ((1U 
							& (IData)(
								  (vlTOPp->io_in 
								   >> 0x2fU)))
						        ? 4U
						        : 
						       ((1U 
							 & (IData)(
								   (vlTOPp->io_in 
								    >> 0x2eU)))
							 ? 5U
							 : 
							((1U 
							  & (IData)(
								    (vlTOPp->io_in 
								     >> 0x2dU)))
							  ? 6U
							  : 
							 ((1U 
							   & (IData)(
								     (vlTOPp->io_in 
								      >> 0x2cU)))
							   ? 7U
							   : 
							  ((1U 
							    & (IData)(
								      (vlTOPp->io_in 
								       >> 0x2bU)))
							    ? 8U
							    : 
							   ((1U 
							     & (IData)(
								       (vlTOPp->io_in 
									>> 0x2aU)))
							     ? 9U
							     : 
							    ((1U 
							      & (IData)(
									(vlTOPp->io_in 
									 >> 0x29U)))
							      ? 0xaU
							      : 
							     ((1U 
							       & (IData)(
									 (vlTOPp->io_in 
									  >> 0x28U)))
							       ? 0xbU
							       : 
							      ((1U 
								& (IData)(
									  (vlTOPp->io_in 
									   >> 0x27U)))
							        ? 0xcU
							        : 
							       ((1U 
								 & (IData)(
									   (vlTOPp->io_in 
									    >> 0x26U)))
								 ? 0xdU
								 : 
								((1U 
								  & (IData)(
									    (vlTOPp->io_in 
									     >> 0x25U)))
								  ? 0xeU
								  : 
								 ((1U 
								   & (IData)(
									     (vlTOPp->io_in 
									      >> 0x24U)))
								   ? 0xfU
								   : 
								  ((1U 
								    & (IData)(
									      (vlTOPp->io_in 
									       >> 0x23U)))
								    ? 0x10U
								    : 
								   ((1U 
								     & (IData)(
									       (vlTOPp->io_in 
										>> 0x22U)))
								     ? 0x11U
								     : 
								    ((1U 
								      & (IData)(
										(vlTOPp->io_in 
										>> 0x21U)))
								      ? 0x12U
								      : 
								     ((1U 
								       & (IData)(
										(vlTOPp->io_in 
										>> 0x20U)))
								       ? 0x13U
								       : 
								      ((1U 
									& (IData)(
										(vlTOPp->io_in 
										>> 0x1fU)))
								        ? 0x14U
								        : 
								       ((1U 
									 & (IData)(
										(vlTOPp->io_in 
										>> 0x1eU)))
									 ? 0x15U
									 : 
									((1U 
									  & (IData)(
										(vlTOPp->io_in 
										>> 0x1dU)))
									  ? 0x16U
									  : 
									 ((1U 
									   & (IData)(
										(vlTOPp->io_in 
										>> 0x1cU)))
									   ? 0x17U
									   : 
									  ((1U 
									    & (IData)(
										(vlTOPp->io_in 
										>> 0x1bU)))
									    ? 0x18U
									    : 
									   ((1U 
									     & (IData)(
										(vlTOPp->io_in 
										>> 0x1aU)))
									     ? 0x19U
									     : 
									    ((1U 
									      & (IData)(
										(vlTOPp->io_in 
										>> 0x19U)))
									      ? 0x1aU
									      : 
									     ((1U 
									       & (IData)(
										(vlTOPp->io_in 
										>> 0x18U)))
									       ? 0x1bU
									       : 
									      ((1U 
										& (IData)(
										(vlTOPp->io_in 
										>> 0x17U)))
									        ? 0x1cU
									        : 
									       ((1U 
										& (IData)(
										(vlTOPp->io_in 
										>> 0x16U)))
										 ? 0x1dU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_in 
										>> 0x15U)))
										 ? 0x1eU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_in 
										>> 0x14U)))
										 ? 0x1fU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_in 
										>> 0x13U)))
										 ? 0x20U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_in 
										>> 0x12U)))
										 ? 0x21U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_in 
										>> 0x11U)))
										 ? 0x22U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_in 
										>> 0x10U)))
										 ? 0x23U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_in 
										>> 0xfU)))
										 ? 0x24U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_in 
										>> 0xeU)))
										 ? 0x25U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_in 
										>> 0xdU)))
										 ? 0x26U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_in 
										>> 0xcU)))
										 ? 0x27U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_in 
										>> 0xbU)))
										 ? 0x28U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_in 
										>> 0xaU)))
										 ? 0x29U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_in 
										>> 9U)))
										 ? 0x2aU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_in 
										>> 8U)))
										 ? 0x2bU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_in 
										>> 7U)))
										 ? 0x2cU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_in 
										>> 6U)))
										 ? 0x2dU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_in 
										>> 5U)))
										 ? 0x2eU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_in 
										>> 4U)))
										 ? 0x2fU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_in 
										>> 3U)))
										 ? 0x30U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_in 
										>> 2U)))
										 ? 0x31U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_in 
										>> 1U)))
										 ? 0x32U
										 : 0x33U)))))))))))))))))))))))))))))))))))))))))))))))))));
    vlTOPp->ValExec_RecF64ToRecF16__DOT___T_171 = (0x3fU 
						   & (((0U 
							== 
							(0x1fU 
							 & ((IData)(vlTOPp->io_expected_out) 
							    >> 0xaU)))
						        ? 
						       (~ (IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT___T_162))
						        : 
						       (0x1fU 
							& ((IData)(vlTOPp->io_expected_out) 
							   >> 0xaU))) 
						      + 
						      (0x10U 
						       | ((0U 
							   == 
							   (0x1fU 
							    & ((IData)(vlTOPp->io_expected_out) 
							       >> 0xaU)))
							   ? 2U
							   : 1U))));
    vlTOPp->ValExec_RecF64ToRecF16__DOT___T_116 = (0xfffU 
						   & (((0U 
							== 
							(0x7ffU 
							 & (IData)(
								   (vlTOPp->io_in 
								    >> 0x34U))))
						        ? 
						       (~ (IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT___T_107))
						        : 
						       (0x7ffU 
							& (IData)(
								  (vlTOPp->io_in 
								   >> 0x34U)))) 
						      + 
						      (0x400U 
						       | ((0U 
							   == 
							   (0x7ffU 
							    & (IData)(
								      (vlTOPp->io_in 
								       >> 0x34U))))
							   ? 2U
							   : 1U))));
    vlTOPp->io_expected_recOut = (((0x10000U & ((IData)(vlTOPp->io_expected_out) 
						<< 1U)) 
				   | (0xe000U & ((((IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT___T_172)
						    ? 0U
						    : 
						   ((IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT___T_171) 
						    >> 3U)) 
						  | ((3U 
						      == 
						      (3U 
						       & ((IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT___T_171) 
							  >> 4U))) 
						     & (0U 
							!= 
							(0x3ffU 
							 & (IData)(vlTOPp->io_expected_out))))) 
						 << 0xdU))) 
				  | ((0x1c00U & ((IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT___T_171) 
						 << 0xaU)) 
				     | (0x3ffU & ((0U 
						   == 
						   (0x1fU 
						    & ((IData)(vlTOPp->io_expected_out) 
						       >> 0xaU)))
						   ? 
						  (0x3feU 
						   & (((0x3ffU 
							& (IData)(vlTOPp->io_expected_out)) 
						       << (IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT___T_162)) 
						      << 1U))
						   : (IData)(vlTOPp->io_expected_out)))));
    VL_EXTEND_WQ(115,52, __Vtemp2, (VL_ULL(0xfffffffffffff) 
				    & vlTOPp->io_in));
    VL_SHIFTL_WWI(115,115,6, __Vtemp3, __Vtemp2, (IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT___T_107));
    __Vtemp5[1U] = ((0xe0000000U & ((((IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT___T_117)
				       ? 0U : ((IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT___T_116) 
					       >> 9U)) 
				     | ((3U == (3U 
						& ((IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT___T_116) 
						   >> 0xaU))) 
					& (VL_ULL(0) 
					   != (VL_ULL(0xfffffffffffff) 
					       & vlTOPp->io_in)))) 
				    << 0x1dU)) | (IData)(
							 ((((QData)((IData)(
									    (0x1ffU 
									     & (IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT___T_116)))) 
							    << 0x34U) 
							   | (VL_ULL(0xfffffffffffff) 
							      & ((0U 
								  == 
								  (0x7ffU 
								   & (IData)(
									     (vlTOPp->io_in 
									      >> 0x34U))))
								  ? 
								 (VL_ULL(0xffffffffffffe) 
								  & (((QData)((IData)(
										__Vtemp3[1U])) 
								      << 0x21U) 
								     | ((QData)((IData)(
										__Vtemp3[0U])) 
									<< 1U)))
								  : vlTOPp->io_in))) 
							  >> 0x20U)));
    vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN_io_in[0U] 
	= (IData)((((QData)((IData)((0x1ffU & (IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT___T_116)))) 
		    << 0x34U) | (VL_ULL(0xfffffffffffff) 
				 & ((0U == (0x7ffU 
					    & (IData)(
						      (vlTOPp->io_in 
						       >> 0x34U))))
				     ? (VL_ULL(0xffffffffffffe) 
					& (((QData)((IData)(
							    __Vtemp3[1U])) 
					    << 0x21U) 
					   | ((QData)((IData)(
							      __Vtemp3[0U])) 
					      << 1U)))
				     : vlTOPp->io_in))));
    vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN_io_in[1U] 
	= __Vtemp5[1U];
    vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN_io_in[2U] 
	= (1U & (IData)((vlTOPp->io_in >> 0x3fU)));
    vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN_io_in_isInf 
	= ((3U == (3U & ((vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN_io_in[2U] 
			  << 2U) | (vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN_io_in[1U] 
				    >> 0x1eU)))) & 
	   (~ (vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN_io_in[1U] 
	       >> 0x1dU)));
    vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN_io_invalidExc 
	= (((3U == (3U & ((vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN_io_in[2U] 
			   << 2U) | (vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN_io_in[1U] 
				     >> 0x1eU)))) & 
	    (vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN_io_in[1U] 
	     >> 0x1dU)) & (~ (vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN_io_in[1U] 
			      >> 0x13U)));
    vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__roundMagUp 
	= (((2U == (IData)(vlTOPp->io_roundingMode)) 
	    & vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN_io_in[2U]) 
	   | ((3U == (IData)(vlTOPp->io_roundingMode)) 
	      & (~ vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN_io_in[2U])));
    vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN_io_in_sig 
	= (((QData)((IData)((0U != (7U & ((vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN_io_in[2U] 
					   << 3U) | 
					  (vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN_io_in[1U] 
					   >> 0x1dU)))))) 
	    << 0x34U) | (VL_ULL(0xfffffffffffff) & 
			 (((QData)((IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN_io_in[1U])) 
			   << 0x20U) | (QData)((IData)(
						       vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN_io_in[0U])))));
    __Vtemp7[0U] = 0U;
    __Vtemp7[1U] = 0U;
    __Vtemp7[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp8, __Vtemp7, (0x3fU 
						 & (~ 
						    ((0x3fffU 
						      & VL_EXTENDS_II(14,13, 
								      (0xfffU 
								       & ((vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN_io_in[2U] 
									   << 0xcU) 
									  | (vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN_io_in[1U] 
									     >> 0x14U))))) 
						     - (IData)(0x20U)))));
    __Vtemp11[0U] = 0U;
    __Vtemp11[1U] = 0U;
    __Vtemp11[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp12, __Vtemp11, (0x3fU 
						   & (~ 
						      ((0x3fffU 
							& VL_EXTENDS_II(14,13, 
									(0xfffU 
									 & ((vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN_io_in[2U] 
									     << 0xcU) 
									    | (vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN_io_in[1U] 
									       >> 0x14U))))) 
						       - (IData)(0x20U)))));
    vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_19 
	= ((0xfU & ((__Vtemp8[1U] << 0x15U) | (__Vtemp8[0U] 
					       >> 0xbU))) 
	   | (0xf0U & ((__Vtemp12[1U] << 0x1dU) | (0x1ffffff0U 
						   & (__Vtemp12[0U] 
						      >> 3U)))));
    vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__isNaNOut 
	= ((IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN_io_invalidExc) 
	   | ((3U == (3U & ((vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN_io_in[2U] 
			     << 2U) | (vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN_io_in[1U] 
				       >> 0x1eU)))) 
	      & (vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN_io_in[1U] 
		 >> 0x1dU)));
    vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
	= ((IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_62) 
	   | (IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__roundMagUp));
    vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__adjustedSig 
	= ((0x3ffeU & ((IData)((vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN_io_in_sig 
				>> 0x29U)) << 1U)) 
	   | (VL_ULL(0) != (VL_ULL(0x1ffffffffff) & vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN_io_in_sig)));
    vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_29 
	= ((0x33U & ((IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_19) 
		     >> 2U)) | (0xccU & ((IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_19) 
					 << 2U)));
    vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__commonCase 
	= (((~ (IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__isNaNOut)) 
	    & (~ (IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN_io_in_isInf))) 
	   & (0U != (7U & ((vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN_io_in[2U] 
			    << 3U) | (vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN_io_in[1U] 
				      >> 0x1dU)))));
    __Vtemp15[0U] = 0U;
    __Vtemp15[1U] = 0U;
    __Vtemp15[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp16, __Vtemp15, (0x3fU 
						   & (~ 
						      ((0x3fffU 
							& VL_EXTENDS_II(14,13, 
									(0xfffU 
									 & ((vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN_io_in[2U] 
									     << 0xcU) 
									    | (vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN_io_in[1U] 
									       >> 0x14U))))) 
						       - (IData)(0x20U)))));
    __Vtemp19[0U] = 0U;
    __Vtemp19[1U] = 0U;
    __Vtemp19[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp20, __Vtemp19, (0x3fU 
						   & (~ 
						      ((0x3fffU 
							& VL_EXTENDS_II(14,13, 
									(0xfffU 
									 & ((vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN_io_in[2U] 
									     << 0xcU) 
									    | (vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN_io_in[1U] 
									       >> 0x14U))))) 
						       - (IData)(0x20U)))));
    __Vtemp23[0U] = 0U;
    __Vtemp23[1U] = 0U;
    __Vtemp23[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp24, __Vtemp23, (0x3fU 
						   & (~ 
						      ((0x3fffU 
							& VL_EXTENDS_II(14,13, 
									(0xfffU 
									 & ((vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN_io_in[2U] 
									     << 0xcU) 
									    | (vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN_io_in[1U] 
									       >> 0x14U))))) 
						       - (IData)(0x20U)))));
    __Vtemp27[0U] = 0U;
    __Vtemp27[1U] = 0U;
    __Vtemp27[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp28, __Vtemp27, (0x3fU 
						   & (~ 
						      ((0x3fffU 
							& VL_EXTENDS_II(14,13, 
									(0xfffU 
									 & ((vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN_io_in[2U] 
									     << 0xcU) 
									    | (vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN_io_in[1U] 
									       >> 0x14U))))) 
						       - (IData)(0x20U)))));
    vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_52 
	= (3U | (((0x1540U & ((IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_29) 
			      << 5U)) | (0x2a80U & 
					 ((IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_29) 
					  << 7U))) 
		 | ((0x20U & (__Vtemp16[0U] >> 0xaU)) 
		    | ((0x10U & (__Vtemp20[0U] >> 0xcU)) 
		       | ((8U & (__Vtemp24[0U] >> 0xeU)) 
			  | (4U & (__Vtemp28[0U] >> 0x10U)))))));
    vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_59 
	= (0x1fffU & ((IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__adjustedSig) 
		      & ((IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_52) 
			 >> 1U)));
    vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_56 
	= ((~ (0x1fffU & ((IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_52) 
			  >> 1U))) & (IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_52));
    vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_57 
	= ((IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__adjustedSig) 
	   & (IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_56));
    vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_61 
	= ((0U != (IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_57)) 
	   | (0U != (IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_59)));
    vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_83 
	= (0x1fffU & ((((IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_62) 
			& (0U != (IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_57))) 
		       | ((IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__roundMagUp) 
			  & (IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_61)))
		       ? (((IData)(1U) + (0xfffU & 
					  (((IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__adjustedSig) 
					    | (IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_52)) 
					   >> 2U))) 
			  & (~ ((((0U == (IData)(vlTOPp->io_roundingMode)) 
				  & (0U != (IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_57))) 
				 & (0U == (IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_59)))
				 ? ((IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_52) 
				    >> 1U) : 0U))) : 
		      ((0xfffU & (((IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__adjustedSig) 
				   & (~ (IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_52))) 
				  >> 2U)) | (((6U == (IData)(vlTOPp->io_roundingMode)) 
					      & (IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_61))
					      ? ((IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_56) 
						 >> 1U)
					      : 0U))));
    vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_86 
	= (0x7fffU & (VL_EXTENDS_II(15,14, (0x3fffU 
					    & (VL_EXTENDS_II(14,13, 
							     (0xfffU 
							      & ((vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN_io_in[2U] 
								  << 0xcU) 
								 | (vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN_io_in[1U] 
								    >> 0x14U)))) 
					       - (IData)(0x7e0U)))) 
		      + VL_EXTENDS_II(15,14, (3U & 
					      ((IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_83) 
					       >> 0xbU)))));
    vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut 
	= (((IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__commonCase) 
	    & VL_GTS_III(1,15,15, 8U, (IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_86))) 
	   & ((IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__roundMagUp) 
	      | (6U == (IData)(vlTOPp->io_roundingMode))));
    vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__overflow 
	= ((IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__commonCase) 
	   & VL_LTES_III(1,11,11, 3U, (0x7ffU & ((IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_86) 
						 >> 4U))));
    vlTOPp->io_actual_exceptionFlags = ((((IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN_io_invalidExc) 
					  << 4U) | 
					 ((IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__overflow) 
					  << 2U)) | 
					((((IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__commonCase) 
					   << 1U) & 
					  ((VL_GTS_III(1,15,15, 8U, (IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_86)) 
					    << 1U) 
					   | (0x7ffffffeU 
					      & (((((IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_61) 
						    & VL_GTES_III(1,9,9, 0U, 
								  (0x1ffU 
								   & ((VL_EXTENDS_II(14,13, 
										(0xfffU 
										& ((vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN_io_in[2U] 
										<< 0xcU) 
										| (vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN_io_in[1U] 
										>> 0x14U)))) 
								       - (IData)(0x7e0U)) 
								      >> 5U)))) 
						   << 1U) 
						  & ((IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_52) 
						     >> 1U)) 
						 & ((~ 
						     (((((IData)(vlTOPp->io_detectTininess) 
							 & (~ 
							    ((IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_52) 
							     >> 3U))) 
							& ((IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_83) 
							   >> 0xbU)) 
						       & (0U 
							  != (IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_57))) 
						      & (((IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_62) 
							  & ((IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__adjustedSig) 
							     >> 1U)) 
							 | ((IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__roundMagUp) 
							    & (0U 
							       != 
							       (3U 
								& (IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__adjustedSig))))))) 
						    << 1U))))) 
					 | ((IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__overflow) 
					    | ((IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__commonCase) 
					       & (VL_GTS_III(1,15,15, 8U, (IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_86)) 
						  | (IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_61))))));
    vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut 
	= ((IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__overflow) 
	   & (~ (IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
	= ((IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN_io_in_isInf) 
	   | ((IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__overflow) 
	      & (IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->io_actual_out = ((0x10000U & (((~ (IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__isNaNOut)) 
					   & vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN_io_in[2U]) 
					  << 0x10U)) 
			     | ((0xfc00U & ((((((((
						   ((IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_86) 
						    & (~ 
						       (((0U 
							  == 
							  (7U 
							   & ((vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN_io_in[2U] 
							       << 3U) 
							      | (vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN_io_in[1U] 
								 >> 0x1dU)))) 
							 | VL_GTS_III(1,15,15, 8U, (IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_86)))
							 ? 0x38U
							 : 0U))) 
						   & (~ 
						      ((IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
						        ? 0x37U
						        : 0U))) 
						  & (~ 
						     ((IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
						       ? 0x10U
						       : 0U))) 
						 & (~ 
						    ((IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
						      ? 8U
						      : 0U))) 
						| ((IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
						    ? 8U
						    : 0U)) 
					       | ((IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
						   ? 0x2fU
						   : 0U)) 
					      | ((IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
						  ? 0x30U
						  : 0U)) 
					     | ((IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__isNaNOut)
						 ? 0x38U
						 : 0U)) 
					    << 0xaU)) 
				| (0x3ffU & (((((IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__isNaNOut) 
						| (0U 
						   == 
						   (7U 
						    & ((vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN_io_in[2U] 
							<< 3U) 
						       | (vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN_io_in[1U] 
							  >> 0x1dU))))) 
					       | VL_GTS_III(1,15,15, 8U, (IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_86)))
					       ? ((IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__isNaNOut)
						   ? 0x200U
						   : 0U)
					       : (IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_83)) 
					     | ((IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
						 ? 0x3ffU
						 : 0U)))));
    vlTOPp->ValExec_RecF64ToRecF16__DOT___T_201 = (
						   (0xfU 
						    & (vlTOPp->io_actual_out 
						       >> 0xdU)) 
						   == 
						   (0xfU 
						    & (vlTOPp->io_expected_recOut 
						       >> 0xdU)));
    vlTOPp->io_pass = ((((0U == (7U & (vlTOPp->io_actual_out 
				       >> 0xdU))) | 
			 (7U == (7U & (vlTOPp->io_actual_out 
				       >> 0xdU)))) ? 
			((IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT___T_201) 
			 & ((0x3ffU & vlTOPp->io_actual_out) 
			    == (0x3ffU & vlTOPp->io_expected_recOut)))
			 : ((6U == (7U & (vlTOPp->io_actual_out 
					  >> 0xdU)))
			     ? (IData)(vlTOPp->ValExec_RecF64ToRecF16__DOT___T_201)
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
    io_in = VL_RAND_RESET_Q(64);
    io_roundingMode = VL_RAND_RESET_I(3);
    io_detectTininess = VL_RAND_RESET_I(1);
    io_expected_out = VL_RAND_RESET_I(16);
    io_expected_exceptionFlags = VL_RAND_RESET_I(5);
    io_expected_recOut = VL_RAND_RESET_I(17);
    io_actual_out = VL_RAND_RESET_I(17);
    io_actual_exceptionFlags = VL_RAND_RESET_I(5);
    io_check = VL_RAND_RESET_I(1);
    io_pass = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65,ValExec_RecF64ToRecF16__DOT__recFNToRecFN_io_in);
    ValExec_RecF64ToRecF16__DOT___T_107 = VL_RAND_RESET_I(6);
    ValExec_RecF64ToRecF16__DOT___T_116 = VL_RAND_RESET_I(12);
    ValExec_RecF64ToRecF16__DOT___T_117 = VL_RAND_RESET_I(1);
    ValExec_RecF64ToRecF16__DOT___T_162 = VL_RAND_RESET_I(4);
    ValExec_RecF64ToRecF16__DOT___T_171 = VL_RAND_RESET_I(6);
    ValExec_RecF64ToRecF16__DOT___T_172 = VL_RAND_RESET_I(1);
    ValExec_RecF64ToRecF16__DOT___T_201 = VL_RAND_RESET_I(1);
    ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN_io_invalidExc = VL_RAND_RESET_I(1);
    ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN_io_in_isInf = VL_RAND_RESET_I(1);
    ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN_io_in_sig = VL_RAND_RESET_Q(54);
    ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__roundMagUp = VL_RAND_RESET_I(1);
    ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__adjustedSig = VL_RAND_RESET_I(14);
    ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_19 = VL_RAND_RESET_I(8);
    ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_29 = VL_RAND_RESET_I(8);
    ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_52 = VL_RAND_RESET_I(14);
    ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_56 = VL_RAND_RESET_I(14);
    ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_57 = VL_RAND_RESET_I(14);
    ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_59 = VL_RAND_RESET_I(14);
    ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_61 = VL_RAND_RESET_I(1);
    ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_62 = VL_RAND_RESET_I(1);
    ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_83 = VL_RAND_RESET_I(13);
    ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_86 = VL_RAND_RESET_I(15);
    ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__isNaNOut = VL_RAND_RESET_I(1);
    ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__commonCase = VL_RAND_RESET_I(1);
    ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__overflow = VL_RAND_RESET_I(1);
    ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__overflow_roundMagUp = VL_RAND_RESET_I(1);
    ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut = VL_RAND_RESET_I(1);
    ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut = VL_RAND_RESET_I(1);
    ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__notNaN_isInfOut = VL_RAND_RESET_I(1);
}
