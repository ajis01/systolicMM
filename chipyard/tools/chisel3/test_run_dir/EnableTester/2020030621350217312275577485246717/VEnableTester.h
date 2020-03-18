// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VEnableTester_H_
#define _VEnableTester_H_

#include "verilated_heavy.h"

class VEnableTester__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VEnableTester) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(EnableTester__DOT___T_1,0,0);
    VL_SIG8(EnableTester__DOT__value,4,0);
    VL_SIG8(EnableTester__DOT___T_4,4,0);
    VL_SIG8(EnableTester__DOT__value_1,5,0);
    VL_SIG8(EnableTester__DOT__done,0,0);
    VL_SIG8(EnableTester__DOT___T_8,5,0);
    VL_SIG8(EnableTester__DOT___T_11,0,0);
    VL_SIG(EnableTester__DOT__ens,29,0);
    VL_SIG(EnableTester__DOT___T,28,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vclklast__TOP__clock,0,0);
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VEnableTester__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VEnableTester& operator= (const VEnableTester&);  ///< Copying not allowed
    VEnableTester(const VEnableTester&);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VEnableTester(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VEnableTester();
    /// Trace signals in the model; called by application code
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VEnableTester__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VEnableTester__Syms* symsp, bool first);
  private:
    static QData _change_request(VEnableTester__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__3(VEnableTester__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset();
  public:
    static void _eval(VEnableTester__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(VEnableTester__Syms* __restrict vlSymsp);
    static void _eval_settle(VEnableTester__Syms* __restrict vlSymsp);
    static void _sequent__TOP__1(VEnableTester__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(VEnableTester__Syms* __restrict vlSymsp);
    static void traceChgThis(VEnableTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VEnableTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VEnableTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VEnableTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis__1(VEnableTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis(VEnableTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis__1(VEnableTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
