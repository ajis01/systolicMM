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
    VL_IN(io_in,31,0);
    VL_OUT(io_expected_recOut,16,0);
    VL_OUT(io_actual_out,16,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(ValExec_UI32ToRecF16__DOT___T_23,3,0);
    VL_SIG8(ValExec_UI32ToRecF16__DOT___T_32,5,0);
    VL_SIG8(ValExec_UI32ToRecF16__DOT___T_33,0,0);
    VL_SIG8(ValExec_UI32ToRecF16__DOT___T_62,0,0);
    VL_SIG8(ValExec_UI32ToRecF16__DOT__iNToRecFN__DOT___T_69,4,0);
    VL_SIG8(ValExec_UI32ToRecF16__DOT__iNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__common_inexact,0,0);
    VL_SIG8(ValExec_UI32ToRecF16__DOT__iNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_17,0,0);
    VL_SIG8(ValExec_UI32ToRecF16__DOT__iNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow,0,0);
    VL_SIG8(ValExec_UI32ToRecF16__DOT__iNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow_roundMagUp,0,0);
    VL_SIG8(ValExec_UI32ToRecF16__DOT__iNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMaxFiniteMagOut,0,0);
    VL_SIG8(ValExec_UI32ToRecF16__DOT__iNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isInfOut,0,0);
    VL_SIG16(ValExec_UI32ToRecF16__DOT__iNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__adjustedSig,13,0);
    VL_SIG16(ValExec_UI32ToRecF16__DOT__iNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_38,12,0);
    VL_SIG16(ValExec_UI32ToRecF16__DOT__iNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___T_41,9,0);
    VL_SIG64(ValExec_UI32ToRecF16__DOT__iNToRecFN__DOT___T_70,62,0);
    
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
