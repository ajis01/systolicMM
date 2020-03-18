// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSomeOptionBundleTester__Syms.h"


//======================

void VSomeOptionBundleTester::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VSomeOptionBundleTester::traceInit, &VSomeOptionBundleTester::traceFull, &VSomeOptionBundleTester::traceChg, this);
}
void VSomeOptionBundleTester::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VSomeOptionBundleTester* t=(VSomeOptionBundleTester*)userthis;
    VSomeOptionBundleTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VSomeOptionBundleTester::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VSomeOptionBundleTester* t=(VSomeOptionBundleTester*)userthis;
    VSomeOptionBundleTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VSomeOptionBundleTester::traceInitThis(VSomeOptionBundleTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VSomeOptionBundleTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VSomeOptionBundleTester::traceFullThis(VSomeOptionBundleTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VSomeOptionBundleTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VSomeOptionBundleTester::traceInitThis__1(VSomeOptionBundleTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VSomeOptionBundleTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+1,"clock",-1);
	vcdp->declBit  (c+2,"reset",-1);
	vcdp->declBit  (c+1,"SomeOptionBundleTester clock",-1);
	vcdp->declBit  (c+2,"SomeOptionBundleTester reset",-1);
	// Tracing: SomeOptionBundleTester _T_5 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/SomeOptionBundleTester/20200306213658838144141171774625/SomeOptionBundleTester.v:5
    }
}

void VSomeOptionBundleTester::traceFullThis__1(VSomeOptionBundleTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VSomeOptionBundleTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->clock));
	vcdp->fullBit  (c+2,(vlTOPp->reset));
    }
}
