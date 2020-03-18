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
    // INITIAL at test-MulAddRecF16_mul/ValExec_MulAddRecF16_mul.v:1147
    vlTOPp->io_check = 1U;
}

VL_INLINE_OPT void dut::_combo__TOP__2(dut__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    dut::_combo__TOP__2\n"); );
    dut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp2,95,0,3);
    VL_SIGW(__Vtemp3,95,0,3);
    VL_SIGW(__Vtemp6,95,0,3);
    VL_SIGW(__Vtemp7,95,0,3);
    VL_SIGW(__Vtemp10,95,0,3);
    VL_SIGW(__Vtemp11,95,0,3);
    VL_SIGW(__Vtemp14,95,0,3);
    VL_SIGW(__Vtemp15,95,0,3);
    VL_SIGW(__Vtemp18,95,0,3);
    VL_SIGW(__Vtemp19,95,0,3);
    VL_SIGW(__Vtemp22,95,0,3);
    VL_SIGW(__Vtemp23,95,0,3);
    // Body
    vlTOPp->ValExec_MulAddRecF16_mul__DOT___T_146 = 
	((0U == (0x1fU & ((IData)(vlTOPp->io_expected_out) 
			  >> 0xaU))) & (0U == (0x3ffU 
					       & (IData)(vlTOPp->io_expected_out))));
    vlTOPp->ValExec_MulAddRecF16_mul__DOT___T_136 = 
	((0x200U & (IData)(vlTOPp->io_expected_out))
	  ? 0U : ((0x100U & (IData)(vlTOPp->io_expected_out))
		   ? 1U : ((0x80U & (IData)(vlTOPp->io_expected_out))
			    ? 2U : ((0x40U & (IData)(vlTOPp->io_expected_out))
				     ? 3U : ((0x20U 
					      & (IData)(vlTOPp->io_expected_out))
					      ? 4U : 
					     ((0x10U 
					       & (IData)(vlTOPp->io_expected_out))
					       ? 5U
					       : ((8U 
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
    vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_59 
	= ((0U == (IData)(vlTOPp->io_roundingMode)) 
	   | (4U == (IData)(vlTOPp->io_roundingMode)));
    vlTOPp->ValExec_MulAddRecF16_mul__DOT___T_110 = 
	((IData)(vlTOPp->io_a) ^ (IData)(vlTOPp->io_b));
    vlTOPp->ValExec_MulAddRecF16_mul__DOT___T_33 = 
	((0U == (0x1fU & ((IData)(vlTOPp->io_a) >> 0xaU))) 
	 & (0U == (0x3ffU & (IData)(vlTOPp->io_a))));
    vlTOPp->ValExec_MulAddRecF16_mul__DOT___T_88 = 
	((0U == (0x1fU & ((IData)(vlTOPp->io_b) >> 0xaU))) 
	 & (0U == (0x3ffU & (IData)(vlTOPp->io_b))));
    vlTOPp->ValExec_MulAddRecF16_mul__DOT___T_23 = 
	((0x200U & (IData)(vlTOPp->io_a)) ? 0U : ((0x100U 
						   & (IData)(vlTOPp->io_a))
						   ? 1U
						   : 
						  ((0x80U 
						    & (IData)(vlTOPp->io_a))
						    ? 2U
						    : 
						   ((0x40U 
						     & (IData)(vlTOPp->io_a))
						     ? 3U
						     : 
						    ((0x20U 
						      & (IData)(vlTOPp->io_a))
						      ? 4U
						      : 
						     ((0x10U 
						       & (IData)(vlTOPp->io_a))
						       ? 5U
						       : 
						      ((8U 
							& (IData)(vlTOPp->io_a))
						        ? 6U
						        : 
						       ((4U 
							 & (IData)(vlTOPp->io_a))
							 ? 7U
							 : 
							((2U 
							  & (IData)(vlTOPp->io_a))
							  ? 8U
							  : 9U)))))))));
    vlTOPp->ValExec_MulAddRecF16_mul__DOT___T_78 = 
	((0x200U & (IData)(vlTOPp->io_b)) ? 0U : ((0x100U 
						   & (IData)(vlTOPp->io_b))
						   ? 1U
						   : 
						  ((0x80U 
						    & (IData)(vlTOPp->io_b))
						    ? 2U
						    : 
						   ((0x40U 
						     & (IData)(vlTOPp->io_b))
						     ? 3U
						     : 
						    ((0x20U 
						      & (IData)(vlTOPp->io_b))
						      ? 4U
						      : 
						     ((0x10U 
						       & (IData)(vlTOPp->io_b))
						       ? 5U
						       : 
						      ((8U 
							& (IData)(vlTOPp->io_b))
						        ? 6U
						        : 
						       ((4U 
							 & (IData)(vlTOPp->io_b))
							 ? 7U
							 : 
							((2U 
							  & (IData)(vlTOPp->io_b))
							  ? 8U
							  : 9U)))))))));
    vlTOPp->ValExec_MulAddRecF16_mul__DOT___T_145 = 
	(0x3fU & (((0U == (0x1fU & ((IData)(vlTOPp->io_expected_out) 
				    >> 0xaU))) ? (~ (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT___T_136))
		    : (0x1fU & ((IData)(vlTOPp->io_expected_out) 
				>> 0xaU))) + (0x10U 
					      | ((0U 
						  == 
						  (0x1fU 
						   & ((IData)(vlTOPp->io_expected_out) 
						      >> 0xaU)))
						  ? 2U
						  : 1U))));
    vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfC = 0U;
    vlTOPp->ValExec_MulAddRecF16_mul__DOT___T_32 = 
	(0x3fU & (((0U == (0x1fU & ((IData)(vlTOPp->io_a) 
				    >> 0xaU))) ? (~ (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT___T_23))
		    : (0x1fU & ((IData)(vlTOPp->io_a) 
				>> 0xaU))) + (0x10U 
					      | ((0U 
						  == 
						  (0x1fU 
						   & ((IData)(vlTOPp->io_a) 
						      >> 0xaU)))
						  ? 2U
						  : 1U))));
    vlTOPp->ValExec_MulAddRecF16_mul__DOT___T_87 = 
	(0x3fU & (((0U == (0x1fU & ((IData)(vlTOPp->io_b) 
				    >> 0xaU))) ? (~ (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT___T_78))
		    : (0x1fU & ((IData)(vlTOPp->io_b) 
				>> 0xaU))) + (0x10U 
					      | ((0U 
						  == 
						  (0x1fU 
						   & ((IData)(vlTOPp->io_b) 
						      >> 0xaU)))
						  ? 2U
						  : 1U))));
    vlTOPp->io_expected_recOut = (((0x10000U & ((IData)(vlTOPp->io_expected_out) 
						<< 1U)) 
				   | (0xe000U & ((((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT___T_146)
						    ? 0U
						    : 
						   ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT___T_145) 
						    >> 3U)) 
						  | ((3U 
						      == 
						      (3U 
						       & ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT___T_145) 
							  >> 4U))) 
						     & (0U 
							!= 
							(0x3ffU 
							 & (IData)(vlTOPp->io_expected_out))))) 
						 << 0xdU))) 
				  | ((0x1c00U & ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT___T_145) 
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
						       << (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT___T_136)) 
						      << 1U))
						   : (IData)(vlTOPp->io_expected_out)))));
    vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN_io_a 
	= (((0x10000U & ((IData)(vlTOPp->io_a) << 1U)) 
	    | (0xe000U & ((((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT___T_33)
			     ? 0U : ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT___T_32) 
				     >> 3U)) | ((3U 
						 == 
						 (3U 
						  & ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT___T_32) 
						     >> 4U))) 
						& (0U 
						   != 
						   (0x3ffU 
						    & (IData)(vlTOPp->io_a))))) 
			  << 0xdU))) | ((0x1c00U & 
					 ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT___T_32) 
					  << 0xaU)) 
					| (0x3ffU & 
					   ((0U == 
					     (0x1fU 
					      & ((IData)(vlTOPp->io_a) 
						 >> 0xaU)))
					     ? (0x3feU 
						& (((0x3ffU 
						     & (IData)(vlTOPp->io_a)) 
						    << (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT___T_23)) 
						   << 1U))
					     : (IData)(vlTOPp->io_a)))));
    vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN_io_b 
	= (((0x10000U & ((IData)(vlTOPp->io_b) << 1U)) 
	    | (0xe000U & ((((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT___T_88)
			     ? 0U : ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT___T_87) 
				     >> 3U)) | ((3U 
						 == 
						 (3U 
						  & ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT___T_87) 
						     >> 4U))) 
						& (0U 
						   != 
						   (0x3ffU 
						    & (IData)(vlTOPp->io_b))))) 
			  << 0xdU))) | ((0x1c00U & 
					 ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT___T_87) 
					  << 0xaU)) 
					| (0x3ffU & 
					   ((0U == 
					     (0x1fU 
					      & ((IData)(vlTOPp->io_b) 
						 >> 0xaU)))
					     ? (0x3feU 
						& (((0x3ffU 
						     & (IData)(vlTOPp->io_b)) 
						    << (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT___T_78)) 
						   << 1U))
					     : (IData)(vlTOPp->io_b)))));
    vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN 
	= ((3U == (3U & (vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN_io_a 
			 >> 0xeU))) & (vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN_io_a 
				       >> 0xdU));
    vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA 
	= ((3U == (3U & (vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN_io_a 
			 >> 0xeU))) & (~ (vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN_io_a 
					  >> 0xdU)));
    vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_sig 
	= (((0U != (7U & (vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN_io_a 
			  >> 0xdU))) << 0xaU) | (0x3ffU 
						 & vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN_io_a));
    vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros 
	= (1U & ((0U == (7U & (vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN_io_a 
			       >> 0xdU))) | (0U == 
					     (7U & 
					      (vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN_io_b 
					       >> 0xdU)))));
    vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_isNaN 
	= ((3U == (3U & (vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN_io_b 
			 >> 0xeU))) & (vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN_io_b 
				       >> 0xdU));
    vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfB 
	= ((3U == (3U & (vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN_io_b 
			 >> 0xeU))) & (~ (vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN_io_b 
					  >> 0xdU)));
    vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_sig 
	= (((0U != (7U & (vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN_io_b 
			  >> 0xdU))) << 0xaU) | (0x3ffU 
						 & vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN_io_b));
    vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__signProd 
	= (1U & ((vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN_io_a 
		  ^ vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN_io_b) 
		 >> 0x10U));
    vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT___T_50 
	= (0xffU & (VL_EXTENDS_II(8,7, (0x3fU & (vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN_io_a 
						 >> 0xaU))) 
		    + VL_EXTENDS_II(8,7, (0x3fU & (vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN_io_b 
						   >> 0xaU)))));
    vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isNaNAOrB 
	= ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN) 
	   | (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_isNaN));
    vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd 
	= ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA) 
	   | (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfB));
    vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags 
	= (1U & ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__signProd) 
		 ^ (1U & ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT___T_110) 
			  >> 0xfU))));
    vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__sNatCAlignDist 
	= (0xffU & ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT___T_50) 
		    - (IData)(0x12U)));
    vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_isInf 
	= ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd) 
	   | (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfC));
    vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_invalidExc 
	= ((((((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN) 
	       & (~ ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_sig) 
		     >> 9U))) | ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_isNaN) 
				 & (~ ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_sig) 
				       >> 9U)))) | 
	     ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA) 
	      & (0U == (7U & (vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN_io_b 
			      >> 0xdU))))) | ((0U == 
					       (7U 
						& (vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN_io_a 
						   >> 0xdU))) 
					      & (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfB))) 
	   | ((((~ (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isNaNAOrB)) 
		& (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd)) 
	       & (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfC)) 
	      & (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)));
    vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_sign 
	= ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__signProd) 
	   ^ (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags));
    vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign 
	= (((0U == (7U & (vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN_io_a 
			  >> 0xdU))) | (0U == (7U & 
					       (vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN_io_b 
						>> 0xdU)))) 
	   | VL_GTS_III(1,8,8, 0U, (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__sNatCAlignDist)));
    vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
	= ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_invalidExc) 
	   | (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isNaNAOrB));
    vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT___T_61 
	= ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign) 
	   | (0xbU >= (0x7fU & (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__sNatCAlignDist))));
    vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist 
	= (0x3fU & ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign)
		     ? 0U : ((0x23U > (0x7fU & (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__sNatCAlignDist)))
			      ? (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__sNatCAlignDist)
			      : 0x23U)));
    vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT___T_114 
	= (0xffU & (((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT___T_50) 
		     - (IData)(0x12U)) - (IData)(0xbU)));
    vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_CIsDominant = 0U;
    vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT___T_87 = 0U;
    vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC 
	= (VL_ULL(0x7fffffffff) & VL_SHIFTRS_QQI(39,39,6, 
						 (((QData)((IData)(
								   (0xfffU 
								    & ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)
								        ? 0xffffffffU
								        : 0U)))) 
						   << 0x1bU) 
						  | (QData)((IData)(
								    ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)
								      ? 0x7ffffffU
								      : 0U)))), (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist)));
    vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC 
	= ((VL_ULL(0x1ffffffffe) & (vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC 
				    >> 2U)) | (QData)((IData)(
							      ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)
							        ? 
							       ((7U 
								 == 
								 (7U 
								  & (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC))) 
								& (0U 
								   == (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT___T_87)))
							        : 
							       ((0U 
								 != 
								 (7U 
								  & (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC))) 
								| (0U 
								   != (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT___T_87)))))));
    vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult 
	= (0x7fffffU & ((0x3fffffU & ((0x7ffU & (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_sig)) 
				      * (0x7ffU & (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_sig)))) 
			+ (0x3fffffU & (IData)((vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC 
						>> 1U)))));
    vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum 
	= (((QData)((IData)((0x1fffU & ((0x400000U 
					 & vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult)
					 ? ((IData)(1U) 
					    + (IData)(
						      (vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC 
						       >> 0x17U)))
					 : (IData)(
						   (vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC 
						    >> 0x17U)))))) 
	    << 0x17U) | (QData)((IData)(((0x7ffffeU 
					  & (vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult 
					     << 1U)) 
					 | (1U & (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC))))));
    vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
	= (0xffffffU & ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)
			 ? (~ (IData)((vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum 
				       >> 0xcU))) : 
			((0x600000U & ((IData)((vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC 
						>> 0x22U)) 
				       << 0x15U)) | 
			 (0x1fffffU & (IData)((vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum 
					       >> 0xdU))))));
    vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
	= (0x1ffffffU & ((1U & (IData)((vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum 
					>> 0x19U)))
			  ? (~ (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum))
			  : ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum) 
			     + (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags))));
    vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_20 
	= (VL_ULL(0x7fffffffff) & ((QData)((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum)) 
				   << (0xfU & (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist))));
    vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
	= ((0x1000U & (vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
		       >> 0xcU)) | (((0U != (3U & (vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
						   >> 0x16U))) 
				     << 0xbU) | (((0U 
						   != 
						   (3U 
						    & (vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
						       >> 0x14U))) 
						  << 0xaU) 
						 | (((0U 
						      != 
						      (3U 
						       & (vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
							  >> 0x12U))) 
						     << 9U) 
						    | (((0U 
							 != 
							 (3U 
							  & (vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
							     >> 0x10U))) 
							<< 8U) 
						       | (((0U 
							    != 
							    (3U 
							     & (vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
								>> 0xeU))) 
							   << 7U) 
							  | (((0U 
							       != 
							       (3U 
								& (vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
								   >> 0xcU))) 
							      << 6U) 
							     | (((0U 
								  != 
								  (3U 
								   & (vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
								      >> 0xaU))) 
								 << 5U) 
								| (((0U 
								     != 
								     (3U 
								      & (vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
									 >> 8U))) 
								    << 4U) 
								   | (((0U 
									!= 
									(3U 
									 & (vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
									    >> 6U))) 
								       << 3U) 
								      | (((0U 
									   != 
									   (3U 
									    & (vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
									       >> 4U))) 
									  << 2U) 
									 | (((0U 
									      != 
									      (3U 
									       & (vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
										>> 2U))) 
									     << 1U) 
									    | (0U 
									       != 
									       (3U 
										& vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum))))))))))))));
    vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2 
	= ((0x1000U & (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum))
	    ? 0U : ((0x800U & (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum))
		     ? 1U : ((0x400U & (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum))
			      ? 2U : ((0x200U & (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum))
				       ? 3U : ((0x100U 
						& (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum))
					        ? 4U
					        : (
						   (0x80U 
						    & (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum))
						    ? 5U
						    : 
						   ((0x40U 
						     & (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum))
						     ? 6U
						     : 
						    ((0x20U 
						      & (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum))
						      ? 7U
						      : 
						     ((0x10U 
						       & (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum))
						       ? 8U
						       : 
						      ((8U 
							& (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum))
						        ? 9U
						        : 
						       ((4U 
							 & (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum))
							 ? 0xaU
							 : 
							((2U 
							  & (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum))
							  ? 0xbU
							  : 0xcU))))))))))));
    vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sExp 
	= (0x7fU & ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_CIsDominant)
		     ? ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT___T_114) 
			- ((0x7cU & (VL_NEGATE_I((IData)(
							 (1U 
							  & ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags) 
							     >> 1U)))) 
				     << 2U)) | (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)))
		     : ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT___T_114) 
			- ((0x40U & ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
				     << 2U)) | ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
						<< 1U)))));
    vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_115 
	= (VL_ULL(0xffffffffffffff) & ((QData)((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum)) 
				       << ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
					   << 1U)));
    __Vtemp2[0U] = 0U;
    __Vtemp2[1U] = 0U;
    __Vtemp2[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp3, __Vtemp2, (0x3fU 
						 & (~ (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sExp))));
    __Vtemp6[0U] = 0U;
    __Vtemp6[1U] = 0U;
    __Vtemp6[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp7, __Vtemp6, (0x3fU 
						 & (~ (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sExp))));
    vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_16 
	= ((0xfU & ((__Vtemp3[1U] << 0x15U) | (__Vtemp3[0U] 
					       >> 0xbU))) 
	   | (0xf0U & ((__Vtemp7[1U] << 0x1dU) | (0x1ffffff0U 
						  & (__Vtemp7[0U] 
						     >> 3U)))));
    vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
	= ((0x3ffeU & ((IData)((vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_115 
				>> 0xdU)) << 1U)) | 
	   ((0U != (7U & (IData)((vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_115 
				  >> 0xaU)))) | (0U 
						 != 
						 (((8U 
						    & ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
						       >> 2U)) 
						   | (((0U 
							!= 
							(3U 
							 & ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
							    >> 3U))) 
						       << 2U) 
						      | (((0U 
							   != 
							   (3U 
							    & ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
							       >> 1U))) 
							  << 1U) 
							 | (0U 
							    != 
							    (2U 
							     & ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum) 
								<< 1U)))))) 
						  & ((4U 
						      & (VL_SHIFTRS_III(9,9,3, 0x100U, 
									(7U 
									 & (~ 
									    ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
									     >> 1U)))) 
							 << 1U)) 
						     | ((2U 
							 & (VL_SHIFTRS_III(9,9,3, 0x100U, 
									   (7U 
									    & (~ 
									       ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
										>> 1U)))) 
							    >> 1U)) 
							| (1U 
							   & (VL_SHIFTRS_III(9,9,3, 0x100U, 
									     (7U 
									      & (~ 
										((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
										>> 1U)))) 
							      >> 3U))))))));
    vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_26 
	= ((0x33U & ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_16) 
		     >> 2U)) | (0xccU & ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_16) 
					 << 2U)));
    vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_isZero 
	= ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros) 
	   | ((~ (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_CIsDominant)) 
	      & (0U == (3U & ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig) 
			      >> 0xcU)))));
    vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sign 
	= (1U & ((((((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd) 
		     & (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__signProd)) 
		    | ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfC) 
		       & (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_sign))) 
		   | ((((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros) 
			& (2U != (IData)(vlTOPp->io_roundingMode))) 
		       & (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__signProd)) 
		      & (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_sign))) 
		  | (((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros) 
		      & (2U == (IData)(vlTOPp->io_roundingMode))) 
		     & ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__signProd) 
			| (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_sign)))) 
		 | (((~ ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd) 
			 | (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfC))) 
		     & (~ (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros))) 
		    & ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_CIsDominant)
		        ? (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_sign)
		        : ((0U == (3U & ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig) 
					 >> 0xcU)))
			    ? (2U == (IData)(vlTOPp->io_roundingMode))
			    : ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__signProd) 
			       ^ (IData)((vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum 
					  >> 0x19U))))))));
    vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sig 
	= ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_CIsDominant)
	    ? ((0x3ffeU & ((IData)((vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_20 
				    >> 0xbU)) << 1U)) 
	       | (((0U != (7U & (IData)((vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_20 
					 >> 8U)))) 
		   | (0U != ((((0U != (7U & (vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
					     >> 8U))) 
			       << 2U) | (((0U != (0xfU 
						  & (vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
						     >> 4U))) 
					  << 1U) | 
					 (0U != (0xfU 
						 & vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum)))) 
			     & ((2U & VL_SHIFTRS_III(32,5,2, 0x10U, 
						     (3U 
						      & (~ 
							 ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
							  >> 2U))))) 
				| (1U & (VL_SHIFTRS_III(5,5,2, 0x10U, 
							(3U 
							 & (~ 
							    ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
							     >> 2U)))) 
					 >> 2U)))))) 
		  | ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)
		      ? (0U != (0x7ffU & (~ (IData)(
						    (vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum 
						     >> 1U)))))
		      : (0U != (0xfffU & (IData)((vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum 
						  >> 1U)))))))
	    : (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig));
    vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
	= (1U & (((~ (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
		  & (~ (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_isInf))) 
		 & (~ (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_isZero))));
    vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
	= (((2U == (IData)(vlTOPp->io_roundingMode)) 
	    & (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sign)) 
	   | ((3U == (IData)(vlTOPp->io_roundingMode)) 
	      & (~ (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sign))));
    __Vtemp10[0U] = 0U;
    __Vtemp10[1U] = 0U;
    __Vtemp10[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp11, __Vtemp10, (0x3fU 
						   & (~ (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sExp))));
    __Vtemp14[0U] = 0U;
    __Vtemp14[1U] = 0U;
    __Vtemp14[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp15, __Vtemp14, (0x3fU 
						   & (~ (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sExp))));
    __Vtemp18[0U] = 0U;
    __Vtemp18[1U] = 0U;
    __Vtemp18[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp19, __Vtemp18, (0x3fU 
						   & (~ (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sExp))));
    __Vtemp22[0U] = 0U;
    __Vtemp22[1U] = 0U;
    __Vtemp22[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp23, __Vtemp22, (0x3fU 
						   & (~ (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sExp))));
    vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_48 
	= ((((0x550U & ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_26) 
			<< 3U)) | (0xaa0U & ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_26) 
					     << 5U))) 
	    | ((8U & (__Vtemp11[0U] >> 0xcU)) | ((4U 
						  & (__Vtemp15[0U] 
						     >> 0xeU)) 
						 | ((2U 
						     & (__Vtemp19[0U] 
							>> 0x10U)) 
						    | (1U 
						       & (__Vtemp23[0U] 
							  >> 0x12U)))))) 
	   | (1U & ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sig) 
		    >> 0xdU)));
    vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
	= ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_59) 
	   | (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_56 
	= ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sig) 
	   & (1U | ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_48) 
		    << 1U)));
    vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_53 
	= ((~ (1U | ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_48) 
		     << 1U))) & (3U | ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_48) 
				       << 2U)));
    vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_54 
	= ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sig) 
	   & (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_53));
    vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_58 
	= ((0U != (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_54)) 
	   | (0U != (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_56)));
    vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_80 
	= (0x1fffU & ((((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_59) 
			& (0U != (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_54))) 
		       | ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
			  & (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_58)))
		       ? (((IData)(1U) + (0xfffU & 
					  (((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sig) 
					    >> 2U) 
					   | (0x3fffffffU 
					      & (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_48))))) 
			  & (~ ((((0U == (IData)(vlTOPp->io_roundingMode)) 
				  & (0U != (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_54))) 
				 & (0U == (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_56)))
				 ? (1U | ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_48) 
					  << 1U)) : 0U)))
		       : ((0xfffU & (((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sig) 
				      & (~ (3U | ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_48) 
						  << 2U)))) 
				     >> 2U)) | (((6U 
						  == (IData)(vlTOPp->io_roundingMode)) 
						 & (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_58))
						 ? 
						((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_53) 
						 >> 1U)
						 : 0U))));
    vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_83 
	= (0xffU & (VL_EXTENDS_II(8,7, (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sExp)) 
		    + VL_EXTENDS_II(8,7, (3U & ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_80) 
						>> 0xbU)))));
    vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut 
	= (((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
	    & VL_GTS_III(1,8,8, 8U, (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_83))) 
	   & ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
	      | (6U == (IData)(vlTOPp->io_roundingMode))));
    vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow 
	= ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
	   & VL_LTES_III(1,4,4, 3U, (0xfU & ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_83) 
					     >> 4U))));
    vlTOPp->io_actual_exceptionFlags = ((((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_invalidExc) 
					  << 4U) | 
					 ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
					  << 2U)) | 
					((((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
					   & (VL_GTS_III(1,8,8, 8U, (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_83)) 
					      | ((((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_58) 
						   & VL_GTES_III(1,2,2, 0U, 
								 (3U 
								  & ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sExp) 
								     >> 5U)))) 
						  & ((0x2000U 
						      & (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sig))
						      ? 
						     ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_48) 
						      >> 1U)
						      : (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_48))) 
						 & (~ 
						    (((((IData)(vlTOPp->io_detectTininess) 
							& (~ 
							   ((0x2000U 
							     & (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sig))
							     ? 
							    ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_48) 
							     >> 2U)
							     : 
							    ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_48) 
							     >> 1U)))) 
						       & ((0x2000U 
							   & (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sig))
							   ? 
							  ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_80) 
							   >> 0xcU)
							   : 
							  ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_80) 
							   >> 0xbU))) 
						      & (0U 
							 != (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_54))) 
						     & (((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_59) 
							 & ((0x2000U 
							     & (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sig))
							     ? 
							    ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sig) 
							     >> 2U)
							     : 
							    ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sig) 
							     >> 1U))) 
							| ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
							   & ((((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sig) 
								>> 0xdU) 
							       & ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sig) 
								  >> 2U)) 
							      | (0U 
								 != 
								 (3U 
								  & (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sig))))))))))) 
					  << 1U) | 
					 ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
					  | ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
					     & (VL_GTS_III(1,8,8, 8U, (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_83)) 
						| (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_58))))));
    vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut 
	= ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
	   & (~ (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
	= ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_isInf) 
	   | ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
	      & (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->io_actual_out = ((((~ (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
			       & (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sign)) 
			      << 0x10U) | ((0xfc00U 
					    & ((((((((((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_83) 
						       & (~ 
							  (((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_isZero) 
							    | VL_GTS_III(1,8,8, 8U, (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_83)))
							    ? 0x38U
							    : 0U))) 
						      & (~ 
							 ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
							   ? 0x37U
							   : 0U))) 
						     & (~ 
							((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
							  ? 0x10U
							  : 0U))) 
						    & (~ 
						       ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
							 ? 8U
							 : 0U))) 
						   | ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
						       ? 8U
						       : 0U)) 
						  | ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
						      ? 0x2fU
						      : 0U)) 
						 | ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
						     ? 0x30U
						     : 0U)) 
						| ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
						    ? 0x38U
						    : 0U)) 
					       << 0xaU)) 
					   | (0x3ffU 
					      & (((((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
						    | (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_isZero)) 
						   | VL_GTS_III(1,8,8, 8U, (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_83)))
						   ? 
						  ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
						    ? 0x200U
						    : 0U)
						   : 
						  ((0x2000U 
						    & (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sig))
						    ? 
						   ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_80) 
						    >> 1U)
						    : (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_80))) 
						 | ((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
						     ? 0x3ffU
						     : 0U)))));
    vlTOPp->ValExec_MulAddRecF16_mul__DOT___T_175 = 
	((0xfU & (vlTOPp->io_actual_out >> 0xdU)) == 
	 (0xfU & (vlTOPp->io_expected_recOut >> 0xdU)));
    vlTOPp->io_pass = ((((0U == (7U & (vlTOPp->io_actual_out 
				       >> 0xdU))) | 
			 (7U == (7U & (vlTOPp->io_actual_out 
				       >> 0xdU)))) ? 
			((IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT___T_175) 
			 & ((0x3ffU & vlTOPp->io_actual_out) 
			    == (0x3ffU & vlTOPp->io_expected_recOut)))
			 : ((6U == (7U & (vlTOPp->io_actual_out 
					  >> 0xdU)))
			     ? (IData)(vlTOPp->ValExec_MulAddRecF16_mul__DOT___T_175)
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
    io_a = VL_RAND_RESET_I(16);
    io_b = VL_RAND_RESET_I(16);
    io_roundingMode = VL_RAND_RESET_I(3);
    io_detectTininess = VL_RAND_RESET_I(1);
    io_expected_out = VL_RAND_RESET_I(16);
    io_expected_exceptionFlags = VL_RAND_RESET_I(5);
    io_expected_recOut = VL_RAND_RESET_I(17);
    io_actual_out = VL_RAND_RESET_I(17);
    io_actual_exceptionFlags = VL_RAND_RESET_I(5);
    io_check = VL_RAND_RESET_I(1);
    io_pass = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF16_mul__DOT__mulAddRecFN_io_a = VL_RAND_RESET_I(17);
    ValExec_MulAddRecF16_mul__DOT__mulAddRecFN_io_b = VL_RAND_RESET_I(17);
    ValExec_MulAddRecF16_mul__DOT___T_23 = VL_RAND_RESET_I(4);
    ValExec_MulAddRecF16_mul__DOT___T_32 = VL_RAND_RESET_I(6);
    ValExec_MulAddRecF16_mul__DOT___T_33 = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF16_mul__DOT___T_78 = VL_RAND_RESET_I(4);
    ValExec_MulAddRecF16_mul__DOT___T_87 = VL_RAND_RESET_I(6);
    ValExec_MulAddRecF16_mul__DOT___T_88 = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF16_mul__DOT___T_110 = VL_RAND_RESET_I(16);
    ValExec_MulAddRecF16_mul__DOT___T_136 = VL_RAND_RESET_I(4);
    ValExec_MulAddRecF16_mul__DOT___T_145 = VL_RAND_RESET_I(6);
    ValExec_MulAddRecF16_mul__DOT___T_146 = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF16_mul__DOT___T_175 = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isNaNAOrB = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfB = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfC = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_CIsDominant = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult = VL_RAND_RESET_I(23);
    ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_invalidExc = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_isInf = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_isZero = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sign = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sExp = VL_RAND_RESET_I(7);
    ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sig = VL_RAND_RESET_I(14);
    ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_sig = VL_RAND_RESET_I(12);
    ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_isNaN = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_sig = VL_RAND_RESET_I(12);
    ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__signProd = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT___T_50 = VL_RAND_RESET_I(8);
    ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__sNatCAlignDist = VL_RAND_RESET_I(8);
    ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT___T_61 = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist = VL_RAND_RESET_I(6);
    ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC = VL_RAND_RESET_Q(39);
    ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT___T_87 = VL_RAND_RESET_I(3);
    ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC = VL_RAND_RESET_Q(37);
    ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT___T_114 = VL_RAND_RESET_I(8);
    ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_sign = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum = VL_RAND_RESET_Q(36);
    ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum = VL_RAND_RESET_I(24);
    ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_20 = VL_RAND_RESET_Q(39);
    ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum = VL_RAND_RESET_I(25);
    ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum = VL_RAND_RESET_I(13);
    ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2 = VL_RAND_RESET_I(4);
    ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_115 = VL_RAND_RESET_Q(56);
    ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig = VL_RAND_RESET_I(14);
    ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_16 = VL_RAND_RESET_I(8);
    ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_26 = VL_RAND_RESET_I(8);
    ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_48 = VL_RAND_RESET_I(12);
    ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_53 = VL_RAND_RESET_I(14);
    ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_54 = VL_RAND_RESET_I(14);
    ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_56 = VL_RAND_RESET_I(14);
    ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_58 = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_59 = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_80 = VL_RAND_RESET_I(13);
    ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_83 = VL_RAND_RESET_I(8);
    ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF16_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut = VL_RAND_RESET_I(1);
}
