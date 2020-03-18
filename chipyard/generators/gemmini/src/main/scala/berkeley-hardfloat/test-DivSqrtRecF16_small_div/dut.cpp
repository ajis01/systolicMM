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

VL_INLINE_OPT void dut::_sequent__TOP__1(dut__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    dut::_sequent__TOP__1\n"); );
    dut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdlyvdim0__ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_a__v0,2,0);
    VL_SIG8(__Vdlyvset__ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_a__v0,0,0);
    VL_SIG8(__Vdlyvdim0__ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_b__v0,2,0);
    VL_SIG8(__Vdlyvset__ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_b__v0,0,0);
    VL_SIG8(__Vdlyvdim0__ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_roundingMode__v0,2,0);
    VL_SIG8(__Vdlyvval__ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_roundingMode__v0,2,0);
    VL_SIG8(__Vdlyvset__ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_roundingMode__v0,0,0);
    VL_SIG8(__Vdlyvdim0__ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_detectTininess__v0,2,0);
    VL_SIG8(__Vdlyvval__ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_detectTininess__v0,0,0);
    VL_SIG8(__Vdlyvset__ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_detectTininess__v0,0,0);
    VL_SIG8(__Vdlyvdim0__ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_out__v0,2,0);
    VL_SIG8(__Vdlyvset__ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_out__v0,0,0);
    VL_SIG8(__Vdlyvdim0__ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_exceptionFlags__v0,2,0);
    VL_SIG8(__Vdlyvval__ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_exceptionFlags__v0,4,0);
    VL_SIG8(__Vdlyvset__ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_exceptionFlags__v0,0,0);
    VL_SIG16(__Vdlyvval__ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_a__v0,15,0);
    VL_SIG16(__Vdlyvval__ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_b__v0,15,0);
    VL_SIG16(__Vdlyvval__ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_out__v0,15,0);
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
    __Vdlyvset__ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_a__v0 = 0U;
    __Vdlyvset__ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_b__v0 = 0U;
    __Vdlyvset__ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_detectTininess__v0 = 0U;
    __Vdlyvset__ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_roundingMode__v0 = 0U;
    __Vdlyvset__ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_exceptionFlags__v0 = 0U;
    __Vdlyvset__ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_out__v0 = 0U;
    // ALWAYS at test-DivSqrtRecF16_small_div/ValExec_DivSqrtRecF16_small_div.v:306
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__rem_Z 
	= (0x1fffU & (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___GEN_10));
    // ALWAYS at test-DivSqrtRecF16_small_div/ValExec_DivSqrtRecF16_small_div.v:306
    if (vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering_normalCase) {
	vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__fractB_Z 
	    = (0x3ffU & (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_b_sig));
    }
    // ALWAYS at test-DivSqrtRecF16_small_div/ValExec_DivSqrtRecF16_small_div.v:1120
    if (vlTOPp->reset) {
	vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_1 = 0U;
    } else {
	if (((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_6) 
	     != (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_8))) {
	    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_1 
		= vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_6;
	}
    }
    // ALWAYS at test-DivSqrtRecF16_small_div/ValExec_DivSqrtRecF16_small_div.v:1120
    if (((~ (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_5)) 
	 & (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq_io_enq_valid))) {
	vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT____Vlvbound1 
	    = vlTOPp->io_input_bits_a;
	if ((4U >= (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT__value))) {
	    __Vdlyvval__ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_a__v0 
		= vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT____Vlvbound1;
	    __Vdlyvset__ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_a__v0 = 1U;
	    __Vdlyvdim0__ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_a__v0 
		= vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT__value;
	}
    }
    // ALWAYS at test-DivSqrtRecF16_small_div/ValExec_DivSqrtRecF16_small_div.v:1120
    if (((~ (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_5)) 
	 & (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq_io_enq_valid))) {
	vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT____Vlvbound2 
	    = vlTOPp->io_input_bits_b;
	if ((4U >= (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT__value))) {
	    __Vdlyvval__ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_b__v0 
		= vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT____Vlvbound2;
	    __Vdlyvset__ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_b__v0 = 1U;
	    __Vdlyvdim0__ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_b__v0 
		= vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT__value;
	}
    }
    // ALWAYS at test-DivSqrtRecF16_small_div/ValExec_DivSqrtRecF16_small_div.v:1120
    if (((~ (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_5)) 
	 & (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq_io_enq_valid))) {
	vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT____Vlvbound4 
	    = vlTOPp->io_input_bits_detectTininess;
	if ((4U >= (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT__value))) {
	    __Vdlyvval__ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_detectTininess__v0 
		= vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT____Vlvbound4;
	    __Vdlyvset__ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_detectTininess__v0 = 1U;
	    __Vdlyvdim0__ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_detectTininess__v0 
		= vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT__value;
	}
    }
    // ALWAYS at test-DivSqrtRecF16_small_div/ValExec_DivSqrtRecF16_small_div.v:1120
    if (((~ (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_5)) 
	 & (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq_io_enq_valid))) {
	vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT____Vlvbound3 
	    = vlTOPp->io_input_bits_roundingMode;
	if ((4U >= (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT__value))) {
	    __Vdlyvval__ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_roundingMode__v0 
		= vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT____Vlvbound3;
	    __Vdlyvset__ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_roundingMode__v0 = 1U;
	    __Vdlyvdim0__ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_roundingMode__v0 
		= vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT__value;
	}
    }
    // ALWAYS at test-DivSqrtRecF16_small_div/ValExec_DivSqrtRecF16_small_div.v:1120
    if (((~ (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_5)) 
	 & (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq_io_enq_valid))) {
	vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT____Vlvbound6 
	    = vlTOPp->io_input_bits_exceptionFlags;
	if ((4U >= (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT__value))) {
	    __Vdlyvval__ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_exceptionFlags__v0 
		= vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT____Vlvbound6;
	    __Vdlyvset__ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_exceptionFlags__v0 = 1U;
	    __Vdlyvdim0__ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_exceptionFlags__v0 
		= vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT__value;
	}
    }
    // ALWAYS at test-DivSqrtRecF16_small_div/ValExec_DivSqrtRecF16_small_div.v:306
    if (vlTOPp->reset) {
	vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum = 1U;
    } else {
	if (vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_52) {
	    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum 
		= vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_68;
	}
    }
    // ALWAYS at test-DivSqrtRecF16_small_div/ValExec_DivSqrtRecF16_small_div.v:1120
    if (vlTOPp->reset) {
	vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT__value_1 = 0U;
    } else {
	if (vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_8) {
	    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT__value_1 
		= ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT__wrap_1)
		    ? 0U : (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_14));
	}
    }
    // ALWAYS at test-DivSqrtRecF16_small_div/ValExec_DivSqrtRecF16_small_div.v:306
    if (vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering) {
	vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isZero_Z 
	    = ((0U == (7U & (vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds_io_a 
			     >> 0xdU))) | (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_b_isInf));
    }
    // ALWAYS at test-DivSqrtRecF16_small_div/ValExec_DivSqrtRecF16_small_div.v:1120
    if (((~ (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_5)) 
	 & (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq_io_enq_valid))) {
	vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT____Vlvbound5 
	    = vlTOPp->io_input_bits_out;
	if ((4U >= (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT__value))) {
	    __Vdlyvval__ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_out__v0 
		= vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT____Vlvbound5;
	    __Vdlyvset__ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_out__v0 = 1U;
	    __Vdlyvdim0__ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_out__v0 
		= vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT__value;
	}
    }
    // ALWAYS at test-DivSqrtRecF16_small_div/ValExec_DivSqrtRecF16_small_div.v:306
    if (vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering) {
	vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isInf_Z 
	    = ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_isInf) 
	       | (0U == (7U & (vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds_io_b 
			       >> 0xdU))));
    }
    // ALWAYS at test-DivSqrtRecF16_small_div/ValExec_DivSqrtRecF16_small_div.v:306
    if (vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering) {
	vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sign_Z 
	    = (1U & ((vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds_io_a 
		      ^ vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds_io_b) 
		     >> 0x10U));
    }
    // ALWAYS at test-DivSqrtRecF16_small_div/ValExec_DivSqrtRecF16_small_div.v:306
    if (vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering) {
	vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__majorExc_Z 
	    = (((((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_isNaN) 
		  & (~ ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_sig) 
			>> 9U))) | ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_b_isNaN) 
				    & (~ ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_b_sig) 
					  >> 9U)))) 
		| (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__notSigNaNIn_invalidExc_S_div)) 
	       | (((~ (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_isNaN)) 
		   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_isInf))) 
		  & (0U == (7U & (vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds_io_b 
				  >> 0xdU)))));
    }
    // ALWAYS at test-DivSqrtRecF16_small_div/ValExec_DivSqrtRecF16_small_div.v:306
    if (vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering) {
	vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isNaN_Z 
	    = (((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_isNaN) 
		| (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_b_isNaN)) 
	       | (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__notSigNaNIn_invalidExc_S_div));
    }
    // ALWAYS at test-DivSqrtRecF16_small_div/ValExec_DivSqrtRecF16_small_div.v:306
    if (vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering_normalCase) {
	vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__roundingMode_Z 
	    = vlTOPp->io_input_bits_roundingMode;
    }
    // ALWAYS at test-DivSqrtRecF16_small_div/ValExec_DivSqrtRecF16_small_div.v:306
    if (vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_125) {
	vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__notZeroRem_Z 
	    = (0U != (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__trialRem));
    }
    // ALWAYS at test-DivSqrtRecF16_small_div/ValExec_DivSqrtRecF16_small_div.v:306
    if (vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_125) {
	vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sigX_Z 
	    = vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_141;
    }
    // ALWAYS at test-DivSqrtRecF16_small_div/ValExec_DivSqrtRecF16_small_div.v:306
    if (vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering_normalCase) {
	vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z 
	    = ((0x78U & ((VL_LTES_III(1,8,8, 0x38U, (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExpQuot_S_div))
			   ? 6U : ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExpQuot_S_div) 
				   >> 3U)) << 3U)) 
	       | (7U & (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExpQuot_S_div)));
    }
    // ALWAYSPOST at test-DivSqrtRecF16_small_div/ValExec_DivSqrtRecF16_small_div.v:1121
    if (__Vdlyvset__ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_a__v0) {
	vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_a[__Vdlyvdim0__ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_a__v0] 
	    = __Vdlyvval__ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_a__v0;
    }
    // ALWAYSPOST at test-DivSqrtRecF16_small_div/ValExec_DivSqrtRecF16_small_div.v:1124
    if (__Vdlyvset__ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_b__v0) {
	vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_b[__Vdlyvdim0__ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_b__v0] 
	    = __Vdlyvval__ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_b__v0;
    }
    // ALWAYSPOST at test-DivSqrtRecF16_small_div/ValExec_DivSqrtRecF16_small_div.v:1130
    if (__Vdlyvset__ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_detectTininess__v0) {
	vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_detectTininess[__Vdlyvdim0__ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_detectTininess__v0] 
	    = __Vdlyvval__ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_detectTininess__v0;
    }
    // ALWAYSPOST at test-DivSqrtRecF16_small_div/ValExec_DivSqrtRecF16_small_div.v:1127
    if (__Vdlyvset__ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_roundingMode__v0) {
	vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_roundingMode[__Vdlyvdim0__ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_roundingMode__v0] 
	    = __Vdlyvval__ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_roundingMode__v0;
    }
    // ALWAYSPOST at test-DivSqrtRecF16_small_div/ValExec_DivSqrtRecF16_small_div.v:1136
    if (__Vdlyvset__ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_exceptionFlags__v0) {
	vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_exceptionFlags[__Vdlyvdim0__ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_exceptionFlags__v0] 
	    = __Vdlyvval__ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_exceptionFlags__v0;
    }
    // ALWAYSPOST at test-DivSqrtRecF16_small_div/ValExec_DivSqrtRecF16_small_div.v:1133
    if (__Vdlyvset__ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_out__v0) {
	vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_out[__Vdlyvdim0__ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_out__v0] 
	    = __Vdlyvval__ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_out__v0;
    }
    vlTOPp->io_check = (1U & ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum) 
			      >> 1U));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady 
	= (1U & ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum) 
		 | ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum) 
		    >> 1U)));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT__wrap_1 
	= (4U == (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT__value_1));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_14 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT__value_1)));
    vlTOPp->io_output_a = ((4U >= (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT__value_1))
			    ? vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_a
			   [vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT__value_1]
			    : 0U);
    vlTOPp->io_output_b = ((4U >= (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT__value_1))
			    ? vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_b
			   [vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT__value_1]
			    : 0U);
    vlTOPp->io_output_roundingMode = ((4U >= (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT__value_1))
				       ? vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_roundingMode
				      [vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT__value_1]
				       : 0U);
    vlTOPp->io_output_detectTininess = ((4U >= (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT__value_1)) 
					& vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_detectTininess
					[vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT__value_1]);
    vlTOPp->io_expected_exceptionFlags = ((4U >= (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT__value_1))
					   ? vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_exceptionFlags
					  [vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT__value_1]
					   : 0U);
    // ALWAYS at test-DivSqrtRecF16_small_div/ValExec_DivSqrtRecF16_small_div.v:1120
    if (vlTOPp->reset) {
	vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT__value = 0U;
    } else {
	if (vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_6) {
	    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT__value 
		= ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT__wrap)
		    ? 0U : (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_12));
	}
    }
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_out___05FT_18_data 
	= ((4U >= (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT__value_1))
	    ? vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_out
	   [vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT__value_1]
	    : 0U);
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_invalidExc 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__majorExc_Z) 
	   & (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isNaN_Z));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_infiniteExc 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__majorExc_Z) 
	   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isNaN_Z)));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_59 
	= ((0U == (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__roundingMode_Z)) 
	   | (4U == (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__roundingMode_Z)));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
	= (((2U == (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__roundingMode_Z)) 
	    & (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sign_Z)) 
	   | ((3U == (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__roundingMode_Z)) 
	      & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sign_Z))));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__skipCycle2 
	= (1U & (((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum) 
		  >> 3U) & ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sigX_Z) 
			    >> 0xcU)));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig 
	= (((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sigX_Z) 
	    << 1U) | (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__notZeroRem_Z));
    __Vtemp2[0U] = 0U;
    __Vtemp2[1U] = 0U;
    __Vtemp2[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp3, __Vtemp2, (0x3fU 
						 & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp6[0U] = 0U;
    __Vtemp6[1U] = 0U;
    __Vtemp6[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp7, __Vtemp6, (0x3fU 
						 & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_16 
	= ((0xfU & ((__Vtemp3[1U] << 0x15U) | (__Vtemp3[0U] 
					       >> 0xbU))) 
	   | (0xf0U & ((__Vtemp7[1U] << 0x1dU) | (0x1ffffff0U 
						  & (__Vtemp7[0U] 
						     >> 3U)))));
    vlTOPp->io_expected_out = vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_out___05FT_18_data;
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT___T_146 
	= ((0U == (0x1fU & ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_out___05FT_18_data) 
			    >> 0xaU))) & (0U == (0x3ffU 
						 & (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_out___05FT_18_data))));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT___T_136 
	= ((0x200U & (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_out___05FT_18_data))
	    ? 0U : ((0x100U & (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_out___05FT_18_data))
		     ? 1U : ((0x80U & (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_out___05FT_18_data))
			      ? 2U : ((0x40U & (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_out___05FT_18_data))
				       ? 3U : ((0x20U 
						& (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_out___05FT_18_data))
					        ? 4U
					        : (
						   (0x10U 
						    & (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_out___05FT_18_data))
						    ? 5U
						    : 
						   ((8U 
						     & (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_out___05FT_18_data))
						     ? 6U
						     : 
						    ((4U 
						      & (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_out___05FT_18_data))
						      ? 7U
						      : 
						     ((2U 
						       & (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_out___05FT_18_data))
						       ? 8U
						       : 9U)))))))));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_invalidExc) 
	   | (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isNaN_Z));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_infiniteExc) 
	   | (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isInf_Z));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_59) 
	   | (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_26 
	= ((0x33U & ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_16) 
		     >> 2U)) | (0xccU & ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_16) 
					 << 2U)));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT__wrap 
	= (4U == (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT__value));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_12 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT__value)));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_2 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT__value) 
	   == (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT__value_1));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT___T_145 
	= (0x3fU & (((0U == (0x1fU & ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_out___05FT_18_data) 
				      >> 0xaU))) ? 
		     (~ (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT___T_136))
		      : (0x1fU & ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_out___05FT_18_data) 
				  >> 0xaU))) + (0x10U 
						| ((0U 
						    == 
						    (0x1fU 
						     & ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_out___05FT_18_data) 
							>> 0xaU)))
						    ? 2U
						    : 1U))));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
	= (1U & (((~ (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
		  & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut))) 
		 & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isZero_Z))));
    __Vtemp10[0U] = 0U;
    __Vtemp10[1U] = 0U;
    __Vtemp10[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp11, __Vtemp10, (0x3fU 
						   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp14[0U] = 0U;
    __Vtemp14[1U] = 0U;
    __Vtemp14[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp15, __Vtemp14, (0x3fU 
						   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp18[0U] = 0U;
    __Vtemp18[1U] = 0U;
    __Vtemp18[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp19, __Vtemp18, (0x3fU 
						   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp22[0U] = 0U;
    __Vtemp22[1U] = 0U;
    __Vtemp22[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp23, __Vtemp22, (0x3fU 
						   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_48 
	= ((((0x550U & ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_26) 
			<< 3U)) | (0xaa0U & ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_26) 
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
	   | (1U & ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig) 
		    >> 0xdU)));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_4 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_2) 
	   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_1)));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_5 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_2) 
	   & (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_1));
    vlTOPp->io_expected_recOut = (((0x10000U & ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_out___05FT_18_data) 
						<< 1U)) 
				   | (0xe000U & ((((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT___T_146)
						    ? 0U
						    : 
						   ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT___T_145) 
						    >> 3U)) 
						  | ((3U 
						      == 
						      (3U 
						       & ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT___T_145) 
							  >> 4U))) 
						     & (0U 
							!= 
							(0x3ffU 
							 & (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_out___05FT_18_data))))) 
						 << 0xdU))) 
				  | ((0x1c00U & ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT___T_145) 
						 << 0xaU)) 
				     | (0x3ffU & ((0U 
						   == 
						   (0x1fU 
						    & ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_out___05FT_18_data) 
						       >> 0xaU)))
						   ? 
						  (0x3feU 
						   & (((0x3ffU 
							& (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_out___05FT_18_data)) 
						       << (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT___T_136)) 
						      << 1U))
						   : (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_out___05FT_18_data)))));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_56 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig) 
	   & (1U | ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_48) 
		    << 1U)));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_53 
	= ((~ (1U | ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_48) 
		     << 1U))) & (3U | ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_48) 
				       << 2U)));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_8 
	= (1U & (((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum) 
		  >> 1U) & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_4))));
    vlTOPp->io_input_ready = ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady) 
			      & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_5)));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_54 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig) 
	   & (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_53));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_58 
	= ((0U != (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_54)) 
	   | (0U != (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_56)));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_80 
	= (0x1fffU & ((((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_59) 
			& (0U != (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_54))) 
		       | ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
			  & (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_58)))
		       ? (((IData)(1U) + (0xfffU & 
					  (((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig) 
					    >> 2U) 
					   | (0x3fffffffU 
					      & (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_48))))) 
			  & (~ ((((0U == (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__roundingMode_Z)) 
				  & (0U != (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_54))) 
				 & (0U == (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_56)))
				 ? (1U | ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_48) 
					  << 1U)) : 0U)))
		       : ((0xfffU & (((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig) 
				      & (~ (3U | ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_48) 
						  << 2U)))) 
				     >> 2U)) | (((6U 
						  == (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__roundingMode_Z)) 
						 & (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_58))
						 ? 
						((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_53) 
						 >> 1U)
						 : 0U))));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_83 
	= (0xffU & (VL_EXTENDS_II(8,7, (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z)) 
		    + VL_EXTENDS_II(8,7, (3U & ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_80) 
						>> 0xbU)))));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut 
	= (((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
	    & VL_GTS_III(1,8,8, 8U, (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_83))) 
	   & ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
	      | (6U == (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__roundingMode_Z))));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
	   & VL_LTES_III(1,4,4, 3U, (0xfU & ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_83) 
					     >> 4U))));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
	   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut) 
	   | ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
	      & (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->io_actual_out = ((((~ (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
			       & (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sign_Z)) 
			      << 0x10U) | ((0xfc00U 
					    & ((((((((((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_83) 
						       & (~ 
							  (((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isZero_Z) 
							    | VL_GTS_III(1,8,8, 8U, (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_83)))
							    ? 0x38U
							    : 0U))) 
						      & (~ 
							 ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
							   ? 0x37U
							   : 0U))) 
						     & (~ 
							((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
							  ? 0x10U
							  : 0U))) 
						    & (~ 
						       ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
							 ? 8U
							 : 0U))) 
						   | ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
						       ? 8U
						       : 0U)) 
						  | ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
						      ? 0x2fU
						      : 0U)) 
						 | ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
						     ? 0x30U
						     : 0U)) 
						| ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
						    ? 0x38U
						    : 0U)) 
					       << 0xaU)) 
					   | (0x3ffU 
					      & (((((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
						    | (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isZero_Z)) 
						   | VL_GTS_III(1,8,8, 8U, (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_83)))
						   ? 
						  ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
						    ? 0x200U
						    : 0U)
						   : 
						  ((0x2000U 
						    & (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig))
						    ? 
						   ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_80) 
						    >> 1U)
						    : (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_80))) 
						 | ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
						     ? 0x3ffU
						     : 0U)))));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT___T_175 
	= ((0xfU & (vlTOPp->io_actual_out >> 0xdU)) 
	   == (0xfU & (vlTOPp->io_expected_recOut >> 0xdU)));
}

VL_INLINE_OPT void dut::_combo__TOP__2(dut__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    dut::_combo__TOP__2\n"); );
    dut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT___T_36 
	= ((0U == (0x1fU & ((IData)(vlTOPp->io_input_bits_a) 
			    >> 0xaU))) & (0U == (0x3ffU 
						 & (IData)(vlTOPp->io_input_bits_a))));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT___T_91 
	= ((0U == (0x1fU & ((IData)(vlTOPp->io_input_bits_b) 
			    >> 0xaU))) & (0U == (0x3ffU 
						 & (IData)(vlTOPp->io_input_bits_b))));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT___T_26 
	= ((0x200U & (IData)(vlTOPp->io_input_bits_a))
	    ? 0U : ((0x100U & (IData)(vlTOPp->io_input_bits_a))
		     ? 1U : ((0x80U & (IData)(vlTOPp->io_input_bits_a))
			      ? 2U : ((0x40U & (IData)(vlTOPp->io_input_bits_a))
				       ? 3U : ((0x20U 
						& (IData)(vlTOPp->io_input_bits_a))
					        ? 4U
					        : (
						   (0x10U 
						    & (IData)(vlTOPp->io_input_bits_a))
						    ? 5U
						    : 
						   ((8U 
						     & (IData)(vlTOPp->io_input_bits_a))
						     ? 6U
						     : 
						    ((4U 
						      & (IData)(vlTOPp->io_input_bits_a))
						      ? 7U
						      : 
						     ((2U 
						       & (IData)(vlTOPp->io_input_bits_a))
						       ? 8U
						       : 9U)))))))));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT___T_81 
	= ((0x200U & (IData)(vlTOPp->io_input_bits_b))
	    ? 0U : ((0x100U & (IData)(vlTOPp->io_input_bits_b))
		     ? 1U : ((0x80U & (IData)(vlTOPp->io_input_bits_b))
			      ? 2U : ((0x40U & (IData)(vlTOPp->io_input_bits_b))
				       ? 3U : ((0x20U 
						& (IData)(vlTOPp->io_input_bits_b))
					        ? 4U
					        : (
						   (0x10U 
						    & (IData)(vlTOPp->io_input_bits_b))
						    ? 5U
						    : 
						   ((8U 
						     & (IData)(vlTOPp->io_input_bits_b))
						     ? 6U
						     : 
						    ((4U 
						      & (IData)(vlTOPp->io_input_bits_b))
						      ? 7U
						      : 
						     ((2U 
						       & (IData)(vlTOPp->io_input_bits_b))
						       ? 8U
						       : 9U)))))))));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq_io_enq_valid 
	= ((IData)(vlTOPp->io_input_valid) & (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady) 
	   & ((IData)(vlTOPp->io_input_valid) & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_5))));
    vlTOPp->io_actual_exceptionFlags = ((((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_invalidExc) 
					  << 4U) | 
					 (((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_infiniteExc) 
					   << 3U) | 
					  ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
					   << 2U))) 
					| ((((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
					     & (VL_GTS_III(1,8,8, 8U, (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_83)) 
						| ((((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_58) 
						     & VL_GTES_III(1,2,2, 0U, 
								   (3U 
								    & ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z) 
								       >> 5U)))) 
						    & ((0x2000U 
							& (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig))
						        ? 
						       ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_48) 
							>> 1U)
						        : (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_48))) 
						   & (~ 
						      (((((IData)(vlTOPp->io_input_bits_detectTininess) 
							  & (~ 
							     ((0x2000U 
							       & (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig))
							       ? 
							      ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_48) 
							       >> 2U)
							       : 
							      ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_48) 
							       >> 1U)))) 
							 & ((0x2000U 
							     & (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig))
							     ? 
							    ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_80) 
							     >> 0xcU)
							     : 
							    ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_80) 
							     >> 0xbU))) 
							& (0U 
							   != (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_54))) 
						       & (((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_59) 
							   & ((0x2000U 
							       & (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig))
							       ? 
							      ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig) 
							       >> 2U)
							       : 
							      ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig) 
							       >> 1U))) 
							  | ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
							     & ((((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig) 
								  >> 0xdU) 
								 & ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig) 
								    >> 2U)) 
								| (0U 
								   != 
								   (3U 
								    & (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig))))))))))) 
					    << 1U) 
					   | ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
					      | ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
						 & (VL_GTS_III(1,8,8, 8U, (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_83)) 
						    | (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_58))))));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT___T_35 
	= (0x3fU & (((0U == (0x1fU & ((IData)(vlTOPp->io_input_bits_a) 
				      >> 0xaU))) ? 
		     (~ (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT___T_26))
		      : (0x1fU & ((IData)(vlTOPp->io_input_bits_a) 
				  >> 0xaU))) + (0x10U 
						| ((0U 
						    == 
						    (0x1fU 
						     & ((IData)(vlTOPp->io_input_bits_a) 
							>> 0xaU)))
						    ? 2U
						    : 1U))));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT___T_90 
	= (0x3fU & (((0U == (0x1fU & ((IData)(vlTOPp->io_input_bits_b) 
				      >> 0xaU))) ? 
		     (~ (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT___T_81))
		      : (0x1fU & ((IData)(vlTOPp->io_input_bits_b) 
				  >> 0xaU))) + (0x10U 
						| ((0U 
						    == 
						    (0x1fU 
						     & ((IData)(vlTOPp->io_input_bits_b) 
							>> 0xaU)))
						    ? 2U
						    : 1U))));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_6 
	= ((~ (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_5)) 
	   & (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq_io_enq_valid));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_52 
	= (1U & ((~ (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum)) 
		 | (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering)));
    vlTOPp->io_pass = (((~ (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_4)) 
			& (((0U == (7U & (vlTOPp->io_actual_out 
					  >> 0xdU))) 
			    | (7U == (7U & (vlTOPp->io_actual_out 
					    >> 0xdU))))
			    ? ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT___T_175) 
			       & ((0x3ffU & vlTOPp->io_actual_out) 
				  == (0x3ffU & vlTOPp->io_expected_recOut)))
			    : ((6U == (7U & (vlTOPp->io_actual_out 
					     >> 0xdU)))
			        ? (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT___T_175)
			        : (vlTOPp->io_actual_out 
				   == vlTOPp->io_expected_recOut)))) 
		       & ((IData)(vlTOPp->io_actual_exceptionFlags) 
			  == (IData)(vlTOPp->io_expected_exceptionFlags)));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds_io_a 
	= (((0x10000U & ((IData)(vlTOPp->io_input_bits_a) 
			 << 1U)) | (0xe000U & ((((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT___T_36)
						  ? 0U
						  : 
						 ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT___T_35) 
						  >> 3U)) 
						| ((3U 
						    == 
						    (3U 
						     & ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT___T_35) 
							>> 4U))) 
						   & (0U 
						      != 
						      (0x3ffU 
						       & (IData)(vlTOPp->io_input_bits_a))))) 
					       << 0xdU))) 
	   | ((0x1c00U & ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT___T_35) 
			  << 0xaU)) | (0x3ffU & ((0U 
						  == 
						  (0x1fU 
						   & ((IData)(vlTOPp->io_input_bits_a) 
						      >> 0xaU)))
						  ? 
						 (0x3feU 
						  & (((0x3ffU 
						       & (IData)(vlTOPp->io_input_bits_a)) 
						      << (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT___T_26)) 
						     << 1U))
						  : (IData)(vlTOPp->io_input_bits_a)))));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds_io_b 
	= (((0x10000U & ((IData)(vlTOPp->io_input_bits_b) 
			 << 1U)) | (0xe000U & ((((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT___T_91)
						  ? 0U
						  : 
						 ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT___T_90) 
						  >> 3U)) 
						| ((3U 
						    == 
						    (3U 
						     & ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT___T_90) 
							>> 4U))) 
						   & (0U 
						      != 
						      (0x3ffU 
						       & (IData)(vlTOPp->io_input_bits_b))))) 
					       << 0xdU))) 
	   | ((0x1c00U & ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT___T_90) 
			  << 0xaU)) | (0x3ffU & ((0U 
						  == 
						  (0x1fU 
						   & ((IData)(vlTOPp->io_input_bits_b) 
						      >> 0xaU)))
						  ? 
						 (0x3feU 
						  & (((0x3ffU 
						       & (IData)(vlTOPp->io_input_bits_b)) 
						      << (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT___T_81)) 
						     << 1U))
						  : (IData)(vlTOPp->io_input_bits_b)))));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_sig 
	= (((0U != (7U & (vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds_io_a 
			  >> 0xdU))) << 0xaU) | (0x3ffU 
						 & vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds_io_a));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_isNaN 
	= ((3U == (3U & (vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds_io_a 
			 >> 0xeU))) & (vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds_io_a 
				       >> 0xdU));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_isInf 
	= ((3U == (3U & (vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds_io_a 
			 >> 0xeU))) & (~ (vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds_io_a 
					  >> 0xdU)));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_39 
	= ((0x20U & (vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds_io_b 
		     >> 0xaU)) | (0x1fU & (~ (0x3fU 
					      & (vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds_io_b 
						 >> 0xaU)))));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_b_sig 
	= (((0U != (7U & (vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds_io_b 
			  >> 0xdU))) << 0xaU) | (0x3ffU 
						 & vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds_io_b));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_b_isNaN 
	= ((3U == (3U & (vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds_io_b 
			 >> 0xeU))) & (vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds_io_b 
				       >> 0xdU));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_b_isInf 
	= ((3U == (3U & (vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds_io_b 
			 >> 0xeU))) & (~ (vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds_io_b 
					  >> 0xdU)));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__rem 
	= (((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady)
	     ? ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_sig) 
		<< 1U) : 0U) | ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady)
				 ? 0U : ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__rem_Z) 
					 << 1U)));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExpQuot_S_div 
	= (0xffU & (VL_EXTENDS_II(8,7, (0x3fU & (vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds_io_a 
						 >> 0xaU))) 
		    + VL_EXTENDS_II(8,7, ((0x40U & 
					   ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_39) 
					    << 1U)) 
					  | (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_39)))));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_107 
	= (((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady)
	     ? ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_b_sig) 
		<< 1U) : 0U) | ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady)
				 ? 0U : (0x800U | ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__fractB_Z) 
						   << 1U))));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__notSigNaNIn_invalidExc_S_div 
	= (((0U == (7U & (vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds_io_a 
			  >> 0xdU))) & (0U == (7U & 
					       (vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds_io_b 
						>> 0xdU)))) 
	   | ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_isInf) 
	      & (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_b_isInf)));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__normalCase_S_div 
	= (1U & ((~ (((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_isNaN) 
		      | (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_isInf)) 
		     | (0U == (7U & (vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds_io_a 
				     >> 0xdU))))) & 
		 (~ (((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_b_isNaN) 
		      | (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_b_isInf)) 
		     | (0U == (7U & (vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds_io_b 
				     >> 0xdU)))))));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__trialRem 
	= (0x7fffU & ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__rem) 
		      - (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_107)));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering_normalCase 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering) 
	   & (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__normalCase_S_div));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_141 
	= (((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady)
	     ? (VL_LTES_III(1,15,15, 0U, (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__trialRem)) 
		<< 0xcU) : 0U) | ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady)
				   ? 0U : ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sigX_Z) 
					   | (0xfffU 
					      & ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum) 
						 >> 2U)))));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_125 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering_normalCase) 
	   | ((~ (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady)) 
	      & VL_LTES_III(1,15,15, 0U, (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__trialRem))));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_68 
	= ((((((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering) 
	       & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__normalCase_S_div)))
	       ? 2U : 0U) | ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering_normalCase)
			      ? 0x2000U : 0U)) | (0x1fffU 
						  & ((1U 
						      & ((~ (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering)) 
							 & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__skipCycle2))))
						      ? 
						     ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum) 
						      >> 1U)
						      : 0U))) 
	   | ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__skipCycle2)
	       ? 2U : 0U));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___GEN_10 
	= (0x7fffU & ((1U & ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering_normalCase) 
			     | (~ ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum) 
				   | ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum) 
				      >> 2U))))) ? 
		      (VL_LTES_III(1,15,15, 0U, (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__trialRem))
		        ? ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__rem) 
			   - (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_107))
		        : (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__rem))
		       : (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__rem_Z)));
}

void dut::_settle__TOP__3(dut__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    dut::_settle__TOP__3\n"); );
    dut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp26,95,0,3);
    VL_SIGW(__Vtemp27,95,0,3);
    VL_SIGW(__Vtemp30,95,0,3);
    VL_SIGW(__Vtemp31,95,0,3);
    VL_SIGW(__Vtemp34,95,0,3);
    VL_SIGW(__Vtemp35,95,0,3);
    VL_SIGW(__Vtemp38,95,0,3);
    VL_SIGW(__Vtemp39,95,0,3);
    VL_SIGW(__Vtemp42,95,0,3);
    VL_SIGW(__Vtemp43,95,0,3);
    VL_SIGW(__Vtemp46,95,0,3);
    VL_SIGW(__Vtemp47,95,0,3);
    // Body
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT___T_36 
	= ((0U == (0x1fU & ((IData)(vlTOPp->io_input_bits_a) 
			    >> 0xaU))) & (0U == (0x3ffU 
						 & (IData)(vlTOPp->io_input_bits_a))));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT___T_91 
	= ((0U == (0x1fU & ((IData)(vlTOPp->io_input_bits_b) 
			    >> 0xaU))) & (0U == (0x3ffU 
						 & (IData)(vlTOPp->io_input_bits_b))));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT___T_26 
	= ((0x200U & (IData)(vlTOPp->io_input_bits_a))
	    ? 0U : ((0x100U & (IData)(vlTOPp->io_input_bits_a))
		     ? 1U : ((0x80U & (IData)(vlTOPp->io_input_bits_a))
			      ? 2U : ((0x40U & (IData)(vlTOPp->io_input_bits_a))
				       ? 3U : ((0x20U 
						& (IData)(vlTOPp->io_input_bits_a))
					        ? 4U
					        : (
						   (0x10U 
						    & (IData)(vlTOPp->io_input_bits_a))
						    ? 5U
						    : 
						   ((8U 
						     & (IData)(vlTOPp->io_input_bits_a))
						     ? 6U
						     : 
						    ((4U 
						      & (IData)(vlTOPp->io_input_bits_a))
						      ? 7U
						      : 
						     ((2U 
						       & (IData)(vlTOPp->io_input_bits_a))
						       ? 8U
						       : 9U)))))))));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT___T_81 
	= ((0x200U & (IData)(vlTOPp->io_input_bits_b))
	    ? 0U : ((0x100U & (IData)(vlTOPp->io_input_bits_b))
		     ? 1U : ((0x80U & (IData)(vlTOPp->io_input_bits_b))
			      ? 2U : ((0x40U & (IData)(vlTOPp->io_input_bits_b))
				       ? 3U : ((0x20U 
						& (IData)(vlTOPp->io_input_bits_b))
					        ? 4U
					        : (
						   (0x10U 
						    & (IData)(vlTOPp->io_input_bits_b))
						    ? 5U
						    : 
						   ((8U 
						     & (IData)(vlTOPp->io_input_bits_b))
						     ? 6U
						     : 
						    ((4U 
						      & (IData)(vlTOPp->io_input_bits_b))
						      ? 7U
						      : 
						     ((2U 
						       & (IData)(vlTOPp->io_input_bits_b))
						       ? 8U
						       : 9U)))))))));
    vlTOPp->io_check = (1U & ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum) 
			      >> 1U));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT__wrap_1 
	= (4U == (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT__value_1));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_14 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT__value_1)));
    vlTOPp->io_output_a = ((4U >= (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT__value_1))
			    ? vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_a
			   [vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT__value_1]
			    : 0U);
    vlTOPp->io_output_b = ((4U >= (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT__value_1))
			    ? vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_b
			   [vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT__value_1]
			    : 0U);
    vlTOPp->io_output_roundingMode = ((4U >= (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT__value_1))
				       ? vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_roundingMode
				      [vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT__value_1]
				       : 0U);
    vlTOPp->io_output_detectTininess = ((4U >= (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT__value_1)) 
					& vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_detectTininess
					[vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT__value_1]);
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__skipCycle2 
	= (1U & (((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum) 
		  >> 3U) & ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sigX_Z) 
			    >> 0xcU)));
    vlTOPp->io_expected_exceptionFlags = ((4U >= (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT__value_1))
					   ? vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_exceptionFlags
					  [vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT__value_1]
					   : 0U);
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady 
	= (1U & ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum) 
		 | ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum) 
		    >> 1U)));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_out___05FT_18_data 
	= ((4U >= (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT__value_1))
	    ? vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_out
	   [vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT__value_1]
	    : 0U);
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_invalidExc 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__majorExc_Z) 
	   & (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isNaN_Z));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_infiniteExc 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__majorExc_Z) 
	   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isNaN_Z)));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_59 
	= ((0U == (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__roundingMode_Z)) 
	   | (4U == (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__roundingMode_Z)));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
	= (((2U == (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__roundingMode_Z)) 
	    & (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sign_Z)) 
	   | ((3U == (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__roundingMode_Z)) 
	      & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sign_Z))));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig 
	= (((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sigX_Z) 
	    << 1U) | (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__notZeroRem_Z));
    __Vtemp26[0U] = 0U;
    __Vtemp26[1U] = 0U;
    __Vtemp26[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp27, __Vtemp26, (0x3fU 
						   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp30[0U] = 0U;
    __Vtemp30[1U] = 0U;
    __Vtemp30[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp31, __Vtemp30, (0x3fU 
						   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_16 
	= ((0xfU & ((__Vtemp27[1U] << 0x15U) | (__Vtemp27[0U] 
						>> 0xbU))) 
	   | (0xf0U & ((__Vtemp31[1U] << 0x1dU) | (0x1ffffff0U 
						   & (__Vtemp31[0U] 
						      >> 3U)))));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT__wrap 
	= (4U == (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT__value));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_12 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT__value)));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_2 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT__value) 
	   == (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT__value_1));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT___T_35 
	= (0x3fU & (((0U == (0x1fU & ((IData)(vlTOPp->io_input_bits_a) 
				      >> 0xaU))) ? 
		     (~ (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT___T_26))
		      : (0x1fU & ((IData)(vlTOPp->io_input_bits_a) 
				  >> 0xaU))) + (0x10U 
						| ((0U 
						    == 
						    (0x1fU 
						     & ((IData)(vlTOPp->io_input_bits_a) 
							>> 0xaU)))
						    ? 2U
						    : 1U))));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT___T_90 
	= (0x3fU & (((0U == (0x1fU & ((IData)(vlTOPp->io_input_bits_b) 
				      >> 0xaU))) ? 
		     (~ (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT___T_81))
		      : (0x1fU & ((IData)(vlTOPp->io_input_bits_b) 
				  >> 0xaU))) + (0x10U 
						| ((0U 
						    == 
						    (0x1fU 
						     & ((IData)(vlTOPp->io_input_bits_b) 
							>> 0xaU)))
						    ? 2U
						    : 1U))));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq_io_enq_valid 
	= ((IData)(vlTOPp->io_input_valid) & (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady));
    vlTOPp->io_expected_out = vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_out___05FT_18_data;
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT___T_146 
	= ((0U == (0x1fU & ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_out___05FT_18_data) 
			    >> 0xaU))) & (0U == (0x3ffU 
						 & (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_out___05FT_18_data))));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT___T_136 
	= ((0x200U & (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_out___05FT_18_data))
	    ? 0U : ((0x100U & (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_out___05FT_18_data))
		     ? 1U : ((0x80U & (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_out___05FT_18_data))
			      ? 2U : ((0x40U & (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_out___05FT_18_data))
				       ? 3U : ((0x20U 
						& (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_out___05FT_18_data))
					        ? 4U
					        : (
						   (0x10U 
						    & (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_out___05FT_18_data))
						    ? 5U
						    : 
						   ((8U 
						     & (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_out___05FT_18_data))
						     ? 6U
						     : 
						    ((4U 
						      & (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_out___05FT_18_data))
						      ? 7U
						      : 
						     ((2U 
						       & (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_out___05FT_18_data))
						       ? 8U
						       : 9U)))))))));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_invalidExc) 
	   | (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isNaN_Z));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_infiniteExc) 
	   | (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isInf_Z));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_59) 
	   | (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_26 
	= ((0x33U & ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_16) 
		     >> 2U)) | (0xccU & ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_16) 
					 << 2U)));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_4 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_2) 
	   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_1)));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_5 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_2) 
	   & (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_1));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds_io_a 
	= (((0x10000U & ((IData)(vlTOPp->io_input_bits_a) 
			 << 1U)) | (0xe000U & ((((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT___T_36)
						  ? 0U
						  : 
						 ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT___T_35) 
						  >> 3U)) 
						| ((3U 
						    == 
						    (3U 
						     & ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT___T_35) 
							>> 4U))) 
						   & (0U 
						      != 
						      (0x3ffU 
						       & (IData)(vlTOPp->io_input_bits_a))))) 
					       << 0xdU))) 
	   | ((0x1c00U & ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT___T_35) 
			  << 0xaU)) | (0x3ffU & ((0U 
						  == 
						  (0x1fU 
						   & ((IData)(vlTOPp->io_input_bits_a) 
						      >> 0xaU)))
						  ? 
						 (0x3feU 
						  & (((0x3ffU 
						       & (IData)(vlTOPp->io_input_bits_a)) 
						      << (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT___T_26)) 
						     << 1U))
						  : (IData)(vlTOPp->io_input_bits_a)))));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds_io_b 
	= (((0x10000U & ((IData)(vlTOPp->io_input_bits_b) 
			 << 1U)) | (0xe000U & ((((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT___T_91)
						  ? 0U
						  : 
						 ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT___T_90) 
						  >> 3U)) 
						| ((3U 
						    == 
						    (3U 
						     & ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT___T_90) 
							>> 4U))) 
						   & (0U 
						      != 
						      (0x3ffU 
						       & (IData)(vlTOPp->io_input_bits_b))))) 
					       << 0xdU))) 
	   | ((0x1c00U & ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT___T_90) 
			  << 0xaU)) | (0x3ffU & ((0U 
						  == 
						  (0x1fU 
						   & ((IData)(vlTOPp->io_input_bits_b) 
						      >> 0xaU)))
						  ? 
						 (0x3feU 
						  & (((0x3ffU 
						       & (IData)(vlTOPp->io_input_bits_b)) 
						      << (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT___T_81)) 
						     << 1U))
						  : (IData)(vlTOPp->io_input_bits_b)))));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT___T_145 
	= (0x3fU & (((0U == (0x1fU & ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_out___05FT_18_data) 
				      >> 0xaU))) ? 
		     (~ (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT___T_136))
		      : (0x1fU & ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_out___05FT_18_data) 
				  >> 0xaU))) + (0x10U 
						| ((0U 
						    == 
						    (0x1fU 
						     & ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_out___05FT_18_data) 
							>> 0xaU)))
						    ? 2U
						    : 1U))));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
	= (1U & (((~ (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
		  & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut))) 
		 & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isZero_Z))));
    __Vtemp34[0U] = 0U;
    __Vtemp34[1U] = 0U;
    __Vtemp34[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp35, __Vtemp34, (0x3fU 
						   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp38[0U] = 0U;
    __Vtemp38[1U] = 0U;
    __Vtemp38[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp39, __Vtemp38, (0x3fU 
						   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp42[0U] = 0U;
    __Vtemp42[1U] = 0U;
    __Vtemp42[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp43, __Vtemp42, (0x3fU 
						   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp46[0U] = 0U;
    __Vtemp46[1U] = 0U;
    __Vtemp46[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp47, __Vtemp46, (0x3fU 
						   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_48 
	= ((((0x550U & ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_26) 
			<< 3U)) | (0xaa0U & ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_26) 
					     << 5U))) 
	    | ((8U & (__Vtemp35[0U] >> 0xcU)) | ((4U 
						  & (__Vtemp39[0U] 
						     >> 0xeU)) 
						 | ((2U 
						     & (__Vtemp43[0U] 
							>> 0x10U)) 
						    | (1U 
						       & (__Vtemp47[0U] 
							  >> 0x12U)))))) 
	   | (1U & ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig) 
		    >> 0xdU)));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_8 
	= (1U & (((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum) 
		  >> 1U) & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_4))));
    vlTOPp->io_input_ready = ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady) 
			      & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_5)));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_6 
	= ((~ (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_5)) 
	   & (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq_io_enq_valid));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady) 
	   & ((IData)(vlTOPp->io_input_valid) & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_5))));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_sig 
	= (((0U != (7U & (vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds_io_a 
			  >> 0xdU))) << 0xaU) | (0x3ffU 
						 & vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds_io_a));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_isNaN 
	= ((3U == (3U & (vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds_io_a 
			 >> 0xeU))) & (vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds_io_a 
				       >> 0xdU));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_isInf 
	= ((3U == (3U & (vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds_io_a 
			 >> 0xeU))) & (~ (vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds_io_a 
					  >> 0xdU)));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_39 
	= ((0x20U & (vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds_io_b 
		     >> 0xaU)) | (0x1fU & (~ (0x3fU 
					      & (vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds_io_b 
						 >> 0xaU)))));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_b_sig 
	= (((0U != (7U & (vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds_io_b 
			  >> 0xdU))) << 0xaU) | (0x3ffU 
						 & vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds_io_b));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_b_isNaN 
	= ((3U == (3U & (vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds_io_b 
			 >> 0xeU))) & (vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds_io_b 
				       >> 0xdU));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_b_isInf 
	= ((3U == (3U & (vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds_io_b 
			 >> 0xeU))) & (~ (vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds_io_b 
					  >> 0xdU)));
    vlTOPp->io_expected_recOut = (((0x10000U & ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_out___05FT_18_data) 
						<< 1U)) 
				   | (0xe000U & ((((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT___T_146)
						    ? 0U
						    : 
						   ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT___T_145) 
						    >> 3U)) 
						  | ((3U 
						      == 
						      (3U 
						       & ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT___T_145) 
							  >> 4U))) 
						     & (0U 
							!= 
							(0x3ffU 
							 & (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_out___05FT_18_data))))) 
						 << 0xdU))) 
				  | ((0x1c00U & ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT___T_145) 
						 << 0xaU)) 
				     | (0x3ffU & ((0U 
						   == 
						   (0x1fU 
						    & ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_out___05FT_18_data) 
						       >> 0xaU)))
						   ? 
						  (0x3feU 
						   & (((0x3ffU 
							& (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_out___05FT_18_data)) 
						       << (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT___T_136)) 
						      << 1U))
						   : (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_out___05FT_18_data)))));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_56 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig) 
	   & (1U | ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_48) 
		    << 1U)));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_53 
	= ((~ (1U | ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_48) 
		     << 1U))) & (3U | ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_48) 
				       << 2U)));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_52 
	= (1U & ((~ (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum)) 
		 | (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering)));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__rem 
	= (((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady)
	     ? ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_sig) 
		<< 1U) : 0U) | ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady)
				 ? 0U : ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__rem_Z) 
					 << 1U)));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExpQuot_S_div 
	= (0xffU & (VL_EXTENDS_II(8,7, (0x3fU & (vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds_io_a 
						 >> 0xaU))) 
		    + VL_EXTENDS_II(8,7, ((0x40U & 
					   ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_39) 
					    << 1U)) 
					  | (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_39)))));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_107 
	= (((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady)
	     ? ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_b_sig) 
		<< 1U) : 0U) | ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady)
				 ? 0U : (0x800U | ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__fractB_Z) 
						   << 1U))));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__notSigNaNIn_invalidExc_S_div 
	= (((0U == (7U & (vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds_io_a 
			  >> 0xdU))) & (0U == (7U & 
					       (vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds_io_b 
						>> 0xdU)))) 
	   | ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_isInf) 
	      & (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_b_isInf)));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__normalCase_S_div 
	= (1U & ((~ (((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_isNaN) 
		      | (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_isInf)) 
		     | (0U == (7U & (vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds_io_a 
				     >> 0xdU))))) & 
		 (~ (((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_b_isNaN) 
		      | (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_b_isInf)) 
		     | (0U == (7U & (vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds_io_b 
				     >> 0xdU)))))));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_54 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig) 
	   & (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_53));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__trialRem 
	= (0x7fffU & ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__rem) 
		      - (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_107)));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering_normalCase 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering) 
	   & (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__normalCase_S_div));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_58 
	= ((0U != (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_54)) 
	   | (0U != (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_56)));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_141 
	= (((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady)
	     ? (VL_LTES_III(1,15,15, 0U, (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__trialRem)) 
		<< 0xcU) : 0U) | ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady)
				   ? 0U : ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sigX_Z) 
					   | (0xfffU 
					      & ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum) 
						 >> 2U)))));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_125 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering_normalCase) 
	   | ((~ (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady)) 
	      & VL_LTES_III(1,15,15, 0U, (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__trialRem))));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_68 
	= ((((((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering) 
	       & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__normalCase_S_div)))
	       ? 2U : 0U) | ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering_normalCase)
			      ? 0x2000U : 0U)) | (0x1fffU 
						  & ((1U 
						      & ((~ (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering)) 
							 & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__skipCycle2))))
						      ? 
						     ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum) 
						      >> 1U)
						      : 0U))) 
	   | ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__skipCycle2)
	       ? 2U : 0U));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___GEN_10 
	= (0x7fffU & ((1U & ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering_normalCase) 
			     | (~ ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum) 
				   | ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum) 
				      >> 2U))))) ? 
		      (VL_LTES_III(1,15,15, 0U, (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__trialRem))
		        ? ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__rem) 
			   - (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_107))
		        : (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__rem))
		       : (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__rem_Z)));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_80 
	= (0x1fffU & ((((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_59) 
			& (0U != (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_54))) 
		       | ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
			  & (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_58)))
		       ? (((IData)(1U) + (0xfffU & 
					  (((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig) 
					    >> 2U) 
					   | (0x3fffffffU 
					      & (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_48))))) 
			  & (~ ((((0U == (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__roundingMode_Z)) 
				  & (0U != (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_54))) 
				 & (0U == (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_56)))
				 ? (1U | ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_48) 
					  << 1U)) : 0U)))
		       : ((0xfffU & (((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig) 
				      & (~ (3U | ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_48) 
						  << 2U)))) 
				     >> 2U)) | (((6U 
						  == (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__roundingMode_Z)) 
						 & (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_58))
						 ? 
						((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_53) 
						 >> 1U)
						 : 0U))));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_83 
	= (0xffU & (VL_EXTENDS_II(8,7, (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z)) 
		    + VL_EXTENDS_II(8,7, (3U & ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_80) 
						>> 0xbU)))));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut 
	= (((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
	    & VL_GTS_III(1,8,8, 8U, (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_83))) 
	   & ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
	      | (6U == (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__roundingMode_Z))));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
	   & VL_LTES_III(1,4,4, 3U, (0xfU & ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_83) 
					     >> 4U))));
    vlTOPp->io_actual_exceptionFlags = ((((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_invalidExc) 
					  << 4U) | 
					 (((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_infiniteExc) 
					   << 3U) | 
					  ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
					   << 2U))) 
					| ((((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
					     & (VL_GTS_III(1,8,8, 8U, (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_83)) 
						| ((((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_58) 
						     & VL_GTES_III(1,2,2, 0U, 
								   (3U 
								    & ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z) 
								       >> 5U)))) 
						    & ((0x2000U 
							& (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig))
						        ? 
						       ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_48) 
							>> 1U)
						        : (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_48))) 
						   & (~ 
						      (((((IData)(vlTOPp->io_input_bits_detectTininess) 
							  & (~ 
							     ((0x2000U 
							       & (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig))
							       ? 
							      ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_48) 
							       >> 2U)
							       : 
							      ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_48) 
							       >> 1U)))) 
							 & ((0x2000U 
							     & (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig))
							     ? 
							    ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_80) 
							     >> 0xcU)
							     : 
							    ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_80) 
							     >> 0xbU))) 
							& (0U 
							   != (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_54))) 
						       & (((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_59) 
							   & ((0x2000U 
							       & (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig))
							       ? 
							      ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig) 
							       >> 2U)
							       : 
							      ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig) 
							       >> 1U))) 
							  | ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
							     & ((((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig) 
								  >> 0xdU) 
								 & ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig) 
								    >> 2U)) 
								| (0U 
								   != 
								   (3U 
								    & (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig))))))))))) 
					    << 1U) 
					   | ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
					      | ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
						 & (VL_GTS_III(1,8,8, 8U, (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_83)) 
						    | (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_58))))));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
	   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut) 
	   | ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
	      & (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->io_actual_out = ((((~ (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
			       & (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sign_Z)) 
			      << 0x10U) | ((0xfc00U 
					    & ((((((((((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_83) 
						       & (~ 
							  (((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isZero_Z) 
							    | VL_GTS_III(1,8,8, 8U, (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_83)))
							    ? 0x38U
							    : 0U))) 
						      & (~ 
							 ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
							   ? 0x37U
							   : 0U))) 
						     & (~ 
							((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
							  ? 0x10U
							  : 0U))) 
						    & (~ 
						       ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
							 ? 8U
							 : 0U))) 
						   | ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
						       ? 8U
						       : 0U)) 
						  | ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
						      ? 0x2fU
						      : 0U)) 
						 | ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
						     ? 0x30U
						     : 0U)) 
						| ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
						    ? 0x38U
						    : 0U)) 
					       << 0xaU)) 
					   | (0x3ffU 
					      & (((((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
						    | (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isZero_Z)) 
						   | VL_GTS_III(1,8,8, 8U, (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_83)))
						   ? 
						  ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
						    ? 0x200U
						    : 0U)
						   : 
						  ((0x2000U 
						    & (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig))
						    ? 
						   ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_80) 
						    >> 1U)
						    : (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_80))) 
						 | ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
						     ? 0x3ffU
						     : 0U)))));
    vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT___T_175 
	= ((0xfU & (vlTOPp->io_actual_out >> 0xdU)) 
	   == (0xfU & (vlTOPp->io_expected_recOut >> 0xdU)));
    vlTOPp->io_pass = (((~ (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_4)) 
			& (((0U == (7U & (vlTOPp->io_actual_out 
					  >> 0xdU))) 
			    | (7U == (7U & (vlTOPp->io_actual_out 
					    >> 0xdU))))
			    ? ((IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT___T_175) 
			       & ((0x3ffU & vlTOPp->io_actual_out) 
				  == (0x3ffU & vlTOPp->io_expected_recOut)))
			    : ((6U == (7U & (vlTOPp->io_actual_out 
					     >> 0xdU)))
			        ? (IData)(vlTOPp->ValExec_DivSqrtRecF16_small_div__DOT___T_175)
			        : (vlTOPp->io_actual_out 
				   == vlTOPp->io_expected_recOut)))) 
		       & ((IData)(vlTOPp->io_actual_exceptionFlags) 
			  == (IData)(vlTOPp->io_expected_exceptionFlags)));
}

void dut::_eval(dut__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    dut::_eval\n"); );
    dut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    vlTOPp->_combo__TOP__2(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void dut::_eval_initial(dut__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    dut::_eval_initial\n"); );
    dut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
    vlTOPp->_settle__TOP__3(vlSymsp);
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
    if (VL_UNLIKELY((io_input_valid & 0xfeU))) {
	Verilated::overWidthError("io_input_valid");}
    if (VL_UNLIKELY((io_input_bits_roundingMode & 0xf8U))) {
	Verilated::overWidthError("io_input_bits_roundingMode");}
    if (VL_UNLIKELY((io_input_bits_detectTininess & 0xfeU))) {
	Verilated::overWidthError("io_input_bits_detectTininess");}
    if (VL_UNLIKELY((io_input_bits_exceptionFlags & 0xe0U))) {
	Verilated::overWidthError("io_input_bits_exceptionFlags");}
}
#endif // VL_DEBUG

void dut::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    dut::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_input_ready = VL_RAND_RESET_I(1);
    io_input_valid = VL_RAND_RESET_I(1);
    io_input_bits_a = VL_RAND_RESET_I(16);
    io_input_bits_b = VL_RAND_RESET_I(16);
    io_input_bits_roundingMode = VL_RAND_RESET_I(3);
    io_input_bits_detectTininess = VL_RAND_RESET_I(1);
    io_input_bits_out = VL_RAND_RESET_I(16);
    io_input_bits_exceptionFlags = VL_RAND_RESET_I(5);
    io_output_a = VL_RAND_RESET_I(16);
    io_output_b = VL_RAND_RESET_I(16);
    io_output_roundingMode = VL_RAND_RESET_I(3);
    io_output_detectTininess = VL_RAND_RESET_I(1);
    io_expected_out = VL_RAND_RESET_I(16);
    io_expected_exceptionFlags = VL_RAND_RESET_I(5);
    io_expected_recOut = VL_RAND_RESET_I(17);
    io_actual_out = VL_RAND_RESET_I(17);
    io_actual_exceptionFlags = VL_RAND_RESET_I(5);
    io_check = VL_RAND_RESET_I(1);
    io_pass = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF16_small_div__DOT__ds_io_a = VL_RAND_RESET_I(17);
    ValExec_DivSqrtRecF16_small_div__DOT__ds_io_b = VL_RAND_RESET_I(17);
    ValExec_DivSqrtRecF16_small_div__DOT__cq_io_enq_valid = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF16_small_div__DOT___T_26 = VL_RAND_RESET_I(4);
    ValExec_DivSqrtRecF16_small_div__DOT___T_35 = VL_RAND_RESET_I(6);
    ValExec_DivSqrtRecF16_small_div__DOT___T_36 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF16_small_div__DOT___T_81 = VL_RAND_RESET_I(4);
    ValExec_DivSqrtRecF16_small_div__DOT___T_90 = VL_RAND_RESET_I(6);
    ValExec_DivSqrtRecF16_small_div__DOT___T_91 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF16_small_div__DOT___T_136 = VL_RAND_RESET_I(4);
    ValExec_DivSqrtRecF16_small_div__DOT___T_145 = VL_RAND_RESET_I(6);
    ValExec_DivSqrtRecF16_small_div__DOT___T_146 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF16_small_div__DOT___T_175 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_isNaN = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_isInf = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_sig = VL_RAND_RESET_I(12);
    ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_b_isNaN = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_b_isInf = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_b_sig = VL_RAND_RESET_I(12);
    ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_invalidExc = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_infiniteExc = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig = VL_RAND_RESET_I(14);
    ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum = VL_RAND_RESET_I(14);
    ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__majorExc_Z = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isNaN_Z = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isInf_Z = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isZero_Z = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sign_Z = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z = VL_RAND_RESET_I(7);
    ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__fractB_Z = VL_RAND_RESET_I(10);
    ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__roundingMode_Z = VL_RAND_RESET_I(3);
    ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__rem_Z = VL_RAND_RESET_I(13);
    ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__notZeroRem_Z = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sigX_Z = VL_RAND_RESET_I(13);
    ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__notSigNaNIn_invalidExc_S_div = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__normalCase_S_div = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_39 = VL_RAND_RESET_I(6);
    ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExpQuot_S_div = VL_RAND_RESET_I(8);
    ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering_normalCase = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__skipCycle2 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_52 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_68 = VL_RAND_RESET_I(14);
    ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__rem = VL_RAND_RESET_I(14);
    ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_107 = VL_RAND_RESET_I(13);
    ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__trialRem = VL_RAND_RESET_I(15);
    ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___GEN_10 = VL_RAND_RESET_I(15);
    ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_125 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_141 = VL_RAND_RESET_I(13);
    ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_16 = VL_RAND_RESET_I(8);
    ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_26 = VL_RAND_RESET_I(8);
    ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_48 = VL_RAND_RESET_I(12);
    ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_53 = VL_RAND_RESET_I(14);
    ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_54 = VL_RAND_RESET_I(14);
    ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_56 = VL_RAND_RESET_I(14);
    ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_58 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_59 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_80 = VL_RAND_RESET_I(13);
    ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_83 = VL_RAND_RESET_I(8);
    ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF16_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
	    ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_a[__Vi0] = VL_RAND_RESET_I(16);
    }}
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
	    ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_b[__Vi0] = VL_RAND_RESET_I(16);
    }}
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
	    ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_roundingMode[__Vi0] = VL_RAND_RESET_I(3);
    }}
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
	    ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_detectTininess[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
	    ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_out[__Vi0] = VL_RAND_RESET_I(16);
    }}
    ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_out___05FT_18_data = VL_RAND_RESET_I(16);
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
	    ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_exceptionFlags[__Vi0] = VL_RAND_RESET_I(5);
    }}
    ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT__value = VL_RAND_RESET_I(3);
    ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT__value_1 = VL_RAND_RESET_I(3);
    ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_1 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_2 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_4 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_5 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_6 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_8 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT__wrap = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_12 = VL_RAND_RESET_I(3);
    ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT__wrap_1 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT___T_14 = VL_RAND_RESET_I(3);
    ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT____Vlvbound1 = VL_RAND_RESET_I(16);
    ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT____Vlvbound2 = VL_RAND_RESET_I(16);
    ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT____Vlvbound3 = VL_RAND_RESET_I(3);
    ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT____Vlvbound4 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT____Vlvbound5 = VL_RAND_RESET_I(16);
    ValExec_DivSqrtRecF16_small_div__DOT__cq__DOT____Vlvbound6 = VL_RAND_RESET_I(5);
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
}
