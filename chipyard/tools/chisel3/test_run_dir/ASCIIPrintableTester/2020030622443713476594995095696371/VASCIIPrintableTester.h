// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VASCIIPrintableTester_H_
#define _VASCIIPrintableTester_H_

#include "verilated_heavy.h"

class VASCIIPrintableTester__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VASCIIPrintableTester) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vclklast__TOP__clock,0,0);
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VASCIIPrintableTester__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VASCIIPrintableTester& operator= (const VASCIIPrintableTester&);  ///< Copying not allowed
    VASCIIPrintableTester(const VASCIIPrintableTester&);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VASCIIPrintableTester(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VASCIIPrintableTester();
    /// Trace signals in the model; called by application code
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VASCIIPrintableTester__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VASCIIPrintableTester__Syms* symsp, bool first);
  private:
    static QData _change_request(VASCIIPrintableTester__Syms* __restrict vlSymsp);
    void _ctor_var_reset();
  public:
    static void _eval(VASCIIPrintableTester__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(VASCIIPrintableTester__Syms* __restrict vlSymsp);
    static void _eval_settle(VASCIIPrintableTester__Syms* __restrict vlSymsp);
    static void _sequent__TOP__1(VASCIIPrintableTester__Syms* __restrict vlSymsp);
    static void traceChgThis(VASCIIPrintableTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VASCIIPrintableTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VASCIIPrintableTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis__1(VASCIIPrintableTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis(VASCIIPrintableTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis__1(VASCIIPrintableTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
