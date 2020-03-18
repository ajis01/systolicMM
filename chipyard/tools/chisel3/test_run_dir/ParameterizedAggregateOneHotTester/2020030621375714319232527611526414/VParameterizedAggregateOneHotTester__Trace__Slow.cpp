// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VParameterizedAggregateOneHotTester__Syms.h"


//======================

void VParameterizedAggregateOneHotTester::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VParameterizedAggregateOneHotTester::traceInit, &VParameterizedAggregateOneHotTester::traceFull, &VParameterizedAggregateOneHotTester::traceChg, this);
}
void VParameterizedAggregateOneHotTester::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VParameterizedAggregateOneHotTester* t=(VParameterizedAggregateOneHotTester*)userthis;
    VParameterizedAggregateOneHotTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VParameterizedAggregateOneHotTester::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VParameterizedAggregateOneHotTester* t=(VParameterizedAggregateOneHotTester*)userthis;
    VParameterizedAggregateOneHotTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VParameterizedAggregateOneHotTester::traceInitThis(VParameterizedAggregateOneHotTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VParameterizedAggregateOneHotTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VParameterizedAggregateOneHotTester::traceFullThis(VParameterizedAggregateOneHotTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VParameterizedAggregateOneHotTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VParameterizedAggregateOneHotTester::traceInitThis__1(VParameterizedAggregateOneHotTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VParameterizedAggregateOneHotTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+1,"clock",-1);
	vcdp->declBit  (c+2,"reset",-1);
	vcdp->declBit  (c+1,"ParameterizedAggregateOneHotTester clock",-1);
	vcdp->declBit  (c+2,"ParameterizedAggregateOneHotTester reset",-1);
	// Tracing: ParameterizedAggregateOneHotTester _T_19 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedAggregateOneHotTester/2020030621375714319232527611526414/ParameterizedAggregateOneHotTester.v:5
    }
}

void VParameterizedAggregateOneHotTester::traceFullThis__1(VParameterizedAggregateOneHotTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VParameterizedAggregateOneHotTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->clock));
	vcdp->fullBit  (c+2,(vlTOPp->reset));
    }
}
