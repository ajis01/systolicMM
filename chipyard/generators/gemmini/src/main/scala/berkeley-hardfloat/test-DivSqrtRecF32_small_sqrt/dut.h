// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _dut_H_
#define _dut_H_

#include "verilated.h"

class dut__Syms;

//----------

VL_MODULE(dut) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(io_input_ready,0,0);
    VL_IN8(io_input_valid,0,0);
    VL_IN8(io_input_bits_roundingMode,2,0);
    VL_IN8(io_input_bits_detectTininess,0,0);
    VL_IN8(io_input_bits_exceptionFlags,4,0);
    VL_OUT8(io_output_roundingMode,2,0);
    VL_OUT8(io_output_detectTininess,0,0);
    VL_OUT8(io_expected_exceptionFlags,4,0);
    VL_OUT8(io_actual_exceptionFlags,4,0);
    VL_OUT8(io_check,0,0);
    VL_OUT8(io_pass,0,0);
    VL_IN(io_input_bits_a,31,0);
    VL_IN(io_input_bits_out,31,0);
    VL_OUT(io_output_a,31,0);
    VL_OUT(io_expected_out,31,0);
    VL_OUT64(io_expected_recOut,32,0);
    VL_OUT64(io_actual_out,32,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(ValExec_DivSqrtRecF32_small_sqrt__DOT__cq_io_enq_valid,0,0);
    VL_SIG8(ValExec_DivSqrtRecF32_small_sqrt__DOT___T_52,4,0);
    VL_SIG8(ValExec_DivSqrtRecF32_small_sqrt__DOT___T_62,0,0);
    VL_SIG8(ValExec_DivSqrtRecF32_small_sqrt__DOT___T_133,4,0);
    VL_SIG8(ValExec_DivSqrtRecF32_small_sqrt__DOT___T_143,0,0);
    VL_SIG8(ValExec_DivSqrtRecF32_small_sqrt__DOT___T_172,0,0);
    VL_SIG8(ValExec_DivSqrtRecF32_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_isNaN,0,0);
    VL_SIG8(ValExec_DivSqrtRecF32_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_isInf,0,0);
    VL_SIG8(ValExec_DivSqrtRecF32_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_invalidExc,0,0);
    VL_SIG8(ValExec_DivSqrtRecF32_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_infiniteExc,0,0);
    VL_SIG8(ValExec_DivSqrtRecF32_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__majorExc_Z,0,0);
    VL_SIG8(ValExec_DivSqrtRecF32_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isNaN_Z,0,0);
    VL_SIG8(ValExec_DivSqrtRecF32_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isInf_Z,0,0);
    VL_SIG8(ValExec_DivSqrtRecF32_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isZero_Z,0,0);
    VL_SIG8(ValExec_DivSqrtRecF32_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sign_Z,0,0);
    VL_SIG8(ValExec_DivSqrtRecF32_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__roundingMode_Z,2,0);
    VL_SIG8(ValExec_DivSqrtRecF32_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__notZeroRem_Z,0,0);
    VL_SIG8(ValExec_DivSqrtRecF32_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__notSigNaNIn_invalidExc_S_sqrt,0,0);
    VL_SIG8(ValExec_DivSqrtRecF32_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__normalCase_S_sqrt,0,0);
    VL_SIG8(ValExec_DivSqrtRecF32_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady,0,0);
    VL_SIG8(ValExec_DivSqrtRecF32_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering,0,0);
    VL_SIG8(ValExec_DivSqrtRecF32_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering_normalCase,0,0);
    VL_SIG8(ValExec_DivSqrtRecF32_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__skipCycle2,0,0);
    VL_SIG8(ValExec_DivSqrtRecF32_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_52,0,0);
    VL_SIG8(ValExec_DivSqrtRecF32_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_76,0,0);
    VL_SIG8(ValExec_DivSqrtRecF32_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_79,0,0);
    VL_SIG8(ValExec_DivSqrtRecF32_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_125,0,0);
    VL_SIG8(ValExec_DivSqrtRecF32_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp,0,0);
    VL_SIG8(ValExec_DivSqrtRecF32_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_97,0,0);
    VL_SIG8(ValExec_DivSqrtRecF32_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_98,0,0);
    VL_SIG8(ValExec_DivSqrtRecF32_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut,0,0);
    VL_SIG8(ValExec_DivSqrtRecF32_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut,0,0);
    VL_SIG8(ValExec_DivSqrtRecF32_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase,0,0);
    VL_SIG8(ValExec_DivSqrtRecF32_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow,0,0);
    VL_SIG8(ValExec_DivSqrtRecF32_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp,0,0);
    VL_SIG8(ValExec_DivSqrtRecF32_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut,0,0);
    VL_SIG8(ValExec_DivSqrtRecF32_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut,0,0);
    VL_SIG8(ValExec_DivSqrtRecF32_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut,0,0);
    VL_SIG8(ValExec_DivSqrtRecF32_small_sqrt__DOT__cq__DOT__value,2,0);
    VL_SIG8(ValExec_DivSqrtRecF32_small_sqrt__DOT__cq__DOT__value_1,2,0);
    VL_SIG8(ValExec_DivSqrtRecF32_small_sqrt__DOT__cq__DOT___T_1,0,0);
    VL_SIG8(ValExec_DivSqrtRecF32_small_sqrt__DOT__cq__DOT___T_2,0,0);
    VL_SIG8(ValExec_DivSqrtRecF32_small_sqrt__DOT__cq__DOT___T_4,0,0);
    VL_SIG8(ValExec_DivSqrtRecF32_small_sqrt__DOT__cq__DOT___T_5,0,0);
    VL_SIG8(ValExec_DivSqrtRecF32_small_sqrt__DOT__cq__DOT___T_6,0,0);
    VL_SIG8(ValExec_DivSqrtRecF32_small_sqrt__DOT__cq__DOT___T_8,0,0);
    VL_SIG8(ValExec_DivSqrtRecF32_small_sqrt__DOT__cq__DOT__wrap,0,0);
    VL_SIG8(ValExec_DivSqrtRecF32_small_sqrt__DOT__cq__DOT___T_12,2,0);
    VL_SIG8(ValExec_DivSqrtRecF32_small_sqrt__DOT__cq__DOT__wrap_1,0,0);
    VL_SIG8(ValExec_DivSqrtRecF32_small_sqrt__DOT__cq__DOT___T_14,2,0);
    VL_SIG16(ValExec_DivSqrtRecF32_small_sqrt__DOT___T_61,8,0);
    VL_SIG16(ValExec_DivSqrtRecF32_small_sqrt__DOT___T_142,8,0);
    VL_SIG16(ValExec_DivSqrtRecF32_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z,9,0);
    VL_SIG16(ValExec_DivSqrtRecF32_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_22,15,0);
    VL_SIG16(ValExec_DivSqrtRecF32_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_32,15,0);
    VL_SIG16(ValExec_DivSqrtRecF32_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_42,15,0);
    VL_SIG16(ValExec_DivSqrtRecF32_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_122,10,0);
    VL_SIG(ValExec_DivSqrtRecF32_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_a_sig,24,0);
    VL_SIG(ValExec_DivSqrtRecF32_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN_io_rawOut_sig,26,0);
    VL_SIG(ValExec_DivSqrtRecF32_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum,26,0);
    VL_SIG(ValExec_DivSqrtRecF32_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__rem_Z,25,0);
    VL_SIG(ValExec_DivSqrtRecF32_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sigX_Z,25,0);
    VL_SIG(ValExec_DivSqrtRecF32_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_68,26,0);
    VL_SIG(ValExec_DivSqrtRecF32_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__rem,26,0);
    VL_SIG(ValExec_DivSqrtRecF32_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__trialTerm,26,0);
    VL_SIG(ValExec_DivSqrtRecF32_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__trialRem,27,0);
    VL_SIG(ValExec_DivSqrtRecF32_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___GEN_10,27,0);
    VL_SIG(ValExec_DivSqrtRecF32_small_sqrt__DOT__ds__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___T_141,25,0);
    VL_SIG(ValExec_DivSqrtRecF32_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_87,24,0);
    VL_SIG(ValExec_DivSqrtRecF32_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_92,26,0);
    VL_SIG(ValExec_DivSqrtRecF32_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_93,26,0);
    VL_SIG(ValExec_DivSqrtRecF32_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_95,26,0);
    VL_SIG(ValExec_DivSqrtRecF32_small_sqrt__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_119,25,0);
    VL_SIG(ValExec_DivSqrtRecF32_small_sqrt__DOT__cq__DOT___T_out___05FT_18_data,31,0);
    VL_SIG64(ValExec_DivSqrtRecF32_small_sqrt__DOT__ds_io_a,32,0);
    VL_SIG(ValExec_DivSqrtRecF32_small_sqrt__DOT__cq__DOT___T_a[5],31,0);
    VL_SIG8(ValExec_DivSqrtRecF32_small_sqrt__DOT__cq__DOT___T_roundingMode[5],2,0);
    VL_SIG8(ValExec_DivSqrtRecF32_small_sqrt__DOT__cq__DOT___T_detectTininess[5],0,0);
    VL_SIG(ValExec_DivSqrtRecF32_small_sqrt__DOT__cq__DOT___T_out[5],31,0);
    VL_SIG8(ValExec_DivSqrtRecF32_small_sqrt__DOT__cq__DOT___T_exceptionFlags[5],4,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(ValExec_DivSqrtRecF32_small_sqrt__DOT__cq__DOT____Vlvbound2,2,0);
    VL_SIG8(ValExec_DivSqrtRecF32_small_sqrt__DOT__cq__DOT____Vlvbound3,0,0);
    VL_SIG8(ValExec_DivSqrtRecF32_small_sqrt__DOT__cq__DOT____Vlvbound5,4,0);
    VL_SIG8(__Vclklast__TOP__clock,0,0);
    VL_SIG(ValExec_DivSqrtRecF32_small_sqrt__DOT__cq__DOT____Vlvbound1,31,0);
    VL_SIG(ValExec_DivSqrtRecF32_small_sqrt__DOT__cq__DOT____Vlvbound4,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    dut__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    dut& operator= (const dut&);  ///< Copying not allowed
    dut(const dut&);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    dut(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~dut();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(dut__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(dut__Syms* symsp, bool first);
  private:
    static QData _change_request(dut__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__2(dut__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset();
  public:
    static void _eval(dut__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(dut__Syms* __restrict vlSymsp);
    static void _eval_settle(dut__Syms* __restrict vlSymsp);
    static void _sequent__TOP__1(dut__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(dut__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif // guard
