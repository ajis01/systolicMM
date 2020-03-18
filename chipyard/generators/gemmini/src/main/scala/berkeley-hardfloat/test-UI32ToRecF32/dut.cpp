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
    // INITIAL at test-UI32ToRecF32/ValExec_UI32ToRecF32.v:334
    vlTOPp->io_check = 1U;
}

VL_INLINE_OPT void dut::_combo__TOP__2(dut__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    dut::_combo__TOP__2\n"); );
    dut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ValExec_UI32ToRecF32__DOT___T_59 = ((0U 
						 == 
						 (0xffU 
						  & (vlTOPp->io_expected_out 
						     >> 0x17U))) 
						& (0U 
						   == 
						   (0x7fffffU 
						    & vlTOPp->io_expected_out)));
    vlTOPp->ValExec_UI32ToRecF32__DOT___T_49 = ((0x400000U 
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
    vlTOPp->ValExec_UI32ToRecF32__DOT__iNToRecFN__DOT___T_69 
	= ((1U & (IData)(((QData)((IData)(vlTOPp->io_in)) 
			  >> 0x1fU))) ? 0U : ((1U & (IData)(
							    ((QData)((IData)(vlTOPp->io_in)) 
							     >> 0x1eU)))
					       ? 1U
					       : ((1U 
						   & (IData)(
							     ((QData)((IData)(vlTOPp->io_in)) 
							      >> 0x1dU)))
						   ? 2U
						   : 
						  ((1U 
						    & (IData)(
							      ((QData)((IData)(vlTOPp->io_in)) 
							       >> 0x1cU)))
						    ? 3U
						    : 
						   ((1U 
						     & (IData)(
							       ((QData)((IData)(vlTOPp->io_in)) 
								>> 0x1bU)))
						     ? 4U
						     : 
						    ((1U 
						      & (IData)(
								((QData)((IData)(vlTOPp->io_in)) 
								 >> 0x1aU)))
						      ? 5U
						      : 
						     ((1U 
						       & (IData)(
								 ((QData)((IData)(vlTOPp->io_in)) 
								  >> 0x19U)))
						       ? 6U
						       : 
						      ((1U 
							& (IData)(
								  ((QData)((IData)(vlTOPp->io_in)) 
								   >> 0x18U)))
						        ? 7U
						        : 
						       ((1U 
							 & (IData)(
								   ((QData)((IData)(vlTOPp->io_in)) 
								    >> 0x17U)))
							 ? 8U
							 : 
							((1U 
							  & (IData)(
								    ((QData)((IData)(vlTOPp->io_in)) 
								     >> 0x16U)))
							  ? 9U
							  : 
							 ((1U 
							   & (IData)(
								     ((QData)((IData)(vlTOPp->io_in)) 
								      >> 0x15U)))
							   ? 0xaU
							   : 
							  ((1U 
							    & (IData)(
								      ((QData)((IData)(vlTOPp->io_in)) 
								       >> 0x14U)))
							    ? 0xbU
							    : 
							   ((1U 
							     & (IData)(
								       ((QData)((IData)(vlTOPp->io_in)) 
									>> 0x13U)))
							     ? 0xcU
							     : 
							    ((1U 
							      & (IData)(
									((QData)((IData)(vlTOPp->io_in)) 
									 >> 0x12U)))
							      ? 0xdU
							      : 
							     ((1U 
							       & (IData)(
									 ((QData)((IData)(vlTOPp->io_in)) 
									  >> 0x11U)))
							       ? 0xeU
							       : 
							      ((1U 
								& (IData)(
									  ((QData)((IData)(vlTOPp->io_in)) 
									   >> 0x10U)))
							        ? 0xfU
							        : 
							       ((1U 
								 & (IData)(
									   ((QData)((IData)(vlTOPp->io_in)) 
									    >> 0xfU)))
								 ? 0x10U
								 : 
								((1U 
								  & (IData)(
									    ((QData)((IData)(vlTOPp->io_in)) 
									     >> 0xeU)))
								  ? 0x11U
								  : 
								 ((1U 
								   & (IData)(
									     ((QData)((IData)(vlTOPp->io_in)) 
									      >> 0xdU)))
								   ? 0x12U
								   : 
								  ((1U 
								    & (IData)(
									      ((QData)((IData)(vlTOPp->io_in)) 
									       >> 0xcU)))
								    ? 0x13U
								    : 
								   ((1U 
								     & (IData)(
									       ((QData)((IData)(vlTOPp->io_in)) 
										>> 0xbU)))
								     ? 0x14U
								     : 
								    ((1U 
								      & (IData)(
										((QData)((IData)(vlTOPp->io_in)) 
										>> 0xaU)))
								      ? 0x15U
								      : 
								     ((1U 
								       & (IData)(
										((QData)((IData)(vlTOPp->io_in)) 
										>> 9U)))
								       ? 0x16U
								       : 
								      ((1U 
									& (IData)(
										((QData)((IData)(vlTOPp->io_in)) 
										>> 8U)))
								        ? 0x17U
								        : 
								       ((1U 
									 & (IData)(
										((QData)((IData)(vlTOPp->io_in)) 
										>> 7U)))
									 ? 0x18U
									 : 
									((1U 
									  & (IData)(
										((QData)((IData)(vlTOPp->io_in)) 
										>> 6U)))
									  ? 0x19U
									  : 
									 ((1U 
									   & (IData)(
										((QData)((IData)(vlTOPp->io_in)) 
										>> 5U)))
									   ? 0x1aU
									   : 
									  ((1U 
									    & (IData)(
										((QData)((IData)(vlTOPp->io_in)) 
										>> 4U)))
									    ? 0x1bU
									    : 
									   ((1U 
									     & (IData)(
										((QData)((IData)(vlTOPp->io_in)) 
										>> 3U)))
									     ? 0x1cU
									     : 
									    ((1U 
									      & (IData)(
										((QData)((IData)(vlTOPp->io_in)) 
										>> 2U)))
									      ? 0x1dU
									      : 
									     ((1U 
									       & (IData)(
										((QData)((IData)(vlTOPp->io_in)) 
										>> 1U)))
									       ? 0x1eU
									       : 0x1fU)))))))))))))))))))))))))))))));
    vlTOPp->ValExec_UI32ToRecF32__DOT___T_58 = (0x1ffU 
						& (((0U 
						     == 
						     (0xffU 
						      & (vlTOPp->io_expected_out 
							 >> 0x17U)))
						     ? 
						    (~ (IData)(vlTOPp->ValExec_UI32ToRecF32__DOT___T_49))
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
    vlTOPp->ValExec_UI32ToRecF32__DOT__iNToRecFN__DOT___T_70 
	= (VL_ULL(0x7fffffffffffffff) & ((QData)((IData)(vlTOPp->io_in)) 
					 << (IData)(vlTOPp->ValExec_UI32ToRecF32__DOT__iNToRecFN__DOT___T_69)));
    vlTOPp->io_expected_recOut = (((QData)((IData)(
						   ((8U 
						     & (vlTOPp->io_expected_out 
							>> 0x1cU)) 
						    | (7U 
						       & (((IData)(vlTOPp->ValExec_UI32ToRecF32__DOT___T_59)
							    ? 0U
							    : 
							   ((IData)(vlTOPp->ValExec_UI32ToRecF32__DOT___T_58) 
							    >> 6U)) 
							  | ((3U 
							      == 
							      (3U 
							       & ((IData)(vlTOPp->ValExec_UI32ToRecF32__DOT___T_58) 
								  >> 7U))) 
							     & (0U 
								!= 
								(0x7fffffU 
								 & vlTOPp->io_expected_out)))))))) 
				   << 0x1dU) | (QData)((IData)(
							       ((0x1f800000U 
								 & ((IData)(vlTOPp->ValExec_UI32ToRecF32__DOT___T_58) 
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
										<< (IData)(vlTOPp->ValExec_UI32ToRecF32__DOT___T_49)))) 
									  << 1U))
								       : vlTOPp->io_expected_out))))));
    vlTOPp->ValExec_UI32ToRecF32__DOT__iNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig 
	= ((0x7fffffeU & ((IData)(((QData)((IData)(vlTOPp->ValExec_UI32ToRecF32__DOT__iNToRecFN__DOT___T_70)) 
				   >> 7U)) << 1U)) 
	   | (0U != (0x7fU & (IData)((QData)((IData)(vlTOPp->ValExec_UI32ToRecF32__DOT__iNToRecFN__DOT___T_70))))));
    vlTOPp->ValExec_UI32ToRecF32__DOT__iNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__common_inexact 
	= ((0U != (2U & vlTOPp->ValExec_UI32ToRecF32__DOT__iNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig)) 
	   | (0U != (1U & vlTOPp->ValExec_UI32ToRecF32__DOT__iNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig)));
    vlTOPp->io_actual_exceptionFlags = ((IData)((vlTOPp->ValExec_UI32ToRecF32__DOT__iNToRecFN__DOT___T_70 
						 >> 0x1fU)) 
					& (IData)(vlTOPp->ValExec_UI32ToRecF32__DOT__iNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__common_inexact));
    vlTOPp->ValExec_UI32ToRecF32__DOT__iNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_40 
	= (0x3ffffffU & (((((0U == (IData)(vlTOPp->io_roundingMode)) 
			    | (4U == (IData)(vlTOPp->io_roundingMode))) 
			   & (0U != (2U & vlTOPp->ValExec_UI32ToRecF32__DOT__iNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig))) 
			  | ((3U == (IData)(vlTOPp->io_roundingMode)) 
			     & (IData)(vlTOPp->ValExec_UI32ToRecF32__DOT__iNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__common_inexact)))
			  ? (((IData)(1U) + (0x1ffffffU 
					     & (vlTOPp->ValExec_UI32ToRecF32__DOT__iNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig 
						>> 2U))) 
			     & (~ ((((0U == (IData)(vlTOPp->io_roundingMode)) 
				     & (0U != (2U & vlTOPp->ValExec_UI32ToRecF32__DOT__iNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig))) 
				    & (0U == (1U & vlTOPp->ValExec_UI32ToRecF32__DOT__iNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig)))
				    ? 1U : 0U))) : 
			 ((0x1ffffffU & (vlTOPp->ValExec_UI32ToRecF32__DOT__iNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig 
					 >> 2U)) | 
			  (((6U == (IData)(vlTOPp->io_roundingMode)) 
			    & (IData)(vlTOPp->ValExec_UI32ToRecF32__DOT__iNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__common_inexact))
			    ? 1U : 0U))));
    vlTOPp->io_actual_out = (((QData)((IData)((0x1ffU 
					       & (((0x7ffU 
						    & VL_EXTENDS_II(11,10, 
								    (0x1ffU 
								     & ((IData)(0xc0U) 
									+ 
									(0x3ffU 
									 & VL_EXTENDS_II(10,9, 
										(0x40U 
										| (0x1fU 
										& (~ (IData)(vlTOPp->ValExec_UI32ToRecF32__DOT__iNToRecFN__DOT___T_69)))))))))) 
						   + 
						   (0x7ffU 
						    & VL_EXTENDS_II(11,10, 
								    (3U 
								     & (vlTOPp->ValExec_UI32ToRecF32__DOT__iNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_40 
									>> 0x18U))))) 
						  & (~ 
						     ((1U 
						       & (IData)(
								 (vlTOPp->ValExec_UI32ToRecF32__DOT__iNToRecFN__DOT___T_70 
								  >> 0x1fU)))
						       ? 0U
						       : 0x1c0U)))))) 
			      << 0x17U) | (QData)((IData)(
							  (0x7fffffU 
							   & ((1U 
							       & (IData)(
									 (vlTOPp->ValExec_UI32ToRecF32__DOT__iNToRecFN__DOT___T_70 
									  >> 0x1fU)))
							       ? vlTOPp->ValExec_UI32ToRecF32__DOT__iNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_40
							       : 0U)))));
    vlTOPp->ValExec_UI32ToRecF32__DOT___T_88 = ((0xfU 
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
			 ? ((IData)(vlTOPp->ValExec_UI32ToRecF32__DOT___T_88) 
			    & ((0x7fffffU & (IData)(vlTOPp->io_actual_out)) 
			       == (0x7fffffU & (IData)(vlTOPp->io_expected_recOut))))
			 : ((6U == (7U & (IData)((vlTOPp->io_actual_out 
						  >> 0x1dU))))
			     ? (IData)(vlTOPp->ValExec_UI32ToRecF32__DOT___T_88)
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
    io_in = VL_RAND_RESET_I(32);
    io_roundingMode = VL_RAND_RESET_I(3);
    io_detectTininess = VL_RAND_RESET_I(1);
    io_expected_out = VL_RAND_RESET_I(32);
    io_expected_exceptionFlags = VL_RAND_RESET_I(5);
    io_expected_recOut = VL_RAND_RESET_Q(33);
    io_actual_out = VL_RAND_RESET_Q(33);
    io_actual_exceptionFlags = VL_RAND_RESET_I(5);
    io_check = VL_RAND_RESET_I(1);
    io_pass = VL_RAND_RESET_I(1);
    ValExec_UI32ToRecF32__DOT___T_49 = VL_RAND_RESET_I(5);
    ValExec_UI32ToRecF32__DOT___T_58 = VL_RAND_RESET_I(9);
    ValExec_UI32ToRecF32__DOT___T_59 = VL_RAND_RESET_I(1);
    ValExec_UI32ToRecF32__DOT___T_88 = VL_RAND_RESET_I(1);
    ValExec_UI32ToRecF32__DOT__iNToRecFN__DOT___T_69 = VL_RAND_RESET_I(5);
    ValExec_UI32ToRecF32__DOT__iNToRecFN__DOT___T_70 = VL_RAND_RESET_Q(63);
    ValExec_UI32ToRecF32__DOT__iNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig = VL_RAND_RESET_I(27);
    ValExec_UI32ToRecF32__DOT__iNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__common_inexact = VL_RAND_RESET_I(1);
    ValExec_UI32ToRecF32__DOT__iNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_40 = VL_RAND_RESET_I(26);
}