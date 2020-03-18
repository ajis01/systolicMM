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
    VL_SIG8(__Vdlyvdim0__ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_a__v0,2,0);
    VL_SIG8(__Vdlyvset__ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_a__v0,0,0);
    VL_SIG8(__Vdlyvdim0__ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_roundingMode__v0,2,0);
    VL_SIG8(__Vdlyvval__ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_roundingMode__v0,2,0);
    VL_SIG8(__Vdlyvset__ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_roundingMode__v0,0,0);
    VL_SIG8(__Vdlyvdim0__ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_detectTininess__v0,2,0);
    VL_SIG8(__Vdlyvval__ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_detectTininess__v0,0,0);
    VL_SIG8(__Vdlyvset__ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_detectTininess__v0,0,0);
    VL_SIG8(__Vdlyvdim0__ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out__v0,2,0);
    VL_SIG8(__Vdlyvset__ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out__v0,0,0);
    VL_SIG8(__Vdlyvdim0__ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_exceptionFlags__v0,2,0);
    VL_SIG8(__Vdlyvval__ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_exceptionFlags__v0,4,0);
    VL_SIG8(__Vdlyvset__ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_exceptionFlags__v0,0,0);
    VL_SIGW(__Vtemp2,95,0,3);
    VL_SIGW(__Vtemp3,95,0,3);
    VL_SIGW(__Vtemp6,95,0,3);
    VL_SIGW(__Vtemp7,95,0,3);
    VL_SIGW(__Vtemp10,95,0,3);
    VL_SIGW(__Vtemp11,95,0,3);
    VL_SIGW(__Vtemp14,95,0,3);
    VL_SIGW(__Vtemp15,95,0,3);
    VL_SIGW(__Vtemp18,127,0,4);
    VL_SIGW(__Vtemp19,127,0,4);
    VL_SIGW(__Vtemp21,95,0,3);
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
    VL_SIGW(__Vtemp46,95,0,3);
    VL_SIG64(__Vdlyvval__ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_a__v0,63,0);
    VL_SIG64(__Vdlyvval__ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out__v0,63,0);
    // Body
    __Vdlyvset__ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_a__v0 = 0U;
    __Vdlyvset__ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_detectTininess__v0 = 0U;
    __Vdlyvset__ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_roundingMode__v0 = 0U;
    __Vdlyvset__ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_exceptionFlags__v0 = 0U;
    __Vdlyvset__ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out__v0 = 0U;
    // ALWAYS at test-DivSqrtRecF64_small_sqrt/ValExec_DivSqrtRecF64_small_sqrt.v:292
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__rem_Z 
	= (VL_ULL(0x7fffffffffffff) & vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___GEN_10);
    // ALWAYS at test-DivSqrtRecF64_small_sqrt/ValExec_DivSqrtRecF64_small_sqrt.v:1142
    if (vlTOPp->reset) {
	vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_1 = 0U;
    } else {
	if (((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_6) 
	     != (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_8))) {
	    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_1 
		= vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_6;
	}
    }
    // ALWAYS at test-DivSqrtRecF64_small_sqrt/ValExec_DivSqrtRecF64_small_sqrt.v:1142
    if (((~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_5)) 
	 & (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq_io_enq_valid))) {
	vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT____Vlvbound1 
	    = vlTOPp->io_input_bits_a;
	if ((4U >= (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT__value))) {
	    __Vdlyvval__ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_a__v0 
		= vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT____Vlvbound1;
	    __Vdlyvset__ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_a__v0 = 1U;
	    __Vdlyvdim0__ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_a__v0 
		= vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT__value;
	}
    }
    // ALWAYS at test-DivSqrtRecF64_small_sqrt/ValExec_DivSqrtRecF64_small_sqrt.v:1142
    if (((~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_5)) 
	 & (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq_io_enq_valid))) {
	vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT____Vlvbound3 
	    = vlTOPp->io_input_bits_detectTininess;
	if ((4U >= (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT__value))) {
	    __Vdlyvval__ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_detectTininess__v0 
		= vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT____Vlvbound3;
	    __Vdlyvset__ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_detectTininess__v0 = 1U;
	    __Vdlyvdim0__ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_detectTininess__v0 
		= vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT__value;
	}
    }
    // ALWAYS at test-DivSqrtRecF64_small_sqrt/ValExec_DivSqrtRecF64_small_sqrt.v:1142
    if (((~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_5)) 
	 & (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq_io_enq_valid))) {
	vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT____Vlvbound2 
	    = vlTOPp->io_input_bits_roundingMode;
	if ((4U >= (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT__value))) {
	    __Vdlyvval__ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_roundingMode__v0 
		= vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT____Vlvbound2;
	    __Vdlyvset__ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_roundingMode__v0 = 1U;
	    __Vdlyvdim0__ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_roundingMode__v0 
		= vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT__value;
	}
    }
    // ALWAYS at test-DivSqrtRecF64_small_sqrt/ValExec_DivSqrtRecF64_small_sqrt.v:1142
    if (((~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_5)) 
	 & (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq_io_enq_valid))) {
	vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT____Vlvbound5 
	    = vlTOPp->io_input_bits_exceptionFlags;
	if ((4U >= (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT__value))) {
	    __Vdlyvval__ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_exceptionFlags__v0 
		= vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT____Vlvbound5;
	    __Vdlyvset__ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_exceptionFlags__v0 = 1U;
	    __Vdlyvdim0__ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_exceptionFlags__v0 
		= vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT__value;
	}
    }
    // ALWAYS at test-DivSqrtRecF64_small_sqrt/ValExec_DivSqrtRecF64_small_sqrt.v:1142
    if (vlTOPp->reset) {
	vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT__value_1 = 0U;
    } else {
	if (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_8) {
	    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT__value_1 
		= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT__wrap_1)
		    ? 0U : (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_14));
	}
    }
    // ALWAYS at test-DivSqrtRecF64_small_sqrt/ValExec_DivSqrtRecF64_small_sqrt.v:292
    if (vlTOPp->reset) {
	vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum = VL_ULL(1);
    } else {
	if (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_52) {
	    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum 
		= vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_68;
	}
    }
    // ALWAYS at test-DivSqrtRecF64_small_sqrt/ValExec_DivSqrtRecF64_small_sqrt.v:292
    if (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering) {
	vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isZero_Z 
	    = (0U == (7U & ((vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds_io_a[2U] 
			     << 3U) | (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds_io_a[1U] 
				       >> 0x1dU))));
    }
    // ALWAYS at test-DivSqrtRecF64_small_sqrt/ValExec_DivSqrtRecF64_small_sqrt.v:1142
    if (((~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_5)) 
	 & (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq_io_enq_valid))) {
	vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT____Vlvbound4 
	    = vlTOPp->io_input_bits_out;
	if ((4U >= (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT__value))) {
	    __Vdlyvval__ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out__v0 
		= vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT____Vlvbound4;
	    __Vdlyvset__ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out__v0 = 1U;
	    __Vdlyvdim0__ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out__v0 
		= vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT__value;
	}
    }
    // ALWAYS at test-DivSqrtRecF64_small_sqrt/ValExec_DivSqrtRecF64_small_sqrt.v:292
    if (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering) {
	vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isInf_Z 
	    = vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_isInf;
    }
    // ALWAYS at test-DivSqrtRecF64_small_sqrt/ValExec_DivSqrtRecF64_small_sqrt.v:292
    if (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering) {
	vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sign_Z 
	    = (1U & vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds_io_a[2U]);
    }
    // ALWAYS at test-DivSqrtRecF64_small_sqrt/ValExec_DivSqrtRecF64_small_sqrt.v:292
    if (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering) {
	vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__majorExc_Z 
	    = (((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_isNaN) 
		& (~ (IData)((vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_sig 
			      >> 0x33U)))) | (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__notSigNaNIn_invalidExc_S_sqrt));
    }
    // ALWAYS at test-DivSqrtRecF64_small_sqrt/ValExec_DivSqrtRecF64_small_sqrt.v:292
    if (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering) {
	vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isNaN_Z 
	    = ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_isNaN) 
	       | (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__notSigNaNIn_invalidExc_S_sqrt));
    }
    // ALWAYS at test-DivSqrtRecF64_small_sqrt/ValExec_DivSqrtRecF64_small_sqrt.v:292
    if (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering_normalCase) {
	vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__roundingMode_Z 
	    = vlTOPp->io_input_bits_roundingMode;
    }
    // ALWAYS at test-DivSqrtRecF64_small_sqrt/ValExec_DivSqrtRecF64_small_sqrt.v:292
    if (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_125) {
	vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__notZeroRem_Z 
	    = (VL_ULL(0) != vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__trialRem);
    }
    // ALWAYS at test-DivSqrtRecF64_small_sqrt/ValExec_DivSqrtRecF64_small_sqrt.v:292
    if (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_125) {
	vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sigX_Z 
	    = vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_141;
    }
    // ALWAYS at test-DivSqrtRecF64_small_sqrt/ValExec_DivSqrtRecF64_small_sqrt.v:292
    if (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering_normalCase) {
	vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z 
	    = (0x1fffU & ((IData)(0x400U) + VL_EXTENDS_II(13,12, 
							  (0x7ffU 
							   & ((0x7ffff800U 
							       & (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds_io_a[2U] 
								  << 0xbU)) 
							      | (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds_io_a[1U] 
								 >> 0x15U))))));
    }
    // ALWAYSPOST at test-DivSqrtRecF64_small_sqrt/ValExec_DivSqrtRecF64_small_sqrt.v:1143
    if (__Vdlyvset__ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_a__v0) {
	vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_a[__Vdlyvdim0__ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_a__v0] 
	    = __Vdlyvval__ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_a__v0;
    }
    // ALWAYSPOST at test-DivSqrtRecF64_small_sqrt/ValExec_DivSqrtRecF64_small_sqrt.v:1149
    if (__Vdlyvset__ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_detectTininess__v0) {
	vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_detectTininess[__Vdlyvdim0__ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_detectTininess__v0] 
	    = __Vdlyvval__ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_detectTininess__v0;
    }
    // ALWAYSPOST at test-DivSqrtRecF64_small_sqrt/ValExec_DivSqrtRecF64_small_sqrt.v:1146
    if (__Vdlyvset__ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_roundingMode__v0) {
	vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_roundingMode[__Vdlyvdim0__ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_roundingMode__v0] 
	    = __Vdlyvval__ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_roundingMode__v0;
    }
    // ALWAYSPOST at test-DivSqrtRecF64_small_sqrt/ValExec_DivSqrtRecF64_small_sqrt.v:1155
    if (__Vdlyvset__ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_exceptionFlags__v0) {
	vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_exceptionFlags[__Vdlyvdim0__ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_exceptionFlags__v0] 
	    = __Vdlyvval__ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_exceptionFlags__v0;
    }
    // ALWAYSPOST at test-DivSqrtRecF64_small_sqrt/ValExec_DivSqrtRecF64_small_sqrt.v:1152
    if (__Vdlyvset__ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out__v0) {
	vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out[__Vdlyvdim0__ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out__v0] 
	    = __Vdlyvval__ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out__v0;
    }
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT__wrap_1 
	= (4U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT__value_1));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_14 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT__value_1)));
    vlTOPp->io_output_a = ((4U >= (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT__value_1))
			    ? vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_a
			   [vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT__value_1]
			    : VL_ULL(0));
    vlTOPp->io_output_roundingMode = ((4U >= (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT__value_1))
				       ? vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_roundingMode
				      [vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT__value_1]
				       : 0U);
    vlTOPp->io_output_detectTininess = ((4U >= (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT__value_1)) 
					& vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_detectTininess
					[vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT__value_1]);
    vlTOPp->io_expected_exceptionFlags = ((4U >= (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT__value_1))
					   ? vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_exceptionFlags
					  [vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT__value_1]
					   : 0U);
    vlTOPp->io_check = (1U & (IData)((vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum 
				      >> 1U)));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady 
	= (1U & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum) 
		 | (IData)((vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum 
			    >> 1U))));
    // ALWAYS at test-DivSqrtRecF64_small_sqrt/ValExec_DivSqrtRecF64_small_sqrt.v:1142
    if (vlTOPp->reset) {
	vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT__value = 0U;
    } else {
	if (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_6) {
	    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT__value 
		= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT__wrap)
		    ? 0U : (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_12));
	}
    }
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
	= ((4U >= (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT__value_1))
	    ? vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out
	   [vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT__value_1]
	    : VL_ULL(0));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_invalidExc 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__majorExc_Z) 
	   & (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isNaN_Z));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_infiniteExc 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__majorExc_Z) 
	   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isNaN_Z)));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_165 
	= ((0U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__roundingMode_Z)) 
	   | (4U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__roundingMode_Z)));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
	= (((2U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__roundingMode_Z)) 
	    & (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sign_Z)) 
	   | ((3U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__roundingMode_Z)) 
	      & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sign_Z))));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__skipCycle2 
	= (1U & ((IData)((vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum 
			  >> 3U)) & (IData)((vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sigX_Z 
					     >> 0x36U))));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig 
	= ((vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sigX_Z 
	    << 1U) | (QData)((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__notZeroRem_Z)));
    __Vtemp2[0U] = 0U;
    __Vtemp2[1U] = 0U;
    __Vtemp2[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp3, __Vtemp2, (0x3fU 
						 & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp6[0U] = 0U;
    __Vtemp6[1U] = 0U;
    __Vtemp6[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp7, __Vtemp6, (0x3fU 
						 & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_79 
	= ((0xffU & ((0x800U & (__Vtemp3[2U] << 0xbU)) 
		     | (__Vtemp3[1U] >> 0x15U))) | 
	   (0xff00U & ((0x8000000U & (__Vtemp7[2U] 
				      << 0x1bU)) | 
		       (0x7ffff00U & (__Vtemp7[1U] 
				      >> 5U)))));
    __Vtemp10[0U] = 0U;
    __Vtemp10[1U] = 0U;
    __Vtemp10[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp11, __Vtemp10, (0x3fU 
						   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp14[0U] = 0U;
    __Vtemp14[1U] = 0U;
    __Vtemp14[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp15, __Vtemp14, (0x3fU 
						   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_28 
	= ((0xffffU & ((__Vtemp11[1U] << 3U) | (__Vtemp11[0U] 
						>> 0x1dU))) 
	   | (0xffff0000U & (__Vtemp15[0U] << 3U)));
    vlTOPp->io_expected_out = vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data;
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT___T_259 
	= ((0U == (0x7ffU & (IData)((vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
				     >> 0x34U)))) & 
	   (VL_ULL(0) == (VL_ULL(0xfffffffffffff) & vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data)));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT___T_249 
	= ((1U & (IData)((vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
			  >> 0x33U))) ? 0U : ((1U & (IData)(
							    (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
							     >> 0x32U)))
					       ? 1U
					       : ((1U 
						   & (IData)(
							     (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
							      >> 0x31U)))
						   ? 2U
						   : 
						  ((1U 
						    & (IData)(
							      (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
							       >> 0x30U)))
						    ? 3U
						    : 
						   ((1U 
						     & (IData)(
							       (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
								>> 0x2fU)))
						     ? 4U
						     : 
						    ((1U 
						      & (IData)(
								(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
								 >> 0x2eU)))
						      ? 5U
						      : 
						     ((1U 
						       & (IData)(
								 (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
								  >> 0x2dU)))
						       ? 6U
						       : 
						      ((1U 
							& (IData)(
								  (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
								   >> 0x2cU)))
						        ? 7U
						        : 
						       ((1U 
							 & (IData)(
								   (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
								    >> 0x2bU)))
							 ? 8U
							 : 
							((1U 
							  & (IData)(
								    (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
								     >> 0x2aU)))
							  ? 9U
							  : 
							 ((1U 
							   & (IData)(
								     (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
								      >> 0x29U)))
							   ? 0xaU
							   : 
							  ((1U 
							    & (IData)(
								      (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
								       >> 0x28U)))
							    ? 0xbU
							    : 
							   ((1U 
							     & (IData)(
								       (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
									>> 0x27U)))
							     ? 0xcU
							     : 
							    ((1U 
							      & (IData)(
									(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
									 >> 0x26U)))
							      ? 0xdU
							      : 
							     ((1U 
							       & (IData)(
									 (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
									  >> 0x25U)))
							       ? 0xeU
							       : 
							      ((1U 
								& (IData)(
									  (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
									   >> 0x24U)))
							        ? 0xfU
							        : 
							       ((1U 
								 & (IData)(
									   (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
									    >> 0x23U)))
								 ? 0x10U
								 : 
								((1U 
								  & (IData)(
									    (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
									     >> 0x22U)))
								  ? 0x11U
								  : 
								 ((1U 
								   & (IData)(
									     (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
									      >> 0x21U)))
								   ? 0x12U
								   : 
								  ((1U 
								    & (IData)(
									      (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
									       >> 0x20U)))
								    ? 0x13U
								    : 
								   ((1U 
								     & (IData)(
									       (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0x1fU)))
								     ? 0x14U
								     : 
								    ((1U 
								      & (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0x1eU)))
								      ? 0x15U
								      : 
								     ((1U 
								       & (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0x1dU)))
								       ? 0x16U
								       : 
								      ((1U 
									& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0x1cU)))
								        ? 0x17U
								        : 
								       ((1U 
									 & (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0x1bU)))
									 ? 0x18U
									 : 
									((1U 
									  & (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0x1aU)))
									  ? 0x19U
									  : 
									 ((1U 
									   & (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0x19U)))
									   ? 0x1aU
									   : 
									  ((1U 
									    & (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0x18U)))
									    ? 0x1bU
									    : 
									   ((1U 
									     & (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0x17U)))
									     ? 0x1cU
									     : 
									    ((1U 
									      & (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0x16U)))
									      ? 0x1dU
									      : 
									     ((1U 
									       & (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0x15U)))
									       ? 0x1eU
									       : 
									      ((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0x14U)))
									        ? 0x1fU
									        : 
									       ((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0x13U)))
										 ? 0x20U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0x12U)))
										 ? 0x21U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0x11U)))
										 ? 0x22U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0x10U)))
										 ? 0x23U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0xfU)))
										 ? 0x24U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0xeU)))
										 ? 0x25U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0xdU)))
										 ? 0x26U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0xcU)))
										 ? 0x27U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0xbU)))
										 ? 0x28U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0xaU)))
										 ? 0x29U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 9U)))
										 ? 0x2aU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 8U)))
										 ? 0x2bU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 7U)))
										 ? 0x2cU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 6U)))
										 ? 0x2dU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 5U)))
										 ? 0x2eU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 4U)))
										 ? 0x2fU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 3U)))
										 ? 0x30U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 2U)))
										 ? 0x31U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 1U)))
										 ? 0x32U
										 : 0x33U)))))))))))))))))))))))))))))))))))))))))))))))))));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_invalidExc) 
	   | (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isNaN_Z));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_infiniteExc) 
	   | (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isInf_Z));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_165) 
	   | (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_89 
	= ((0xf0fU & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_79) 
		      >> 4U)) | (0xf0f0U & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_79) 
					    << 4U)));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_38 
	= ((0xff00ffU & (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_28 
			 >> 8U)) | (0xff00ff00U & (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_28 
						   << 8U)));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT__wrap 
	= (4U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT__value));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_12 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT__value)));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_2 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT__value) 
	   == (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT__value_1));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT___T_258 
	= (0xfffU & (((0U == (0x7ffU & (IData)((vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
						>> 0x34U))))
		       ? (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT___T_249))
		       : (0x7ffU & (IData)((vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
					    >> 0x34U)))) 
		     + (0x400U | ((0U == (0x7ffU & (IData)(
							   (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
							    >> 0x34U))))
				   ? 2U : 1U))));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
	= (1U & (((~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
		  & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut))) 
		 & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isZero_Z))));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_99 
	= ((0x3333U & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_89) 
		       >> 2U)) | (0xccccU & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_89) 
					     << 2U)));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_48 
	= ((0xf0f0f0fU & (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_38 
			  >> 4U)) | (0xf0f0f0f0U & 
				     (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_38 
				      << 4U)));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_4 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_2) 
	   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_1)));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_5 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_2) 
	   & (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_1));
    VL_EXTEND_WQ(115,52, __Vtemp18, (VL_ULL(0xfffffffffffff) 
				     & vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data));
    VL_SHIFTL_WWI(115,115,6, __Vtemp19, __Vtemp18, (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT___T_249));
    __Vtemp21[1U] = ((0xe0000000U & ((((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT___T_259)
				        ? 0U : ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT___T_258) 
						>> 9U)) 
				      | ((3U == (3U 
						 & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT___T_258) 
						    >> 0xaU))) 
					 & (VL_ULL(0) 
					    != (VL_ULL(0xfffffffffffff) 
						& vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data)))) 
				     << 0x1dU)) | (IData)(
							  ((((QData)((IData)(
									     (0x1ffU 
									      & (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT___T_258)))) 
							     << 0x34U) 
							    | (VL_ULL(0xfffffffffffff) 
							       & ((0U 
								   == 
								   (0x7ffU 
								    & (IData)(
									      (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
									       >> 0x34U))))
								   ? 
								  (VL_ULL(0xffffffffffffe) 
								   & (((QData)((IData)(
										__Vtemp19[1U])) 
								       << 0x21U) 
								      | ((QData)((IData)(
										__Vtemp19[0U])) 
									 << 1U)))
								   : vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data))) 
							   >> 0x20U)));
    vlTOPp->io_expected_recOut[0U] = (IData)((((QData)((IData)(
							       (0x1ffU 
								& (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT___T_258)))) 
					       << 0x34U) 
					      | (VL_ULL(0xfffffffffffff) 
						 & ((0U 
						     == 
						     (0x7ffU 
						      & (IData)(
								(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
								 >> 0x34U))))
						     ? 
						    (VL_ULL(0xffffffffffffe) 
						     & (((QData)((IData)(
									 __Vtemp19[1U])) 
							 << 0x21U) 
							| ((QData)((IData)(
									   __Vtemp19[0U])) 
							   << 1U)))
						     : vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data))));
    vlTOPp->io_expected_recOut[1U] = __Vtemp21[1U];
    vlTOPp->io_expected_recOut[2U] = (1U & (IData)(
						   (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
						    >> 0x3fU)));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_58 
	= ((0x33333333U & (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_48 
			   >> 2U)) | (0xccccccccU & 
				      (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_48 
				       << 2U)));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_8 
	= (1U & ((IData)((vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum 
			  >> 1U)) & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_4))));
    vlTOPp->io_input_ready = ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady) 
			      & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_5)));
    __Vtemp23[0U] = 0U;
    __Vtemp23[1U] = 0U;
    __Vtemp23[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp24, __Vtemp23, (0x3fU 
						   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp27[0U] = 0U;
    __Vtemp27[1U] = 0U;
    __Vtemp27[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp28, __Vtemp27, (0x3fU 
						   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp31[0U] = 0U;
    __Vtemp31[1U] = 0U;
    __Vtemp31[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp32, __Vtemp31, (0x3fU 
						   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp35[0U] = 0U;
    __Vtemp35[1U] = 0U;
    __Vtemp35[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp36, __Vtemp35, (0x3fU 
						   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp39[0U] = 0U;
    __Vtemp39[1U] = 0U;
    __Vtemp39[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp40, __Vtemp39, (0x3fU 
						   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp43[0U] = 0U;
    __Vtemp43[1U] = 0U;
    __Vtemp43[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp44, __Vtemp43, (0x3fU 
						   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_154 
	= (((0x800U & (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))
	     ? VL_ULL(0) : ((0x400U & (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))
			     ? (QData)((IData)(((0x200U 
						 & (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))
						 ? 0U
						 : 
						((0x100U 
						  & (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))
						  ? 0U
						  : 
						 ((0x80U 
						   & (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))
						   ? 0U
						   : 
						  ((0x40U 
						    & (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))
						    ? 0U
						    : 
						   ((4U 
						     & (__Vtemp24[0U] 
							<< 2U)) 
						    | ((2U 
							& __Vtemp28[0U]) 
						       | (1U 
							  & (__Vtemp32[0U] 
							     >> 2U))))))))))
			     : (VL_ULL(7) | (VL_ULL(0x3ffffffffffff8) 
					     & ((~ 
						 ((0x200U 
						   & (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))
						   ? 
						  ((0x100U 
						    & (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))
						    ? 
						   ((0x80U 
						     & (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))
						     ? 
						    ((0x40U 
						      & (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))
						      ? 
						     (~ 
						      (((QData)((IData)(
									((0x55555555U 
									  & (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_58 
									     >> 1U)) 
									 | (0xaaaaaaaaU 
									    & (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_58 
									       << 1U))))) 
							<< 0x13U) 
						       | (QData)((IData)(
									 (((0x2aaa8U 
									    & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_99) 
									       << 2U)) 
									   | (0x55550U 
									      & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_99) 
										<< 4U))) 
									  | ((4U 
									      & (__Vtemp36[1U] 
										>> 0x1bU)) 
									     | ((2U 
										& (__Vtemp40[1U] 
										>> 0x1dU)) 
										| (1U 
										& (__Vtemp44[1U] 
										>> 0x1fU)))))))))
						      : VL_ULL(0))
						     : VL_ULL(0))
						    : VL_ULL(0))
						   : VL_ULL(0))) 
						<< 3U))))) 
	   | (QData)((IData)((1U & (IData)((vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig 
					    >> 0x37U))))));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_162 
	= (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig 
	   & (VL_ULL(1) | (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_154 
			   << 1U)));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_159 
	= ((~ (VL_ULL(1) | (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_154 
			    << 1U))) & (VL_ULL(3) | 
					(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_154 
					 << 2U)));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_160 
	= (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig 
	   & vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_159);
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_164 
	= ((VL_ULL(0) != vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_160) 
	   | (VL_ULL(0) != vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_162));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_186 
	= (VL_ULL(0x7fffffffffffff) & ((((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_165) 
					 & (VL_ULL(0) 
					    != vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_160)) 
					| ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
					   & (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_164)))
				        ? ((VL_ULL(1) 
					    + (VL_ULL(0x3fffffffffffff) 
					       & ((vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig 
						   >> 2U) 
						  | (VL_ULL(0x3fffffffffffffff) 
						     & vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_154)))) 
					   & (~ (((
						   (0U 
						    == (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__roundingMode_Z)) 
						   & (VL_ULL(0) 
						      != vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_160)) 
						  & (VL_ULL(0) 
						     == vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_162))
						  ? 
						 (VL_ULL(1) 
						  | (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_154 
						     << 1U))
						  : VL_ULL(0))))
				        : ((VL_ULL(0x3fffffffffffff) 
					    & ((vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig 
						& (~ 
						   (VL_ULL(3) 
						    | (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_154 
						       << 2U)))) 
					       >> 2U)) 
					   | (((6U 
						== (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__roundingMode_Z)) 
					       & (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_164))
					       ? (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_159 
						  >> 1U)
					       : VL_ULL(0)))));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189 
	= (0x3fffU & (VL_EXTENDS_II(14,13, (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z)) 
		      + VL_EXTENDS_II(14,13, (3U & (IData)(
							   (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_186 
							    >> 0x35U))))));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut 
	= (((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
	    & VL_GTS_III(1,14,14, 0x3ceU, (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189))) 
	   & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
	      | (6U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__roundingMode_Z))));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
	   & VL_LTES_III(1,4,4, 3U, (0xfU & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189) 
					     >> 0xaU))));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
	   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut) 
	   | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
	      & (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    __Vtemp46[0U] = (IData)((((QData)((IData)((0xfffU 
					       & (((((((((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189) 
							 & (~ 
							    (((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isZero_Z) 
							      | VL_GTS_III(1,14,14, 0x3ceU, (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189)))
							      ? 0xe00U
							      : 0U))) 
							& (~ 
							   ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
							     ? 0xc31U
							     : 0U))) 
						       & (~ 
							  ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
							    ? 0x400U
							    : 0U))) 
						      & (~ 
							 ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
							   ? 0x200U
							   : 0U))) 
						     | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
							 ? 0x3ceU
							 : 0U)) 
						    | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
						        ? 0xbffU
						        : 0U)) 
						   | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
						       ? 0xc00U
						       : 0U)) 
						  | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
						      ? 0xe00U
						      : 0U))))) 
			      << 0x34U) | (VL_ULL(0xfffffffffffff) 
					   & (((((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
						 | (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isZero_Z)) 
						| VL_GTS_III(1,14,14, 0x3ceU, (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189)))
					        ? ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
						    ? VL_ULL(0x8000000000000)
						    : VL_ULL(0))
					        : (
						   (1U 
						    & (IData)(
							      (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig 
							       >> 0x37U)))
						    ? 
						   (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_186 
						    >> 1U)
						    : vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_186)) 
					      | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
						  ? VL_ULL(0xfffffffffffff)
						  : VL_ULL(0))))));
    __Vtemp46[1U] = (IData)(((((QData)((IData)((0xfffU 
						& (((((((((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189) 
							  & (~ 
							     (((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isZero_Z) 
							       | VL_GTS_III(1,14,14, 0x3ceU, (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189)))
							       ? 0xe00U
							       : 0U))) 
							 & (~ 
							    ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
							      ? 0xc31U
							      : 0U))) 
							& (~ 
							   ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
							     ? 0x400U
							     : 0U))) 
						       & (~ 
							  ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
							    ? 0x200U
							    : 0U))) 
						      | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
							  ? 0x3ceU
							  : 0U)) 
						     | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
							 ? 0xbffU
							 : 0U)) 
						    | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
						        ? 0xc00U
						        : 0U)) 
						   | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
						       ? 0xe00U
						       : 0U))))) 
			       << 0x34U) | (VL_ULL(0xfffffffffffff) 
					    & (((((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
						  | (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isZero_Z)) 
						 | VL_GTS_III(1,14,14, 0x3ceU, (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189)))
						 ? 
						((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
						  ? VL_ULL(0x8000000000000)
						  : VL_ULL(0))
						 : 
						((1U 
						  & (IData)(
							    (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig 
							     >> 0x37U)))
						  ? 
						 (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_186 
						  >> 1U)
						  : vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_186)) 
					       | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
						   ? VL_ULL(0xfffffffffffff)
						   : VL_ULL(0))))) 
			     >> 0x20U));
    vlTOPp->io_actual_out[0U] = __Vtemp46[0U];
    vlTOPp->io_actual_out[1U] = __Vtemp46[1U];
    vlTOPp->io_actual_out[2U] = ((~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
				 & (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sign_Z));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT___T_288 
	= ((0xfU & ((vlTOPp->io_actual_out[2U] << 3U) 
		    | (vlTOPp->io_actual_out[1U] >> 0x1dU))) 
	   == (0xfU & ((vlTOPp->io_expected_recOut[2U] 
			<< 3U) | (vlTOPp->io_expected_recOut[1U] 
				  >> 0x1dU))));
}

VL_INLINE_OPT void dut::_combo__TOP__2(dut__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    dut::_combo__TOP__2\n"); );
    dut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp48,127,0,4);
    VL_SIGW(__Vtemp49,127,0,4);
    VL_SIGW(__Vtemp51,95,0,3);
    // Body
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT___T_120 
	= ((0U == (0x7ffU & (IData)((vlTOPp->io_input_bits_a 
				     >> 0x34U)))) & 
	   (VL_ULL(0) == (VL_ULL(0xfffffffffffff) & vlTOPp->io_input_bits_a)));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT___T_110 
	= ((1U & (IData)((vlTOPp->io_input_bits_a >> 0x33U)))
	    ? 0U : ((1U & (IData)((vlTOPp->io_input_bits_a 
				   >> 0x32U))) ? 1U
		     : ((1U & (IData)((vlTOPp->io_input_bits_a 
				       >> 0x31U))) ? 2U
			 : ((1U & (IData)((vlTOPp->io_input_bits_a 
					   >> 0x30U)))
			     ? 3U : ((1U & (IData)(
						   (vlTOPp->io_input_bits_a 
						    >> 0x2fU)))
				      ? 4U : ((1U & (IData)(
							    (vlTOPp->io_input_bits_a 
							     >> 0x2eU)))
					       ? 5U
					       : ((1U 
						   & (IData)(
							     (vlTOPp->io_input_bits_a 
							      >> 0x2dU)))
						   ? 6U
						   : 
						  ((1U 
						    & (IData)(
							      (vlTOPp->io_input_bits_a 
							       >> 0x2cU)))
						    ? 7U
						    : 
						   ((1U 
						     & (IData)(
							       (vlTOPp->io_input_bits_a 
								>> 0x2bU)))
						     ? 8U
						     : 
						    ((1U 
						      & (IData)(
								(vlTOPp->io_input_bits_a 
								 >> 0x2aU)))
						      ? 9U
						      : 
						     ((1U 
						       & (IData)(
								 (vlTOPp->io_input_bits_a 
								  >> 0x29U)))
						       ? 0xaU
						       : 
						      ((1U 
							& (IData)(
								  (vlTOPp->io_input_bits_a 
								   >> 0x28U)))
						        ? 0xbU
						        : 
						       ((1U 
							 & (IData)(
								   (vlTOPp->io_input_bits_a 
								    >> 0x27U)))
							 ? 0xcU
							 : 
							((1U 
							  & (IData)(
								    (vlTOPp->io_input_bits_a 
								     >> 0x26U)))
							  ? 0xdU
							  : 
							 ((1U 
							   & (IData)(
								     (vlTOPp->io_input_bits_a 
								      >> 0x25U)))
							   ? 0xeU
							   : 
							  ((1U 
							    & (IData)(
								      (vlTOPp->io_input_bits_a 
								       >> 0x24U)))
							    ? 0xfU
							    : 
							   ((1U 
							     & (IData)(
								       (vlTOPp->io_input_bits_a 
									>> 0x23U)))
							     ? 0x10U
							     : 
							    ((1U 
							      & (IData)(
									(vlTOPp->io_input_bits_a 
									 >> 0x22U)))
							      ? 0x11U
							      : 
							     ((1U 
							       & (IData)(
									 (vlTOPp->io_input_bits_a 
									  >> 0x21U)))
							       ? 0x12U
							       : 
							      ((1U 
								& (IData)(
									  (vlTOPp->io_input_bits_a 
									   >> 0x20U)))
							        ? 0x13U
							        : 
							       ((1U 
								 & (IData)(
									   (vlTOPp->io_input_bits_a 
									    >> 0x1fU)))
								 ? 0x14U
								 : 
								((1U 
								  & (IData)(
									    (vlTOPp->io_input_bits_a 
									     >> 0x1eU)))
								  ? 0x15U
								  : 
								 ((1U 
								   & (IData)(
									     (vlTOPp->io_input_bits_a 
									      >> 0x1dU)))
								   ? 0x16U
								   : 
								  ((1U 
								    & (IData)(
									      (vlTOPp->io_input_bits_a 
									       >> 0x1cU)))
								    ? 0x17U
								    : 
								   ((1U 
								     & (IData)(
									       (vlTOPp->io_input_bits_a 
										>> 0x1bU)))
								     ? 0x18U
								     : 
								    ((1U 
								      & (IData)(
										(vlTOPp->io_input_bits_a 
										>> 0x1aU)))
								      ? 0x19U
								      : 
								     ((1U 
								       & (IData)(
										(vlTOPp->io_input_bits_a 
										>> 0x19U)))
								       ? 0x1aU
								       : 
								      ((1U 
									& (IData)(
										(vlTOPp->io_input_bits_a 
										>> 0x18U)))
								        ? 0x1bU
								        : 
								       ((1U 
									 & (IData)(
										(vlTOPp->io_input_bits_a 
										>> 0x17U)))
									 ? 0x1cU
									 : 
									((1U 
									  & (IData)(
										(vlTOPp->io_input_bits_a 
										>> 0x16U)))
									  ? 0x1dU
									  : 
									 ((1U 
									   & (IData)(
										(vlTOPp->io_input_bits_a 
										>> 0x15U)))
									   ? 0x1eU
									   : 
									  ((1U 
									    & (IData)(
										(vlTOPp->io_input_bits_a 
										>> 0x14U)))
									    ? 0x1fU
									    : 
									   ((1U 
									     & (IData)(
										(vlTOPp->io_input_bits_a 
										>> 0x13U)))
									     ? 0x20U
									     : 
									    ((1U 
									      & (IData)(
										(vlTOPp->io_input_bits_a 
										>> 0x12U)))
									      ? 0x21U
									      : 
									     ((1U 
									       & (IData)(
										(vlTOPp->io_input_bits_a 
										>> 0x11U)))
									       ? 0x22U
									       : 
									      ((1U 
										& (IData)(
										(vlTOPp->io_input_bits_a 
										>> 0x10U)))
									        ? 0x23U
									        : 
									       ((1U 
										& (IData)(
										(vlTOPp->io_input_bits_a 
										>> 0xfU)))
										 ? 0x24U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_input_bits_a 
										>> 0xeU)))
										 ? 0x25U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_input_bits_a 
										>> 0xdU)))
										 ? 0x26U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_input_bits_a 
										>> 0xcU)))
										 ? 0x27U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_input_bits_a 
										>> 0xbU)))
										 ? 0x28U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_input_bits_a 
										>> 0xaU)))
										 ? 0x29U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_input_bits_a 
										>> 9U)))
										 ? 0x2aU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_input_bits_a 
										>> 8U)))
										 ? 0x2bU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_input_bits_a 
										>> 7U)))
										 ? 0x2cU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_input_bits_a 
										>> 6U)))
										 ? 0x2dU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_input_bits_a 
										>> 5U)))
										 ? 0x2eU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_input_bits_a 
										>> 4U)))
										 ? 0x2fU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_input_bits_a 
										>> 3U)))
										 ? 0x30U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_input_bits_a 
										>> 2U)))
										 ? 0x31U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_input_bits_a 
										>> 1U)))
										 ? 0x32U
										 : 0x33U)))))))))))))))))))))))))))))))))))))))))))))))))));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq_io_enq_valid 
	= ((IData)(vlTOPp->io_input_valid) & (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady) 
	   & ((IData)(vlTOPp->io_input_valid) & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_5))));
    vlTOPp->io_actual_exceptionFlags = ((((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_invalidExc) 
					  << 4U) | 
					 (((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_infiniteExc) 
					   << 3U) | 
					  ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
					   << 2U))) 
					| ((((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
					     & (VL_GTS_III(1,14,14, 0x3ceU, (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189)) 
						| ((((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_164) 
						     & VL_GTES_III(1,2,2, 0U, 
								   (3U 
								    & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z) 
								       >> 0xbU)))) 
						    & ((1U 
							& (IData)(
								  (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig 
								   >> 0x37U)))
						        ? (IData)(
								  (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_154 
								   >> 1U))
						        : (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_154))) 
						   & (~ 
						      (((((IData)(vlTOPp->io_input_bits_detectTininess) 
							  & (~ 
							     ((1U 
							       & (IData)(
									 (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig 
									  >> 0x37U)))
							       ? (IData)(
									 (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_154 
									  >> 2U))
							       : (IData)(
									 (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_154 
									  >> 1U))))) 
							 & ((1U 
							     & (IData)(
								       (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig 
									>> 0x37U)))
							     ? (IData)(
								       (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_186 
									>> 0x36U))
							     : (IData)(
								       (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_186 
									>> 0x35U)))) 
							& (VL_ULL(0) 
							   != vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_160)) 
						       & (((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_165) 
							   & ((1U 
							       & (IData)(
									 (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig 
									  >> 0x37U)))
							       ? (IData)(
									 (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig 
									  >> 2U))
							       : (IData)(
									 (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig 
									  >> 1U)))) 
							  | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
							     & (((IData)(
									 (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig 
									  >> 0x37U)) 
								 & (IData)(
									   (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig 
									    >> 2U))) 
								| (0U 
								   != 
								   (3U 
								    & (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig))))))))))) 
					    << 1U) 
					   | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
					      | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
						 & (VL_GTS_III(1,14,14, 0x3ceU, (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189)) 
						    | (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_164))))));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT___T_119 
	= (0xfffU & (((0U == (0x7ffU & (IData)((vlTOPp->io_input_bits_a 
						>> 0x34U))))
		       ? (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT___T_110))
		       : (0x7ffU & (IData)((vlTOPp->io_input_bits_a 
					    >> 0x34U)))) 
		     + (0x400U | ((0U == (0x7ffU & (IData)(
							   (vlTOPp->io_input_bits_a 
							    >> 0x34U))))
				   ? 2U : 1U))));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_6 
	= ((~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_5)) 
	   & (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq_io_enq_valid));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_52 
	= (1U & ((~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum)) 
		 | (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering)));
    vlTOPp->io_pass = (((~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_4)) 
			& (((0U == (7U & ((vlTOPp->io_actual_out[2U] 
					   << 3U) | 
					  (vlTOPp->io_actual_out[1U] 
					   >> 0x1dU)))) 
			    | (7U == (7U & ((vlTOPp->io_actual_out[2U] 
					     << 3U) 
					    | (vlTOPp->io_actual_out[1U] 
					       >> 0x1dU)))))
			    ? ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT___T_288) 
			       & ((VL_ULL(0xfffffffffffff) 
				   & (((QData)((IData)(
						       vlTOPp->io_actual_out[1U])) 
				       << 0x20U) | (QData)((IData)(
								   vlTOPp->io_actual_out[0U])))) 
				  == (VL_ULL(0xfffffffffffff) 
				      & (((QData)((IData)(
							  vlTOPp->io_expected_recOut[1U])) 
					  << 0x20U) 
					 | (QData)((IData)(
							   vlTOPp->io_expected_recOut[0U]))))))
			    : ((6U == (7U & ((vlTOPp->io_actual_out[2U] 
					      << 3U) 
					     | (vlTOPp->io_actual_out[1U] 
						>> 0x1dU))))
			        ? (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT___T_288)
			        : (0U == (((vlTOPp->io_actual_out[0U] 
					    ^ vlTOPp->io_expected_recOut[0U]) 
					   | (vlTOPp->io_actual_out[1U] 
					      ^ vlTOPp->io_expected_recOut[1U])) 
					  | (vlTOPp->io_actual_out[2U] 
					     ^ vlTOPp->io_expected_recOut[2U])))))) 
		       & ((IData)(vlTOPp->io_actual_exceptionFlags) 
			  == (IData)(vlTOPp->io_expected_exceptionFlags)));
    VL_EXTEND_WQ(115,52, __Vtemp48, (VL_ULL(0xfffffffffffff) 
				     & vlTOPp->io_input_bits_a));
    VL_SHIFTL_WWI(115,115,6, __Vtemp49, __Vtemp48, (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT___T_110));
    __Vtemp51[1U] = ((0xe0000000U & ((((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT___T_120)
				        ? 0U : ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT___T_119) 
						>> 9U)) 
				      | ((3U == (3U 
						 & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT___T_119) 
						    >> 0xaU))) 
					 & (VL_ULL(0) 
					    != (VL_ULL(0xfffffffffffff) 
						& vlTOPp->io_input_bits_a)))) 
				     << 0x1dU)) | (IData)(
							  ((((QData)((IData)(
									     (0x1ffU 
									      & (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT___T_119)))) 
							     << 0x34U) 
							    | (VL_ULL(0xfffffffffffff) 
							       & ((0U 
								   == 
								   (0x7ffU 
								    & (IData)(
									      (vlTOPp->io_input_bits_a 
									       >> 0x34U))))
								   ? 
								  (VL_ULL(0xffffffffffffe) 
								   & (((QData)((IData)(
										__Vtemp49[1U])) 
								       << 0x21U) 
								      | ((QData)((IData)(
										__Vtemp49[0U])) 
									 << 1U)))
								   : vlTOPp->io_input_bits_a))) 
							   >> 0x20U)));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds_io_a[0U] 
	= (IData)((((QData)((IData)((0x1ffU & (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT___T_119)))) 
		    << 0x34U) | (VL_ULL(0xfffffffffffff) 
				 & ((0U == (0x7ffU 
					    & (IData)(
						      (vlTOPp->io_input_bits_a 
						       >> 0x34U))))
				     ? (VL_ULL(0xffffffffffffe) 
					& (((QData)((IData)(
							    __Vtemp49[1U])) 
					    << 0x21U) 
					   | ((QData)((IData)(
							      __Vtemp49[0U])) 
					      << 1U)))
				     : vlTOPp->io_input_bits_a))));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds_io_a[1U] 
	= __Vtemp51[1U];
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds_io_a[2U] 
	= (1U & (IData)((vlTOPp->io_input_bits_a >> 0x3fU)));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_sig 
	= (((QData)((IData)((0U != (7U & ((vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds_io_a[2U] 
					   << 3U) | 
					  (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds_io_a[1U] 
					   >> 0x1dU)))))) 
	    << 0x34U) | (VL_ULL(0xfffffffffffff) & 
			 (((QData)((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds_io_a[1U])) 
			   << 0x20U) | (QData)((IData)(
						       vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds_io_a[0U])))));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_isInf 
	= ((3U == (3U & ((vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds_io_a[2U] 
			  << 2U) | (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds_io_a[1U] 
				    >> 0x1eU)))) & 
	   (~ (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds_io_a[1U] 
	       >> 0x1dU)));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_isNaN 
	= ((3U == (3U & ((vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds_io_a[2U] 
			  << 2U) | (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds_io_a[1U] 
				    >> 0x1eU)))) & 
	   (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds_io_a[1U] 
	    >> 0x1dU));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_76 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady) 
	   & (~ (0xfffU & ((vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds_io_a[2U] 
			    << 0xcU) | (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds_io_a[1U] 
					>> 0x14U)))));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_79 
	= (0xfffU & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady) 
		     & ((vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds_io_a[2U] 
			 << 0xcU) | (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds_io_a[1U] 
				     >> 0x14U))));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__notSigNaNIn_invalidExc_S_sqrt 
	= (((~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_isNaN)) 
	    & (0U != (7U & ((vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds_io_a[2U] 
			     << 3U) | (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds_io_a[1U] 
				       >> 0x1dU))))) 
	   & vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds_io_a[2U]);
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__normalCase_S_sqrt 
	= (1U & ((~ (((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_isNaN) 
		      | (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_isInf)) 
		     | (0U == (7U & ((vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds_io_a[2U] 
				      << 3U) | (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds_io_a[1U] 
						>> 0x1dU)))))) 
		 & (~ vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds_io_a[2U])));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__rem 
	= ((((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_76)
	      ? (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_sig 
		 << 1U) : VL_ULL(0)) | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_79)
					 ? (((QData)((IData)(
							     (3U 
							      & ((IData)(
									 (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_sig 
									  >> 0x33U)) 
								 - (IData)(1U))))) 
					     << 0x36U) 
					    | (VL_ULL(0x3ffffffffffff8) 
					       & (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_sig 
						  << 3U)))
					 : VL_ULL(0))) 
	   | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady)
	       ? VL_ULL(0) : (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__rem_Z 
			      << 1U)));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__trialTerm 
	= ((((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_76)
	      ? VL_ULL(0x20000000000000) : VL_ULL(0)) 
	    | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_79)
	        ? VL_ULL(0x50000000000000) : VL_ULL(0))) 
	   | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady)
	       ? VL_ULL(0) : ((vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sigX_Z 
			       << 1U) | (VL_ULL(0x3fffffffffffff) 
					 & (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum 
					    >> 2U)))));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering_normalCase 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering) 
	   & (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__normalCase_S_sqrt));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__trialRem 
	= (VL_ULL(0x1ffffffffffffff) & (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__rem 
					- vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__trialTerm));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_68 
	= ((((QData)((IData)((((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering) 
			       & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__normalCase_S_sqrt)))
			       ? 2U : 0U))) | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering_normalCase)
					        ? (
						   (1U 
						    & ((vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds_io_a[2U] 
							<< 0xcU) 
						       | (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds_io_a[1U] 
							  >> 0x14U)))
						    ? VL_ULL(0x20000000000000)
						    : VL_ULL(0x40000000000000))
					        : VL_ULL(0))) 
	    | (VL_ULL(0x7fffffffffffff) & ((1U & ((~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering)) 
						  & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__skipCycle2))))
					    ? (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum 
					       >> 1U)
					    : VL_ULL(0)))) 
	   | (QData)((IData)(((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__skipCycle2)
			       ? 2U : 0U))));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_141 
	= ((((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady)
	      ? VL_ULL(0x20000000000000) : VL_ULL(0)) 
	    | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_79)
	        ? ((QData)((IData)(VL_LTES_IQQ(1,57,57, VL_ULL(0), vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__trialRem))) 
		   << 0x34U) : VL_ULL(0))) | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady)
					       ? VL_ULL(0)
					       : (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sigX_Z 
						  | (VL_ULL(0x3fffffffffffff) 
						     & (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum 
							>> 2U)))));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_125 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering_normalCase) 
	   | ((~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady)) 
	      & VL_LTES_IQQ(1,57,57, VL_ULL(0), vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__trialRem)));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___GEN_10 
	= (VL_ULL(0x1ffffffffffffff) & ((1U & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering_normalCase) 
					       | (~ 
						  ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum) 
						   | (IData)(
							     (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum 
							      >> 2U))))))
					 ? (VL_LTES_IQQ(1,57,57, VL_ULL(0), vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__trialRem)
					     ? (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__rem 
						- vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__trialTerm)
					     : vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__rem)
					 : vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__rem_Z));
}

void dut::_settle__TOP__3(dut__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    dut::_settle__TOP__3\n"); );
    dut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp53,95,0,3);
    VL_SIGW(__Vtemp54,95,0,3);
    VL_SIGW(__Vtemp57,95,0,3);
    VL_SIGW(__Vtemp58,95,0,3);
    VL_SIGW(__Vtemp61,95,0,3);
    VL_SIGW(__Vtemp62,95,0,3);
    VL_SIGW(__Vtemp65,95,0,3);
    VL_SIGW(__Vtemp66,95,0,3);
    VL_SIGW(__Vtemp69,127,0,4);
    VL_SIGW(__Vtemp70,127,0,4);
    VL_SIGW(__Vtemp72,95,0,3);
    VL_SIGW(__Vtemp74,127,0,4);
    VL_SIGW(__Vtemp75,127,0,4);
    VL_SIGW(__Vtemp77,95,0,3);
    VL_SIGW(__Vtemp79,95,0,3);
    VL_SIGW(__Vtemp80,95,0,3);
    VL_SIGW(__Vtemp83,95,0,3);
    VL_SIGW(__Vtemp84,95,0,3);
    VL_SIGW(__Vtemp87,95,0,3);
    VL_SIGW(__Vtemp88,95,0,3);
    VL_SIGW(__Vtemp91,95,0,3);
    VL_SIGW(__Vtemp92,95,0,3);
    VL_SIGW(__Vtemp95,95,0,3);
    VL_SIGW(__Vtemp96,95,0,3);
    VL_SIGW(__Vtemp99,95,0,3);
    VL_SIGW(__Vtemp100,95,0,3);
    VL_SIGW(__Vtemp102,95,0,3);
    // Body
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT___T_120 
	= ((0U == (0x7ffU & (IData)((vlTOPp->io_input_bits_a 
				     >> 0x34U)))) & 
	   (VL_ULL(0) == (VL_ULL(0xfffffffffffff) & vlTOPp->io_input_bits_a)));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT___T_110 
	= ((1U & (IData)((vlTOPp->io_input_bits_a >> 0x33U)))
	    ? 0U : ((1U & (IData)((vlTOPp->io_input_bits_a 
				   >> 0x32U))) ? 1U
		     : ((1U & (IData)((vlTOPp->io_input_bits_a 
				       >> 0x31U))) ? 2U
			 : ((1U & (IData)((vlTOPp->io_input_bits_a 
					   >> 0x30U)))
			     ? 3U : ((1U & (IData)(
						   (vlTOPp->io_input_bits_a 
						    >> 0x2fU)))
				      ? 4U : ((1U & (IData)(
							    (vlTOPp->io_input_bits_a 
							     >> 0x2eU)))
					       ? 5U
					       : ((1U 
						   & (IData)(
							     (vlTOPp->io_input_bits_a 
							      >> 0x2dU)))
						   ? 6U
						   : 
						  ((1U 
						    & (IData)(
							      (vlTOPp->io_input_bits_a 
							       >> 0x2cU)))
						    ? 7U
						    : 
						   ((1U 
						     & (IData)(
							       (vlTOPp->io_input_bits_a 
								>> 0x2bU)))
						     ? 8U
						     : 
						    ((1U 
						      & (IData)(
								(vlTOPp->io_input_bits_a 
								 >> 0x2aU)))
						      ? 9U
						      : 
						     ((1U 
						       & (IData)(
								 (vlTOPp->io_input_bits_a 
								  >> 0x29U)))
						       ? 0xaU
						       : 
						      ((1U 
							& (IData)(
								  (vlTOPp->io_input_bits_a 
								   >> 0x28U)))
						        ? 0xbU
						        : 
						       ((1U 
							 & (IData)(
								   (vlTOPp->io_input_bits_a 
								    >> 0x27U)))
							 ? 0xcU
							 : 
							((1U 
							  & (IData)(
								    (vlTOPp->io_input_bits_a 
								     >> 0x26U)))
							  ? 0xdU
							  : 
							 ((1U 
							   & (IData)(
								     (vlTOPp->io_input_bits_a 
								      >> 0x25U)))
							   ? 0xeU
							   : 
							  ((1U 
							    & (IData)(
								      (vlTOPp->io_input_bits_a 
								       >> 0x24U)))
							    ? 0xfU
							    : 
							   ((1U 
							     & (IData)(
								       (vlTOPp->io_input_bits_a 
									>> 0x23U)))
							     ? 0x10U
							     : 
							    ((1U 
							      & (IData)(
									(vlTOPp->io_input_bits_a 
									 >> 0x22U)))
							      ? 0x11U
							      : 
							     ((1U 
							       & (IData)(
									 (vlTOPp->io_input_bits_a 
									  >> 0x21U)))
							       ? 0x12U
							       : 
							      ((1U 
								& (IData)(
									  (vlTOPp->io_input_bits_a 
									   >> 0x20U)))
							        ? 0x13U
							        : 
							       ((1U 
								 & (IData)(
									   (vlTOPp->io_input_bits_a 
									    >> 0x1fU)))
								 ? 0x14U
								 : 
								((1U 
								  & (IData)(
									    (vlTOPp->io_input_bits_a 
									     >> 0x1eU)))
								  ? 0x15U
								  : 
								 ((1U 
								   & (IData)(
									     (vlTOPp->io_input_bits_a 
									      >> 0x1dU)))
								   ? 0x16U
								   : 
								  ((1U 
								    & (IData)(
									      (vlTOPp->io_input_bits_a 
									       >> 0x1cU)))
								    ? 0x17U
								    : 
								   ((1U 
								     & (IData)(
									       (vlTOPp->io_input_bits_a 
										>> 0x1bU)))
								     ? 0x18U
								     : 
								    ((1U 
								      & (IData)(
										(vlTOPp->io_input_bits_a 
										>> 0x1aU)))
								      ? 0x19U
								      : 
								     ((1U 
								       & (IData)(
										(vlTOPp->io_input_bits_a 
										>> 0x19U)))
								       ? 0x1aU
								       : 
								      ((1U 
									& (IData)(
										(vlTOPp->io_input_bits_a 
										>> 0x18U)))
								        ? 0x1bU
								        : 
								       ((1U 
									 & (IData)(
										(vlTOPp->io_input_bits_a 
										>> 0x17U)))
									 ? 0x1cU
									 : 
									((1U 
									  & (IData)(
										(vlTOPp->io_input_bits_a 
										>> 0x16U)))
									  ? 0x1dU
									  : 
									 ((1U 
									   & (IData)(
										(vlTOPp->io_input_bits_a 
										>> 0x15U)))
									   ? 0x1eU
									   : 
									  ((1U 
									    & (IData)(
										(vlTOPp->io_input_bits_a 
										>> 0x14U)))
									    ? 0x1fU
									    : 
									   ((1U 
									     & (IData)(
										(vlTOPp->io_input_bits_a 
										>> 0x13U)))
									     ? 0x20U
									     : 
									    ((1U 
									      & (IData)(
										(vlTOPp->io_input_bits_a 
										>> 0x12U)))
									      ? 0x21U
									      : 
									     ((1U 
									       & (IData)(
										(vlTOPp->io_input_bits_a 
										>> 0x11U)))
									       ? 0x22U
									       : 
									      ((1U 
										& (IData)(
										(vlTOPp->io_input_bits_a 
										>> 0x10U)))
									        ? 0x23U
									        : 
									       ((1U 
										& (IData)(
										(vlTOPp->io_input_bits_a 
										>> 0xfU)))
										 ? 0x24U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_input_bits_a 
										>> 0xeU)))
										 ? 0x25U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_input_bits_a 
										>> 0xdU)))
										 ? 0x26U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_input_bits_a 
										>> 0xcU)))
										 ? 0x27U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_input_bits_a 
										>> 0xbU)))
										 ? 0x28U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_input_bits_a 
										>> 0xaU)))
										 ? 0x29U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_input_bits_a 
										>> 9U)))
										 ? 0x2aU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_input_bits_a 
										>> 8U)))
										 ? 0x2bU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_input_bits_a 
										>> 7U)))
										 ? 0x2cU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_input_bits_a 
										>> 6U)))
										 ? 0x2dU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_input_bits_a 
										>> 5U)))
										 ? 0x2eU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_input_bits_a 
										>> 4U)))
										 ? 0x2fU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_input_bits_a 
										>> 3U)))
										 ? 0x30U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_input_bits_a 
										>> 2U)))
										 ? 0x31U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_input_bits_a 
										>> 1U)))
										 ? 0x32U
										 : 0x33U)))))))))))))))))))))))))))))))))))))))))))))))))));
    vlTOPp->io_check = (1U & (IData)((vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum 
				      >> 1U)));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT__wrap_1 
	= (4U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT__value_1));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_14 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT__value_1)));
    vlTOPp->io_output_a = ((4U >= (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT__value_1))
			    ? vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_a
			   [vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT__value_1]
			    : VL_ULL(0));
    vlTOPp->io_output_roundingMode = ((4U >= (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT__value_1))
				       ? vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_roundingMode
				      [vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT__value_1]
				       : 0U);
    vlTOPp->io_output_detectTininess = ((4U >= (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT__value_1)) 
					& vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_detectTininess
					[vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT__value_1]);
    vlTOPp->io_expected_exceptionFlags = ((4U >= (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT__value_1))
					   ? vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_exceptionFlags
					  [vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT__value_1]
					   : 0U);
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__skipCycle2 
	= (1U & ((IData)((vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum 
			  >> 3U)) & (IData)((vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sigX_Z 
					     >> 0x36U))));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
	= ((4U >= (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT__value_1))
	    ? vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out
	   [vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT__value_1]
	    : VL_ULL(0));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady 
	= (1U & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum) 
		 | (IData)((vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum 
			    >> 1U))));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_invalidExc 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__majorExc_Z) 
	   & (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isNaN_Z));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_infiniteExc 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__majorExc_Z) 
	   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isNaN_Z)));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_165 
	= ((0U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__roundingMode_Z)) 
	   | (4U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__roundingMode_Z)));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
	= (((2U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__roundingMode_Z)) 
	    & (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sign_Z)) 
	   | ((3U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__roundingMode_Z)) 
	      & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sign_Z))));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig 
	= ((vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sigX_Z 
	    << 1U) | (QData)((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__notZeroRem_Z)));
    __Vtemp53[0U] = 0U;
    __Vtemp53[1U] = 0U;
    __Vtemp53[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp54, __Vtemp53, (0x3fU 
						   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp57[0U] = 0U;
    __Vtemp57[1U] = 0U;
    __Vtemp57[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp58, __Vtemp57, (0x3fU 
						   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_79 
	= ((0xffU & ((0x800U & (__Vtemp54[2U] << 0xbU)) 
		     | (__Vtemp54[1U] >> 0x15U))) | 
	   (0xff00U & ((0x8000000U & (__Vtemp58[2U] 
				      << 0x1bU)) | 
		       (0x7ffff00U & (__Vtemp58[1U] 
				      >> 5U)))));
    __Vtemp61[0U] = 0U;
    __Vtemp61[1U] = 0U;
    __Vtemp61[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp62, __Vtemp61, (0x3fU 
						   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp65[0U] = 0U;
    __Vtemp65[1U] = 0U;
    __Vtemp65[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp66, __Vtemp65, (0x3fU 
						   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_28 
	= ((0xffffU & ((__Vtemp62[1U] << 3U) | (__Vtemp62[0U] 
						>> 0x1dU))) 
	   | (0xffff0000U & (__Vtemp66[0U] << 3U)));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT__wrap 
	= (4U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT__value));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_12 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT__value)));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_2 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT__value) 
	   == (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT__value_1));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT___T_119 
	= (0xfffU & (((0U == (0x7ffU & (IData)((vlTOPp->io_input_bits_a 
						>> 0x34U))))
		       ? (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT___T_110))
		       : (0x7ffU & (IData)((vlTOPp->io_input_bits_a 
					    >> 0x34U)))) 
		     + (0x400U | ((0U == (0x7ffU & (IData)(
							   (vlTOPp->io_input_bits_a 
							    >> 0x34U))))
				   ? 2U : 1U))));
    vlTOPp->io_expected_out = vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data;
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT___T_259 
	= ((0U == (0x7ffU & (IData)((vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
				     >> 0x34U)))) & 
	   (VL_ULL(0) == (VL_ULL(0xfffffffffffff) & vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data)));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT___T_249 
	= ((1U & (IData)((vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
			  >> 0x33U))) ? 0U : ((1U & (IData)(
							    (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
							     >> 0x32U)))
					       ? 1U
					       : ((1U 
						   & (IData)(
							     (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
							      >> 0x31U)))
						   ? 2U
						   : 
						  ((1U 
						    & (IData)(
							      (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
							       >> 0x30U)))
						    ? 3U
						    : 
						   ((1U 
						     & (IData)(
							       (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
								>> 0x2fU)))
						     ? 4U
						     : 
						    ((1U 
						      & (IData)(
								(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
								 >> 0x2eU)))
						      ? 5U
						      : 
						     ((1U 
						       & (IData)(
								 (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
								  >> 0x2dU)))
						       ? 6U
						       : 
						      ((1U 
							& (IData)(
								  (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
								   >> 0x2cU)))
						        ? 7U
						        : 
						       ((1U 
							 & (IData)(
								   (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
								    >> 0x2bU)))
							 ? 8U
							 : 
							((1U 
							  & (IData)(
								    (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
								     >> 0x2aU)))
							  ? 9U
							  : 
							 ((1U 
							   & (IData)(
								     (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
								      >> 0x29U)))
							   ? 0xaU
							   : 
							  ((1U 
							    & (IData)(
								      (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
								       >> 0x28U)))
							    ? 0xbU
							    : 
							   ((1U 
							     & (IData)(
								       (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
									>> 0x27U)))
							     ? 0xcU
							     : 
							    ((1U 
							      & (IData)(
									(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
									 >> 0x26U)))
							      ? 0xdU
							      : 
							     ((1U 
							       & (IData)(
									 (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
									  >> 0x25U)))
							       ? 0xeU
							       : 
							      ((1U 
								& (IData)(
									  (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
									   >> 0x24U)))
							        ? 0xfU
							        : 
							       ((1U 
								 & (IData)(
									   (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
									    >> 0x23U)))
								 ? 0x10U
								 : 
								((1U 
								  & (IData)(
									    (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
									     >> 0x22U)))
								  ? 0x11U
								  : 
								 ((1U 
								   & (IData)(
									     (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
									      >> 0x21U)))
								   ? 0x12U
								   : 
								  ((1U 
								    & (IData)(
									      (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
									       >> 0x20U)))
								    ? 0x13U
								    : 
								   ((1U 
								     & (IData)(
									       (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0x1fU)))
								     ? 0x14U
								     : 
								    ((1U 
								      & (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0x1eU)))
								      ? 0x15U
								      : 
								     ((1U 
								       & (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0x1dU)))
								       ? 0x16U
								       : 
								      ((1U 
									& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0x1cU)))
								        ? 0x17U
								        : 
								       ((1U 
									 & (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0x1bU)))
									 ? 0x18U
									 : 
									((1U 
									  & (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0x1aU)))
									  ? 0x19U
									  : 
									 ((1U 
									   & (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0x19U)))
									   ? 0x1aU
									   : 
									  ((1U 
									    & (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0x18U)))
									    ? 0x1bU
									    : 
									   ((1U 
									     & (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0x17U)))
									     ? 0x1cU
									     : 
									    ((1U 
									      & (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0x16U)))
									      ? 0x1dU
									      : 
									     ((1U 
									       & (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0x15U)))
									       ? 0x1eU
									       : 
									      ((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0x14U)))
									        ? 0x1fU
									        : 
									       ((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0x13U)))
										 ? 0x20U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0x12U)))
										 ? 0x21U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0x11U)))
										 ? 0x22U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0x10U)))
										 ? 0x23U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0xfU)))
										 ? 0x24U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0xeU)))
										 ? 0x25U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0xdU)))
										 ? 0x26U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0xcU)))
										 ? 0x27U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0xbU)))
										 ? 0x28U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0xaU)))
										 ? 0x29U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 9U)))
										 ? 0x2aU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 8U)))
										 ? 0x2bU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 7U)))
										 ? 0x2cU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 6U)))
										 ? 0x2dU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 5U)))
										 ? 0x2eU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 4U)))
										 ? 0x2fU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 3U)))
										 ? 0x30U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 2U)))
										 ? 0x31U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 1U)))
										 ? 0x32U
										 : 0x33U)))))))))))))))))))))))))))))))))))))))))))))))))));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq_io_enq_valid 
	= ((IData)(vlTOPp->io_input_valid) & (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_invalidExc) 
	   | (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isNaN_Z));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_infiniteExc) 
	   | (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isInf_Z));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_165) 
	   | (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_89 
	= ((0xf0fU & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_79) 
		      >> 4U)) | (0xf0f0U & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_79) 
					    << 4U)));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_38 
	= ((0xff00ffU & (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_28 
			 >> 8U)) | (0xff00ff00U & (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_28 
						   << 8U)));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_4 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_2) 
	   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_1)));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_5 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_2) 
	   & (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_1));
    VL_EXTEND_WQ(115,52, __Vtemp69, (VL_ULL(0xfffffffffffff) 
				     & vlTOPp->io_input_bits_a));
    VL_SHIFTL_WWI(115,115,6, __Vtemp70, __Vtemp69, (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT___T_110));
    __Vtemp72[1U] = ((0xe0000000U & ((((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT___T_120)
				        ? 0U : ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT___T_119) 
						>> 9U)) 
				      | ((3U == (3U 
						 & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT___T_119) 
						    >> 0xaU))) 
					 & (VL_ULL(0) 
					    != (VL_ULL(0xfffffffffffff) 
						& vlTOPp->io_input_bits_a)))) 
				     << 0x1dU)) | (IData)(
							  ((((QData)((IData)(
									     (0x1ffU 
									      & (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT___T_119)))) 
							     << 0x34U) 
							    | (VL_ULL(0xfffffffffffff) 
							       & ((0U 
								   == 
								   (0x7ffU 
								    & (IData)(
									      (vlTOPp->io_input_bits_a 
									       >> 0x34U))))
								   ? 
								  (VL_ULL(0xffffffffffffe) 
								   & (((QData)((IData)(
										__Vtemp70[1U])) 
								       << 0x21U) 
								      | ((QData)((IData)(
										__Vtemp70[0U])) 
									 << 1U)))
								   : vlTOPp->io_input_bits_a))) 
							   >> 0x20U)));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds_io_a[0U] 
	= (IData)((((QData)((IData)((0x1ffU & (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT___T_119)))) 
		    << 0x34U) | (VL_ULL(0xfffffffffffff) 
				 & ((0U == (0x7ffU 
					    & (IData)(
						      (vlTOPp->io_input_bits_a 
						       >> 0x34U))))
				     ? (VL_ULL(0xffffffffffffe) 
					& (((QData)((IData)(
							    __Vtemp70[1U])) 
					    << 0x21U) 
					   | ((QData)((IData)(
							      __Vtemp70[0U])) 
					      << 1U)))
				     : vlTOPp->io_input_bits_a))));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds_io_a[1U] 
	= __Vtemp72[1U];
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds_io_a[2U] 
	= (1U & (IData)((vlTOPp->io_input_bits_a >> 0x3fU)));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT___T_258 
	= (0xfffU & (((0U == (0x7ffU & (IData)((vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
						>> 0x34U))))
		       ? (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT___T_249))
		       : (0x7ffU & (IData)((vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
					    >> 0x34U)))) 
		     + (0x400U | ((0U == (0x7ffU & (IData)(
							   (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
							    >> 0x34U))))
				   ? 2U : 1U))));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
	= (1U & (((~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
		  & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut))) 
		 & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isZero_Z))));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_99 
	= ((0x3333U & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_89) 
		       >> 2U)) | (0xccccU & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_89) 
					     << 2U)));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_48 
	= ((0xf0f0f0fU & (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_38 
			  >> 4U)) | (0xf0f0f0f0U & 
				     (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_38 
				      << 4U)));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_8 
	= (1U & ((IData)((vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum 
			  >> 1U)) & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_4))));
    vlTOPp->io_input_ready = ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady) 
			      & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_5)));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_6 
	= ((~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_5)) 
	   & (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq_io_enq_valid));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady) 
	   & ((IData)(vlTOPp->io_input_valid) & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_5))));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_sig 
	= (((QData)((IData)((0U != (7U & ((vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds_io_a[2U] 
					   << 3U) | 
					  (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds_io_a[1U] 
					   >> 0x1dU)))))) 
	    << 0x34U) | (VL_ULL(0xfffffffffffff) & 
			 (((QData)((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds_io_a[1U])) 
			   << 0x20U) | (QData)((IData)(
						       vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds_io_a[0U])))));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_isInf 
	= ((3U == (3U & ((vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds_io_a[2U] 
			  << 2U) | (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds_io_a[1U] 
				    >> 0x1eU)))) & 
	   (~ (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds_io_a[1U] 
	       >> 0x1dU)));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_isNaN 
	= ((3U == (3U & ((vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds_io_a[2U] 
			  << 2U) | (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds_io_a[1U] 
				    >> 0x1eU)))) & 
	   (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds_io_a[1U] 
	    >> 0x1dU));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_76 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady) 
	   & (~ (0xfffU & ((vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds_io_a[2U] 
			    << 0xcU) | (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds_io_a[1U] 
					>> 0x14U)))));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_79 
	= (0xfffU & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady) 
		     & ((vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds_io_a[2U] 
			 << 0xcU) | (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds_io_a[1U] 
				     >> 0x14U))));
    VL_EXTEND_WQ(115,52, __Vtemp74, (VL_ULL(0xfffffffffffff) 
				     & vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data));
    VL_SHIFTL_WWI(115,115,6, __Vtemp75, __Vtemp74, (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT___T_249));
    __Vtemp77[1U] = ((0xe0000000U & ((((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT___T_259)
				        ? 0U : ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT___T_258) 
						>> 9U)) 
				      | ((3U == (3U 
						 & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT___T_258) 
						    >> 0xaU))) 
					 & (VL_ULL(0) 
					    != (VL_ULL(0xfffffffffffff) 
						& vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data)))) 
				     << 0x1dU)) | (IData)(
							  ((((QData)((IData)(
									     (0x1ffU 
									      & (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT___T_258)))) 
							     << 0x34U) 
							    | (VL_ULL(0xfffffffffffff) 
							       & ((0U 
								   == 
								   (0x7ffU 
								    & (IData)(
									      (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
									       >> 0x34U))))
								   ? 
								  (VL_ULL(0xffffffffffffe) 
								   & (((QData)((IData)(
										__Vtemp75[1U])) 
								       << 0x21U) 
								      | ((QData)((IData)(
										__Vtemp75[0U])) 
									 << 1U)))
								   : vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data))) 
							   >> 0x20U)));
    vlTOPp->io_expected_recOut[0U] = (IData)((((QData)((IData)(
							       (0x1ffU 
								& (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT___T_258)))) 
					       << 0x34U) 
					      | (VL_ULL(0xfffffffffffff) 
						 & ((0U 
						     == 
						     (0x7ffU 
						      & (IData)(
								(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
								 >> 0x34U))))
						     ? 
						    (VL_ULL(0xffffffffffffe) 
						     & (((QData)((IData)(
									 __Vtemp75[1U])) 
							 << 0x21U) 
							| ((QData)((IData)(
									   __Vtemp75[0U])) 
							   << 1U)))
						     : vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data))));
    vlTOPp->io_expected_recOut[1U] = __Vtemp77[1U];
    vlTOPp->io_expected_recOut[2U] = (1U & (IData)(
						   (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
						    >> 0x3fU)));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_58 
	= ((0x33333333U & (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_48 
			   >> 2U)) | (0xccccccccU & 
				      (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_48 
				       << 2U)));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_52 
	= (1U & ((~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum)) 
		 | (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering)));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__notSigNaNIn_invalidExc_S_sqrt 
	= (((~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_isNaN)) 
	    & (0U != (7U & ((vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds_io_a[2U] 
			     << 3U) | (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds_io_a[1U] 
				       >> 0x1dU))))) 
	   & vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds_io_a[2U]);
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__normalCase_S_sqrt 
	= (1U & ((~ (((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_isNaN) 
		      | (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_isInf)) 
		     | (0U == (7U & ((vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds_io_a[2U] 
				      << 3U) | (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds_io_a[1U] 
						>> 0x1dU)))))) 
		 & (~ vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds_io_a[2U])));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__rem 
	= ((((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_76)
	      ? (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_sig 
		 << 1U) : VL_ULL(0)) | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_79)
					 ? (((QData)((IData)(
							     (3U 
							      & ((IData)(
									 (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_sig 
									  >> 0x33U)) 
								 - (IData)(1U))))) 
					     << 0x36U) 
					    | (VL_ULL(0x3ffffffffffff8) 
					       & (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_sig 
						  << 3U)))
					 : VL_ULL(0))) 
	   | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady)
	       ? VL_ULL(0) : (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__rem_Z 
			      << 1U)));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__trialTerm 
	= ((((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_76)
	      ? VL_ULL(0x20000000000000) : VL_ULL(0)) 
	    | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_79)
	        ? VL_ULL(0x50000000000000) : VL_ULL(0))) 
	   | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady)
	       ? VL_ULL(0) : ((vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sigX_Z 
			       << 1U) | (VL_ULL(0x3fffffffffffff) 
					 & (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum 
					    >> 2U)))));
    __Vtemp79[0U] = 0U;
    __Vtemp79[1U] = 0U;
    __Vtemp79[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp80, __Vtemp79, (0x3fU 
						   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp83[0U] = 0U;
    __Vtemp83[1U] = 0U;
    __Vtemp83[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp84, __Vtemp83, (0x3fU 
						   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp87[0U] = 0U;
    __Vtemp87[1U] = 0U;
    __Vtemp87[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp88, __Vtemp87, (0x3fU 
						   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp91[0U] = 0U;
    __Vtemp91[1U] = 0U;
    __Vtemp91[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp92, __Vtemp91, (0x3fU 
						   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp95[0U] = 0U;
    __Vtemp95[1U] = 0U;
    __Vtemp95[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp96, __Vtemp95, (0x3fU 
						   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp99[0U] = 0U;
    __Vtemp99[1U] = 0U;
    __Vtemp99[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp100, __Vtemp99, 
		   (0x3fU & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_154 
	= (((0x800U & (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))
	     ? VL_ULL(0) : ((0x400U & (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))
			     ? (QData)((IData)(((0x200U 
						 & (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))
						 ? 0U
						 : 
						((0x100U 
						  & (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))
						  ? 0U
						  : 
						 ((0x80U 
						   & (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))
						   ? 0U
						   : 
						  ((0x40U 
						    & (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))
						    ? 0U
						    : 
						   ((4U 
						     & (__Vtemp80[0U] 
							<< 2U)) 
						    | ((2U 
							& __Vtemp84[0U]) 
						       | (1U 
							  & (__Vtemp88[0U] 
							     >> 2U))))))))))
			     : (VL_ULL(7) | (VL_ULL(0x3ffffffffffff8) 
					     & ((~ 
						 ((0x200U 
						   & (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))
						   ? 
						  ((0x100U 
						    & (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))
						    ? 
						   ((0x80U 
						     & (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))
						     ? 
						    ((0x40U 
						      & (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))
						      ? 
						     (~ 
						      (((QData)((IData)(
									((0x55555555U 
									  & (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_58 
									     >> 1U)) 
									 | (0xaaaaaaaaU 
									    & (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_58 
									       << 1U))))) 
							<< 0x13U) 
						       | (QData)((IData)(
									 (((0x2aaa8U 
									    & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_99) 
									       << 2U)) 
									   | (0x55550U 
									      & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_99) 
										<< 4U))) 
									  | ((4U 
									      & (__Vtemp92[1U] 
										>> 0x1bU)) 
									     | ((2U 
										& (__Vtemp96[1U] 
										>> 0x1dU)) 
										| (1U 
										& (__Vtemp100[1U] 
										>> 0x1fU)))))))))
						      : VL_ULL(0))
						     : VL_ULL(0))
						    : VL_ULL(0))
						   : VL_ULL(0))) 
						<< 3U))))) 
	   | (QData)((IData)((1U & (IData)((vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig 
					    >> 0x37U))))));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering_normalCase 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering) 
	   & (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__normalCase_S_sqrt));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__trialRem 
	= (VL_ULL(0x1ffffffffffffff) & (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__rem 
					- vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__trialTerm));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_162 
	= (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig 
	   & (VL_ULL(1) | (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_154 
			   << 1U)));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_159 
	= ((~ (VL_ULL(1) | (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_154 
			    << 1U))) & (VL_ULL(3) | 
					(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_154 
					 << 2U)));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_68 
	= ((((QData)((IData)((((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering) 
			       & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__normalCase_S_sqrt)))
			       ? 2U : 0U))) | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering_normalCase)
					        ? (
						   (1U 
						    & ((vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds_io_a[2U] 
							<< 0xcU) 
						       | (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds_io_a[1U] 
							  >> 0x14U)))
						    ? VL_ULL(0x20000000000000)
						    : VL_ULL(0x40000000000000))
					        : VL_ULL(0))) 
	    | (VL_ULL(0x7fffffffffffff) & ((1U & ((~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering)) 
						  & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__skipCycle2))))
					    ? (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum 
					       >> 1U)
					    : VL_ULL(0)))) 
	   | (QData)((IData)(((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__skipCycle2)
			       ? 2U : 0U))));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_141 
	= ((((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady)
	      ? VL_ULL(0x20000000000000) : VL_ULL(0)) 
	    | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_79)
	        ? ((QData)((IData)(VL_LTES_IQQ(1,57,57, VL_ULL(0), vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__trialRem))) 
		   << 0x34U) : VL_ULL(0))) | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady)
					       ? VL_ULL(0)
					       : (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sigX_Z 
						  | (VL_ULL(0x3fffffffffffff) 
						     & (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum 
							>> 2U)))));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_125 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering_normalCase) 
	   | ((~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady)) 
	      & VL_LTES_IQQ(1,57,57, VL_ULL(0), vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__trialRem)));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___GEN_10 
	= (VL_ULL(0x1ffffffffffffff) & ((1U & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering_normalCase) 
					       | (~ 
						  ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum) 
						   | (IData)(
							     (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum 
							      >> 2U))))))
					 ? (VL_LTES_IQQ(1,57,57, VL_ULL(0), vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__trialRem)
					     ? (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__rem 
						- vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__trialTerm)
					     : vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__rem)
					 : vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__rem_Z));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_160 
	= (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig 
	   & vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_159);
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_164 
	= ((VL_ULL(0) != vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_160) 
	   | (VL_ULL(0) != vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_162));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_186 
	= (VL_ULL(0x7fffffffffffff) & ((((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_165) 
					 & (VL_ULL(0) 
					    != vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_160)) 
					| ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
					   & (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_164)))
				        ? ((VL_ULL(1) 
					    + (VL_ULL(0x3fffffffffffff) 
					       & ((vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig 
						   >> 2U) 
						  | (VL_ULL(0x3fffffffffffffff) 
						     & vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_154)))) 
					   & (~ (((
						   (0U 
						    == (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__roundingMode_Z)) 
						   & (VL_ULL(0) 
						      != vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_160)) 
						  & (VL_ULL(0) 
						     == vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_162))
						  ? 
						 (VL_ULL(1) 
						  | (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_154 
						     << 1U))
						  : VL_ULL(0))))
				        : ((VL_ULL(0x3fffffffffffff) 
					    & ((vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig 
						& (~ 
						   (VL_ULL(3) 
						    | (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_154 
						       << 2U)))) 
					       >> 2U)) 
					   | (((6U 
						== (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__roundingMode_Z)) 
					       & (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_164))
					       ? (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_159 
						  >> 1U)
					       : VL_ULL(0)))));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189 
	= (0x3fffU & (VL_EXTENDS_II(14,13, (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z)) 
		      + VL_EXTENDS_II(14,13, (3U & (IData)(
							   (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_186 
							    >> 0x35U))))));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut 
	= (((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
	    & VL_GTS_III(1,14,14, 0x3ceU, (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189))) 
	   & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
	      | (6U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__roundingMode_Z))));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
	   & VL_LTES_III(1,4,4, 3U, (0xfU & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189) 
					     >> 0xaU))));
    vlTOPp->io_actual_exceptionFlags = ((((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_invalidExc) 
					  << 4U) | 
					 (((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_infiniteExc) 
					   << 3U) | 
					  ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
					   << 2U))) 
					| ((((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
					     & (VL_GTS_III(1,14,14, 0x3ceU, (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189)) 
						| ((((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_164) 
						     & VL_GTES_III(1,2,2, 0U, 
								   (3U 
								    & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z) 
								       >> 0xbU)))) 
						    & ((1U 
							& (IData)(
								  (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig 
								   >> 0x37U)))
						        ? (IData)(
								  (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_154 
								   >> 1U))
						        : (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_154))) 
						   & (~ 
						      (((((IData)(vlTOPp->io_input_bits_detectTininess) 
							  & (~ 
							     ((1U 
							       & (IData)(
									 (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig 
									  >> 0x37U)))
							       ? (IData)(
									 (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_154 
									  >> 2U))
							       : (IData)(
									 (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_154 
									  >> 1U))))) 
							 & ((1U 
							     & (IData)(
								       (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig 
									>> 0x37U)))
							     ? (IData)(
								       (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_186 
									>> 0x36U))
							     : (IData)(
								       (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_186 
									>> 0x35U)))) 
							& (VL_ULL(0) 
							   != vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_160)) 
						       & (((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_165) 
							   & ((1U 
							       & (IData)(
									 (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig 
									  >> 0x37U)))
							       ? (IData)(
									 (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig 
									  >> 2U))
							       : (IData)(
									 (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig 
									  >> 1U)))) 
							  | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
							     & (((IData)(
									 (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig 
									  >> 0x37U)) 
								 & (IData)(
									   (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig 
									    >> 2U))) 
								| (0U 
								   != 
								   (3U 
								    & (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig))))))))))) 
					    << 1U) 
					   | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
					      | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
						 & (VL_GTS_III(1,14,14, 0x3ceU, (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189)) 
						    | (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_164))))));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
	   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut) 
	   | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
	      & (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    __Vtemp102[0U] = (IData)((((QData)((IData)((0xfffU 
						& (((((((((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189) 
							  & (~ 
							     (((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isZero_Z) 
							       | VL_GTS_III(1,14,14, 0x3ceU, (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189)))
							       ? 0xe00U
							       : 0U))) 
							 & (~ 
							    ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
							      ? 0xc31U
							      : 0U))) 
							& (~ 
							   ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
							     ? 0x400U
							     : 0U))) 
						       & (~ 
							  ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
							    ? 0x200U
							    : 0U))) 
						      | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
							  ? 0x3ceU
							  : 0U)) 
						     | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
							 ? 0xbffU
							 : 0U)) 
						    | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
						        ? 0xc00U
						        : 0U)) 
						   | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
						       ? 0xe00U
						       : 0U))))) 
			       << 0x34U) | (VL_ULL(0xfffffffffffff) 
					    & (((((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
						  | (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isZero_Z)) 
						 | VL_GTS_III(1,14,14, 0x3ceU, (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189)))
						 ? 
						((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
						  ? VL_ULL(0x8000000000000)
						  : VL_ULL(0))
						 : 
						((1U 
						  & (IData)(
							    (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig 
							     >> 0x37U)))
						  ? 
						 (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_186 
						  >> 1U)
						  : vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_186)) 
					       | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
						   ? VL_ULL(0xfffffffffffff)
						   : VL_ULL(0))))));
    __Vtemp102[1U] = (IData)(((((QData)((IData)((0xfffU 
						 & (((((((((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189) 
							   & (~ 
							      (((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isZero_Z) 
								| VL_GTS_III(1,14,14, 0x3ceU, (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189)))
							        ? 0xe00U
							        : 0U))) 
							  & (~ 
							     ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
							       ? 0xc31U
							       : 0U))) 
							 & (~ 
							    ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
							      ? 0x400U
							      : 0U))) 
							& (~ 
							   ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
							     ? 0x200U
							     : 0U))) 
						       | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
							   ? 0x3ceU
							   : 0U)) 
						      | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
							  ? 0xbffU
							  : 0U)) 
						     | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
							 ? 0xc00U
							 : 0U)) 
						    | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
						        ? 0xe00U
						        : 0U))))) 
				<< 0x34U) | (VL_ULL(0xfffffffffffff) 
					     & (((((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
						   | (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isZero_Z)) 
						  | VL_GTS_III(1,14,14, 0x3ceU, (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189)))
						  ? 
						 ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
						   ? VL_ULL(0x8000000000000)
						   : VL_ULL(0))
						  : 
						 ((1U 
						   & (IData)(
							     (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig 
							      >> 0x37U)))
						   ? 
						  (vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_186 
						   >> 1U)
						   : vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_186)) 
						| ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
						    ? VL_ULL(0xfffffffffffff)
						    : VL_ULL(0))))) 
			      >> 0x20U));
    vlTOPp->io_actual_out[0U] = __Vtemp102[0U];
    vlTOPp->io_actual_out[1U] = __Vtemp102[1U];
    vlTOPp->io_actual_out[2U] = ((~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
				 & (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sign_Z));
    vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT___T_288 
	= ((0xfU & ((vlTOPp->io_actual_out[2U] << 3U) 
		    | (vlTOPp->io_actual_out[1U] >> 0x1dU))) 
	   == (0xfU & ((vlTOPp->io_expected_recOut[2U] 
			<< 3U) | (vlTOPp->io_expected_recOut[1U] 
				  >> 0x1dU))));
    vlTOPp->io_pass = (((~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_4)) 
			& (((0U == (7U & ((vlTOPp->io_actual_out[2U] 
					   << 3U) | 
					  (vlTOPp->io_actual_out[1U] 
					   >> 0x1dU)))) 
			    | (7U == (7U & ((vlTOPp->io_actual_out[2U] 
					     << 3U) 
					    | (vlTOPp->io_actual_out[1U] 
					       >> 0x1dU)))))
			    ? ((IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT___T_288) 
			       & ((VL_ULL(0xfffffffffffff) 
				   & (((QData)((IData)(
						       vlTOPp->io_actual_out[1U])) 
				       << 0x20U) | (QData)((IData)(
								   vlTOPp->io_actual_out[0U])))) 
				  == (VL_ULL(0xfffffffffffff) 
				      & (((QData)((IData)(
							  vlTOPp->io_expected_recOut[1U])) 
					  << 0x20U) 
					 | (QData)((IData)(
							   vlTOPp->io_expected_recOut[0U]))))))
			    : ((6U == (7U & ((vlTOPp->io_actual_out[2U] 
					      << 3U) 
					     | (vlTOPp->io_actual_out[1U] 
						>> 0x1dU))))
			        ? (IData)(vlTOPp->ValExec_DivSqrtRecF64_small_sqrt__DOT___T_288)
			        : (0U == (((vlTOPp->io_actual_out[0U] 
					    ^ vlTOPp->io_expected_recOut[0U]) 
					   | (vlTOPp->io_actual_out[1U] 
					      ^ vlTOPp->io_expected_recOut[1U])) 
					  | (vlTOPp->io_actual_out[2U] 
					     ^ vlTOPp->io_expected_recOut[2U])))))) 
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
    io_input_bits_a = VL_RAND_RESET_Q(64);
    io_input_bits_roundingMode = VL_RAND_RESET_I(3);
    io_input_bits_detectTininess = VL_RAND_RESET_I(1);
    io_input_bits_out = VL_RAND_RESET_Q(64);
    io_input_bits_exceptionFlags = VL_RAND_RESET_I(5);
    io_output_a = VL_RAND_RESET_Q(64);
    io_output_roundingMode = VL_RAND_RESET_I(3);
    io_output_detectTininess = VL_RAND_RESET_I(1);
    io_expected_out = VL_RAND_RESET_Q(64);
    io_expected_exceptionFlags = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(65,io_expected_recOut);
    VL_RAND_RESET_W(65,io_actual_out);
    io_actual_exceptionFlags = VL_RAND_RESET_I(5);
    io_check = VL_RAND_RESET_I(1);
    io_pass = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65,ValExec_DivSqrtRecF64_small_sqrt__DOT__ds_io_a);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__cq_io_enq_valid = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_small_sqrt__DOT___T_110 = VL_RAND_RESET_I(6);
    ValExec_DivSqrtRecF64_small_sqrt__DOT___T_119 = VL_RAND_RESET_I(12);
    ValExec_DivSqrtRecF64_small_sqrt__DOT___T_120 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_small_sqrt__DOT___T_249 = VL_RAND_RESET_I(6);
    ValExec_DivSqrtRecF64_small_sqrt__DOT___T_258 = VL_RAND_RESET_I(12);
    ValExec_DivSqrtRecF64_small_sqrt__DOT___T_259 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_small_sqrt__DOT___T_288 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_isNaN = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_isInf = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_sig = VL_RAND_RESET_Q(54);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_invalidExc = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_infiniteExc = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig = VL_RAND_RESET_Q(56);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum = VL_RAND_RESET_Q(56);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__majorExc_Z = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isNaN_Z = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isInf_Z = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isZero_Z = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sign_Z = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z = VL_RAND_RESET_I(13);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__roundingMode_Z = VL_RAND_RESET_I(3);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__rem_Z = VL_RAND_RESET_Q(55);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__notZeroRem_Z = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sigX_Z = VL_RAND_RESET_Q(55);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__notSigNaNIn_invalidExc_S_sqrt = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__normalCase_S_sqrt = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering_normalCase = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__skipCycle2 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_52 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_68 = VL_RAND_RESET_Q(56);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_76 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_79 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__rem = VL_RAND_RESET_Q(56);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__trialTerm = VL_RAND_RESET_Q(56);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__trialRem = VL_RAND_RESET_Q(57);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___GEN_10 = VL_RAND_RESET_Q(57);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_125 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_141 = VL_RAND_RESET_Q(55);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_28 = VL_RAND_RESET_I(32);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_38 = VL_RAND_RESET_I(32);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_48 = VL_RAND_RESET_I(32);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_58 = VL_RAND_RESET_I(32);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_79 = VL_RAND_RESET_I(16);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_89 = VL_RAND_RESET_I(16);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_99 = VL_RAND_RESET_I(16);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_154 = VL_RAND_RESET_Q(54);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_159 = VL_RAND_RESET_Q(56);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_160 = VL_RAND_RESET_Q(56);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_162 = VL_RAND_RESET_Q(56);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_164 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_165 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_186 = VL_RAND_RESET_Q(55);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189 = VL_RAND_RESET_I(14);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
	    ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_a[__Vi0] = VL_RAND_RESET_Q(64);
    }}
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
	    ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_roundingMode[__Vi0] = VL_RAND_RESET_I(3);
    }}
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
	    ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_detectTininess[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
	    ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out[__Vi0] = VL_RAND_RESET_Q(64);
    }}
    ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data = VL_RAND_RESET_Q(64);
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
	    ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_exceptionFlags[__Vi0] = VL_RAND_RESET_I(5);
    }}
    ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT__value = VL_RAND_RESET_I(3);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT__value_1 = VL_RAND_RESET_I(3);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_1 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_2 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_4 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_5 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_6 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_8 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT__wrap = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_12 = VL_RAND_RESET_I(3);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT__wrap_1 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT___T_14 = VL_RAND_RESET_I(3);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT____Vlvbound1 = VL_RAND_RESET_Q(64);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT____Vlvbound2 = VL_RAND_RESET_I(3);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT____Vlvbound3 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT____Vlvbound4 = VL_RAND_RESET_Q(64);
    ValExec_DivSqrtRecF64_small_sqrt__DOT__cq__DOT____Vlvbound5 = VL_RAND_RESET_I(5);
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
}
