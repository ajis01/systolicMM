// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VASCIIPrintableTester__Syms.h"


//======================

void VASCIIPrintableTester::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VASCIIPrintableTester::traceInit, &VASCIIPrintableTester::traceFull, &VASCIIPrintableTester::traceChg, this);
}
void VASCIIPrintableTester::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VASCIIPrintableTester* t=(VASCIIPrintableTester*)userthis;
    VASCIIPrintableTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VASCIIPrintableTester::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VASCIIPrintableTester* t=(VASCIIPrintableTester*)userthis;
    VASCIIPrintableTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VASCIIPrintableTester::traceInitThis(VASCIIPrintableTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VASCIIPrintableTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VASCIIPrintableTester::traceFullThis(VASCIIPrintableTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VASCIIPrintableTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VASCIIPrintableTester::traceInitThis__1(VASCIIPrintableTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VASCIIPrintableTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+1,"clock",-1);
	vcdp->declBit  (c+2,"reset",-1);
	vcdp->declBit  (c+1,"ASCIIPrintableTester clock",-1);
	vcdp->declBit  (c+2,"ASCIIPrintableTester reset",-1);
	// Tracing: ASCIIPrintableTester _T_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ASCIIPrintableTester/2020030622443713476594995095696371/ASCIIPrintableTester.v:5
    }
}

void VASCIIPrintableTester::traceFullThis__1(VASCIIPrintableTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VASCIIPrintableTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->clock));
	vcdp->fullBit  (c+2,(vlTOPp->reset));
    }
}
