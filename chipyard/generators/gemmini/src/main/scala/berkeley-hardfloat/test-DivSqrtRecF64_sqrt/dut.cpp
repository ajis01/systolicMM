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
    VL_SIG8(__Vdlyvdim0__ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_b__v0,2,0);
    VL_SIG8(__Vdlyvset__ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_b__v0,0,0);
    VL_SIG8(__Vdlyvdim0__ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_roundingMode__v0,2,0);
    VL_SIG8(__Vdlyvval__ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_roundingMode__v0,2,0);
    VL_SIG8(__Vdlyvset__ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_roundingMode__v0,0,0);
    VL_SIG8(__Vdlyvdim0__ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_detectTininess__v0,2,0);
    VL_SIG8(__Vdlyvval__ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_detectTininess__v0,0,0);
    VL_SIG8(__Vdlyvset__ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_detectTininess__v0,0,0);
    VL_SIG8(__Vdlyvdim0__ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out__v0,2,0);
    VL_SIG8(__Vdlyvset__ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out__v0,0,0);
    VL_SIG8(__Vdlyvdim0__ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_exceptionFlags__v0,2,0);
    VL_SIG8(__Vdlyvval__ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_exceptionFlags__v0,4,0);
    VL_SIG8(__Vdlyvset__ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_exceptionFlags__v0,0,0);
    VL_SIGW(__Vdly__ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_result_s3,104,0,4);
    VL_SIGW(__Vtemp3,127,0,4);
    VL_SIGW(__Vtemp4,127,0,4);
    VL_SIGW(__Vtemp5,127,0,4);
    VL_SIGW(__Vtemp7,127,0,4);
    VL_SIGW(__Vtemp15,127,0,4);
    VL_SIGW(__Vtemp16,127,0,4);
    VL_SIGW(__Vtemp23,127,0,4);
    VL_SIGW(__Vtemp24,127,0,4);
    VL_SIGW(__Vtemp25,127,0,4);
    VL_SIGW(__Vtemp28,95,0,3);
    VL_SIGW(__Vtemp29,95,0,3);
    VL_SIGW(__Vtemp32,95,0,3);
    VL_SIGW(__Vtemp33,95,0,3);
    VL_SIGW(__Vtemp36,95,0,3);
    VL_SIGW(__Vtemp37,95,0,3);
    VL_SIGW(__Vtemp40,95,0,3);
    VL_SIGW(__Vtemp41,95,0,3);
    VL_SIGW(__Vtemp44,127,0,4);
    VL_SIGW(__Vtemp45,127,0,4);
    VL_SIGW(__Vtemp47,95,0,3);
    VL_SIGW(__Vtemp49,95,0,3);
    VL_SIGW(__Vtemp50,95,0,3);
    VL_SIGW(__Vtemp53,95,0,3);
    VL_SIGW(__Vtemp54,95,0,3);
    VL_SIGW(__Vtemp57,95,0,3);
    VL_SIGW(__Vtemp58,95,0,3);
    VL_SIGW(__Vtemp61,95,0,3);
    VL_SIGW(__Vtemp62,95,0,3);
    VL_SIGW(__Vtemp65,95,0,3);
    VL_SIGW(__Vtemp66,95,0,3);
    VL_SIGW(__Vtemp69,95,0,3);
    VL_SIGW(__Vtemp70,95,0,3);
    VL_SIGW(__Vtemp72,95,0,3);
    VL_SIG64(__Vdlyvval__ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_b__v0,63,0);
    VL_SIG64(__Vdlyvval__ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out__v0,63,0);
    // Body
    __Vdlyvset__ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_b__v0 = 0U;
    __Vdlyvset__ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_detectTininess__v0 = 0U;
    __Vdlyvset__ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_roundingMode__v0 = 0U;
    __Vdlyvset__ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_exceptionFlags__v0 = 0U;
    __Vdlyvset__ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out__v0 = 0U;
    __Vdly__ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_result_s3[0U] 
	= vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_result_s3[0U];
    __Vdly__ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_result_s3[1U] 
	= vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_result_s3[1U];
    __Vdly__ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_result_s3[2U] 
	= vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_result_s3[2U];
    __Vdly__ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_result_s3[3U] 
	= vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_result_s3[3U];
    // ALWAYS at test-DivSqrtRecF64_sqrt/ValExec_DivSqrtRecF64_sqrt.v:994
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__nextMulAdd9A_A 
	= (0x1ffU & vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___GEN_40);
    // ALWAYS at test-DivSqrtRecF64_sqrt/ValExec_DivSqrtRecF64_sqrt.v:994
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__nextMulAdd9B_A 
	= (0x1ffU & (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___GEN_41));
    // ALWAYS at test-DivSqrtRecF64_sqrt/ValExec_DivSqrtRecF64_sqrt.v:994
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__partNegSigma0_A 
	= (0x1fffffU & vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___GEN_39);
    // ALWAYS at test-DivSqrtRecF64_sqrt/ValExec_DivSqrtRecF64_sqrt.v:994
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__fractR0_A 
	= (0x1ffU & (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___GEN_37));
    // ALWAYS at test-DivSqrtRecF64_sqrt/ValExec_DivSqrtRecF64_sqrt.v:994
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__hiSqrR0_A_sqrt 
	= (0x3ffU & (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___GEN_38));
    // ALWAYS at test-DivSqrtRecF64_sqrt/ValExec_DivSqrtRecF64_sqrt.v:2134
    if (vlTOPp->reset) {
	vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_1 = 0U;
    } else {
	if (((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_6) 
	     != (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_8))) {
	    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_1 
		= vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_6;
	}
    }
    // ALWAYS at test-DivSqrtRecF64_sqrt/ValExec_DivSqrtRecF64_sqrt.v:2134
    if (vlTOPp->reset) {
	vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT__value_1 = 0U;
    } else {
	if (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_8) {
	    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT__value_1 
		= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT__wrap_1)
		    ? 0U : (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_14));
	}
    }
    // ALWAYS at test-DivSqrtRecF64_sqrt/ValExec_DivSqrtRecF64_sqrt.v:2134
    if (((~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_5)) 
	 & (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq_io_enq_valid))) {
	vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT____Vlvbound1 
	    = vlTOPp->io_input_bits_b;
	if ((4U >= (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT__value))) {
	    __Vdlyvval__ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_b__v0 
		= vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT____Vlvbound1;
	    __Vdlyvset__ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_b__v0 = 1U;
	    __Vdlyvdim0__ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_b__v0 
		= vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT__value;
	}
    }
    // ALWAYS at test-DivSqrtRecF64_sqrt/ValExec_DivSqrtRecF64_sqrt.v:2134
    if (((~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_5)) 
	 & (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq_io_enq_valid))) {
	vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT____Vlvbound3 
	    = vlTOPp->io_input_bits_detectTininess;
	if ((4U >= (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT__value))) {
	    __Vdlyvval__ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_detectTininess__v0 
		= vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT____Vlvbound3;
	    __Vdlyvset__ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_detectTininess__v0 = 1U;
	    __Vdlyvdim0__ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_detectTininess__v0 
		= vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT__value;
	}
    }
    // ALWAYS at test-DivSqrtRecF64_sqrt/ValExec_DivSqrtRecF64_sqrt.v:2134
    if (((~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_5)) 
	 & (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq_io_enq_valid))) {
	vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT____Vlvbound2 
	    = vlTOPp->io_input_bits_roundingMode;
	if ((4U >= (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT__value))) {
	    __Vdlyvval__ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_roundingMode__v0 
		= vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT____Vlvbound2;
	    __Vdlyvset__ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_roundingMode__v0 = 1U;
	    __Vdlyvdim0__ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_roundingMode__v0 
		= vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT__value;
	}
    }
    // ALWAYS at test-DivSqrtRecF64_sqrt/ValExec_DivSqrtRecF64_sqrt.v:2134
    if (((~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_5)) 
	 & (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq_io_enq_valid))) {
	vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT____Vlvbound5 
	    = vlTOPp->io_input_bits_exceptionFlags;
	if ((4U >= (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT__value))) {
	    __Vdlyvval__ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_exceptionFlags__v0 
		= vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT____Vlvbound5;
	    __Vdlyvset__ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_exceptionFlags__v0 = 1U;
	    __Vdlyvdim0__ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_exceptionFlags__v0 
		= vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT__value;
	}
    }
    // ALWAYS at test-DivSqrtRecF64_sqrt/ValExec_DivSqrtRecF64_sqrt.v:2134
    if (((~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_5)) 
	 & (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq_io_enq_valid))) {
	vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT____Vlvbound4 
	    = vlTOPp->io_input_bits_out;
	if ((4U >= (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT__value))) {
	    __Vdlyvval__ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out__v0 
		= vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT____Vlvbound4;
	    __Vdlyvset__ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out__v0 = 1U;
	    __Vdlyvdim0__ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out__v0 
		= vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT__value;
	}
    }
    // ALWAYS at test-DivSqrtRecF64_sqrt/ValExec_DivSqrtRecF64_sqrt.v:1113
    if (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PC) {
	vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__majorExc_PC 
	    = ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PB)
	        ? (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__majorExc_PB)
	        : (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__majorExc_S));
    }
    // ALWAYS at test-DivSqrtRecF64_sqrt/ValExec_DivSqrtRecF64_sqrt.v:1113
    if (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PC_normalCase) {
	vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__roundingMode_PC 
	    = ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PB)
	        ? (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__roundingMode_PB)
	        : (IData)(vlTOPp->io_input_bits_roundingMode));
    }
    // ALWAYS at test-DivSqrtRecF64_sqrt/ValExec_DivSqrtRecF64_sqrt.v:994
    if (vlTOPp->reset) {
	vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PC = 0U;
    } else {
	if (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_177) {
	    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PC 
		= vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PC;
	}
    }
    // ALWAYS at test-DivSqrtRecF64_sqrt/ValExec_DivSqrtRecF64_sqrt.v:1113
    if (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PC) {
	vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sign_PC 
	    = (1U & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PB)
		      ? (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sign_PB)
		      : vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds_io_b[2U]));
    }
    // ALWAYS at test-DivSqrtRecF64_sqrt/ValExec_DivSqrtRecF64_sqrt.v:994
    if ((2U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_E))) {
	vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isNegRemT_E 
	    = (1U & (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_result_s3[1U] 
		     >> 0x17U));
    }
    // ALWAYS at test-DivSqrtRecF64_sqrt/ValExec_DivSqrtRecF64_sqrt.v:994
    if ((2U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_E))) {
	vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isZeroRemT_E 
	    = ((VL_ULL(0) == (VL_ULL(0x3fffffffffffff) 
			      & (((QData)((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_result_s3[1U])) 
				  << 0x20U) | (QData)((IData)(
							      vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_result_s3[0U]))))) 
	       & (0U == (3U & ((vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_result_s3[2U] 
				<< 0xaU) | (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_result_s3[1U] 
					    >> 0x16U)))));
    }
    // ALWAYS at test-DivSqrtRecF64_sqrt/ValExec_DivSqrtRecF64_sqrt.v:1113
    if (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PC) {
	vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isNaN_PC 
	    = ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PB)
	        ? (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isNaN_PB)
	        : (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isNaN_S));
    }
    // ALWAYS at test-DivSqrtRecF64_sqrt/ValExec_DivSqrtRecF64_sqrt.v:1113
    if (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PC) {
	vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isInf_PC 
	    = ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PB)
	        ? (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isInf_PB)
	        : (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__rawB_S_isInf));
    }
    // ALWAYS at test-DivSqrtRecF64_sqrt/ValExec_DivSqrtRecF64_sqrt.v:1113
    if (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PC) {
	vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isZero_PC 
	    = ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PB)
	        ? (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isZero_PB)
	        : (0U == (7U & ((vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds_io_b[2U] 
				 << 3U) | (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds_io_b[1U] 
					   >> 0x1dU)))));
    }
    // ALWAYS at test-DivSqrtRecF64_sqrt/ValExec_DivSqrtRecF64_sqrt.v:1803
    if (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__val_s2) {
	VL_EXTEND_WQ(108,54, __Vtemp3, vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_a_s2);
	VL_EXTEND_WQ(108,54, __Vtemp4, vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_b_s2);
	VL_MUL_W(4, __Vtemp5, __Vtemp3, __Vtemp4);
	__Vtemp7[0U] = __Vtemp5[0U];
	__Vtemp7[1U] = __Vtemp5[1U];
	__Vtemp7[2U] = __Vtemp5[2U];
	__Vtemp7[3U] = (0xfffU & __Vtemp5[3U]);
	__Vtemp15[0U] = 0U;
	__Vtemp15[1U] = ((6U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_C))
			  ? (0xffffc000U & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sigX1_B) 
					    << 0xeU))
			  : 0U);
	__Vtemp15[2U] = ((6U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_C))
			  ? ((0x3fffU & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sigX1_B) 
					 >> 0x12U)) 
			     | (0xffffc000U & ((IData)(
						       (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sigX1_B 
							>> 0x20U)) 
					       << 0xeU)))
			  : 0U);
	__Vtemp15[3U] = ((6U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_C))
			  ? (0x3fffU & ((IData)((vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sigX1_B 
						 >> 0x20U)) 
					>> 0x12U)) : 0U);
	VL_EXTEND_WW(105,104, __Vtemp16, __Vtemp15);
	VL_EXTEND_WQ(105,56, __Vtemp23, ((3U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_E))
					  ? ((QData)((IData)(
							     (((1U 
								& (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExp_PC))
							        ? 
							       (2U 
								& ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__fractB_PC) 
								   << 1U))
							        : 
							       ((2U 
								 & (((IData)(
									     (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__fractB_PC 
									      >> 1U)) 
								     ^ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__fractB_PC)) 
								    << 1U)) 
								| (1U 
								   & (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__fractB_PC)))) 
							      ^ 
							      (2U 
							       & ((~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sigT_E)) 
								  << 1U))))) 
					     << 0x36U)
					  : VL_ULL(0)));
	__Vtemp24[0U] = (__Vtemp16[0U] | __Vtemp23[0U]);
	__Vtemp24[1U] = (((((1U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B))
			     ? (0xffff8000U & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sigX1_B) 
					       << 0xfU))
			     : 0U) | __Vtemp16[1U]) 
			  | (((4U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_C)) 
			      | (2U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_C)))
			      ? (0xffff8000U & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sigXN_C) 
						<< 0xfU))
			      : 0U)) | __Vtemp23[1U]);
	__Vtemp24[2U] = (((((1U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B))
			     ? ((0x7fffU & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sigX1_B) 
					    >> 0x11U)) 
				| (0xffff8000U & ((IData)(
							  (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sigX1_B 
							   >> 0x20U)) 
						  << 0xfU)))
			     : 0U) | __Vtemp16[2U]) 
			  | (((4U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_C)) 
			      | (2U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_C)))
			      ? ((0x7fffU & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sigXN_C) 
					     >> 0x11U)) 
				 | (0xffff8000U & ((IData)(
							   (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sigXN_C 
							    >> 0x20U)) 
						   << 0xfU)))
			      : 0U)) | __Vtemp23[2U]);
	__Vtemp24[3U] = (((((1U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B))
			     ? (0x7fffU & ((IData)(
						   (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sigX1_B 
						    >> 0x20U)) 
					   >> 0x11U))
			     : 0U) | __Vtemp16[3U]) 
			  | (((4U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_C)) 
			      | (2U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_C)))
			      ? (0x7fffU & ((IData)(
						    (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sigXN_C 
						     >> 0x20U)) 
					    >> 0x11U))
			      : 0U)) | __Vtemp23[3U]);
	VL_ADD_W(4, __Vtemp25, __Vtemp7, __Vtemp24);
	__Vdly__ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_result_s3[0U] 
	    = __Vtemp25[0U];
	__Vdly__ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_result_s3[1U] 
	    = __Vtemp25[1U];
	__Vdly__ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_result_s3[2U] 
	    = __Vtemp25[2U];
	__Vdly__ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_result_s3[3U] 
	    = (0x1ffU & __Vtemp25[3U]);
    }
    // ALWAYSPOST at test-DivSqrtRecF64_sqrt/ValExec_DivSqrtRecF64_sqrt.v:2135
    if (__Vdlyvset__ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_b__v0) {
	vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_b[__Vdlyvdim0__ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_b__v0] 
	    = __Vdlyvval__ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_b__v0;
    }
    // ALWAYSPOST at test-DivSqrtRecF64_sqrt/ValExec_DivSqrtRecF64_sqrt.v:2141
    if (__Vdlyvset__ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_detectTininess__v0) {
	vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_detectTininess[__Vdlyvdim0__ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_detectTininess__v0] 
	    = __Vdlyvval__ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_detectTininess__v0;
    }
    // ALWAYSPOST at test-DivSqrtRecF64_sqrt/ValExec_DivSqrtRecF64_sqrt.v:2138
    if (__Vdlyvset__ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_roundingMode__v0) {
	vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_roundingMode[__Vdlyvdim0__ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_roundingMode__v0] 
	    = __Vdlyvval__ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_roundingMode__v0;
    }
    // ALWAYSPOST at test-DivSqrtRecF64_sqrt/ValExec_DivSqrtRecF64_sqrt.v:2147
    if (__Vdlyvset__ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_exceptionFlags__v0) {
	vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_exceptionFlags[__Vdlyvdim0__ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_exceptionFlags__v0] 
	    = __Vdlyvval__ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_exceptionFlags__v0;
    }
    // ALWAYSPOST at test-DivSqrtRecF64_sqrt/ValExec_DivSqrtRecF64_sqrt.v:2144
    if (__Vdlyvset__ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out__v0) {
	vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out[__Vdlyvdim0__ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out__v0] 
	    = __Vdlyvval__ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out__v0;
    }
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT__wrap_1 
	= (4U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT__value_1));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_14 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT__value_1)));
    vlTOPp->io_output_b = ((4U >= (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT__value_1))
			    ? vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_b
			   [vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT__value_1]
			    : VL_ULL(0));
    vlTOPp->io_output_detectTininess = ((4U >= (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT__value_1)) 
					& vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_detectTininess
					[vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT__value_1]);
    vlTOPp->io_output_roundingMode = ((4U >= (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT__value_1))
				       ? vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_roundingMode
				      [vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT__value_1]
				       : 0U);
    vlTOPp->io_expected_exceptionFlags = ((4U >= (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT__value_1))
					   ? vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_exceptionFlags
					  [vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT__value_1]
					   : 0U);
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
	= ((4U >= (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT__value_1))
	    ? vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out
	   [vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT__value_1]
	    : VL_ULL(0));
    // ALWAYS at test-DivSqrtRecF64_sqrt/ValExec_DivSqrtRecF64_sqrt.v:2134
    if (vlTOPp->reset) {
	vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT__value = 0U;
    } else {
	if (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_6) {
	    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT__value 
		= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT__wrap)
		    ? 0U : (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_12));
	}
    }
    // ALWAYS at test-DivSqrtRecF64_sqrt/ValExec_DivSqrtRecF64_sqrt.v:1060
    if (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PB) {
	vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__majorExc_PB 
	    = ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PA)
	        ? (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__majorExc_PA)
	        : (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__majorExc_S));
    }
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_165 
	= ((0U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__roundingMode_PC)) 
	   | (4U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__roundingMode_PC)));
    // ALWAYS at test-DivSqrtRecF64_sqrt/ValExec_DivSqrtRecF64_sqrt.v:1060
    if (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PB_normalCase) {
	vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__roundingMode_PB 
	    = ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PA)
	        ? (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__roundingMode_PA)
	        : (IData)(vlTOPp->io_input_bits_roundingMode));
    }
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
	= (((2U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__roundingMode_PC)) 
	    & (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sign_PC)) 
	   | ((3U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__roundingMode_PC)) 
	      & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sign_PC))));
    // ALWAYS at test-DivSqrtRecF64_sqrt/ValExec_DivSqrtRecF64_sqrt.v:1060
    if (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PB) {
	vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sign_PB 
	    = (1U & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PA)
		      ? (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sign_PA)
		      : vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds_io_b[2U]));
    }
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw_io_invalidExc 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__majorExc_PC) 
	   & (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isNaN_PC));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw_io_infiniteExc 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__majorExc_PC) 
	   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isNaN_PC)));
    // ALWAYS at test-DivSqrtRecF64_sqrt/ValExec_DivSqrtRecF64_sqrt.v:1060
    if (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PB) {
	vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isNaN_PB 
	    = ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PA)
	        ? (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isNaN_PA)
	        : (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isNaN_S));
    }
    // ALWAYS at test-DivSqrtRecF64_sqrt/ValExec_DivSqrtRecF64_sqrt.v:1060
    if (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PB) {
	vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isInf_PB 
	    = ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PA)
	        ? (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isInf_PA)
	        : (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__rawB_S_isInf));
    }
    // ALWAYS at test-DivSqrtRecF64_sqrt/ValExec_DivSqrtRecF64_sqrt.v:994
    if (vlTOPp->reset) {
	vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PB = 0U;
    } else {
	if (((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PB) 
	     | (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__leaving_PB))) {
	    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PB 
		= vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PB;
	}
    }
    // ALWAYS at test-DivSqrtRecF64_sqrt/ValExec_DivSqrtRecF64_sqrt.v:1060
    if (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PB) {
	vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isZero_PB 
	    = ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PA)
	        ? (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isZero_PA)
	        : (0U == (7U & ((vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds_io_b[2U] 
				 << 3U) | (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds_io_b[1U] 
					   >> 0x1dU)))));
    }
    // ALWAYS at test-DivSqrtRecF64_sqrt/ValExec_DivSqrtRecF64_sqrt.v:1804
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__val_s2 
	= vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__val_s1;
    // ALWAYS at test-DivSqrtRecF64_sqrt/ValExec_DivSqrtRecF64_sqrt.v:994
    if (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PC_normalCase) {
	vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__fractB_PC 
	    = vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__fractB_PB;
    }
    // ALWAYS at test-DivSqrtRecF64_sqrt/ValExec_DivSqrtRecF64_sqrt.v:994
    if ((3U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B))) {
	vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sigX1_B 
	    = (VL_ULL(0x3ffffffffffffff) & (((QData)((IData)(
							     vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_result_s3[3U])) 
					     << 0x31U) 
					    | (((QData)((IData)(
								vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_result_s3[2U])) 
						<< 0x11U) 
					       | ((QData)((IData)(
								  vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_result_s3[1U])) 
						  >> 0xfU))));
    }
    // ALWAYS at test-DivSqrtRecF64_sqrt/ValExec_DivSqrtRecF64_sqrt.v:994
    if (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PC_normalCase) {
	vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExp_PC 
	    = vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExp_PB;
    }
    // ALWAYS at test-DivSqrtRecF64_sqrt/ValExec_DivSqrtRecF64_sqrt.v:994
    if (((6U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_C)) 
	 | (3U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_C)))) {
	vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sigXN_C 
	    = (VL_ULL(0x3ffffffffffffff) & (((QData)((IData)(
							     vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_result_s3[3U])) 
					     << 0x31U) 
					    | (((QData)((IData)(
								vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_result_s3[2U])) 
						<< 0x11U) 
					       | ((QData)((IData)(
								  vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_result_s3[1U])) 
						  >> 0xfU))));
    }
    // ALWAYS at test-DivSqrtRecF64_sqrt/ValExec_DivSqrtRecF64_sqrt.v:994
    if ((1U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_C))) {
	vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sigT_E 
	    = (VL_ULL(0x3fffffffffffff) & (~ vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zComplSigT_C1_sqrt));
    }
    // ALWAYS at test-DivSqrtRecF64_sqrt/ValExec_DivSqrtRecF64_sqrt.v:994
    if (vlTOPp->reset) {
	vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_E = 0U;
    } else {
	if (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_123) {
	    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_E 
		= ((1U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_C))
		    ? 4U : (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_125));
	}
    }
    // ALWAYS at test-DivSqrtRecF64_sqrt/ValExec_DivSqrtRecF64_sqrt.v:1804
    if (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__val_s1) {
	vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_a_s2 
	    = vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_a_s1;
    }
    // ALWAYS at test-DivSqrtRecF64_sqrt/ValExec_DivSqrtRecF64_sqrt.v:1804
    if (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__val_s1) {
	vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_b_s2 
	    = vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_b_s1;
    }
    vlTOPp->io_expected_out = vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data;
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT___T_259 
	= ((0U == (0x7ffU & (IData)((vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
				     >> 0x34U)))) & 
	   (VL_ULL(0) == (VL_ULL(0xfffffffffffff) & vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT___T_249 
	= ((1U & (IData)((vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
			  >> 0x33U))) ? 0U : ((1U & (IData)(
							    (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
							     >> 0x32U)))
					       ? 1U
					       : ((1U 
						   & (IData)(
							     (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
							      >> 0x31U)))
						   ? 2U
						   : 
						  ((1U 
						    & (IData)(
							      (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
							       >> 0x30U)))
						    ? 3U
						    : 
						   ((1U 
						     & (IData)(
							       (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
								>> 0x2fU)))
						     ? 4U
						     : 
						    ((1U 
						      & (IData)(
								(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
								 >> 0x2eU)))
						      ? 5U
						      : 
						     ((1U 
						       & (IData)(
								 (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
								  >> 0x2dU)))
						       ? 6U
						       : 
						      ((1U 
							& (IData)(
								  (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
								   >> 0x2cU)))
						        ? 7U
						        : 
						       ((1U 
							 & (IData)(
								   (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
								    >> 0x2bU)))
							 ? 8U
							 : 
							((1U 
							  & (IData)(
								    (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
								     >> 0x2aU)))
							  ? 9U
							  : 
							 ((1U 
							   & (IData)(
								     (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
								      >> 0x29U)))
							   ? 0xaU
							   : 
							  ((1U 
							    & (IData)(
								      (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
								       >> 0x28U)))
							    ? 0xbU
							    : 
							   ((1U 
							     & (IData)(
								       (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
									>> 0x27U)))
							     ? 0xcU
							     : 
							    ((1U 
							      & (IData)(
									(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
									 >> 0x26U)))
							      ? 0xdU
							      : 
							     ((1U 
							       & (IData)(
									 (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
									  >> 0x25U)))
							       ? 0xeU
							       : 
							      ((1U 
								& (IData)(
									  (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
									   >> 0x24U)))
							        ? 0xfU
							        : 
							       ((1U 
								 & (IData)(
									   (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
									    >> 0x23U)))
								 ? 0x10U
								 : 
								((1U 
								  & (IData)(
									    (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
									     >> 0x22U)))
								  ? 0x11U
								  : 
								 ((1U 
								   & (IData)(
									     (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
									      >> 0x21U)))
								   ? 0x12U
								   : 
								  ((1U 
								    & (IData)(
									      (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
									       >> 0x20U)))
								    ? 0x13U
								    : 
								   ((1U 
								     & (IData)(
									       (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0x1fU)))
								     ? 0x14U
								     : 
								    ((1U 
								      & (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0x1eU)))
								      ? 0x15U
								      : 
								     ((1U 
								       & (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0x1dU)))
								       ? 0x16U
								       : 
								      ((1U 
									& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0x1cU)))
								        ? 0x17U
								        : 
								       ((1U 
									 & (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0x1bU)))
									 ? 0x18U
									 : 
									((1U 
									  & (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0x1aU)))
									  ? 0x19U
									  : 
									 ((1U 
									   & (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0x19U)))
									   ? 0x1aU
									   : 
									  ((1U 
									    & (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0x18U)))
									    ? 0x1bU
									    : 
									   ((1U 
									     & (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0x17U)))
									     ? 0x1cU
									     : 
									    ((1U 
									      & (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0x16U)))
									      ? 0x1dU
									      : 
									     ((1U 
									       & (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0x15U)))
									       ? 0x1eU
									       : 
									      ((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0x14U)))
									        ? 0x1fU
									        : 
									       ((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0x13U)))
										 ? 0x20U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0x12U)))
										 ? 0x21U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0x11U)))
										 ? 0x22U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0x10U)))
										 ? 0x23U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0xfU)))
										 ? 0x24U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0xeU)))
										 ? 0x25U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0xdU)))
										 ? 0x26U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0xcU)))
										 ? 0x27U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0xbU)))
										 ? 0x28U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0xaU)))
										 ? 0x29U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 9U)))
										 ? 0x2aU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 8U)))
										 ? 0x2bU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 7U)))
										 ? 0x2cU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 6U)))
										 ? 0x2dU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 5U)))
										 ? 0x2eU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 4U)))
										 ? 0x2fU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 3U)))
										 ? 0x30U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 2U)))
										 ? 0x31U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 1U)))
										 ? 0x32U
										 : 0x33U)))))))))))))))))))))))))))))))))))))))))))))))))));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_165) 
	   | (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw_io_invalidExc) 
	   | (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isNaN_PC));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw_io_infiniteExc) 
	   | (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isInf_PC));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT___T_258 
	= (0xfffU & (((0U == (0x7ffU & (IData)((vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
						>> 0x34U))))
		       ? (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT___T_249))
		       : (0x7ffU & (IData)((vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
					    >> 0x34U)))) 
		     + (0x400U | ((0U == (0x7ffU & (IData)(
							   (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
							    >> 0x34U))))
				   ? 2U : 1U))));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT__wrap 
	= (4U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT__value));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_12 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT__value)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_2 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT__value) 
	   == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT__value_1));
    // ALWAYS at test-DivSqrtRecF64_sqrt/ValExec_DivSqrtRecF64_sqrt.v:994
    if (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PA) {
	vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__majorExc_PA 
	    = vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__majorExc_S;
    }
    // ALWAYS at test-DivSqrtRecF64_sqrt/ValExec_DivSqrtRecF64_sqrt.v:994
    if (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_A7_sqrt) {
	vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__roundingMode_PA 
	    = vlTOPp->io_input_bits_roundingMode;
    }
    // ALWAYS at test-DivSqrtRecF64_sqrt/ValExec_DivSqrtRecF64_sqrt.v:994
    if (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PA) {
	vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sign_PA 
	    = (1U & vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds_io_b[2U]);
    }
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
	= (1U & (((~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
		  & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut))) 
		 & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isZero_PC))));
    // ALWAYS at test-DivSqrtRecF64_sqrt/ValExec_DivSqrtRecF64_sqrt.v:994
    if (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PA) {
	vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isNaN_PA 
	    = vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isNaN_S;
    }
    // ALWAYS at test-DivSqrtRecF64_sqrt/ValExec_DivSqrtRecF64_sqrt.v:994
    if (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PA) {
	vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isInf_PA 
	    = vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__rawB_S_isInf;
    }
    // ALWAYS at test-DivSqrtRecF64_sqrt/ValExec_DivSqrtRecF64_sqrt.v:994
    if (vlTOPp->reset) {
	vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PA = 0U;
    } else {
	if (((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PA) 
	     | (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__leaving_PA))) {
	    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PA 
		= vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PA;
	}
    }
    // ALWAYS at test-DivSqrtRecF64_sqrt/ValExec_DivSqrtRecF64_sqrt.v:994
    if (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PA) {
	vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isZero_PA 
	    = (0U == (7U & ((vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds_io_b[2U] 
			     << 3U) | (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds_io_b[1U] 
				       >> 0x1dU))));
    }
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__normalCase_PB 
	= (1U & (((~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isNaN_PB)) 
		  & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isInf_PB))) 
		 & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isZero_PB))));
    // ALWAYS at test-DivSqrtRecF64_sqrt/ValExec_DivSqrtRecF64_sqrt.v:994
    if (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PB_normalCase) {
	vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__fractB_PB 
	    = vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__fractB_PA;
    }
    // ALWAYS at test-DivSqrtRecF64_sqrt/ValExec_DivSqrtRecF64_sqrt.v:1095
    if (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PB_normalCase) {
	vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExp_PB 
	    = vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExp_PA;
    }
    __Vtemp28[0U] = 0U;
    __Vtemp28[1U] = 0U;
    __Vtemp28[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp29, __Vtemp28, (0x3fU 
						   & (~ 
						      (0x1fffU 
						       & VL_EXTENDS_II(13,12, 
								       (0xfffU 
									& ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExp_PC) 
									   >> 1U)))))));
    __Vtemp32[0U] = 0U;
    __Vtemp32[1U] = 0U;
    __Vtemp32[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp33, __Vtemp32, (0x3fU 
						   & (~ 
						      (0x1fffU 
						       & VL_EXTENDS_II(13,12, 
								       (0xfffU 
									& ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExp_PC) 
									   >> 1U)))))));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_79 
	= ((0xffU & ((0x800U & (__Vtemp29[2U] << 0xbU)) 
		     | (__Vtemp29[1U] >> 0x15U))) | 
	   (0xff00U & ((0x8000000U & (__Vtemp33[2U] 
				      << 0x1bU)) | 
		       (0x7ffff00U & (__Vtemp33[1U] 
				      >> 5U)))));
    __Vtemp36[0U] = 0U;
    __Vtemp36[1U] = 0U;
    __Vtemp36[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp37, __Vtemp36, (0x3fU 
						   & (~ 
						      (0x1fffU 
						       & VL_EXTENDS_II(13,12, 
								       (0xfffU 
									& ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExp_PC) 
									   >> 1U)))))));
    __Vtemp40[0U] = 0U;
    __Vtemp40[1U] = 0U;
    __Vtemp40[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp41, __Vtemp40, (0x3fU 
						   & (~ 
						      (0x1fffU 
						       & VL_EXTENDS_II(13,12, 
								       (0xfffU 
									& ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExp_PC) 
									   >> 1U)))))));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_28 
	= ((0xffffU & ((__Vtemp37[1U] << 3U) | (__Vtemp37[0U] 
						>> 0x1dU))) 
	   | (0xffff0000U & (__Vtemp41[0U] << 3U)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw_io_rawOut_sig 
	= ((VL_ULL(0xfffffffffffffe) & (((1U & ((~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isNegRemT_E)) 
						& (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isZeroRemT_E))))
					  ? vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sigT_E
					  : (VL_ULL(1) 
					     + vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sigT_E)) 
					<< 1U)) | (QData)((IData)(
								  (1U 
								   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isZeroRemT_E))))));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_125 
	= (7U & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_E) 
		 - (IData)(1U)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_leaving_PC 
	= (1U & ((~ (((~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isNaN_PC)) 
		      & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isInf_PC))) 
		     & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isZero_PC)))) 
		 | (1U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_E))));
    // ALWAYS at test-DivSqrtRecF64_sqrt/ValExec_DivSqrtRecF64_sqrt.v:1803
    if ((1U & (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw_io_usingMulAdd))) {
	if (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw_io_latchMulAddA_0) {
	    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_a_s1 
		= (((((((1U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A))
			 ? ((QData)((IData)(((1U & (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExp_PA))
					      ? (0x10000U 
						 | (0xfffeU 
						    & (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__mulAdd9Out_A 
						       >> 9U)))
					      : (0x8000U 
						 | (0x7fffU 
						    & (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__mulAdd9Out_A 
						       >> 0xaU)))))) 
			    << 0x24U) : VL_ULL(0)) 
		       | ((7U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B))
			   ? (VL_ULL(0x10000000000000) 
			      | vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__fractB_PA)
			   : VL_ULL(0))) | (VL_ULL(0x3ffffffff) 
					    & (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zSigma1_B4 
					       >> 0xcU))) 
		     | (VL_ULL(0x3fffffffffff) & ((
						   (3U 
						    == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B)) 
						   | (6U 
						      == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_C)))
						   ? 
						  (((QData)((IData)(
								    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_result_s3[3U])) 
						    << 0x25U) 
						   | (((QData)((IData)(
								       vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_result_s3[2U])) 
						       << 5U) 
						      | ((QData)((IData)(
									 vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_result_s3[1U])) 
							 >> 0x1bU)))
						   : VL_ULL(0)))) 
		    | ((4U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_C))
		        ? ((QData)((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__u_C_sqrt)) 
			   << 0xfU) : VL_ULL(0))) | vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zComplSigT_C1_sqrt);
	}
    }
    // ALWAYS at test-DivSqrtRecF64_sqrt/ValExec_DivSqrtRecF64_sqrt.v:1803
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__val_s1 
	= (1U & (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw_io_usingMulAdd));
    // ALWAYS at test-DivSqrtRecF64_sqrt/ValExec_DivSqrtRecF64_sqrt.v:1803
    if ((1U & (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw_io_usingMulAdd))) {
	if (((((((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_449) 
		 | (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_B6_sqrt)) 
		| (4U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B))) 
	       | (6U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_C))) 
	      | (4U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_C))) 
	     | (1U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_C)))) {
	    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_b_s1 
		= ((((((((1U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A))
			  ? ((QData)((IData)((0x8000U 
					      | (0x7fffU 
						 & (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__mulAdd9Out_A 
						    >> 0xaU))))) 
			     << 0x24U) : VL_ULL(0)) 
			| ((7U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B))
			    ? ((QData)((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__ESqrR1_B_sqrt)) 
			       << 0x13U) : VL_ULL(0))) 
		       | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_B6_sqrt)
			   ? ((QData)((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__ER1_B_sqrt)) 
			      << 0x24U) : VL_ULL(0))) 
		      | vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zSigma1_B4) 
		     | (QData)((IData)((0x3fffffffU 
					& ((6U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_C))
					    ? (IData)(
						      (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sqrSigma1_C 
						       >> 1U))
					    : 0U))))) 
		    | ((4U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_C))
		        ? vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sqrSigma1_C
		        : VL_ULL(0))) | vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zComplSigT_C1_sqrt);
	}
    }
    VL_EXTEND_WQ(115,52, __Vtemp44, (VL_ULL(0xfffffffffffff) 
				     & vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data));
    VL_SHIFTL_WWI(115,115,6, __Vtemp45, __Vtemp44, (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT___T_249));
    __Vtemp47[1U] = ((0xe0000000U & ((((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT___T_259)
				        ? 0U : ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT___T_258) 
						>> 9U)) 
				      | ((3U == (3U 
						 & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT___T_258) 
						    >> 0xaU))) 
					 & (VL_ULL(0) 
					    != (VL_ULL(0xfffffffffffff) 
						& vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data)))) 
				     << 0x1dU)) | (IData)(
							  ((((QData)((IData)(
									     (0x1ffU 
									      & (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT___T_258)))) 
							     << 0x34U) 
							    | (VL_ULL(0xfffffffffffff) 
							       & ((0U 
								   == 
								   (0x7ffU 
								    & (IData)(
									      (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
									       >> 0x34U))))
								   ? 
								  (VL_ULL(0xffffffffffffe) 
								   & (((QData)((IData)(
										__Vtemp45[1U])) 
								       << 0x21U) 
								      | ((QData)((IData)(
										__Vtemp45[0U])) 
									 << 1U)))
								   : vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data))) 
							   >> 0x20U)));
    vlTOPp->io_expected_recOut[0U] = (IData)((((QData)((IData)(
							       (0x1ffU 
								& (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT___T_258)))) 
					       << 0x34U) 
					      | (VL_ULL(0xfffffffffffff) 
						 & ((0U 
						     == 
						     (0x7ffU 
						      & (IData)(
								(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
								 >> 0x34U))))
						     ? 
						    (VL_ULL(0xffffffffffffe) 
						     & (((QData)((IData)(
									 __Vtemp45[1U])) 
							 << 0x21U) 
							| ((QData)((IData)(
									   __Vtemp45[0U])) 
							   << 1U)))
						     : vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data))));
    vlTOPp->io_expected_recOut[1U] = __Vtemp47[1U];
    vlTOPp->io_expected_recOut[2U] = (1U & (IData)(
						   (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
						    >> 0x3fU)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_4 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_2) 
	   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_1)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_5 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_2) 
	   & (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_1));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_89 
	= ((0xf0fU & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_79) 
		      >> 4U)) | (0xf0f0U & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_79) 
					    << 4U)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_38 
	= ((0xff00ffU & (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_28 
			 >> 8U)) | (0xff00ff00U & (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_28 
						   << 8U)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw_io_rawOutValid_sqrt 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PC) 
	   & (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_leaving_PC));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__ready_PC 
	= (1U & ((~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PC)) 
		 | (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_leaving_PC)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__normalCase_PA 
	= (1U & (((~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isNaN_PA)) 
		  & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isInf_PA))) 
		 & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isZero_PA))));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_99 
	= ((0x3333U & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_89) 
		       >> 2U)) | (0xccccU & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_89) 
					     << 2U)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_48 
	= ((0xf0f0f0fU & (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_38 
			  >> 4U)) | (0xf0f0f0f0U & 
				     (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_38 
				      << 4U)));
    vlTOPp->io_check = vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw_io_rawOutValid_sqrt;
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_8 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw_io_rawOutValid_sqrt) 
	   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_4)));
    // ALWAYS at test-DivSqrtRecF64_sqrt/ValExec_DivSqrtRecF64_sqrt.v:994
    if (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_A7_sqrt) {
	vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__fractB_PA 
	    = (VL_ULL(0xfffffffffffff) & vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__rawB_S_sig);
    }
    // ALWAYS at test-DivSqrtRecF64_sqrt/ValExec_DivSqrtRecF64_sqrt.v:994
    if ((5U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_C))) {
	vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__u_C_sqrt 
	    = (0x7fffffffU & ((vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_result_s3[3U] 
			       << 0x17U) | (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_result_s3[2U] 
					    >> 9U)));
    }
    // ALWAYS at test-DivSqrtRecF64_sqrt/ValExec_DivSqrtRecF64_sqrt.v:1095
    if ((1U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A))) {
	vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__ER1_B_sqrt 
	    = ((1U & (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExp_PA))
	        ? (0x10000U | (0xfffeU & (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__mulAdd9Out_A 
					  >> 9U))) : 
	       (0x8000U | (0x7fffU & (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__mulAdd9Out_A 
				      >> 0xaU))));
    }
    // ALWAYS at test-DivSqrtRecF64_sqrt/ValExec_DivSqrtRecF64_sqrt.v:994
    if ((8U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B))) {
	vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__ESqrR1_B_sqrt 
	    = ((vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_result_s3[3U] 
		<< 0x18U) | (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_result_s3[2U] 
			     >> 8U));
    }
    // ALWAYS at test-DivSqrtRecF64_sqrt/ValExec_DivSqrtRecF64_sqrt.v:994
    if ((1U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B))) {
	vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sqrSigma1_C 
	    = (VL_ULL(0x1ffffffff) & (((QData)((IData)(
						       vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_result_s3[3U])) 
				       << 0x31U) | 
				      (((QData)((IData)(
							vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_result_s3[2U])) 
					<< 0x11U) | 
				       ((QData)((IData)(
							vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_result_s3[1U])) 
					>> 0xfU))));
    }
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_58 
	= ((0x33333333U & (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_48 
			   >> 2U)) | (0xccccccccU & 
				      (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_48 
				       << 2U)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_result_s3[0U] 
	= __Vdly__ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_result_s3[0U];
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_result_s3[1U] 
	= __Vdly__ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_result_s3[1U];
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_result_s3[2U] 
	= __Vdly__ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_result_s3[2U];
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_result_s3[3U] 
	= __Vdly__ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_result_s3[3U];
    __Vtemp49[0U] = 0U;
    __Vtemp49[1U] = 0U;
    __Vtemp49[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp50, __Vtemp49, (0x3fU 
						   & (~ 
						      (0x1fffU 
						       & VL_EXTENDS_II(13,12, 
								       (0xfffU 
									& ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExp_PC) 
									   >> 1U)))))));
    __Vtemp53[0U] = 0U;
    __Vtemp53[1U] = 0U;
    __Vtemp53[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp54, __Vtemp53, (0x3fU 
						   & (~ 
						      (0x1fffU 
						       & VL_EXTENDS_II(13,12, 
								       (0xfffU 
									& ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExp_PC) 
									   >> 1U)))))));
    __Vtemp57[0U] = 0U;
    __Vtemp57[1U] = 0U;
    __Vtemp57[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp58, __Vtemp57, (0x3fU 
						   & (~ 
						      (0x1fffU 
						       & VL_EXTENDS_II(13,12, 
								       (0xfffU 
									& ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExp_PC) 
									   >> 1U)))))));
    __Vtemp61[0U] = 0U;
    __Vtemp61[1U] = 0U;
    __Vtemp61[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp62, __Vtemp61, (0x3fU 
						   & (~ 
						      (0x1fffU 
						       & VL_EXTENDS_II(13,12, 
								       (0xfffU 
									& ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExp_PC) 
									   >> 1U)))))));
    __Vtemp65[0U] = 0U;
    __Vtemp65[1U] = 0U;
    __Vtemp65[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp66, __Vtemp65, (0x3fU 
						   & (~ 
						      (0x1fffU 
						       & VL_EXTENDS_II(13,12, 
								       (0xfffU 
									& ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExp_PC) 
									   >> 1U)))))));
    __Vtemp69[0U] = 0U;
    __Vtemp69[1U] = 0U;
    __Vtemp69[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp70, __Vtemp69, (0x3fU 
						   & (~ 
						      (0x1fffU 
						       & VL_EXTENDS_II(13,12, 
								       (0xfffU 
									& ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExp_PC) 
									   >> 1U)))))));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_153 
	= ((0x800U & ((IData)(0x400U) + VL_EXTENDS_II(13,12, 
						      (0xfffU 
						       & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExp_PC) 
							  >> 1U)))))
	    ? VL_ULL(0) : ((0x400U & ((IData)(0x400U) 
				      + VL_EXTENDS_II(13,12, 
						      (0xfffU 
						       & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExp_PC) 
							  >> 1U)))))
			    ? (QData)((IData)(((0x200U 
						& ((IData)(0x400U) 
						   + 
						   VL_EXTENDS_II(13,12, 
								 (0xfffU 
								  & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExp_PC) 
								     >> 1U)))))
					        ? 0U
					        : (
						   (0x100U 
						    & ((IData)(0x400U) 
						       + 
						       VL_EXTENDS_II(13,12, 
								     (0xfffU 
								      & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExp_PC) 
									 >> 1U)))))
						    ? 0U
						    : 
						   ((0x80U 
						     & ((IData)(0x400U) 
							+ 
							VL_EXTENDS_II(13,12, 
								      (0xfffU 
								       & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExp_PC) 
									  >> 1U)))))
						     ? 0U
						     : 
						    ((0x40U 
						      & ((IData)(0x400U) 
							 + 
							 VL_EXTENDS_II(13,12, 
								       (0xfffU 
									& ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExp_PC) 
									   >> 1U)))))
						      ? 0U
						      : 
						     ((4U 
						       & (__Vtemp50[0U] 
							  << 2U)) 
						      | ((2U 
							  & __Vtemp54[0U]) 
							 | (1U 
							    & (__Vtemp58[0U] 
							       >> 2U))))))))))
			    : (VL_ULL(7) | (VL_ULL(0x3ffffffffffff8) 
					    & ((~ (
						   (0x200U 
						    & ((IData)(0x400U) 
						       + 
						       VL_EXTENDS_II(13,12, 
								     (0xfffU 
								      & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExp_PC) 
									 >> 1U)))))
						    ? 
						   ((0x100U 
						     & ((IData)(0x400U) 
							+ 
							VL_EXTENDS_II(13,12, 
								      (0xfffU 
								       & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExp_PC) 
									  >> 1U)))))
						     ? 
						    ((0x80U 
						      & ((IData)(0x400U) 
							 + 
							 VL_EXTENDS_II(13,12, 
								       (0xfffU 
									& ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExp_PC) 
									   >> 1U)))))
						      ? 
						     ((0x40U 
						       & ((IData)(0x400U) 
							  + 
							  VL_EXTENDS_II(13,12, 
									(0xfffU 
									 & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExp_PC) 
									    >> 1U)))))
						       ? 
						      (~ 
						       (((QData)((IData)(
									 ((0x55555555U 
									   & (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_58 
									      >> 1U)) 
									  | (0xaaaaaaaaU 
									     & (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_58 
										<< 1U))))) 
							 << 0x13U) 
							| (QData)((IData)(
									  (((0x2aaa8U 
									     & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_99) 
										<< 2U)) 
									    | (0x55550U 
									       & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_99) 
										<< 4U))) 
									   | ((4U 
									       & (__Vtemp62[1U] 
										>> 0x1bU)) 
									      | ((2U 
										& (__Vtemp66[1U] 
										>> 0x1dU)) 
										| (1U 
										& (__Vtemp70[1U] 
										>> 0x1fU)))))))))
						       : VL_ULL(0))
						      : VL_ULL(0))
						     : VL_ULL(0))
						    : VL_ULL(0))) 
					       << 3U)))));
    // ALWAYS at test-DivSqrtRecF64_sqrt/ValExec_DivSqrtRecF64_sqrt.v:994
    if (vlTOPp->reset) {
	vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_C = 0U;
    } else {
	if (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_112) {
	    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_C 
		= ((1U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B))
		    ? 6U : (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_115));
	}
    }
    // ALWAYS at test-DivSqrtRecF64_sqrt/ValExec_DivSqrtRecF64_sqrt.v:994
    if (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_A7_sqrt) {
	vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExp_PA 
	    = (0xfffU & ((vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds_io_b[2U] 
			  << 0xcU) | (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds_io_b[1U] 
				      >> 0x14U)));
    }
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_162 
	= (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw_io_rawOut_sig 
	   & (VL_ULL(1) | (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_153 
			   << 1U)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_159 
	= ((~ (VL_ULL(1) | (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_153 
			    << 1U))) & (VL_ULL(3) | 
					(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_153 
					 << 2U)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_160 
	= (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw_io_rawOut_sig 
	   & vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_159);
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_115 
	= (7U & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_C) 
		 - (IData)(1U)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_123 
	= ((1U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_C)) 
	   | (0U != (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_E)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zComplSigT_C1_sqrt 
	= (VL_ULL(0x3fffffffffffff) & ((1U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_C))
				        ? (~ (((QData)((IData)(
							       vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_result_s3[3U])) 
					       << 0x2dU) 
					      | (((QData)((IData)(
								  vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_result_s3[2U])) 
						  << 0xdU) 
						 | ((QData)((IData)(
								    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_result_s3[1U])) 
						    >> 0x13U))))
				        : VL_ULL(0)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PC_normalCase 
	= (((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PB) 
	    & (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__normalCase_PB)) 
	   & (3U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_C)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_leaving_PB 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__normalCase_PB)
	    ? (3U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_C))
	    : (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__ready_PC));
    // ALWAYS at test-DivSqrtRecF64_sqrt/ValExec_DivSqrtRecF64_sqrt.v:994
    if (vlTOPp->reset) {
	vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B = 0U;
    } else {
	if (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_94) {
	    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B 
		= ((1U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A))
		    ? 0xaU : (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_97));
	}
    }
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_164 
	= ((VL_ULL(0) != vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_160) 
	   | (VL_ULL(0) != vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_162));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__leaving_PB 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PB) 
	   & (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_leaving_PB));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__ready_PB 
	= (1U & ((~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PB)) 
		 | (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_leaving_PB)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_186 
	= (VL_ULL(0x7fffffffffffff) & ((((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_165) 
					 & (VL_ULL(0) 
					    != vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_160)) 
					| ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
					   & (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_164)))
				        ? ((VL_ULL(1) 
					    + (VL_ULL(0x3fffffffffffff) 
					       & ((vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw_io_rawOut_sig 
						   >> 2U) 
						  | (VL_ULL(0x3fffffffffffffff) 
						     & vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_153)))) 
					   & (~ (((
						   (0U 
						    == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__roundingMode_PC)) 
						   & (VL_ULL(0) 
						      != vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_160)) 
						  & (VL_ULL(0) 
						     == vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_162))
						  ? 
						 (VL_ULL(1) 
						  | (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_153 
						     << 1U))
						  : VL_ULL(0))))
				        : ((VL_ULL(0x3fffffffffffff) 
					    & ((vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw_io_rawOut_sig 
						& (~ 
						   (VL_ULL(3) 
						    | (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_153 
						       << 2U)))) 
					       >> 2U)) 
					   | (((6U 
						== (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__roundingMode_PC)) 
					       & (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_164))
					       ? (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_159 
						  >> 1U)
					       : VL_ULL(0)))));
    // ALWAYS at test-DivSqrtRecF64_sqrt/ValExec_DivSqrtRecF64_sqrt.v:994
    if (vlTOPp->reset) {
	vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A = 0U;
    } else {
	if (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_81) {
	    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A 
		= vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_89;
	}
    }
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_97 
	= (0xfU & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B) 
		   - (IData)(1U)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_112 
	= ((1U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B)) 
	   | (0U != (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_C)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zSigma1_B4 
	= (VL_ULL(0x3fffffffffff) & ((4U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B))
				      ? (~ (((QData)((IData)(
							     vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_result_s3[3U])) 
					     << 0x33U) 
					    | (((QData)((IData)(
								vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_result_s3[2U])) 
						<< 0x13U) 
					       | ((QData)((IData)(
								  vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_result_s3[1U])) 
						  >> 0xdU))))
				      : VL_ULL(0)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PB_normalCase 
	= (((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PA) 
	    & (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__normalCase_PA)) 
	   & (7U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_B6_sqrt 
	= ((6U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B)) 
	   & (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PB));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_B5_sqrt 
	= ((5U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B)) 
	   & (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PB));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_B4_sqrt 
	= ((4U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B)) 
	   & (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PB));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_leaving_PA 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__normalCase_PA)
	    ? (7U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B))
	    : (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__ready_PB));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189 
	= (0x3fffU & (VL_EXTENDS_II(14,13, (0x1fffU 
					    & ((IData)(0x400U) 
					       + VL_EXTENDS_II(13,12, 
							       (0xfffU 
								& ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExp_PC) 
								   >> 1U)))))) 
		      + VL_EXTENDS_II(14,13, (3U & (IData)(
							   (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_186 
							    >> 0x35U))))));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__leaving_PA 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PA) 
	   & (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_leaving_PA));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw_io_inReady_sqrt 
	= ((((((~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PA)) 
	       | (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_leaving_PA)) 
	      & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_B6_sqrt))) 
	     & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_B5_sqrt))) 
	    & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_B4_sqrt))) 
	   & (1U != (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut 
	= (((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
	    & VL_GTS_III(1,14,14, 0x3ceU, (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189))) 
	   & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
	      | (6U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__roundingMode_PC))));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
	   & VL_LTES_III(1,4,4, 3U, (0xfU & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189) 
					     >> 0xaU))));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_94 
	= ((1U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A)) 
	   | (0U != (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_449 
	= ((1U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A)) 
	   | (7U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_309 
	= ((6U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A)) 
	   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExp_PA)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_317 
	= ((6U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A)) 
	   & (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExp_PA));
    vlTOPp->io_input_ready = ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw_io_inReady_sqrt) 
			      & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_5)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
	   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut) 
	   | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
	      & (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw_io_latchMulAddA_0 
	= ((((((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_449) 
	       | (4U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B))) 
	      | (3U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B))) 
	     | (6U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_C))) 
	    | (4U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_C))) 
	   | (1U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_C)));
    __Vtemp72[0U] = (IData)((((QData)((IData)((0xfffU 
					       & (((((((((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189) 
							 & (~ 
							    (((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isZero_PC) 
							      | VL_GTS_III(1,14,14, 0x3ceU, (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189)))
							      ? 0xe00U
							      : 0U))) 
							& (~ 
							   ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
							     ? 0xc31U
							     : 0U))) 
						       & (~ 
							  ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
							    ? 0x400U
							    : 0U))) 
						      & (~ 
							 ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
							   ? 0x200U
							   : 0U))) 
						     | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
							 ? 0x3ceU
							 : 0U)) 
						    | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
						        ? 0xbffU
						        : 0U)) 
						   | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
						       ? 0xc00U
						       : 0U)) 
						  | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
						      ? 0xe00U
						      : 0U))))) 
			      << 0x34U) | (VL_ULL(0xfffffffffffff) 
					   & (((((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
						 | (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isZero_PC)) 
						| VL_GTS_III(1,14,14, 0x3ceU, (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189)))
					        ? ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
						    ? VL_ULL(0x8000000000000)
						    : VL_ULL(0))
					        : vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_186) 
					      | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
						  ? VL_ULL(0xfffffffffffff)
						  : VL_ULL(0))))));
    __Vtemp72[1U] = (IData)(((((QData)((IData)((0xfffU 
						& (((((((((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189) 
							  & (~ 
							     (((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isZero_PC) 
							       | VL_GTS_III(1,14,14, 0x3ceU, (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189)))
							       ? 0xe00U
							       : 0U))) 
							 & (~ 
							    ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
							      ? 0xc31U
							      : 0U))) 
							& (~ 
							   ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
							     ? 0x400U
							     : 0U))) 
						       & (~ 
							  ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
							    ? 0x200U
							    : 0U))) 
						      | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
							  ? 0x3ceU
							  : 0U)) 
						     | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
							 ? 0xbffU
							 : 0U)) 
						    | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
						        ? 0xc00U
						        : 0U)) 
						   | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
						       ? 0xe00U
						       : 0U))))) 
			       << 0x34U) | (VL_ULL(0xfffffffffffff) 
					    & (((((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
						  | (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isZero_PC)) 
						 | VL_GTS_III(1,14,14, 0x3ceU, (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189)))
						 ? 
						((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
						  ? VL_ULL(0x8000000000000)
						  : VL_ULL(0))
						 : vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_186) 
					       | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
						   ? VL_ULL(0xfffffffffffff)
						   : VL_ULL(0))))) 
			     >> 0x20U));
    vlTOPp->io_actual_out[0U] = __Vtemp72[0U];
    vlTOPp->io_actual_out[1U] = __Vtemp72[1U];
    vlTOPp->io_actual_out[2U] = ((~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
				 & (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sign_PC));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw_io_usingMulAdd 
	= ((((((((((((4U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A)) 
		     | (0xaU == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B))) 
		    | (9U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B))) 
		   | (7U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B))) 
		  | (6U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B))) 
		 | (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_B5_sqrt)) 
		| (3U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B))) 
	       | (1U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B))) 
	      | (4U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_C))) 
	     << 3U) | ((((((((((3U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A)) 
			       | (9U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B))) 
			      | (8U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B))) 
			     | (6U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B))) 
			    | (5U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B))) 
			   | (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_B4_sqrt)) 
			  | (2U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B))) 
			 | (6U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_C))) 
			| (3U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_C))) 
		       << 2U)) | (((((((((((2U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A)) 
					   | (8U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B))) 
					  | (7U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B))) 
					 | (5U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B))) 
					| (4U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B))) 
				       | (3U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B))) 
				      | (1U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B))) 
				     | (5U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_C))) 
				    | (2U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_C))) 
				   << 1U) | (((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw_io_latchMulAddA_0) 
					      | (6U 
						 == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B))) 
					     | (2U 
						== (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B)))));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT___T_288 
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
    VL_SIGW(__Vtemp74,127,0,4);
    VL_SIGW(__Vtemp75,127,0,4);
    VL_SIGW(__Vtemp77,95,0,3);
    // Body
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT___T_120 
	= ((0U == (0x7ffU & (IData)((vlTOPp->io_input_bits_b 
				     >> 0x34U)))) & 
	   (VL_ULL(0) == (VL_ULL(0xfffffffffffff) & vlTOPp->io_input_bits_b)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT___T_110 
	= ((1U & (IData)((vlTOPp->io_input_bits_b >> 0x33U)))
	    ? 0U : ((1U & (IData)((vlTOPp->io_input_bits_b 
				   >> 0x32U))) ? 1U
		     : ((1U & (IData)((vlTOPp->io_input_bits_b 
				       >> 0x31U))) ? 2U
			 : ((1U & (IData)((vlTOPp->io_input_bits_b 
					   >> 0x30U)))
			     ? 3U : ((1U & (IData)(
						   (vlTOPp->io_input_bits_b 
						    >> 0x2fU)))
				      ? 4U : ((1U & (IData)(
							    (vlTOPp->io_input_bits_b 
							     >> 0x2eU)))
					       ? 5U
					       : ((1U 
						   & (IData)(
							     (vlTOPp->io_input_bits_b 
							      >> 0x2dU)))
						   ? 6U
						   : 
						  ((1U 
						    & (IData)(
							      (vlTOPp->io_input_bits_b 
							       >> 0x2cU)))
						    ? 7U
						    : 
						   ((1U 
						     & (IData)(
							       (vlTOPp->io_input_bits_b 
								>> 0x2bU)))
						     ? 8U
						     : 
						    ((1U 
						      & (IData)(
								(vlTOPp->io_input_bits_b 
								 >> 0x2aU)))
						      ? 9U
						      : 
						     ((1U 
						       & (IData)(
								 (vlTOPp->io_input_bits_b 
								  >> 0x29U)))
						       ? 0xaU
						       : 
						      ((1U 
							& (IData)(
								  (vlTOPp->io_input_bits_b 
								   >> 0x28U)))
						        ? 0xbU
						        : 
						       ((1U 
							 & (IData)(
								   (vlTOPp->io_input_bits_b 
								    >> 0x27U)))
							 ? 0xcU
							 : 
							((1U 
							  & (IData)(
								    (vlTOPp->io_input_bits_b 
								     >> 0x26U)))
							  ? 0xdU
							  : 
							 ((1U 
							   & (IData)(
								     (vlTOPp->io_input_bits_b 
								      >> 0x25U)))
							   ? 0xeU
							   : 
							  ((1U 
							    & (IData)(
								      (vlTOPp->io_input_bits_b 
								       >> 0x24U)))
							    ? 0xfU
							    : 
							   ((1U 
							     & (IData)(
								       (vlTOPp->io_input_bits_b 
									>> 0x23U)))
							     ? 0x10U
							     : 
							    ((1U 
							      & (IData)(
									(vlTOPp->io_input_bits_b 
									 >> 0x22U)))
							      ? 0x11U
							      : 
							     ((1U 
							       & (IData)(
									 (vlTOPp->io_input_bits_b 
									  >> 0x21U)))
							       ? 0x12U
							       : 
							      ((1U 
								& (IData)(
									  (vlTOPp->io_input_bits_b 
									   >> 0x20U)))
							        ? 0x13U
							        : 
							       ((1U 
								 & (IData)(
									   (vlTOPp->io_input_bits_b 
									    >> 0x1fU)))
								 ? 0x14U
								 : 
								((1U 
								  & (IData)(
									    (vlTOPp->io_input_bits_b 
									     >> 0x1eU)))
								  ? 0x15U
								  : 
								 ((1U 
								   & (IData)(
									     (vlTOPp->io_input_bits_b 
									      >> 0x1dU)))
								   ? 0x16U
								   : 
								  ((1U 
								    & (IData)(
									      (vlTOPp->io_input_bits_b 
									       >> 0x1cU)))
								    ? 0x17U
								    : 
								   ((1U 
								     & (IData)(
									       (vlTOPp->io_input_bits_b 
										>> 0x1bU)))
								     ? 0x18U
								     : 
								    ((1U 
								      & (IData)(
										(vlTOPp->io_input_bits_b 
										>> 0x1aU)))
								      ? 0x19U
								      : 
								     ((1U 
								       & (IData)(
										(vlTOPp->io_input_bits_b 
										>> 0x19U)))
								       ? 0x1aU
								       : 
								      ((1U 
									& (IData)(
										(vlTOPp->io_input_bits_b 
										>> 0x18U)))
								        ? 0x1bU
								        : 
								       ((1U 
									 & (IData)(
										(vlTOPp->io_input_bits_b 
										>> 0x17U)))
									 ? 0x1cU
									 : 
									((1U 
									  & (IData)(
										(vlTOPp->io_input_bits_b 
										>> 0x16U)))
									  ? 0x1dU
									  : 
									 ((1U 
									   & (IData)(
										(vlTOPp->io_input_bits_b 
										>> 0x15U)))
									   ? 0x1eU
									   : 
									  ((1U 
									    & (IData)(
										(vlTOPp->io_input_bits_b 
										>> 0x14U)))
									    ? 0x1fU
									    : 
									   ((1U 
									     & (IData)(
										(vlTOPp->io_input_bits_b 
										>> 0x13U)))
									     ? 0x20U
									     : 
									    ((1U 
									      & (IData)(
										(vlTOPp->io_input_bits_b 
										>> 0x12U)))
									      ? 0x21U
									      : 
									     ((1U 
									       & (IData)(
										(vlTOPp->io_input_bits_b 
										>> 0x11U)))
									       ? 0x22U
									       : 
									      ((1U 
										& (IData)(
										(vlTOPp->io_input_bits_b 
										>> 0x10U)))
									        ? 0x23U
									        : 
									       ((1U 
										& (IData)(
										(vlTOPp->io_input_bits_b 
										>> 0xfU)))
										 ? 0x24U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_input_bits_b 
										>> 0xeU)))
										 ? 0x25U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_input_bits_b 
										>> 0xdU)))
										 ? 0x26U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_input_bits_b 
										>> 0xcU)))
										 ? 0x27U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_input_bits_b 
										>> 0xbU)))
										 ? 0x28U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_input_bits_b 
										>> 0xaU)))
										 ? 0x29U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_input_bits_b 
										>> 9U)))
										 ? 0x2aU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_input_bits_b 
										>> 8U)))
										 ? 0x2bU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_input_bits_b 
										>> 7U)))
										 ? 0x2cU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_input_bits_b 
										>> 6U)))
										 ? 0x2dU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_input_bits_b 
										>> 5U)))
										 ? 0x2eU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_input_bits_b 
										>> 4U)))
										 ? 0x2fU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_input_bits_b 
										>> 3U)))
										 ? 0x30U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_input_bits_b 
										>> 2U)))
										 ? 0x31U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_input_bits_b 
										>> 1U)))
										 ? 0x32U
										 : 0x33U)))))))))))))))))))))))))))))))))))))))))))))))))));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq_io_enq_valid 
	= ((IData)(vlTOPp->io_input_valid) & (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw_io_inReady_sqrt));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_S_sqrt 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw_io_inReady_sqrt) 
	   & ((IData)(vlTOPp->io_input_valid) & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_5))));
    vlTOPp->io_actual_exceptionFlags = ((((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw_io_invalidExc) 
					  << 4U) | 
					 (((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw_io_infiniteExc) 
					   << 3U) | 
					  ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
					   << 2U))) 
					| ((((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
					     & (VL_GTS_III(1,14,14, 0x3ceU, (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189)) 
						| ((((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_164) 
						     & VL_GTES_III(1,2,2, 0U, 
								   (3U 
								    & (((IData)(0x400U) 
									+ 
									VL_EXTENDS_II(13,12, 
										(0xfffU 
										& ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExp_PC) 
										>> 1U)))) 
								       >> 0xbU)))) 
						    & (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_153)) 
						   & (~ 
						      (((((IData)(vlTOPp->io_input_bits_detectTininess) 
							  & (~ (IData)(
								       (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_153 
									>> 1U)))) 
							 & (IData)(
								   (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_186 
								    >> 0x35U))) 
							& (VL_ULL(0) 
							   != vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_160)) 
						       & (((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_165) 
							   & (IData)(
								     (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw_io_rawOut_sig 
								      >> 1U))) 
							  | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
							     & (0U 
								!= 
								(3U 
								 & (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw_io_rawOut_sig)))))))))) 
					    << 1U) 
					   | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
					      | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
						 & (VL_GTS_III(1,14,14, 0x3ceU, (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189)) 
						    | (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_164))))));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT___T_119 
	= (0xfffU & (((0U == (0x7ffU & (IData)((vlTOPp->io_input_bits_b 
						>> 0x34U))))
		       ? (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT___T_110))
		       : (0x7ffU & (IData)((vlTOPp->io_input_bits_b 
					    >> 0x34U)))) 
		     + (0x400U | ((0U == (0x7ffU & (IData)(
							   (vlTOPp->io_input_bits_b 
							    >> 0x34U))))
				   ? 2U : 1U))));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_6 
	= ((~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_5)) 
	   & (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq_io_enq_valid));
    vlTOPp->io_pass = (((~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_4)) 
			& (((0U == (7U & ((vlTOPp->io_actual_out[2U] 
					   << 3U) | 
					  (vlTOPp->io_actual_out[1U] 
					   >> 0x1dU)))) 
			    | (7U == (7U & ((vlTOPp->io_actual_out[2U] 
					     << 3U) 
					    | (vlTOPp->io_actual_out[1U] 
					       >> 0x1dU)))))
			    ? ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT___T_288) 
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
			        ? (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT___T_288)
			        : (0U == (((vlTOPp->io_actual_out[0U] 
					    ^ vlTOPp->io_expected_recOut[0U]) 
					   | (vlTOPp->io_actual_out[1U] 
					      ^ vlTOPp->io_expected_recOut[1U])) 
					  | (vlTOPp->io_actual_out[2U] 
					     ^ vlTOPp->io_expected_recOut[2U])))))) 
		       & ((IData)(vlTOPp->io_actual_exceptionFlags) 
			  == (IData)(vlTOPp->io_expected_exceptionFlags)));
    VL_EXTEND_WQ(115,52, __Vtemp74, (VL_ULL(0xfffffffffffff) 
				     & vlTOPp->io_input_bits_b));
    VL_SHIFTL_WWI(115,115,6, __Vtemp75, __Vtemp74, (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT___T_110));
    __Vtemp77[1U] = ((0xe0000000U & ((((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT___T_120)
				        ? 0U : ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT___T_119) 
						>> 9U)) 
				      | ((3U == (3U 
						 & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT___T_119) 
						    >> 0xaU))) 
					 & (VL_ULL(0) 
					    != (VL_ULL(0xfffffffffffff) 
						& vlTOPp->io_input_bits_b)))) 
				     << 0x1dU)) | (IData)(
							  ((((QData)((IData)(
									     (0x1ffU 
									      & (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT___T_119)))) 
							     << 0x34U) 
							    | (VL_ULL(0xfffffffffffff) 
							       & ((0U 
								   == 
								   (0x7ffU 
								    & (IData)(
									      (vlTOPp->io_input_bits_b 
									       >> 0x34U))))
								   ? 
								  (VL_ULL(0xffffffffffffe) 
								   & (((QData)((IData)(
										__Vtemp75[1U])) 
								       << 0x21U) 
								      | ((QData)((IData)(
										__Vtemp75[0U])) 
									 << 1U)))
								   : vlTOPp->io_input_bits_b))) 
							   >> 0x20U)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds_io_b[0U] 
	= (IData)((((QData)((IData)((0x1ffU & (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT___T_119)))) 
		    << 0x34U) | (VL_ULL(0xfffffffffffff) 
				 & ((0U == (0x7ffU 
					    & (IData)(
						      (vlTOPp->io_input_bits_b 
						       >> 0x34U))))
				     ? (VL_ULL(0xffffffffffffe) 
					& (((QData)((IData)(
							    __Vtemp75[1U])) 
					    << 0x21U) 
					   | ((QData)((IData)(
							      __Vtemp75[0U])) 
					      << 1U)))
				     : vlTOPp->io_input_bits_b))));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds_io_b[1U] 
	= __Vtemp77[1U];
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds_io_b[2U] 
	= (1U & (IData)((vlTOPp->io_input_bits_b >> 0x3fU)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__rawB_S_sig 
	= (((QData)((IData)((0U != (7U & ((vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds_io_b[2U] 
					   << 3U) | 
					  (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds_io_b[1U] 
					   >> 0x1dU)))))) 
	    << 0x34U) | (VL_ULL(0xfffffffffffff) & 
			 (((QData)((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds_io_b[1U])) 
			   << 0x20U) | (QData)((IData)(
						       vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds_io_b[0U])))));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__rawB_S_isInf 
	= ((3U == (3U & ((vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds_io_b[2U] 
			  << 2U) | (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds_io_b[1U] 
				    >> 0x1eU)))) & 
	   (~ (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds_io_b[1U] 
	       >> 0x1dU)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__rawB_S_isNaN 
	= ((3U == (3U & ((vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds_io_b[2U] 
			  << 2U) | (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds_io_b[1U] 
				    >> 0x1eU)))) & 
	   (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds_io_b[1U] 
	    >> 0x1dU));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__notSigNaNIn_invalidExc_S_sqrt 
	= (((~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__rawB_S_isNaN)) 
	    & (0U != (7U & ((vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds_io_b[2U] 
			     << 3U) | (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds_io_b[1U] 
				       >> 0x1dU))))) 
	   & vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds_io_b[2U]);
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__normalCase_S_sqrt 
	= (1U & ((~ (((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__rawB_S_isNaN) 
		      | (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__rawB_S_isInf)) 
		     | (0U == (7U & ((vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds_io_b[2U] 
				      << 3U) | (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds_io_b[1U] 
						>> 0x1dU)))))) 
		 & (~ vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds_io_b[2U])));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isNaN_S 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__rawB_S_isNaN) 
	   | (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__notSigNaNIn_invalidExc_S_sqrt));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__majorExc_S 
	= (((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__rawB_S_isNaN) 
	    & (~ (IData)((vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__rawB_S_sig 
			  >> 0x33U)))) | (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__notSigNaNIn_invalidExc_S_sqrt));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_148 
	= (((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_S_sqrt) 
	    & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__normalCase_S_sqrt))) 
	   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PA)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_A7_sqrt 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_S_sqrt) 
	   & (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__normalCase_S_sqrt));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PB 
	= (((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_148) 
	    & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__leaving_PB) 
	       | ((~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PB)) 
		  & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__ready_PC))))) 
	   | (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__leaving_PA));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PC 
	= ((((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_148) 
	     & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PB))) 
	    & (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__ready_PC)) 
	   | (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__leaving_PB));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_81 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_A7_sqrt) 
	   | (0U != (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_89 
	= (7U & (((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_A7_sqrt)
		   ? 6U : 0U) | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_A7_sqrt)
				  ? 0U : ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A) 
					  - (IData)(1U)))));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PA 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_A7_sqrt) 
	   | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_S_sqrt) 
	      & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PA) 
		 | (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__ready_PB)))));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_415 
	= ((((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_A7_sqrt) 
	     | (6U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A))) 
	    | (5U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A))) 
	   | (4U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zFractB_A7_sqrt 
	= (VL_ULL(0xfffffffffffff) & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_A7_sqrt)
				       ? vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__rawB_S_sig
				       : VL_ULL(0)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_277 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_A7_sqrt) 
	   & (~ (0xfffU & ((vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds_io_b[2U] 
			    << 0xcU) | (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds_io_b[1U] 
					>> 0x14U)))));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_285 
	= (0xfffU & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_A7_sqrt) 
		     & ((vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds_io_b[2U] 
			 << 0xcU) | (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds_io_b[1U] 
				     >> 0x14U))));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_177 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PC) 
	   | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PC) 
	      & (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_leaving_PC)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zQuadPiece_0_A7_sqrt 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_277) 
	   & (~ (IData)((vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__rawB_S_sig 
			 >> 0x33U))));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zQuadPiece_1_A7_sqrt 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_277) 
	   & (IData)((vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__rawB_S_sig 
		      >> 0x33U)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zQuadPiece_2_A7_sqrt 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_285) 
	   & (~ (IData)((vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__rawB_S_sig 
			 >> 0x33U))));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zQuadPiece_3_A7_sqrt 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_285) 
	   & (IData)((vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__rawB_S_sig 
		      >> 0x33U)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__mulAdd9C_A 
	= ((0x1fffffU & ((((((((((((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zQuadPiece_0_A7_sqrt)
				    ? 0x2fU : 0U) | 
				  ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zQuadPiece_1_A7_sqrt)
				    ? 0x1dfU : 0U)) 
				 | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zQuadPiece_2_A7_sqrt)
				     ? 0x14dU : 0U)) 
				| ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zQuadPiece_3_A7_sqrt)
				    ? 0x27eU : 0U)) 
			       << 0xaU) | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_A7_sqrt)
					    ? 0x3ffU
					    : 0U)) 
			     | (((6U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A)) 
				 << 0x13U) | ((((((
						   ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_309) 
						    & (~ (IData)(
								 (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__fractB_PA 
								  >> 0x33U))))
						    ? 0x1aU
						    : 0U) 
						  | (((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_309) 
						      & (IData)(
								(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__fractB_PA 
								 >> 0x33U)))
						      ? 0xbcaU
						      : 0U)) 
						 | (((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_317) 
						     & (~ (IData)(
								  (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__fractB_PA 
								   >> 0x33U))))
						     ? 0x12d3U
						     : 0U)) 
						| (((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_317) 
						    & (IData)(
							      (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__fractB_PA 
							       >> 0x33U)))
						    ? 0x1b17U
						    : 0U)) 
					       << 6U) 
					      | ((6U 
						  == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A))
						  ? 0x3fU
						  : 0U)))) 
			    | (0xfffffU & ((5U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A))
					    ? ((IData)(0x40000U) 
					       + ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__fractR0_A) 
						  << 0xaU))
					    : 0U))) 
			   | (((4U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A)) 
			       & (~ ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__hiSqrR0_A_sqrt) 
				     >> 9U))) ? 0x400U
			       : 0U)) | (((4U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A)) 
					  & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__hiSqrR0_A_sqrt) 
					     >> 9U))
					  ? ((IData)(0x400U) 
					     + (IData)(
						       (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__fractB_PA 
							>> 0x1aU)))
					  : 0U)) | 
			 (((3U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A)) 
			   | (2U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A)))
			   ? vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__partNegSigma0_A
			   : 0U))) | ((1U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A))
				       ? ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__fractR0_A) 
					  << 0x10U)
				       : 0U));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__loMulAdd9Out_A 
	= (0x7ffffU & ((0x3ffffU & (((((((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zQuadPiece_0_A7_sqrt)
					  ? 0x1c8U : 0U) 
					| ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zQuadPiece_1_A7_sqrt)
					    ? 0xc1U
					    : 0U)) 
				       | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zQuadPiece_2_A7_sqrt)
					   ? 0x143U
					   : 0U)) | 
				      ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zQuadPiece_3_A7_sqrt)
				        ? 0x89U : 0U)) 
				     | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_S_sqrt)
					 ? 0U : (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__nextMulAdd9A_A))) 
				    * (0x1ffU & ((IData)(
							 (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zFractB_A7_sqrt 
							  >> 0x2aU)) 
						 | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_S_sqrt)
						     ? 0U
						     : (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__nextMulAdd9B_A)))))) 
		       + (0x3ffffU & vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__mulAdd9C_A)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__mulAdd9Out_A 
	= ((0x1fc0000U & (((0x40000U & vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__loMulAdd9Out_A)
			    ? ((IData)(1U) + (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__mulAdd9C_A 
					      >> 0x12U))
			    : (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__mulAdd9C_A 
			       >> 0x12U)) << 0x12U)) 
	   | (0x3ffffU & vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__loMulAdd9Out_A));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___GEN_39 
	= (((4U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A)) 
	    | (3U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A)))
	    ? ((4U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A))
	        ? vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__mulAdd9Out_A
	        : (0xffffU & (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__mulAdd9Out_A 
			      >> 9U))) : vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__partNegSigma0_A);
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sqrR0_A5_sqrt 
	= ((1U & (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExp_PA))
	    ? (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__mulAdd9Out_A 
	       << 1U) : vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__mulAdd9Out_A);
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zFractR0_A6_sqrt 
	= (0x7fffU & (((6U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A)) 
		       & (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__mulAdd9Out_A 
			  >> 0x13U)) ? (~ (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__mulAdd9Out_A 
					   >> 0xaU))
		       : 0U));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___GEN_38 
	= (0xffffU & ((5U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A))
		       ? (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sqrR0_A5_sqrt 
			  >> 0xaU) : (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__hiSqrR0_A_sqrt)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___GEN_37 
	= ((6U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A))
	    ? (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zFractR0_A6_sqrt)
	    : (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__fractR0_A));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___GEN_40 
	= (0x7fffffU & ((((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_415) 
			  | (3U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A))) 
			 | (2U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A)))
			 ? (((((0x3fffU & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_A7_sqrt)
					    ? (~ (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__mulAdd9Out_A 
						  >> 0xbU))
					    : 0U)) 
			       | (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zFractR0_A6_sqrt)) 
			      | (0x1ffU & ((4U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A))
					    ? (IData)(
						      (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__fractB_PA 
						       >> 0x23U))
					    : 0U))) 
			     | (((5U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A)) 
				 | (3U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A)))
				 ? (0x100U | (0xffU 
					      & (IData)(
							(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__fractB_PA 
							 >> 0x2cU))))
				 : 0U)) | (((2U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A)) 
					    & (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__mulAdd9Out_A 
					       >> 0xbU))
					    ? (~ (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__mulAdd9Out_A 
						  >> 2U))
					    : 0U)) : (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__nextMulAdd9A_A)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___GEN_41 
	= (((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_415) 
	    | (2U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A)))
	    ? (((((0x1ffU & (IData)((vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zFractB_A7_sqrt 
				     >> 0x2aU))) | (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zFractR0_A6_sqrt)) 
		 | (0x1ffU & ((5U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A))
			       ? (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sqrR0_A5_sqrt 
				  >> 1U) : 0U))) | 
		(0x1ffU & ((4U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A))
			    ? (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__hiSqrR0_A_sqrt)
			    : 0U))) | ((2U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A))
				        ? (0x100U | 
					   (0xffU & 
					    ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__fractR0_A) 
					     >> 1U)))
				        : 0U)) : (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__nextMulAdd9B_A));
}

void dut::_settle__TOP__3(dut__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    dut::_settle__TOP__3\n"); );
    dut* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp79,95,0,3);
    VL_SIGW(__Vtemp80,95,0,3);
    VL_SIGW(__Vtemp83,95,0,3);
    VL_SIGW(__Vtemp84,95,0,3);
    VL_SIGW(__Vtemp87,95,0,3);
    VL_SIGW(__Vtemp88,95,0,3);
    VL_SIGW(__Vtemp91,95,0,3);
    VL_SIGW(__Vtemp92,95,0,3);
    VL_SIGW(__Vtemp95,127,0,4);
    VL_SIGW(__Vtemp96,127,0,4);
    VL_SIGW(__Vtemp98,95,0,3);
    VL_SIGW(__Vtemp100,127,0,4);
    VL_SIGW(__Vtemp101,127,0,4);
    VL_SIGW(__Vtemp103,95,0,3);
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
    VL_SIGW(__Vtemp128,95,0,3);
    // Body
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT___T_120 
	= ((0U == (0x7ffU & (IData)((vlTOPp->io_input_bits_b 
				     >> 0x34U)))) & 
	   (VL_ULL(0) == (VL_ULL(0xfffffffffffff) & vlTOPp->io_input_bits_b)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT___T_110 
	= ((1U & (IData)((vlTOPp->io_input_bits_b >> 0x33U)))
	    ? 0U : ((1U & (IData)((vlTOPp->io_input_bits_b 
				   >> 0x32U))) ? 1U
		     : ((1U & (IData)((vlTOPp->io_input_bits_b 
				       >> 0x31U))) ? 2U
			 : ((1U & (IData)((vlTOPp->io_input_bits_b 
					   >> 0x30U)))
			     ? 3U : ((1U & (IData)(
						   (vlTOPp->io_input_bits_b 
						    >> 0x2fU)))
				      ? 4U : ((1U & (IData)(
							    (vlTOPp->io_input_bits_b 
							     >> 0x2eU)))
					       ? 5U
					       : ((1U 
						   & (IData)(
							     (vlTOPp->io_input_bits_b 
							      >> 0x2dU)))
						   ? 6U
						   : 
						  ((1U 
						    & (IData)(
							      (vlTOPp->io_input_bits_b 
							       >> 0x2cU)))
						    ? 7U
						    : 
						   ((1U 
						     & (IData)(
							       (vlTOPp->io_input_bits_b 
								>> 0x2bU)))
						     ? 8U
						     : 
						    ((1U 
						      & (IData)(
								(vlTOPp->io_input_bits_b 
								 >> 0x2aU)))
						      ? 9U
						      : 
						     ((1U 
						       & (IData)(
								 (vlTOPp->io_input_bits_b 
								  >> 0x29U)))
						       ? 0xaU
						       : 
						      ((1U 
							& (IData)(
								  (vlTOPp->io_input_bits_b 
								   >> 0x28U)))
						        ? 0xbU
						        : 
						       ((1U 
							 & (IData)(
								   (vlTOPp->io_input_bits_b 
								    >> 0x27U)))
							 ? 0xcU
							 : 
							((1U 
							  & (IData)(
								    (vlTOPp->io_input_bits_b 
								     >> 0x26U)))
							  ? 0xdU
							  : 
							 ((1U 
							   & (IData)(
								     (vlTOPp->io_input_bits_b 
								      >> 0x25U)))
							   ? 0xeU
							   : 
							  ((1U 
							    & (IData)(
								      (vlTOPp->io_input_bits_b 
								       >> 0x24U)))
							    ? 0xfU
							    : 
							   ((1U 
							     & (IData)(
								       (vlTOPp->io_input_bits_b 
									>> 0x23U)))
							     ? 0x10U
							     : 
							    ((1U 
							      & (IData)(
									(vlTOPp->io_input_bits_b 
									 >> 0x22U)))
							      ? 0x11U
							      : 
							     ((1U 
							       & (IData)(
									 (vlTOPp->io_input_bits_b 
									  >> 0x21U)))
							       ? 0x12U
							       : 
							      ((1U 
								& (IData)(
									  (vlTOPp->io_input_bits_b 
									   >> 0x20U)))
							        ? 0x13U
							        : 
							       ((1U 
								 & (IData)(
									   (vlTOPp->io_input_bits_b 
									    >> 0x1fU)))
								 ? 0x14U
								 : 
								((1U 
								  & (IData)(
									    (vlTOPp->io_input_bits_b 
									     >> 0x1eU)))
								  ? 0x15U
								  : 
								 ((1U 
								   & (IData)(
									     (vlTOPp->io_input_bits_b 
									      >> 0x1dU)))
								   ? 0x16U
								   : 
								  ((1U 
								    & (IData)(
									      (vlTOPp->io_input_bits_b 
									       >> 0x1cU)))
								    ? 0x17U
								    : 
								   ((1U 
								     & (IData)(
									       (vlTOPp->io_input_bits_b 
										>> 0x1bU)))
								     ? 0x18U
								     : 
								    ((1U 
								      & (IData)(
										(vlTOPp->io_input_bits_b 
										>> 0x1aU)))
								      ? 0x19U
								      : 
								     ((1U 
								       & (IData)(
										(vlTOPp->io_input_bits_b 
										>> 0x19U)))
								       ? 0x1aU
								       : 
								      ((1U 
									& (IData)(
										(vlTOPp->io_input_bits_b 
										>> 0x18U)))
								        ? 0x1bU
								        : 
								       ((1U 
									 & (IData)(
										(vlTOPp->io_input_bits_b 
										>> 0x17U)))
									 ? 0x1cU
									 : 
									((1U 
									  & (IData)(
										(vlTOPp->io_input_bits_b 
										>> 0x16U)))
									  ? 0x1dU
									  : 
									 ((1U 
									   & (IData)(
										(vlTOPp->io_input_bits_b 
										>> 0x15U)))
									   ? 0x1eU
									   : 
									  ((1U 
									    & (IData)(
										(vlTOPp->io_input_bits_b 
										>> 0x14U)))
									    ? 0x1fU
									    : 
									   ((1U 
									     & (IData)(
										(vlTOPp->io_input_bits_b 
										>> 0x13U)))
									     ? 0x20U
									     : 
									    ((1U 
									      & (IData)(
										(vlTOPp->io_input_bits_b 
										>> 0x12U)))
									      ? 0x21U
									      : 
									     ((1U 
									       & (IData)(
										(vlTOPp->io_input_bits_b 
										>> 0x11U)))
									       ? 0x22U
									       : 
									      ((1U 
										& (IData)(
										(vlTOPp->io_input_bits_b 
										>> 0x10U)))
									        ? 0x23U
									        : 
									       ((1U 
										& (IData)(
										(vlTOPp->io_input_bits_b 
										>> 0xfU)))
										 ? 0x24U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_input_bits_b 
										>> 0xeU)))
										 ? 0x25U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_input_bits_b 
										>> 0xdU)))
										 ? 0x26U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_input_bits_b 
										>> 0xcU)))
										 ? 0x27U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_input_bits_b 
										>> 0xbU)))
										 ? 0x28U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_input_bits_b 
										>> 0xaU)))
										 ? 0x29U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_input_bits_b 
										>> 9U)))
										 ? 0x2aU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_input_bits_b 
										>> 8U)))
										 ? 0x2bU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_input_bits_b 
										>> 7U)))
										 ? 0x2cU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_input_bits_b 
										>> 6U)))
										 ? 0x2dU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_input_bits_b 
										>> 5U)))
										 ? 0x2eU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_input_bits_b 
										>> 4U)))
										 ? 0x2fU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_input_bits_b 
										>> 3U)))
										 ? 0x30U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_input_bits_b 
										>> 2U)))
										 ? 0x31U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->io_input_bits_b 
										>> 1U)))
										 ? 0x32U
										 : 0x33U)))))))))))))))))))))))))))))))))))))))))))))))))));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT__wrap_1 
	= (4U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT__value_1));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_14 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT__value_1)));
    vlTOPp->io_output_b = ((4U >= (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT__value_1))
			    ? vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_b
			   [vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT__value_1]
			    : VL_ULL(0));
    vlTOPp->io_output_roundingMode = ((4U >= (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT__value_1))
				       ? vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_roundingMode
				      [vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT__value_1]
				       : 0U);
    vlTOPp->io_output_detectTininess = ((4U >= (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT__value_1)) 
					& vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_detectTininess
					[vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT__value_1]);
    vlTOPp->io_expected_exceptionFlags = ((4U >= (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT__value_1))
					   ? vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_exceptionFlags
					  [vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT__value_1]
					   : 0U);
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
	= ((4U >= (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT__value_1))
	    ? vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out
	   [vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT__value_1]
	    : VL_ULL(0));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw_io_invalidExc 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__majorExc_PC) 
	   & (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isNaN_PC));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw_io_infiniteExc 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__majorExc_PC) 
	   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isNaN_PC)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_165 
	= ((0U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__roundingMode_PC)) 
	   | (4U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__roundingMode_PC)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
	= (((2U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__roundingMode_PC)) 
	    & (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sign_PC)) 
	   | ((3U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__roundingMode_PC)) 
	      & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sign_PC))));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_125 
	= (7U & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_E) 
		 - (IData)(1U)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT__wrap 
	= (4U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT__value));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_12 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT__value)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw_io_rawOut_sig 
	= ((VL_ULL(0xfffffffffffffe) & (((1U & ((~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isNegRemT_E)) 
						& (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isZeroRemT_E))))
					  ? vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sigT_E
					  : (VL_ULL(1) 
					     + vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sigT_E)) 
					<< 1U)) | (QData)((IData)(
								  (1U 
								   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isZeroRemT_E))))));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_2 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT__value) 
	   == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT__value_1));
    __Vtemp79[0U] = 0U;
    __Vtemp79[1U] = 0U;
    __Vtemp79[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp80, __Vtemp79, (0x3fU 
						   & (~ 
						      (0x1fffU 
						       & VL_EXTENDS_II(13,12, 
								       (0xfffU 
									& ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExp_PC) 
									   >> 1U)))))));
    __Vtemp83[0U] = 0U;
    __Vtemp83[1U] = 0U;
    __Vtemp83[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp84, __Vtemp83, (0x3fU 
						   & (~ 
						      (0x1fffU 
						       & VL_EXTENDS_II(13,12, 
								       (0xfffU 
									& ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExp_PC) 
									   >> 1U)))))));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_79 
	= ((0xffU & ((0x800U & (__Vtemp80[2U] << 0xbU)) 
		     | (__Vtemp80[1U] >> 0x15U))) | 
	   (0xff00U & ((0x8000000U & (__Vtemp84[2U] 
				      << 0x1bU)) | 
		       (0x7ffff00U & (__Vtemp84[1U] 
				      >> 5U)))));
    __Vtemp87[0U] = 0U;
    __Vtemp87[1U] = 0U;
    __Vtemp87[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp88, __Vtemp87, (0x3fU 
						   & (~ 
						      (0x1fffU 
						       & VL_EXTENDS_II(13,12, 
								       (0xfffU 
									& ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExp_PC) 
									   >> 1U)))))));
    __Vtemp91[0U] = 0U;
    __Vtemp91[1U] = 0U;
    __Vtemp91[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp92, __Vtemp91, (0x3fU 
						   & (~ 
						      (0x1fffU 
						       & VL_EXTENDS_II(13,12, 
								       (0xfffU 
									& ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExp_PC) 
									   >> 1U)))))));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_28 
	= ((0xffffU & ((__Vtemp88[1U] << 3U) | (__Vtemp88[0U] 
						>> 0x1dU))) 
	   | (0xffff0000U & (__Vtemp92[0U] << 3U)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__normalCase_PB 
	= (1U & (((~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isNaN_PB)) 
		  & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isInf_PB))) 
		 & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isZero_PB))));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_leaving_PC 
	= (1U & ((~ (((~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isNaN_PC)) 
		      & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isInf_PC))) 
		     & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isZero_PC)))) 
		 | (1U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_E))));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__normalCase_PA 
	= (1U & (((~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isNaN_PA)) 
		  & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isInf_PA))) 
		 & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isZero_PA))));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_115 
	= (7U & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_C) 
		 - (IData)(1U)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_123 
	= ((1U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_C)) 
	   | (0U != (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_E)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zComplSigT_C1_sqrt 
	= (VL_ULL(0x3fffffffffffff) & ((1U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_C))
				        ? (~ (((QData)((IData)(
							       vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_result_s3[3U])) 
					       << 0x2dU) 
					      | (((QData)((IData)(
								  vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_result_s3[2U])) 
						  << 0xdU) 
						 | ((QData)((IData)(
								    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_result_s3[1U])) 
						    >> 0x13U))))
				        : VL_ULL(0)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_97 
	= (0xfU & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B) 
		   - (IData)(1U)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_112 
	= ((1U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B)) 
	   | (0U != (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_C)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zSigma1_B4 
	= (VL_ULL(0x3fffffffffff) & ((4U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B))
				      ? (~ (((QData)((IData)(
							     vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_result_s3[3U])) 
					     << 0x33U) 
					    | (((QData)((IData)(
								vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_result_s3[2U])) 
						<< 0x13U) 
					       | ((QData)((IData)(
								  vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_result_s3[1U])) 
						  >> 0xdU))))
				      : VL_ULL(0)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_B6_sqrt 
	= ((6U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B)) 
	   & (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PB));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_B5_sqrt 
	= ((5U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B)) 
	   & (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PB));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_B4_sqrt 
	= ((4U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B)) 
	   & (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PB));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_94 
	= ((1U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A)) 
	   | (0U != (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_449 
	= ((1U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A)) 
	   | (7U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_309 
	= ((6U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A)) 
	   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExp_PA)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_317 
	= ((6U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A)) 
	   & (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExp_PA));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT___T_119 
	= (0xfffU & (((0U == (0x7ffU & (IData)((vlTOPp->io_input_bits_b 
						>> 0x34U))))
		       ? (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT___T_110))
		       : (0x7ffU & (IData)((vlTOPp->io_input_bits_b 
					    >> 0x34U)))) 
		     + (0x400U | ((0U == (0x7ffU & (IData)(
							   (vlTOPp->io_input_bits_b 
							    >> 0x34U))))
				   ? 2U : 1U))));
    vlTOPp->io_expected_out = vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data;
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT___T_259 
	= ((0U == (0x7ffU & (IData)((vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
				     >> 0x34U)))) & 
	   (VL_ULL(0) == (VL_ULL(0xfffffffffffff) & vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT___T_249 
	= ((1U & (IData)((vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
			  >> 0x33U))) ? 0U : ((1U & (IData)(
							    (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
							     >> 0x32U)))
					       ? 1U
					       : ((1U 
						   & (IData)(
							     (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
							      >> 0x31U)))
						   ? 2U
						   : 
						  ((1U 
						    & (IData)(
							      (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
							       >> 0x30U)))
						    ? 3U
						    : 
						   ((1U 
						     & (IData)(
							       (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
								>> 0x2fU)))
						     ? 4U
						     : 
						    ((1U 
						      & (IData)(
								(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
								 >> 0x2eU)))
						      ? 5U
						      : 
						     ((1U 
						       & (IData)(
								 (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
								  >> 0x2dU)))
						       ? 6U
						       : 
						      ((1U 
							& (IData)(
								  (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
								   >> 0x2cU)))
						        ? 7U
						        : 
						       ((1U 
							 & (IData)(
								   (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
								    >> 0x2bU)))
							 ? 8U
							 : 
							((1U 
							  & (IData)(
								    (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
								     >> 0x2aU)))
							  ? 9U
							  : 
							 ((1U 
							   & (IData)(
								     (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
								      >> 0x29U)))
							   ? 0xaU
							   : 
							  ((1U 
							    & (IData)(
								      (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
								       >> 0x28U)))
							    ? 0xbU
							    : 
							   ((1U 
							     & (IData)(
								       (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
									>> 0x27U)))
							     ? 0xcU
							     : 
							    ((1U 
							      & (IData)(
									(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
									 >> 0x26U)))
							      ? 0xdU
							      : 
							     ((1U 
							       & (IData)(
									 (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
									  >> 0x25U)))
							       ? 0xeU
							       : 
							      ((1U 
								& (IData)(
									  (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
									   >> 0x24U)))
							        ? 0xfU
							        : 
							       ((1U 
								 & (IData)(
									   (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
									    >> 0x23U)))
								 ? 0x10U
								 : 
								((1U 
								  & (IData)(
									    (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
									     >> 0x22U)))
								  ? 0x11U
								  : 
								 ((1U 
								   & (IData)(
									     (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
									      >> 0x21U)))
								   ? 0x12U
								   : 
								  ((1U 
								    & (IData)(
									      (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
									       >> 0x20U)))
								    ? 0x13U
								    : 
								   ((1U 
								     & (IData)(
									       (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0x1fU)))
								     ? 0x14U
								     : 
								    ((1U 
								      & (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0x1eU)))
								      ? 0x15U
								      : 
								     ((1U 
								       & (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0x1dU)))
								       ? 0x16U
								       : 
								      ((1U 
									& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0x1cU)))
								        ? 0x17U
								        : 
								       ((1U 
									 & (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0x1bU)))
									 ? 0x18U
									 : 
									((1U 
									  & (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0x1aU)))
									  ? 0x19U
									  : 
									 ((1U 
									   & (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0x19U)))
									   ? 0x1aU
									   : 
									  ((1U 
									    & (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0x18U)))
									    ? 0x1bU
									    : 
									   ((1U 
									     & (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0x17U)))
									     ? 0x1cU
									     : 
									    ((1U 
									      & (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0x16U)))
									      ? 0x1dU
									      : 
									     ((1U 
									       & (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0x15U)))
									       ? 0x1eU
									       : 
									      ((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0x14U)))
									        ? 0x1fU
									        : 
									       ((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0x13U)))
										 ? 0x20U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0x12U)))
										 ? 0x21U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0x11U)))
										 ? 0x22U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0x10U)))
										 ? 0x23U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0xfU)))
										 ? 0x24U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0xeU)))
										 ? 0x25U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0xdU)))
										 ? 0x26U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0xcU)))
										 ? 0x27U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0xbU)))
										 ? 0x28U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0xaU)))
										 ? 0x29U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 9U)))
										 ? 0x2aU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 8U)))
										 ? 0x2bU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 7U)))
										 ? 0x2cU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 6U)))
										 ? 0x2dU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 5U)))
										 ? 0x2eU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 4U)))
										 ? 0x2fU
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 3U)))
										 ? 0x30U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 2U)))
										 ? 0x31U
										 : 
										((1U 
										& (IData)(
										(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 1U)))
										 ? 0x32U
										 : 0x33U)))))))))))))))))))))))))))))))))))))))))))))))))));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw_io_invalidExc) 
	   | (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isNaN_PC));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw_io_infiniteExc) 
	   | (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isInf_PC));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_165) 
	   | (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_4 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_2) 
	   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_1)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_5 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_2) 
	   & (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_1));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_89 
	= ((0xf0fU & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_79) 
		      >> 4U)) | (0xf0f0U & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_79) 
					    << 4U)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_38 
	= ((0xff00ffU & (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_28 
			 >> 8U)) | (0xff00ff00U & (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_28 
						   << 8U)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PC_normalCase 
	= (((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PB) 
	    & (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__normalCase_PB)) 
	   & (3U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_C)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw_io_rawOutValid_sqrt 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PC) 
	   & (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_leaving_PC));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__ready_PC 
	= (1U & ((~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PC)) 
		 | (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_leaving_PC)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PB_normalCase 
	= (((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PA) 
	    & (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__normalCase_PA)) 
	   & (7U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw_io_latchMulAddA_0 
	= ((((((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_449) 
	       | (4U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B))) 
	      | (3U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B))) 
	     | (6U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_C))) 
	    | (4U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_C))) 
	   | (1U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_C)));
    VL_EXTEND_WQ(115,52, __Vtemp95, (VL_ULL(0xfffffffffffff) 
				     & vlTOPp->io_input_bits_b));
    VL_SHIFTL_WWI(115,115,6, __Vtemp96, __Vtemp95, (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT___T_110));
    __Vtemp98[1U] = ((0xe0000000U & ((((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT___T_120)
				        ? 0U : ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT___T_119) 
						>> 9U)) 
				      | ((3U == (3U 
						 & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT___T_119) 
						    >> 0xaU))) 
					 & (VL_ULL(0) 
					    != (VL_ULL(0xfffffffffffff) 
						& vlTOPp->io_input_bits_b)))) 
				     << 0x1dU)) | (IData)(
							  ((((QData)((IData)(
									     (0x1ffU 
									      & (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT___T_119)))) 
							     << 0x34U) 
							    | (VL_ULL(0xfffffffffffff) 
							       & ((0U 
								   == 
								   (0x7ffU 
								    & (IData)(
									      (vlTOPp->io_input_bits_b 
									       >> 0x34U))))
								   ? 
								  (VL_ULL(0xffffffffffffe) 
								   & (((QData)((IData)(
										__Vtemp96[1U])) 
								       << 0x21U) 
								      | ((QData)((IData)(
										__Vtemp96[0U])) 
									 << 1U)))
								   : vlTOPp->io_input_bits_b))) 
							   >> 0x20U)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds_io_b[0U] 
	= (IData)((((QData)((IData)((0x1ffU & (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT___T_119)))) 
		    << 0x34U) | (VL_ULL(0xfffffffffffff) 
				 & ((0U == (0x7ffU 
					    & (IData)(
						      (vlTOPp->io_input_bits_b 
						       >> 0x34U))))
				     ? (VL_ULL(0xffffffffffffe) 
					& (((QData)((IData)(
							    __Vtemp96[1U])) 
					    << 0x21U) 
					   | ((QData)((IData)(
							      __Vtemp96[0U])) 
					      << 1U)))
				     : vlTOPp->io_input_bits_b))));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds_io_b[1U] 
	= __Vtemp98[1U];
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds_io_b[2U] 
	= (1U & (IData)((vlTOPp->io_input_bits_b >> 0x3fU)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT___T_258 
	= (0xfffU & (((0U == (0x7ffU & (IData)((vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
						>> 0x34U))))
		       ? (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT___T_249))
		       : (0x7ffU & (IData)((vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
					    >> 0x34U)))) 
		     + (0x400U | ((0U == (0x7ffU & (IData)(
							   (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
							    >> 0x34U))))
				   ? 2U : 1U))));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
	= (1U & (((~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
		  & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut))) 
		 & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isZero_PC))));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_99 
	= ((0x3333U & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_89) 
		       >> 2U)) | (0xccccU & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_89) 
					     << 2U)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_48 
	= ((0xf0f0f0fU & (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_38 
			  >> 4U)) | (0xf0f0f0f0U & 
				     (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_38 
				      << 4U)));
    vlTOPp->io_check = vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw_io_rawOutValid_sqrt;
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_8 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw_io_rawOutValid_sqrt) 
	   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_4)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_leaving_PB 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__normalCase_PB)
	    ? (3U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_C))
	    : (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__ready_PC));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw_io_usingMulAdd 
	= ((((((((((((4U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A)) 
		     | (0xaU == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B))) 
		    | (9U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B))) 
		   | (7U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B))) 
		  | (6U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B))) 
		 | (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_B5_sqrt)) 
		| (3U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B))) 
	       | (1U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B))) 
	      | (4U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_C))) 
	     << 3U) | ((((((((((3U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A)) 
			       | (9U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B))) 
			      | (8U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B))) 
			     | (6U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B))) 
			    | (5U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B))) 
			   | (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_B4_sqrt)) 
			  | (2U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B))) 
			 | (6U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_C))) 
			| (3U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_C))) 
		       << 2U)) | (((((((((((2U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A)) 
					   | (8U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B))) 
					  | (7U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B))) 
					 | (5U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B))) 
					| (4U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B))) 
				       | (3U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B))) 
				      | (1U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B))) 
				     | (5U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_C))) 
				    | (2U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_C))) 
				   << 1U) | (((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw_io_latchMulAddA_0) 
					      | (6U 
						 == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B))) 
					     | (2U 
						== (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B)))));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__rawB_S_sig 
	= (((QData)((IData)((0U != (7U & ((vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds_io_b[2U] 
					   << 3U) | 
					  (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds_io_b[1U] 
					   >> 0x1dU)))))) 
	    << 0x34U) | (VL_ULL(0xfffffffffffff) & 
			 (((QData)((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds_io_b[1U])) 
			   << 0x20U) | (QData)((IData)(
						       vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds_io_b[0U])))));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__rawB_S_isInf 
	= ((3U == (3U & ((vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds_io_b[2U] 
			  << 2U) | (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds_io_b[1U] 
				    >> 0x1eU)))) & 
	   (~ (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds_io_b[1U] 
	       >> 0x1dU)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__rawB_S_isNaN 
	= ((3U == (3U & ((vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds_io_b[2U] 
			  << 2U) | (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds_io_b[1U] 
				    >> 0x1eU)))) & 
	   (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds_io_b[1U] 
	    >> 0x1dU));
    VL_EXTEND_WQ(115,52, __Vtemp100, (VL_ULL(0xfffffffffffff) 
				      & vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data));
    VL_SHIFTL_WWI(115,115,6, __Vtemp101, __Vtemp100, (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT___T_249));
    __Vtemp103[1U] = ((0xe0000000U & ((((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT___T_259)
					 ? 0U : ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT___T_258) 
						 >> 9U)) 
				       | ((3U == (3U 
						  & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT___T_258) 
						     >> 0xaU))) 
					  & (VL_ULL(0) 
					     != (VL_ULL(0xfffffffffffff) 
						 & vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data)))) 
				      << 0x1dU)) | (IData)(
							   ((((QData)((IData)(
									      (0x1ffU 
									       & (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT___T_258)))) 
							      << 0x34U) 
							     | (VL_ULL(0xfffffffffffff) 
								& ((0U 
								    == 
								    (0x7ffU 
								     & (IData)(
									       (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
										>> 0x34U))))
								    ? 
								   (VL_ULL(0xffffffffffffe) 
								    & (((QData)((IData)(
										__Vtemp101[1U])) 
									<< 0x21U) 
								       | ((QData)((IData)(
										__Vtemp101[0U])) 
									  << 1U)))
								    : vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data))) 
							    >> 0x20U)));
    vlTOPp->io_expected_recOut[0U] = (IData)((((QData)((IData)(
							       (0x1ffU 
								& (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT___T_258)))) 
					       << 0x34U) 
					      | (VL_ULL(0xfffffffffffff) 
						 & ((0U 
						     == 
						     (0x7ffU 
						      & (IData)(
								(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
								 >> 0x34U))))
						     ? 
						    (VL_ULL(0xffffffffffffe) 
						     & (((QData)((IData)(
									 __Vtemp101[1U])) 
							 << 0x21U) 
							| ((QData)((IData)(
									   __Vtemp101[0U])) 
							   << 1U)))
						     : vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data))));
    vlTOPp->io_expected_recOut[1U] = __Vtemp103[1U];
    vlTOPp->io_expected_recOut[2U] = (1U & (IData)(
						   (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data 
						    >> 0x3fU)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_58 
	= ((0x33333333U & (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_48 
			   >> 2U)) | (0xccccccccU & 
				      (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_48 
				       << 2U)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__leaving_PB 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PB) 
	   & (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_leaving_PB));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__ready_PB 
	= (1U & ((~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PB)) 
		 | (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_leaving_PB)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__notSigNaNIn_invalidExc_S_sqrt 
	= (((~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__rawB_S_isNaN)) 
	    & (0U != (7U & ((vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds_io_b[2U] 
			     << 3U) | (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds_io_b[1U] 
				       >> 0x1dU))))) 
	   & vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds_io_b[2U]);
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__normalCase_S_sqrt 
	= (1U & ((~ (((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__rawB_S_isNaN) 
		      | (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__rawB_S_isInf)) 
		     | (0U == (7U & ((vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds_io_b[2U] 
				      << 3U) | (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds_io_b[1U] 
						>> 0x1dU)))))) 
		 & (~ vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds_io_b[2U])));
    __Vtemp105[0U] = 0U;
    __Vtemp105[1U] = 0U;
    __Vtemp105[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp106, __Vtemp105, 
		   (0x3fU & (~ (0x1fffU & VL_EXTENDS_II(13,12, 
							(0xfffU 
							 & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExp_PC) 
							    >> 1U)))))));
    __Vtemp109[0U] = 0U;
    __Vtemp109[1U] = 0U;
    __Vtemp109[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp110, __Vtemp109, 
		   (0x3fU & (~ (0x1fffU & VL_EXTENDS_II(13,12, 
							(0xfffU 
							 & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExp_PC) 
							    >> 1U)))))));
    __Vtemp113[0U] = 0U;
    __Vtemp113[1U] = 0U;
    __Vtemp113[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp114, __Vtemp113, 
		   (0x3fU & (~ (0x1fffU & VL_EXTENDS_II(13,12, 
							(0xfffU 
							 & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExp_PC) 
							    >> 1U)))))));
    __Vtemp117[0U] = 0U;
    __Vtemp117[1U] = 0U;
    __Vtemp117[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp118, __Vtemp117, 
		   (0x3fU & (~ (0x1fffU & VL_EXTENDS_II(13,12, 
							(0xfffU 
							 & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExp_PC) 
							    >> 1U)))))));
    __Vtemp121[0U] = 0U;
    __Vtemp121[1U] = 0U;
    __Vtemp121[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp122, __Vtemp121, 
		   (0x3fU & (~ (0x1fffU & VL_EXTENDS_II(13,12, 
							(0xfffU 
							 & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExp_PC) 
							    >> 1U)))))));
    __Vtemp125[0U] = 0U;
    __Vtemp125[1U] = 0U;
    __Vtemp125[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp126, __Vtemp125, 
		   (0x3fU & (~ (0x1fffU & VL_EXTENDS_II(13,12, 
							(0xfffU 
							 & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExp_PC) 
							    >> 1U)))))));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_153 
	= ((0x800U & ((IData)(0x400U) + VL_EXTENDS_II(13,12, 
						      (0xfffU 
						       & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExp_PC) 
							  >> 1U)))))
	    ? VL_ULL(0) : ((0x400U & ((IData)(0x400U) 
				      + VL_EXTENDS_II(13,12, 
						      (0xfffU 
						       & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExp_PC) 
							  >> 1U)))))
			    ? (QData)((IData)(((0x200U 
						& ((IData)(0x400U) 
						   + 
						   VL_EXTENDS_II(13,12, 
								 (0xfffU 
								  & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExp_PC) 
								     >> 1U)))))
					        ? 0U
					        : (
						   (0x100U 
						    & ((IData)(0x400U) 
						       + 
						       VL_EXTENDS_II(13,12, 
								     (0xfffU 
								      & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExp_PC) 
									 >> 1U)))))
						    ? 0U
						    : 
						   ((0x80U 
						     & ((IData)(0x400U) 
							+ 
							VL_EXTENDS_II(13,12, 
								      (0xfffU 
								       & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExp_PC) 
									  >> 1U)))))
						     ? 0U
						     : 
						    ((0x40U 
						      & ((IData)(0x400U) 
							 + 
							 VL_EXTENDS_II(13,12, 
								       (0xfffU 
									& ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExp_PC) 
									   >> 1U)))))
						      ? 0U
						      : 
						     ((4U 
						       & (__Vtemp106[0U] 
							  << 2U)) 
						      | ((2U 
							  & __Vtemp110[0U]) 
							 | (1U 
							    & (__Vtemp114[0U] 
							       >> 2U))))))))))
			    : (VL_ULL(7) | (VL_ULL(0x3ffffffffffff8) 
					    & ((~ (
						   (0x200U 
						    & ((IData)(0x400U) 
						       + 
						       VL_EXTENDS_II(13,12, 
								     (0xfffU 
								      & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExp_PC) 
									 >> 1U)))))
						    ? 
						   ((0x100U 
						     & ((IData)(0x400U) 
							+ 
							VL_EXTENDS_II(13,12, 
								      (0xfffU 
								       & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExp_PC) 
									  >> 1U)))))
						     ? 
						    ((0x80U 
						      & ((IData)(0x400U) 
							 + 
							 VL_EXTENDS_II(13,12, 
								       (0xfffU 
									& ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExp_PC) 
									   >> 1U)))))
						      ? 
						     ((0x40U 
						       & ((IData)(0x400U) 
							  + 
							  VL_EXTENDS_II(13,12, 
									(0xfffU 
									 & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExp_PC) 
									    >> 1U)))))
						       ? 
						      (~ 
						       (((QData)((IData)(
									 ((0x55555555U 
									   & (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_58 
									      >> 1U)) 
									  | (0xaaaaaaaaU 
									     & (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_58 
										<< 1U))))) 
							 << 0x13U) 
							| (QData)((IData)(
									  (((0x2aaa8U 
									     & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_99) 
										<< 2U)) 
									    | (0x55550U 
									       & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_99) 
										<< 4U))) 
									   | ((4U 
									       & (__Vtemp118[1U] 
										>> 0x1bU)) 
									      | ((2U 
										& (__Vtemp122[1U] 
										>> 0x1dU)) 
										| (1U 
										& (__Vtemp126[1U] 
										>> 0x1fU)))))))))
						       : VL_ULL(0))
						      : VL_ULL(0))
						     : VL_ULL(0))
						    : VL_ULL(0))) 
					       << 3U)))));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_leaving_PA 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__normalCase_PA)
	    ? (7U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B))
	    : (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__ready_PB));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isNaN_S 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__rawB_S_isNaN) 
	   | (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__notSigNaNIn_invalidExc_S_sqrt));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__majorExc_S 
	= (((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__rawB_S_isNaN) 
	    & (~ (IData)((vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__rawB_S_sig 
			  >> 0x33U)))) | (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__notSigNaNIn_invalidExc_S_sqrt));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_162 
	= (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw_io_rawOut_sig 
	   & (VL_ULL(1) | (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_153 
			   << 1U)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_159 
	= ((~ (VL_ULL(1) | (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_153 
			    << 1U))) & (VL_ULL(3) | 
					(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_153 
					 << 2U)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__leaving_PA 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PA) 
	   & (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_leaving_PA));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw_io_inReady_sqrt 
	= ((((((~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PA)) 
	       | (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_leaving_PA)) 
	      & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_B6_sqrt))) 
	     & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_B5_sqrt))) 
	    & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_B4_sqrt))) 
	   & (1U != (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_160 
	= (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw_io_rawOut_sig 
	   & vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_159);
    vlTOPp->io_input_ready = ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw_io_inReady_sqrt) 
			      & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_5)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq_io_enq_valid 
	= ((IData)(vlTOPp->io_input_valid) & (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw_io_inReady_sqrt));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_S_sqrt 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw_io_inReady_sqrt) 
	   & ((IData)(vlTOPp->io_input_valid) & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_5))));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_164 
	= ((VL_ULL(0) != vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_160) 
	   | (VL_ULL(0) != vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_162));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_6 
	= ((~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_5)) 
	   & (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq_io_enq_valid));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_148 
	= (((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_S_sqrt) 
	    & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__normalCase_S_sqrt))) 
	   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PA)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_A7_sqrt 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_S_sqrt) 
	   & (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__normalCase_S_sqrt));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_186 
	= (VL_ULL(0x7fffffffffffff) & ((((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_165) 
					 & (VL_ULL(0) 
					    != vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_160)) 
					| ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
					   & (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_164)))
				        ? ((VL_ULL(1) 
					    + (VL_ULL(0x3fffffffffffff) 
					       & ((vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw_io_rawOut_sig 
						   >> 2U) 
						  | (VL_ULL(0x3fffffffffffffff) 
						     & vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_153)))) 
					   & (~ (((
						   (0U 
						    == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__roundingMode_PC)) 
						   & (VL_ULL(0) 
						      != vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_160)) 
						  & (VL_ULL(0) 
						     == vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_162))
						  ? 
						 (VL_ULL(1) 
						  | (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_153 
						     << 1U))
						  : VL_ULL(0))))
				        : ((VL_ULL(0x3fffffffffffff) 
					    & ((vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw_io_rawOut_sig 
						& (~ 
						   (VL_ULL(3) 
						    | (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_153 
						       << 2U)))) 
					       >> 2U)) 
					   | (((6U 
						== (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__roundingMode_PC)) 
					       & (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_164))
					       ? (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_159 
						  >> 1U)
					       : VL_ULL(0)))));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PB 
	= (((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_148) 
	    & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__leaving_PB) 
	       | ((~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PB)) 
		  & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__ready_PC))))) 
	   | (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__leaving_PA));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PC 
	= ((((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_148) 
	     & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PB))) 
	    & (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__ready_PC)) 
	   | (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__leaving_PB));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_81 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_A7_sqrt) 
	   | (0U != (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_89 
	= (7U & (((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_A7_sqrt)
		   ? 6U : 0U) | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_A7_sqrt)
				  ? 0U : ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A) 
					  - (IData)(1U)))));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PA 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_A7_sqrt) 
	   | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_S_sqrt) 
	      & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PA) 
		 | (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__ready_PB)))));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_415 
	= ((((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_A7_sqrt) 
	     | (6U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A))) 
	    | (5U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A))) 
	   | (4U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zFractB_A7_sqrt 
	= (VL_ULL(0xfffffffffffff) & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_A7_sqrt)
				       ? vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__rawB_S_sig
				       : VL_ULL(0)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_277 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_A7_sqrt) 
	   & (~ (0xfffU & ((vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds_io_b[2U] 
			    << 0xcU) | (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds_io_b[1U] 
					>> 0x14U)))));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_285 
	= (0xfffU & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_A7_sqrt) 
		     & ((vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds_io_b[2U] 
			 << 0xcU) | (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds_io_b[1U] 
				     >> 0x14U))));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189 
	= (0x3fffU & (VL_EXTENDS_II(14,13, (0x1fffU 
					    & ((IData)(0x400U) 
					       + VL_EXTENDS_II(13,12, 
							       (0xfffU 
								& ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExp_PC) 
								   >> 1U)))))) 
		      + VL_EXTENDS_II(14,13, (3U & (IData)(
							   (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_186 
							    >> 0x35U))))));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_177 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PC) 
	   | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PC) 
	      & (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_leaving_PC)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zQuadPiece_0_A7_sqrt 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_277) 
	   & (~ (IData)((vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__rawB_S_sig 
			 >> 0x33U))));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zQuadPiece_1_A7_sqrt 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_277) 
	   & (IData)((vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__rawB_S_sig 
		      >> 0x33U)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zQuadPiece_2_A7_sqrt 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_285) 
	   & (~ (IData)((vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__rawB_S_sig 
			 >> 0x33U))));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zQuadPiece_3_A7_sqrt 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_285) 
	   & (IData)((vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__rawB_S_sig 
		      >> 0x33U)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut 
	= (((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
	    & VL_GTS_III(1,14,14, 0x3ceU, (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189))) 
	   & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
	      | (6U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__roundingMode_PC))));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
	   & VL_LTES_III(1,4,4, 3U, (0xfU & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189) 
					     >> 0xaU))));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__mulAdd9C_A 
	= ((0x1fffffU & ((((((((((((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zQuadPiece_0_A7_sqrt)
				    ? 0x2fU : 0U) | 
				  ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zQuadPiece_1_A7_sqrt)
				    ? 0x1dfU : 0U)) 
				 | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zQuadPiece_2_A7_sqrt)
				     ? 0x14dU : 0U)) 
				| ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zQuadPiece_3_A7_sqrt)
				    ? 0x27eU : 0U)) 
			       << 0xaU) | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_A7_sqrt)
					    ? 0x3ffU
					    : 0U)) 
			     | (((6U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A)) 
				 << 0x13U) | ((((((
						   ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_309) 
						    & (~ (IData)(
								 (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__fractB_PA 
								  >> 0x33U))))
						    ? 0x1aU
						    : 0U) 
						  | (((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_309) 
						      & (IData)(
								(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__fractB_PA 
								 >> 0x33U)))
						      ? 0xbcaU
						      : 0U)) 
						 | (((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_317) 
						     & (~ (IData)(
								  (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__fractB_PA 
								   >> 0x33U))))
						     ? 0x12d3U
						     : 0U)) 
						| (((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_317) 
						    & (IData)(
							      (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__fractB_PA 
							       >> 0x33U)))
						    ? 0x1b17U
						    : 0U)) 
					       << 6U) 
					      | ((6U 
						  == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A))
						  ? 0x3fU
						  : 0U)))) 
			    | (0xfffffU & ((5U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A))
					    ? ((IData)(0x40000U) 
					       + ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__fractR0_A) 
						  << 0xaU))
					    : 0U))) 
			   | (((4U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A)) 
			       & (~ ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__hiSqrR0_A_sqrt) 
				     >> 9U))) ? 0x400U
			       : 0U)) | (((4U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A)) 
					  & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__hiSqrR0_A_sqrt) 
					     >> 9U))
					  ? ((IData)(0x400U) 
					     + (IData)(
						       (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__fractB_PA 
							>> 0x1aU)))
					  : 0U)) | 
			 (((3U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A)) 
			   | (2U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A)))
			   ? vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__partNegSigma0_A
			   : 0U))) | ((1U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A))
				       ? ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__fractR0_A) 
					  << 0x10U)
				       : 0U));
    vlTOPp->io_actual_exceptionFlags = ((((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw_io_invalidExc) 
					  << 4U) | 
					 (((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw_io_infiniteExc) 
					   << 3U) | 
					  ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
					   << 2U))) 
					| ((((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
					     & (VL_GTS_III(1,14,14, 0x3ceU, (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189)) 
						| ((((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_164) 
						     & VL_GTES_III(1,2,2, 0U, 
								   (3U 
								    & (((IData)(0x400U) 
									+ 
									VL_EXTENDS_II(13,12, 
										(0xfffU 
										& ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExp_PC) 
										>> 1U)))) 
								       >> 0xbU)))) 
						    & (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_153)) 
						   & (~ 
						      (((((IData)(vlTOPp->io_input_bits_detectTininess) 
							  & (~ (IData)(
								       (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_153 
									>> 1U)))) 
							 & (IData)(
								   (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_186 
								    >> 0x35U))) 
							& (VL_ULL(0) 
							   != vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_160)) 
						       & (((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_165) 
							   & (IData)(
								     (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw_io_rawOut_sig 
								      >> 1U))) 
							  | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
							     & (0U 
								!= 
								(3U 
								 & (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw_io_rawOut_sig)))))))))) 
					    << 1U) 
					   | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
					      | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
						 & (VL_GTS_III(1,14,14, 0x3ceU, (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189)) 
						    | (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_164))))));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
	   & (~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut 
	= ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut) 
	   | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow) 
	      & (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__loMulAdd9Out_A 
	= (0x7ffffU & ((0x3ffffU & (((((((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zQuadPiece_0_A7_sqrt)
					  ? 0x1c8U : 0U) 
					| ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zQuadPiece_1_A7_sqrt)
					    ? 0xc1U
					    : 0U)) 
				       | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zQuadPiece_2_A7_sqrt)
					   ? 0x143U
					   : 0U)) | 
				      ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zQuadPiece_3_A7_sqrt)
				        ? 0x89U : 0U)) 
				     | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_S_sqrt)
					 ? 0U : (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__nextMulAdd9A_A))) 
				    * (0x1ffU & ((IData)(
							 (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zFractB_A7_sqrt 
							  >> 0x2aU)) 
						 | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_S_sqrt)
						     ? 0U
						     : (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__nextMulAdd9B_A)))))) 
		       + (0x3ffffU & vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__mulAdd9C_A)));
    __Vtemp128[0U] = (IData)((((QData)((IData)((0xfffU 
						& (((((((((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189) 
							  & (~ 
							     (((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isZero_PC) 
							       | VL_GTS_III(1,14,14, 0x3ceU, (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189)))
							       ? 0xe00U
							       : 0U))) 
							 & (~ 
							    ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
							      ? 0xc31U
							      : 0U))) 
							& (~ 
							   ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
							     ? 0x400U
							     : 0U))) 
						       & (~ 
							  ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
							    ? 0x200U
							    : 0U))) 
						      | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
							  ? 0x3ceU
							  : 0U)) 
						     | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
							 ? 0xbffU
							 : 0U)) 
						    | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
						        ? 0xc00U
						        : 0U)) 
						   | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
						       ? 0xe00U
						       : 0U))))) 
			       << 0x34U) | (VL_ULL(0xfffffffffffff) 
					    & (((((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
						  | (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isZero_PC)) 
						 | VL_GTS_III(1,14,14, 0x3ceU, (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189)))
						 ? 
						((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
						  ? VL_ULL(0x8000000000000)
						  : VL_ULL(0))
						 : vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_186) 
					       | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
						   ? VL_ULL(0xfffffffffffff)
						   : VL_ULL(0))))));
    __Vtemp128[1U] = (IData)(((((QData)((IData)((0xfffU 
						 & (((((((((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189) 
							   & (~ 
							      (((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isZero_PC) 
								| VL_GTS_III(1,14,14, 0x3ceU, (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189)))
							        ? 0xe00U
							        : 0U))) 
							  & (~ 
							     ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
							       ? 0xc31U
							       : 0U))) 
							 & (~ 
							    ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
							      ? 0x400U
							      : 0U))) 
							& (~ 
							   ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
							     ? 0x200U
							     : 0U))) 
						       | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut)
							   ? 0x3ceU
							   : 0U)) 
						      | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
							  ? 0xbffU
							  : 0U)) 
						     | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut)
							 ? 0xc00U
							 : 0U)) 
						    | ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
						        ? 0xe00U
						        : 0U))))) 
				<< 0x34U) | (VL_ULL(0xfffffffffffff) 
					     & (((((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut) 
						   | (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isZero_PC)) 
						  | VL_GTS_III(1,14,14, 0x3ceU, (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189)))
						  ? 
						 ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)
						   ? VL_ULL(0x8000000000000)
						   : VL_ULL(0))
						  : vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_186) 
						| ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut)
						    ? VL_ULL(0xfffffffffffff)
						    : VL_ULL(0))))) 
			      >> 0x20U));
    vlTOPp->io_actual_out[0U] = __Vtemp128[0U];
    vlTOPp->io_actual_out[1U] = __Vtemp128[1U];
    vlTOPp->io_actual_out[2U] = ((~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
				 & (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sign_PC));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__mulAdd9Out_A 
	= ((0x1fc0000U & (((0x40000U & vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__loMulAdd9Out_A)
			    ? ((IData)(1U) + (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__mulAdd9C_A 
					      >> 0x12U))
			    : (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__mulAdd9C_A 
			       >> 0x12U)) << 0x12U)) 
	   | (0x3ffffU & vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__loMulAdd9Out_A));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT___T_288 
	= ((0xfU & ((vlTOPp->io_actual_out[2U] << 3U) 
		    | (vlTOPp->io_actual_out[1U] >> 0x1dU))) 
	   == (0xfU & ((vlTOPp->io_expected_recOut[2U] 
			<< 3U) | (vlTOPp->io_expected_recOut[1U] 
				  >> 0x1dU))));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___GEN_39 
	= (((4U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A)) 
	    | (3U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A)))
	    ? ((4U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A))
	        ? vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__mulAdd9Out_A
	        : (0xffffU & (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__mulAdd9Out_A 
			      >> 9U))) : vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__partNegSigma0_A);
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sqrR0_A5_sqrt 
	= ((1U & (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExp_PA))
	    ? (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__mulAdd9Out_A 
	       << 1U) : vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__mulAdd9Out_A);
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zFractR0_A6_sqrt 
	= (0x7fffU & (((6U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A)) 
		       & (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__mulAdd9Out_A 
			  >> 0x13U)) ? (~ (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__mulAdd9Out_A 
					   >> 0xaU))
		       : 0U));
    vlTOPp->io_pass = (((~ (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_4)) 
			& (((0U == (7U & ((vlTOPp->io_actual_out[2U] 
					   << 3U) | 
					  (vlTOPp->io_actual_out[1U] 
					   >> 0x1dU)))) 
			    | (7U == (7U & ((vlTOPp->io_actual_out[2U] 
					     << 3U) 
					    | (vlTOPp->io_actual_out[1U] 
					       >> 0x1dU)))))
			    ? ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT___T_288) 
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
			        ? (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT___T_288)
			        : (0U == (((vlTOPp->io_actual_out[0U] 
					    ^ vlTOPp->io_expected_recOut[0U]) 
					   | (vlTOPp->io_actual_out[1U] 
					      ^ vlTOPp->io_expected_recOut[1U])) 
					  | (vlTOPp->io_actual_out[2U] 
					     ^ vlTOPp->io_expected_recOut[2U])))))) 
		       & ((IData)(vlTOPp->io_actual_exceptionFlags) 
			  == (IData)(vlTOPp->io_expected_exceptionFlags)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___GEN_38 
	= (0xffffU & ((5U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A))
		       ? (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sqrR0_A5_sqrt 
			  >> 0xaU) : (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__hiSqrR0_A_sqrt)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___GEN_37 
	= ((6U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A))
	    ? (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zFractR0_A6_sqrt)
	    : (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__fractR0_A));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___GEN_40 
	= (0x7fffffU & ((((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_415) 
			  | (3U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A))) 
			 | (2U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A)))
			 ? (((((0x3fffU & ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_A7_sqrt)
					    ? (~ (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__mulAdd9Out_A 
						  >> 0xbU))
					    : 0U)) 
			       | (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zFractR0_A6_sqrt)) 
			      | (0x1ffU & ((4U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A))
					    ? (IData)(
						      (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__fractB_PA 
						       >> 0x23U))
					    : 0U))) 
			     | (((5U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A)) 
				 | (3U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A)))
				 ? (0x100U | (0xffU 
					      & (IData)(
							(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__fractB_PA 
							 >> 0x2cU))))
				 : 0U)) | (((2U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A)) 
					    & (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__mulAdd9Out_A 
					       >> 0xbU))
					    ? (~ (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__mulAdd9Out_A 
						  >> 2U))
					    : 0U)) : (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__nextMulAdd9A_A)));
    vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___GEN_41 
	= (((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_415) 
	    | (2U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A)))
	    ? (((((0x1ffU & (IData)((vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zFractB_A7_sqrt 
				     >> 0x2aU))) | (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zFractR0_A6_sqrt)) 
		 | (0x1ffU & ((5U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A))
			       ? (vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sqrR0_A5_sqrt 
				  >> 1U) : 0U))) | 
		(0x1ffU & ((4U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A))
			    ? (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__hiSqrR0_A_sqrt)
			    : 0U))) | ((2U == (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A))
				        ? (0x100U | 
					   (0xffU & 
					    ((IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__fractR0_A) 
					     >> 1U)))
				        : 0U)) : (IData)(vlTOPp->ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__nextMulAdd9B_A));
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
    io_input_bits_b = VL_RAND_RESET_Q(64);
    io_input_bits_roundingMode = VL_RAND_RESET_I(3);
    io_input_bits_detectTininess = VL_RAND_RESET_I(1);
    io_input_bits_out = VL_RAND_RESET_Q(64);
    io_input_bits_exceptionFlags = VL_RAND_RESET_I(5);
    io_output_b = VL_RAND_RESET_Q(64);
    io_output_roundingMode = VL_RAND_RESET_I(3);
    io_output_detectTininess = VL_RAND_RESET_I(1);
    io_expected_out = VL_RAND_RESET_Q(64);
    io_expected_exceptionFlags = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(65,io_expected_recOut);
    VL_RAND_RESET_W(65,io_actual_out);
    io_actual_exceptionFlags = VL_RAND_RESET_I(5);
    io_check = VL_RAND_RESET_I(1);
    io_pass = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65,ValExec_DivSqrtRecF64_sqrt__DOT__ds_io_b);
    ValExec_DivSqrtRecF64_sqrt__DOT__cq_io_enq_valid = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT___T_110 = VL_RAND_RESET_I(6);
    ValExec_DivSqrtRecF64_sqrt__DOT___T_119 = VL_RAND_RESET_I(12);
    ValExec_DivSqrtRecF64_sqrt__DOT___T_120 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT___T_249 = VL_RAND_RESET_I(6);
    ValExec_DivSqrtRecF64_sqrt__DOT___T_258 = VL_RAND_RESET_I(12);
    ValExec_DivSqrtRecF64_sqrt__DOT___T_259 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT___T_288 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw_io_inReady_sqrt = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw_io_usingMulAdd = VL_RAND_RESET_I(4);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw_io_latchMulAddA_0 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw_io_rawOutValid_sqrt = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw_io_invalidExc = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw_io_infiniteExc = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw_io_rawOut_sig = VL_RAND_RESET_Q(56);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A = VL_RAND_RESET_I(3);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B = VL_RAND_RESET_I(4);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_C = VL_RAND_RESET_I(3);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_E = VL_RAND_RESET_I(3);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PA = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__majorExc_PA = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isNaN_PA = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isInf_PA = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isZero_PA = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sign_PA = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExp_PA = VL_RAND_RESET_I(13);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__fractB_PA = VL_RAND_RESET_Q(52);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__roundingMode_PA = VL_RAND_RESET_I(3);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PB = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__majorExc_PB = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isNaN_PB = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isInf_PB = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isZero_PB = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sign_PB = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExp_PB = VL_RAND_RESET_I(13);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__fractB_PB = VL_RAND_RESET_Q(52);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__roundingMode_PB = VL_RAND_RESET_I(3);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PC = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__majorExc_PC = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isNaN_PC = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isInf_PC = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isZero_PC = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sign_PC = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExp_PC = VL_RAND_RESET_I(13);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__fractB_PC = VL_RAND_RESET_Q(52);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__roundingMode_PC = VL_RAND_RESET_I(3);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__fractR0_A = VL_RAND_RESET_I(9);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__hiSqrR0_A_sqrt = VL_RAND_RESET_I(10);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__partNegSigma0_A = VL_RAND_RESET_I(21);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__nextMulAdd9A_A = VL_RAND_RESET_I(9);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__nextMulAdd9B_A = VL_RAND_RESET_I(9);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__ER1_B_sqrt = VL_RAND_RESET_I(17);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__ESqrR1_B_sqrt = VL_RAND_RESET_I(32);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sigX1_B = VL_RAND_RESET_Q(58);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sqrSigma1_C = VL_RAND_RESET_Q(33);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sigXN_C = VL_RAND_RESET_Q(58);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__u_C_sqrt = VL_RAND_RESET_I(31);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sigT_E = VL_RAND_RESET_Q(54);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isNegRemT_E = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isZeroRemT_E = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_S_sqrt = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__rawB_S_isNaN = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__rawB_S_isInf = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__rawB_S_sig = VL_RAND_RESET_Q(54);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__notSigNaNIn_invalidExc_S_sqrt = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__majorExc_S = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isNaN_S = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__normalCase_S_sqrt = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_A7_sqrt = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_81 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_89 = VL_RAND_RESET_I(3);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_94 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_97 = VL_RAND_RESET_I(4);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_B6_sqrt = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_B5_sqrt = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_B4_sqrt = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_112 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_115 = VL_RAND_RESET_I(3);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_123 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_125 = VL_RAND_RESET_I(3);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__normalCase_PB = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_leaving_PC = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__ready_PC = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_leaving_PB = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__ready_PB = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PA = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__normalCase_PA = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_leaving_PA = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__leaving_PA = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_148 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__leaving_PB = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PB_normalCase = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PB = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PC_normalCase = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PC = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_177 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zFractB_A7_sqrt = VL_RAND_RESET_Q(52);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_277 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zQuadPiece_0_A7_sqrt = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zQuadPiece_1_A7_sqrt = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_285 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zQuadPiece_2_A7_sqrt = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zQuadPiece_3_A7_sqrt = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_309 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_317 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__mulAdd9C_A = VL_RAND_RESET_I(25);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__loMulAdd9Out_A = VL_RAND_RESET_I(19);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__mulAdd9Out_A = VL_RAND_RESET_I(25);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zFractR0_A6_sqrt = VL_RAND_RESET_I(15);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sqrR0_A5_sqrt = VL_RAND_RESET_I(26);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___GEN_37 = VL_RAND_RESET_I(15);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___GEN_38 = VL_RAND_RESET_I(16);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___GEN_39 = VL_RAND_RESET_I(25);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_415 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___GEN_40 = VL_RAND_RESET_I(23);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___GEN_41 = VL_RAND_RESET_I(15);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_449 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zSigma1_B4 = VL_RAND_RESET_Q(46);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zComplSigT_C1_sqrt = VL_RAND_RESET_Q(54);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_28 = VL_RAND_RESET_I(32);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_38 = VL_RAND_RESET_I(32);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_48 = VL_RAND_RESET_I(32);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_58 = VL_RAND_RESET_I(32);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_79 = VL_RAND_RESET_I(16);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_89 = VL_RAND_RESET_I(16);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_99 = VL_RAND_RESET_I(16);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_153 = VL_RAND_RESET_Q(54);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_159 = VL_RAND_RESET_Q(56);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_160 = VL_RAND_RESET_Q(56);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_162 = VL_RAND_RESET_Q(56);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_164 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_165 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_186 = VL_RAND_RESET_Q(55);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189 = VL_RAND_RESET_I(14);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__val_s1 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__val_s2 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_a_s1 = VL_RAND_RESET_Q(54);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_b_s1 = VL_RAND_RESET_Q(54);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_a_s2 = VL_RAND_RESET_Q(54);
    ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_b_s2 = VL_RAND_RESET_Q(54);
    VL_RAND_RESET_W(105,ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_result_s3);
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
	    ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_b[__Vi0] = VL_RAND_RESET_Q(64);
    }}
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
	    ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_roundingMode[__Vi0] = VL_RAND_RESET_I(3);
    }}
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
	    ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_detectTininess[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
	    ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out[__Vi0] = VL_RAND_RESET_Q(64);
    }}
    ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data = VL_RAND_RESET_Q(64);
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
	    ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_exceptionFlags[__Vi0] = VL_RAND_RESET_I(5);
    }}
    ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT__value = VL_RAND_RESET_I(3);
    ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT__value_1 = VL_RAND_RESET_I(3);
    ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_1 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_2 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_4 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_5 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_6 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_8 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT__wrap = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_12 = VL_RAND_RESET_I(3);
    ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT__wrap_1 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_14 = VL_RAND_RESET_I(3);
    ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT____Vlvbound1 = VL_RAND_RESET_Q(64);
    ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT____Vlvbound2 = VL_RAND_RESET_I(3);
    ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT____Vlvbound3 = VL_RAND_RESET_I(1);
    ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT____Vlvbound4 = VL_RAND_RESET_Q(64);
    ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT____Vlvbound5 = VL_RAND_RESET_I(5);
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
}
