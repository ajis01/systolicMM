// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VShiftTester__Syms.h"


//======================

void VShiftTester::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VShiftTester::traceInit, &VShiftTester::traceFull, &VShiftTester::traceChg, this);
}
void VShiftTester::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VShiftTester* t=(VShiftTester*)userthis;
    VShiftTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VShiftTester::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VShiftTester* t=(VShiftTester*)userthis;
    VShiftTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VShiftTester::traceInitThis(VShiftTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VShiftTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VShiftTester::traceFullThis(VShiftTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VShiftTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VShiftTester::traceInitThis__1(VShiftTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VShiftTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+1,"clock",-1);
	vcdp->declBit  (c+2,"reset",-1);
	vcdp->declBit  (c+1,"ShiftTester clock",-1);
	vcdp->declBit  (c+2,"ShiftTester reset",-1);
	// Tracing: ShiftTester _T_7 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ShiftTester/2020030621354710531700557668215255/ShiftTester.v:5
    }
}

void VShiftTester::traceFullThis__1(VShiftTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VShiftTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->clock));
	vcdp->fullBit  (c+2,(vlTOPp->reset));
    }
}
