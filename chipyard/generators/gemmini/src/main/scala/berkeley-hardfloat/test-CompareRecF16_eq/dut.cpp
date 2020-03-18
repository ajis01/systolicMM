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
    // INITIAL at test-CompareRecF16_eq/ValExec_CompareRecF16_eq.v:224
    vlTOPp->io_check = 1U;
}

VL_INLINE_OPT void dut::_combo__TOP__2(dut__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    dut::_combo__TOP__2\n"); );
    dut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ValExec_CompareRecF16_eq__DOT___T_33 = 
	((0U == (0x1fU & ((IData)(vlTOPp->io_a) >> 0xaU))) 
	 & (0U == (0x3ffU & (IData)(vlTOPp->io_a))));
    vlTOPp->ValExec_CompareRecF16_eq__DOT___T_88 = 
	((0U == (0x1fU & ((IData)(vlTOPp->io_b) >> 0xaU))) 
	 & (0U == (0x3ffU & (IData)(vlTOPp->io_b))));
    vlTOPp->ValExec_CompareRecF16_eq__DOT___T_23 = 
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
    vlTOPp->ValExec_CompareRecF16_eq__DOT___T_78 = 
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
    vlTOPp->ValExec_CompareRecF16_eq__DOT___T_32 = 
	(0x3fU & (((0U == (0x1fU & ((IData)(vlTOPp->io_a) 
				    >> 0xaU))) ? (~ (IData)(vlTOPp->ValExec_CompareRecF16_eq__DOT___T_23))
		    : (0x1fU & ((IData)(vlTOPp->io_a) 
				>> 0xaU))) + (0x10U 
					      | ((0U 
						  == 
						  (0x1fU 
						   & ((IData)(vlTOPp->io_a) 
						      >> 0xaU)))
						  ? 2U
						  : 1U))));
    vlTOPp->ValExec_CompareRecF16_eq__DOT___T_87 = 
	(0x3fU & (((0U == (0x1fU & ((IData)(vlTOPp->io_b) 
				    >> 0xaU))) ? (~ (IData)(vlTOPp->ValExec_CompareRecF16_eq__DOT___T_78))
		    : (0x1fU & ((IData)(vlTOPp->io_b) 
				>> 0xaU))) + (0x10U 
					      | ((0U 
						  == 
						  (0x1fU 
						   & ((IData)(vlTOPp->io_b) 
						      >> 0xaU)))
						  ? 2U
						  : 1U))));
    vlTOPp->ValExec_CompareRecF16_eq__DOT__compareRecFN_io_a 
	= (((0x10000U & ((IData)(vlTOPp->io_a) << 1U)) 
	    | (0xe000U & ((((IData)(vlTOPp->ValExec_CompareRecF16_eq__DOT___T_33)
			     ? 0U : ((IData)(vlTOPp->ValExec_CompareRecF16_eq__DOT___T_32) 
				     >> 3U)) | ((3U 
						 == 
						 (3U 
						  & ((IData)(vlTOPp->ValExec_CompareRecF16_eq__DOT___T_32) 
						     >> 4U))) 
						& (0U 
						   != 
						   (0x3ffU 
						    & (IData)(vlTOPp->io_a))))) 
			  << 0xdU))) | ((0x1c00U & 
					 ((IData)(vlTOPp->ValExec_CompareRecF16_eq__DOT___T_32) 
					  << 0xaU)) 
					| (0x3ffU & 
					   ((0U == 
					     (0x1fU 
					      & ((IData)(vlTOPp->io_a) 
						 >> 0xaU)))
					     ? (0x3feU 
						& (((0x3ffU 
						     & (IData)(vlTOPp->io_a)) 
						    << (IData)(vlTOPp->ValExec_CompareRecF16_eq__DOT___T_23)) 
						   << 1U))
					     : (IData)(vlTOPp->io_a)))));
    vlTOPp->ValExec_CompareRecF16_eq__DOT__compareRecFN_io_b 
	= (((0x10000U & ((IData)(vlTOPp->io_b) << 1U)) 
	    | (0xe000U & ((((IData)(vlTOPp->ValExec_CompareRecF16_eq__DOT___T_88)
			     ? 0U : ((IData)(vlTOPp->ValExec_CompareRecF16_eq__DOT___T_87) 
				     >> 3U)) | ((3U 
						 == 
						 (3U 
						  & ((IData)(vlTOPp->ValExec_CompareRecF16_eq__DOT___T_87) 
						     >> 4U))) 
						& (0U 
						   != 
						   (0x3ffU 
						    & (IData)(vlTOPp->io_b))))) 
			  << 0xdU))) | ((0x1c00U & 
					 ((IData)(vlTOPp->ValExec_CompareRecF16_eq__DOT___T_87) 
					  << 0xaU)) 
					| (0x3ffU & 
					   ((0U == 
					     (0x1fU 
					      & ((IData)(vlTOPp->io_b) 
						 >> 0xaU)))
					     ? (0x3feU 
						& (((0x3ffU 
						     & (IData)(vlTOPp->io_b)) 
						    << (IData)(vlTOPp->ValExec_CompareRecF16_eq__DOT___T_78)) 
						   << 1U))
					     : (IData)(vlTOPp->io_b)))));
    vlTOPp->ValExec_CompareRecF16_eq__DOT__compareRecFN__DOT__rawA_isNaN 
	= ((3U == (3U & (vlTOPp->ValExec_CompareRecF16_eq__DOT__compareRecFN_io_a 
			 >> 0xeU))) & (vlTOPp->ValExec_CompareRecF16_eq__DOT__compareRecFN_io_a 
				       >> 0xdU));
    vlTOPp->ValExec_CompareRecF16_eq__DOT__compareRecFN__DOT__rawA_sig 
	= (((0U != (7U & (vlTOPp->ValExec_CompareRecF16_eq__DOT__compareRecFN_io_a 
			  >> 0xdU))) << 0xaU) | (0x3ffU 
						 & vlTOPp->ValExec_CompareRecF16_eq__DOT__compareRecFN_io_a));
    vlTOPp->ValExec_CompareRecF16_eq__DOT__compareRecFN__DOT__rawB_isNaN 
	= ((3U == (3U & (vlTOPp->ValExec_CompareRecF16_eq__DOT__compareRecFN_io_b 
			 >> 0xeU))) & (vlTOPp->ValExec_CompareRecF16_eq__DOT__compareRecFN_io_b 
				       >> 0xdU));
    vlTOPp->ValExec_CompareRecF16_eq__DOT__compareRecFN__DOT__rawB_sig 
	= (((0U != (7U & (vlTOPp->ValExec_CompareRecF16_eq__DOT__compareRecFN_io_b 
			  >> 0xdU))) << 0xaU) | (0x3ffU 
						 & vlTOPp->ValExec_CompareRecF16_eq__DOT__compareRecFN_io_b));
    vlTOPp->io_actual_exceptionFlags = ((((IData)(vlTOPp->ValExec_CompareRecF16_eq__DOT__compareRecFN__DOT__rawA_isNaN) 
					  & (~ ((IData)(vlTOPp->ValExec_CompareRecF16_eq__DOT__compareRecFN__DOT__rawA_sig) 
						>> 9U))) 
					 | ((IData)(vlTOPp->ValExec_CompareRecF16_eq__DOT__compareRecFN__DOT__rawB_isNaN) 
					    & (~ ((IData)(vlTOPp->ValExec_CompareRecF16_eq__DOT__compareRecFN__DOT__rawB_sig) 
						  >> 9U)))) 
					<< 4U);
    vlTOPp->io_actual_out = (((~ (IData)(vlTOPp->ValExec_CompareRecF16_eq__DOT__compareRecFN__DOT__rawA_isNaN)) 
			      & (~ (IData)(vlTOPp->ValExec_CompareRecF16_eq__DOT__compareRecFN__DOT__rawB_isNaN))) 
			     & (((0U == (7U & (vlTOPp->ValExec_CompareRecF16_eq__DOT__compareRecFN_io_a 
					       >> 0xdU))) 
				 & (0U == (7U & (vlTOPp->ValExec_CompareRecF16_eq__DOT__compareRecFN_io_b 
						 >> 0xdU)))) 
				| (((1U & (vlTOPp->ValExec_CompareRecF16_eq__DOT__compareRecFN_io_a 
					   >> 0x10U)) 
				    == (1U & (vlTOPp->ValExec_CompareRecF16_eq__DOT__compareRecFN_io_b 
					      >> 0x10U))) 
				   & ((((3U == (3U 
						& (vlTOPp->ValExec_CompareRecF16_eq__DOT__compareRecFN_io_a 
						   >> 0xeU))) 
					& (~ (vlTOPp->ValExec_CompareRecF16_eq__DOT__compareRecFN_io_a 
					      >> 0xdU))) 
				       & ((3U == (3U 
						  & (vlTOPp->ValExec_CompareRecF16_eq__DOT__compareRecFN_io_b 
						     >> 0xeU))) 
					  & (~ (vlTOPp->ValExec_CompareRecF16_eq__DOT__compareRecFN_io_b 
						>> 0xdU)))) 
				      | (((0x3fU & 
					   (vlTOPp->ValExec_CompareRecF16_eq__DOT__compareRecFN_io_a 
					    >> 0xaU)) 
					  == (0x3fU 
					      & (vlTOPp->ValExec_CompareRecF16_eq__DOT__compareRecFN_io_b 
						 >> 0xaU))) 
					 & ((IData)(vlTOPp->ValExec_CompareRecF16_eq__DOT__compareRecFN__DOT__rawA_sig) 
					    == (IData)(vlTOPp->ValExec_CompareRecF16_eq__DOT__compareRecFN__DOT__rawB_sig)))))));
    vlTOPp->io_pass = (((IData)(vlTOPp->io_actual_out) 
			== (IData)(vlTOPp->io_expected_out)) 
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
    if (VL_UNLIKELY((io_expected_out & 0xfeU))) {
	Verilated::overWidthError("io_expected_out");}
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
    io_expected_out = VL_RAND_RESET_I(1);
    io_expected_exceptionFlags = VL_RAND_RESET_I(5);
    io_actual_out = VL_RAND_RESET_I(1);
    io_actual_exceptionFlags = VL_RAND_RESET_I(5);
    io_check = VL_RAND_RESET_I(1);
    io_pass = VL_RAND_RESET_I(1);
    ValExec_CompareRecF16_eq__DOT__compareRecFN_io_a = VL_RAND_RESET_I(17);
    ValExec_CompareRecF16_eq__DOT__compareRecFN_io_b = VL_RAND_RESET_I(17);
    ValExec_CompareRecF16_eq__DOT___T_23 = VL_RAND_RESET_I(4);
    ValExec_CompareRecF16_eq__DOT___T_32 = VL_RAND_RESET_I(6);
    ValExec_CompareRecF16_eq__DOT___T_33 = VL_RAND_RESET_I(1);
    ValExec_CompareRecF16_eq__DOT___T_78 = VL_RAND_RESET_I(4);
    ValExec_CompareRecF16_eq__DOT___T_87 = VL_RAND_RESET_I(6);
    ValExec_CompareRecF16_eq__DOT___T_88 = VL_RAND_RESET_I(1);
    ValExec_CompareRecF16_eq__DOT__compareRecFN__DOT__rawA_isNaN = VL_RAND_RESET_I(1);
    ValExec_CompareRecF16_eq__DOT__compareRecFN__DOT__rawA_sig = VL_RAND_RESET_I(12);
    ValExec_CompareRecF16_eq__DOT__compareRecFN__DOT__rawB_isNaN = VL_RAND_RESET_I(1);
    ValExec_CompareRecF16_eq__DOT__compareRecFN__DOT__rawB_sig = VL_RAND_RESET_I(12);
}
