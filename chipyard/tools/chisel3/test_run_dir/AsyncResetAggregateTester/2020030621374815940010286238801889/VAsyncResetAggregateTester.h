// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VAsyncResetAggregateTester_H_
#define _VAsyncResetAggregateTester_H_

#include "verilated_heavy.h"

class VAsyncResetAggregateTester__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VAsyncResetAggregateTester) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(AsyncResetAggregateTester__DOT__slowClk,0,0);
    VL_SIG8(AsyncResetAggregateTester__DOT__asyncResetNext,0,0);
    VL_SIG8(AsyncResetAggregateTester__DOT__value,1,0);
    VL_SIG8(AsyncResetAggregateTester__DOT___T_2,1,0);
    VL_SIG8(AsyncResetAggregateTester__DOT__value_1,3,0);
    VL_SIG8(AsyncResetAggregateTester__DOT__done,0,0);
    VL_SIG8(AsyncResetAggregateTester__DOT___T_5,3,0);
    VL_SIG8(AsyncResetAggregateTester__DOT___T_6,0,0);
    VL_SIG8(AsyncResetAggregateTester__DOT__reg_0_x,7,0);
    VL_SIG8(AsyncResetAggregateTester__DOT__reg_0_y,7,0);
    VL_SIG8(AsyncResetAggregateTester__DOT__reg_1_x,7,0);
    VL_SIG8(AsyncResetAggregateTester__DOT__reg_1_y,7,0);
    VL_SIG8(AsyncResetAggregateTester__DOT___T_8,0,0);
    VL_SIG8(AsyncResetAggregateTester__DOT___T_27,0,0);
    VL_SIG8(AsyncResetAggregateTester__DOT___GEN_3,0,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vdly__AsyncResetAggregateTester__DOT__asyncResetNext,0,0);
    VL_SIG8(__VinpClk__TOP__AsyncResetAggregateTester__DOT__asyncResetNext,0,0);
    VL_SIG8(__Vclklast__TOP__clock,0,0);
    VL_SIG8(__Vclklast__TOP____VinpClk__TOP__AsyncResetAggregateTester__DOT__asyncResetNext,0,0);
    VL_SIG8(__Vclklast__TOP__AsyncResetAggregateTester__DOT__slowClk,0,0);
    VL_SIG8(__Vchglast__TOP__AsyncResetAggregateTester__DOT__asyncResetNext,0,0);
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VAsyncResetAggregateTester__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VAsyncResetAggregateTester& operator= (const VAsyncResetAggregateTester&);  ///< Copying not allowed
    VAsyncResetAggregateTester(const VAsyncResetAggregateTester&);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VAsyncResetAggregateTester(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VAsyncResetAggregateTester();
    /// Trace signals in the model; called by application code
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VAsyncResetAggregateTester__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VAsyncResetAggregateTester__Syms* symsp, bool first);
  private:
    static QData _change_request(VAsyncResetAggregateTester__Syms* __restrict vlSymsp);
    void _ctor_var_reset();
  public:
    static void _eval(VAsyncResetAggregateTester__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(VAsyncResetAggregateTester__Syms* __restrict vlSymsp);
    static void _eval_settle(VAsyncResetAggregateTester__Syms* __restrict vlSymsp);
    static void _initial__TOP__2(VAsyncResetAggregateTester__Syms* __restrict vlSymsp);
    static void _sequent__TOP__1(VAsyncResetAggregateTester__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(VAsyncResetAggregateTester__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(VAsyncResetAggregateTester__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(VAsyncResetAggregateTester__Syms* __restrict vlSymsp);
    static void traceChgThis(VAsyncResetAggregateTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VAsyncResetAggregateTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VAsyncResetAggregateTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VAsyncResetAggregateTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(VAsyncResetAggregateTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(VAsyncResetAggregateTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VAsyncResetAggregateTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis__1(VAsyncResetAggregateTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis(VAsyncResetAggregateTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis__1(VAsyncResetAggregateTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
