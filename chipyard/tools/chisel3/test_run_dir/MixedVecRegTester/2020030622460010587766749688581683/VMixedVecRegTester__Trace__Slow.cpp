// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMixedVecRegTester__Syms.h"


//======================

void VMixedVecRegTester::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VMixedVecRegTester::traceInit, &VMixedVecRegTester::traceFull, &VMixedVecRegTester::traceChg, this);
}
void VMixedVecRegTester::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VMixedVecRegTester* t=(VMixedVecRegTester*)userthis;
    VMixedVecRegTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VMixedVecRegTester::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VMixedVecRegTester* t=(VMixedVecRegTester*)userthis;
    VMixedVecRegTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VMixedVecRegTester::traceInitThis(VMixedVecRegTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMixedVecRegTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VMixedVecRegTester::traceFullThis(VMixedVecRegTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMixedVecRegTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VMixedVecRegTester::traceInitThis__1(VMixedVecRegTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMixedVecRegTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+2,"clock",-1);
	vcdp->declBit  (c+3,"reset",-1);
	vcdp->declBit  (c+2,"MixedVecRegTester clock",-1);
	vcdp->declBit  (c+3,"MixedVecRegTester reset",-1);
	vcdp->declBit  (c+1,"MixedVecRegTester doneReg",-1);
	// Tracing: MixedVecRegTester _RAND_0 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/MixedVecRegTester/2020030622460010587766749688581683/MixedVecRegTester.v:6
	// Tracing: MixedVecRegTester _T // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/MixedVecRegTester/2020030622460010587766749688581683/MixedVecRegTester.v:7
	// Tracing: MixedVecRegTester _T_34 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/MixedVecRegTester/2020030622460010587766749688581683/MixedVecRegTester.v:8
	// Tracing: MixedVecRegTester _GEN_8 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/MixedVecRegTester/2020030622460010587766749688581683/MixedVecRegTester.v:9
    }
}

void VMixedVecRegTester::traceFullThis__1(VMixedVecRegTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMixedVecRegTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->MixedVecRegTester__DOT__doneReg));
	vcdp->fullBit  (c+2,(vlTOPp->clock));
	vcdp->fullBit  (c+3,(vlTOPp->reset));
    }
}
