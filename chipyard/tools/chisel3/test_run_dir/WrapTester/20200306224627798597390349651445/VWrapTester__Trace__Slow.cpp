// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VWrapTester__Syms.h"


//======================

void VWrapTester::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VWrapTester::traceInit, &VWrapTester::traceFull, &VWrapTester::traceChg, this);
}
void VWrapTester::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VWrapTester* t=(VWrapTester*)userthis;
    VWrapTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VWrapTester::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VWrapTester* t=(VWrapTester*)userthis;
    VWrapTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VWrapTester::traceInitThis(VWrapTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VWrapTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VWrapTester::traceFullThis(VWrapTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VWrapTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VWrapTester::traceInitThis__1(VWrapTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VWrapTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+1,"clock",-1);
	vcdp->declBit  (c+2,"reset",-1);
	vcdp->declBit  (c+1,"WrapTester clock",-1);
	vcdp->declBit  (c+2,"WrapTester reset",-1);
	// Tracing: WrapTester _T_5 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/WrapTester/20200306224627798597390349651445/WrapTester.v:5
    }
}

void VWrapTester::traceFullThis__1(VWrapTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VWrapTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->clock));
	vcdp->fullBit  (c+2,(vlTOPp->reset));
    }
}
