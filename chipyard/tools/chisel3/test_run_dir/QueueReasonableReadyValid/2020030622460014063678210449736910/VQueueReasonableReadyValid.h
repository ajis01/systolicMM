// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VQueueReasonableReadyValid_H_
#define _VQueueReasonableReadyValid_H_

#include "verilated_heavy.h"

class VQueueReasonableReadyValid__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VQueueReasonableReadyValid) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(QueueReasonableReadyValid__DOT__q_io_count,2,0);
    VL_SIG8(QueueReasonableReadyValid__DOT__value,4,0);
    VL_SIG8(QueueReasonableReadyValid__DOT__value_1,4,0);
    VL_SIG8(QueueReasonableReadyValid__DOT___T_27,0,0);
    VL_SIG8(QueueReasonableReadyValid__DOT___T_28,0,0);
    VL_SIG8(QueueReasonableReadyValid__DOT___T_30,4,0);
    VL_SIG8(QueueReasonableReadyValid__DOT___T_32,0,0);
    VL_SIG8(QueueReasonableReadyValid__DOT___T_34,4,0);
    VL_SIG8(QueueReasonableReadyValid__DOT__q__DOT__value,1,0);
    VL_SIG8(QueueReasonableReadyValid__DOT__q__DOT__value_1,1,0);
    VL_SIG8(QueueReasonableReadyValid__DOT__q__DOT___T_1,0,0);
    VL_SIG8(QueueReasonableReadyValid__DOT__q__DOT___T_2,0,0);
    VL_SIG8(QueueReasonableReadyValid__DOT__q__DOT___T_4,0,0);
    VL_SIG8(QueueReasonableReadyValid__DOT__q__DOT___T_5,0,0);
    VL_SIG8(QueueReasonableReadyValid__DOT__q__DOT___T_6,0,0);
    VL_SIG8(QueueReasonableReadyValid__DOT__q__DOT___T_8,0,0);
    VL_SIG8(QueueReasonableReadyValid__DOT__q__DOT___T_12,1,0);
    VL_SIG8(QueueReasonableReadyValid__DOT__q__DOT___T_14,1,0);
    VL_SIG8(QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_0,0,0);
    VL_SIG8(QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_1,0,0);
    VL_SIG8(QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_2,0,0);
    VL_SIG8(QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_3,0,0);
    VL_SIG8(QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_4,0,0);
    VL_SIG8(QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_5,0,0);
    VL_SIG8(QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_6,0,0);
    VL_SIG8(QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_7,0,0);
    VL_SIG8(QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_8,0,0);
    VL_SIG8(QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_9,0,0);
    VL_SIG8(QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_10,0,0);
    VL_SIG8(QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_11,0,0);
    VL_SIG8(QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_12,0,0);
    VL_SIG8(QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_13,0,0);
    VL_SIG8(QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_14,0,0);
    VL_SIG8(QueueReasonableReadyValid__DOT__MaxPeriodFibonacciLFSR__DOT__state_15,0,0);
    VL_SIG16(QueueReasonableReadyValid__DOT___T_20,15,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vclklast__TOP__clock,0,0);
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VQueueReasonableReadyValid__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VQueueReasonableReadyValid& operator= (const VQueueReasonableReadyValid&);  ///< Copying not allowed
    VQueueReasonableReadyValid(const VQueueReasonableReadyValid&);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VQueueReasonableReadyValid(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VQueueReasonableReadyValid();
    /// Trace signals in the model; called by application code
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VQueueReasonableReadyValid__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VQueueReasonableReadyValid__Syms* symsp, bool first);
  private:
    static QData _change_request(VQueueReasonableReadyValid__Syms* __restrict vlSymsp);
    void _ctor_var_reset();
  public:
    static void _eval(VQueueReasonableReadyValid__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(VQueueReasonableReadyValid__Syms* __restrict vlSymsp);
    static void _eval_settle(VQueueReasonableReadyValid__Syms* __restrict vlSymsp);
    static void _sequent__TOP__1(VQueueReasonableReadyValid__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(VQueueReasonableReadyValid__Syms* __restrict vlSymsp);
    static void traceChgThis(VQueueReasonableReadyValid__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VQueueReasonableReadyValid__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VQueueReasonableReadyValid__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VQueueReasonableReadyValid__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VQueueReasonableReadyValid__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis__1(VQueueReasonableReadyValid__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis(VQueueReasonableReadyValid__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis__1(VQueueReasonableReadyValid__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
