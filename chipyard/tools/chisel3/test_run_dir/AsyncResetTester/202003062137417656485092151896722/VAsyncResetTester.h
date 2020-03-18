// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VAsyncResetTester_H_
#define _VAsyncResetTester_H_

#include "verilated_heavy.h"

class VAsyncResetTester__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VAsyncResetTester) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(AsyncResetTester__DOT__slowClk,0,0);
    VL_SIG8(AsyncResetTester__DOT__asyncResetNext,0,0);
    VL_SIG8(AsyncResetTester__DOT__value,1,0);
    VL_SIG8(AsyncResetTester__DOT___T_2,1,0);
    VL_SIG8(AsyncResetTester__DOT__value_1,3,0);
    VL_SIG8(AsyncResetTester__DOT__done,0,0);
    VL_SIG8(AsyncResetTester__DOT___T_5,3,0);
    VL_SIG8(AsyncResetTester__DOT___T_6,0,0);
    VL_SIG8(AsyncResetTester__DOT__reg_,7,0);
    VL_SIG8(AsyncResetTester__DOT___T_7,0,0);
    VL_SIG8(AsyncResetTester__DOT___T_14,0,0);
    VL_SIG8(AsyncResetTester__DOT___GEN_3,0,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vdly__AsyncResetTester__DOT__asyncResetNext,0,0);
    VL_SIG8(__VinpClk__TOP__AsyncResetTester__DOT__asyncResetNext,0,0);
    VL_SIG8(__Vclklast__TOP__clock,0,0);
    VL_SIG8(__Vclklast__TOP____VinpClk__TOP__AsyncResetTester__DOT__asyncResetNext,0,0);
    VL_SIG8(__Vclklast__TOP__AsyncResetTester__DOT__slowClk,0,0);
    VL_SIG8(__Vchglast__TOP__AsyncResetTester__DOT__asyncResetNext,0,0);
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VAsyncResetTester__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VAsyncResetTester& operator= (const VAsyncResetTester&);  ///< Copying not allowed
    VAsyncResetTester(const VAsyncResetTester&);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VAsyncResetTester(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VAsyncResetTester();
    /// Trace signals in the model; called by application code
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VAsyncResetTester__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VAsyncResetTester__Syms* symsp, bool first);
  private:
    static QData _change_request(VAsyncResetTester__Syms* __restrict vlSymsp);
    void _ctor_var_reset();
  public:
    static void _eval(VAsyncResetTester__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(VAsyncResetTester__Syms* __restrict vlSymsp);
    static void _eval_settle(VAsyncResetTester__Syms* __restrict vlSymsp);
    static void _initial__TOP__2(VAsyncResetTester__Syms* __restrict vlSymsp);
    static void _sequent__TOP__1(VAsyncResetTester__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(VAsyncResetTester__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(VAsyncResetTester__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(VAsyncResetTester__Syms* __restrict vlSymsp);
    static void traceChgThis(VAsyncResetTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VAsyncResetTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VAsyncResetTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VAsyncResetTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(VAsyncResetTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(VAsyncResetTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VAsyncResetTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis__1(VAsyncResetTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis(VAsyncResetTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis__1(VAsyncResetTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
