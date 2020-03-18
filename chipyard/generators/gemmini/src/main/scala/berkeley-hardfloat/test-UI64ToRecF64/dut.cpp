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
    // INITIAL at test-UI64ToRecF64/ValExec_UI64ToRecF64.v:456
    vlTOPp->io_check = 1U;
}

VL_INLINE_OPT void dut::_combo__TOP__2(dut__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    dut::_combo__TOP__2\n"); );
    dut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp1,127,0,4);
    VL_SIGW(__Vtemp2,127,0,4);
    VL_SIGW(__Vtemp3,127,0,4);
    VL_SIGW(__Vtemp4,127,0,4);
    VL_SIGW(__Vtemp5,127,0,4);
    VL_SIGW(__Vtemp6,127,0,4);
    VL_SIGW(__Vtemp7,127,0,4);
    VL_SIGW(__Vtemp8,127,0,4);
    VL_SIGW(__Vtemp9,127,0,4);
    VL_SIGW(__Vtemp10,127,0,4);
    VL_SIGW(__Vtemp11,127,0,4);
    VL_SIGW(__Vtemp12,127,0,4);
    VL_SIGW(__Vtemp13,127,0,4);
    VL_SIGW(__Vtemp14,127,0,4);
    VL_SIGW(__Vtemp15,127,0,4);
    VL_SIGW(__Vtemp16,127,0,4);
    VL_SIGW(__Vtemp17,127,0,4);
    VL_SIGW(__Vtemp18,127,0,4);
    VL_SIGW(__Vtemp19,127,0,4);
    VL_SIGW(__Vtemp20,127,0,4);
    VL_SIGW(__Vtemp21,127,0,4);
    VL_SIGW(__Vtemp22,127,0,4);
    VL_SIGW(__Vtemp23,127,0,4);
    VL_SIGW(__Vtemp24,127,0,4);
    VL_SIGW(__Vtemp25,127,0,4);
    VL_SIGW(__Vtemp26,127,0,4);
    VL_SIGW(__Vtemp27,127,0,4);
    VL_SIGW(__Vtemp28,127,0,4);
    VL_SIGW(__Vtemp29,127,0,4);
    VL_SIGW(__Vtemp30,127,0,4);
    VL_SIGW(__Vtemp31,127,0,4);
    VL_SIGW(__Vtemp32,127,0,4);
    VL_SIGW(__Vtemp33,127,0,4);
    VL_SIGW(__Vtemp34,127,0,4);
    VL_SIGW(__Vtemp35,127,0,4);
    VL_SIGW(__Vtemp36,127,0,4);
    VL_SIGW(__Vtemp37,127,0,4);
    VL_SIGW(__Vtemp38,127,0,4);
    VL_SIGW(__Vtemp39,127,0,4);
    VL_SIGW(__Vtemp40,127,0,4);
    VL_SIGW(__Vtemp41,127,0,4);
    VL_SIGW(__Vtemp42,127,0,4);
    VL_SIGW(__Vtemp43,127,0,4);
    VL_SIGW(__Vtemp44,127,0,4);
    VL_SIGW(__Vtemp45,127,0,4);
    VL_SIGW(__Vtemp46,127,0,4);
    VL_SIGW(__Vtemp47,127,0,4);
    VL_SIGW(__Vtemp48,127,0,4);
    VL_SIGW(__Vtemp49,127,0,4);
    VL_SIGW(__Vtemp50,127,0,4);
    VL_SIGW(__Vtemp51,127,0,4);
    VL_SIGW(__Vtemp52,127,0,4);
    VL_SIGW(__Vtemp53,127,0,4);
    VL_SIGW(__Vtemp54,127,0,4);
    VL_SIGW(__Vtemp55,127,0,4);
    VL_SIGW(__Vtemp56,127,0,4);
    VL_SIGW(__Vtemp57,127,0,4);
    VL_SIGW(__Vtemp58,127,0,4);
    VL_SIGW(__Vtemp59,127,0,4);
    VL_SIGW(__Vtemp60,127,0,4);
    VL_SIGW(__Vtemp61,127,0,4);
    VL_SIGW(__Vtemp62,127,0,4);
    VL_SIGW(__Vtemp63,127,0,4);
    VL_SIGW(__Vtemp65,127,0,4);
    VL_SIGW(__Vtemp66,127,0,4);
    VL_SIGW(__Vtemp69,127,0,4);
    VL_SIGW(__Vtemp70,127,0,4);
    VL_SIGW(__Vtemp72,95,0,3);
    VL_SIGW(__Vtemp73,95,0,3);
    VL_SIGW(__Vtemp74,95,0,3);
    // Body
    vlTOPp->ValExec_UI64ToRecF64__DOT___T_117 = ((0U 
						  == 
						  (0x7ffU 
						   & (IData)(
							     (vlTOPp->io_expected_out 
							      >> 0x34U)))) 
						 & (VL_ULL(0) 
						    == 
						    (VL_ULL(0xfffffffffffff) 
						     & vlTOPp->io_expected_out)));
    vlTOPp->ValExec_UI64ToRecF64__DOT___T_107 = ((1U 
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
    VL_EXTEND_WQ(128,64, __Vtemp1, vlTOPp->io_in);
    VL_EXTEND_WQ(128,64, __Vtemp2, vlTOPp->io_in);
    VL_EXTEND_WQ(128,64, __Vtemp3, vlTOPp->io_in);
    VL_EXTEND_WQ(128,64, __Vtemp4, vlTOPp->io_in);
    VL_EXTEND_WQ(128,64, __Vtemp5, vlTOPp->io_in);
    VL_EXTEND_WQ(128,64, __Vtemp6, vlTOPp->io_in);
    VL_EXTEND_WQ(128,64, __Vtemp7, vlTOPp->io_in);
    VL_EXTEND_WQ(128,64, __Vtemp8, vlTOPp->io_in);
    VL_EXTEND_WQ(128,64, __Vtemp9, vlTOPp->io_in);
    VL_EXTEND_WQ(128,64, __Vtemp10, vlTOPp->io_in);
    VL_EXTEND_WQ(128,64, __Vtemp11, vlTOPp->io_in);
    VL_EXTEND_WQ(128,64, __Vtemp12, vlTOPp->io_in);
    VL_EXTEND_WQ(128,64, __Vtemp13, vlTOPp->io_in);
    VL_EXTEND_WQ(128,64, __Vtemp14, vlTOPp->io_in);
    VL_EXTEND_WQ(128,64, __Vtemp15, vlTOPp->io_in);
    VL_EXTEND_WQ(128,64, __Vtemp16, vlTOPp->io_in);
    VL_EXTEND_WQ(128,64, __Vtemp17, vlTOPp->io_in);
    VL_EXTEND_WQ(128,64, __Vtemp18, vlTOPp->io_in);
    VL_EXTEND_WQ(128,64, __Vtemp19, vlTOPp->io_in);
    VL_EXTEND_WQ(128,64, __Vtemp20, vlTOPp->io_in);
    VL_EXTEND_WQ(128,64, __Vtemp21, vlTOPp->io_in);
    VL_EXTEND_WQ(128,64, __Vtemp22, vlTOPp->io_in);
    VL_EXTEND_WQ(128,64, __Vtemp23, vlTOPp->io_in);
    VL_EXTEND_WQ(128,64, __Vtemp24, vlTOPp->io_in);
    VL_EXTEND_WQ(128,64, __Vtemp25, vlTOPp->io_in);
    VL_EXTEND_WQ(128,64, __Vtemp26, vlTOPp->io_in);
    VL_EXTEND_WQ(128,64, __Vtemp27, vlTOPp->io_in);
    VL_EXTEND_WQ(128,64, __Vtemp28, vlTOPp->io_in);
    VL_EXTEND_WQ(128,64, __Vtemp29, vlTOPp->io_in);
    VL_EXTEND_WQ(128,64, __Vtemp30, vlTOPp->io_in);
    VL_EXTEND_WQ(128,64, __Vtemp31, vlTOPp->io_in);
    VL_EXTEND_WQ(128,64, __Vtemp32, vlTOPp->io_in);
    VL_EXTEND_WQ(128,64, __Vtemp33, vlTOPp->io_in);
    VL_EXTEND_WQ(128,64, __Vtemp34, vlTOPp->io_in);
    VL_EXTEND_WQ(128,64, __Vtemp35, vlTOPp->io_in);
    VL_EXTEND_WQ(128,64, __Vtemp36, vlTOPp->io_in);
    VL_EXTEND_WQ(128,64, __Vtemp37, vlTOPp->io_in);
    VL_EXTEND_WQ(128,64, __Vtemp38, vlTOPp->io_in);
    VL_EXTEND_WQ(128,64, __Vtemp39, vlTOPp->io_in);
    VL_EXTEND_WQ(128,64, __Vtemp40, vlTOPp->io_in);
    VL_EXTEND_WQ(128,64, __Vtemp41, vlTOPp->io_in);
    VL_EXTEND_WQ(128,64, __Vtemp42, vlTOPp->io_in);
    VL_EXTEND_WQ(128,64, __Vtemp43, vlTOPp->io_in);
    VL_EXTEND_WQ(128,64, __Vtemp44, vlTOPp->io_in);
    VL_EXTEND_WQ(128,64, __Vtemp45, vlTOPp->io_in);
    VL_EXTEND_WQ(128,64, __Vtemp46, vlTOPp->io_in);
    VL_EXTEND_WQ(128,64, __Vtemp47, vlTOPp->io_in);
    VL_EXTEND_WQ(128,64, __Vtemp48, vlTOPp->io_in);
    VL_EXTEND_WQ(128,64, __Vtemp49, vlTOPp->io_in);
    VL_EXTEND_WQ(128,64, __Vtemp50, vlTOPp->io_in);
    VL_EXTEND_WQ(128,64, __Vtemp51, vlTOPp->io_in);
    VL_EXTEND_WQ(128,64, __Vtemp52, vlTOPp->io_in);
    VL_EXTEND_WQ(128,64, __Vtemp53, vlTOPp->io_in);
    VL_EXTEND_WQ(128,64, __Vtemp54, vlTOPp->io_in);
    VL_EXTEND_WQ(128,64, __Vtemp55, vlTOPp->io_in);
    VL_EXTEND_WQ(128,64, __Vtemp56, vlTOPp->io_in);
    VL_EXTEND_WQ(128,64, __Vtemp57, vlTOPp->io_in);
    VL_EXTEND_WQ(128,64, __Vtemp58, vlTOPp->io_in);
    VL_EXTEND_WQ(128,64, __Vtemp59, vlTOPp->io_in);
    VL_EXTEND_WQ(128,64, __Vtemp60, vlTOPp->io_in);
    VL_EXTEND_WQ(128,64, __Vtemp61, vlTOPp->io_in);
    VL_EXTEND_WQ(128,64, __Vtemp62, vlTOPp->io_in);
    VL_EXTEND_WQ(128,64, __Vtemp63, vlTOPp->io_in);
    vlTOPp->ValExec_UI64ToRecF64__DOT__iNToRecFN__DOT___T_133 
	= ((0x80000000U & __Vtemp1[1U]) ? 0U : ((0x40000000U 
						 & __Vtemp2[1U])
						 ? 1U
						 : 
						((0x20000000U 
						  & __Vtemp3[1U])
						  ? 2U
						  : 
						 ((0x10000000U 
						   & __Vtemp4[1U])
						   ? 3U
						   : 
						  ((0x8000000U 
						    & __Vtemp5[1U])
						    ? 4U
						    : 
						   ((0x4000000U 
						     & __Vtemp6[1U])
						     ? 5U
						     : 
						    ((0x2000000U 
						      & __Vtemp7[1U])
						      ? 6U
						      : 
						     ((0x1000000U 
						       & __Vtemp8[1U])
						       ? 7U
						       : 
						      ((0x800000U 
							& __Vtemp9[1U])
						        ? 8U
						        : 
						       ((0x400000U 
							 & __Vtemp10[1U])
							 ? 9U
							 : 
							((0x200000U 
							  & __Vtemp11[1U])
							  ? 0xaU
							  : 
							 ((0x100000U 
							   & __Vtemp12[1U])
							   ? 0xbU
							   : 
							  ((0x80000U 
							    & __Vtemp13[1U])
							    ? 0xcU
							    : 
							   ((0x40000U 
							     & __Vtemp14[1U])
							     ? 0xdU
							     : 
							    ((0x20000U 
							      & __Vtemp15[1U])
							      ? 0xeU
							      : 
							     ((0x10000U 
							       & __Vtemp16[1U])
							       ? 0xfU
							       : 
							      ((0x8000U 
								& __Vtemp17[1U])
							        ? 0x10U
							        : 
							       ((0x4000U 
								 & __Vtemp18[1U])
								 ? 0x11U
								 : 
								((0x2000U 
								  & __Vtemp19[1U])
								  ? 0x12U
								  : 
								 ((0x1000U 
								   & __Vtemp20[1U])
								   ? 0x13U
								   : 
								  ((0x800U 
								    & __Vtemp21[1U])
								    ? 0x14U
								    : 
								   ((0x400U 
								     & __Vtemp22[1U])
								     ? 0x15U
								     : 
								    ((0x200U 
								      & __Vtemp23[1U])
								      ? 0x16U
								      : 
								     ((0x100U 
								       & __Vtemp24[1U])
								       ? 0x17U
								       : 
								      ((0x80U 
									& __Vtemp25[1U])
								        ? 0x18U
								        : 
								       ((0x40U 
									 & __Vtemp26[1U])
									 ? 0x19U
									 : 
									((0x20U 
									  & __Vtemp27[1U])
									  ? 0x1aU
									  : 
									 ((0x10U 
									   & __Vtemp28[1U])
									   ? 0x1bU
									   : 
									  ((8U 
									    & __Vtemp29[1U])
									    ? 0x1cU
									    : 
									   ((4U 
									     & __Vtemp30[1U])
									     ? 0x1dU
									     : 
									    ((2U 
									      & __Vtemp31[1U])
									      ? 0x1eU
									      : 
									     ((1U 
									       & __Vtemp32[1U])
									       ? 0x1fU
									       : 
									      ((0x80000000U 
										& __Vtemp33[0U])
									        ? 0x20U
									        : 
									       ((0x40000000U 
										& __Vtemp34[0U])
										 ? 0x21U
										 : 
										((0x20000000U 
										& __Vtemp35[0U])
										 ? 0x22U
										 : 
										((0x10000000U 
										& __Vtemp36[0U])
										 ? 0x23U
										 : 
										((0x8000000U 
										& __Vtemp37[0U])
										 ? 0x24U
										 : 
										((0x4000000U 
										& __Vtemp38[0U])
										 ? 0x25U
										 : 
										((0x2000000U 
										& __Vtemp39[0U])
										 ? 0x26U
										 : 
										((0x1000000U 
										& __Vtemp40[0U])
										 ? 0x27U
										 : 
										((0x800000U 
										& __Vtemp41[0U])
										 ? 0x28U
										 : 
										((0x400000U 
										& __Vtemp42[0U])
										 ? 0x29U
										 : 
										((0x200000U 
										& __Vtemp43[0U])
										 ? 0x2aU
										 : 
										((0x100000U 
										& __Vtemp44[0U])
										 ? 0x2bU
										 : 
										((0x80000U 
										& __Vtemp45[0U])
										 ? 0x2cU
										 : 
										((0x40000U 
										& __Vtemp46[0U])
										 ? 0x2dU
										 : 
										((0x20000U 
										& __Vtemp47[0U])
										 ? 0x2eU
										 : 
										((0x10000U 
										& __Vtemp48[0U])
										 ? 0x2fU
										 : 
										((0x8000U 
										& __Vtemp49[0U])
										 ? 0x30U
										 : 
										((0x4000U 
										& __Vtemp50[0U])
										 ? 0x31U
										 : 
										((0x2000U 
										& __Vtemp51[0U])
										 ? 0x32U
										 : 
										((0x1000U 
										& __Vtemp52[0U])
										 ? 0x33U
										 : 
										((0x800U 
										& __Vtemp53[0U])
										 ? 0x34U
										 : 
										((0x400U 
										& __Vtemp54[0U])
										 ? 0x35U
										 : 
										((0x200U 
										& __Vtemp55[0U])
										 ? 0x36U
										 : 
										((0x100U 
										& __Vtemp56[0U])
										 ? 0x37U
										 : 
										((0x80U 
										& __Vtemp57[0U])
										 ? 0x38U
										 : 
										((0x40U 
										& __Vtemp58[0U])
										 ? 0x39U
										 : 
										((0x20U 
										& __Vtemp59[0U])
										 ? 0x3aU
										 : 
										((0x10U 
										& __Vtemp60[0U])
										 ? 0x3bU
										 : 
										((8U 
										& __Vtemp61[0U])
										 ? 0x3cU
										 : 
										((4U 
										& __Vtemp62[0U])
										 ? 0x3dU
										 : 
										((2U 
										& __Vtemp63[0U])
										 ? 0x3eU
										 : 0x3fU)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlTOPp->ValExec_UI64ToRecF64__DOT___T_116 = (0xfffU 
						 & (((0U 
						      == 
						      (0x7ffU 
						       & (IData)(
								 (vlTOPp->io_expected_out 
								  >> 0x34U))))
						      ? 
						     (~ (IData)(vlTOPp->ValExec_UI64ToRecF64__DOT___T_107))
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
    VL_EXTEND_WQ(127,64, __Vtemp65, vlTOPp->io_in);
    VL_SHIFTL_WWI(127,127,6, __Vtemp66, __Vtemp65, (IData)(vlTOPp->ValExec_UI64ToRecF64__DOT__iNToRecFN__DOT___T_133));
    vlTOPp->ValExec_UI64ToRecF64__DOT__iNToRecFN__DOT___T_134[0U] 
	= __Vtemp66[0U];
    vlTOPp->ValExec_UI64ToRecF64__DOT__iNToRecFN__DOT___T_134[1U] 
	= __Vtemp66[1U];
    vlTOPp->ValExec_UI64ToRecF64__DOT__iNToRecFN__DOT___T_134[2U] 
	= __Vtemp66[2U];
    vlTOPp->ValExec_UI64ToRecF64__DOT__iNToRecFN__DOT___T_134[3U] 
	= (0x7fffffffU & __Vtemp66[3U]);
    VL_EXTEND_WQ(115,52, __Vtemp69, (VL_ULL(0xfffffffffffff) 
				     & vlTOPp->io_expected_out));
    VL_SHIFTL_WWI(115,115,6, __Vtemp70, __Vtemp69, (IData)(vlTOPp->ValExec_UI64ToRecF64__DOT___T_107));
    __Vtemp72[1U] = ((0xe0000000U & ((((IData)(vlTOPp->ValExec_UI64ToRecF64__DOT___T_117)
				        ? 0U : ((IData)(vlTOPp->ValExec_UI64ToRecF64__DOT___T_116) 
						>> 9U)) 
				      | ((3U == (3U 
						 & ((IData)(vlTOPp->ValExec_UI64ToRecF64__DOT___T_116) 
						    >> 0xaU))) 
					 & (VL_ULL(0) 
					    != (VL_ULL(0xfffffffffffff) 
						& vlTOPp->io_expected_out)))) 
				     << 0x1dU)) | (IData)(
							  ((((QData)((IData)(
									     (0x1ffU 
									      & (IData)(vlTOPp->ValExec_UI64ToRecF64__DOT___T_116)))) 
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
										__Vtemp70[1U])) 
								       << 0x21U) 
								      | ((QData)((IData)(
										__Vtemp70[0U])) 
									 << 1U)))
								   : vlTOPp->io_expected_out))) 
							   >> 0x20U)));
    vlTOPp->io_expected_recOut[0U] = (IData)((((QData)((IData)(
							       (0x1ffU 
								& (IData)(vlTOPp->ValExec_UI64ToRecF64__DOT___T_116)))) 
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
									 __Vtemp70[1U])) 
							 << 0x21U) 
							| ((QData)((IData)(
									   __Vtemp70[0U])) 
							   << 1U)))
						     : vlTOPp->io_expected_out))));
    vlTOPp->io_expected_recOut[1U] = __Vtemp72[1U];
    vlTOPp->io_expected_recOut[2U] = (1U & (IData)(
						   (vlTOPp->io_expected_out 
						    >> 0x3fU)));
    VL_EXTEND_WQ(65,64, __Vtemp73, (((QData)((IData)(
						     vlTOPp->ValExec_UI64ToRecF64__DOT__iNToRecFN__DOT___T_134[1U])) 
				     << 0x20U) | (QData)((IData)(
								 vlTOPp->ValExec_UI64ToRecF64__DOT__iNToRecFN__DOT___T_134[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp74, (((QData)((IData)(
						     vlTOPp->ValExec_UI64ToRecF64__DOT__iNToRecFN__DOT___T_134[1U])) 
				     << 0x20U) | (QData)((IData)(
								 vlTOPp->ValExec_UI64ToRecF64__DOT__iNToRecFN__DOT___T_134[0U]))));
    vlTOPp->ValExec_UI64ToRecF64__DOT__iNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig 
	= ((VL_ULL(0xfffffffffffffe) & (((QData)((IData)(
							 __Vtemp73[2U])) 
					 << 0x37U) 
					| (((QData)((IData)(
							    __Vtemp73[1U])) 
					    << 0x17U) 
					   | (VL_ULL(0x7ffffffffffffe) 
					      & ((QData)((IData)(
								 __Vtemp73[0U])) 
						 >> 9U))))) 
	   | (QData)((IData)((0U != (0x3ffU & __Vtemp74[0U])))));
    vlTOPp->ValExec_UI64ToRecF64__DOT__iNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__common_inexact 
	= ((VL_ULL(0) != (VL_ULL(2) & vlTOPp->ValExec_UI64ToRecF64__DOT__iNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig)) 
	   | (VL_ULL(0) != (VL_ULL(1) & vlTOPp->ValExec_UI64ToRecF64__DOT__iNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig)));
    vlTOPp->io_actual_exceptionFlags = ((vlTOPp->ValExec_UI64ToRecF64__DOT__iNToRecFN__DOT___T_134[1U] 
					 >> 0x1fU) 
					& (IData)(vlTOPp->ValExec_UI64ToRecF64__DOT__iNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__common_inexact));
    vlTOPp->ValExec_UI64ToRecF64__DOT__iNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_40 
	= (VL_ULL(0x7fffffffffffff) & (((((0U == (IData)(vlTOPp->io_roundingMode)) 
					  | (4U == (IData)(vlTOPp->io_roundingMode))) 
					 & (VL_ULL(0) 
					    != (VL_ULL(2) 
						& vlTOPp->ValExec_UI64ToRecF64__DOT__iNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig))) 
					| ((3U == (IData)(vlTOPp->io_roundingMode)) 
					   & (IData)(vlTOPp->ValExec_UI64ToRecF64__DOT__iNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__common_inexact)))
				        ? ((VL_ULL(1) 
					    + (VL_ULL(0x3fffffffffffff) 
					       & (vlTOPp->ValExec_UI64ToRecF64__DOT__iNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig 
						  >> 2U))) 
					   & (~ (((
						   (0U 
						    == (IData)(vlTOPp->io_roundingMode)) 
						   & (VL_ULL(0) 
						      != 
						      (VL_ULL(2) 
						       & vlTOPp->ValExec_UI64ToRecF64__DOT__iNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig))) 
						  & (VL_ULL(0) 
						     == 
						     (VL_ULL(1) 
						      & vlTOPp->ValExec_UI64ToRecF64__DOT__iNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig)))
						  ? VL_ULL(1)
						  : VL_ULL(0))))
				        : ((VL_ULL(0x3fffffffffffff) 
					    & (vlTOPp->ValExec_UI64ToRecF64__DOT__iNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig 
					       >> 2U)) 
					   | (((6U 
						== (IData)(vlTOPp->io_roundingMode)) 
					       & (IData)(vlTOPp->ValExec_UI64ToRecF64__DOT__iNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__common_inexact))
					       ? VL_ULL(1)
					       : VL_ULL(0)))));
    vlTOPp->io_actual_out[0U] = (IData)((VL_ULL(0xfffffffffffff) 
					 & ((0x80000000U 
					     & vlTOPp->ValExec_UI64ToRecF64__DOT__iNToRecFN__DOT___T_134[1U])
					     ? vlTOPp->ValExec_UI64ToRecF64__DOT__iNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_40
					     : VL_ULL(0))));
    vlTOPp->io_actual_out[1U] = ((0xfff00000U & (((
						   (0x3fffU 
						    & VL_EXTENDS_II(14,13, 
								    (0xfffU 
								     & ((IData)(0x780U) 
									+ 
									(0x1fffU 
									 & VL_EXTENDS_II(13,12, 
										(0x80U 
										| (0x3fU 
										& (~ (IData)(vlTOPp->ValExec_UI64ToRecF64__DOT__iNToRecFN__DOT___T_133)))))))))) 
						   + 
						   (0x3fffU 
						    & VL_EXTENDS_II(14,13, 
								    (3U 
								     & (IData)(
									       (vlTOPp->ValExec_UI64ToRecF64__DOT__iNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_40 
										>> 0x35U)))))) 
						  & (~ 
						     ((0x80000000U 
						       & vlTOPp->ValExec_UI64ToRecF64__DOT__iNToRecFN__DOT___T_134[1U])
						       ? 0U
						       : 0xe00U))) 
						 << 0x14U)) 
				 | (IData)(((VL_ULL(0xfffffffffffff) 
					     & ((0x80000000U 
						 & vlTOPp->ValExec_UI64ToRecF64__DOT__iNToRecFN__DOT___T_134[1U])
						 ? vlTOPp->ValExec_UI64ToRecF64__DOT__iNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_40
						 : VL_ULL(0))) 
					    >> 0x20U)));
    vlTOPp->io_actual_out[2U] = 0U;
    vlTOPp->ValExec_UI64ToRecF64__DOT___T_146 = ((0xfU 
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
			 ? ((IData)(vlTOPp->ValExec_UI64ToRecF64__DOT___T_146) 
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
			     ? (IData)(vlTOPp->ValExec_UI64ToRecF64__DOT___T_146)
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
    io_in = VL_RAND_RESET_Q(64);
    io_roundingMode = VL_RAND_RESET_I(3);
    io_detectTininess = VL_RAND_RESET_I(1);
    io_expected_out = VL_RAND_RESET_Q(64);
    io_expected_exceptionFlags = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(65,io_expected_recOut);
    VL_RAND_RESET_W(65,io_actual_out);
    io_actual_exceptionFlags = VL_RAND_RESET_I(5);
    io_check = VL_RAND_RESET_I(1);
    io_pass = VL_RAND_RESET_I(1);
    ValExec_UI64ToRecF64__DOT___T_107 = VL_RAND_RESET_I(6);
    ValExec_UI64ToRecF64__DOT___T_116 = VL_RAND_RESET_I(12);
    ValExec_UI64ToRecF64__DOT___T_117 = VL_RAND_RESET_I(1);
    ValExec_UI64ToRecF64__DOT___T_146 = VL_RAND_RESET_I(1);
    ValExec_UI64ToRecF64__DOT__iNToRecFN__DOT___T_133 = VL_RAND_RESET_I(6);
    VL_RAND_RESET_W(127,ValExec_UI64ToRecF64__DOT__iNToRecFN__DOT___T_134);
    ValExec_UI64ToRecF64__DOT__iNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig = VL_RAND_RESET_Q(56);
    ValExec_UI64ToRecF64__DOT__iNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__common_inexact = VL_RAND_RESET_I(1);
    ValExec_UI64ToRecF64__DOT__iNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_40 = VL_RAND_RESET_Q(55);
}
