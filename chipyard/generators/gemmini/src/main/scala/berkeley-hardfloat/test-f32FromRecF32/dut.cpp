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
    // INITIAL at test-f32FromRecF32/ValExec_f32FromRecF32.v:134
    vlTOPp->io_check = 1U;
}

VL_INLINE_OPT void dut::_combo__TOP__2(dut__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    dut::_combo__TOP__2\n"); );
    dut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ValExec_f32FromRecF32__DOT___T_59 = ((0U 
						  == 
						  (0xffU 
						   & (vlTOPp->io_a 
						      >> 0x17U))) 
						 & (0U 
						    == 
						    (0x7fffffU 
						     & vlTOPp->io_a)));
    vlTOPp->ValExec_f32FromRecF32__DOT___T_49 = ((0x400000U 
						  & vlTOPp->io_a)
						  ? 0U
						  : 
						 ((0x200000U 
						   & vlTOPp->io_a)
						   ? 1U
						   : 
						  ((0x100000U 
						    & vlTOPp->io_a)
						    ? 2U
						    : 
						   ((0x80000U 
						     & vlTOPp->io_a)
						     ? 3U
						     : 
						    ((0x40000U 
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
    vlTOPp->ValExec_f32FromRecF32__DOT___T_58 = (0x1ffU 
						 & (((0U 
						      == 
						      (0xffU 
						       & (vlTOPp->io_a 
							  >> 0x17U)))
						      ? 
						     (~ (IData)(vlTOPp->ValExec_f32FromRecF32__DOT___T_49))
						      : 
						     (0xffU 
						      & (vlTOPp->io_a 
							 >> 0x17U))) 
						    + 
						    (0x80U 
						     | ((0U 
							 == 
							 (0xffU 
							  & (vlTOPp->io_a 
							     >> 0x17U)))
							 ? 2U
							 : 1U))));
    vlTOPp->ValExec_f32FromRecF32__DOT___T_80 = (((QData)((IData)(
								  (1U 
								   & (vlTOPp->io_a 
								      >> 0x1fU)))) 
						  << 0x20U) 
						 | (QData)((IData)(
								   ((0xe0000000U 
								     & ((((IData)(vlTOPp->ValExec_f32FromRecF32__DOT___T_59)
									   ? 0U
									   : 
									  ((IData)(vlTOPp->ValExec_f32FromRecF32__DOT___T_58) 
									   >> 6U)) 
									 | ((3U 
									     == 
									     (3U 
									      & ((IData)(vlTOPp->ValExec_f32FromRecF32__DOT___T_58) 
										>> 7U))) 
									    & (0U 
									       != 
									       (0x7fffffU 
										& vlTOPp->io_a)))) 
									<< 0x1dU)) 
								    | ((0x1f800000U 
									& ((IData)(vlTOPp->ValExec_f32FromRecF32__DOT___T_58) 
									   << 0x17U)) 
								       | (0x7fffffU 
									  & ((0U 
									      == 
									      (0xffU 
									       & (vlTOPp->io_a 
										>> 0x17U)))
									      ? 
									     (0x7ffffeU 
									      & ((IData)(
										(VL_ULL(0x3fffffffffffff) 
										& ((QData)((IData)(
										(0x7fffffU 
										& vlTOPp->io_a))) 
										<< (IData)(vlTOPp->ValExec_f32FromRecF32__DOT___T_49)))) 
										<< 1U))
									      : vlTOPp->io_a)))))));
    vlTOPp->ValExec_f32FromRecF32__DOT___T_91 = ((3U 
						  == 
						  (3U 
						   & (IData)(
							     (vlTOPp->ValExec_f32FromRecF32__DOT___T_80 
							      >> 0x1eU)))) 
						 & (~ (IData)(
							      (vlTOPp->ValExec_f32FromRecF32__DOT___T_80 
							       >> 0x1dU))));
    vlTOPp->ValExec_f32FromRecF32__DOT___T_97 = (((0U 
						   != 
						   (7U 
						    & (IData)(
							      (vlTOPp->ValExec_f32FromRecF32__DOT___T_80 
							       >> 0x1dU)))) 
						  << 0x17U) 
						 | (0x7fffffU 
						    & (IData)(vlTOPp->ValExec_f32FromRecF32__DOT___T_80)));
    vlTOPp->io_out = ((0x80000000U & ((IData)((vlTOPp->ValExec_f32FromRecF32__DOT___T_80 
					       >> 0x20U)) 
				      << 0x1fU)) | 
		      ((0x7f800000U & (((VL_GTS_III(1,10,10, 0x82U, 
						    (0x1ffU 
						     & (IData)(
							       (vlTOPp->ValExec_f32FromRecF32__DOT___T_80 
								>> 0x17U))))
					  ? 0U : ((0x1ffU 
						   & (IData)(
							     (vlTOPp->ValExec_f32FromRecF32__DOT___T_80 
							      >> 0x17U))) 
						  - (IData)(0x81U))) 
					| ((((3U == 
					      (3U & (IData)(
							    (vlTOPp->ValExec_f32FromRecF32__DOT___T_80 
							     >> 0x1eU)))) 
					     & (IData)(
						       (vlTOPp->ValExec_f32FromRecF32__DOT___T_80 
							>> 0x1dU))) 
					    | (IData)(vlTOPp->ValExec_f32FromRecF32__DOT___T_91))
					    ? 0xffU
					    : 0U)) 
				       << 0x17U)) | 
		       (0x7fffffU & (VL_GTS_III(1,10,10, 0x82U, 
						(0x1ffU 
						 & (IData)(
							   (vlTOPp->ValExec_f32FromRecF32__DOT___T_80 
							    >> 0x17U))))
				      ? (0xffffffU 
					 & ((0xffffffU 
					     & (vlTOPp->ValExec_f32FromRecF32__DOT___T_97 
						>> 1U)) 
					    >> (0x1fU 
						& ((IData)(1U) 
						   - 
						   (0x1ffU 
						    & (IData)(
							      (vlTOPp->ValExec_f32FromRecF32__DOT___T_80 
							       >> 0x17U)))))))
				      : ((IData)(vlTOPp->ValExec_f32FromRecF32__DOT___T_91)
					  ? 0U : vlTOPp->ValExec_f32FromRecF32__DOT___T_97)))));
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
    io_a = VL_RAND_RESET_I(32);
    io_out = VL_RAND_RESET_I(32);
    io_check = VL_RAND_RESET_I(1);
    io_pass = VL_RAND_RESET_I(1);
    ValExec_f32FromRecF32__DOT___T_49 = VL_RAND_RESET_I(5);
    ValExec_f32FromRecF32__DOT___T_58 = VL_RAND_RESET_I(9);
    ValExec_f32FromRecF32__DOT___T_59 = VL_RAND_RESET_I(1);
    ValExec_f32FromRecF32__DOT___T_80 = VL_RAND_RESET_Q(33);
    ValExec_f32FromRecF32__DOT___T_91 = VL_RAND_RESET_I(1);
    ValExec_f32FromRecF32__DOT___T_97 = VL_RAND_RESET_I(25);
}
