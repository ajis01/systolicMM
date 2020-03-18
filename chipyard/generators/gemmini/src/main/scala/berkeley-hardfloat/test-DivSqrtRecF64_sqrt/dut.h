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
    VL_OUTW(io_expected_recOut,64,0,3);
    VL_OUTW(io_actual_out,64,0,3);
    VL_IN64(io_input_bits_b,63,0);
    VL_IN64(io_input_bits_out,63,0);
    VL_OUT64(io_output_b,63,0);
    VL_OUT64(io_expected_out,63,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__cq_io_enq_valid,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT___T_110,5,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT___T_120,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT___T_249,5,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT___T_259,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT___T_288,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw_io_inReady_sqrt,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw_io_usingMulAdd,3,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw_io_latchMulAddA_0,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw_io_rawOutValid_sqrt,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw_io_invalidExc,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw_io_infiniteExc,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_A,2,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_B,3,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_C,2,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cycleNum_E,2,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PA,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__majorExc_PA,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isNaN_PA,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isInf_PA,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isZero_PA,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sign_PA,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__roundingMode_PA,2,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PB,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__majorExc_PB,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isNaN_PB,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isInf_PB,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isZero_PB,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sign_PB,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__roundingMode_PB,2,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_PC,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__majorExc_PC,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isNaN_PC,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isInf_PC,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isZero_PC,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sign_PC,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__roundingMode_PC,2,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isNegRemT_E,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isZeroRemT_E,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_S_sqrt,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__rawB_S_isNaN,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__rawB_S_isInf,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__notSigNaNIn_invalidExc_S_sqrt,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__majorExc_S,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__isNaN_S,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__normalCase_S_sqrt,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_A7_sqrt,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_81,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_89,2,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_94,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_97,3,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_B6_sqrt,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_B5_sqrt,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__cyc_B4_sqrt,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_112,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_115,2,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_123,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_125,2,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__normalCase_PB,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_leaving_PC,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__ready_PC,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_leaving_PB,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__ready_PB,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PA,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__normalCase_PA,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__valid_leaving_PA,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__leaving_PA,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_148,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__leaving_PB,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PB_normalCase,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PB,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PC_normalCase,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__entering_PC,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_177,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_277,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zQuadPiece_0_A7_sqrt,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zQuadPiece_1_A7_sqrt,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_285,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zQuadPiece_2_A7_sqrt,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zQuadPiece_3_A7_sqrt,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_309,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_317,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_415,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___T_449,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_164,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_165,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__val_s1,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__val_s2,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT__value,2,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT__value_1,2,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_1,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_2,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_4,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_5,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_6,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_8,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT__wrap,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_12,2,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT__wrap_1,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_14,2,0);
    VL_SIG16(ValExec_DivSqrtRecF64_sqrt__DOT___T_119,11,0);
    VL_SIG16(ValExec_DivSqrtRecF64_sqrt__DOT___T_258,11,0);
    VL_SIG16(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExp_PA,12,0);
    VL_SIG16(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExp_PB,12,0);
    VL_SIG16(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sExp_PC,12,0);
    VL_SIG16(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__fractR0_A,8,0);
    VL_SIG16(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__hiSqrR0_A_sqrt,9,0);
    VL_SIG16(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__nextMulAdd9A_A,8,0);
    VL_SIG16(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__nextMulAdd9B_A,8,0);
    VL_SIG16(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zFractR0_A6_sqrt,14,0);
    VL_SIG16(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___GEN_37,14,0);
    VL_SIG16(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___GEN_38,15,0);
    VL_SIG16(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___GEN_41,14,0);
    VL_SIG16(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_79,15,0);
    VL_SIG16(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_89,15,0);
    VL_SIG16(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_99,15,0);
    VL_SIG16(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_189,13,0);
    VL_SIGW(ValExec_DivSqrtRecF64_sqrt__DOT__ds_io_b,64,0,3);
    VL_SIG(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__partNegSigma0_A,20,0);
    VL_SIG(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__ER1_B_sqrt,16,0);
    VL_SIG(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__ESqrR1_B_sqrt,31,0);
    VL_SIG(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__u_C_sqrt,30,0);
    VL_SIG(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__mulAdd9C_A,24,0);
    VL_SIG(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__loMulAdd9Out_A,18,0);
    VL_SIG(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__mulAdd9Out_A,24,0);
    VL_SIG(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sqrR0_A5_sqrt,25,0);
    VL_SIG(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___GEN_39,24,0);
    VL_SIG(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT___GEN_40,22,0);
    VL_SIG(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_28,31,0);
    VL_SIG(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_38,31,0);
    VL_SIG(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_48,31,0);
    VL_SIG(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_58,31,0);
    VL_SIGW(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_result_s3,104,0,4);
    VL_SIG64(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw_io_rawOut_sig,55,0);
    VL_SIG64(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__fractB_PA,51,0);
    VL_SIG64(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__fractB_PB,51,0);
    VL_SIG64(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__fractB_PC,51,0);
    VL_SIG64(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sigX1_B,57,0);
    VL_SIG64(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sqrSigma1_C,32,0);
    VL_SIG64(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sigXN_C,57,0);
    VL_SIG64(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__sigT_E,53,0);
    VL_SIG64(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__rawB_S_sig,53,0);
    VL_SIG64(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zFractB_A7_sqrt,51,0);
    VL_SIG64(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zSigma1_B4,45,0);
    VL_SIG64(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__divSqrtRecF64ToRaw__DOT__zComplSigT_C1_sqrt,53,0);
    VL_SIG64(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_153,53,0);
    VL_SIG64(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_159,55,0);
    VL_SIG64(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_160,55,0);
    VL_SIG64(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_162,55,0);
    VL_SIG64(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__ds__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_186,54,0);
    VL_SIG64(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_a_s1,53,0);
    VL_SIG64(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_b_s1,53,0);
    VL_SIG64(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_a_s2,53,0);
    VL_SIG64(ValExec_DivSqrtRecF64_sqrt__DOT__ds__DOT__mul__DOT__reg_b_s2,53,0);
    VL_SIG64(ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out___05FT_18_data,63,0);
    VL_SIG64(ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_b[5],63,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_roundingMode[5],2,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_detectTininess[5],0,0);
    VL_SIG64(ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_out[5],63,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT___T_exceptionFlags[5],4,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT____Vlvbound2,2,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT____Vlvbound3,0,0);
    VL_SIG8(ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT____Vlvbound5,4,0);
    VL_SIG8(__Vclklast__TOP__clock,0,0);
    VL_SIG64(ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT____Vlvbound1,63,0);
    VL_SIG64(ValExec_DivSqrtRecF64_sqrt__DOT__cq__DOT____Vlvbound4,63,0);
    
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
