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
    VL_SIG8(__Vdlyvdim0__ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_a__v0,2,0);
    VL_SIG8(__Vdlyvset__ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_a__v0,0,0);
    VL_SIG8(__Vdlyvdim0__ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_b__v0,2,0);
    VL_SIG8(__Vdlyvset__ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_b__v0,0,0);
    VL_SIG8(__Vdlyvdim0__ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_roundingMode__v0,2,0);
    VL_SIG8(__Vdlyvval__ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_roundingMode__v0,2,0);
    VL_SIG8(__Vdlyvset__ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_roundingMode__v0,0,0);
    VL_SIG8(__Vdlyvdim0__ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_detectTininess__v0,2,0);
    VL_SIG8(__Vdlyvval__ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_detectTininess__v0,0,0);
    VL_SIG8(__Vdlyvset__ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_detectTininess__v0,0,0);
    VL_SIG8(__Vdlyvdim0__ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out__v0,2,0);
    VL_SIG8(__Vdlyvset__ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out__v0,0,0);
    VL_SIG8(__Vdlyvdim0__ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_exceptionFlags__v0,2,0);
    VL_SIG8(__Vdlyvval__ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_exceptionFlags__v0,4,0);
    VL_SIG8(__Vdlyvset__ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_exceptionFlags__v0,0,0);
    VL_SIG(__Vdlyvval__ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_a__v0,31,0);
    VL_SIG(__Vdlyvval__ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_b__v0,31,0);
    VL_SIG(__Vdlyvval__ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out__v0,31,0);
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
    // Body
    __Vdlyvset__ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_a__v0 = 0U;
    __Vdlyvset__ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_b__v0 = 0U;
    __Vdlyvset__ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_detectTininess__v0 = 0U;
    __Vdlyvset__ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_roundingMode__v0 = 0U;
    __Vdlyvset__ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_exceptionFlags__v0 = 0U;
    __Vdlyvset__ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out__v0 = 0U;
    // ALWAYS at test-DivSqrtRecF32_small_div/ValExec_DivSqrtRecF32_small_div.v:306
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__rem_Z 
	= (0x3ffffffU & vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___GEN_10);
    // ALWAYS at test-DivSqrtRecF32_small_div/ValExec_DivSqrtRecF32_small_div.v:306
    if (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering_normalCase) {
	vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__fractB_Z 
	    = (0x7fffffU & vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_b_sig);
    }
    // ALWAYS at test-DivSqrtRecF32_small_div/ValExec_DivSqrtRecF32_small_div.v:1150
    if (vlTOPp->reset) {
	vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_1 = 0U;
    } else {
	if (((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_6) 
	     != (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_8))) {
	    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_1 
		= vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_6;
	}
    }
    // ALWAYS at test-DivSqrtRecF32_small_div/ValExec_DivSqrtRecF32_small_div.v:1150
    if (((~ (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_5)) 
	 & (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq_io_enq_valid))) {
	vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT____Vlvbound1 
	    = vlTOPp->io_input_bits_a;
	if ((4U >= (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT__value))) {
	    __Vdlyvval__ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_a__v0 
		= vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT____Vlvbound1;
	    __Vdlyvset__ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_a__v0 = 1U;
	    __Vdlyvdim0__ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_a__v0 
		= vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT__value;
	}
    }
    // ALWAYS at test-DivSqrtRecF32_small_div/ValExec_DivSqrtRecF32_small_div.v:1150
    if (((~ (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_5)) 
	 & (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq_io_enq_valid))) {
	vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT____Vlvbound2 
	    = vlTOPp->io_input_bits_b;
	if ((4U >= (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT__value))) {
	    __Vdlyvval__ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_b__v0 
		= vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT____Vlvbound2;
	    __Vdlyvset__ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_b__v0 = 1U;
	    __Vdlyvdim0__ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_b__v0 
		= vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT__value;
	}
    }
    // ALWAYS at test-DivSqrtRecF32_small_div/ValExec_DivSqrtRecF32_small_div.v:1150
    if (((~ (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_5)) 
	 & (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq_io_enq_valid))) {
	vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT____Vlvbound4 
	    = vlTOPp->io_input_bits_detectTininess;
	if ((4U >= (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT__value))) {
	    __Vdlyvval__ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_detectTininess__v0 
		= vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT____Vlvbound4;
	    __Vdlyvset__ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_detectTininess__v0 = 1U;
	    __Vdlyvdim0__ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_detectTininess__v0 
		= vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT__value;
	}
    }
    // ALWAYS at test-DivSqrtRecF32_small_div/ValExec_DivSqrtRecF32_small_div.v:1150
    if (((~ (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_5)) 
	 & (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq_io_enq_valid))) {
	vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT____Vlvbound3 
	    = vlTOPp->io_input_bits_roundingMode;
	if ((4U >= (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT__value))) {
	    __Vdlyvval__ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_roundingMode__v0 
		= vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT____Vlvbound3;
	    __Vdlyvset__ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_roundingMode__v0 = 1U;
	    __Vdlyvdim0__ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_roundingMode__v0 
		= vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT__value;
	}
    }
    // ALWAYS at test-DivSqrtRecF32_small_div/ValExec_DivSqrtRecF32_small_div.v:1150
    if (((~ (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_5)) 
	 & (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq_io_enq_valid))) {
	vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT____Vlvbound6 
	    = vlTOPp->io_input_bits_exceptionFlags;
	if ((4U >= (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT__value))) {
	    __Vdlyvval__ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_exceptionFlags__v0 
		= vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT____Vlvbound6;
	    __Vdlyvset__ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_exceptionFlags__v0 = 1U;
	    __Vdlyvdim0__ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_exceptionFlags__v0 
		= vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT__value;
	}
    }
    // ALWAYS at test-DivSqrtRecF32_small_div/ValExec_DivSqrtRecF32_small_div.v:306
    if (vlTOPp->reset) {
	vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum = 1U;
    } else {
	if (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_52) {
	    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum 
		= vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_68;
	}
    }
    // ALWAYS at test-DivSqrtRecF32_small_div/ValExec_DivSqrtRecF32_small_div.v:1150
    if (vlTOPp->reset) {
	vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT__value_1 = 0U;
    } else {
	if (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_8) {
	    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT__value_1 
		= ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT__wrap_1)
		    ? 0U : (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_14));
	}
    }
    // ALWAYS at test-DivSqrtRecF32_small_div/ValExec_DivSqrtRecF32_small_div.v:306
    if (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering) {
	vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isZero_Z 
	    = ((0U == (7U & (IData)((vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds_io_a 
				     >> 0x1dU)))) | (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_b_isInf));
    }
    // ALWAYS at test-DivSqrtRecF32_small_div/ValExec_DivSqrtRecF32_small_div.v:1150
    if (((~ (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_5)) 
	 & (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq_io_enq_valid))) {
	vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT____Vlvbound5 
	    = vlTOPp->io_input_bits_out;
	if ((4U >= (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT__value))) {
	    __Vdlyvval__ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out__v0 
		= vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT____Vlvbound5;
	    __Vdlyvset__ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out__v0 = 1U;
	    __Vdlyvdim0__ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out__v0 
		= vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT__value;
	}
    }
    // ALWAYS at test-DivSqrtRecF32_small_div/ValExec_DivSqrtRecF32_small_div.v:306
    if (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering) {
	vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isInf_Z 
	    = ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_isInf) 
	       | (0U == (7U & (IData)((vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds_io_b 
				       >> 0x1dU)))));
    }
    // ALWAYS at test-DivSqrtRecF32_small_div/ValExec_DivSqrtRecF32_small_div.v:306
    if (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering) {
	vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sign_Z 
	    = (1U & ((IData)((vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds_io_a 
			      >> 0x20U)) ^ (IData)(
						   (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds_io_b 
						    >> 0x20U))));
    }
    // ALWAYS at test-DivSqrtRecF32_small_div/ValExec_DivSqrtRecF32_small_div.v:306
    if (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering) {
	vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__majorExc_Z 
	    = (((((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_isNaN) 
		  & (~ (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_sig 
			>> 0x16U))) | ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_b_isNaN) 
				       & (~ (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_b_sig 
					     >> 0x16U)))) 
		| (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__notSigNaNIn_invalidExc_S_div)) 
	       | (((~ (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_isNaN)) 
		   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_isInf))) 
		  & (0U == (7U & (IData)((vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds_io_b 
					  >> 0x1dU))))));
    }
    // ALWAYS at test-DivSqrtRecF32_small_div/ValExec_DivSqrtRecF32_small_div.v:306
    if (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering) {
	vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isNaN_Z 
	    = (((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_isNaN) 
		| (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_b_isNaN)) 
	       | (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__notSigNaNIn_invalidExc_S_div));
    }
    // ALWAYS at test-DivSqrtRecF32_small_div/ValExec_DivSqrtRecF32_small_div.v:306
    if (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering_normalCase) {
	vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__roundingMode_Z 
	    = vlTOPp->io_input_bits_roundingMode;
    }
    // ALWAYS at test-DivSqrtRecF32_small_div/ValExec_DivSqrtRecF32_small_div.v:306
    if (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_125) {
	vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__notZeroRem_Z 
	    = (0U != vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__trialRem);
    }
    // ALWAYS at test-DivSqrtRecF32_small_div/ValExec_DivSqrtRecF32_small_div.v:306
    if (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_125) {
	vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sigX_Z 
	    = vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_141;
    }
    // ALWAYS at test-DivSqrtRecF32_small_div/ValExec_DivSqrtRecF32_small_div.v:306
    if (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering_normalCase) {
	vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z 
	    = ((0x3c0U & ((VL_LTES_III(1,11,11, 0x1c0U, (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExpQuot_S_div))
			    ? 6U : ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExpQuot_S_div) 
				    >> 6U)) << 6U)) 
	       | (0x3fU & (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExpQuot_S_div)));
    }
    // ALWAYSPOST at test-DivSqrtRecF32_small_div/ValExec_DivSqrtRecF32_small_div.v:1151
    if (__Vdlyvset__ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_a__v0) {
	vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_a[__Vdlyvdim0__ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_a__v0] 
	    = __Vdlyvval__ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_a__v0;
    }
    // ALWAYSPOST at test-DivSqrtRecF32_small_div/ValExec_DivSqrtRecF32_small_div.v:1154
    if (__Vdlyvset__ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_b__v0) {
	vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_b[__Vdlyvdim0__ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_b__v0] 
	    = __Vdlyvval__ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_b__v0;
    }
    // ALWAYSPOST at test-DivSqrtRecF32_small_div/ValExec_DivSqrtRecF32_small_div.v:1160
    if (__Vdlyvset__ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_detectTininess__v0) {
	vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_detectTininess[__Vdlyvdim0__ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_detectTininess__v0] 
	    = __Vdlyvval__ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_detectTininess__v0;
    }
    // ALWAYSPOST at test-DivSqrtRecF32_small_div/ValExec_DivSqrtRecF32_small_div.v:1157
    if (__Vdlyvset__ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_roundingMode__v0) {
	vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_roundingMode[__Vdlyvdim0__ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_roundingMode__v0] 
	    = __Vdlyvval__ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_roundingMode__v0;
    }
    // ALWAYSPOST at test-DivSqrtRecF32_small_div/ValExec_DivSqrtRecF32_small_div.v:1166
    if (__Vdlyvset__ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_exceptionFlags__v0) {
	vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_exceptionFlags[__Vdlyvdim0__ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_exceptionFlags__v0] 
	    = __Vdlyvval__ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_exceptionFlags__v0;
    }
    // ALWAYSPOST at test-DivSqrtRecF32_small_div/ValExec_DivSqrtRecF32_small_div.v:1163
    if (__Vdlyvset__ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out__v0) {
	vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out[__Vdlyvdim0__ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out__v0] 
	    = __Vdlyvval__ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out__v0;
    }
    vlTOPp->io_check = (1U & (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum 
			      >> 1U));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady 
	= (1U & (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum 
		 | (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum 
		    >> 1U)));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT__wrap_1 
	= (4U == (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT__value_1));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_14 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT__value_1)));
    vlTOPp->io_output_a = ((4U >= (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT__value_1))
			    ? vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_a
			   [vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT__value_1]
			    : 0U);
    vlTOPp->io_output_b = ((4U >= (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT__value_1))
			    ? vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_b
			   [vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT__value_1]
			    : 0U);
    vlTOPp->io_output_roundingMode = ((4U >= (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT__value_1))
				       ? vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_roundingMode
				      [vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT__value_1]
				       : 0U);
    vlTOPp->io_output_detectTininess = ((4U >= (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT__value_1)) 
					& vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_detectTininess
					[vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT__value_1]);
    vlTOPp->io_expected_exceptionFlags = ((4U >= (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT__value_1))
					   ? vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_exceptionFlags
					  [vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT__value_1]
					   : 0U);
    // ALWAYS at test-DivSqrtRecF32_small_div/ValExec_DivSqrtRecF32_small_div.v:1150
    if (vlTOPp->reset) {
	vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT__value = 0U;
    } else {
	if (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_6) {
	    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT__value 
		= ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT__wrap)
		    ? 0U : (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_12));
	}
    }
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out___05FT_18_data 
	= ((4U >= (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT__value_1))
	    ? vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out
	   [vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT__value_1]
	    : 0U);
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_invalidExc 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__majorExc_Z) 
	   & (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isNaN_Z));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_infiniteExc 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__majorExc_Z) 
	   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isNaN_Z)));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_98 
	= ((0U == (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__roundingMode_Z)) 
	   | (4U == (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__roundingMode_Z)));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
	= (((2U == (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__roundingMode_Z)) 
	    & (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sign_Z)) 
	   | ((3U == (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__roundingMode_Z)) 
	      & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sign_Z))));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__skipCycle2 
	= (1U & ((vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum 
		  >> 3U) & (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sigX_Z 
			    >> 0x19U)));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig 
	= ((vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sigX_Z 
	    << 1U) | (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__notZeroRem_Z));
    __Vtemp2[0U] = 0U;
    __Vtemp2[1U] = 0U;
    __Vtemp2[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp3, __Vtemp2, (0x3fU 
						 & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp6[0U] = 0U;
    __Vtemp6[1U] = 0U;
    __Vtemp6[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp7, __Vtemp6, (0x3fU 
						 & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_22 
	= ((0xffU & ((0x4000U & (__Vtemp3[2U] << 0xeU)) 
		     | (__Vtemp3[1U] >> 0x12U))) | 
	   (0xff00U & ((0x40000000U & (__Vtemp7[2U] 
				       << 0x1eU)) | 
		       (0x3fffff00U & (__Vtemp7[1U] 
				       >> 2U)))));
    vlTOPp->io_expected_out = vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out___05FT_18_data;
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT___T_224 
	= ((0U == (0xffU & (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out___05FT_18_data 
			    >> 0x17U))) & (0U == (0x7fffffU 
						  & vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out___05FT_18_data)));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT___T_214 
	= ((0x400000U & vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out___05FT_18_data)
	    ? 0U : ((0x200000U & vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out___05FT_18_data)
		     ? 1U : ((0x100000U & vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out___05FT_18_data)
			      ? 2U : ((0x80000U & vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out___05FT_18_data)
				       ? 3U : ((0x40000U 
						& vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out___05FT_18_data)
					        ? 4U
					        : (
						   (0x20000U 
						    & vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out___05FT_18_data)
						    ? 5U
						    : 
						   ((0x10000U 
						     & vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out___05FT_18_data)
						     ? 6U
						     : 
						    ((0x8000U 
						      & vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out___05FT_18_data)
						      ? 7U
						      : 
						     ((0x4000U 
						       & vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out___05FT_18_data)
						       ? 8U
						       : 
						      ((0x2000U 
							& vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out___05FT_18_data)
						        ? 9U
						        : 
						       ((0x1000U 
							 & vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out___05FT_18_data)
							 ? 0xaU
							 : 
							((0x800U 
							  & vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out___05FT_18_data)
							  ? 0xbU
							  : 
							 ((0x400U 
							   & vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out___05FT_18_data)
							   ? 0xcU
							   : 
							  ((0x200U 
							    & vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out___05FT_18_data)
							    ? 0xdU
							    : 
							   ((0x100U 
							     & vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out___05FT_18_data)
							     ? 0xeU
							     : 
							    ((0x80U 
							      & vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out___05FT_18_data)
							      ? 0xfU
							      : 
							     ((0x40U 
							       & vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out___05FT_18_data)
							       ? 0x10U
							       : 
							      ((0x20U 
								& vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out___05FT_18_data)
							        ? 0x11U
							        : 
							       ((0x10U 
								 & vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out___05FT_18_data)
								 ? 0x12U
								 : 
								((8U 
								  & vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out___05FT_18_data)
								  ? 0x13U
								  : 
								 ((4U 
								   & vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out___05FT_18_data)
								   ? 0x14U
								   : 
								  ((2U 
								    & vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out___05FT_18_data)
								    ? 0x15U
								    : 0x16U))))))))))))))))))))));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_invalidExc) 
	   | (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isNaN_Z));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_infiniteExc) 
	   | (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isInf_Z));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_98) 
	   | (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_32 
	= ((0xf0fU & ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_22) 
		      >> 4U)) | (0xf0f0U & ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_22) 
					    << 4U)));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT__wrap 
	= (4U == (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT__value));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_12 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT__value)));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_2 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT__value) 
	   == (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT__value_1));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT___T_223 
	= (0x1ffU & (((0U == (0xffU & (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out___05FT_18_data 
				       >> 0x17U))) ? 
		      (~ (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT___T_214))
		       : (0xffU & (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out___05FT_18_data 
				   >> 0x17U))) + (0x80U 
						  | ((0U 
						      == 
						      (0xffU 
						       & (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out___05FT_18_data 
							  >> 0x17U)))
						      ? 2U
						      : 1U))));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
	= (1U & (((~ (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
		  & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut))) 
		 & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isZero_Z))));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_42 
	= ((0x3333U & ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_32) 
		       >> 2U)) | (0xccccU & ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_32) 
					     << 2U)));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_4 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_2) 
	   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_1)));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_5 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_2) 
	   & (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_1));
    vlTOPp->io_expected_recOut = (((QData)((IData)(
						   ((8U 
						     & (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out___05FT_18_data 
							>> 0x1cU)) 
						    | (7U 
						       & (((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT___T_224)
							    ? 0U
							    : 
							   ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT___T_223) 
							    >> 6U)) 
							  | ((3U 
							      == 
							      (3U 
							       & ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT___T_223) 
								  >> 7U))) 
							     & (0U 
								!= 
								(0x7fffffU 
								 & vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out___05FT_18_data)))))))) 
				   << 0x1dU) | (QData)((IData)(
							       ((0x1f800000U 
								 & ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT___T_223) 
								    << 0x17U)) 
								| (0x7fffffU 
								   & ((0U 
								       == 
								       (0xffU 
									& (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out___05FT_18_data 
									   >> 0x17U)))
								       ? 
								      (0x7ffffeU 
								       & ((IData)(
										(VL_ULL(0x3fffffffffffff) 
										& ((QData)((IData)(
										(0x7fffffU 
										& vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out___05FT_18_data))) 
										<< (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT___T_214)))) 
									  << 1U))
								       : vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out___05FT_18_data))))));
    __Vtemp10[0U] = 0U;
    __Vtemp10[1U] = 0U;
    __Vtemp10[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp11, __Vtemp10, (0x3fU 
						   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp14[0U] = 0U;
    __Vtemp14[1U] = 0U;
    __Vtemp14[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp15, __Vtemp14, (0x3fU 
						   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp18[0U] = 0U;
    __Vtemp18[1U] = 0U;
    __Vtemp18[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp19, __Vtemp18, (0x3fU 
						   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp22[0U] = 0U;
    __Vtemp22[1U] = 0U;
    __Vtemp22[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp23, __Vtemp22, (0x3fU 
						   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp26[0U] = 0U;
    __Vtemp26[1U] = 0U;
    __Vtemp26[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp27, __Vtemp26, (0x3fU 
						   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp30[0U] = 0U;
    __Vtemp30[1U] = 0U;
    __Vtemp30[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp31, __Vtemp30, (0x3fU 
						   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp34[0U] = 0U;
    __Vtemp34[1U] = 0U;
    __Vtemp34[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp35, __Vtemp34, (0x3fU 
						   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp38[0U] = 0U;
    __Vtemp38[1U] = 0U;
    __Vtemp38[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp39, __Vtemp38, (0x3fU 
						   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp42[0U] = 0U;
    __Vtemp42[1U] = 0U;
    __Vtemp42[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp43, __Vtemp42, (0x3fU 
						   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_87 
	= (((0x100U & (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))
	     ? 0U : ((0x80U & (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))
		      ? ((0x40U & (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))
			  ? 0U : ((4U & (__Vtemp11[0U] 
					 << 2U)) | 
				  ((2U & __Vtemp15[0U]) 
				   | (1U & (__Vtemp19[0U] 
					    >> 2U)))))
		      : (7U | (0x1fffff8U & ((~ ((0x40U 
						  & (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))
						  ? 
						 (~ 
						  (((0x155540U 
						     & ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_42) 
							<< 5U)) 
						    | (0x2aaa80U 
						       & ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_42) 
							  << 7U))) 
						   | ((0x20U 
						       & (__Vtemp23[1U] 
							  >> 0x15U)) 
						      | ((0x10U 
							  & (__Vtemp27[1U] 
							     >> 0x17U)) 
							 | ((8U 
							     & (__Vtemp31[1U] 
								>> 0x19U)) 
							    | ((4U 
								& (__Vtemp35[1U] 
								   >> 0x1bU)) 
							       | ((2U 
								   & (__Vtemp39[1U] 
								      >> 0x1dU)) 
								  | (1U 
								     & (__Vtemp43[1U] 
									>> 0x1fU)))))))))
						  : 0U)) 
					     << 3U))))) 
	   | (1U & (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig 
		    >> 0x1aU)));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_8 
	= (1U & ((vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum 
		  >> 1U) & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_4))));
    vlTOPp->io_input_ready = ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady) 
			      & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_5)));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_95 
	= (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig 
	   & (1U | (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_87 
		    << 1U)));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_92 
	= ((~ (1U | (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_87 
		     << 1U))) & (3U | (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_87 
				       << 2U)));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_93 
	= (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig 
	   & vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_92);
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_97 
	= ((0U != vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_93) 
	   | (0U != vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_95));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_119 
	= (0x3ffffffU & ((((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_98) 
			   & (0U != vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_93)) 
			  | ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
			     & (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_97)))
			  ? (((IData)(1U) + (0x1ffffffU 
					     & ((vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig 
						 >> 2U) 
						| (0x3fffffffU 
						   & vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_87)))) 
			     & (~ ((((0U == (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__roundingMode_Z)) 
				     & (0U != vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_93)) 
				    & (0U == vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_95))
				    ? (1U | (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_87 
					     << 1U))
				    : 0U))) : ((0x1ffffffU 
						& ((vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig 
						    & (~ 
						       (3U 
							| (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_87 
							   << 2U)))) 
						   >> 2U)) 
					       | (((6U 
						    == (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__roundingMode_Z)) 
						   & (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_97))
						   ? 
						  (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_92 
						   >> 1U)
						   : 0U))));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_122 
	= (0x7ffU & (VL_EXTENDS_II(11,10, (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z)) 
		     + VL_EXTENDS_II(11,10, (3U & (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_119 
						   >> 0x18U)))));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut 
	= (((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
	    & VL_GTS_III(1,11,11, 0x6bU, (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_122))) 
	   & ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
	      | (6U == (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__roundingMode_Z))));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
	   & VL_LTES_III(1,4,4, 3U, (0xfU & ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_122) 
					     >> 7U))));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
	   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut) 
	   | ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
	      & (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->io_actual_out = (((QData)((IData)(((~ (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
					       & (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sign_Z)))) 
			      << 0x20U) | (QData)((IData)(
							  ((0xff800000U 
							    & ((((((((((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_122) 
								       & (~ 
									  (((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isZero_Z) 
									    | VL_GTS_III(1,11,11, 0x6bU, (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_122)))
									    ? 0x1c0U
									    : 0U))) 
								      & (~ 
									 ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
									   ? 0x194U
									   : 0U))) 
								     & (~ 
									((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
									  ? 0x80U
									  : 0U))) 
								    & (~ 
								       ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
									 ? 0x40U
									 : 0U))) 
								   | ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
								       ? 0x6bU
								       : 0U)) 
								  | ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
								      ? 0x17fU
								      : 0U)) 
								 | ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
								     ? 0x180U
								     : 0U)) 
								| ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
								    ? 0x1c0U
								    : 0U)) 
							       << 0x17U)) 
							   | (0x7fffffU 
							      & (((((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
								    | (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isZero_Z)) 
								   | VL_GTS_III(1,11,11, 0x6bU, (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_122)))
								   ? 
								  ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
								    ? 0x400000U
								    : 0U)
								   : 
								  ((0x4000000U 
								    & vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig)
								    ? 
								   (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_119 
								    >> 1U)
								    : vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_119)) 
								 | ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
								     ? 0x7fffffU
								     : 0U)))))));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT___T_253 
	= ((0xfU & (IData)((vlTOPp->io_actual_out >> 0x1dU))) 
	   == (0xfU & (IData)((vlTOPp->io_expected_recOut 
			       >> 0x1dU))));
}

VL_INLINE_OPT void dut::_combo__TOP__2(dut__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    dut::_combo__TOP__2\n"); );
    dut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT___T_62 
	= ((0U == (0xffU & (vlTOPp->io_input_bits_a 
			    >> 0x17U))) & (0U == (0x7fffffU 
						  & vlTOPp->io_input_bits_a)));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT___T_143 
	= ((0U == (0xffU & (vlTOPp->io_input_bits_b 
			    >> 0x17U))) & (0U == (0x7fffffU 
						  & vlTOPp->io_input_bits_b)));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT___T_52 
	= ((0x400000U & vlTOPp->io_input_bits_a) ? 0U
	    : ((0x200000U & vlTOPp->io_input_bits_a)
	        ? 1U : ((0x100000U & vlTOPp->io_input_bits_a)
			 ? 2U : ((0x80000U & vlTOPp->io_input_bits_a)
				  ? 3U : ((0x40000U 
					   & vlTOPp->io_input_bits_a)
					   ? 4U : (
						   (0x20000U 
						    & vlTOPp->io_input_bits_a)
						    ? 5U
						    : 
						   ((0x10000U 
						     & vlTOPp->io_input_bits_a)
						     ? 6U
						     : 
						    ((0x8000U 
						      & vlTOPp->io_input_bits_a)
						      ? 7U
						      : 
						     ((0x4000U 
						       & vlTOPp->io_input_bits_a)
						       ? 8U
						       : 
						      ((0x2000U 
							& vlTOPp->io_input_bits_a)
						        ? 9U
						        : 
						       ((0x1000U 
							 & vlTOPp->io_input_bits_a)
							 ? 0xaU
							 : 
							((0x800U 
							  & vlTOPp->io_input_bits_a)
							  ? 0xbU
							  : 
							 ((0x400U 
							   & vlTOPp->io_input_bits_a)
							   ? 0xcU
							   : 
							  ((0x200U 
							    & vlTOPp->io_input_bits_a)
							    ? 0xdU
							    : 
							   ((0x100U 
							     & vlTOPp->io_input_bits_a)
							     ? 0xeU
							     : 
							    ((0x80U 
							      & vlTOPp->io_input_bits_a)
							      ? 0xfU
							      : 
							     ((0x40U 
							       & vlTOPp->io_input_bits_a)
							       ? 0x10U
							       : 
							      ((0x20U 
								& vlTOPp->io_input_bits_a)
							        ? 0x11U
							        : 
							       ((0x10U 
								 & vlTOPp->io_input_bits_a)
								 ? 0x12U
								 : 
								((8U 
								  & vlTOPp->io_input_bits_a)
								  ? 0x13U
								  : 
								 ((4U 
								   & vlTOPp->io_input_bits_a)
								   ? 0x14U
								   : 
								  ((2U 
								    & vlTOPp->io_input_bits_a)
								    ? 0x15U
								    : 0x16U))))))))))))))))))))));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT___T_133 
	= ((0x400000U & vlTOPp->io_input_bits_b) ? 0U
	    : ((0x200000U & vlTOPp->io_input_bits_b)
	        ? 1U : ((0x100000U & vlTOPp->io_input_bits_b)
			 ? 2U : ((0x80000U & vlTOPp->io_input_bits_b)
				  ? 3U : ((0x40000U 
					   & vlTOPp->io_input_bits_b)
					   ? 4U : (
						   (0x20000U 
						    & vlTOPp->io_input_bits_b)
						    ? 5U
						    : 
						   ((0x10000U 
						     & vlTOPp->io_input_bits_b)
						     ? 6U
						     : 
						    ((0x8000U 
						      & vlTOPp->io_input_bits_b)
						      ? 7U
						      : 
						     ((0x4000U 
						       & vlTOPp->io_input_bits_b)
						       ? 8U
						       : 
						      ((0x2000U 
							& vlTOPp->io_input_bits_b)
						        ? 9U
						        : 
						       ((0x1000U 
							 & vlTOPp->io_input_bits_b)
							 ? 0xaU
							 : 
							((0x800U 
							  & vlTOPp->io_input_bits_b)
							  ? 0xbU
							  : 
							 ((0x400U 
							   & vlTOPp->io_input_bits_b)
							   ? 0xcU
							   : 
							  ((0x200U 
							    & vlTOPp->io_input_bits_b)
							    ? 0xdU
							    : 
							   ((0x100U 
							     & vlTOPp->io_input_bits_b)
							     ? 0xeU
							     : 
							    ((0x80U 
							      & vlTOPp->io_input_bits_b)
							      ? 0xfU
							      : 
							     ((0x40U 
							       & vlTOPp->io_input_bits_b)
							       ? 0x10U
							       : 
							      ((0x20U 
								& vlTOPp->io_input_bits_b)
							        ? 0x11U
							        : 
							       ((0x10U 
								 & vlTOPp->io_input_bits_b)
								 ? 0x12U
								 : 
								((8U 
								  & vlTOPp->io_input_bits_b)
								  ? 0x13U
								  : 
								 ((4U 
								   & vlTOPp->io_input_bits_b)
								   ? 0x14U
								   : 
								  ((2U 
								    & vlTOPp->io_input_bits_b)
								    ? 0x15U
								    : 0x16U))))))))))))))))))))));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq_io_enq_valid 
	= ((IData)(vlTOPp->io_input_valid) & (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady) 
	   & ((IData)(vlTOPp->io_input_valid) & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_5))));
    vlTOPp->io_actual_exceptionFlags = ((((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_invalidExc) 
					  << 4U) | 
					 (((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_infiniteExc) 
					   << 3U) | 
					  ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
					   << 2U))) 
					| ((((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
					     & (VL_GTS_III(1,11,11, 0x6bU, (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_122)) 
						| ((((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_97) 
						     & VL_GTES_III(1,2,2, 0U, 
								   (3U 
								    & ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z) 
								       >> 8U)))) 
						    & ((0x4000000U 
							& vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig)
						        ? 
						       (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_87 
							>> 1U)
						        : vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_87)) 
						   & (~ 
						      (((((IData)(vlTOPp->io_input_bits_detectTininess) 
							  & (~ 
							     ((0x4000000U 
							       & vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig)
							       ? 
							      (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_87 
							       >> 2U)
							       : 
							      (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_87 
							       >> 1U)))) 
							 & ((0x4000000U 
							     & vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig)
							     ? 
							    (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_119 
							     >> 0x19U)
							     : 
							    (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_119 
							     >> 0x18U))) 
							& (0U 
							   != vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_93)) 
						       & (((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_98) 
							   & ((0x4000000U 
							       & vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig)
							       ? 
							      (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig 
							       >> 2U)
							       : 
							      (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig 
							       >> 1U))) 
							  | ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
							     & (((vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig 
								  >> 0x1aU) 
								 & (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig 
								    >> 2U)) 
								| (0U 
								   != 
								   (3U 
								    & vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig)))))))))) 
					    << 1U) 
					   | ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
					      | ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
						 & (VL_GTS_III(1,11,11, 0x6bU, (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_122)) 
						    | (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_97))))));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT___T_61 
	= (0x1ffU & (((0U == (0xffU & (vlTOPp->io_input_bits_a 
				       >> 0x17U))) ? 
		      (~ (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT___T_52))
		       : (0xffU & (vlTOPp->io_input_bits_a 
				   >> 0x17U))) + (0x80U 
						  | ((0U 
						      == 
						      (0xffU 
						       & (vlTOPp->io_input_bits_a 
							  >> 0x17U)))
						      ? 2U
						      : 1U))));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT___T_142 
	= (0x1ffU & (((0U == (0xffU & (vlTOPp->io_input_bits_b 
				       >> 0x17U))) ? 
		      (~ (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT___T_133))
		       : (0xffU & (vlTOPp->io_input_bits_b 
				   >> 0x17U))) + (0x80U 
						  | ((0U 
						      == 
						      (0xffU 
						       & (vlTOPp->io_input_bits_b 
							  >> 0x17U)))
						      ? 2U
						      : 1U))));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_6 
	= ((~ (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_5)) 
	   & (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq_io_enq_valid));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_52 
	= (1U & ((~ vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum) 
		 | (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering)));
    vlTOPp->io_pass = (((~ (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_4)) 
			& (((0U == (7U & (IData)((vlTOPp->io_actual_out 
						  >> 0x1dU)))) 
			    | (7U == (7U & (IData)(
						   (vlTOPp->io_actual_out 
						    >> 0x1dU)))))
			    ? ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT___T_253) 
			       & ((0x7fffffU & (IData)(vlTOPp->io_actual_out)) 
				  == (0x7fffffU & (IData)(vlTOPp->io_expected_recOut))))
			    : ((6U == (7U & (IData)(
						    (vlTOPp->io_actual_out 
						     >> 0x1dU))))
			        ? (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT___T_253)
			        : (vlTOPp->io_actual_out 
				   == vlTOPp->io_expected_recOut)))) 
		       & ((IData)(vlTOPp->io_actual_exceptionFlags) 
			  == (IData)(vlTOPp->io_expected_exceptionFlags)));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds_io_a 
	= (((QData)((IData)(((8U & (vlTOPp->io_input_bits_a 
				    >> 0x1cU)) | (7U 
						  & (((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT___T_62)
						       ? 0U
						       : 
						      ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT___T_61) 
						       >> 6U)) 
						     | ((3U 
							 == 
							 (3U 
							  & ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT___T_61) 
							     >> 7U))) 
							& (0U 
							   != 
							   (0x7fffffU 
							    & vlTOPp->io_input_bits_a)))))))) 
	    << 0x1dU) | (QData)((IData)(((0x1f800000U 
					  & ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT___T_61) 
					     << 0x17U)) 
					 | (0x7fffffU 
					    & ((0U 
						== 
						(0xffU 
						 & (vlTOPp->io_input_bits_a 
						    >> 0x17U)))
					        ? (0x7ffffeU 
						   & ((IData)(
							      (VL_ULL(0x3fffffffffffff) 
							       & ((QData)((IData)(
										(0x7fffffU 
										& vlTOPp->io_input_bits_a))) 
								  << (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT___T_52)))) 
						      << 1U))
					        : vlTOPp->io_input_bits_a))))));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds_io_b 
	= (((QData)((IData)(((8U & (vlTOPp->io_input_bits_b 
				    >> 0x1cU)) | (7U 
						  & (((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT___T_143)
						       ? 0U
						       : 
						      ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT___T_142) 
						       >> 6U)) 
						     | ((3U 
							 == 
							 (3U 
							  & ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT___T_142) 
							     >> 7U))) 
							& (0U 
							   != 
							   (0x7fffffU 
							    & vlTOPp->io_input_bits_b)))))))) 
	    << 0x1dU) | (QData)((IData)(((0x1f800000U 
					  & ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT___T_142) 
					     << 0x17U)) 
					 | (0x7fffffU 
					    & ((0U 
						== 
						(0xffU 
						 & (vlTOPp->io_input_bits_b 
						    >> 0x17U)))
					        ? (0x7ffffeU 
						   & ((IData)(
							      (VL_ULL(0x3fffffffffffff) 
							       & ((QData)((IData)(
										(0x7fffffU 
										& vlTOPp->io_input_bits_b))) 
								  << (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT___T_133)))) 
						      << 1U))
					        : vlTOPp->io_input_bits_b))))));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_sig 
	= (((0U != (7U & (IData)((vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds_io_a 
				  >> 0x1dU)))) << 0x17U) 
	   | (0x7fffffU & (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds_io_a)));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_isNaN 
	= ((3U == (3U & (IData)((vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds_io_a 
				 >> 0x1eU)))) & (IData)(
							(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds_io_a 
							 >> 0x1dU)));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_isInf 
	= ((3U == (3U & (IData)((vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds_io_a 
				 >> 0x1eU)))) & (~ (IData)(
							   (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds_io_a 
							    >> 0x1dU))));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_39 
	= ((0x100U & (IData)((vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds_io_b 
			      >> 0x17U))) | (0xffU 
					     & (~ (0x1ffU 
						   & (IData)(
							     (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds_io_b 
							      >> 0x17U))))));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_b_sig 
	= (((0U != (7U & (IData)((vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds_io_b 
				  >> 0x1dU)))) << 0x17U) 
	   | (0x7fffffU & (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds_io_b)));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_b_isNaN 
	= ((3U == (3U & (IData)((vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds_io_b 
				 >> 0x1eU)))) & (IData)(
							(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds_io_b 
							 >> 0x1dU)));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_b_isInf 
	= ((3U == (3U & (IData)((vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds_io_b 
				 >> 0x1eU)))) & (~ (IData)(
							   (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds_io_b 
							    >> 0x1dU))));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__rem 
	= (((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady)
	     ? (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_sig 
		<< 1U) : 0U) | ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady)
				 ? 0U : (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__rem_Z 
					 << 1U)));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExpQuot_S_div 
	= (0x7ffU & (VL_EXTENDS_II(11,10, (0x1ffU & (IData)(
							    (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds_io_a 
							     >> 0x17U)))) 
		     + VL_EXTENDS_II(11,10, ((0x200U 
					      & ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_39) 
						 << 1U)) 
					     | (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_39)))));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_107 
	= (((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady)
	     ? (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_b_sig 
		<< 1U) : 0U) | ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady)
				 ? 0U : (0x1000000U 
					 | (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__fractB_Z 
					    << 1U))));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__notSigNaNIn_invalidExc_S_div 
	= (((0U == (7U & (IData)((vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds_io_a 
				  >> 0x1dU)))) & (0U 
						  == 
						  (7U 
						   & (IData)(
							     (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds_io_b 
							      >> 0x1dU))))) 
	   | ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_isInf) 
	      & (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_b_isInf)));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__normalCase_S_div 
	= (1U & ((~ (((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_isNaN) 
		      | (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_isInf)) 
		     | (0U == (7U & (IData)((vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds_io_a 
					     >> 0x1dU)))))) 
		 & (~ (((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_b_isNaN) 
			| (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_b_isInf)) 
		       | (0U == (7U & (IData)((vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds_io_b 
					       >> 0x1dU))))))));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__trialRem 
	= (0xfffffffU & (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__rem 
			 - vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_107));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering_normalCase 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering) 
	   & (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__normalCase_S_div));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_141 
	= (((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady)
	     ? (VL_LTES_III(1,28,28, 0U, vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__trialRem) 
		<< 0x19U) : 0U) | ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady)
				    ? 0U : (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sigX_Z 
					    | (0x1ffffffU 
					       & (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum 
						  >> 2U)))));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_125 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering_normalCase) 
	   | ((~ (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady)) 
	      & VL_LTES_III(1,28,28, 0U, vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__trialRem)));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_68 
	= ((((((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering) 
	       & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__normalCase_S_div)))
	       ? 2U : 0U) | ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering_normalCase)
			      ? 0x4000000U : 0U)) | 
	    (0x3ffffffU & ((1U & ((~ (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering)) 
				  & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__skipCycle2))))
			    ? (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum 
			       >> 1U) : 0U))) | ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__skipCycle2)
						  ? 2U
						  : 0U));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___GEN_10 
	= (0xfffffffU & ((1U & ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering_normalCase) 
				| (~ (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum 
				      | (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum 
					 >> 2U)))))
			  ? (VL_LTES_III(1,28,28, 0U, vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__trialRem)
			      ? (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__rem 
				 - vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_107)
			      : vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__rem)
			  : vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__rem_Z));
}

void dut::_settle__TOP__3(dut__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    dut::_settle__TOP__3\n"); );
    dut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp46,95,0,3);
    VL_SIGW(__Vtemp47,95,0,3);
    VL_SIGW(__Vtemp50,95,0,3);
    VL_SIGW(__Vtemp51,95,0,3);
    VL_SIGW(__Vtemp54,95,0,3);
    VL_SIGW(__Vtemp55,95,0,3);
    VL_SIGW(__Vtemp58,95,0,3);
    VL_SIGW(__Vtemp59,95,0,3);
    VL_SIGW(__Vtemp62,95,0,3);
    VL_SIGW(__Vtemp63,95,0,3);
    VL_SIGW(__Vtemp66,95,0,3);
    VL_SIGW(__Vtemp67,95,0,3);
    VL_SIGW(__Vtemp70,95,0,3);
    VL_SIGW(__Vtemp71,95,0,3);
    VL_SIGW(__Vtemp74,95,0,3);
    VL_SIGW(__Vtemp75,95,0,3);
    VL_SIGW(__Vtemp78,95,0,3);
    VL_SIGW(__Vtemp79,95,0,3);
    VL_SIGW(__Vtemp82,95,0,3);
    VL_SIGW(__Vtemp83,95,0,3);
    VL_SIGW(__Vtemp86,95,0,3);
    VL_SIGW(__Vtemp87,95,0,3);
    // Body
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT___T_62 
	= ((0U == (0xffU & (vlTOPp->io_input_bits_a 
			    >> 0x17U))) & (0U == (0x7fffffU 
						  & vlTOPp->io_input_bits_a)));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT___T_143 
	= ((0U == (0xffU & (vlTOPp->io_input_bits_b 
			    >> 0x17U))) & (0U == (0x7fffffU 
						  & vlTOPp->io_input_bits_b)));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT___T_52 
	= ((0x400000U & vlTOPp->io_input_bits_a) ? 0U
	    : ((0x200000U & vlTOPp->io_input_bits_a)
	        ? 1U : ((0x100000U & vlTOPp->io_input_bits_a)
			 ? 2U : ((0x80000U & vlTOPp->io_input_bits_a)
				  ? 3U : ((0x40000U 
					   & vlTOPp->io_input_bits_a)
					   ? 4U : (
						   (0x20000U 
						    & vlTOPp->io_input_bits_a)
						    ? 5U
						    : 
						   ((0x10000U 
						     & vlTOPp->io_input_bits_a)
						     ? 6U
						     : 
						    ((0x8000U 
						      & vlTOPp->io_input_bits_a)
						      ? 7U
						      : 
						     ((0x4000U 
						       & vlTOPp->io_input_bits_a)
						       ? 8U
						       : 
						      ((0x2000U 
							& vlTOPp->io_input_bits_a)
						        ? 9U
						        : 
						       ((0x1000U 
							 & vlTOPp->io_input_bits_a)
							 ? 0xaU
							 : 
							((0x800U 
							  & vlTOPp->io_input_bits_a)
							  ? 0xbU
							  : 
							 ((0x400U 
							   & vlTOPp->io_input_bits_a)
							   ? 0xcU
							   : 
							  ((0x200U 
							    & vlTOPp->io_input_bits_a)
							    ? 0xdU
							    : 
							   ((0x100U 
							     & vlTOPp->io_input_bits_a)
							     ? 0xeU
							     : 
							    ((0x80U 
							      & vlTOPp->io_input_bits_a)
							      ? 0xfU
							      : 
							     ((0x40U 
							       & vlTOPp->io_input_bits_a)
							       ? 0x10U
							       : 
							      ((0x20U 
								& vlTOPp->io_input_bits_a)
							        ? 0x11U
							        : 
							       ((0x10U 
								 & vlTOPp->io_input_bits_a)
								 ? 0x12U
								 : 
								((8U 
								  & vlTOPp->io_input_bits_a)
								  ? 0x13U
								  : 
								 ((4U 
								   & vlTOPp->io_input_bits_a)
								   ? 0x14U
								   : 
								  ((2U 
								    & vlTOPp->io_input_bits_a)
								    ? 0x15U
								    : 0x16U))))))))))))))))))))));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT___T_133 
	= ((0x400000U & vlTOPp->io_input_bits_b) ? 0U
	    : ((0x200000U & vlTOPp->io_input_bits_b)
	        ? 1U : ((0x100000U & vlTOPp->io_input_bits_b)
			 ? 2U : ((0x80000U & vlTOPp->io_input_bits_b)
				  ? 3U : ((0x40000U 
					   & vlTOPp->io_input_bits_b)
					   ? 4U : (
						   (0x20000U 
						    & vlTOPp->io_input_bits_b)
						    ? 5U
						    : 
						   ((0x10000U 
						     & vlTOPp->io_input_bits_b)
						     ? 6U
						     : 
						    ((0x8000U 
						      & vlTOPp->io_input_bits_b)
						      ? 7U
						      : 
						     ((0x4000U 
						       & vlTOPp->io_input_bits_b)
						       ? 8U
						       : 
						      ((0x2000U 
							& vlTOPp->io_input_bits_b)
						        ? 9U
						        : 
						       ((0x1000U 
							 & vlTOPp->io_input_bits_b)
							 ? 0xaU
							 : 
							((0x800U 
							  & vlTOPp->io_input_bits_b)
							  ? 0xbU
							  : 
							 ((0x400U 
							   & vlTOPp->io_input_bits_b)
							   ? 0xcU
							   : 
							  ((0x200U 
							    & vlTOPp->io_input_bits_b)
							    ? 0xdU
							    : 
							   ((0x100U 
							     & vlTOPp->io_input_bits_b)
							     ? 0xeU
							     : 
							    ((0x80U 
							      & vlTOPp->io_input_bits_b)
							      ? 0xfU
							      : 
							     ((0x40U 
							       & vlTOPp->io_input_bits_b)
							       ? 0x10U
							       : 
							      ((0x20U 
								& vlTOPp->io_input_bits_b)
							        ? 0x11U
							        : 
							       ((0x10U 
								 & vlTOPp->io_input_bits_b)
								 ? 0x12U
								 : 
								((8U 
								  & vlTOPp->io_input_bits_b)
								  ? 0x13U
								  : 
								 ((4U 
								   & vlTOPp->io_input_bits_b)
								   ? 0x14U
								   : 
								  ((2U 
								    & vlTOPp->io_input_bits_b)
								    ? 0x15U
								    : 0x16U))))))))))))))))))))));
    vlTOPp->io_check = (1U & (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum 
			      >> 1U));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT__wrap_1 
	= (4U == (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT__value_1));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_14 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT__value_1)));
    vlTOPp->io_output_a = ((4U >= (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT__value_1))
			    ? vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_a
			   [vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT__value_1]
			    : 0U);
    vlTOPp->io_output_b = ((4U >= (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT__value_1))
			    ? vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_b
			   [vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT__value_1]
			    : 0U);
    vlTOPp->io_output_roundingMode = ((4U >= (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT__value_1))
				       ? vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_roundingMode
				      [vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT__value_1]
				       : 0U);
    vlTOPp->io_output_detectTininess = ((4U >= (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT__value_1)) 
					& vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_detectTininess
					[vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT__value_1]);
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__skipCycle2 
	= (1U & ((vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum 
		  >> 3U) & (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sigX_Z 
			    >> 0x19U)));
    vlTOPp->io_expected_exceptionFlags = ((4U >= (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT__value_1))
					   ? vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_exceptionFlags
					  [vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT__value_1]
					   : 0U);
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady 
	= (1U & (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum 
		 | (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum 
		    >> 1U)));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out___05FT_18_data 
	= ((4U >= (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT__value_1))
	    ? vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out
	   [vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT__value_1]
	    : 0U);
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_invalidExc 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__majorExc_Z) 
	   & (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isNaN_Z));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_infiniteExc 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__majorExc_Z) 
	   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isNaN_Z)));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_98 
	= ((0U == (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__roundingMode_Z)) 
	   | (4U == (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__roundingMode_Z)));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
	= (((2U == (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__roundingMode_Z)) 
	    & (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sign_Z)) 
	   | ((3U == (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__roundingMode_Z)) 
	      & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sign_Z))));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig 
	= ((vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sigX_Z 
	    << 1U) | (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__notZeroRem_Z));
    __Vtemp46[0U] = 0U;
    __Vtemp46[1U] = 0U;
    __Vtemp46[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp47, __Vtemp46, (0x3fU 
						   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp50[0U] = 0U;
    __Vtemp50[1U] = 0U;
    __Vtemp50[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp51, __Vtemp50, (0x3fU 
						   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_22 
	= ((0xffU & ((0x4000U & (__Vtemp47[2U] << 0xeU)) 
		     | (__Vtemp47[1U] >> 0x12U))) | 
	   (0xff00U & ((0x40000000U & (__Vtemp51[2U] 
				       << 0x1eU)) | 
		       (0x3fffff00U & (__Vtemp51[1U] 
				       >> 2U)))));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT__wrap 
	= (4U == (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT__value));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_12 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT__value)));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_2 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT__value) 
	   == (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT__value_1));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT___T_61 
	= (0x1ffU & (((0U == (0xffU & (vlTOPp->io_input_bits_a 
				       >> 0x17U))) ? 
		      (~ (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT___T_52))
		       : (0xffU & (vlTOPp->io_input_bits_a 
				   >> 0x17U))) + (0x80U 
						  | ((0U 
						      == 
						      (0xffU 
						       & (vlTOPp->io_input_bits_a 
							  >> 0x17U)))
						      ? 2U
						      : 1U))));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT___T_142 
	= (0x1ffU & (((0U == (0xffU & (vlTOPp->io_input_bits_b 
				       >> 0x17U))) ? 
		      (~ (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT___T_133))
		       : (0xffU & (vlTOPp->io_input_bits_b 
				   >> 0x17U))) + (0x80U 
						  | ((0U 
						      == 
						      (0xffU 
						       & (vlTOPp->io_input_bits_b 
							  >> 0x17U)))
						      ? 2U
						      : 1U))));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq_io_enq_valid 
	= ((IData)(vlTOPp->io_input_valid) & (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady));
    vlTOPp->io_expected_out = vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out___05FT_18_data;
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT___T_224 
	= ((0U == (0xffU & (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out___05FT_18_data 
			    >> 0x17U))) & (0U == (0x7fffffU 
						  & vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out___05FT_18_data)));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT___T_214 
	= ((0x400000U & vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out___05FT_18_data)
	    ? 0U : ((0x200000U & vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out___05FT_18_data)
		     ? 1U : ((0x100000U & vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out___05FT_18_data)
			      ? 2U : ((0x80000U & vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out___05FT_18_data)
				       ? 3U : ((0x40000U 
						& vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out___05FT_18_data)
					        ? 4U
					        : (
						   (0x20000U 
						    & vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out___05FT_18_data)
						    ? 5U
						    : 
						   ((0x10000U 
						     & vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out___05FT_18_data)
						     ? 6U
						     : 
						    ((0x8000U 
						      & vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out___05FT_18_data)
						      ? 7U
						      : 
						     ((0x4000U 
						       & vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out___05FT_18_data)
						       ? 8U
						       : 
						      ((0x2000U 
							& vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out___05FT_18_data)
						        ? 9U
						        : 
						       ((0x1000U 
							 & vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out___05FT_18_data)
							 ? 0xaU
							 : 
							((0x800U 
							  & vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out___05FT_18_data)
							  ? 0xbU
							  : 
							 ((0x400U 
							   & vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out___05FT_18_data)
							   ? 0xcU
							   : 
							  ((0x200U 
							    & vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out___05FT_18_data)
							    ? 0xdU
							    : 
							   ((0x100U 
							     & vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out___05FT_18_data)
							     ? 0xeU
							     : 
							    ((0x80U 
							      & vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out___05FT_18_data)
							      ? 0xfU
							      : 
							     ((0x40U 
							       & vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out___05FT_18_data)
							       ? 0x10U
							       : 
							      ((0x20U 
								& vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out___05FT_18_data)
							        ? 0x11U
							        : 
							       ((0x10U 
								 & vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out___05FT_18_data)
								 ? 0x12U
								 : 
								((8U 
								  & vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out___05FT_18_data)
								  ? 0x13U
								  : 
								 ((4U 
								   & vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out___05FT_18_data)
								   ? 0x14U
								   : 
								  ((2U 
								    & vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out___05FT_18_data)
								    ? 0x15U
								    : 0x16U))))))))))))))))))))));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_invalidExc) 
	   | (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isNaN_Z));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_infiniteExc) 
	   | (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isInf_Z));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_98) 
	   | (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_32 
	= ((0xf0fU & ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_22) 
		      >> 4U)) | (0xf0f0U & ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_22) 
					    << 4U)));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_4 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_2) 
	   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_1)));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_5 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_2) 
	   & (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_1));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds_io_a 
	= (((QData)((IData)(((8U & (vlTOPp->io_input_bits_a 
				    >> 0x1cU)) | (7U 
						  & (((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT___T_62)
						       ? 0U
						       : 
						      ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT___T_61) 
						       >> 6U)) 
						     | ((3U 
							 == 
							 (3U 
							  & ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT___T_61) 
							     >> 7U))) 
							& (0U 
							   != 
							   (0x7fffffU 
							    & vlTOPp->io_input_bits_a)))))))) 
	    << 0x1dU) | (QData)((IData)(((0x1f800000U 
					  & ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT___T_61) 
					     << 0x17U)) 
					 | (0x7fffffU 
					    & ((0U 
						== 
						(0xffU 
						 & (vlTOPp->io_input_bits_a 
						    >> 0x17U)))
					        ? (0x7ffffeU 
						   & ((IData)(
							      (VL_ULL(0x3fffffffffffff) 
							       & ((QData)((IData)(
										(0x7fffffU 
										& vlTOPp->io_input_bits_a))) 
								  << (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT___T_52)))) 
						      << 1U))
					        : vlTOPp->io_input_bits_a))))));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds_io_b 
	= (((QData)((IData)(((8U & (vlTOPp->io_input_bits_b 
				    >> 0x1cU)) | (7U 
						  & (((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT___T_143)
						       ? 0U
						       : 
						      ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT___T_142) 
						       >> 6U)) 
						     | ((3U 
							 == 
							 (3U 
							  & ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT___T_142) 
							     >> 7U))) 
							& (0U 
							   != 
							   (0x7fffffU 
							    & vlTOPp->io_input_bits_b)))))))) 
	    << 0x1dU) | (QData)((IData)(((0x1f800000U 
					  & ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT___T_142) 
					     << 0x17U)) 
					 | (0x7fffffU 
					    & ((0U 
						== 
						(0xffU 
						 & (vlTOPp->io_input_bits_b 
						    >> 0x17U)))
					        ? (0x7ffffeU 
						   & ((IData)(
							      (VL_ULL(0x3fffffffffffff) 
							       & ((QData)((IData)(
										(0x7fffffU 
										& vlTOPp->io_input_bits_b))) 
								  << (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT___T_133)))) 
						      << 1U))
					        : vlTOPp->io_input_bits_b))))));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT___T_223 
	= (0x1ffU & (((0U == (0xffU & (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out___05FT_18_data 
				       >> 0x17U))) ? 
		      (~ (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT___T_214))
		       : (0xffU & (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out___05FT_18_data 
				   >> 0x17U))) + (0x80U 
						  | ((0U 
						      == 
						      (0xffU 
						       & (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out___05FT_18_data 
							  >> 0x17U)))
						      ? 2U
						      : 1U))));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
	= (1U & (((~ (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
		  & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut))) 
		 & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isZero_Z))));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_42 
	= ((0x3333U & ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_32) 
		       >> 2U)) | (0xccccU & ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_32) 
					     << 2U)));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_8 
	= (1U & ((vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum 
		  >> 1U) & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_4))));
    vlTOPp->io_input_ready = ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady) 
			      & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_5)));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_6 
	= ((~ (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_5)) 
	   & (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq_io_enq_valid));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady) 
	   & ((IData)(vlTOPp->io_input_valid) & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_5))));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_sig 
	= (((0U != (7U & (IData)((vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds_io_a 
				  >> 0x1dU)))) << 0x17U) 
	   | (0x7fffffU & (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds_io_a)));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_isNaN 
	= ((3U == (3U & (IData)((vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds_io_a 
				 >> 0x1eU)))) & (IData)(
							(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds_io_a 
							 >> 0x1dU)));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_isInf 
	= ((3U == (3U & (IData)((vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds_io_a 
				 >> 0x1eU)))) & (~ (IData)(
							   (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds_io_a 
							    >> 0x1dU))));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_39 
	= ((0x100U & (IData)((vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds_io_b 
			      >> 0x17U))) | (0xffU 
					     & (~ (0x1ffU 
						   & (IData)(
							     (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds_io_b 
							      >> 0x17U))))));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_b_sig 
	= (((0U != (7U & (IData)((vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds_io_b 
				  >> 0x1dU)))) << 0x17U) 
	   | (0x7fffffU & (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds_io_b)));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_b_isNaN 
	= ((3U == (3U & (IData)((vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds_io_b 
				 >> 0x1eU)))) & (IData)(
							(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds_io_b 
							 >> 0x1dU)));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_b_isInf 
	= ((3U == (3U & (IData)((vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds_io_b 
				 >> 0x1eU)))) & (~ (IData)(
							   (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds_io_b 
							    >> 0x1dU))));
    vlTOPp->io_expected_recOut = (((QData)((IData)(
						   ((8U 
						     & (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out___05FT_18_data 
							>> 0x1cU)) 
						    | (7U 
						       & (((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT___T_224)
							    ? 0U
							    : 
							   ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT___T_223) 
							    >> 6U)) 
							  | ((3U 
							      == 
							      (3U 
							       & ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT___T_223) 
								  >> 7U))) 
							     & (0U 
								!= 
								(0x7fffffU 
								 & vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out___05FT_18_data)))))))) 
				   << 0x1dU) | (QData)((IData)(
							       ((0x1f800000U 
								 & ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT___T_223) 
								    << 0x17U)) 
								| (0x7fffffU 
								   & ((0U 
								       == 
								       (0xffU 
									& (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out___05FT_18_data 
									   >> 0x17U)))
								       ? 
								      (0x7ffffeU 
								       & ((IData)(
										(VL_ULL(0x3fffffffffffff) 
										& ((QData)((IData)(
										(0x7fffffU 
										& vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out___05FT_18_data))) 
										<< (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT___T_214)))) 
									  << 1U))
								       : vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out___05FT_18_data))))));
    __Vtemp54[0U] = 0U;
    __Vtemp54[1U] = 0U;
    __Vtemp54[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp55, __Vtemp54, (0x3fU 
						   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp58[0U] = 0U;
    __Vtemp58[1U] = 0U;
    __Vtemp58[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp59, __Vtemp58, (0x3fU 
						   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp62[0U] = 0U;
    __Vtemp62[1U] = 0U;
    __Vtemp62[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp63, __Vtemp62, (0x3fU 
						   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp66[0U] = 0U;
    __Vtemp66[1U] = 0U;
    __Vtemp66[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp67, __Vtemp66, (0x3fU 
						   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp70[0U] = 0U;
    __Vtemp70[1U] = 0U;
    __Vtemp70[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp71, __Vtemp70, (0x3fU 
						   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp74[0U] = 0U;
    __Vtemp74[1U] = 0U;
    __Vtemp74[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp75, __Vtemp74, (0x3fU 
						   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp78[0U] = 0U;
    __Vtemp78[1U] = 0U;
    __Vtemp78[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp79, __Vtemp78, (0x3fU 
						   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp82[0U] = 0U;
    __Vtemp82[1U] = 0U;
    __Vtemp82[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp83, __Vtemp82, (0x3fU 
						   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp86[0U] = 0U;
    __Vtemp86[1U] = 0U;
    __Vtemp86[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp87, __Vtemp86, (0x3fU 
						   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_87 
	= (((0x100U & (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))
	     ? 0U : ((0x80U & (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))
		      ? ((0x40U & (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))
			  ? 0U : ((4U & (__Vtemp55[0U] 
					 << 2U)) | 
				  ((2U & __Vtemp59[0U]) 
				   | (1U & (__Vtemp63[0U] 
					    >> 2U)))))
		      : (7U | (0x1fffff8U & ((~ ((0x40U 
						  & (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))
						  ? 
						 (~ 
						  (((0x155540U 
						     & ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_42) 
							<< 5U)) 
						    | (0x2aaa80U 
						       & ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_42) 
							  << 7U))) 
						   | ((0x20U 
						       & (__Vtemp67[1U] 
							  >> 0x15U)) 
						      | ((0x10U 
							  & (__Vtemp71[1U] 
							     >> 0x17U)) 
							 | ((8U 
							     & (__Vtemp75[1U] 
								>> 0x19U)) 
							    | ((4U 
								& (__Vtemp79[1U] 
								   >> 0x1bU)) 
							       | ((2U 
								   & (__Vtemp83[1U] 
								      >> 0x1dU)) 
								  | (1U 
								     & (__Vtemp87[1U] 
									>> 0x1fU)))))))))
						  : 0U)) 
					     << 3U))))) 
	   | (1U & (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig 
		    >> 0x1aU)));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_52 
	= (1U & ((~ vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum) 
		 | (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering)));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__rem 
	= (((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady)
	     ? (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_sig 
		<< 1U) : 0U) | ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady)
				 ? 0U : (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__rem_Z 
					 << 1U)));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExpQuot_S_div 
	= (0x7ffU & (VL_EXTENDS_II(11,10, (0x1ffU & (IData)(
							    (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds_io_a 
							     >> 0x17U)))) 
		     + VL_EXTENDS_II(11,10, ((0x200U 
					      & ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_39) 
						 << 1U)) 
					     | (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_39)))));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_107 
	= (((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady)
	     ? (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_b_sig 
		<< 1U) : 0U) | ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady)
				 ? 0U : (0x1000000U 
					 | (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__fractB_Z 
					    << 1U))));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__notSigNaNIn_invalidExc_S_div 
	= (((0U == (7U & (IData)((vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds_io_a 
				  >> 0x1dU)))) & (0U 
						  == 
						  (7U 
						   & (IData)(
							     (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds_io_b 
							      >> 0x1dU))))) 
	   | ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_isInf) 
	      & (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_b_isInf)));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__normalCase_S_div 
	= (1U & ((~ (((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_isNaN) 
		      | (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_isInf)) 
		     | (0U == (7U & (IData)((vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds_io_a 
					     >> 0x1dU)))))) 
		 & (~ (((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_b_isNaN) 
			| (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_b_isInf)) 
		       | (0U == (7U & (IData)((vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds_io_b 
					       >> 0x1dU))))))));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_95 
	= (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig 
	   & (1U | (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_87 
		    << 1U)));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_92 
	= ((~ (1U | (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_87 
		     << 1U))) & (3U | (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_87 
				       << 2U)));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__trialRem 
	= (0xfffffffU & (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__rem 
			 - vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_107));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering_normalCase 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering) 
	   & (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__normalCase_S_div));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_93 
	= (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig 
	   & vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_92);
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_141 
	= (((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady)
	     ? (VL_LTES_III(1,28,28, 0U, vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__trialRem) 
		<< 0x19U) : 0U) | ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady)
				    ? 0U : (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sigX_Z 
					    | (0x1ffffffU 
					       & (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum 
						  >> 2U)))));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_125 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering_normalCase) 
	   | ((~ (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady)) 
	      & VL_LTES_III(1,28,28, 0U, vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__trialRem)));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_68 
	= ((((((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering) 
	       & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__normalCase_S_div)))
	       ? 2U : 0U) | ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering_normalCase)
			      ? 0x4000000U : 0U)) | 
	    (0x3ffffffU & ((1U & ((~ (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering)) 
				  & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__skipCycle2))))
			    ? (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum 
			       >> 1U) : 0U))) | ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__skipCycle2)
						  ? 2U
						  : 0U));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___GEN_10 
	= (0xfffffffU & ((1U & ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering_normalCase) 
				| (~ (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum 
				      | (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum 
					 >> 2U)))))
			  ? (VL_LTES_III(1,28,28, 0U, vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__trialRem)
			      ? (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__rem 
				 - vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_107)
			      : vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__rem)
			  : vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__rem_Z));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_97 
	= ((0U != vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_93) 
	   | (0U != vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_95));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_119 
	= (0x3ffffffU & ((((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_98) 
			   & (0U != vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_93)) 
			  | ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
			     & (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_97)))
			  ? (((IData)(1U) + (0x1ffffffU 
					     & ((vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig 
						 >> 2U) 
						| (0x3fffffffU 
						   & vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_87)))) 
			     & (~ ((((0U == (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__roundingMode_Z)) 
				     & (0U != vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_93)) 
				    & (0U == vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_95))
				    ? (1U | (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_87 
					     << 1U))
				    : 0U))) : ((0x1ffffffU 
						& ((vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig 
						    & (~ 
						       (3U 
							| (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_87 
							   << 2U)))) 
						   >> 2U)) 
					       | (((6U 
						    == (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__roundingMode_Z)) 
						   & (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_97))
						   ? 
						  (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_92 
						   >> 1U)
						   : 0U))));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_122 
	= (0x7ffU & (VL_EXTENDS_II(11,10, (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z)) 
		     + VL_EXTENDS_II(11,10, (3U & (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_119 
						   >> 0x18U)))));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut 
	= (((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
	    & VL_GTS_III(1,11,11, 0x6bU, (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_122))) 
	   & ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
	      | (6U == (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__roundingMode_Z))));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
	   & VL_LTES_III(1,4,4, 3U, (0xfU & ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_122) 
					     >> 7U))));
    vlTOPp->io_actual_exceptionFlags = ((((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_invalidExc) 
					  << 4U) | 
					 (((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_infiniteExc) 
					   << 3U) | 
					  ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
					   << 2U))) 
					| ((((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
					     & (VL_GTS_III(1,11,11, 0x6bU, (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_122)) 
						| ((((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_97) 
						     & VL_GTES_III(1,2,2, 0U, 
								   (3U 
								    & ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z) 
								       >> 8U)))) 
						    & ((0x4000000U 
							& vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig)
						        ? 
						       (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_87 
							>> 1U)
						        : vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_87)) 
						   & (~ 
						      (((((IData)(vlTOPp->io_input_bits_detectTininess) 
							  & (~ 
							     ((0x4000000U 
							       & vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig)
							       ? 
							      (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_87 
							       >> 2U)
							       : 
							      (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_87 
							       >> 1U)))) 
							 & ((0x4000000U 
							     & vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig)
							     ? 
							    (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_119 
							     >> 0x19U)
							     : 
							    (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_119 
							     >> 0x18U))) 
							& (0U 
							   != vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_93)) 
						       & (((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_98) 
							   & ((0x4000000U 
							       & vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig)
							       ? 
							      (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig 
							       >> 2U)
							       : 
							      (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig 
							       >> 1U))) 
							  | ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
							     & (((vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig 
								  >> 0x1aU) 
								 & (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig 
								    >> 2U)) 
								| (0U 
								   != 
								   (3U 
								    & vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig)))))))))) 
					    << 1U) 
					   | ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
					      | ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
						 & (VL_GTS_III(1,11,11, 0x6bU, (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_122)) 
						    | (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_97))))));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
	   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut) 
	   | ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
	      & (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->io_actual_out = (((QData)((IData)(((~ (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
					       & (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sign_Z)))) 
			      << 0x20U) | (QData)((IData)(
							  ((0xff800000U 
							    & ((((((((((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_122) 
								       & (~ 
									  (((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isZero_Z) 
									    | VL_GTS_III(1,11,11, 0x6bU, (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_122)))
									    ? 0x1c0U
									    : 0U))) 
								      & (~ 
									 ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
									   ? 0x194U
									   : 0U))) 
								     & (~ 
									((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
									  ? 0x80U
									  : 0U))) 
								    & (~ 
								       ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
									 ? 0x40U
									 : 0U))) 
								   | ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
								       ? 0x6bU
								       : 0U)) 
								  | ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
								      ? 0x17fU
								      : 0U)) 
								 | ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
								     ? 0x180U
								     : 0U)) 
								| ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
								    ? 0x1c0U
								    : 0U)) 
							       << 0x17U)) 
							   | (0x7fffffU 
							      & (((((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
								    | (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isZero_Z)) 
								   | VL_GTS_III(1,11,11, 0x6bU, (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_122)))
								   ? 
								  ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
								    ? 0x400000U
								    : 0U)
								   : 
								  ((0x4000000U 
								    & vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig)
								    ? 
								   (vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_119 
								    >> 1U)
								    : vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_119)) 
								 | ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
								     ? 0x7fffffU
								     : 0U)))))));
    vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT___T_253 
	= ((0xfU & (IData)((vlTOPp->io_actual_out >> 0x1dU))) 
	   == (0xfU & (IData)((vlTOPp->io_expected_recOut 
			       >> 0x1dU))));
    vlTOPp->io_pass = (((~ (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_4)) 
			& (((0U == (7U & (IData)((vlTOPp->io_actual_out 
						  >> 0x1dU)))) 
			    | (7U == (7U & (IData)(
						   (vlTOPp->io_actual_out 
						    >> 0x1dU)))))
			    ? ((IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT___T_253) 
			       & ((0x7fffffU & (IData)(vlTOPp->io_actual_out)) 
				  == (0x7fffffU & (IData)(vlTOPp->io_expected_recOut))))
			    : ((6U == (7U & (IData)(
						    (vlTOPp->io_actual_out 
						     >> 0x1dU))))
			        ? (IData)(vlTOPp->ValExec_DivSqrtRecF32_small_div__DOT___T_253)
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
    io_input_bits_a = VL_RAND_RESET_I(32);
    io_input_bits_b = VL_RAND_RESET_I(32);
    io_input_bits_roundingMode = VL_RAND_RESET_I(3);
    io_input_bits_detectTininess = VL_RAND_RESET_I(1);
    io_input_bits_out = VL_RAND_RESET_I(32);
    io_input_bits_exceptionFlags = VL_RAND_RESET_I(5);
    io_output_a = VL_RAND_RESET_I(32);
    io_output_b = VL_RAND_RESET_I(32);
    io_output_roundingMode = VL_RAND_RESET_I(3);
    io_output_detectTininess = VL_RAND_RESET_I(1);
    io_expected_out = VL_RAND_RESET_I(32);
    io_expected_exceptionFlags = VL_RAND_RESET_I(5);
    io_expected_recOut = VL_RAND_RESET_Q(33);
    io_actual_out = VL_RAND_RESET_Q(33);
    io_actual_exceptionFlags = VL_RAND_RESET_I(5);
    io_check = VL_RAND_RESET_I(1);
    io_pass = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF32_small_div__DOT__ds_io_a = VL_RAND_RESET_Q(33);
    ValExec_DivSqrtRecF32_small_div__DOT__ds_io_b = VL_RAND_RESET_Q(33);
    ValExec_DivSqrtRecF32_small_div__DOT__cq_io_enq_valid = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF32_small_div__DOT___T_52 = VL_RAND_RESET_I(5);
    ValExec_DivSqrtRecF32_small_div__DOT___T_61 = VL_RAND_RESET_I(9);
    ValExec_DivSqrtRecF32_small_div__DOT___T_62 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF32_small_div__DOT___T_133 = VL_RAND_RESET_I(5);
    ValExec_DivSqrtRecF32_small_div__DOT___T_142 = VL_RAND_RESET_I(9);
    ValExec_DivSqrtRecF32_small_div__DOT___T_143 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF32_small_div__DOT___T_214 = VL_RAND_RESET_I(5);
    ValExec_DivSqrtRecF32_small_div__DOT___T_223 = VL_RAND_RESET_I(9);
    ValExec_DivSqrtRecF32_small_div__DOT___T_224 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF32_small_div__DOT___T_253 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_isNaN = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_isInf = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_sig = VL_RAND_RESET_I(25);
    ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_b_isNaN = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_b_isInf = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_b_sig = VL_RAND_RESET_I(25);
    ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_invalidExc = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_infiniteExc = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig = VL_RAND_RESET_I(27);
    ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum = VL_RAND_RESET_I(27);
    ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__majorExc_Z = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isNaN_Z = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isInf_Z = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isZero_Z = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sign_Z = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z = VL_RAND_RESET_I(10);
    ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__fractB_Z = VL_RAND_RESET_I(23);
    ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__roundingMode_Z = VL_RAND_RESET_I(3);
    ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__rem_Z = VL_RAND_RESET_I(26);
    ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__notZeroRem_Z = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sigX_Z = VL_RAND_RESET_I(26);
    ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__notSigNaNIn_invalidExc_S_div = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__normalCase_S_div = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_39 = VL_RAND_RESET_I(9);
    ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExpQuot_S_div = VL_RAND_RESET_I(11);
    ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering_normalCase = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__skipCycle2 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_52 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_68 = VL_RAND_RESET_I(27);
    ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__rem = VL_RAND_RESET_I(27);
    ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_107 = VL_RAND_RESET_I(26);
    ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__trialRem = VL_RAND_RESET_I(28);
    ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___GEN_10 = VL_RAND_RESET_I(28);
    ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_125 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_141 = VL_RAND_RESET_I(26);
    ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_22 = VL_RAND_RESET_I(16);
    ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_32 = VL_RAND_RESET_I(16);
    ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_42 = VL_RAND_RESET_I(16);
    ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_87 = VL_RAND_RESET_I(25);
    ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_92 = VL_RAND_RESET_I(27);
    ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_93 = VL_RAND_RESET_I(27);
    ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_95 = VL_RAND_RESET_I(27);
    ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_97 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_98 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_119 = VL_RAND_RESET_I(26);
    ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_122 = VL_RAND_RESET_I(11);
    ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF32_small_div__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
	    ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_a[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
	    ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_b[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
	    ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_roundingMode[__Vi0] = VL_RAND_RESET_I(3);
    }}
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
	    ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_detectTininess[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
	    ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out[__Vi0] = VL_RAND_RESET_I(32);
    }}
    ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_out___05FT_18_data = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
	    ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_exceptionFlags[__Vi0] = VL_RAND_RESET_I(5);
    }}
    ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT__value = VL_RAND_RESET_I(3);
    ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT__value_1 = VL_RAND_RESET_I(3);
    ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_1 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_2 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_4 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_5 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_6 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_8 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT__wrap = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_12 = VL_RAND_RESET_I(3);
    ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT__wrap_1 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT___T_14 = VL_RAND_RESET_I(3);
    ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT____Vlvbound1 = VL_RAND_RESET_I(32);
    ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT____Vlvbound2 = VL_RAND_RESET_I(32);
    ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT____Vlvbound3 = VL_RAND_RESET_I(3);
    ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT____Vlvbound4 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT____Vlvbound5 = VL_RAND_RESET_I(32);
    ValExec_DivSqrtRecF32_small_div__DOT__cq__DOT____Vlvbound6 = VL_RAND_RESET_I(5);
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
}
