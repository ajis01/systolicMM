// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VTblTester_H_
#define _VTblTester_H_

#include "verilated_heavy.h"

class VTblTester__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VTblTester) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(TblTester__DOT__dut_io_wi,0,0);
    VL_SIG8(TblTester__DOT__dut_io_ri,0,0);
    VL_SIG8(TblTester__DOT__dut_io_d,0,0);
    VL_SIG8(TblTester__DOT__dut_io_o,0,0);
    VL_SIG8(TblTester__DOT__value,2,0);
    VL_SIG8(TblTester__DOT__wrap,0,0);
    VL_SIG8(TblTester__DOT___T_2,2,0);
    VL_SIG8(TblTester__DOT___GEN_7,0,0);
    VL_SIG8(TblTester__DOT___GEN_15,0,0);
    VL_SIG8(TblTester__DOT___GEN_23,0,0);
    VL_SIG8(TblTester__DOT___T_8,0,0);
    VL_SIG8(TblTester__DOT___T_11,0,0);
    VL_SIG8(TblTester__DOT___T_15,0,0);
    VL_SIG8(TblTester__DOT___GEN_45,0,0);
    VL_SIG8(TblTester__DOT___GEN_48,0,0);
    VL_SIG8(TblTester__DOT__dut__DOT__m[2],0,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vclklast__TOP__clock,0,0);
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VTblTester__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VTblTester& operator= (const VTblTester&);  ///< Copying not allowed
    VTblTester(const VTblTester&);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VTblTester(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VTblTester();
    /// Trace signals in the model; called by application code
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VTblTester__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VTblTester__Syms* symsp, bool first);
  private:
    static QData _change_request(VTblTester__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__3(VTblTester__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset();
  public:
    static void _eval(VTblTester__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(VTblTester__Syms* __restrict vlSymsp);
    static void _eval_settle(VTblTester__Syms* __restrict vlSymsp);
    static void _sequent__TOP__1(VTblTester__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(VTblTester__Syms* __restrict vlSymsp);
    static void traceChgThis(VTblTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VTblTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VTblTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VTblTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VTblTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis__1(VTblTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis(VTblTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInitThis__1(VTblTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
