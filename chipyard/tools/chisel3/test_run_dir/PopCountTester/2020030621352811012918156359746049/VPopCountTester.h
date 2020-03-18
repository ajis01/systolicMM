// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VPopCountTester_H_
#define _VPopCountTester_H_

#include "verilated_heavy.h"

class VPopCountTester__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VPopCountTester) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(PopCountTester__DOT__x,1,0);
    VL_SIG8(PopCountTester__DOT___T_1,1,0);
    VL_SIG8(PopCountTester__DOT___T_4,0,0);
    VL_SIG8(PopCountTester__DOT___T_15,0,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vclklast__TOP__clock,0,0);
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VPopCountTester__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VPopCountTester& operator= (const VPopCountTester&);  ///< Copying not allowed
    VPopCountTester(const VPopCountTester&);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VPopCountTester(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VPopCountTester();
    /// Trace signals in the model; called by application code
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VPopCountTester__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VPopCountTester__Syms* symsp, bool first);
  private:
    static QData _change_request(VPopCountTester__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__3(VPopCountTester__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset();
  public:
    static void _eval(VPopCountTester__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(VPopCountTester__Syms* __restrict vlSymsp);
    static void _eval_settle(VPopCountTester__Syms* __restrict vlSymsp);
    static void _sequent__TOP__1(VPopCountTester__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(VPopCountTester__Syms* __restrict vlSymsp);
    static void traceChgThis(VPopCountTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VPopCountTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VPopCountTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VPopCountTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis__1(VPopCountTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis(VPopCountTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis__1(VPopCountTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
