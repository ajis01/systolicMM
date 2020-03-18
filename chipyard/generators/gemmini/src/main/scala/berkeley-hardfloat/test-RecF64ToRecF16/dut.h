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
    VL_IN16(io_expected_out,15,0);
    VL_OUT(io_expected_recOut,16,0);
    VL_OUT(io_actual_out,16,0);
    VL_IN64(io_in,63,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(ValExec_RecF64ToRecF16__DOT___T_107,5,0);
    VL_SIG8(ValExec_RecF64ToRecF16__DOT___T_117,0,0);
    VL_SIG8(ValExec_RecF64ToRecF16__DOT___T_162,3,0);
    VL_SIG8(ValExec_RecF64ToRecF16__DOT___T_171,5,0);
    VL_SIG8(ValExec_RecF64ToRecF16__DOT___T_172,0,0);
    VL_SIG8(ValExec_RecF64ToRecF16__DOT___T_201,0,0);
    VL_SIG8(ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN_io_invalidExc,0,0);
    VL_SIG8(ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN_io_in_isInf,0,0);
    VL_SIG8(ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__roundMagUp,0,0);
    VL_SIG8(ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_19,7,0);
    VL_SIG8(ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_29,7,0);
    VL_SIG8(ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_61,0,0);
    VL_SIG8(ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_62,0,0);
    VL_SIG8(ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__isNaNOut,0,0);
    VL_SIG8(ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__commonCase,0,0);
    VL_SIG8(ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__overflow,0,0);
    VL_SIG8(ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__overflow_roundMagUp,0,0);
    VL_SIG8(ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut,0,0);
    VL_SIG8(ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut,0,0);
    VL_SIG8(ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__notNaN_isInfOut,0,0);
    VL_SIG16(ValExec_RecF64ToRecF16__DOT___T_116,11,0);
    VL_SIG16(ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT__adjustedSig,13,0);
    VL_SIG16(ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_52,13,0);
    VL_SIG16(ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_56,13,0);
    VL_SIG16(ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_57,13,0);
    VL_SIG16(ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_59,13,0);
    VL_SIG16(ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_83,12,0);
    VL_SIG16(ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN__DOT___T_86,14,0);
    VL_SIGW(ValExec_RecF64ToRecF16__DOT__recFNToRecFN_io_in,64,0,3);
    VL_SIG64(ValExec_RecF64ToRecF16__DOT__recFNToRecFN__DOT__RoundAnyRawFNToRecFN_io_in_sig,53,0);
    
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