// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VFormattedAssertTester__Syms.h"


//======================

void VFormattedAssertTester::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VFormattedAssertTester::traceInit, &VFormattedAssertTester::traceFull, &VFormattedAssertTester::traceChg, this);
}
void VFormattedAssertTester::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VFormattedAssertTester* t=(VFormattedAssertTester*)userthis;
    VFormattedAssertTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VFormattedAssertTester::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VFormattedAssertTester* t=(VFormattedAssertTester*)userthis;
    VFormattedAssertTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VFormattedAssertTester::traceInitThis(VFormattedAssertTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VFormattedAssertTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VFormattedAssertTester::traceFullThis(VFormattedAssertTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VFormattedAssertTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VFormattedAssertTester::traceInitThis__1(VFormattedAssertTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VFormattedAssertTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+1,"clock",-1);
	vcdp->declBit  (c+2,"reset",-1);
	vcdp->declBit  (c+1,"FormattedAssertTester clock",-1);
	vcdp->declBit  (c+2,"FormattedAssertTester reset",-1);
	// Tracing: FormattedAssertTester _T_5 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/FormattedAssertTester/2020030621351116007334903049187663/FormattedAssertTester.v:5
    }
}

void VFormattedAssertTester::traceFullThis__1(VFormattedAssertTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VFormattedAssertTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->clock));
	vcdp->fullBit  (c+2,(vlTOPp->reset));
    }
}
