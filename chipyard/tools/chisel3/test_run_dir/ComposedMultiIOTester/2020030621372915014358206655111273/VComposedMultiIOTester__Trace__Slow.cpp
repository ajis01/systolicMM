// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VComposedMultiIOTester__Syms.h"


//======================

void VComposedMultiIOTester::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VComposedMultiIOTester::traceInit, &VComposedMultiIOTester::traceFull, &VComposedMultiIOTester::traceChg, this);
}
void VComposedMultiIOTester::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VComposedMultiIOTester* t=(VComposedMultiIOTester*)userthis;
    VComposedMultiIOTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VComposedMultiIOTester::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VComposedMultiIOTester* t=(VComposedMultiIOTester*)userthis;
    VComposedMultiIOTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VComposedMultiIOTester::traceInitThis(VComposedMultiIOTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VComposedMultiIOTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VComposedMultiIOTester::traceFullThis(VComposedMultiIOTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VComposedMultiIOTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VComposedMultiIOTester::traceInitThis__1(VComposedMultiIOTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VComposedMultiIOTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+1,"clock",-1);
	vcdp->declBit  (c+2,"reset",-1);
	vcdp->declBit  (c+1,"ComposedMultiIOTester clock",-1);
	vcdp->declBit  (c+2,"ComposedMultiIOTester reset",-1);
	// Tracing: ComposedMultiIOTester _T_9 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ComposedMultiIOTester/2020030621372915014358206655111273/ComposedMultiIOTester.v:5
    }
}

void VComposedMultiIOTester::traceFullThis__1(VComposedMultiIOTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VComposedMultiIOTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->clock));
	vcdp->fullBit  (c+2,(vlTOPp->reset));
    }
}
