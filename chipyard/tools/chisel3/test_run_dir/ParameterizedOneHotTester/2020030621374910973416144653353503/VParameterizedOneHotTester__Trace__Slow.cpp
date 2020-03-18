// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VParameterizedOneHotTester__Syms.h"


//======================

void VParameterizedOneHotTester::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VParameterizedOneHotTester::traceInit, &VParameterizedOneHotTester::traceFull, &VParameterizedOneHotTester::traceChg, this);
}
void VParameterizedOneHotTester::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VParameterizedOneHotTester* t=(VParameterizedOneHotTester*)userthis;
    VParameterizedOneHotTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VParameterizedOneHotTester::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VParameterizedOneHotTester* t=(VParameterizedOneHotTester*)userthis;
    VParameterizedOneHotTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VParameterizedOneHotTester::traceInitThis(VParameterizedOneHotTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VParameterizedOneHotTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VParameterizedOneHotTester::traceFullThis(VParameterizedOneHotTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VParameterizedOneHotTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VParameterizedOneHotTester::traceInitThis__1(VParameterizedOneHotTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VParameterizedOneHotTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+1,"clock",-1);
	vcdp->declBit  (c+2,"reset",-1);
	vcdp->declBit  (c+1,"ParameterizedOneHotTester clock",-1);
	vcdp->declBit  (c+2,"ParameterizedOneHotTester reset",-1);
	// Tracing: ParameterizedOneHotTester _T_7 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedOneHotTester/2020030621374910973416144653353503/ParameterizedOneHotTester.v:5
    }
}

void VParameterizedOneHotTester::traceFullThis__1(VParameterizedOneHotTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VParameterizedOneHotTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->clock));
	vcdp->fullBit  (c+2,(vlTOPp->reset));
    }
}
