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
    // INITIAL at test-f64FromRecF64/ValExec_f64FromRecF64.v:192
    vlTOPp->io_check = 1U;
}

VL_INLINE_OPT void dut::_combo__TOP__2(dut__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    dut::_combo__TOP__2\n"); );
    dut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp2,127,0,4);
    VL_SIGW(__Vtemp3,127,0,4);
    VL_SIGW(__Vtemp5,95,0,3);
    // Body
    vlTOPp->ValExec_f64FromRecF64__DOT___T_117 = ((0U 
						   == 
						   (0x7ffU 
						    & (IData)(
							      (vlTOPp->io_a 
							       >> 0x34U)))) 
						  & (VL_ULL(0) 
						     == 
						     (VL_ULL(0xfffffffffffff) 
						      & vlTOPp->io_a)));
    vlTOPp->ValExec_f64FromRecF64__DOT___T_107 = ((1U 
						   & (IData)(
							     (vlTOPp->io_a 
							      >> 0x33U)))
						   ? 0U
						   : 
						  ((1U 
						    & (IData)(
							      (vlTOPp->io_a 
							       >> 0x32U)))
						    ? 1U
						    : 
						   ((1U 
						     & (IData)(
							       (vlTOPp->io_a 
								>> 0x31U)))
						     ? 2U
						     : 
						    ((1U 
						      & (IData)(
								(vlTOPp->io_a 
								 >> 0x30U)))
						      ? 3U
						      : 
						     ((1U 
						       & (IData)(
								 (vlTOPp->io_a 
								  >> 0x2fU)))
						       ? 4U
						       : 
						      ((1U 
							& (IData)(
								  (vlTOPp->io_a 
								   >> 0x2eU)))
						        ? 5U
						        : 
						       ((1U 
							 & (IData)(
								   (vlTOPp->io_a 
								    >> 0x2dU)))
							 ? 6U
							 : 
							((1U 
							  & (IData)(
								    (vlTOPp->io_a 
								     >> 0x2cU)))
							  ? 7U
							  : 
							 ((1U 
							   & (IData)(
								     (vlTOPp->io_a 
								      >> 0x2bU)))
							   ? 8U
							   : 
							  ((1U 
							    & (IData)(
								      (vlTOPp->io_a 
								       >> 0x2aU)))
							    ? 9U
							    : 
							   ((1U 
							     & (IData)(
								       (vlTOPp->io_a 
									>> 0x29U)))
							     ? 0xaU
							     : 
							    ((1U 
							      & (IData)(
									(vlTOPp->io_a 
									 >> 0x28U)))
							      ? 0xbU
							      : 
							     ((1U 
							       & (IData)(
									 (vlTOPp->io_a 
									  >> 0x27U)))
							       ? 0xcU
							       : 
							      ((1U 
								& (IData)(
									  (vlTOPp->io_a 
									   >> 0x26U)))
							        ? 0xdU
							        : 
							       ((1U 
								 & (IData)(
									   (vlTOPp->io_a 
									    >> 0x25U)))
								 ? 0xeU
								 : 
								((1U 
								  & (IData)(
									    (vlTOPp->io_a 
									     >> 0x24U)))
								  ? 0xfU
								  : 
								 ((1U 
								   & (IData)(
									     (vlTOPp->io_a 
									      >> 0x23U)))
								   ? 0x10U
								   : 
								  ((1U 
								    & (IData)(
									      (vlTOPp->io_a 
									       >> 0x22U)))
								    ? 0x11U
								    : 
								   ((1U 
								     & (IData)(
									       (vlTOPp->io_a 
										>> 0x21U)))
								     ? 0x12U
								     : 
								    ((1U 
								      & (IData)(
										(vlTOPp->io_a 
										>> 0x20U)))
								      ? 0x13U
								      : 
								     ((1U 
								       & (IData)(
										(vlTOPp->io_a 
										>> 0x1fU)))
								       ? 0x14U
								       : 
								      ((1U 
									& (IData)(
										(vlTOPp->io_a 
										>> 0x1eU)))
								        ? 0x15U
								        : 
								       ((1U 
									 & (IData)(
										(vlTOPp->io_a 
										>> 0x1dU)))
									 ? 0x16U
									 : 
									((1U 
									  & (IData)(
										(vlTOPp->io_a 
										>> 0x1cU)))
									  ? 0x17U
									  : 
									 ((1U 
									   & (IData)(
										(vlTOPp->io_a 
										>> 0x1bU)))
									   ? 0x18U
									   : 
									  ((1U 
									    & (IData)(
										(vlTOPp->io_a 
										>> 0x1aU)))
									    ? 0x19U
									    : 
									   ((1U 
									     & (IData)(
										(vlTOPp->io_a 
										>> 0x19U)))
									     ? 0x1aU
									     : 
									    ((1U 
									      & (IData)(
										(vlTOPp->io_a 
										>> 0x18U)))
									      ? 0x1bU
									      : 
									     ((1U 
									       & (IData)(
										(vlTOPp->io_a 
										>> 0x17U)))
									       ? 0x1cU
									       : 
									      ((1U 
										& (IData)(
										(vlTOPp->io_a 
										>> 0x16U)))
									        ? 0x1dU
									        : 
									       ((1U 
										& (IData)(
										(vlTOPp->io_a 
										>> 0x15U)))
										 ? 0x1eU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_a 
										>> 0x14U)))
										 ? 0x1fU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_a 
										>> 0x13U)))
										 ? 0x20U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_a 
										>> 0x12U)))
										 ? 0x21U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_a 
										>> 0x11U)))
										 ? 0x22U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_a 
										>> 0x10U)))
										 ? 0x23U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_a 
										>> 0xfU)))
										 ? 0x24U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_a 
										>> 0xeU)))
										 ? 0x25U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_a 
										>> 0xdU)))
										 ? 0x26U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_a 
										>> 0xcU)))
										 ? 0x27U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_a 
										>> 0xbU)))
										 ? 0x28U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_a 
										>> 0xaU)))
										 ? 0x29U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_a 
										>> 9U)))
										 ? 0x2aU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_a 
										>> 8U)))
										 ? 0x2bU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_a 
										>> 7U)))
										 ? 0x2cU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_a 
										>> 6U)))
										 ? 0x2dU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_a 
										>> 5U)))
										 ? 0x2eU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_a 
										>> 4U)))
										 ? 0x2fU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_a 
										>> 3U)))
										 ? 0x30U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_a 
										>> 2U)))
										 ? 0x31U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_a 
										>> 1U)))
										 ? 0x32U
										 : 0x33U)))))))))))))))))))))))))))))))))))))))))))))))))));
    vlTOPp->ValExec_f64FromRecF64__DOT___T_116 = (0xfffU 
						  & (((0U 
						       == 
						       (0x7ffU 
							& (IData)(
								  (vlTOPp->io_a 
								   >> 0x34U))))
						       ? 
						      (~ (IData)(vlTOPp->ValExec_f64FromRecF64__DOT___T_107))
						       : 
						      (0x7ffU 
						       & (IData)(
								 (vlTOPp->io_a 
								  >> 0x34U)))) 
						     + 
						     (0x400U 
						      | ((0U 
							  == 
							  (0x7ffU 
							   & (IData)(
								     (vlTOPp->io_a 
								      >> 0x34U))))
							  ? 2U
							  : 1U))));
    VL_EXTEND_WQ(115,52, __Vtemp2, (VL_ULL(0xfffffffffffff) 
				    & vlTOPp->io_a));
    VL_SHIFTL_WWI(115,115,6, __Vtemp3, __Vtemp2, (IData)(vlTOPp->ValExec_f64FromRecF64__DOT___T_107));
    __Vtemp5[0U] = (IData)((((QData)((IData)((7U & 
					      (((IData)(vlTOPp->ValExec_f64FromRecF64__DOT___T_117)
						 ? 0U
						 : 
						((IData)(vlTOPp->ValExec_f64FromRecF64__DOT___T_116) 
						 >> 9U)) 
					       | ((3U 
						   == 
						   (3U 
						    & ((IData)(vlTOPp->ValExec_f64FromRecF64__DOT___T_116) 
						       >> 0xaU))) 
						  & (VL_ULL(0) 
						     != 
						     (VL_ULL(0xfffffffffffff) 
						      & vlTOPp->io_a))))))) 
			     << 0x3dU) | (((QData)((IData)(
							   (0x1ffU 
							    & (IData)(vlTOPp->ValExec_f64FromRecF64__DOT___T_116)))) 
					   << 0x34U) 
					  | (VL_ULL(0xfffffffffffff) 
					     & ((0U 
						 == 
						 (0x7ffU 
						  & (IData)(
							    (vlTOPp->io_a 
							     >> 0x34U))))
						 ? 
						(VL_ULL(0xffffffffffffe) 
						 & (((QData)((IData)(
								     __Vtemp3[1U])) 
						     << 0x21U) 
						    | ((QData)((IData)(
								       __Vtemp3[0U])) 
						       << 1U)))
						 : vlTOPp->io_a)))));
    __Vtemp5[1U] = (IData)(((((QData)((IData)((7U & 
					       (((IData)(vlTOPp->ValExec_f64FromRecF64__DOT___T_117)
						  ? 0U
						  : 
						 ((IData)(vlTOPp->ValExec_f64FromRecF64__DOT___T_116) 
						  >> 9U)) 
						| ((3U 
						    == 
						    (3U 
						     & ((IData)(vlTOPp->ValExec_f64FromRecF64__DOT___T_116) 
							>> 0xaU))) 
						   & (VL_ULL(0) 
						      != 
						      (VL_ULL(0xfffffffffffff) 
						       & vlTOPp->io_a))))))) 
			      << 0x3dU) | (((QData)((IData)(
							    (0x1ffU 
							     & (IData)(vlTOPp->ValExec_f64FromRecF64__DOT___T_116)))) 
					    << 0x34U) 
					   | (VL_ULL(0xfffffffffffff) 
					      & ((0U 
						  == 
						  (0x7ffU 
						   & (IData)(
							     (vlTOPp->io_a 
							      >> 0x34U))))
						  ? 
						 (VL_ULL(0xffffffffffffe) 
						  & (((QData)((IData)(
								      __Vtemp3[1U])) 
						      << 0x21U) 
						     | ((QData)((IData)(
									__Vtemp3[0U])) 
							<< 1U)))
						  : vlTOPp->io_a)))) 
			    >> 0x20U));
    vlTOPp->ValExec_f64FromRecF64__DOT___T_138[0U] 
	= __Vtemp5[0U];
    vlTOPp->ValExec_f64FromRecF64__DOT___T_138[1U] 
	= __Vtemp5[1U];
    vlTOPp->ValExec_f64FromRecF64__DOT___T_138[2U] 
	= (1U & (IData)((vlTOPp->io_a >> 0x3fU)));
    vlTOPp->ValExec_f64FromRecF64__DOT___T_149 = ((3U 
						   == 
						   (3U 
						    & ((vlTOPp->ValExec_f64FromRecF64__DOT___T_138[2U] 
							<< 2U) 
						       | (vlTOPp->ValExec_f64FromRecF64__DOT___T_138[1U] 
							  >> 0x1eU)))) 
						  & (~ 
						     (vlTOPp->ValExec_f64FromRecF64__DOT___T_138[1U] 
						      >> 0x1dU)));
    vlTOPp->ValExec_f64FromRecF64__DOT___T_155 = (((QData)((IData)(
								   (0U 
								    != 
								    (7U 
								     & ((vlTOPp->ValExec_f64FromRecF64__DOT___T_138[2U] 
									 << 3U) 
									| (vlTOPp->ValExec_f64FromRecF64__DOT___T_138[1U] 
									   >> 0x1dU)))))) 
						   << 0x34U) 
						  | (VL_ULL(0xfffffffffffff) 
						     & (((QData)((IData)(
									 vlTOPp->ValExec_f64FromRecF64__DOT___T_138[1U])) 
							 << 0x20U) 
							| (QData)((IData)(
									  vlTOPp->ValExec_f64FromRecF64__DOT___T_138[0U])))));
    vlTOPp->io_out = (((QData)((IData)((1U & vlTOPp->ValExec_f64FromRecF64__DOT___T_138[2U]))) 
		       << 0x3fU) | (((QData)((IData)(
						     (0x7ffU 
						      & ((VL_GTS_III(1,13,13, 0x402U, 
								     (0xfffU 
								      & ((vlTOPp->ValExec_f64FromRecF64__DOT___T_138[2U] 
									  << 0xcU) 
									 | (vlTOPp->ValExec_f64FromRecF64__DOT___T_138[1U] 
									    >> 0x14U))))
							   ? 0U
							   : 
							  ((0xfffU 
							    & ((vlTOPp->ValExec_f64FromRecF64__DOT___T_138[2U] 
								<< 0xcU) 
							       | (vlTOPp->ValExec_f64FromRecF64__DOT___T_138[1U] 
								  >> 0x14U))) 
							   - (IData)(0x401U))) 
							 | ((((3U 
							       == 
							       (3U 
								& ((vlTOPp->ValExec_f64FromRecF64__DOT___T_138[2U] 
								    << 2U) 
								   | (vlTOPp->ValExec_f64FromRecF64__DOT___T_138[1U] 
								      >> 0x1eU)))) 
							      & (vlTOPp->ValExec_f64FromRecF64__DOT___T_138[1U] 
								 >> 0x1dU)) 
							     | (IData)(vlTOPp->ValExec_f64FromRecF64__DOT___T_149))
							     ? 0x7ffU
							     : 0U))))) 
				     << 0x34U) | (VL_ULL(0xfffffffffffff) 
						  & (VL_GTS_III(1,13,13, 0x402U, 
								(0xfffU 
								 & ((vlTOPp->ValExec_f64FromRecF64__DOT___T_138[2U] 
								     << 0xcU) 
								    | (vlTOPp->ValExec_f64FromRecF64__DOT___T_138[1U] 
								       >> 0x14U))))
						      ? 
						     (VL_ULL(0x1fffffffffffff) 
						      & ((VL_ULL(0x1fffffffffffff) 
							  & (vlTOPp->ValExec_f64FromRecF64__DOT___T_155 
							     >> 1U)) 
							 >> 
							 (0x3fU 
							  & ((IData)(1U) 
							     - 
							     (0xfffU 
							      & ((vlTOPp->ValExec_f64FromRecF64__DOT___T_138[2U] 
								  << 0xcU) 
								 | (vlTOPp->ValExec_f64FromRecF64__DOT___T_138[1U] 
								    >> 0x14U)))))))
						      : 
						     ((IData)(vlTOPp->ValExec_f64FromRecF64__DOT___T_149)
						       ? VL_ULL(0)
						       : vlTOPp->ValExec_f64FromRecF64__DOT___T_155)))));
    vlTOPp->io_pass = (vlTOPp->io_out == vlTOPp->io_a);
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
}
#endif // VL_DEBUG

void dut::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    dut::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_a = VL_RAND_RESET_Q(64);
    io_out = VL_RAND_RESET_Q(64);
    io_check = VL_RAND_RESET_I(1);
    io_pass = VL_RAND_RESET_I(1);
    ValExec_f64FromRecF64__DOT___T_107 = VL_RAND_RESET_I(6);
    ValExec_f64FromRecF64__DOT___T_116 = VL_RAND_RESET_I(12);
    ValExec_f64FromRecF64__DOT___T_117 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65,ValExec_f64FromRecF64__DOT___T_138);
    ValExec_f64FromRecF64__DOT___T_149 = VL_RAND_RESET_I(1);
    ValExec_f64FromRecF64__DOT___T_155 = VL_RAND_RESET_Q(54);
}
