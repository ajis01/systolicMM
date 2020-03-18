// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMultiIOTester__Syms.h"


//======================

void VMultiIOTester::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VMultiIOTester::traceInit, &VMultiIOTester::traceFull, &VMultiIOTester::traceChg, this);
}
void VMultiIOTester::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VMultiIOTester* t=(VMultiIOTester*)userthis;
    VMultiIOTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VMultiIOTester::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VMultiIOTester* t=(VMultiIOTester*)userthis;
    VMultiIOTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VMultiIOTester::traceInitThis(VMultiIOTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMultiIOTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VMultiIOTester::traceFullThis(VMultiIOTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMultiIOTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VMultiIOTester::traceInitThis__1(VMultiIOTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMultiIOTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+1,"clock",-1);
	vcdp->declBit  (c+2,"reset",-1);
	vcdp->declBit  (c+1,"MultiIOTester clock",-1);
	vcdp->declBit  (c+2,"MultiIOTester reset",-1);
	// Tracing: MultiIOTester _T_5 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/MultiIOTester/2020030621372217178885401390265678/MultiIOTester.v:5
    }
}

void VMultiIOTester::traceFullThis__1(VMultiIOTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMultiIOTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->clock));
	vcdp->fullBit  (c+2,(vlTOPp->reset));
    }
}
