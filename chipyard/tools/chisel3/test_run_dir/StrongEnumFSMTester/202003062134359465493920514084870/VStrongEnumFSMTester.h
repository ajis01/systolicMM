// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VStrongEnumFSMTester_H_
#define _VStrongEnumFSMTester_H_

#include "verilated_heavy.h"

class VStrongEnumFSMTester__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VStrongEnumFSMTester) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(StrongEnumFSMTester__DOT__dut_io_in,0,0);
    VL_SIG8(StrongEnumFSMTester__DOT__value,3,0);
    VL_SIG8(StrongEnumFSMTester__DOT___T_2,0,0);
    VL_SIG8(StrongEnumFSMTester__DOT___T_6,0,0);
    VL_SIG8(StrongEnumFSMTester__DOT___T_8,0,0);
    VL_SIG8(StrongEnumFSMTester__DOT___T_10,3,0);
    VL_SIG8(StrongEnumFSMTester__DOT__dut__DOT__state,1,0);
    VL_SIG8(StrongEnumFSMTester__DOT__dut__DOT___T_3,0,0);
    VL_SIG8(StrongEnumFSMTester__DOT__dut__DOT___T_6,0,0);
    VL_SIG8(StrongEnumFSMTester__DOT__dut__DOT___T_9,0,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    static VL_ST_SIG8(__Vtable1_StrongEnumFSMTester__DOT__dut__DOT__state[64],1,0);
    VL_SIG8(__Vclklast__TOP__clock,0,0);
    VL_SIG(__Vm_traceActivity,31,0);
    VL_SIG8(__Vtablechg1[64],0,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VStrongEnumFSMTester__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VStrongEnumFSMTester& operator= (const VStrongEnumFSMTester&);  ///< Copying not allowed
    VStrongEnumFSMTester(const VStrongEnumFSMTester&);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VStrongEnumFSMTester(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VStrongEnumFSMTester();
    /// Trace signals in the model; called by application code
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VStrongEnumFSMTester__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VStrongEnumFSMTester__Syms* symsp, bool first);
  private:
    static QData _change_request(VStrongEnumFSMTester__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__3(VStrongEnumFSMTester__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset();
  public:
    static void _eval(VStrongEnumFSMTester__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(VStrongEnumFSMTester__Syms* __restrict vlSymsp);
    static void _eval_settle(VStrongEnumFSMTester__Syms* __restrict vlSymsp);
    static void _sequent__TOP__1(VStrongEnumFSMTester__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(VStrongEnumFSMTester__Syms* __restrict vlSymsp);
    static void traceChgThis(VStrongEnumFSMTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VStrongEnumFSMTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VStrongEnumFSMTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VStrongEnumFSMTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VStrongEnumFSMTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis__1(VStrongEnumFSMTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis(VStrongEnumFSMTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis__1(VStrongEnumFSMTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
