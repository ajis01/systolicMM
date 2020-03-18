// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMixedVecConnectWithVecTester__Syms.h"


//======================

void VMixedVecConnectWithVecTester::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VMixedVecConnectWithVecTester::traceInit, &VMixedVecConnectWithVecTester::traceFull, &VMixedVecConnectWithVecTester::traceChg, this);
}
void VMixedVecConnectWithVecTester::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VMixedVecConnectWithVecTester* t=(VMixedVecConnectWithVecTester*)userthis;
    VMixedVecConnectWithVecTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VMixedVecConnectWithVecTester::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VMixedVecConnectWithVecTester* t=(VMixedVecConnectWithVecTester*)userthis;
    VMixedVecConnectWithVecTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VMixedVecConnectWithVecTester::traceInitThis(VMixedVecConnectWithVecTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMixedVecConnectWithVecTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VMixedVecConnectWithVecTester::traceFullThis(VMixedVecConnectWithVecTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMixedVecConnectWithVecTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VMixedVecConnectWithVecTester::traceInitThis__1(VMixedVecConnectWithVecTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMixedVecConnectWithVecTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+1,"clock",-1);
	vcdp->declBit  (c+2,"reset",-1);
	vcdp->declBit  (c+1,"MixedVecConnectWithVecTester clock",-1);
	vcdp->declBit  (c+2,"MixedVecConnectWithVecTester reset",-1);
	// Tracing: MixedVecConnectWithVecTester _T_14 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/MixedVecConnectWithVecTester/2020030621374311075738717417283172/MixedVecConnectWithVecTester.v:5
    }
}

void VMixedVecConnectWithVecTester::traceFullThis__1(VMixedVecConnectWithVecTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMixedVecConnectWithVecTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->clock));
	vcdp->fullBit  (c+2,(vlTOPp->reset));
    }
}
