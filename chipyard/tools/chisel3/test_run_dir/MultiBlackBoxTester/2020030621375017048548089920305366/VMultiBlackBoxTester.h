// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VMultiBlackBoxTester_H_
#define _VMultiBlackBoxTester_H_

#include "verilated.h"

class VMultiBlackBoxTester__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VMultiBlackBoxTester) {
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
    VMultiBlackBoxTester__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VMultiBlackBoxTester& operator= (const VMultiBlackBoxTester&);  ///< Copying not allowed
    VMultiBlackBoxTester(const VMultiBlackBoxTester&);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VMultiBlackBoxTester(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VMultiBlackBoxTester();
    /// Trace signals in the model; called by application code
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VMultiBlackBoxTester__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VMultiBlackBoxTester__Syms* symsp, bool first);
  private:
    static QData _change_request(VMultiBlackBoxTester__Syms* __restrict vlSymsp);
    void _ctor_var_reset();
  public:
    static void _eval(VMultiBlackBoxTester__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(VMultiBlackBoxTester__Syms* __restrict vlSymsp);
    static void _eval_settle(VMultiBlackBoxTester__Syms* __restrict vlSymsp);
    static void _sequent__TOP__1(VMultiBlackBoxTester__Syms* __restrict vlSymsp);
    static void traceChgThis(VMultiBlackBoxTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VMultiBlackBoxTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VMultiBlackBoxTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis__1(VMultiBlackBoxTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis(VMultiBlackBoxTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis__1(VMultiBlackBoxTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
