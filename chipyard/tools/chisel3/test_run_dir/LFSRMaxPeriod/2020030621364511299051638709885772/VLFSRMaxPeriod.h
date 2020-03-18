// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VLFSRMaxPeriod_H_
#define _VLFSRMaxPeriod_H_

#include "verilated_heavy.h"

class VLFSRMaxPeriod__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VLFSRMaxPeriod) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(LFSRMaxPeriod__DOT__rv,3,0);
    VL_SIG8(LFSRMaxPeriod__DOT__started,0,0);
    VL_SIG8(LFSRMaxPeriod__DOT__seed,3,0);
    VL_SIG8(LFSRMaxPeriod__DOT__value,3,0);
    VL_SIG8(LFSRMaxPeriod__DOT___T_3,0,0);
    VL_SIG8(LFSRMaxPeriod__DOT___T_5,3,0);
    VL_SIG8(LFSRMaxPeriod__DOT___T_7,0,0);
    VL_SIG8(LFSRMaxPeriod__DOT___T_9,0,0);
    VL_SIG8(LFSRMaxPeriod__DOT__last,3,0);
    VL_SIG8(LFSRMaxPeriod__DOT__GaloisLFSR__DOT__state_0,0,0);
    VL_SIG8(LFSRMaxPeriod__DOT__GaloisLFSR__DOT__state_1,0,0);
    VL_SIG8(LFSRMaxPeriod__DOT__GaloisLFSR__DOT__state_2,0,0);
    VL_SIG8(LFSRMaxPeriod__DOT__GaloisLFSR__DOT__state_3,0,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vclklast__TOP__clock,0,0);
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VLFSRMaxPeriod__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VLFSRMaxPeriod& operator= (const VLFSRMaxPeriod&);  ///< Copying not allowed
    VLFSRMaxPeriod(const VLFSRMaxPeriod&);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VLFSRMaxPeriod(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VLFSRMaxPeriod();
    /// Trace signals in the model; called by application code
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VLFSRMaxPeriod__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VLFSRMaxPeriod__Syms* symsp, bool first);
  private:
    static QData _change_request(VLFSRMaxPeriod__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__3(VLFSRMaxPeriod__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset();
  public:
    static void _eval(VLFSRMaxPeriod__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(VLFSRMaxPeriod__Syms* __restrict vlSymsp);
    static void _eval_settle(VLFSRMaxPeriod__Syms* __restrict vlSymsp);
    static void _sequent__TOP__1(VLFSRMaxPeriod__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(VLFSRMaxPeriod__Syms* __restrict vlSymsp);
    static void traceChgThis(VLFSRMaxPeriod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VLFSRMaxPeriod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VLFSRMaxPeriod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VLFSRMaxPeriod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VLFSRMaxPeriod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis__1(VLFSRMaxPeriod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis(VLFSRMaxPeriod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis__1(VLFSRMaxPeriod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
