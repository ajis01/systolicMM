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
    // INITIAL at test-RecF64ToRecF32/ValExec_RecF64ToRecF32.v:623
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
    VL_SIGW(__Vtemp31,95,0,3);
    VL_SIGW(__Vtemp32,95,0,3);
    VL_SIGW(__Vtemp35,95,0,3);
    VL_SIGW(__Vtemp36,95,0,3);
    VL_SIGW(__Vtemp39,95,0,3);
    VL_SIGW(__Vtemp40,95,0,3);
    VL_SIGW(__Vtemp43,95,0,3);
    VL_SIGW(__Vtemp44,95,0,3);
    VL_SIGW(__Vtemp47,95,0,3);
    VL_SIGW(__Vtemp48,95,0,3);
    // Body
    vlTOPp->ValExec_RecF64ToRecF32__DOT___T_198 = (
						   (0U 
						    == 
						    (0xffU 
						     & (vlTOPp->io_expected_out 
							>> 0x17U))) 
						   & (0U 
						      == 
						      (0x7fffffU 
						       & vlTOPp->io_expected_out)));
    vlTOPp->ValExec_RecF64ToRecF32__DOT___T_188 = (
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
    vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_101 
	= ((0U == (IData)(vlTOPp->io_roundingMode)) 
	   | (4U == (IData)(vlTOPp->io_roundingMode)));
    vlTOPp->ValExec_RecF64ToRecF32__DOT___T_117 = (
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
    vlTOPp->ValExec_RecF64ToRecF32__DOT___T_107 = (
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
    vlTOPp->ValExec_RecF64ToRecF32__DOT___T_197 = (0x1ffU 
						   & (((0U 
							== 
							(0xffU 
							 & (vlTOPp->io_expected_out 
							    >> 0x17U)))
						        ? 
						       (~ (IData)(vlTOPp->ValExec_RecF64ToRecF32__DOT___T_188))
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
    vlTOPp->ValExec_RecF64ToRecF32__DOT___T_116 = (0xfffU 
						   & (((0U 
							== 
							(0x7ffU 
							 & (IData)(
								   (vlTOPp->io_in 
								    >> 0x34U))))
						        ? 
						       (~ (IData)(vlTOPp->ValExec_RecF64ToRecF32__DOT___T_107))
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
    vlTOPp->io_expected_recOut = (((QData)((IData)(
						   ((8U 
						     & (vlTOPp->io_expected_out 
							>> 0x1cU)) 
						    | (7U 
						       & (((IData)(vlTOPp->ValExec_RecF64ToRecF32__DOT___T_198)
							    ? 0U
							    : 
							   ((IData)(vlTOPp->ValExec_RecF64ToRecF32__DOT___T_197) 
							    >> 6U)) 
							  | ((3U 
							      == 
							      (3U 
							       & ((IData)(vlTOPp->ValExec_RecF64ToRecF32__DOT___T_197) 
								  >> 7U))) 
							     & (0U 
								!= 
								(0x7fffffU 
								 & vlTOPp->io_expected_out)))))))) 
				   << 0x1dU) | (QData)((IData)(
							       ((0x1f800000U 
								 & ((IData)(vlTOPp->ValExec_RecF64ToRecF32__DOT___T_197) 
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
										<< (IData)(vlTOPp->ValExec_RecF64ToRecF32__DOT___T_188)))) 
									  << 1U))
								       : vlTOPp->io_expected_out))))));
    VL_EXTEND_WQ(115,52, __Vtemp2, (VL_ULL(0xfffffffffffff) 
				    & vlTOPp->io_in));
    VL_SHIFTL_WWI(115,115,6, __Vtemp3, __Vtemp2, (IData)(vlTOPp->ValExec_RecF64ToRecF32__DOT___T_107));
    __Vtemp5[1U] = ((0xe0000000U & ((((IData)(vlTOPp->ValExec_RecF64ToRecF32__DOT___T_117)
				       ? 0U : ((IData)(vlTOPp->ValExec_RecF64ToRecF32__DOT___T_116) 
					       >> 9U)) 
				     | ((3U == (3U 
						& ((IData)(vlTOPp->ValExec_RecF64ToRecF32__DOT___T_116) 
						   >> 0xaU))) 
					& (VL_ULL(0) 
					   != (VL_ULL(0xfffffffffffff) 
					       & vlTOPp->io_in)))) 
				    << 0x1dU)) | (IData)(
							 ((((QData)((IData)(
									    (0x1ffU 
									     & (IData)(vlTOPp->ValExec_RecF64ToRecF32__DOT___T_116)))) 
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
    vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN_io_in[0U] 
	= (IData)((((QData)((IData)((0x1ffU & (IData)(vlTOPp->ValExec_RecF64ToRecF32__DOT___T_116)))) 
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
    vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN_io_in[1U] 
	= __Vtemp5[1U];
    vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN_io_in[2U] 
	= (1U & (IData)((vlTOPp->io_in >> 0x3fU)));
    vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN_io_in_isInf 
	= ((3U == (3U & ((vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN_io_in[2U] 
			  << 2U) | (vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN_io_in[1U] 
				    >> 0x1eU)))) & 
	   (~ (vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN_io_in[1U] 
	       >> 0x1dU)));
    vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN_io_invalidExc 
	= (((3U == (3U & ((vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN_io_in[2U] 
			   << 2U) | (vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN_io_in[1U] 
				     >> 0x1eU)))) & 
	    (vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN_io_in[1U] 
	     >> 0x1dU)) & (~ (vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN_io_in[1U] 
			      >> 0x13U)));
    vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__roundMagUp 
	= (((2U == (IData)(vlTOPp->io_roundingMode)) 
	    & vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN_io_in[2U]) 
	   | ((3U == (IData)(vlTOPp->io_roundingMode)) 
	      & (~ vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN_io_in[2U])));
    vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN_io_in_sig 
	= (((QData)((IData)((0U != (7U & ((vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN_io_in[2U] 
					   << 3U) | 
					  (vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN_io_in[1U] 
					   >> 0x1dU)))))) 
	    << 0x34U) | (VL_ULL(0xfffffffffffff) & 
			 (((QData)((IData)(vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN_io_in[1U])) 
			   << 0x20U) | (QData)((IData)(
						       vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN_io_in[0U])))));
    __Vtemp7[0U] = 0U;
    __Vtemp7[1U] = 0U;
    __Vtemp7[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp8, __Vtemp7, (0x3fU 
						 & (~ 
						    (0x3fffU 
						     & VL_EXTENDS_II(14,13, 
								     (0xfffU 
								      & ((vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN_io_in[2U] 
									  << 0xcU) 
									 | (vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN_io_in[1U] 
									    >> 0x14U))))))));
    __Vtemp11[0U] = 0U;
    __Vtemp11[1U] = 0U;
    __Vtemp11[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp12, __Vtemp11, (0x3fU 
						   & (~ 
						      (0x3fffU 
						       & VL_EXTENDS_II(14,13, 
								       (0xfffU 
									& ((vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN_io_in[2U] 
									    << 0xcU) 
									   | (vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN_io_in[1U] 
									      >> 0x14U))))))));
    vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_25 
	= ((0xffU & ((0x4000U & (__Vtemp8[2U] << 0xeU)) 
		     | (__Vtemp8[1U] >> 0x12U))) | 
	   (0xff00U & ((0x40000000U & (__Vtemp12[2U] 
				       << 0x1eU)) | 
		       (0x3fffff00U & (__Vtemp12[1U] 
				       >> 2U)))));
    vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__isNaNOut 
	= ((IData)(vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN_io_invalidExc) 
	   | ((3U == (3U & ((vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN_io_in[2U] 
			     << 2U) | (vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN_io_in[1U] 
				       >> 0x1eU)))) 
	      & (vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN_io_in[1U] 
		 >> 0x1dU)));
    vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
	= ((IData)(vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_101) 
	   | (IData)(vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__roundMagUp));
    vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__adjustedSig 
	= ((0x7fffffeU & ((IData)((vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN_io_in_sig 
				   >> 0x1cU)) << 1U)) 
	   | (0U != (0xfffffffU & (IData)(vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN_io_in_sig))));
    vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_35 
	= ((0xf0fU & ((IData)(vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_25) 
		      >> 4U)) | (0xf0f0U & ((IData)(vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_25) 
					    << 4U)));
    vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__commonCase 
	= (((~ (IData)(vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__isNaNOut)) 
	    & (~ (IData)(vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN_io_in_isInf))) 
	   & (0U != (7U & ((vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN_io_in[2U] 
			    << 3U) | (vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN_io_in[1U] 
				      >> 0x1dU)))));
    vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_45 
	= ((0x3333U & ((IData)(vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_35) 
		       >> 2U)) | (0xccccU & ((IData)(vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_35) 
					     << 2U)));
    __Vtemp15[0U] = 0U;
    __Vtemp15[1U] = 0U;
    __Vtemp15[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp16, __Vtemp15, (0x3fU 
						   & (~ 
						      (0x3fffU 
						       & VL_EXTENDS_II(14,13, 
								       (0xfffU 
									& ((vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN_io_in[2U] 
									    << 0xcU) 
									   | (vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN_io_in[1U] 
									      >> 0x14U))))))));
    __Vtemp19[0U] = 0U;
    __Vtemp19[1U] = 0U;
    __Vtemp19[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp20, __Vtemp19, (0x3fU 
						   & (~ 
						      (0x3fffU 
						       & VL_EXTENDS_II(14,13, 
								       (0xfffU 
									& ((vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN_io_in[2U] 
									    << 0xcU) 
									   | (vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN_io_in[1U] 
									      >> 0x14U))))))));
    __Vtemp23[0U] = 0U;
    __Vtemp23[1U] = 0U;
    __Vtemp23[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp24, __Vtemp23, (0x3fU 
						   & (~ 
						      (0x3fffU 
						       & VL_EXTENDS_II(14,13, 
								       (0xfffU 
									& ((vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN_io_in[2U] 
									    << 0xcU) 
									   | (vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN_io_in[1U] 
									      >> 0x14U))))))));
    __Vtemp27[0U] = 0U;
    __Vtemp27[1U] = 0U;
    __Vtemp27[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp28, __Vtemp27, (0x3fU 
						   & (~ 
						      (0x3fffU 
						       & VL_EXTENDS_II(14,13, 
								       (0xfffU 
									& ((vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN_io_in[2U] 
									    << 0xcU) 
									   | (vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN_io_in[1U] 
									      >> 0x14U))))))));
    __Vtemp31[0U] = 0U;
    __Vtemp31[1U] = 0U;
    __Vtemp31[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp32, __Vtemp31, (0x3fU 
						   & (~ 
						      (0x3fffU 
						       & VL_EXTENDS_II(14,13, 
								       (0xfffU 
									& ((vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN_io_in[2U] 
									    << 0xcU) 
									   | (vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN_io_in[1U] 
									      >> 0x14U))))))));
    __Vtemp35[0U] = 0U;
    __Vtemp35[1U] = 0U;
    __Vtemp35[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp36, __Vtemp35, (0x3fU 
						   & (~ 
						      (0x3fffU 
						       & VL_EXTENDS_II(14,13, 
								       (0xfffU 
									& ((vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN_io_in[2U] 
									    << 0xcU) 
									   | (vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN_io_in[1U] 
									      >> 0x14U))))))));
    __Vtemp39[0U] = 0U;
    __Vtemp39[1U] = 0U;
    __Vtemp39[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp40, __Vtemp39, (0x3fU 
						   & (~ 
						      (0x3fffU 
						       & VL_EXTENDS_II(14,13, 
								       (0xfffU 
									& ((vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN_io_in[2U] 
									    << 0xcU) 
									   | (vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN_io_in[1U] 
									      >> 0x14U))))))));
    __Vtemp43[0U] = 0U;
    __Vtemp43[1U] = 0U;
    __Vtemp43[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp44, __Vtemp43, (0x3fU 
						   & (~ 
						      (0x3fffU 
						       & VL_EXTENDS_II(14,13, 
								       (0xfffU 
									& ((vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN_io_in[2U] 
									    << 0xcU) 
									   | (vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN_io_in[1U] 
									      >> 0x14U))))))));
    __Vtemp47[0U] = 0U;
    __Vtemp47[1U] = 0U;
    __Vtemp47[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp48, __Vtemp47, (0x3fU 
						   & (~ 
						      (0x3fffU 
						       & VL_EXTENDS_II(14,13, 
								       (0xfffU 
									& ((vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN_io_in[2U] 
									    << 0xcU) 
									   | (vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN_io_in[1U] 
									      >> 0x14U))))))));
    vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_89 
	= ((0x100U & (VL_EXTENDS_II(14,13, (0xfffU 
					    & ((vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN_io_in[2U] 
						<< 0xcU) 
					       | (vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN_io_in[1U] 
						  >> 0x14U)))) 
		      - (IData)(0x700U))) ? 0U : ((0x80U 
						   & (VL_EXTENDS_II(14,13, 
								    (0xfffU 
								     & ((vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN_io_in[2U] 
									 << 0xcU) 
									| (vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN_io_in[1U] 
									   >> 0x14U)))) 
						      - (IData)(0x700U)))
						   ? 
						  ((0x40U 
						    & (VL_EXTENDS_II(14,13, 
								     (0xfffU 
								      & ((vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN_io_in[2U] 
									  << 0xcU) 
									 | (vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN_io_in[1U] 
									    >> 0x14U)))) 
						       - (IData)(0x700U)))
						    ? 0U
						    : 
						   ((4U 
						     & (__Vtemp16[0U] 
							<< 2U)) 
						    | ((2U 
							& __Vtemp20[0U]) 
						       | (1U 
							  & (__Vtemp24[0U] 
							     >> 2U)))))
						   : 
						  (7U 
						   | (0x1fffff8U 
						      & ((~ 
							  ((0x40U 
							    & (VL_EXTENDS_II(14,13, 
									     (0xfffU 
									      & ((vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN_io_in[2U] 
										<< 0xcU) 
										| (vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN_io_in[1U] 
										>> 0x14U)))) 
							       - (IData)(0x700U)))
							    ? 
							   (~ 
							    (((0x155540U 
							       & ((IData)(vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_45) 
								  << 5U)) 
							      | (0x2aaa80U 
								 & ((IData)(vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_45) 
								    << 7U))) 
							     | ((0x20U 
								 & (__Vtemp28[1U] 
								    >> 0x15U)) 
								| ((0x10U 
								    & (__Vtemp32[1U] 
								       >> 0x17U)) 
								   | ((8U 
								       & (__Vtemp36[1U] 
									  >> 0x19U)) 
								      | ((4U 
									  & (__Vtemp40[1U] 
									     >> 0x1bU)) 
									 | ((2U 
									     & (__Vtemp44[1U] 
										>> 0x1dU)) 
									    | (1U 
									       & (__Vtemp48[1U] 
										>> 0x1fU)))))))))
							    : 0U)) 
							 << 3U)))));
    vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_98 
	= (vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__adjustedSig 
	   & (1U | (vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_89 
		    << 1U)));
    vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_95 
	= ((~ (1U | (vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_89 
		     << 1U))) & (3U | (vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_89 
				       << 2U)));
    vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_96 
	= (vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__adjustedSig 
	   & vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_95);
    vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_100 
	= ((0U != vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_96) 
	   | (0U != vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_98));
    vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_122 
	= (0x3ffffffU & ((((IData)(vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_101) 
			   & (0U != vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_96)) 
			  | ((IData)(vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__roundMagUp) 
			     & (IData)(vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_100)))
			  ? (((IData)(1U) + (0x1ffffffU 
					     & ((vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__adjustedSig 
						 >> 2U) 
						| (0x3fffffffU 
						   & vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_89)))) 
			     & (~ ((((0U == (IData)(vlTOPp->io_roundingMode)) 
				     & (0U != vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_96)) 
				    & (0U == vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_98))
				    ? (1U | (vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_89 
					     << 1U))
				    : 0U))) : ((0x1ffffffU 
						& ((vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__adjustedSig 
						    & (~ 
						       (3U 
							| (vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_89 
							   << 2U)))) 
						   >> 2U)) 
					       | (((6U 
						    == (IData)(vlTOPp->io_roundingMode)) 
						   & (IData)(vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_100))
						   ? 
						  (vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_95 
						   >> 1U)
						   : 0U))));
    vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_125 
	= (0x7fffU & (VL_EXTENDS_II(15,14, (0x3fffU 
					    & (VL_EXTENDS_II(14,13, 
							     (0xfffU 
							      & ((vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN_io_in[2U] 
								  << 0xcU) 
								 | (vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN_io_in[1U] 
								    >> 0x14U)))) 
					       - (IData)(0x700U)))) 
		      + VL_EXTENDS_II(15,14, (3U & 
					      (vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_122 
					       >> 0x18U)))));
    vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut 
	= (((IData)(vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__commonCase) 
	    & VL_GTS_III(1,15,15, 0x6bU, (IData)(vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_125))) 
	   & ((IData)(vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__roundMagUp) 
	      | (6U == (IData)(vlTOPp->io_roundingMode))));
    vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__overflow 
	= ((IData)(vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__commonCase) 
	   & VL_LTES_III(1,8,8, 3U, (0xffU & ((IData)(vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_125) 
					      >> 7U))));
    vlTOPp->io_actual_exceptionFlags = ((((IData)(vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN_io_invalidExc) 
					  << 4U) | 
					 ((IData)(vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__overflow) 
					  << 2U)) | 
					((((IData)(vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__commonCase) 
					   & (VL_GTS_III(1,15,15, 0x6bU, (IData)(vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_125)) 
					      | ((((IData)(vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_100) 
						   & VL_GTES_III(1,6,6, 0U, 
								 (0x3fU 
								  & ((VL_EXTENDS_II(14,13, 
										(0xfffU 
										& ((vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN_io_in[2U] 
										<< 0xcU) 
										| (vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN_io_in[1U] 
										>> 0x14U)))) 
								      - (IData)(0x700U)) 
								     >> 8U)))) 
						  & vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_89) 
						 & (~ 
						    (((((IData)(vlTOPp->io_detectTininess) 
							& (~ 
							   (vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_89 
							    >> 1U))) 
						       & (vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_122 
							  >> 0x18U)) 
						      & (0U 
							 != vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_96)) 
						     & (((IData)(vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_101) 
							 & (vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__adjustedSig 
							    >> 1U)) 
							| ((IData)(vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__roundMagUp) 
							   & (0U 
							      != 
							      (3U 
							       & vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__adjustedSig))))))))) 
					  << 1U) | 
					 ((IData)(vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__overflow) 
					  | ((IData)(vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__commonCase) 
					     & (VL_GTS_III(1,15,15, 0x6bU, (IData)(vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_125)) 
						| (IData)(vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_100))))));
    vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut 
	= ((IData)(vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__overflow) 
	   & (~ (IData)(vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
	= ((IData)(vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN_io_in_isInf) 
	   | ((IData)(vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__overflow) 
	      & (IData)(vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->io_actual_out = (((QData)((IData)((1U & 
					       ((~ (IData)(vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__isNaNOut)) 
						& vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN_io_in[2U])))) 
			      << 0x20U) | (QData)((IData)(
							  ((0xff800000U 
							    & ((((((((((IData)(vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_125) 
								       & (~ 
									  (((0U 
									     == 
									     (7U 
									      & ((vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN_io_in[2U] 
										<< 3U) 
										| (vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN_io_in[1U] 
										>> 0x1dU)))) 
									    | VL_GTS_III(1,15,15, 0x6bU, (IData)(vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_125)))
									    ? 0x1c0U
									    : 0U))) 
								      & (~ 
									 ((IData)(vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
									   ? 0x194U
									   : 0U))) 
								     & (~ 
									((IData)(vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
									  ? 0x80U
									  : 0U))) 
								    & (~ 
								       ((IData)(vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
									 ? 0x40U
									 : 0U))) 
								   | ((IData)(vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
								       ? 0x6bU
								       : 0U)) 
								  | ((IData)(vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
								      ? 0x17fU
								      : 0U)) 
								 | ((IData)(vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
								     ? 0x180U
								     : 0U)) 
								| ((IData)(vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__isNaNOut)
								    ? 0x1c0U
								    : 0U)) 
							       << 0x17U)) 
							   | (0x7fffffU 
							      & (((((IData)(vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__isNaNOut) 
								    | (0U 
								       == 
								       (7U 
									& ((vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN_io_in[2U] 
									    << 3U) 
									   | (vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN_io_in[1U] 
									      >> 0x1dU))))) 
								   | VL_GTS_III(1,15,15, 0x6bU, (IData)(vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_125)))
								   ? 
								  ((IData)(vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__isNaNOut)
								    ? 0x400000U
								    : 0U)
								   : vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_122) 
								 | ((IData)(vlTOPp->ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
								     ? 0x7fffffU
								     : 0U)))))));
    vlTOPp->ValExec_RecF64ToRecF32__DOT___T_227 = (
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
			 ? ((IData)(vlTOPp->ValExec_RecF64ToRecF32__DOT___T_227) 
			    & ((0x7fffffU & (IData)(vlTOPp->io_actual_out)) 
			       == (0x7fffffU & (IData)(vlTOPp->io_expected_recOut))))
			 : ((6U == (7U & (IData)((vlTOPp->io_actual_out 
						  >> 0x1dU))))
			     ? (IData)(vlTOPp->ValExec_RecF64ToRecF32__DOT___T_227)
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
    io_expected_out = VL_RAND_RESET_I(32);
    io_expected_exceptionFlags = VL_RAND_RESET_I(5);
    io_expected_recOut = VL_RAND_RESET_Q(33);
    io_actual_out = VL_RAND_RESET_Q(33);
    io_actual_exceptionFlags = VL_RAND_RESET_I(5);
    io_check = VL_RAND_RESET_I(1);
    io_pass = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65,ValExec_RecF64ToRecF32__DOT__recFNToRecFN_io_in);
    ValExec_RecF64ToRecF32__DOT___T_107 = VL_RAND_RESET_I(6);
    ValExec_RecF64ToRecF32__DOT___T_116 = VL_RAND_RESET_I(12);
    ValExec_RecF64ToRecF32__DOT___T_117 = VL_RAND_RESET_I(1);
    ValExec_RecF64ToRecF32__DOT___T_188 = VL_RAND_RESET_I(5);
    ValExec_RecF64ToRecF32__DOT___T_197 = VL_RAND_RESET_I(9);
    ValExec_RecF64ToRecF32__DOT___T_198 = VL_RAND_RESET_I(1);
    ValExec_RecF64ToRecF32__DOT___T_227 = VL_RAND_RESET_I(1);
    ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN_io_invalidExc = VL_RAND_RESET_I(1);
    ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN_io_in_isInf = VL_RAND_RESET_I(1);
    ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN_io_in_sig = VL_RAND_RESET_Q(54);
    ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__roundMagUp = VL_RAND_RESET_I(1);
    ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__adjustedSig = VL_RAND_RESET_I(27);
    ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_25 = VL_RAND_RESET_I(16);
    ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_35 = VL_RAND_RESET_I(16);
    ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_45 = VL_RAND_RESET_I(16);
    ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_89 = VL_RAND_RESET_I(25);
    ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_95 = VL_RAND_RESET_I(27);
    ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_96 = VL_RAND_RESET_I(27);
    ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_98 = VL_RAND_RESET_I(27);
    ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_100 = VL_RAND_RESET_I(1);
    ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_101 = VL_RAND_RESET_I(1);
    ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_122 = VL_RAND_RESET_I(26);
    ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_125 = VL_RAND_RESET_I(15);
    ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__isNaNOut = VL_RAND_RESET_I(1);
    ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__commonCase = VL_RAND_RESET_I(1);
    ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__overflow = VL_RAND_RESET_I(1);
    ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__overflow_roundMagUp = VL_RAND_RESET_I(1);
    ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut = VL_RAND_RESET_I(1);
    ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut = VL_RAND_RESET_I(1);
    ValExec_RecF64ToRecF32__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__notNaN_isInfOut = VL_RAND_RESET_I(1);
}
