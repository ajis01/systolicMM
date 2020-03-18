// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VAsyncResetQueueTester_H_
#define _VAsyncResetQueueTester_H_

#include "verilated_heavy.h"

class VAsyncResetQueueTester__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VAsyncResetQueueTester) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(AsyncResetQueueTester__DOT__queue_clock,0,0);
    VL_SIG8(AsyncResetQueueTester__DOT__asyncResetNext,0,0);
    VL_SIG8(AsyncResetQueueTester__DOT__queue_io_count,2,0);
    VL_SIG8(AsyncResetQueueTester__DOT__value,1,0);
    VL_SIG8(AsyncResetQueueTester__DOT___T_2,1,0);
    VL_SIG8(AsyncResetQueueTester__DOT__value_1,3,0);
    VL_SIG8(AsyncResetQueueTester__DOT__done,0,0);
    VL_SIG8(AsyncResetQueueTester__DOT___T_5,3,0);
    VL_SIG8(AsyncResetQueueTester__DOT__doCheck,0,0);
    VL_SIG8(AsyncResetQueueTester__DOT__queue__DOT__value,1,0);
    VL_SIG8(AsyncResetQueueTester__DOT__queue__DOT__value_1,1,0);
    VL_SIG8(AsyncResetQueueTester__DOT__queue__DOT___T_1,0,0);
    VL_SIG8(AsyncResetQueueTester__DOT__queue__DOT___T_2,0,0);
    VL_SIG8(AsyncResetQueueTester__DOT__queue__DOT___T_5,0,0);
    VL_SIG8(AsyncResetQueueTester__DOT__queue__DOT___T_12,1,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vdly__AsyncResetQueueTester__DOT__doCheck,0,0);
    VL_SIG8(__VinpClk__TOP__AsyncResetQueueTester__DOT__asyncResetNext,0,0);
    VL_SIG8(__Vclklast__TOP__clock,0,0);
    VL_SIG8(__Vclklast__TOP____VinpClk__TOP__AsyncResetQueueTester__DOT__asyncResetNext,0,0);
    VL_SIG8(__Vclklast__TOP__AsyncResetQueueTester__DOT__queue_clock,0,0);
    VL_SIG8(__Vchglast__TOP__AsyncResetQueueTester__DOT__value,1,0);
    VL_SIG8(__Vchglast__TOP__AsyncResetQueueTester__DOT__asyncResetNext,0,0);
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VAsyncResetQueueTester__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VAsyncResetQueueTester& operator= (const VAsyncResetQueueTester&);  ///< Copying not allowed
    VAsyncResetQueueTester(const VAsyncResetQueueTester&);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VAsyncResetQueueTester(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VAsyncResetQueueTester();
    /// Trace signals in the model; called by application code
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VAsyncResetQueueTester__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VAsyncResetQueueTester__Syms* symsp, bool first);
  private:
    static QData _change_request(VAsyncResetQueueTester__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__2(VAsyncResetQueueTester__Syms* __restrict vlSymsp);
    static void _combo__TOP__7(VAsyncResetQueueTester__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset();
  public:
    static void _eval(VAsyncResetQueueTester__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(VAsyncResetQueueTester__Syms* __restrict vlSymsp);
    static void _eval_settle(VAsyncResetQueueTester__Syms* __restrict vlSymsp);
    static void _initial__TOP__1(VAsyncResetQueueTester__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(VAsyncResetQueueTester__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(VAsyncResetQueueTester__Syms* __restrict vlSymsp);
    static void _sequent__TOP__6(VAsyncResetQueueTester__Syms* __restrict vlSymsp);
    static void _sequent__TOP__8(VAsyncResetQueueTester__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(VAsyncResetQueueTester__Syms* __restrict vlSymsp);
    static void traceChgThis(VAsyncResetQueueTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VAsyncResetQueueTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VAsyncResetQueueTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VAsyncResetQueueTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(VAsyncResetQueueTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(VAsyncResetQueueTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VAsyncResetQueueTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis__1(VAsyncResetQueueTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis(VAsyncResetQueueTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis__1(VAsyncResetQueueTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
