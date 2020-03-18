// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VFixedPointMuxTester__Syms.h"


//======================

void VFixedPointMuxTester::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VFixedPointMuxTester::traceInit, &VFixedPointMuxTester::traceFull, &VFixedPointMuxTester::traceChg, this);
}
void VFixedPointMuxTester::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VFixedPointMuxTester* t=(VFixedPointMuxTester*)userthis;
    VFixedPointMuxTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VFixedPointMuxTester::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VFixedPointMuxTester* t=(VFixedPointMuxTester*)userthis;
    VFixedPointMuxTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VFixedPointMuxTester::traceInitThis(VFixedPointMuxTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VFixedPointMuxTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VFixedPointMuxTester::traceFullThis(VFixedPointMuxTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VFixedPointMuxTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VFixedPointMuxTester::traceInitThis__1(VFixedPointMuxTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VFixedPointMuxTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+1,"clock",-1);
	vcdp->declBit  (c+2,"reset",-1);
	vcdp->declBit  (c+1,"FixedPointMuxTester clock",-1);
	vcdp->declBit  (c+2,"FixedPointMuxTester reset",-1);
	// Tracing: FixedPointMuxTester _T_21 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/FixedPointMuxTester/20200306213644249794296106809532/FixedPointMuxTester.v:5
    }
}

void VFixedPointMuxTester::traceFullThis__1(VFixedPointMuxTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VFixedPointMuxTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->clock));
	vcdp->fullBit  (c+2,(vlTOPp->reset));
    }
}
