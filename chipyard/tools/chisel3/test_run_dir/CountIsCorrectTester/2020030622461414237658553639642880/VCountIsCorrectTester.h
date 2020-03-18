// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VCountIsCorrectTester_H_
#define _VCountIsCorrectTester_H_

#include "verilated_heavy.h"

class VCountIsCorrectTester__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VCountIsCorrectTester) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(CountIsCorrectTester__DOT__value,4,0);
    VL_SIG8(CountIsCorrectTester__DOT__value_1,4,0);
    VL_SIG8(CountIsCorrectTester__DOT___T_17,0,0);
    VL_SIG8(CountIsCorrectTester__DOT___T_18,0,0);
    VL_SIG8(CountIsCorrectTester__DOT___T_20,4,0);
    VL_SIG8(CountIsCorrectTester__DOT___T_25,0,0);
    VL_SIG8(CountIsCorrectTester__DOT___T_27,0,0);
    VL_SIG8(CountIsCorrectTester__DOT___T_28,0,0);
    VL_SIG8(CountIsCorrectTester__DOT___T_30,4,0);
    VL_SIG8(CountIsCorrectTester__DOT__q__DOT__value,0,0);
    VL_SIG8(CountIsCorrectTester__DOT__q__DOT__value_1,0,0);
    VL_SIG8(CountIsCorrectTester__DOT__q__DOT___T_1,0,0);
    VL_SIG8(CountIsCorrectTester__DOT__q__DOT___T_2,0,0);
    VL_SIG8(CountIsCorrectTester__DOT__q__DOT___T_4,0,0);
    VL_SIG8(CountIsCorrectTester__DOT__q__DOT___T_5,0,0);
    VL_SIG8(CountIsCorrectTester__DOT__q__DOT___T_6,0,0);
    VL_SIG8(CountIsCorrectTester__DOT__q__DOT___T_8,0,0);
    VL_SIG8(CountIsCorrectTester__DOT__q__DOT___T_12,0,0);
    VL_SIG8(CountIsCorrectTester__DOT__q__DOT___T_14,0,0);
    VL_SIG8(CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_0,0,0);
    VL_SIG8(CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_1,0,0);
    VL_SIG8(CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_2,0,0);
    VL_SIG8(CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_3,0,0);
    VL_SIG8(CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_4,0,0);
    VL_SIG8(CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_5,0,0);
    VL_SIG8(CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_6,0,0);
    VL_SIG8(CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_7,0,0);
    VL_SIG8(CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_8,0,0);
    VL_SIG8(CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_9,0,0);
    VL_SIG8(CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_10,0,0);
    VL_SIG8(CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_11,0,0);
    VL_SIG8(CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_12,0,0);
    VL_SIG8(CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_13,0,0);
    VL_SIG8(CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_14,0,0);
    VL_SIG8(CountIsCorrectTester__DOT__MaxPeriodFibonacciLFSR__DOT__state_15,0,0);
    VL_SIG16(CountIsCorrectTester__DOT___T_15,15,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vclklast__TOP__clock,0,0);
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VCountIsCorrectTester__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VCountIsCorrectTester& operator= (const VCountIsCorrectTester&);  ///< Copying not allowed
    VCountIsCorrectTester(const VCountIsCorrectTester&);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VCountIsCorrectTester(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VCountIsCorrectTester();
    /// Trace signals in the model; called by application code
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VCountIsCorrectTester__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VCountIsCorrectTester__Syms* symsp, bool first);
  private:
    static QData _change_request(VCountIsCorrectTester__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__3(VCountIsCorrectTester__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset();
  public:
    static void _eval(VCountIsCorrectTester__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(VCountIsCorrectTester__Syms* __restrict vlSymsp);
    static void _eval_settle(VCountIsCorrectTester__Syms* __restrict vlSymsp);
    static void _sequent__TOP__1(VCountIsCorrectTester__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(VCountIsCorrectTester__Syms* __restrict vlSymsp);
    static void traceChgThis(VCountIsCorrectTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VCountIsCorrectTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VCountIsCorrectTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VCountIsCorrectTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VCountIsCorrectTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis__1(VCountIsCorrectTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis(VCountIsCorrectTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis__1(VCountIsCorrectTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
