// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VNextTester__Syms.h"


//======================

void VNextTester::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VNextTester::traceInit, &VNextTester::traceFull, &VNextTester::traceChg, this);
}
void VNextTester::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VNextTester* t=(VNextTester*)userthis;
    VNextTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VNextTester::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VNextTester* t=(VNextTester*)userthis;
    VNextTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VNextTester::traceInitThis(VNextTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNextTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VNextTester::traceFullThis(VNextTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNextTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VNextTester::traceInitThis__1(VNextTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNextTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+1,"clock",-1);
	vcdp->declBit  (c+2,"reset",-1);
	vcdp->declBit  (c+1,"NextTester clock",-1);
	vcdp->declBit  (c+2,"NextTester reset",-1);
	// Tracing: NextTester _T_71 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/NextTester/2020030622450518395235117145374160/NextTester.v:5
    }
}

void VNextTester::traceFullThis__1(VNextTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VNextTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->clock));
	vcdp->fullBit  (c+2,(vlTOPp->reset));
    }
}
