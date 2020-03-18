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
    // INITIAL at test-MulAddRecF32_add/ValExec_MulAddRecF32_add.v:1274
    vlTOPp->io_check = 1U;
}

VL_INLINE_OPT void dut::_combo__TOP__2(dut__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    dut::_combo__TOP__2\n"); );
    dut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp2,95,0,3);
    VL_SIGW(__Vtemp3,95,0,3);
    VL_SIGW(__Vtemp11,95,0,3);
    VL_SIGW(__Vtemp12,95,0,3);
    VL_SIGW(__Vtemp15,127,0,4);
    VL_SIGW(__Vtemp16,127,0,4);
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
    VL_SIGW(__Vtemp51,95,0,3);
    VL_SIGW(__Vtemp52,95,0,3);
    VL_SIGW(__Vtemp55,95,0,3);
    VL_SIGW(__Vtemp56,95,0,3);
    VL_SIGW(__Vtemp59,95,0,3);
    VL_SIGW(__Vtemp60,95,0,3);
    // Body
    vlTOPp->ValExec_MulAddRecF32_add__DOT___T_221 = 
	((0U == (0xffU & (vlTOPp->io_expected_out >> 0x17U))) 
	 & (0U == (0x7fffffU & vlTOPp->io_expected_out)));
    vlTOPp->ValExec_MulAddRecF32_add__DOT___T_211 = 
	((0x400000U & vlTOPp->io_expected_out) ? 0U
	  : ((0x200000U & vlTOPp->io_expected_out) ? 1U
	      : ((0x100000U & vlTOPp->io_expected_out)
		  ? 2U : ((0x80000U & vlTOPp->io_expected_out)
			   ? 3U : ((0x40000U & vlTOPp->io_expected_out)
				    ? 4U : ((0x20000U 
					     & vlTOPp->io_expected_out)
					     ? 5U : 
					    ((0x10000U 
					      & vlTOPp->io_expected_out)
					      ? 6U : 
					     ((0x8000U 
					       & vlTOPp->io_expected_out)
					       ? 7U
					       : ((0x4000U 
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
    vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_98 
	= ((0U == (IData)(vlTOPp->io_roundingMode)) 
	   | (4U == (IData)(vlTOPp->io_roundingMode)));
    vlTOPp->ValExec_MulAddRecF32_add__DOT___T_140 = 
	((0U == (0xffU & (vlTOPp->io_b >> 0x17U))) 
	 & (0U == (0x7fffffU & vlTOPp->io_b)));
    vlTOPp->ValExec_MulAddRecF32_add__DOT___T_59 = 
	((0U == (0xffU & (vlTOPp->io_a >> 0x17U))) 
	 & (0U == (0x7fffffU & vlTOPp->io_a)));
    vlTOPp->ValExec_MulAddRecF32_add__DOT___T_130 = 
	((0x400000U & vlTOPp->io_b) ? 0U : ((0x200000U 
					     & vlTOPp->io_b)
					     ? 1U : 
					    ((0x100000U 
					      & vlTOPp->io_b)
					      ? 2U : 
					     ((0x80000U 
					       & vlTOPp->io_b)
					       ? 3U
					       : ((0x40000U 
						   & vlTOPp->io_b)
						   ? 4U
						   : 
						  ((0x20000U 
						    & vlTOPp->io_b)
						    ? 5U
						    : 
						   ((0x10000U 
						     & vlTOPp->io_b)
						     ? 6U
						     : 
						    ((0x8000U 
						      & vlTOPp->io_b)
						      ? 7U
						      : 
						     ((0x4000U 
						       & vlTOPp->io_b)
						       ? 8U
						       : 
						      ((0x2000U 
							& vlTOPp->io_b)
						        ? 9U
						        : 
						       ((0x1000U 
							 & vlTOPp->io_b)
							 ? 0xaU
							 : 
							((0x800U 
							  & vlTOPp->io_b)
							  ? 0xbU
							  : 
							 ((0x400U 
							   & vlTOPp->io_b)
							   ? 0xcU
							   : 
							  ((0x200U 
							    & vlTOPp->io_b)
							    ? 0xdU
							    : 
							   ((0x100U 
							     & vlTOPp->io_b)
							     ? 0xeU
							     : 
							    ((0x80U 
							      & vlTOPp->io_b)
							      ? 0xfU
							      : 
							     ((0x40U 
							       & vlTOPp->io_b)
							       ? 0x10U
							       : 
							      ((0x20U 
								& vlTOPp->io_b)
							        ? 0x11U
							        : 
							       ((0x10U 
								 & vlTOPp->io_b)
								 ? 0x12U
								 : 
								((8U 
								  & vlTOPp->io_b)
								  ? 0x13U
								  : 
								 ((4U 
								   & vlTOPp->io_b)
								   ? 0x14U
								   : 
								  ((2U 
								    & vlTOPp->io_b)
								    ? 0x15U
								    : 0x16U))))))))))))))))))))));
    vlTOPp->ValExec_MulAddRecF32_add__DOT___T_49 = 
	((0x400000U & vlTOPp->io_a) ? 0U : ((0x200000U 
					     & vlTOPp->io_a)
					     ? 1U : 
					    ((0x100000U 
					      & vlTOPp->io_a)
					      ? 2U : 
					     ((0x80000U 
					       & vlTOPp->io_a)
					       ? 3U
					       : ((0x40000U 
						   & vlTOPp->io_a)
						   ? 4U
						   : 
						  ((0x20000U 
						    & vlTOPp->io_a)
						    ? 5U
						    : 
						   ((0x10000U 
						     & vlTOPp->io_a)
						     ? 6U
						     : 
						    ((0x8000U 
						      & vlTOPp->io_a)
						      ? 7U
						      : 
						     ((0x4000U 
						       & vlTOPp->io_a)
						       ? 8U
						       : 
						      ((0x2000U 
							& vlTOPp->io_a)
						        ? 9U
						        : 
						       ((0x1000U 
							 & vlTOPp->io_a)
							 ? 0xaU
							 : 
							((0x800U 
							  & vlTOPp->io_a)
							  ? 0xbU
							  : 
							 ((0x400U 
							   & vlTOPp->io_a)
							   ? 0xcU
							   : 
							  ((0x200U 
							    & vlTOPp->io_a)
							    ? 0xdU
							    : 
							   ((0x100U 
							     & vlTOPp->io_a)
							     ? 0xeU
							     : 
							    ((0x80U 
							      & vlTOPp->io_a)
							      ? 0xfU
							      : 
							     ((0x40U 
							       & vlTOPp->io_a)
							       ? 0x10U
							       : 
							      ((0x20U 
								& vlTOPp->io_a)
							        ? 0x11U
							        : 
							       ((0x10U 
								 & vlTOPp->io_a)
								 ? 0x12U
								 : 
								((8U 
								  & vlTOPp->io_a)
								  ? 0x13U
								  : 
								 ((4U 
								   & vlTOPp->io_a)
								   ? 0x14U
								   : 
								  ((2U 
								    & vlTOPp->io_a)
								    ? 0x15U
								    : 0x16U))))))))))))))))))))));
    vlTOPp->ValExec_MulAddRecF32_add__DOT___T_220 = 
	(0x1ffU & (((0U == (0xffU & (vlTOPp->io_expected_out 
				     >> 0x17U))) ? 
		    (~ (IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT___T_211))
		     : (0xffU & (vlTOPp->io_expected_out 
				 >> 0x17U))) + (0x80U 
						| ((0U 
						    == 
						    (0xffU 
						     & (vlTOPp->io_expected_out 
							>> 0x17U)))
						    ? 2U
						    : 1U))));
    vlTOPp->ValExec_MulAddRecF32_add__DOT___T_139 = 
	(0x1ffU & (((0U == (0xffU & (vlTOPp->io_b >> 0x17U)))
		     ? (~ (IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT___T_130))
		     : (0xffU & (vlTOPp->io_b >> 0x17U))) 
		   + (0x80U | ((0U == (0xffU & (vlTOPp->io_b 
						>> 0x17U)))
			        ? 2U : 1U))));
    vlTOPp->ValExec_MulAddRecF32_add__DOT___T_58 = 
	(0x1ffU & (((0U == (0xffU & (vlTOPp->io_a >> 0x17U)))
		     ? (~ (IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT___T_49))
		     : (0xffU & (vlTOPp->io_a >> 0x17U))) 
		   + (0x80U | ((0U == (0xffU & (vlTOPp->io_a 
						>> 0x17U)))
			        ? 2U : 1U))));
    vlTOPp->io_expected_recOut = (((QData)((IData)(
						   ((8U 
						     & (vlTOPp->io_expected_out 
							>> 0x1cU)) 
						    | (7U 
						       & (((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT___T_221)
							    ? 0U
							    : 
							   ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT___T_220) 
							    >> 6U)) 
							  | ((3U 
							      == 
							      (3U 
							       & ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT___T_220) 
								  >> 7U))) 
							     & (0U 
								!= 
								(0x7fffffU 
								 & vlTOPp->io_expected_out)))))))) 
				   << 0x1dU) | (QData)((IData)(
							       ((0x1f800000U 
								 & ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT___T_220) 
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
										<< (IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT___T_211)))) 
									  << 1U))
								       : vlTOPp->io_expected_out))))));
    vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN_io_c 
	= (((QData)((IData)(((8U & (vlTOPp->io_b >> 0x1cU)) 
			     | (7U & (((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT___T_140)
				        ? 0U : ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT___T_139) 
						>> 6U)) 
				      | ((3U == (3U 
						 & ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT___T_139) 
						    >> 7U))) 
					 & (0U != (0x7fffffU 
						   & vlTOPp->io_b)))))))) 
	    << 0x1dU) | (QData)((IData)(((0x1f800000U 
					  & ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT___T_139) 
					     << 0x17U)) 
					 | (0x7fffffU 
					    & ((0U 
						== 
						(0xffU 
						 & (vlTOPp->io_b 
						    >> 0x17U)))
					        ? (0x7ffffeU 
						   & ((IData)(
							      (VL_ULL(0x3fffffffffffff) 
							       & ((QData)((IData)(
										(0x7fffffU 
										& vlTOPp->io_b))) 
								  << (IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT___T_130)))) 
						      << 1U))
					        : vlTOPp->io_b))))));
    vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN_io_a 
	= (((QData)((IData)(((8U & (vlTOPp->io_a >> 0x1cU)) 
			     | (7U & (((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT___T_59)
				        ? 0U : ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT___T_58) 
						>> 6U)) 
				      | ((3U == (3U 
						 & ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT___T_58) 
						    >> 7U))) 
					 & (0U != (0x7fffffU 
						   & vlTOPp->io_a)))))))) 
	    << 0x1dU) | (QData)((IData)(((0x1f800000U 
					  & ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT___T_58) 
					     << 0x17U)) 
					 | (0x7fffffU 
					    & ((0U 
						== 
						(0xffU 
						 & (vlTOPp->io_a 
						    >> 0x17U)))
					        ? (0x7ffffeU 
						   & ((IData)(
							      (VL_ULL(0x3fffffffffffff) 
							       & ((QData)((IData)(
										(0x7fffffU 
										& vlTOPp->io_a))) 
								  << (IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT___T_49)))) 
						      << 1U))
					        : vlTOPp->io_a))))));
    vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfC 
	= ((3U == (3U & (IData)((vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN_io_c 
				 >> 0x1eU)))) & (~ (IData)(
							   (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN_io_c 
							    >> 0x1dU))));
    vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig 
	= (((0U != (7U & (IData)((vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN_io_c 
				  >> 0x1dU)))) << 0x17U) 
	   | (0x7fffffU & (IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN_io_c)));
    vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isNaNAOrB 
	= ((3U == (3U & (IData)((vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN_io_a 
				 >> 0x1eU)))) & (IData)(
							(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN_io_a 
							 >> 0x1dU)));
    vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros 
	= ((0U == (7U & (IData)((vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN_io_a 
				 >> 0x1dU)))) & (0U 
						 == 
						 (7U 
						  & (IData)(
							    (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN_io_c 
							     >> 0x1dU)))));
    vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA 
	= ((3U == (3U & (IData)((vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN_io_a 
				 >> 0x1eU)))) & (~ (IData)(
							   (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN_io_a 
							    >> 0x1dU))));
    vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_sig 
	= (((0U != (7U & (IData)((vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN_io_a 
				  >> 0x1dU)))) << 0x17U) 
	   | (0x7fffffU & (IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN_io_a)));
    vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags 
	= (1U & ((IData)((vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN_io_a 
			  >> 0x20U)) ^ (IData)((vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN_io_c 
						>> 0x20U))));
    vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__sNatCAlignDist 
	= (0x7ffU & (((IData)(0x1bU) + VL_EXTENDS_II(11,10, 
						     (0x1ffU 
						      & (IData)(
								(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN_io_a 
								 >> 0x17U))))) 
		     - (0x1ffU & (IData)((vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN_io_c 
					  >> 0x17U)))));
    vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_isInf 
	= ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA) 
	   | (IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfC));
    vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_invalidExc 
	= (((((3U == (3U & (IData)((vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN_io_a 
				    >> 0x1eU)))) & (IData)(
							   (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN_io_a 
							    >> 0x1dU))) 
	     & (~ (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_sig 
		   >> 0x16U))) | (((3U == (3U & (IData)(
							(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN_io_c 
							 >> 0x1eU)))) 
				   & (IData)((vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN_io_c 
					      >> 0x1dU))) 
				  & (~ (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig 
					>> 0x16U)))) 
	   | ((((~ (IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isNaNAOrB)) 
		& (IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA)) 
	       & (IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfC)) 
	      & (IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)));
    vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_sign 
	= (1U & ((IData)((vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN_io_a 
			  >> 0x20U)) ^ (IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)));
    vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign 
	= ((0U == (7U & (IData)((vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN_io_a 
				 >> 0x1dU)))) | VL_GTS_III(1,11,11, 0U, (IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__sNatCAlignDist)));
    vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
	= ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_invalidExc) 
	   | ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isNaNAOrB) 
	      | ((3U == (3U & (IData)((vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN_io_c 
				       >> 0x1eU)))) 
		 & (IData)((vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN_io_c 
			    >> 0x1dU)))));
    vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT___T_61 
	= ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign) 
	   | (0x18U >= (0x3ffU & (IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__sNatCAlignDist))));
    vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist 
	= (0x7fU & ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign)
		     ? 0U : ((0x4aU > (0x3ffU & (IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__sNatCAlignDist)))
			      ? (IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__sNatCAlignDist)
			      : 0x4aU)));
    vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT___T_138 
	= (0x7ffU & (((0U != (7U & (IData)((vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN_io_c 
					    >> 0x1dU)))) 
		      & (IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT___T_61))
		      ? (0x1ffU & (IData)((vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN_io_c 
					   >> 0x17U)))
		      : ((IData)(3U) + VL_EXTENDS_II(11,10, 
						     (0x1ffU 
						      & (IData)(
								(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN_io_a 
								 >> 0x17U)))))));
    vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_CIsDominant 
	= ((0U != (7U & (IData)((vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN_io_c 
				 >> 0x1dU)))) & (IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT___T_61));
    vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT___T_111 
	= ((((0U != (7U & (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig 
			   >> 0x16U))) << 6U) | (((0U 
						   != 
						   (0xfU 
						    & (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig 
						       >> 0x12U))) 
						  << 5U) 
						 | (((0U 
						      != 
						      (0xfU 
						       & (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig 
							  >> 0xeU))) 
						     << 4U) 
						    | (((0U 
							 != 
							 (0xfU 
							  & (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig 
							     >> 0xaU))) 
							<< 3U) 
						       | (((0U 
							    != 
							    (0xfU 
							     & (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig 
								>> 6U))) 
							   << 2U) 
							  | (((0U 
							       != 
							       (0xfU 
								& (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig 
								   >> 2U))) 
							      << 1U) 
							     | (0U 
								!= 
								(0xcU 
								 & (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig 
								    << 2U))))))))) 
	   & ((0x20U & ((IData)((VL_ULL(0x7ffff) & 
				 (VL_SHIFTRS_QQI(33,33,5, VL_ULL(0x100000000), 
						 (0x1fU 
						  & ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
						     >> 2U))) 
				  >> 0xeU))) << 5U)) 
	      | ((0x10U & ((IData)((VL_ULL(0x3ffff) 
				    & (VL_SHIFTRS_QQI(33,33,5, VL_ULL(0x100000000), 
						      (0x1fU 
						       & ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
							  >> 2U))) 
				       >> 0xfU))) << 4U)) 
		 | ((8U & ((IData)((VL_ULL(0x1ffff) 
				    & (VL_SHIFTRS_QQI(33,33,5, VL_ULL(0x100000000), 
						      (0x1fU 
						       & ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
							  >> 2U))) 
				       >> 0x10U))) 
			   << 3U)) | ((4U & ((IData)(
						     (VL_ULL(0xffff) 
						      & (VL_SHIFTRS_QQI(33,33,5, VL_ULL(0x100000000), 
									(0x1fU 
									 & ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
									    >> 2U))) 
							 >> 0x11U))) 
					     << 2U)) 
				      | ((2U & ((IData)(
							(VL_ULL(0x7fff) 
							 & (VL_SHIFTRS_QQI(33,33,5, VL_ULL(0x100000000), 
									   (0x1fU 
									    & ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
									       >> 2U))) 
							    >> 0x12U))) 
						<< 1U)) 
					 | (1U & (IData)(
							 (VL_ULL(0x3fff) 
							  & (VL_SHIFTRS_QQI(33,33,5, VL_ULL(0x100000000), 
									    (0x1fU 
									     & ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
										>> 2U))) 
							     >> 0x13U))))))))));
    __Vtemp2[0U] = (IData)(((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)
			     ? VL_ULL(0x1fffffffffffff)
			     : VL_ULL(0)));
    __Vtemp2[1U] = ((0xffe00000U & (((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)
				      ? (~ vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig)
				      : vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig) 
				    << 0x15U)) | (IData)(
							 (((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)
							    ? VL_ULL(0x1fffffffffffff)
							    : VL_ULL(0)) 
							  >> 0x20U)));
    __Vtemp2[2U] = (0x3fffU & (((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)
				 ? (~ vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig)
				 : vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig) 
			       >> 0xbU));
    VL_SHIFTRS_WWI(78,78,7, __Vtemp3, __Vtemp2, (IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist));
    vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U] 
	= __Vtemp3[0U];
    vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
	= __Vtemp3[1U];
    vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
	= (0x3fffU & __Vtemp3[2U]);
    vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[0U] 
	= ((0xfffffffeU & ((vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
			    << 0x1eU) | (0x3ffffffeU 
					 & (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U] 
					    >> 2U)))) 
	   | ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)
	       ? ((7U == (7U & vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U])) 
		  & (0U == (IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT___T_111)))
	       : ((0U != (7U & vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U])) 
		  | (0U != (IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT___T_111)))));
    vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[1U] 
	= ((1U & (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
		  >> 2U)) | (0xfffffffeU & ((vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
					     << 0x1eU) 
					    | (0x3ffffffeU 
					       & (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
						  >> 2U)))));
    vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[2U] 
	= ((1U & (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
		  >> 2U)) | (0xffeU & (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
				       >> 2U)));
    vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult 
	= (VL_ULL(0x1ffffffffffff) & ((VL_ULL(0xffffffffffff) 
				       & ((QData)((IData)(
							  (0xffffffU 
							   & vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_sig))) 
					  << 0x17U)) 
				      + (VL_ULL(0xffffffffffff) 
					 & (((QData)((IData)(
							     vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[2U])) 
					     << 0x3fU) 
					    | (((QData)((IData)(
								vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[1U])) 
						<< 0x1fU) 
					       | ((QData)((IData)(
								  vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[0U])) 
						  >> 1U))))));
    vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[0U] 
	= (IData)(((VL_ULL(0x1fffffffffffe) & (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult 
					       << 1U)) 
		   | (QData)((IData)((1U & vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[0U])))));
    vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U] 
	= ((0xfffe0000U & (((1U & (IData)((vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult 
					   >> 0x30U)))
			     ? ((IData)(1U) + ((vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[2U] 
						<< 0xfU) 
					       | (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[1U] 
						  >> 0x11U)))
			     : ((vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[2U] 
				 << 0xfU) | (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[1U] 
					     >> 0x11U))) 
			   << 0x11U)) | (IData)((((VL_ULL(0x1fffffffffffe) 
						   & (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult 
						      << 1U)) 
						  | (QData)((IData)(
								    (1U 
								     & vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[0U])))) 
						 >> 0x20U)));
    vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[2U] 
	= (0x7ffU & (((1U & (IData)((vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult 
				     >> 0x30U))) ? 
		      ((IData)(1U) + ((vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[2U] 
				       << 0xfU) | (
						   vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[1U] 
						   >> 0x11U)))
		       : ((vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[2U] 
			   << 0xfU) | (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[1U] 
				       >> 0x11U))) 
		     >> 0xfU));
    vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
	= (VL_ULL(0x3ffffffffffff) & ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)
				       ? (~ (((QData)((IData)(
							      vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[2U])) 
					      << 0x27U) 
					     | (((QData)((IData)(
								 vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U])) 
						 << 7U) 
						| ((QData)((IData)(
								   vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[0U])) 
						   >> 0x19U))))
				       : (((QData)((IData)(
							   (3U 
							    & (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[2U] 
							       >> 9U)))) 
					   << 0x2fU) 
					  | (VL_ULL(0x7fffffffffff) 
					     & (((QData)((IData)(
								 vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[2U])) 
						 << 0x26U) 
						| (((QData)((IData)(
								    vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U])) 
						    << 6U) 
						   | ((QData)((IData)(
								      vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[0U])) 
						      >> 0x1aU)))))));
    vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
	= (VL_ULL(0x7ffffffffffff) & ((0x80000U & vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U])
				       ? (~ (((QData)((IData)(
							      vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U])) 
					      << 0x20U) 
					     | (QData)((IData)(
							       vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[0U]))))
				       : ((((QData)((IData)(
							    vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U])) 
					    << 0x20U) 
					   | (QData)((IData)(
							     vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[0U]))) 
					  + (QData)((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)))));
    VL_EXTEND_WQ(81,50, __Vtemp11, vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum);
    VL_SHIFTL_WWI(81,81,5, __Vtemp12, __Vtemp11, (0x1fU 
						  & (IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist)));
    vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_20[0U] 
	= __Vtemp12[0U];
    vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_20[1U] 
	= __Vtemp12[1U];
    vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_20[2U] 
	= (0x1ffffU & __Vtemp12[2U]);
    vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
	= ((0x2000000U & ((IData)((vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
				   >> 0x32U)) << 0x19U)) 
	   | (((0U != (3U & (IData)((vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
				     >> 0x30U)))) << 0x18U) 
	      | (((0U != (3U & (IData)((vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
					>> 0x2eU)))) 
		  << 0x17U) | (((0U != (3U & (IData)(
						     (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
						      >> 0x2cU)))) 
				<< 0x16U) | (((0U != 
					       (3U 
						& (IData)(
							  (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
							   >> 0x2aU)))) 
					      << 0x15U) 
					     | (((0U 
						  != 
						  (3U 
						   & (IData)(
							     (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
							      >> 0x28U)))) 
						 << 0x14U) 
						| (((0U 
						     != 
						     (3U 
						      & (IData)(
								(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
								 >> 0x26U)))) 
						    << 0x13U) 
						   | ((((0U 
							 != 
							 (3U 
							  & (IData)(
								    (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
								     >> 0x24U)))) 
							<< 0x12U) 
						       | (((0U 
							    != 
							    (3U 
							     & (IData)(
								       (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
									>> 0x22U)))) 
							   << 0x11U) 
							  | (((0U 
							       != 
							       (3U 
								& (IData)(
									  (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
									   >> 0x20U)))) 
							      << 0x10U) 
							     | (((0U 
								  != 
								  (3U 
								   & (IData)(
									     (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
									      >> 0x1eU)))) 
								 << 0xfU) 
								| (((0U 
								     != 
								     (3U 
								      & (IData)(
										(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
										>> 0x1cU)))) 
								    << 0xeU) 
								   | ((0U 
								       != 
								       (3U 
									& (IData)(
										(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
										>> 0x1aU)))) 
								      << 0xdU)))))) 
						      | (((0U 
							   != 
							   (3U 
							    & (IData)(
								      (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
								       >> 0x18U)))) 
							  << 0xcU) 
							 | (((0U 
							      != 
							      (3U 
							       & (IData)(
									 (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
									  >> 0x16U)))) 
							     << 0xbU) 
							    | (((0U 
								 != 
								 (3U 
								  & (IData)(
									    (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
									     >> 0x14U)))) 
								<< 0xaU) 
							       | (((0U 
								    != 
								    (3U 
								     & (IData)(
									       (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
										>> 0x12U)))) 
								   << 9U) 
								  | (((0U 
								       != 
								       (3U 
									& (IData)(
										(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
										>> 0x10U)))) 
								      << 8U) 
								     | (((0U 
									  != 
									  (3U 
									   & (IData)(
										(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
										>> 0xeU)))) 
									 << 7U) 
									| (((0U 
									     != 
									     (3U 
									      & (IData)(
										(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
										>> 0xcU)))) 
									    << 6U) 
									   | (((0U 
										!= 
										(3U 
										& (IData)(
										(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
										>> 0xaU)))) 
									       << 5U) 
									      | (((0U 
										!= 
										(3U 
										& (IData)(
										(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
										>> 8U)))) 
										<< 4U) 
										| (((0U 
										!= 
										(3U 
										& (IData)(
										(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
										>> 6U)))) 
										<< 3U) 
										| (((0U 
										!= 
										(3U 
										& (IData)(
										(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
										>> 4U)))) 
										<< 2U) 
										| (((0U 
										!= 
										(3U 
										& (IData)(
										(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
										>> 2U)))) 
										<< 1U) 
										| (0U 
										!= 
										(3U 
										& (IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum)))))))))))))))))))))));
    vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2 
	= ((0x2000000U & vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
	    ? 0U : ((0x1000000U & vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
		     ? 1U : ((0x800000U & vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
			      ? 2U : ((0x400000U & vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
				       ? 3U : ((0x200000U 
						& vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
					        ? 4U
					        : (
						   (0x100000U 
						    & vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
						    ? 5U
						    : 
						   ((0x80000U 
						     & vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
						     ? 6U
						     : 
						    ((0x40000U 
						      & vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
						      ? 7U
						      : 
						     ((0x20000U 
						       & vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
						       ? 8U
						       : 
						      ((0x10000U 
							& vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
						        ? 9U
						        : 
						       ((0x8000U 
							 & vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
							 ? 0xaU
							 : 
							((0x4000U 
							  & vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
							  ? 0xbU
							  : 
							 ((0x2000U 
							   & vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
							   ? 0xcU
							   : 
							  ((0x1000U 
							    & vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
							    ? 0xdU
							    : 
							   ((0x800U 
							     & vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
							     ? 0xeU
							     : 
							    ((0x400U 
							      & vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
							      ? 0xfU
							      : 
							     ((0x200U 
							       & vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
							       ? 0x10U
							       : 
							      ((0x100U 
								& vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
							        ? 0x11U
							        : 
							       ((0x80U 
								 & vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
								 ? 0x12U
								 : 
								((0x40U 
								  & vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
								  ? 0x13U
								  : 
								 ((0x20U 
								   & vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
								   ? 0x14U
								   : 
								  ((0x10U 
								    & vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
								    ? 0x15U
								    : 
								   ((8U 
								     & vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
								     ? 0x16U
								     : 
								    ((4U 
								      & vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
								      ? 0x17U
								      : 
								     ((2U 
								       & vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)
								       ? 0x18U
								       : 0x19U)))))))))))))))))))))))));
    VL_EXTEND_WQ(114,51, __Vtemp15, vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum);
    VL_SHIFTL_WWI(114,114,6, __Vtemp16, __Vtemp15, 
		  ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
		   << 1U));
    vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_204[0U] 
	= __Vtemp16[0U];
    vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_204[1U] 
	= __Vtemp16[1U];
    vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_204[2U] 
	= __Vtemp16[2U];
    vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_204[3U] 
	= (0x3ffffU & __Vtemp16[3U]);
    vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sExp 
	= (0x3ffU & ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_CIsDominant)
		      ? ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT___T_138) 
			 - ((0x3fcU & (VL_NEGATE_I((IData)(
							   (1U 
							    & ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags) 
							       >> 1U)))) 
				       << 2U)) | (IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)))
		      : ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT___T_138) 
			 - ((0x380U & (VL_NEGATE_I((IData)(
							   (1U 
							    & ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
							       >> 5U)))) 
				       << 7U)) | ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
						  << 1U)))));
    vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
	= ((0x7fffffeU & ((vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_204[1U] 
			   << 7U) | (0x7eU & (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_204[0U] 
					      >> 0x19U)))) 
	   | ((0U != (7U & ((vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_204[1U] 
			     << 9U) | (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_204[0U] 
				       >> 0x17U)))) 
	      | (0U != (((0x40U & (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
				   >> 6U)) | (((0U 
						!= 
						(3U 
						 & (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
						    >> 0xaU))) 
					       << 5U) 
					      | (((0U 
						   != 
						   (3U 
						    & (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
						       >> 8U))) 
						  << 4U) 
						 | (((0U 
						      != 
						      (3U 
						       & (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
							  >> 6U))) 
						     << 3U) 
						    | (((0U 
							 != 
							 (3U 
							  & (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
							     >> 4U))) 
							<< 2U) 
						       | (((0U 
							    != 
							    (3U 
							     & (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
								>> 2U))) 
							   << 1U) 
							  | (0U 
							     != 
							     (3U 
							      & vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)))))))) 
			& ((0x20U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
						    (0xfU 
						     & (~ 
							((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
							 >> 1U)))) 
				     << 4U)) | ((0x10U 
						 & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
								   (0xfU 
								    & (~ 
								       ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
									>> 1U)))) 
						    << 2U)) 
						| ((8U 
						    & VL_SHIFTRS_III(32,17,4, 0x10000U, 
								     (0xfU 
								      & (~ 
									 ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
									  >> 1U))))) 
						   | ((4U 
						       & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
									 (0xfU 
									  & (~ 
									     ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
									      >> 1U)))) 
							  >> 2U)) 
						      | ((2U 
							  & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
									    (0xfU 
									     & (~ 
										((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
										>> 1U)))) 
							     >> 4U)) 
							 | (1U 
							    & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
									      (0xfU 
									       & (~ 
										((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
										>> 1U)))) 
							       >> 6U)))))))))));
    __Vtemp19[0U] = 0U;
    __Vtemp19[1U] = 0U;
    __Vtemp19[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp20, __Vtemp19, (0x3fU 
						   & (~ (IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sExp))));
    __Vtemp23[0U] = 0U;
    __Vtemp23[1U] = 0U;
    __Vtemp23[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp24, __Vtemp23, (0x3fU 
						   & (~ (IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sExp))));
    vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_22 
	= ((0xffU & ((0x4000U & (__Vtemp20[2U] << 0xeU)) 
		     | (__Vtemp20[1U] >> 0x12U))) | 
	   (0xff00U & ((0x40000000U & (__Vtemp24[2U] 
				       << 0x1eU)) | 
		       (0x3fffff00U & (__Vtemp24[1U] 
				       >> 2U)))));
    vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_isZero 
	= ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros) 
	   | ((~ (IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_CIsDominant)) 
	      & (0U == (3U & (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
			      >> 0x19U)))));
    vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sign 
	= (1U & ((((((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA) 
		     & (IData)((vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN_io_a 
				>> 0x20U))) | ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfC) 
					       & (IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_sign))) 
		   | ((((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros) 
			& (2U != (IData)(vlTOPp->io_roundingMode))) 
		       & (IData)((vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN_io_a 
				  >> 0x20U))) & (IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_sign))) 
		  | (((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros) 
		      & (2U == (IData)(vlTOPp->io_roundingMode))) 
		     & ((IData)((vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN_io_a 
				 >> 0x20U)) | (IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_sign)))) 
		 | (((~ ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA) 
			 | (IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfC))) 
		     & (~ (IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros))) 
		    & ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_CIsDominant)
		        ? (IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_sign)
		        : ((0U == (3U & (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
					 >> 0x19U)))
			    ? (2U == (IData)(vlTOPp->io_roundingMode))
			    : ((IData)((vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN_io_a 
					>> 0x20U)) 
			       ^ (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U] 
				  >> 0x13U)))))));
    vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sig 
	= ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_CIsDominant)
	    ? ((0x7fffffeU & ((vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_20[1U] 
			       << 9U) | (0x1feU & (
						   vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_20[0U] 
						   >> 0x17U)))) 
	       | (((0U != (7U & ((vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_20[1U] 
				  << 0xbU) | (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_20[0U] 
					      >> 0x15U)))) 
		   | (0U != ((((0U != (7U & (IData)(
						    (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
						     >> 0x15U)))) 
			       << 6U) | (((0U != (0xfU 
						  & (IData)(
							    (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
							     >> 0x11U)))) 
					  << 5U) | 
					 (((0U != (0xfU 
						   & (IData)(
							     (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
							      >> 0xdU)))) 
					   << 4U) | 
					  (((0U != 
					     (0xfU 
					      & (IData)(
							(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
							 >> 9U)))) 
					    << 3U) 
					   | (((0U 
						!= 
						(0xfU 
						 & (IData)(
							   (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
							    >> 5U)))) 
					       << 2U) 
					      | (((0U 
						   != 
						   (0xfU 
						    & (IData)(
							      (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
							       >> 1U)))) 
						  << 1U) 
						 | (0U 
						    != 
						    (8U 
						     & ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum) 
							<< 3U))))))))) 
			     & ((0x20U & (VL_SHIFTRS_III(9,9,3, 0x100U, 
							 (7U 
							  & (~ 
							     ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
							      >> 2U)))) 
					  << 4U)) | 
				((0x10U & (VL_SHIFTRS_III(9,9,3, 0x100U, 
							  (7U 
							   & (~ 
							      ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
							       >> 2U)))) 
					   << 2U)) 
				 | ((8U & VL_SHIFTRS_III(32,9,3, 0x100U, 
							 (7U 
							  & (~ 
							     ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
							      >> 2U))))) 
				    | ((4U & (VL_SHIFTRS_III(9,9,3, 0x100U, 
							     (7U 
							      & (~ 
								 ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
								  >> 2U)))) 
					      >> 2U)) 
				       | ((2U & (VL_SHIFTRS_III(9,9,3, 0x100U, 
								(7U 
								 & (~ 
								    ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
								     >> 2U)))) 
						 >> 4U)) 
					  | (1U & (
						   VL_SHIFTRS_III(9,9,3, 0x100U, 
								  (7U 
								   & (~ 
								      ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
								       >> 2U)))) 
						   >> 6U)))))))))) 
		  | ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)
		      ? (0U != (0xffffffU & (~ ((vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U] 
						 << 0x1fU) 
						| (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[0U] 
						   >> 1U)))))
		      : (0U != (0x1ffffffU & ((vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U] 
					       << 0x1fU) 
					      | (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[0U] 
						 >> 1U)))))))
	    : vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig);
    vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_32 
	= ((0xf0fU & ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_22) 
		      >> 4U)) | (0xf0f0U & ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_22) 
					    << 4U)));
    vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
	= (1U & (((~ (IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
		  & (~ (IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_isInf))) 
		 & (~ (IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_isZero))));
    vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
	= (((2U == (IData)(vlTOPp->io_roundingMode)) 
	    & (IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sign)) 
	   | ((3U == (IData)(vlTOPp->io_roundingMode)) 
	      & (~ (IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sign))));
    vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_42 
	= ((0x3333U & ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_32) 
		       >> 2U)) | (0xccccU & ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_32) 
					     << 2U)));
    vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
	= ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_98) 
	   | (IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    __Vtemp27[0U] = 0U;
    __Vtemp27[1U] = 0U;
    __Vtemp27[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp28, __Vtemp27, (0x3fU 
						   & (~ (IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sExp))));
    __Vtemp31[0U] = 0U;
    __Vtemp31[1U] = 0U;
    __Vtemp31[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp32, __Vtemp31, (0x3fU 
						   & (~ (IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sExp))));
    __Vtemp35[0U] = 0U;
    __Vtemp35[1U] = 0U;
    __Vtemp35[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp36, __Vtemp35, (0x3fU 
						   & (~ (IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sExp))));
    __Vtemp39[0U] = 0U;
    __Vtemp39[1U] = 0U;
    __Vtemp39[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp40, __Vtemp39, (0x3fU 
						   & (~ (IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sExp))));
    __Vtemp43[0U] = 0U;
    __Vtemp43[1U] = 0U;
    __Vtemp43[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp44, __Vtemp43, (0x3fU 
						   & (~ (IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sExp))));
    __Vtemp47[0U] = 0U;
    __Vtemp47[1U] = 0U;
    __Vtemp47[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp48, __Vtemp47, (0x3fU 
						   & (~ (IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sExp))));
    __Vtemp51[0U] = 0U;
    __Vtemp51[1U] = 0U;
    __Vtemp51[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp52, __Vtemp51, (0x3fU 
						   & (~ (IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sExp))));
    __Vtemp55[0U] = 0U;
    __Vtemp55[1U] = 0U;
    __Vtemp55[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp56, __Vtemp55, (0x3fU 
						   & (~ (IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sExp))));
    __Vtemp59[0U] = 0U;
    __Vtemp59[1U] = 0U;
    __Vtemp59[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp60, __Vtemp59, (0x3fU 
						   & (~ (IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sExp))));
    vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_87 
	= (((0x100U & (IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sExp))
	     ? 0U : ((0x80U & (IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sExp))
		      ? ((0x40U & (IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sExp))
			  ? 0U : ((4U & (__Vtemp28[0U] 
					 << 2U)) | 
				  ((2U & __Vtemp32[0U]) 
				   | (1U & (__Vtemp36[0U] 
					    >> 2U)))))
		      : (7U | (0x1fffff8U & ((~ ((0x40U 
						  & (IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sExp))
						  ? 
						 (~ 
						  (((0x155540U 
						     & ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_42) 
							<< 5U)) 
						    | (0x2aaa80U 
						       & ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_42) 
							  << 7U))) 
						   | ((0x20U 
						       & (__Vtemp40[1U] 
							  >> 0x15U)) 
						      | ((0x10U 
							  & (__Vtemp44[1U] 
							     >> 0x17U)) 
							 | ((8U 
							     & (__Vtemp48[1U] 
								>> 0x19U)) 
							    | ((4U 
								& (__Vtemp52[1U] 
								   >> 0x1bU)) 
							       | ((2U 
								   & (__Vtemp56[1U] 
								      >> 0x1dU)) 
								  | (1U 
								     & (__Vtemp60[1U] 
									>> 0x1fU)))))))))
						  : 0U)) 
					     << 3U))))) 
	   | (1U & (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sig 
		    >> 0x1aU)));
    vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_95 
	= (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sig 
	   & (1U | (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_87 
		    << 1U)));
    vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_92 
	= ((~ (1U | (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_87 
		     << 1U))) & (3U | (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_87 
				       << 2U)));
    vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_93 
	= (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sig 
	   & vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_92);
    vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_97 
	= ((0U != vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_93) 
	   | (0U != vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_95));
    vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_119 
	= (0x3ffffffU & ((((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_98) 
			   & (0U != vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_93)) 
			  | ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
			     & (IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_97)))
			  ? (((IData)(1U) + (0x1ffffffU 
					     & ((vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sig 
						 >> 2U) 
						| (0x3fffffffU 
						   & vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_87)))) 
			     & (~ ((((0U == (IData)(vlTOPp->io_roundingMode)) 
				     & (0U != vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_93)) 
				    & (0U == vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_95))
				    ? (1U | (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_87 
					     << 1U))
				    : 0U))) : ((0x1ffffffU 
						& ((vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sig 
						    & (~ 
						       (3U 
							| (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_87 
							   << 2U)))) 
						   >> 2U)) 
					       | (((6U 
						    == (IData)(vlTOPp->io_roundingMode)) 
						   & (IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_97))
						   ? 
						  (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_92 
						   >> 1U)
						   : 0U))));
    vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_122 
	= (0x7ffU & (VL_EXTENDS_II(11,10, (IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sExp)) 
		     + VL_EXTENDS_II(11,10, (3U & (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_119 
						   >> 0x18U)))));
    vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut 
	= (((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
	    & VL_GTS_III(1,11,11, 0x6bU, (IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_122))) 
	   & ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
	      | (6U == (IData)(vlTOPp->io_roundingMode))));
    vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow 
	= ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
	   & VL_LTES_III(1,4,4, 3U, (0xfU & ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_122) 
					     >> 7U))));
    vlTOPp->io_actual_exceptionFlags = ((((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_invalidExc) 
					  << 4U) | 
					 ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
					  << 2U)) | 
					((((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
					   & (VL_GTS_III(1,11,11, 0x6bU, (IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_122)) 
					      | ((((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_97) 
						   & VL_GTES_III(1,2,2, 0U, 
								 (3U 
								  & ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sExp) 
								     >> 8U)))) 
						  & ((0x4000000U 
						      & vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sig)
						      ? 
						     (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_87 
						      >> 1U)
						      : vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_87)) 
						 & (~ 
						    (((((IData)(vlTOPp->io_detectTininess) 
							& (~ 
							   ((0x4000000U 
							     & vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sig)
							     ? 
							    (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_87 
							     >> 2U)
							     : 
							    (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_87 
							     >> 1U)))) 
						       & ((0x4000000U 
							   & vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sig)
							   ? 
							  (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_119 
							   >> 0x19U)
							   : 
							  (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_119 
							   >> 0x18U))) 
						      & (0U 
							 != vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_93)) 
						     & (((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_98) 
							 & ((0x4000000U 
							     & vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sig)
							     ? 
							    (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sig 
							     >> 2U)
							     : 
							    (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sig 
							     >> 1U))) 
							| ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
							   & (((vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sig 
								>> 0x1aU) 
							       & (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sig 
								  >> 2U)) 
							      | (0U 
								 != 
								 (3U 
								  & vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sig)))))))))) 
					  << 1U) | 
					 ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
					  | ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
					     & (VL_GTS_III(1,11,11, 0x6bU, (IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_122)) 
						| (IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_97))))));
    vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut 
	= ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
	   & (~ (IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
	= ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_isInf) 
	   | ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
	      & (IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->io_actual_out = (((QData)((IData)(((~ (IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
					       & (IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sign)))) 
			      << 0x20U) | (QData)((IData)(
							  ((0xff800000U 
							    & ((((((((((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_122) 
								       & (~ 
									  (((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_isZero) 
									    | VL_GTS_III(1,11,11, 0x6bU, (IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_122)))
									    ? 0x1c0U
									    : 0U))) 
								      & (~ 
									 ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
									   ? 0x194U
									   : 0U))) 
								     & (~ 
									((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
									  ? 0x80U
									  : 0U))) 
								    & (~ 
								       ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
									 ? 0x40U
									 : 0U))) 
								   | ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
								       ? 0x6bU
								       : 0U)) 
								  | ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
								      ? 0x17fU
								      : 0U)) 
								 | ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
								     ? 0x180U
								     : 0U)) 
								| ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
								    ? 0x1c0U
								    : 0U)) 
							       << 0x17U)) 
							   | (0x7fffffU 
							      & (((((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
								    | (IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_isZero)) 
								   | VL_GTS_III(1,11,11, 0x6bU, (IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_122)))
								   ? 
								  ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
								    ? 0x400000U
								    : 0U)
								   : 
								  ((0x4000000U 
								    & vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sig)
								    ? 
								   (vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_119 
								    >> 1U)
								    : vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_119)) 
								 | ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
								     ? 0x7fffffU
								     : 0U)))))));
    vlTOPp->ValExec_MulAddRecF32_add__DOT___T_250 = 
	((0xfU & (IData)((vlTOPp->io_actual_out >> 0x1dU))) 
	 == (0xfU & (IData)((vlTOPp->io_expected_recOut 
			     >> 0x1dU))));
    vlTOPp->io_pass = ((((0U == (7U & (IData)((vlTOPp->io_actual_out 
					       >> 0x1dU)))) 
			 | (7U == (7U & (IData)((vlTOPp->io_actual_out 
						 >> 0x1dU)))))
			 ? ((IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT___T_250) 
			    & ((0x7fffffU & (IData)(vlTOPp->io_actual_out)) 
			       == (0x7fffffU & (IData)(vlTOPp->io_expected_recOut))))
			 : ((6U == (7U & (IData)((vlTOPp->io_actual_out 
						  >> 0x1dU))))
			     ? (IData)(vlTOPp->ValExec_MulAddRecF32_add__DOT___T_250)
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
    io_a = VL_RAND_RESET_I(32);
    io_b = VL_RAND_RESET_I(32);
    io_roundingMode = VL_RAND_RESET_I(3);
    io_detectTininess = VL_RAND_RESET_I(1);
    io_expected_out = VL_RAND_RESET_I(32);
    io_expected_exceptionFlags = VL_RAND_RESET_I(5);
    io_expected_recOut = VL_RAND_RESET_Q(33);
    io_actual_out = VL_RAND_RESET_Q(33);
    io_actual_exceptionFlags = VL_RAND_RESET_I(5);
    io_check = VL_RAND_RESET_I(1);
    io_pass = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF32_add__DOT__mulAddRecFN_io_a = VL_RAND_RESET_Q(33);
    ValExec_MulAddRecF32_add__DOT__mulAddRecFN_io_c = VL_RAND_RESET_Q(33);
    ValExec_MulAddRecF32_add__DOT___T_49 = VL_RAND_RESET_I(5);
    ValExec_MulAddRecF32_add__DOT___T_58 = VL_RAND_RESET_I(9);
    ValExec_MulAddRecF32_add__DOT___T_59 = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF32_add__DOT___T_130 = VL_RAND_RESET_I(5);
    ValExec_MulAddRecF32_add__DOT___T_139 = VL_RAND_RESET_I(9);
    ValExec_MulAddRecF32_add__DOT___T_140 = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF32_add__DOT___T_211 = VL_RAND_RESET_I(5);
    ValExec_MulAddRecF32_add__DOT___T_220 = VL_RAND_RESET_I(9);
    ValExec_MulAddRecF32_add__DOT___T_221 = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF32_add__DOT___T_250 = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isNaNAOrB = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfC = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_CIsDominant = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult = VL_RAND_RESET_Q(49);
    ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_invalidExc = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_isInf = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_isZero = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sign = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sExp = VL_RAND_RESET_I(10);
    ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sig = VL_RAND_RESET_I(27);
    ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_sig = VL_RAND_RESET_I(25);
    ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig = VL_RAND_RESET_I(25);
    ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__sNatCAlignDist = VL_RAND_RESET_I(11);
    ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT___T_61 = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist = VL_RAND_RESET_I(7);
    VL_RAND_RESET_W(78,ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC);
    ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT___T_111 = VL_RAND_RESET_I(7);
    VL_RAND_RESET_W(76,ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC);
    ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT___T_138 = VL_RAND_RESET_I(11);
    ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_sign = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(75,ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum);
    ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum = VL_RAND_RESET_Q(50);
    VL_RAND_RESET_W(81,ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_20);
    ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum = VL_RAND_RESET_Q(51);
    ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum = VL_RAND_RESET_I(26);
    ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2 = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(114,ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_204);
    ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig = VL_RAND_RESET_I(27);
    ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_22 = VL_RAND_RESET_I(16);
    ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_32 = VL_RAND_RESET_I(16);
    ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_42 = VL_RAND_RESET_I(16);
    ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_87 = VL_RAND_RESET_I(25);
    ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_92 = VL_RAND_RESET_I(27);
    ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_93 = VL_RAND_RESET_I(27);
    ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_95 = VL_RAND_RESET_I(27);
    ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_97 = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_98 = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_119 = VL_RAND_RESET_I(26);
    ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_122 = VL_RAND_RESET_I(11);
    ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF32_add__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut = VL_RAND_RESET_I(1);
}
