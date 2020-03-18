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
    // INITIAL at test-MulAddRecF64/ValExec_MulAddRecF64.v:1976
    vlTOPp->io_check = 1U;
}

VL_INLINE_OPT void dut::_combo__TOP__2(dut__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    dut::_combo__TOP__2\n"); );
    dut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp2,127,0,4);
    VL_SIGW(__Vtemp3,127,0,4);
    VL_SIGW(__Vtemp5,95,0,3);
    VL_SIGW(__Vtemp7,127,0,4);
    VL_SIGW(__Vtemp8,127,0,4);
    VL_SIGW(__Vtemp10,95,0,3);
    VL_SIGW(__Vtemp12,127,0,4);
    VL_SIGW(__Vtemp13,127,0,4);
    VL_SIGW(__Vtemp15,95,0,3);
    VL_SIGW(__Vtemp17,127,0,4);
    VL_SIGW(__Vtemp18,127,0,4);
    VL_SIGW(__Vtemp20,95,0,3);
    VL_SIGW(__Vtemp25,191,0,6);
    VL_SIGW(__Vtemp26,191,0,6);
    VL_SIGW(__Vtemp29,95,0,3);
    VL_SIGW(__Vtemp30,95,0,3);
    VL_SIGW(__Vtemp33,95,0,3);
    VL_SIGW(__Vtemp34,95,0,3);
    VL_SIGW(__Vtemp37,95,0,3);
    VL_SIGW(__Vtemp38,95,0,3);
    VL_SIGW(__Vtemp41,95,0,3);
    VL_SIGW(__Vtemp42,95,0,3);
    VL_SIGW(__Vtemp45,95,0,3);
    VL_SIGW(__Vtemp46,95,0,3);
    VL_SIGW(__Vtemp49,95,0,3);
    VL_SIGW(__Vtemp50,95,0,3);
    VL_SIGW(__Vtemp53,95,0,3);
    VL_SIGW(__Vtemp54,95,0,3);
    VL_SIGW(__Vtemp62,127,0,4);
    VL_SIGW(__Vtemp63,127,0,4);
    VL_SIGW(__Vtemp64,127,0,4);
    VL_SIGW(__Vtemp65,127,0,4);
    VL_SIGW(__Vtemp66,127,0,4);
    VL_SIGW(__Vtemp69,127,0,4);
    VL_SIGW(__Vtemp70,127,0,4);
    VL_SIGW(__Vtemp71,127,0,4);
    VL_SIGW(__Vtemp77,191,0,6);
    VL_SIGW(__Vtemp90,127,0,4);
    VL_SIGW(__Vtemp91,127,0,4);
    VL_SIGW(__Vtemp92,127,0,4);
    VL_SIGW(__Vtemp97,191,0,6);
    VL_SIGW(__Vtemp98,191,0,6);
    VL_SIGW(__Vtemp101,255,0,8);
    VL_SIGW(__Vtemp102,255,0,8);
    VL_SIGW(__Vtemp105,95,0,3);
    VL_SIGW(__Vtemp106,95,0,3);
    VL_SIGW(__Vtemp109,95,0,3);
    VL_SIGW(__Vtemp110,95,0,3);
    VL_SIGW(__Vtemp113,95,0,3);
    VL_SIGW(__Vtemp114,95,0,3);
    VL_SIGW(__Vtemp117,95,0,3);
    VL_SIGW(__Vtemp118,95,0,3);
    VL_SIGW(__Vtemp121,95,0,3);
    VL_SIGW(__Vtemp122,95,0,3);
    VL_SIGW(__Vtemp125,95,0,3);
    VL_SIGW(__Vtemp126,95,0,3);
    VL_SIGW(__Vtemp129,95,0,3);
    VL_SIGW(__Vtemp130,95,0,3);
    VL_SIGW(__Vtemp133,95,0,3);
    VL_SIGW(__Vtemp134,95,0,3);
    VL_SIGW(__Vtemp137,95,0,3);
    VL_SIGW(__Vtemp138,95,0,3);
    VL_SIGW(__Vtemp141,95,0,3);
    VL_SIGW(__Vtemp142,95,0,3);
    VL_SIGW(__Vtemp144,95,0,3);
    // Body
    vlTOPp->ValExec_MulAddRecF64__DOT___T_534 = ((0U 
						  == 
						  (0x7ffU 
						   & (IData)(
							     (vlTOPp->io_expected_out 
							      >> 0x34U)))) 
						 & (VL_ULL(0) 
						    == 
						    (VL_ULL(0xfffffffffffff) 
						     & vlTOPp->io_expected_out)));
    vlTOPp->ValExec_MulAddRecF64__DOT___T_524 = ((1U 
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
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_165 
	= ((0U == (IData)(vlTOPp->io_roundingMode)) 
	   | (4U == (IData)(vlTOPp->io_roundingMode)));
    vlTOPp->ValExec_MulAddRecF64__DOT___T_395 = ((0U 
						  == 
						  (0x7ffU 
						   & (IData)(
							     (vlTOPp->io_c 
							      >> 0x34U)))) 
						 & (VL_ULL(0) 
						    == 
						    (VL_ULL(0xfffffffffffff) 
						     & vlTOPp->io_c)));
    vlTOPp->ValExec_MulAddRecF64__DOT___T_117 = ((0U 
						  == 
						  (0x7ffU 
						   & (IData)(
							     (vlTOPp->io_a 
							      >> 0x34U)))) 
						 & (VL_ULL(0) 
						    == 
						    (VL_ULL(0xfffffffffffff) 
						     & vlTOPp->io_a)));
    vlTOPp->ValExec_MulAddRecF64__DOT___T_256 = ((0U 
						  == 
						  (0x7ffU 
						   & (IData)(
							     (vlTOPp->io_b 
							      >> 0x34U)))) 
						 & (VL_ULL(0) 
						    == 
						    (VL_ULL(0xfffffffffffff) 
						     & vlTOPp->io_b)));
    vlTOPp->ValExec_MulAddRecF64__DOT___T_385 = ((1U 
						  & (IData)(
							    (vlTOPp->io_c 
							     >> 0x33U)))
						  ? 0U
						  : 
						 ((1U 
						   & (IData)(
							     (vlTOPp->io_c 
							      >> 0x32U)))
						   ? 1U
						   : 
						  ((1U 
						    & (IData)(
							      (vlTOPp->io_c 
							       >> 0x31U)))
						    ? 2U
						    : 
						   ((1U 
						     & (IData)(
							       (vlTOPp->io_c 
								>> 0x30U)))
						     ? 3U
						     : 
						    ((1U 
						      & (IData)(
								(vlTOPp->io_c 
								 >> 0x2fU)))
						      ? 4U
						      : 
						     ((1U 
						       & (IData)(
								 (vlTOPp->io_c 
								  >> 0x2eU)))
						       ? 5U
						       : 
						      ((1U 
							& (IData)(
								  (vlTOPp->io_c 
								   >> 0x2dU)))
						        ? 6U
						        : 
						       ((1U 
							 & (IData)(
								   (vlTOPp->io_c 
								    >> 0x2cU)))
							 ? 7U
							 : 
							((1U 
							  & (IData)(
								    (vlTOPp->io_c 
								     >> 0x2bU)))
							  ? 8U
							  : 
							 ((1U 
							   & (IData)(
								     (vlTOPp->io_c 
								      >> 0x2aU)))
							   ? 9U
							   : 
							  ((1U 
							    & (IData)(
								      (vlTOPp->io_c 
								       >> 0x29U)))
							    ? 0xaU
							    : 
							   ((1U 
							     & (IData)(
								       (vlTOPp->io_c 
									>> 0x28U)))
							     ? 0xbU
							     : 
							    ((1U 
							      & (IData)(
									(vlTOPp->io_c 
									 >> 0x27U)))
							      ? 0xcU
							      : 
							     ((1U 
							       & (IData)(
									 (vlTOPp->io_c 
									  >> 0x26U)))
							       ? 0xdU
							       : 
							      ((1U 
								& (IData)(
									  (vlTOPp->io_c 
									   >> 0x25U)))
							        ? 0xeU
							        : 
							       ((1U 
								 & (IData)(
									   (vlTOPp->io_c 
									    >> 0x24U)))
								 ? 0xfU
								 : 
								((1U 
								  & (IData)(
									    (vlTOPp->io_c 
									     >> 0x23U)))
								  ? 0x10U
								  : 
								 ((1U 
								   & (IData)(
									     (vlTOPp->io_c 
									      >> 0x22U)))
								   ? 0x11U
								   : 
								  ((1U 
								    & (IData)(
									      (vlTOPp->io_c 
									       >> 0x21U)))
								    ? 0x12U
								    : 
								   ((1U 
								     & (IData)(
									       (vlTOPp->io_c 
										>> 0x20U)))
								     ? 0x13U
								     : 
								    ((1U 
								      & (IData)(
										(vlTOPp->io_c 
										>> 0x1fU)))
								      ? 0x14U
								      : 
								     ((1U 
								       & (IData)(
										(vlTOPp->io_c 
										>> 0x1eU)))
								       ? 0x15U
								       : 
								      ((1U 
									& (IData)(
										(vlTOPp->io_c 
										>> 0x1dU)))
								        ? 0x16U
								        : 
								       ((1U 
									 & (IData)(
										(vlTOPp->io_c 
										>> 0x1cU)))
									 ? 0x17U
									 : 
									((1U 
									  & (IData)(
										(vlTOPp->io_c 
										>> 0x1bU)))
									  ? 0x18U
									  : 
									 ((1U 
									   & (IData)(
										(vlTOPp->io_c 
										>> 0x1aU)))
									   ? 0x19U
									   : 
									  ((1U 
									    & (IData)(
										(vlTOPp->io_c 
										>> 0x19U)))
									    ? 0x1aU
									    : 
									   ((1U 
									     & (IData)(
										(vlTOPp->io_c 
										>> 0x18U)))
									     ? 0x1bU
									     : 
									    ((1U 
									      & (IData)(
										(vlTOPp->io_c 
										>> 0x17U)))
									      ? 0x1cU
									      : 
									     ((1U 
									       & (IData)(
										(vlTOPp->io_c 
										>> 0x16U)))
									       ? 0x1dU
									       : 
									      ((1U 
										& (IData)(
										(vlTOPp->io_c 
										>> 0x15U)))
									        ? 0x1eU
									        : 
									       ((1U 
										& (IData)(
										(vlTOPp->io_c 
										>> 0x14U)))
										 ? 0x1fU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_c 
										>> 0x13U)))
										 ? 0x20U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_c 
										>> 0x12U)))
										 ? 0x21U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_c 
										>> 0x11U)))
										 ? 0x22U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_c 
										>> 0x10U)))
										 ? 0x23U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_c 
										>> 0xfU)))
										 ? 0x24U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_c 
										>> 0xeU)))
										 ? 0x25U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_c 
										>> 0xdU)))
										 ? 0x26U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_c 
										>> 0xcU)))
										 ? 0x27U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_c 
										>> 0xbU)))
										 ? 0x28U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_c 
										>> 0xaU)))
										 ? 0x29U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_c 
										>> 9U)))
										 ? 0x2aU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_c 
										>> 8U)))
										 ? 0x2bU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_c 
										>> 7U)))
										 ? 0x2cU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_c 
										>> 6U)))
										 ? 0x2dU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_c 
										>> 5U)))
										 ? 0x2eU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_c 
										>> 4U)))
										 ? 0x2fU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_c 
										>> 3U)))
										 ? 0x30U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_c 
										>> 2U)))
										 ? 0x31U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_c 
										>> 1U)))
										 ? 0x32U
										 : 0x33U)))))))))))))))))))))))))))))))))))))))))))))))))));
    vlTOPp->ValExec_MulAddRecF64__DOT___T_107 = ((1U 
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
    vlTOPp->ValExec_MulAddRecF64__DOT___T_246 = ((1U 
						  & (IData)(
							    (vlTOPp->io_b 
							     >> 0x33U)))
						  ? 0U
						  : 
						 ((1U 
						   & (IData)(
							     (vlTOPp->io_b 
							      >> 0x32U)))
						   ? 1U
						   : 
						  ((1U 
						    & (IData)(
							      (vlTOPp->io_b 
							       >> 0x31U)))
						    ? 2U
						    : 
						   ((1U 
						     & (IData)(
							       (vlTOPp->io_b 
								>> 0x30U)))
						     ? 3U
						     : 
						    ((1U 
						      & (IData)(
								(vlTOPp->io_b 
								 >> 0x2fU)))
						      ? 4U
						      : 
						     ((1U 
						       & (IData)(
								 (vlTOPp->io_b 
								  >> 0x2eU)))
						       ? 5U
						       : 
						      ((1U 
							& (IData)(
								  (vlTOPp->io_b 
								   >> 0x2dU)))
						        ? 6U
						        : 
						       ((1U 
							 & (IData)(
								   (vlTOPp->io_b 
								    >> 0x2cU)))
							 ? 7U
							 : 
							((1U 
							  & (IData)(
								    (vlTOPp->io_b 
								     >> 0x2bU)))
							  ? 8U
							  : 
							 ((1U 
							   & (IData)(
								     (vlTOPp->io_b 
								      >> 0x2aU)))
							   ? 9U
							   : 
							  ((1U 
							    & (IData)(
								      (vlTOPp->io_b 
								       >> 0x29U)))
							    ? 0xaU
							    : 
							   ((1U 
							     & (IData)(
								       (vlTOPp->io_b 
									>> 0x28U)))
							     ? 0xbU
							     : 
							    ((1U 
							      & (IData)(
									(vlTOPp->io_b 
									 >> 0x27U)))
							      ? 0xcU
							      : 
							     ((1U 
							       & (IData)(
									 (vlTOPp->io_b 
									  >> 0x26U)))
							       ? 0xdU
							       : 
							      ((1U 
								& (IData)(
									  (vlTOPp->io_b 
									   >> 0x25U)))
							        ? 0xeU
							        : 
							       ((1U 
								 & (IData)(
									   (vlTOPp->io_b 
									    >> 0x24U)))
								 ? 0xfU
								 : 
								((1U 
								  & (IData)(
									    (vlTOPp->io_b 
									     >> 0x23U)))
								  ? 0x10U
								  : 
								 ((1U 
								   & (IData)(
									     (vlTOPp->io_b 
									      >> 0x22U)))
								   ? 0x11U
								   : 
								  ((1U 
								    & (IData)(
									      (vlTOPp->io_b 
									       >> 0x21U)))
								    ? 0x12U
								    : 
								   ((1U 
								     & (IData)(
									       (vlTOPp->io_b 
										>> 0x20U)))
								     ? 0x13U
								     : 
								    ((1U 
								      & (IData)(
										(vlTOPp->io_b 
										>> 0x1fU)))
								      ? 0x14U
								      : 
								     ((1U 
								       & (IData)(
										(vlTOPp->io_b 
										>> 0x1eU)))
								       ? 0x15U
								       : 
								      ((1U 
									& (IData)(
										(vlTOPp->io_b 
										>> 0x1dU)))
								        ? 0x16U
								        : 
								       ((1U 
									 & (IData)(
										(vlTOPp->io_b 
										>> 0x1cU)))
									 ? 0x17U
									 : 
									((1U 
									  & (IData)(
										(vlTOPp->io_b 
										>> 0x1bU)))
									  ? 0x18U
									  : 
									 ((1U 
									   & (IData)(
										(vlTOPp->io_b 
										>> 0x1aU)))
									   ? 0x19U
									   : 
									  ((1U 
									    & (IData)(
										(vlTOPp->io_b 
										>> 0x19U)))
									    ? 0x1aU
									    : 
									   ((1U 
									     & (IData)(
										(vlTOPp->io_b 
										>> 0x18U)))
									     ? 0x1bU
									     : 
									    ((1U 
									      & (IData)(
										(vlTOPp->io_b 
										>> 0x17U)))
									      ? 0x1cU
									      : 
									     ((1U 
									       & (IData)(
										(vlTOPp->io_b 
										>> 0x16U)))
									       ? 0x1dU
									       : 
									      ((1U 
										& (IData)(
										(vlTOPp->io_b 
										>> 0x15U)))
									        ? 0x1eU
									        : 
									       ((1U 
										& (IData)(
										(vlTOPp->io_b 
										>> 0x14U)))
										 ? 0x1fU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_b 
										>> 0x13U)))
										 ? 0x20U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_b 
										>> 0x12U)))
										 ? 0x21U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_b 
										>> 0x11U)))
										 ? 0x22U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_b 
										>> 0x10U)))
										 ? 0x23U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_b 
										>> 0xfU)))
										 ? 0x24U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_b 
										>> 0xeU)))
										 ? 0x25U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_b 
										>> 0xdU)))
										 ? 0x26U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_b 
										>> 0xcU)))
										 ? 0x27U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_b 
										>> 0xbU)))
										 ? 0x28U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_b 
										>> 0xaU)))
										 ? 0x29U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_b 
										>> 9U)))
										 ? 0x2aU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_b 
										>> 8U)))
										 ? 0x2bU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_b 
										>> 7U)))
										 ? 0x2cU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_b 
										>> 6U)))
										 ? 0x2dU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_b 
										>> 5U)))
										 ? 0x2eU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_b 
										>> 4U)))
										 ? 0x2fU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_b 
										>> 3U)))
										 ? 0x30U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_b 
										>> 2U)))
										 ? 0x31U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_b 
										>> 1U)))
										 ? 0x32U
										 : 0x33U)))))))))))))))))))))))))))))))))))))))))))))))))));
    vlTOPp->ValExec_MulAddRecF64__DOT___T_533 = (0xfffU 
						 & (((0U 
						      == 
						      (0x7ffU 
						       & (IData)(
								 (vlTOPp->io_expected_out 
								  >> 0x34U))))
						      ? 
						     (~ (IData)(vlTOPp->ValExec_MulAddRecF64__DOT___T_524))
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
    vlTOPp->ValExec_MulAddRecF64__DOT___T_394 = (0xfffU 
						 & (((0U 
						      == 
						      (0x7ffU 
						       & (IData)(
								 (vlTOPp->io_c 
								  >> 0x34U))))
						      ? 
						     (~ (IData)(vlTOPp->ValExec_MulAddRecF64__DOT___T_385))
						      : 
						     (0x7ffU 
						      & (IData)(
								(vlTOPp->io_c 
								 >> 0x34U)))) 
						    + 
						    (0x400U 
						     | ((0U 
							 == 
							 (0x7ffU 
							  & (IData)(
								    (vlTOPp->io_c 
								     >> 0x34U))))
							 ? 2U
							 : 1U))));
    vlTOPp->ValExec_MulAddRecF64__DOT___T_116 = (0xfffU 
						 & (((0U 
						      == 
						      (0x7ffU 
						       & (IData)(
								 (vlTOPp->io_a 
								  >> 0x34U))))
						      ? 
						     (~ (IData)(vlTOPp->ValExec_MulAddRecF64__DOT___T_107))
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
    vlTOPp->ValExec_MulAddRecF64__DOT___T_255 = (0xfffU 
						 & (((0U 
						      == 
						      (0x7ffU 
						       & (IData)(
								 (vlTOPp->io_b 
								  >> 0x34U))))
						      ? 
						     (~ (IData)(vlTOPp->ValExec_MulAddRecF64__DOT___T_246))
						      : 
						     (0x7ffU 
						      & (IData)(
								(vlTOPp->io_b 
								 >> 0x34U)))) 
						    + 
						    (0x400U 
						     | ((0U 
							 == 
							 (0x7ffU 
							  & (IData)(
								    (vlTOPp->io_b 
								     >> 0x34U))))
							 ? 2U
							 : 1U))));
    VL_EXTEND_WQ(115,52, __Vtemp2, (VL_ULL(0xfffffffffffff) 
				    & vlTOPp->io_expected_out));
    VL_SHIFTL_WWI(115,115,6, __Vtemp3, __Vtemp2, (IData)(vlTOPp->ValExec_MulAddRecF64__DOT___T_524));
    __Vtemp5[1U] = ((0xe0000000U & ((((IData)(vlTOPp->ValExec_MulAddRecF64__DOT___T_534)
				       ? 0U : ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT___T_533) 
					       >> 9U)) 
				     | ((3U == (3U 
						& ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT___T_533) 
						   >> 0xaU))) 
					& (VL_ULL(0) 
					   != (VL_ULL(0xfffffffffffff) 
					       & vlTOPp->io_expected_out)))) 
				    << 0x1dU)) | (IData)(
							 ((((QData)((IData)(
									    (0x1ffU 
									     & (IData)(vlTOPp->ValExec_MulAddRecF64__DOT___T_533)))) 
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
								& (IData)(vlTOPp->ValExec_MulAddRecF64__DOT___T_533)))) 
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
    VL_EXTEND_WQ(115,52, __Vtemp7, (VL_ULL(0xfffffffffffff) 
				    & vlTOPp->io_c));
    VL_SHIFTL_WWI(115,115,6, __Vtemp8, __Vtemp7, (IData)(vlTOPp->ValExec_MulAddRecF64__DOT___T_385));
    __Vtemp10[1U] = ((0xe0000000U & ((((IData)(vlTOPp->ValExec_MulAddRecF64__DOT___T_395)
				        ? 0U : ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT___T_394) 
						>> 9U)) 
				      | ((3U == (3U 
						 & ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT___T_394) 
						    >> 0xaU))) 
					 & (VL_ULL(0) 
					    != (VL_ULL(0xfffffffffffff) 
						& vlTOPp->io_c)))) 
				     << 0x1dU)) | (IData)(
							  ((((QData)((IData)(
									     (0x1ffU 
									      & (IData)(vlTOPp->ValExec_MulAddRecF64__DOT___T_394)))) 
							     << 0x34U) 
							    | (VL_ULL(0xfffffffffffff) 
							       & ((0U 
								   == 
								   (0x7ffU 
								    & (IData)(
									      (vlTOPp->io_c 
									       >> 0x34U))))
								   ? 
								  (VL_ULL(0xffffffffffffe) 
								   & (((QData)((IData)(
										__Vtemp8[1U])) 
								       << 0x21U) 
								      | ((QData)((IData)(
										__Vtemp8[0U])) 
									 << 1U)))
								   : vlTOPp->io_c))) 
							   >> 0x20U)));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN_io_c[0U] 
	= (IData)((((QData)((IData)((0x1ffU & (IData)(vlTOPp->ValExec_MulAddRecF64__DOT___T_394)))) 
		    << 0x34U) | (VL_ULL(0xfffffffffffff) 
				 & ((0U == (0x7ffU 
					    & (IData)(
						      (vlTOPp->io_c 
						       >> 0x34U))))
				     ? (VL_ULL(0xffffffffffffe) 
					& (((QData)((IData)(
							    __Vtemp8[1U])) 
					    << 0x21U) 
					   | ((QData)((IData)(
							      __Vtemp8[0U])) 
					      << 1U)))
				     : vlTOPp->io_c))));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN_io_c[1U] 
	= __Vtemp10[1U];
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN_io_c[2U] 
	= (1U & (IData)((vlTOPp->io_c >> 0x3fU)));
    VL_EXTEND_WQ(115,52, __Vtemp12, (VL_ULL(0xfffffffffffff) 
				     & vlTOPp->io_a));
    VL_SHIFTL_WWI(115,115,6, __Vtemp13, __Vtemp12, (IData)(vlTOPp->ValExec_MulAddRecF64__DOT___T_107));
    __Vtemp15[1U] = ((0xe0000000U & ((((IData)(vlTOPp->ValExec_MulAddRecF64__DOT___T_117)
				        ? 0U : ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT___T_116) 
						>> 9U)) 
				      | ((3U == (3U 
						 & ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT___T_116) 
						    >> 0xaU))) 
					 & (VL_ULL(0) 
					    != (VL_ULL(0xfffffffffffff) 
						& vlTOPp->io_a)))) 
				     << 0x1dU)) | (IData)(
							  ((((QData)((IData)(
									     (0x1ffU 
									      & (IData)(vlTOPp->ValExec_MulAddRecF64__DOT___T_116)))) 
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
										__Vtemp13[1U])) 
								       << 0x21U) 
								      | ((QData)((IData)(
										__Vtemp13[0U])) 
									 << 1U)))
								   : vlTOPp->io_a))) 
							   >> 0x20U)));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN_io_a[0U] 
	= (IData)((((QData)((IData)((0x1ffU & (IData)(vlTOPp->ValExec_MulAddRecF64__DOT___T_116)))) 
		    << 0x34U) | (VL_ULL(0xfffffffffffff) 
				 & ((0U == (0x7ffU 
					    & (IData)(
						      (vlTOPp->io_a 
						       >> 0x34U))))
				     ? (VL_ULL(0xffffffffffffe) 
					& (((QData)((IData)(
							    __Vtemp13[1U])) 
					    << 0x21U) 
					   | ((QData)((IData)(
							      __Vtemp13[0U])) 
					      << 1U)))
				     : vlTOPp->io_a))));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN_io_a[1U] 
	= __Vtemp15[1U];
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN_io_a[2U] 
	= (1U & (IData)((vlTOPp->io_a >> 0x3fU)));
    VL_EXTEND_WQ(115,52, __Vtemp17, (VL_ULL(0xfffffffffffff) 
				     & vlTOPp->io_b));
    VL_SHIFTL_WWI(115,115,6, __Vtemp18, __Vtemp17, (IData)(vlTOPp->ValExec_MulAddRecF64__DOT___T_246));
    __Vtemp20[1U] = ((0xe0000000U & ((((IData)(vlTOPp->ValExec_MulAddRecF64__DOT___T_256)
				        ? 0U : ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT___T_255) 
						>> 9U)) 
				      | ((3U == (3U 
						 & ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT___T_255) 
						    >> 0xaU))) 
					 & (VL_ULL(0) 
					    != (VL_ULL(0xfffffffffffff) 
						& vlTOPp->io_b)))) 
				     << 0x1dU)) | (IData)(
							  ((((QData)((IData)(
									     (0x1ffU 
									      & (IData)(vlTOPp->ValExec_MulAddRecF64__DOT___T_255)))) 
							     << 0x34U) 
							    | (VL_ULL(0xfffffffffffff) 
							       & ((0U 
								   == 
								   (0x7ffU 
								    & (IData)(
									      (vlTOPp->io_b 
									       >> 0x34U))))
								   ? 
								  (VL_ULL(0xffffffffffffe) 
								   & (((QData)((IData)(
										__Vtemp18[1U])) 
								       << 0x21U) 
								      | ((QData)((IData)(
										__Vtemp18[0U])) 
									 << 1U)))
								   : vlTOPp->io_b))) 
							   >> 0x20U)));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN_io_b[0U] 
	= (IData)((((QData)((IData)((0x1ffU & (IData)(vlTOPp->ValExec_MulAddRecF64__DOT___T_255)))) 
		    << 0x34U) | (VL_ULL(0xfffffffffffff) 
				 & ((0U == (0x7ffU 
					    & (IData)(
						      (vlTOPp->io_b 
						       >> 0x34U))))
				     ? (VL_ULL(0xffffffffffffe) 
					& (((QData)((IData)(
							    __Vtemp18[1U])) 
					    << 0x21U) 
					   | ((QData)((IData)(
							      __Vtemp18[0U])) 
					      << 1U)))
				     : vlTOPp->io_b))));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN_io_b[1U] 
	= __Vtemp20[1U];
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN_io_b[2U] 
	= (1U & (IData)((vlTOPp->io_b >> 0x3fU)));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfC 
	= ((3U == (3U & ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN_io_c[2U] 
			  << 2U) | (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN_io_c[1U] 
				    >> 0x1eU)))) & 
	   (~ (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN_io_c[1U] 
	       >> 0x1dU)));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig 
	= (((QData)((IData)((0U != (7U & ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN_io_c[2U] 
					   << 3U) | 
					  (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN_io_c[1U] 
					   >> 0x1dU)))))) 
	    << 0x34U) | (VL_ULL(0xfffffffffffff) & 
			 (((QData)((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN_io_c[1U])) 
			   << 0x20U) | (QData)((IData)(
						       vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN_io_c[0U])))));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN 
	= ((3U == (3U & ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN_io_a[2U] 
			  << 2U) | (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN_io_a[1U] 
				    >> 0x1eU)))) & 
	   (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN_io_a[1U] 
	    >> 0x1dU));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA 
	= ((3U == (3U & ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN_io_a[2U] 
			  << 2U) | (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN_io_a[1U] 
				    >> 0x1eU)))) & 
	   (~ (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN_io_a[1U] 
	       >> 0x1dU)));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_sig 
	= (((QData)((IData)((0U != (7U & ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN_io_a[2U] 
					   << 3U) | 
					  (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN_io_a[1U] 
					   >> 0x1dU)))))) 
	    << 0x34U) | (VL_ULL(0xfffffffffffff) & 
			 (((QData)((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN_io_a[1U])) 
			   << 0x20U) | (QData)((IData)(
						       vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN_io_a[0U])))));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros 
	= (((0U == (7U & ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN_io_a[2U] 
			   << 3U) | (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN_io_a[1U] 
				     >> 0x1dU)))) | 
	    (0U == (7U & ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN_io_b[2U] 
			   << 3U) | (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN_io_b[1U] 
				     >> 0x1dU))))) 
	   & (0U == (7U & ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN_io_c[2U] 
			    << 3U) | (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN_io_c[1U] 
				      >> 0x1dU)))));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_isNaN 
	= ((3U == (3U & ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN_io_b[2U] 
			  << 2U) | (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN_io_b[1U] 
				    >> 0x1eU)))) & 
	   (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN_io_b[1U] 
	    >> 0x1dU));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfB 
	= ((3U == (3U & ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN_io_b[2U] 
			  << 2U) | (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN_io_b[1U] 
				    >> 0x1eU)))) & 
	   (~ (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN_io_b[1U] 
	       >> 0x1dU)));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_sig 
	= (((QData)((IData)((0U != (7U & ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN_io_b[2U] 
					   << 3U) | 
					  (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN_io_b[1U] 
					   >> 0x1dU)))))) 
	    << 0x34U) | (VL_ULL(0xfffffffffffff) & 
			 (((QData)((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN_io_b[1U])) 
			   << 0x20U) | (QData)((IData)(
						       vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN_io_b[0U])))));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__signProd 
	= (1U & (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN_io_a[2U] 
		 ^ vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN_io_b[2U]));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT___T_50 
	= (0x3fffU & (VL_EXTENDS_II(14,13, (0xfffU 
					    & ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN_io_a[2U] 
						<< 0xcU) 
					       | (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN_io_a[1U] 
						  >> 0x14U)))) 
		      + VL_EXTENDS_II(14,13, (0xfffU 
					      & ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN_io_b[2U] 
						  << 0xcU) 
						 | (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN_io_b[1U] 
						    >> 0x14U))))));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isNaNAOrB 
	= ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN) 
	   | (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_isNaN));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd 
	= ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA) 
	   | (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfB));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags 
	= (1U & ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__signProd) 
		 ^ vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN_io_c[2U]));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__sNatCAlignDist 
	= (0x3fffU & (((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT___T_50) 
		       - (IData)(0x7c8U)) - (0xfffU 
					     & ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN_io_c[2U] 
						 << 0xcU) 
						| (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN_io_c[1U] 
						   >> 0x14U)))));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_isInf 
	= ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd) 
	   | (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfC));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_invalidExc 
	= (((((((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN) 
		& (~ (IData)((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_sig 
			      >> 0x33U)))) | ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_isNaN) 
					      & (~ (IData)(
							   (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_sig 
							    >> 0x33U))))) 
	      | (((3U == (3U & ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN_io_c[2U] 
				 << 2U) | (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN_io_c[1U] 
					   >> 0x1eU)))) 
		  & (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN_io_c[1U] 
		     >> 0x1dU)) & (~ (IData)((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig 
					      >> 0x33U))))) 
	     | ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA) 
		& (0U == (7U & ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN_io_b[2U] 
				 << 3U) | (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN_io_b[1U] 
					   >> 0x1dU)))))) 
	    | ((0U == (7U & ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN_io_a[2U] 
			      << 3U) | (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN_io_a[1U] 
					>> 0x1dU)))) 
	       & (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfB))) 
	   | ((((~ (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isNaNAOrB)) 
		& (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd)) 
	       & (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfC)) 
	      & (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_sign 
	= ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__signProd) 
	   ^ (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign 
	= (((0U == (7U & ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN_io_a[2U] 
			   << 3U) | (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN_io_a[1U] 
				     >> 0x1dU)))) | 
	    (0U == (7U & ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN_io_b[2U] 
			   << 3U) | (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN_io_b[1U] 
				     >> 0x1dU))))) 
	   | VL_GTS_III(1,14,14, 0U, (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__sNatCAlignDist)));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
	= ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_invalidExc) 
	   | ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isNaNAOrB) 
	      | ((3U == (3U & ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN_io_c[2U] 
				<< 2U) | (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN_io_c[1U] 
					  >> 0x1eU)))) 
		 & (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN_io_c[1U] 
		    >> 0x1dU))));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT___T_61 
	= ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign) 
	   | (0x35U >= (0x1fffU & (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__sNatCAlignDist))));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist 
	= (0xffU & ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign)
		     ? 0U : ((0xa1U > (0x1fffU & (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__sNatCAlignDist)))
			      ? (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__sNatCAlignDist)
			      : 0xa1U)));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT___T_188 
	= (0x3fffU & (((0U != (7U & ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN_io_c[2U] 
				      << 3U) | (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN_io_c[1U] 
						>> 0x1dU)))) 
		       & (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT___T_61))
		       ? (0xfffU & ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN_io_c[2U] 
				     << 0xcU) | (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN_io_c[1U] 
						 >> 0x14U)))
		       : (((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT___T_50) 
			   - (IData)(0x7c8U)) - (IData)(0x35U))));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_CIsDominant 
	= ((0U != (7U & ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN_io_c[2U] 
			  << 3U) | (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN_io_c[1U] 
				    >> 0x1dU)))) & (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT___T_61));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_78 
	= ((0xfU & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
				   (0xfU & (~ ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
					       >> 2U)))) 
		    >> 5U)) | (0xf0U & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
						       (0xfU 
							& (~ 
							   ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
							    >> 2U)))) 
					<< 3U)));
    __Vtemp25[0U] = ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)
		      ? 0xffffffffU : 0U);
    __Vtemp25[1U] = ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)
		      ? 0xffffffffU : 0U);
    __Vtemp25[2U] = ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)
		      ? 0xffffffffU : 0U);
    __Vtemp25[3U] = ((0xffff8000U & ((IData)((VL_ULL(0x3fffffffffffff) 
					      & ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)
						  ? 
						 (~ vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig)
						  : vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig))) 
				     << 0xfU)) | ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)
						   ? 0x7fffU
						   : 0U));
    __Vtemp25[4U] = ((0x7fffU & ((IData)((VL_ULL(0x3fffffffffffff) 
					  & ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)
					      ? (~ vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig)
					      : vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig))) 
				 >> 0x11U)) | (0xffff8000U 
					       & ((IData)(
							  ((VL_ULL(0x3fffffffffffff) 
							    & ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)
							        ? 
							       (~ vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig)
							        : vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig)) 
							   >> 0x20U)) 
						  << 0xfU)));
    __Vtemp25[5U] = (0x7fffU & ((IData)(((VL_ULL(0x3fffffffffffff) 
					  & ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)
					      ? (~ vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig)
					      : vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig)) 
					 >> 0x20U)) 
				>> 0x11U));
    VL_SHIFTRS_WWI(165,165,8, __Vtemp26, __Vtemp25, (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U] 
	= __Vtemp26[0U];
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
	= __Vtemp26[1U];
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
	= __Vtemp26[2U];
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[3U] 
	= __Vtemp26[3U];
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[4U] 
	= __Vtemp26[4U];
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[5U] 
	= (0x1fU & __Vtemp26[5U]);
    __Vtemp29[0U] = 0U;
    __Vtemp29[1U] = 0U;
    __Vtemp29[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp30, __Vtemp29, (0x3fU 
						   & ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
						      >> 2U)));
    __Vtemp33[0U] = 0U;
    __Vtemp33[1U] = 0U;
    __Vtemp33[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp34, __Vtemp33, (0x3fU 
						   & ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
						      >> 2U)));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT___T_126 
	= ((0xfU & ((__Vtemp30[1U] << 4U) | (__Vtemp30[0U] 
					     >> 0x1cU))) 
	   | (0xf0U & ((__Vtemp34[1U] << 0xcU) | (0xff0U 
						  & (__Vtemp34[0U] 
						     >> 0x14U)))));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_88 
	= ((0x33U & ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_78) 
		     >> 2U)) | (0xccU & ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_78) 
					 << 2U)));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT___T_136 
	= ((0x33U & ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT___T_126) 
		     >> 2U)) | (0xccU & ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT___T_126) 
					 << 2U)));
    __Vtemp37[0U] = 0U;
    __Vtemp37[1U] = 0U;
    __Vtemp37[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp38, __Vtemp37, (0x3fU 
						   & ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
						      >> 2U)));
    __Vtemp41[0U] = 0U;
    __Vtemp41[1U] = 0U;
    __Vtemp41[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp42, __Vtemp41, (0x3fU 
						   & ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
						      >> 2U)));
    __Vtemp45[0U] = 0U;
    __Vtemp45[1U] = 0U;
    __Vtemp45[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp46, __Vtemp45, (0x3fU 
						   & ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
						      >> 2U)));
    __Vtemp49[0U] = 0U;
    __Vtemp49[1U] = 0U;
    __Vtemp49[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp50, __Vtemp49, (0x3fU 
						   & ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
						      >> 2U)));
    __Vtemp53[0U] = 0U;
    __Vtemp53[1U] = 0U;
    __Vtemp53[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp54, __Vtemp53, (0x3fU 
						   & ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
						      >> 2U)));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT___T_161 
	= ((((0U != (3U & (IData)((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig 
				   >> 0x34U)))) << 0xdU) 
	    | (((0U != (0xfU & (IData)((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig 
					>> 0x30U)))) 
		<< 0xcU) | (((0U != (0xfU & (IData)(
						    (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig 
						     >> 0x2cU)))) 
			     << 0xbU) | (((0U != (0xfU 
						  & (IData)(
							    (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig 
							     >> 0x28U)))) 
					  << 0xaU) 
					 | (((0U != 
					      (0xfU 
					       & (IData)(
							 (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig 
							  >> 0x24U)))) 
					     << 9U) 
					    | (((0U 
						 != 
						 (0xfU 
						  & (IData)(
							    (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig 
							     >> 0x20U)))) 
						<< 8U) 
					       | (((0U 
						    != 
						    (0xfU 
						     & (IData)(
							       (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig 
								>> 0x1cU)))) 
						   << 7U) 
						  | (((0U 
						       != 
						       (0xfU 
							& (IData)(
								  (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig 
								   >> 0x18U)))) 
						      << 6U) 
						     | (((0U 
							  != 
							  (0xfU 
							   & (IData)(
								     (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig 
								      >> 0x14U)))) 
							 << 5U) 
							| (((0U 
							     != 
							     (0xfU 
							      & (IData)(
									(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig 
									 >> 0x10U)))) 
							    << 4U) 
							   | (((0U 
								!= 
								(0xfU 
								 & (IData)(
									   (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig 
									    >> 0xcU)))) 
							       << 3U) 
							      | (((0U 
								   != 
								   (0xfU 
								    & (IData)(
									      (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig 
									       >> 8U)))) 
								  << 2U) 
								 | (((0U 
								      != 
								      (0xfU 
								       & (IData)(
										(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig 
										>> 4U)))) 
								     << 1U) 
								    | (0U 
								       != 
								       (0xfU 
									& (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig)))))))))))))))) 
	   & (((0xaa0U & ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT___T_136) 
			  << 4U)) | (0x1540U & ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT___T_136) 
						<< 6U))) 
	      | ((0x10U & (__Vtemp38[1U] << 4U)) | 
		 ((8U & (__Vtemp42[1U] << 2U)) | ((4U 
						   & __Vtemp46[1U]) 
						  | ((2U 
						      & (__Vtemp50[1U] 
							 >> 2U)) 
						     | (1U 
							& (__Vtemp54[1U] 
							   >> 4U))))))));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[0U] 
	= ((0xfffffffeU & ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
			    << 0x1eU) | (0x3ffffffeU 
					 & (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U] 
					    >> 2U)))) 
	   | ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)
	       ? ((7U == (7U & vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U])) 
		  & (0U == (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT___T_161)))
	       : ((0U != (7U & vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U])) 
		  | (0U != (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT___T_161)))));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[1U] 
	= ((1U & (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
		  >> 2U)) | (0xfffffffeU & ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
					     << 0x1eU) 
					    | (0x3ffffffeU 
					       & (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
						  >> 2U)))));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[2U] 
	= ((1U & (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
		  >> 2U)) | (0xfffffffeU & ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[3U] 
					     << 0x1eU) 
					    | (0x3ffffffeU 
					       & (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
						  >> 2U)))));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[3U] 
	= ((1U & (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[3U] 
		  >> 2U)) | (0xfffffffeU & ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[4U] 
					     << 0x1eU) 
					    | (0x3ffffffeU 
					       & (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[3U] 
						  >> 2U)))));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[4U] 
	= ((1U & (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[4U] 
		  >> 2U)) | (0xfffffffeU & ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[5U] 
					     << 0x1eU) 
					    | (0x3ffffffeU 
					       & (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[4U] 
						  >> 2U)))));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[5U] 
	= ((1U & (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[5U] 
		  >> 2U)) | (6U & (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[5U] 
				   >> 2U)));
    VL_EXTEND_WQ(106,53, __Vtemp62, (VL_ULL(0x1fffffffffffff) 
				     & vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_sig));
    VL_EXTEND_WQ(106,53, __Vtemp63, (VL_ULL(0x1fffffffffffff) 
				     & vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_sig));
    VL_MUL_W(4, __Vtemp64, __Vtemp62, __Vtemp63);
    __Vtemp65[0U] = __Vtemp64[0U];
    __Vtemp65[1U] = __Vtemp64[1U];
    __Vtemp65[2U] = __Vtemp64[2U];
    __Vtemp65[3U] = (0x3ffU & __Vtemp64[3U]);
    VL_EXTEND_WW(107,106, __Vtemp66, __Vtemp65);
    __Vtemp69[0U] = ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[1U] 
		      << 0x1fU) | (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[0U] 
				   >> 1U));
    __Vtemp69[1U] = ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[2U] 
		      << 0x1fU) | (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[1U] 
				   >> 1U));
    __Vtemp69[2U] = ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[3U] 
		      << 0x1fU) | (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[2U] 
				   >> 1U));
    __Vtemp69[3U] = (0x3ffU & ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[4U] 
				<< 0x1fU) | (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[3U] 
					     >> 1U)));
    VL_EXTEND_WW(107,106, __Vtemp70, __Vtemp69);
    VL_ADD_W(4, __Vtemp71, __Vtemp66, __Vtemp70);
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult[0U] 
	= __Vtemp71[0U];
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult[1U] 
	= __Vtemp71[1U];
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult[2U] 
	= __Vtemp71[2U];
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult[3U] 
	= (0x7ffU & __Vtemp71[3U]);
    __Vtemp77[3U] = ((0xfffff800U & ((IData)((VL_ULL(0x7fffffffffffff) 
					      & ((0x400U 
						  & vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult[3U])
						  ? 
						 (VL_ULL(1) 
						  + 
						  (((QData)((IData)(
								    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[5U])) 
						    << 0x35U) 
						   | (((QData)((IData)(
								       vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[4U])) 
						       << 0x15U) 
						      | ((QData)((IData)(
									 vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[3U])) 
							 >> 0xbU))))
						  : 
						 (((QData)((IData)(
								   vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[5U])) 
						   << 0x35U) 
						  | (((QData)((IData)(
								      vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[4U])) 
						      << 0x15U) 
						     | ((QData)((IData)(
									vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[3U])) 
							>> 0xbU)))))) 
				     << 0xbU)) | ((1U 
						   & (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult[2U] 
						      >> 0x1fU)) 
						  | (0x7feU 
						     & (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult[3U] 
							<< 1U))));
    __Vtemp77[4U] = ((0x7ffU & ((IData)((VL_ULL(0x7fffffffffffff) 
					 & ((0x400U 
					     & vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult[3U])
					     ? (VL_ULL(1) 
						+ (
						   ((QData)((IData)(
								    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[5U])) 
						    << 0x35U) 
						   | (((QData)((IData)(
								       vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[4U])) 
						       << 0x15U) 
						      | ((QData)((IData)(
									 vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[3U])) 
							 >> 0xbU))))
					     : (((QData)((IData)(
								 vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[5U])) 
						 << 0x35U) 
						| (((QData)((IData)(
								    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[4U])) 
						    << 0x15U) 
						   | ((QData)((IData)(
								      vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[3U])) 
						      >> 0xbU)))))) 
				>> 0x15U)) | (0xfffff800U 
					      & ((IData)(
							 ((VL_ULL(0x7fffffffffffff) 
							   & ((0x400U 
							       & vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult[3U])
							       ? 
							      (VL_ULL(1) 
							       + 
							       (((QData)((IData)(
										vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[5U])) 
								 << 0x35U) 
								| (((QData)((IData)(
										vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[4U])) 
								    << 0x15U) 
								   | ((QData)((IData)(
										vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[3U])) 
								      >> 0xbU))))
							       : 
							      (((QData)((IData)(
										vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[5U])) 
								<< 0x35U) 
							       | (((QData)((IData)(
										vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[4U])) 
								   << 0x15U) 
								  | ((QData)((IData)(
										vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[3U])) 
								     >> 0xbU))))) 
							  >> 0x20U)) 
						 << 0xbU)));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[0U] 
	= ((0xfffffffeU & (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult[0U] 
			   << 1U)) | (1U & vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[0U]));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U] 
	= ((1U & (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult[0U] 
		  >> 0x1fU)) | (0xfffffffeU & (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult[1U] 
					       << 1U)));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[2U] 
	= ((1U & (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult[1U] 
		  >> 0x1fU)) | (0xfffffffeU & (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult[2U] 
					       << 1U)));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[3U] 
	= __Vtemp77[3U];
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[4U] 
	= __Vtemp77[4U];
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[5U] 
	= (0x7ffU & ((IData)(((VL_ULL(0x7fffffffffffff) 
			       & ((0x400U & vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult[3U])
				   ? (VL_ULL(1) + (
						   ((QData)((IData)(
								    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[5U])) 
						    << 0x35U) 
						   | (((QData)((IData)(
								       vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[4U])) 
						       << 0x15U) 
						      | ((QData)((IData)(
									 vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[3U])) 
							 >> 0xbU))))
				   : (((QData)((IData)(
						       vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[5U])) 
				       << 0x35U) | 
				      (((QData)((IData)(
							vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[4U])) 
					<< 0x15U) | 
				       ((QData)((IData)(
							vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[3U])) 
					>> 0xbU))))) 
			      >> 0x20U)) >> 0x15U));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum[0U] 
	= ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)
	    ? (~ ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[2U] 
		   << 0xaU) | (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U] 
			       >> 0x16U))) : ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[2U] 
					       << 9U) 
					      | (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U] 
						 >> 0x17U)));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum[1U] 
	= ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)
	    ? (~ ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[3U] 
		   << 0xaU) | (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[2U] 
			       >> 0x16U))) : ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[3U] 
					       << 9U) 
					      | (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[2U] 
						 >> 0x17U)));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum[2U] 
	= ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)
	    ? (~ ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[4U] 
		   << 0xaU) | (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[3U] 
			       >> 0x16U))) : ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[4U] 
					       << 9U) 
					      | (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[3U] 
						 >> 0x17U)));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum[3U] 
	= (0xfffU & ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)
		      ? (~ ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[5U] 
			     << 0xaU) | (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[4U] 
					 >> 0x16U)))
		      : ((0x600U & (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC[5U] 
				    << 9U)) | (0x1ffU 
					       & ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[5U] 
						   << 9U) 
						  | (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[4U] 
						     >> 0x17U))))));
    __Vtemp90[0U] = vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[0U];
    __Vtemp90[1U] = vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U];
    __Vtemp90[2U] = vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[2U];
    __Vtemp90[3U] = vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[3U];
    VL_EXTEND_WI(109,1, __Vtemp91, (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags));
    VL_ADD_W(4, __Vtemp92, __Vtemp90, __Vtemp91);
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
	= ((0x2000U & vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[3U])
	    ? (~ vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[0U])
	    : __Vtemp92[0U]);
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
	= ((0x2000U & vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[3U])
	    ? (~ vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U])
	    : __Vtemp92[1U]);
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
	= ((0x2000U & vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[3U])
	    ? (~ vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[2U])
	    : __Vtemp92[2U]);
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
	= (0x1fffU & ((0x2000U & vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[3U])
		       ? (~ vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[3U])
		       : __Vtemp92[3U]));
    VL_EXTEND_WW(171,108, __Vtemp97, vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum);
    VL_SHIFTL_WWI(171,171,6, __Vtemp98, __Vtemp97, 
		  (0x3fU & (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist)));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_20[0U] 
	= __Vtemp98[0U];
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_20[1U] 
	= __Vtemp98[1U];
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_20[2U] 
	= __Vtemp98[2U];
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_20[3U] 
	= __Vtemp98[3U];
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_20[4U] 
	= __Vtemp98[4U];
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_20[5U] 
	= (0x7ffU & __Vtemp98[5U]);
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
	= (((QData)((IData)((1U & (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
				   >> 0xcU)))) << 0x36U) 
	   | (((QData)((IData)((0U != (3U & (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
					     >> 0xaU))))) 
	       << 0x35U) | (((QData)((IData)((0U != 
					      (3U & 
					       (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
						>> 8U))))) 
			     << 0x34U) | (((QData)((IData)(
							   (0U 
							    != 
							    (3U 
							     & (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
								>> 6U))))) 
					   << 0x33U) 
					  | (((QData)((IData)(
							      (0U 
							       != 
							       (3U 
								& (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
								   >> 4U))))) 
					      << 0x32U) 
					     | (((QData)((IData)(
								 (0U 
								  != 
								  (3U 
								   & (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
								      >> 2U))))) 
						 << 0x31U) 
						| (((QData)((IData)(
								    (0U 
								     != 
								     (3U 
								      & vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U])))) 
						    << 0x30U) 
						   | (((QData)((IData)(
								       (((0U 
									  != 
									  (3U 
									   & ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
									       << 2U) 
									      | (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
										>> 0x1eU)))) 
									 << 6U) 
									| (((0U 
									     != 
									     (3U 
									      & ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
										<< 4U) 
										| (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
										>> 0x1cU)))) 
									    << 5U) 
									   | (((0U 
										!= 
										(3U 
										& ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
										<< 6U) 
										| (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
										>> 0x1aU)))) 
									       << 4U) 
									      | (((0U 
										!= 
										(3U 
										& ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
										<< 8U) 
										| (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
										>> 0x18U)))) 
										<< 3U) 
										| (((0U 
										!= 
										(3U 
										& ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
										<< 0xaU) 
										| (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
										>> 0x16U)))) 
										<< 2U) 
										| (((0U 
										!= 
										(3U 
										& ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
										<< 0xcU) 
										| (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
										>> 0x14U)))) 
										<< 1U) 
										| (0U 
										!= 
										(3U 
										& ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
										<< 0xeU) 
										| (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
										>> 0x12U)))))))))))) 
						       << 0x29U) 
						      | (((QData)((IData)(
									  (((0U 
									     != 
									     (3U 
									      & ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
										<< 0x10U) 
										| (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
										>> 0x10U)))) 
									    << 0xdU) 
									   | (((0U 
										!= 
										(3U 
										& ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
										<< 0x12U) 
										| (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
										>> 0xeU)))) 
									       << 0xcU) 
									      | (((0U 
										!= 
										(3U 
										& ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
										<< 0x14U) 
										| (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
										>> 0xcU)))) 
										<< 0xbU) 
										| (((0U 
										!= 
										(3U 
										& ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
										<< 0x16U) 
										| (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
										>> 0xaU)))) 
										<< 0xaU) 
										| (((0U 
										!= 
										(3U 
										& ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
										<< 0x18U) 
										| (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
										>> 8U)))) 
										<< 9U) 
										| (((0U 
										!= 
										(3U 
										& ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
										<< 0x1aU) 
										| (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
										>> 6U)))) 
										<< 8U) 
										| (((0U 
										!= 
										(3U 
										& ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
										<< 0x1cU) 
										| (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
										>> 4U)))) 
										<< 7U) 
										| (((0U 
										!= 
										(3U 
										& ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
										<< 0x1eU) 
										| (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
										>> 2U)))) 
										<< 6U) 
										| (((0U 
										!= 
										(3U 
										& vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U])) 
										<< 5U) 
										| (((0U 
										!= 
										(3U 
										& ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
										<< 2U) 
										| (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
										>> 0x1eU)))) 
										<< 4U) 
										| (((0U 
										!= 
										(3U 
										& ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
										<< 4U) 
										| (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
										>> 0x1cU)))) 
										<< 3U) 
										| (((0U 
										!= 
										(3U 
										& ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
										<< 6U) 
										| (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
										>> 0x1aU)))) 
										<< 2U) 
										| (((0U 
										!= 
										(3U 
										& ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
										<< 8U) 
										| (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
										>> 0x18U)))) 
										<< 1U) 
										| (0U 
										!= 
										(3U 
										& ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
										<< 0xaU) 
										| (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
										>> 0x16U))))))))))))))))))) 
							  << 0x1bU) 
							 | (QData)((IData)(
									   (((0U 
									      != 
									      (3U 
									       & ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
										<< 0xcU) 
										| (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
										>> 0x14U)))) 
									     << 0x1aU) 
									    | (((0U 
										!= 
										(3U 
										& ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
										<< 0xeU) 
										| (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
										>> 0x12U)))) 
										<< 0x19U) 
									       | (((0U 
										!= 
										(3U 
										& ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
										<< 0x10U) 
										| (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
										>> 0x10U)))) 
										<< 0x18U) 
										| (((0U 
										!= 
										(3U 
										& ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
										<< 0x12U) 
										| (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
										>> 0xeU)))) 
										<< 0x17U) 
										| (((0U 
										!= 
										(3U 
										& ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
										<< 0x14U) 
										| (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
										>> 0xcU)))) 
										<< 0x16U) 
										| (((0U 
										!= 
										(3U 
										& ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
										<< 0x16U) 
										| (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
										>> 0xaU)))) 
										<< 0x15U) 
										| (((0U 
										!= 
										(3U 
										& ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
										<< 0x18U) 
										| (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
										>> 8U)))) 
										<< 0x14U) 
										| ((((0U 
										!= 
										(3U 
										& ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
										<< 0x1aU) 
										| (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
										>> 6U)))) 
										<< 0x13U) 
										| (((0U 
										!= 
										(3U 
										& ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
										<< 0x1cU) 
										| (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
										>> 4U)))) 
										<< 0x12U) 
										| (((0U 
										!= 
										(3U 
										& ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
										<< 0x1eU) 
										| (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
										>> 2U)))) 
										<< 0x11U) 
										| (((0U 
										!= 
										(3U 
										& vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U])) 
										<< 0x10U) 
										| (((0U 
										!= 
										(3U 
										& ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
										<< 2U) 
										| (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
										>> 0x1eU)))) 
										<< 0xfU) 
										| (((0U 
										!= 
										(3U 
										& ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
										<< 4U) 
										| (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
										>> 0x1cU)))) 
										<< 0xeU) 
										| ((0U 
										!= 
										(3U 
										& ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
										<< 6U) 
										| (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
										>> 0x1aU)))) 
										<< 0xdU))))))) 
										| (((0U 
										!= 
										(3U 
										& ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
										<< 8U) 
										| (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
										>> 0x18U)))) 
										<< 0xcU) 
										| (((0U 
										!= 
										(3U 
										& ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
										<< 0xaU) 
										| (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
										>> 0x16U)))) 
										<< 0xbU) 
										| (((0U 
										!= 
										(3U 
										& ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
										<< 0xcU) 
										| (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
										>> 0x14U)))) 
										<< 0xaU) 
										| (((0U 
										!= 
										(3U 
										& ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
										<< 0xeU) 
										| (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
										>> 0x12U)))) 
										<< 9U) 
										| (((0U 
										!= 
										(3U 
										& ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
										<< 0x10U) 
										| (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
										>> 0x10U)))) 
										<< 8U) 
										| (((0U 
										!= 
										(3U 
										& ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
										<< 0x12U) 
										| (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
										>> 0xeU)))) 
										<< 7U) 
										| (((0U 
										!= 
										(3U 
										& ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
										<< 0x14U) 
										| (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
										>> 0xcU)))) 
										<< 6U) 
										| (((0U 
										!= 
										(3U 
										& ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
										<< 0x16U) 
										| (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
										>> 0xaU)))) 
										<< 5U) 
										| (((0U 
										!= 
										(3U 
										& ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
										<< 0x18U) 
										| (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
										>> 8U)))) 
										<< 4U) 
										| (((0U 
										!= 
										(3U 
										& ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
										<< 0x1aU) 
										| (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
										>> 6U)))) 
										<< 3U) 
										| (((0U 
										!= 
										(3U 
										& ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
										<< 0x1cU) 
										| (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
										>> 4U)))) 
										<< 2U) 
										| (((0U 
										!= 
										(3U 
										& ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
										<< 0x1eU) 
										| (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
										>> 2U)))) 
										<< 1U) 
										| (0U 
										!= 
										(3U 
										& vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U])))))))))))))))))))))))))))))))));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2 
	= ((1U & (IData)((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
			  >> 0x36U))) ? 0U : ((1U & (IData)(
							    (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
							     >> 0x35U)))
					       ? 1U
					       : ((1U 
						   & (IData)(
							     (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
							      >> 0x34U)))
						   ? 2U
						   : 
						  ((1U 
						    & (IData)(
							      (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
							       >> 0x33U)))
						    ? 3U
						    : 
						   ((1U 
						     & (IData)(
							       (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
								>> 0x32U)))
						     ? 4U
						     : 
						    ((1U 
						      & (IData)(
								(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
								 >> 0x31U)))
						      ? 5U
						      : 
						     ((1U 
						       & (IData)(
								 (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
								  >> 0x30U)))
						       ? 6U
						       : 
						      ((1U 
							& (IData)(
								  (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
								   >> 0x2fU)))
						        ? 7U
						        : 
						       ((1U 
							 & (IData)(
								   (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
								    >> 0x2eU)))
							 ? 8U
							 : 
							((1U 
							  & (IData)(
								    (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
								     >> 0x2dU)))
							  ? 9U
							  : 
							 ((1U 
							   & (IData)(
								     (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
								      >> 0x2cU)))
							   ? 0xaU
							   : 
							  ((1U 
							    & (IData)(
								      (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
								       >> 0x2bU)))
							    ? 0xbU
							    : 
							   ((1U 
							     & (IData)(
								       (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
									>> 0x2aU)))
							     ? 0xcU
							     : 
							    ((1U 
							      & (IData)(
									(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
									 >> 0x29U)))
							      ? 0xdU
							      : 
							     ((1U 
							       & (IData)(
									 (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
									  >> 0x28U)))
							       ? 0xeU
							       : 
							      ((1U 
								& (IData)(
									  (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
									   >> 0x27U)))
							        ? 0xfU
							        : 
							       ((1U 
								 & (IData)(
									   (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
									    >> 0x26U)))
								 ? 0x10U
								 : 
								((1U 
								  & (IData)(
									    (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
									     >> 0x25U)))
								  ? 0x11U
								  : 
								 ((1U 
								   & (IData)(
									     (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
									      >> 0x24U)))
								   ? 0x12U
								   : 
								  ((1U 
								    & (IData)(
									      (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
									       >> 0x23U)))
								    ? 0x13U
								    : 
								   ((1U 
								     & (IData)(
									       (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
										>> 0x22U)))
								     ? 0x14U
								     : 
								    ((1U 
								      & (IData)(
										(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
										>> 0x21U)))
								      ? 0x15U
								      : 
								     ((1U 
								       & (IData)(
										(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
										>> 0x20U)))
								       ? 0x16U
								       : 
								      ((1U 
									& (IData)(
										(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
										>> 0x1fU)))
								        ? 0x17U
								        : 
								       ((1U 
									 & (IData)(
										(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
										>> 0x1eU)))
									 ? 0x18U
									 : 
									((1U 
									  & (IData)(
										(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
										>> 0x1dU)))
									  ? 0x19U
									  : 
									 ((1U 
									   & (IData)(
										(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
										>> 0x1cU)))
									   ? 0x1aU
									   : 
									  ((1U 
									    & (IData)(
										(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
										>> 0x1bU)))
									    ? 0x1bU
									    : 
									   ((1U 
									     & (IData)(
										(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
										>> 0x1aU)))
									     ? 0x1cU
									     : 
									    ((1U 
									      & (IData)(
										(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
										>> 0x19U)))
									      ? 0x1dU
									      : 
									     ((1U 
									       & (IData)(
										(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
										>> 0x18U)))
									       ? 0x1eU
									       : 
									      ((1U 
										& (IData)(
										(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
										>> 0x17U)))
									        ? 0x1fU
									        : 
									       ((1U 
										& (IData)(
										(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
										>> 0x16U)))
										 ? 0x20U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
										>> 0x15U)))
										 ? 0x21U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
										>> 0x14U)))
										 ? 0x22U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
										>> 0x13U)))
										 ? 0x23U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
										>> 0x12U)))
										 ? 0x24U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
										>> 0x11U)))
										 ? 0x25U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
										>> 0x10U)))
										 ? 0x26U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
										>> 0xfU)))
										 ? 0x27U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
										>> 0xeU)))
										 ? 0x28U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
										>> 0xdU)))
										 ? 0x29U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
										>> 0xcU)))
										 ? 0x2aU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
										>> 0xbU)))
										 ? 0x2bU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
										>> 0xaU)))
										 ? 0x2cU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
										>> 9U)))
										 ? 0x2dU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
										>> 8U)))
										 ? 0x2eU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
										>> 7U)))
										 ? 0x2fU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
										>> 6U)))
										 ? 0x30U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
										>> 5U)))
										 ? 0x31U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
										>> 4U)))
										 ? 0x32U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
										>> 3U)))
										 ? 0x33U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
										>> 2U)))
										 ? 0x34U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
										>> 1U)))
										 ? 0x35U
										 : 0x36U))))))))))))))))))))))))))))))))))))))))))))))))))))));
    VL_EXTEND_WW(236,109, __Vtemp101, vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum);
    VL_SHIFTL_WWI(236,236,7, __Vtemp102, __Vtemp101, 
		  ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
		   << 1U));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_399[0U] 
	= __Vtemp102[0U];
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_399[1U] 
	= __Vtemp102[1U];
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_399[2U] 
	= __Vtemp102[2U];
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_399[3U] 
	= __Vtemp102[3U];
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_399[4U] 
	= __Vtemp102[4U];
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_399[5U] 
	= __Vtemp102[5U];
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_399[6U] 
	= __Vtemp102[6U];
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_399[7U] 
	= (0xfffU & __Vtemp102[7U]);
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_457 
	= ((0xfU & (IData)((VL_ULL(0xfffffff) & (VL_SHIFTRS_QQI(33,33,5, VL_ULL(0x100000000), 
								(0x1fU 
								 & (~ 
								    ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
								     >> 1U)))) 
						 >> 5U)))) 
	   | (0xf0U & ((IData)((VL_ULL(0xffffffff) 
				& (VL_SHIFTRS_QQI(33,33,5, VL_ULL(0x100000000), 
						  (0x1fU 
						   & (~ 
						      ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
						       >> 1U)))) 
				   >> 1U))) << 4U)));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sExp 
	= (0x1fffU & ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_CIsDominant)
		       ? ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT___T_188) 
			  - ((0x1ffcU & (VL_NEGATE_I((IData)(
							     (1U 
							      & ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags) 
								 >> 1U)))) 
					 << 2U)) | (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)))
		       : ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT___T_188) 
			  - ((0x1f00U & (VL_NEGATE_I((IData)(
							     (1U 
							      & ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
								 >> 6U)))) 
					 << 8U)) | 
			     ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
			      << 1U)))));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_467 
	= ((0x33U & ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_457) 
		     >> 2U)) | (0xccU & ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_457) 
					 << 2U)));
    __Vtemp105[0U] = 0U;
    __Vtemp105[1U] = 0U;
    __Vtemp105[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp106, __Vtemp105, 
		   (0x3fU & (~ (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sExp))));
    __Vtemp109[0U] = 0U;
    __Vtemp109[1U] = 0U;
    __Vtemp109[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp110, __Vtemp109, 
		   (0x3fU & (~ (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sExp))));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_79 
	= ((0xffU & ((0x800U & (__Vtemp106[2U] << 0xbU)) 
		     | (__Vtemp106[1U] >> 0x15U))) 
	   | (0xff00U & ((0x8000000U & (__Vtemp110[2U] 
					<< 0x1bU)) 
			 | (0x7ffff00U & (__Vtemp110[1U] 
					  >> 5U)))));
    __Vtemp113[0U] = 0U;
    __Vtemp113[1U] = 0U;
    __Vtemp113[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp114, __Vtemp113, 
		   (0x3fU & (~ (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sExp))));
    __Vtemp117[0U] = 0U;
    __Vtemp117[1U] = 0U;
    __Vtemp117[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp118, __Vtemp117, 
		   (0x3fU & (~ (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sExp))));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_28 
	= ((0xffffU & ((__Vtemp114[1U] << 3U) | (__Vtemp114[0U] 
						 >> 0x1dU))) 
	   | (0xffff0000U & (__Vtemp118[0U] << 3U)));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
	= ((VL_ULL(0xfffffffffffffe) & (((QData)((IData)(
							 vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_399[3U])) 
					 << 0x2aU) 
					| (((QData)((IData)(
							    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_399[2U])) 
					    << 0xaU) 
					   | (VL_ULL(0x3fffffffffe) 
					      & ((QData)((IData)(
								 vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_399[1U])) 
						 >> 0x16U))))) 
	   | (QData)((IData)(((0U != (7U & ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_399[2U] 
					     << 0xcU) 
					    | (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_399[1U] 
					       >> 0x14U)))) 
			      | (0U != (((0x2000U & 
					  ((IData)(
						   (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
						    >> 0x1aU)) 
					   << 0xdU)) 
					 | (((0U != 
					      (3U & (IData)(
							    (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
							     >> 0x18U)))) 
					     << 0xcU) 
					    | (((0U 
						 != 
						 (3U 
						  & (IData)(
							    (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
							     >> 0x16U)))) 
						<< 0xbU) 
					       | (((0U 
						    != 
						    (3U 
						     & (IData)(
							       (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
								>> 0x14U)))) 
						   << 0xaU) 
						  | (((0U 
						       != 
						       (3U 
							& (IData)(
								  (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
								   >> 0x12U)))) 
						      << 9U) 
						     | (((0U 
							  != 
							  (3U 
							   & (IData)(
								     (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
								      >> 0x10U)))) 
							 << 8U) 
							| (((0U 
							     != 
							     (3U 
							      & (IData)(
									(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
									 >> 0xeU)))) 
							    << 7U) 
							   | (((0U 
								!= 
								(3U 
								 & (IData)(
									   (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
									    >> 0xcU)))) 
							       << 6U) 
							      | (((0U 
								   != 
								   (3U 
								    & (IData)(
									      (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
									       >> 0xaU)))) 
								  << 5U) 
								 | (((0U 
								      != 
								      (3U 
								       & (IData)(
										(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
										>> 8U)))) 
								     << 4U) 
								    | (((0U 
									 != 
									 (3U 
									  & (IData)(
										(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
										>> 6U)))) 
									<< 3U) 
								       | (((0U 
									    != 
									    (3U 
									     & (IData)(
										(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
										>> 4U)))) 
									   << 2U) 
									  | (((0U 
									       != 
									       (3U 
										& (IData)(
										(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum 
										>> 2U)))) 
									      << 1U) 
									     | (0U 
										!= 
										(3U 
										& (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum)))))))))))))))) 
					& (((0xaa0U 
					     & ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_467) 
						<< 4U)) 
					    | (0x1540U 
					       & ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_467) 
						  << 6U))) 
					   | ((0x10U 
					       & ((IData)(
							  (VL_ULL(0xffffff) 
							   & (VL_SHIFTRS_QQI(33,33,5, VL_ULL(0x100000000), 
									     (0x1fU 
									      & (~ 
										((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
										>> 1U)))) 
							      >> 9U))) 
						  << 4U)) 
					      | ((8U 
						  & ((IData)(
							     (VL_ULL(0x7fffff) 
							      & (VL_SHIFTRS_QQI(33,33,5, VL_ULL(0x100000000), 
										(0x1fU 
										& (~ 
										((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
										>> 1U)))) 
								 >> 0xaU))) 
						     << 3U)) 
						 | ((4U 
						     & ((IData)(
								(VL_ULL(0x3fffff) 
								 & (VL_SHIFTRS_QQI(33,33,5, VL_ULL(0x100000000), 
										(0x1fU 
										& (~ 
										((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
										>> 1U)))) 
								    >> 0xbU))) 
							<< 2U)) 
						    | ((2U 
							& ((IData)(
								   (VL_ULL(0x1fffff) 
								    & (VL_SHIFTRS_QQI(33,33,5, VL_ULL(0x100000000), 
										(0x1fU 
										& (~ 
										((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
										>> 1U)))) 
								       >> 0xcU))) 
							   << 1U)) 
						       | (1U 
							  & (IData)(
								    (VL_ULL(0xfffff) 
								     & (VL_SHIFTRS_QQI(33,33,5, VL_ULL(0x100000000), 
										(0x1fU 
										& (~ 
										((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
										>> 1U)))) 
									>> 0xdU)))))))))))))));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_89 
	= ((0xf0fU & ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_79) 
		      >> 4U)) | (0xf0f0U & ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_79) 
					    << 4U)));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_38 
	= ((0xff00ffU & (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_28 
			 >> 8U)) | (0xff00ff00U & (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_28 
						   << 8U)));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_isZero 
	= ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros) 
	   | ((~ (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_CIsDominant)) 
	      & (0U == (3U & (IData)((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
				      >> 0x36U))))));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sign 
	= (1U & ((((((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd) 
		     & (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__signProd)) 
		    | ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfC) 
		       & (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_sign))) 
		   | ((((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros) 
			& (2U != (IData)(vlTOPp->io_roundingMode))) 
		       & (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__signProd)) 
		      & (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_sign))) 
		  | (((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros) 
		      & (2U == (IData)(vlTOPp->io_roundingMode))) 
		     & ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__signProd) 
			| (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_sign)))) 
		 | (((~ ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd) 
			 | (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfC))) 
		     & (~ (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros))) 
		    & ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_CIsDominant)
		        ? (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_sign)
		        : ((0U == (3U & (IData)((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig 
						 >> 0x36U))))
			    ? (2U == (IData)(vlTOPp->io_roundingMode))
			    : ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__signProd) 
			       ^ (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[3U] 
				  >> 0xdU)))))));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sig 
	= ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_CIsDominant)
	    ? ((VL_ULL(0xfffffffffffffe) & (((QData)((IData)(
							     vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_20[3U])) 
					     << 0x2cU) 
					    | (((QData)((IData)(
								vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_20[2U])) 
						<< 0xcU) 
					       | (VL_ULL(0xffffffffffe) 
						  & ((QData)((IData)(
								     vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_20[1U])) 
						     >> 0x14U))))) 
	       | (QData)((IData)((((0U != (7U & ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_20[2U] 
						  << 0xeU) 
						 | (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_20[1U] 
						    >> 0x12U)))) 
				   | (0U != ((((0U 
						!= 
						(7U 
						 & ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum[2U] 
						     << 0xeU) 
						    | (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum[1U] 
						       >> 0x12U)))) 
					       << 0xdU) 
					      | (((0U 
						   != 
						   (0xfU 
						    & ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum[2U] 
							<< 0x12U) 
						       | (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum[1U] 
							  >> 0xeU)))) 
						  << 0xcU) 
						 | (((0U 
						      != 
						      (0xfU 
						       & ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum[2U] 
							   << 0x16U) 
							  | (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum[1U] 
							     >> 0xaU)))) 
						     << 0xbU) 
						    | (((0U 
							 != 
							 (0xfU 
							  & ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum[2U] 
							      << 0x1aU) 
							     | (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum[1U] 
								>> 6U)))) 
							<< 0xaU) 
						       | (((0U 
							    != 
							    (0xfU 
							     & ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum[2U] 
								 << 0x1eU) 
								| (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum[1U] 
								   >> 2U)))) 
							   << 9U) 
							  | (((0U 
							       != 
							       (0xfU 
								& ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum[1U] 
								    << 2U) 
								   | (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum[0U] 
								      >> 0x1eU)))) 
							      << 8U) 
							     | (((0U 
								  != 
								  (0xfU 
								   & ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum[1U] 
								       << 6U) 
								      | (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum[0U] 
									 >> 0x1aU)))) 
								 << 7U) 
								| (((0U 
								     != 
								     (0xfU 
								      & ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum[1U] 
									  << 0xaU) 
									 | (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum[0U] 
									    >> 0x16U)))) 
								    << 6U) 
								   | (((0U 
									!= 
									(0xfU 
									 & ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum[1U] 
									     << 0xeU) 
									    | (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum[0U] 
									       >> 0x12U)))) 
								       << 5U) 
								      | (((0U 
									   != 
									   (0xfU 
									    & ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum[1U] 
										<< 0x12U) 
									       | (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum[0U] 
										>> 0xeU)))) 
									  << 4U) 
									 | (((0U 
									      != 
									      (0xfU 
									       & ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum[1U] 
										<< 0x16U) 
										| (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum[0U] 
										>> 0xaU)))) 
									     << 3U) 
									    | (((0U 
										!= 
										(0xfU 
										& ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum[1U] 
										<< 0x1aU) 
										| (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum[0U] 
										>> 6U)))) 
										<< 2U) 
									       | (((0U 
										!= 
										(0xfU 
										& ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum[1U] 
										<< 0x1eU) 
										| (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum[0U] 
										>> 2U)))) 
										<< 1U) 
										| (0U 
										!= 
										(0xcU 
										& (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum[0U] 
										<< 2U)))))))))))))))) 
					     & (((0xaa0U 
						  & ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_88) 
						     << 4U)) 
						 | (0x1540U 
						    & ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_88) 
						       << 6U))) 
						| ((0x10U 
						    & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
								      (0xfU 
								       & (~ 
									  ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
									   >> 2U)))) 
						       >> 5U)) 
						   | ((8U 
						       & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
									 (0xfU 
									  & (~ 
									     ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
									      >> 2U)))) 
							  >> 7U)) 
						      | ((4U 
							  & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
									    (0xfU 
									     & (~ 
										((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
										>> 2U)))) 
							     >> 9U)) 
							 | ((2U 
							     & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
									       (0xfU 
										& (~ 
										((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
										>> 2U)))) 
								>> 0xbU)) 
							    | (1U 
							       & (VL_SHIFTRS_III(17,17,4, 0x10000U, 
										(0xfU 
										& (~ 
										((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist) 
										>> 2U)))) 
								  >> 0xdU)))))))))) 
				  | ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)
				      ? (VL_ULL(0) 
					 != (VL_ULL(0x1fffffffffffff) 
					     & (~ (
						   ((QData)((IData)(
								    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[2U])) 
						    << 0x3fU) 
						   | (((QData)((IData)(
								       vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U])) 
						       << 0x1fU) 
						      | ((QData)((IData)(
									 vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[0U])) 
							 >> 1U))))))
				      : (VL_ULL(0) 
					 != (VL_ULL(0x3fffffffffffff) 
					     & (((QData)((IData)(
								 vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[2U])) 
						 << 0x3fU) 
						| (((QData)((IData)(
								    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[1U])) 
						    << 0x1fU) 
						   | ((QData)((IData)(
								      vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum[0U])) 
						      >> 1U))))))))))
	    : vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig);
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_99 
	= ((0x3333U & ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_89) 
		       >> 2U)) | (0xccccU & ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_89) 
					     << 2U)));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_48 
	= ((0xf0f0f0fU & (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_38 
			  >> 4U)) | (0xf0f0f0f0U & 
				     (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_38 
				      << 4U)));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
	= (1U & (((~ (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
		  & (~ (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_isInf))) 
		 & (~ (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_isZero))));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
	= (((2U == (IData)(vlTOPp->io_roundingMode)) 
	    & (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sign)) 
	   | ((3U == (IData)(vlTOPp->io_roundingMode)) 
	      & (~ (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sign))));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_58 
	= ((0x33333333U & (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_48 
			   >> 2U)) | (0xccccccccU & 
				      (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_48 
				       << 2U)));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
	= ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_165) 
	   | (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    __Vtemp121[0U] = 0U;
    __Vtemp121[1U] = 0U;
    __Vtemp121[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp122, __Vtemp121, 
		   (0x3fU & (~ (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sExp))));
    __Vtemp125[0U] = 0U;
    __Vtemp125[1U] = 0U;
    __Vtemp125[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp126, __Vtemp125, 
		   (0x3fU & (~ (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sExp))));
    __Vtemp129[0U] = 0U;
    __Vtemp129[1U] = 0U;
    __Vtemp129[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp130, __Vtemp129, 
		   (0x3fU & (~ (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sExp))));
    __Vtemp133[0U] = 0U;
    __Vtemp133[1U] = 0U;
    __Vtemp133[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp134, __Vtemp133, 
		   (0x3fU & (~ (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sExp))));
    __Vtemp137[0U] = 0U;
    __Vtemp137[1U] = 0U;
    __Vtemp137[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp138, __Vtemp137, 
		   (0x3fU & (~ (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sExp))));
    __Vtemp141[0U] = 0U;
    __Vtemp141[1U] = 0U;
    __Vtemp141[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp142, __Vtemp141, 
		   (0x3fU & (~ (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sExp))));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_154 
	= (((0x800U & (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sExp))
	     ? VL_ULL(0) : ((0x400U & (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sExp))
			     ? (QData)((IData)(((0x200U 
						 & (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sExp))
						 ? 0U
						 : 
						((0x100U 
						  & (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sExp))
						  ? 0U
						  : 
						 ((0x80U 
						   & (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sExp))
						   ? 0U
						   : 
						  ((0x40U 
						    & (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sExp))
						    ? 0U
						    : 
						   ((4U 
						     & (__Vtemp122[0U] 
							<< 2U)) 
						    | ((2U 
							& __Vtemp126[0U]) 
						       | (1U 
							  & (__Vtemp130[0U] 
							     >> 2U))))))))))
			     : (VL_ULL(7) | (VL_ULL(0x3ffffffffffff8) 
					     & ((~ 
						 ((0x200U 
						   & (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sExp))
						   ? 
						  ((0x100U 
						    & (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sExp))
						    ? 
						   ((0x80U 
						     & (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sExp))
						     ? 
						    ((0x40U 
						      & (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sExp))
						      ? 
						     (~ 
						      (((QData)((IData)(
									((0x55555555U 
									  & (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_58 
									     >> 1U)) 
									 | (0xaaaaaaaaU 
									    & (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_58 
									       << 1U))))) 
							<< 0x13U) 
						       | (QData)((IData)(
									 (((0x2aaa8U 
									    & ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_99) 
									       << 2U)) 
									   | (0x55550U 
									      & ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_99) 
										<< 4U))) 
									  | ((4U 
									      & (__Vtemp134[1U] 
										>> 0x1bU)) 
									     | ((2U 
										& (__Vtemp138[1U] 
										>> 0x1dU)) 
										| (1U 
										& (__Vtemp142[1U] 
										>> 0x1fU)))))))))
						      : VL_ULL(0))
						     : VL_ULL(0))
						    : VL_ULL(0))
						   : VL_ULL(0))) 
						<< 3U))))) 
	   | (QData)((IData)((1U & (IData)((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sig 
					    >> 0x37U))))));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_162 
	= (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sig 
	   & (VL_ULL(1) | (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_154 
			   << 1U)));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_159 
	= ((~ (VL_ULL(1) | (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_154 
			    << 1U))) & (VL_ULL(3) | 
					(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_154 
					 << 2U)));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_160 
	= (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sig 
	   & vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_159);
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_164 
	= ((VL_ULL(0) != vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_160) 
	   | (VL_ULL(0) != vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_162));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_186 
	= (VL_ULL(0x7fffffffffffff) & ((((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_165) 
					 & (VL_ULL(0) 
					    != vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_160)) 
					| ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
					   & (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_164)))
				        ? ((VL_ULL(1) 
					    + (VL_ULL(0x3fffffffffffff) 
					       & ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sig 
						   >> 2U) 
						  | (VL_ULL(0x3fffffffffffffff) 
						     & vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_154)))) 
					   & (~ (((
						   (0U 
						    == (IData)(vlTOPp->io_roundingMode)) 
						   & (VL_ULL(0) 
						      != vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_160)) 
						  & (VL_ULL(0) 
						     == vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_162))
						  ? 
						 (VL_ULL(1) 
						  | (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_154 
						     << 1U))
						  : VL_ULL(0))))
				        : ((VL_ULL(0x3fffffffffffff) 
					    & ((vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sig 
						& (~ 
						   (VL_ULL(3) 
						    | (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_154 
						       << 2U)))) 
					       >> 2U)) 
					   | (((6U 
						== (IData)(vlTOPp->io_roundingMode)) 
					       & (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_164))
					       ? (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_159 
						  >> 1U)
					       : VL_ULL(0)))));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189 
	= (0x3fffU & (VL_EXTENDS_II(14,13, (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sExp)) 
		      + VL_EXTENDS_II(14,13, (3U & (IData)(
							   (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_186 
							    >> 0x35U))))));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut 
	= (((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
	    & VL_GTS_III(1,14,14, 0x3ceU, (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189))) 
	   & ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
	      | (6U == (IData)(vlTOPp->io_roundingMode))));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow 
	= ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
	   & VL_LTES_III(1,4,4, 3U, (0xfU & ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189) 
					     >> 0xaU))));
    vlTOPp->io_actual_exceptionFlags = ((((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_invalidExc) 
					  << 4U) | 
					 ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
					  << 2U)) | 
					((((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
					   & (VL_GTS_III(1,14,14, 0x3ceU, (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189)) 
					      | ((((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_164) 
						   & VL_GTES_III(1,2,2, 0U, 
								 (3U 
								  & ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sExp) 
								     >> 0xbU)))) 
						  & ((1U 
						      & (IData)(
								(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sig 
								 >> 0x37U)))
						      ? (IData)(
								(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_154 
								 >> 1U))
						      : (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_154))) 
						 & (~ 
						    (((((IData)(vlTOPp->io_detectTininess) 
							& (~ 
							   ((1U 
							     & (IData)(
								       (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sig 
									>> 0x37U)))
							     ? (IData)(
								       (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_154 
									>> 2U))
							     : (IData)(
								       (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_154 
									>> 1U))))) 
						       & ((1U 
							   & (IData)(
								     (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sig 
								      >> 0x37U)))
							   ? (IData)(
								     (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_186 
								      >> 0x36U))
							   : (IData)(
								     (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_186 
								      >> 0x35U)))) 
						      & (VL_ULL(0) 
							 != vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_160)) 
						     & (((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_165) 
							 & ((1U 
							     & (IData)(
								       (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sig 
									>> 0x37U)))
							     ? (IData)(
								       (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sig 
									>> 2U))
							     : (IData)(
								       (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sig 
									>> 1U)))) 
							| ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
							   & (((IData)(
								       (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sig 
									>> 0x37U)) 
							       & (IData)(
									 (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sig 
									  >> 2U))) 
							      | (0U 
								 != 
								 (3U 
								  & (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sig))))))))))) 
					  << 1U) | 
					 ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
					  | ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
					     & (VL_GTS_III(1,14,14, 0x3ceU, (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189)) 
						| (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_164))))));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut 
	= ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
	   & (~ (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
	= ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_isInf) 
	   | ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
	      & (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    __Vtemp144[0U] = (IData)((((QData)((IData)((0xfffU 
						& (((((((((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189) 
							  & (~ 
							     (((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_isZero) 
							       | VL_GTS_III(1,14,14, 0x3ceU, (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189)))
							       ? 0xe00U
							       : 0U))) 
							 & (~ 
							    ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
							      ? 0xc31U
							      : 0U))) 
							& (~ 
							   ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
							     ? 0x400U
							     : 0U))) 
						       & (~ 
							  ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
							    ? 0x200U
							    : 0U))) 
						      | ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
							  ? 0x3ceU
							  : 0U)) 
						     | ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
							 ? 0xbffU
							 : 0U)) 
						    | ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
						        ? 0xc00U
						        : 0U)) 
						   | ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
						       ? 0xe00U
						       : 0U))))) 
			       << 0x34U) | (VL_ULL(0xfffffffffffff) 
					    & (((((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
						  | (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_isZero)) 
						 | VL_GTS_III(1,14,14, 0x3ceU, (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189)))
						 ? 
						((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
						  ? VL_ULL(0x8000000000000)
						  : VL_ULL(0))
						 : 
						((1U 
						  & (IData)(
							    (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sig 
							     >> 0x37U)))
						  ? 
						 (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_186 
						  >> 1U)
						  : vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_186)) 
					       | ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
						   ? VL_ULL(0xfffffffffffff)
						   : VL_ULL(0))))));
    __Vtemp144[1U] = (IData)(((((QData)((IData)((0xfffU 
						 & (((((((((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189) 
							   & (~ 
							      (((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_isZero) 
								| VL_GTS_III(1,14,14, 0x3ceU, (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189)))
							        ? 0xe00U
							        : 0U))) 
							  & (~ 
							     ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
							       ? 0xc31U
							       : 0U))) 
							 & (~ 
							    ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
							      ? 0x400U
							      : 0U))) 
							& (~ 
							   ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
							     ? 0x200U
							     : 0U))) 
						       | ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
							   ? 0x3ceU
							   : 0U)) 
						      | ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
							  ? 0xbffU
							  : 0U)) 
						     | ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
							 ? 0xc00U
							 : 0U)) 
						    | ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
						        ? 0xe00U
						        : 0U))))) 
				<< 0x34U) | (VL_ULL(0xfffffffffffff) 
					     & (((((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
						   | (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_isZero)) 
						  | VL_GTS_III(1,14,14, 0x3ceU, (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189)))
						  ? 
						 ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
						   ? VL_ULL(0x8000000000000)
						   : VL_ULL(0))
						  : 
						 ((1U 
						   & (IData)(
							     (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sig 
							      >> 0x37U)))
						   ? 
						  (vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_186 
						   >> 1U)
						   : vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_186)) 
						| ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
						    ? VL_ULL(0xfffffffffffff)
						    : VL_ULL(0))))) 
			      >> 0x20U));
    vlTOPp->io_actual_out[0U] = __Vtemp144[0U];
    vlTOPp->io_actual_out[1U] = __Vtemp144[1U];
    vlTOPp->io_actual_out[2U] = ((~ (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
				 & (IData)(vlTOPp->ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sign));
    vlTOPp->ValExec_MulAddRecF64__DOT___T_563 = ((0xfU 
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
			 ? ((IData)(vlTOPp->ValExec_MulAddRecF64__DOT___T_563) 
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
			     ? (IData)(vlTOPp->ValExec_MulAddRecF64__DOT___T_563)
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
    io_a = VL_RAND_RESET_Q(64);
    io_b = VL_RAND_RESET_Q(64);
    io_c = VL_RAND_RESET_Q(64);
    io_roundingMode = VL_RAND_RESET_I(3);
    io_detectTininess = VL_RAND_RESET_I(1);
    io_expected_out = VL_RAND_RESET_Q(64);
    io_expected_exceptionFlags = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(65,io_expected_recOut);
    VL_RAND_RESET_W(65,io_actual_out);
    io_actual_exceptionFlags = VL_RAND_RESET_I(5);
    io_check = VL_RAND_RESET_I(1);
    io_pass = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65,ValExec_MulAddRecF64__DOT__mulAddRecFN_io_a);
    VL_RAND_RESET_W(65,ValExec_MulAddRecF64__DOT__mulAddRecFN_io_b);
    VL_RAND_RESET_W(65,ValExec_MulAddRecF64__DOT__mulAddRecFN_io_c);
    ValExec_MulAddRecF64__DOT___T_107 = VL_RAND_RESET_I(6);
    ValExec_MulAddRecF64__DOT___T_116 = VL_RAND_RESET_I(12);
    ValExec_MulAddRecF64__DOT___T_117 = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF64__DOT___T_246 = VL_RAND_RESET_I(6);
    ValExec_MulAddRecF64__DOT___T_255 = VL_RAND_RESET_I(12);
    ValExec_MulAddRecF64__DOT___T_256 = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF64__DOT___T_385 = VL_RAND_RESET_I(6);
    ValExec_MulAddRecF64__DOT___T_394 = VL_RAND_RESET_I(12);
    ValExec_MulAddRecF64__DOT___T_395 = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF64__DOT___T_524 = VL_RAND_RESET_I(6);
    ValExec_MulAddRecF64__DOT___T_533 = VL_RAND_RESET_I(12);
    ValExec_MulAddRecF64__DOT___T_534 = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF64__DOT___T_563 = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isNaNAOrB = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfB = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfC = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_CIsDominant = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(107,ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult);
    ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_invalidExc = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_isInf = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_isZero = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sign = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sExp = VL_RAND_RESET_I(13);
    ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sig = VL_RAND_RESET_Q(56);
    ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_sig = VL_RAND_RESET_Q(54);
    ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_isNaN = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_sig = VL_RAND_RESET_Q(54);
    ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawC_sig = VL_RAND_RESET_Q(54);
    ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__signProd = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT___T_50 = VL_RAND_RESET_I(14);
    ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__sNatCAlignDist = VL_RAND_RESET_I(14);
    ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT___T_61 = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(165,ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC);
    ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT___T_126 = VL_RAND_RESET_I(8);
    ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT___T_136 = VL_RAND_RESET_I(8);
    ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT___T_161 = VL_RAND_RESET_I(14);
    VL_RAND_RESET_W(163,ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC);
    ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT___T_188 = VL_RAND_RESET_I(14);
    ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_sign = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(162,ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum);
    VL_RAND_RESET_W(108,ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum);
    VL_RAND_RESET_W(171,ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_20);
    ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_78 = VL_RAND_RESET_I(8);
    ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_88 = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(109,ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum);
    ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum = VL_RAND_RESET_Q(55);
    ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2 = VL_RAND_RESET_I(6);
    VL_RAND_RESET_W(236,ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_399);
    ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_457 = VL_RAND_RESET_I(8);
    ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_467 = VL_RAND_RESET_I(8);
    ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig = VL_RAND_RESET_Q(56);
    ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_28 = VL_RAND_RESET_I(32);
    ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_38 = VL_RAND_RESET_I(32);
    ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_48 = VL_RAND_RESET_I(32);
    ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_58 = VL_RAND_RESET_I(32);
    ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_79 = VL_RAND_RESET_I(16);
    ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_89 = VL_RAND_RESET_I(16);
    ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_99 = VL_RAND_RESET_I(16);
    ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_154 = VL_RAND_RESET_Q(54);
    ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_159 = VL_RAND_RESET_Q(56);
    ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_160 = VL_RAND_RESET_Q(56);
    ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_162 = VL_RAND_RESET_Q(56);
    ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_164 = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_165 = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_186 = VL_RAND_RESET_Q(55);
    ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189 = VL_RAND_RESET_I(14);
    ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut = VL_RAND_RESET_I(1);
    ValExec_MulAddRecF64__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut = VL_RAND_RESET_I(1);
}
