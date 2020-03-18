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
    VL_IN8(io_roundingMode,2,0);
    VL_IN8(io_detectTininess,0,0);
    VL_IN8(io_expected_exceptionFlags,4,0);
    VL_OUT8(io_actual_exceptionFlags,4,0);
    VL_OUT8(io_check,0,0);
    VL_OUT8(io_pass,0,0);
    VL_OUTW(io_expected_recOut,64,0,3);
    VL_OUTW(io_actual_out,64,0,3);
    VL_IN64(io_a,63,0);
    VL_IN64(io_b,63,0);
    VL_IN64(io_expected_out,63,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(ValExec_MulAddRecF64_mul__DOT___T_107,5,0);
    VL_SIG8(ValExec_MulAddRecF64_mul__DOT___T_117,0,0);
    VL_SIG8(ValExec_MulAddRecF64_mul__DOT___T_246,5,0);
    VL_SIG8(ValExec_MulAddRecF64_mul__DOT___T_256,0,0);
    VL_SIG8(ValExec_MulAddRecF64_mul__DOT___T_388,5,0);
    VL_SIG8(ValExec_MulAddRecF64_mul__DOT___T_398,0,0);
    VL_SIG8(ValExec_MulAddRecF64_mul__DOT___T_427,0,0);
    VL_SIG8(ValExec_MulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isNaNAOrB,0,0);
    VL_SIG8(ValExec_MulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfA,0,0);
    VL_SIG8(ValExec_MulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfB,0,0);
    VL_SIG8(ValExec_MulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_isInfC,0,0);
    VL_SIG8(ValExec_MulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags,0,0);
    VL_SIG8(ValExec_MulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul_io_toPostMul_CIsDominant,0,0);
    VL_SIG8(ValExec_MulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_invalidExc,0,0);
    VL_SIG8(ValExec_MulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_isInf,0,0);
    VL_SIG8(ValExec_MulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_isZero,0,0);
    VL_SIG8(ValExec_MulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sign,0,0);
    VL_SIG8(ValExec_MulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN,0,0);
    VL_SIG8(ValExec_MulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_isNaN,0,0);
    VL_SIG8(ValExec_MulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__signProd,0,0);
    VL_SIG8(ValExec_MulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign,0,0);
    VL_SIG8(ValExec_MulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT___T_61,0,0);
    VL_SIG8(ValExec_MulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__CAlignDist,7,0);
    VL_SIG8(ValExec_MulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT___T_126,7,0);
    VL_SIG8(ValExec_MulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT___T_136,7,0);
    VL_SIG8(ValExec_MulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_sign,0,0);
    VL_SIG8(ValExec_MulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_78,7,0);
    VL_SIG8(ValExec_MulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_88,7,0);
    VL_SIG8(ValExec_MulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2,5,0);
    VL_SIG8(ValExec_MulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_457,7,0);
    VL_SIG8(ValExec_MulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_467,7,0);
    VL_SIG8(ValExec_MulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd,0,0);
    VL_SIG8(ValExec_MulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros,0,0);
    VL_SIG8(ValExec_MulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp,0,0);
    VL_SIG8(ValExec_MulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_164,0,0);
    VL_SIG8(ValExec_MulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_165,0,0);
    VL_SIG8(ValExec_MulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut,0,0);
    VL_SIG8(ValExec_MulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase,0,0);
    VL_SIG8(ValExec_MulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow,0,0);
    VL_SIG8(ValExec_MulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp,0,0);
    VL_SIG8(ValExec_MulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut,0,0);
    VL_SIG8(ValExec_MulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut,0,0);
    VL_SIG8(ValExec_MulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut,0,0);
    VL_SIG16(ValExec_MulAddRecF64_mul__DOT___T_116,11,0);
    VL_SIG16(ValExec_MulAddRecF64_mul__DOT___T_255,11,0);
    VL_SIG16(ValExec_MulAddRecF64_mul__DOT___T_397,11,0);
    VL_SIG16(ValExec_MulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sExp,12,0);
    VL_SIG16(ValExec_MulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT___T_50,13,0);
    VL_SIG16(ValExec_MulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__sNatCAlignDist,13,0);
    VL_SIG16(ValExec_MulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT___T_161,13,0);
    VL_SIG16(ValExec_MulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT___T_188,13,0);
    VL_SIG16(ValExec_MulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_79,15,0);
    VL_SIG16(ValExec_MulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_89,15,0);
    VL_SIG16(ValExec_MulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_99,15,0);
    VL_SIG16(ValExec_MulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189,13,0);
    VL_SIGW(ValExec_MulAddRecF64_mul__DOT__mulAddRecFN_io_a,64,0,3);
    VL_SIGW(ValExec_MulAddRecF64_mul__DOT__mulAddRecFN_io_b,64,0,3);
    VL_SIGW(ValExec_MulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult,106,0,4);
    VL_SIGW(ValExec_MulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC,164,0,6);
    VL_SIGW(ValExec_MulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__alignedSigC,162,0,6);
    VL_SIGW(ValExec_MulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__sigSum,161,0,6);
    VL_SIGW(ValExec_MulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum,107,0,4);
    VL_SIGW(ValExec_MulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_20,170,0,6);
    VL_SIGW(ValExec_MulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum,108,0,4);
    VL_SIGW(ValExec_MulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT___T_399,235,0,8);
    VL_SIG(ValExec_MulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_28,31,0);
    VL_SIG(ValExec_MulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_38,31,0);
    VL_SIG(ValExec_MulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_48,31,0);
    VL_SIG(ValExec_MulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_58,31,0);
    VL_SIG64(ValExec_MulAddRecF64_mul__DOT___T_278,63,0);
    VL_SIG64(ValExec_MulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul_io_rawOut_sig,55,0);
    VL_SIG64(ValExec_MulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_sig,53,0);
    VL_SIG64(ValExec_MulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_sig,53,0);
    VL_SIG64(ValExec_MulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced2AbsSigSum,54,0);
    VL_SIG64(ValExec_MulAddRecF64_mul__DOT__mulAddRecFN__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_sig,55,0);
    VL_SIG64(ValExec_MulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_154,53,0);
    VL_SIG64(ValExec_MulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_159,55,0);
    VL_SIG64(ValExec_MulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_160,55,0);
    VL_SIG64(ValExec_MulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_162,55,0);
    VL_SIG64(ValExec_MulAddRecF64_mul__DOT__mulAddRecFN__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_186,54,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    
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
    static void _initial__TOP__1(dut__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif // guard
