// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VLastAssignTester__Syms.h"


//======================

void VLastAssignTester::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VLastAssignTester::traceInit, &VLastAssignTester::traceFull, &VLastAssignTester::traceChg, this);
}
void VLastAssignTester::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VLastAssignTester* t=(VLastAssignTester*)userthis;
    VLastAssignTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VLastAssignTester::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VLastAssignTester* t=(VLastAssignTester*)userthis;
    VLastAssignTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VLastAssignTester::traceInitThis(VLastAssignTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VLastAssignTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VLastAssignTester::traceFullThis(VLastAssignTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VLastAssignTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VLastAssignTester::traceInitThis__1(VLastAssignTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VLastAssignTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+2,"clock",-1);
	vcdp->declBit  (c+3,"reset",-1);
	vcdp->declBit  (c+2,"LastAssignTester clock",-1);
	vcdp->declBit  (c+3,"LastAssignTester reset",-1);
	vcdp->declBit  (c+1,"LastAssignTester value",-1);
	// Tracing: LastAssignTester _RAND_0 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LastAssignTester/202003062244448997667615207187037/LastAssignTester.v:6
	// Tracing: LastAssignTester _T_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LastAssignTester/202003062244448997667615207187037/LastAssignTester.v:7
	// Tracing: LastAssignTester _T_17 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/LastAssignTester/202003062244448997667615207187037/LastAssignTester.v:8
    }
}

void VLastAssignTester::traceFullThis__1(VLastAssignTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VLastAssignTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->LastAssignTester__DOT__value));
	vcdp->fullBit  (c+2,(vlTOPp->clock));
	vcdp->fullBit  (c+3,(vlTOPp->reset));
    }
}
