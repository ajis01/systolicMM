// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSucceedingAssertTester__Syms.h"


//======================

void VSucceedingAssertTester::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VSucceedingAssertTester::traceInit, &VSucceedingAssertTester::traceFull, &VSucceedingAssertTester::traceChg, this);
}
void VSucceedingAssertTester::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VSucceedingAssertTester* t=(VSucceedingAssertTester*)userthis;
    VSucceedingAssertTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VSucceedingAssertTester::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VSucceedingAssertTester* t=(VSucceedingAssertTester*)userthis;
    VSucceedingAssertTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VSucceedingAssertTester::traceInitThis(VSucceedingAssertTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VSucceedingAssertTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VSucceedingAssertTester::traceFullThis(VSucceedingAssertTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VSucceedingAssertTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VSucceedingAssertTester::traceInitThis__1(VSucceedingAssertTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VSucceedingAssertTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+2,"clock",-1);
	vcdp->declBit  (c+3,"reset",-1);
	vcdp->declBit  (c+2,"SucceedingAssertTester clock",-1);
	vcdp->declBit  (c+3,"SucceedingAssertTester reset",-1);
	// Tracing: SucceedingAssertTester _T_4 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/SucceedingAssertTester/202003062134505764877091194365524/SucceedingAssertTester.v:5
	vcdp->declBus  (c+1,"SucceedingAssertTester value",-1,1,0);
	// Tracing: SucceedingAssertTester _RAND_0 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/SucceedingAssertTester/202003062134505764877091194365524/SucceedingAssertTester.v:7
	// Tracing: SucceedingAssertTester _T_5 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/SucceedingAssertTester/202003062134505764877091194365524/SucceedingAssertTester.v:8
	// Tracing: SucceedingAssertTester _T_7 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/SucceedingAssertTester/202003062134505764877091194365524/SucceedingAssertTester.v:9
	vcdp->declBit  (c+4,"SucceedingAssertTester done",-1);
    }
}

void VSucceedingAssertTester::traceFullThis__1(VSucceedingAssertTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VSucceedingAssertTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+1,(vlTOPp->SucceedingAssertTester__DOT__value),2);
	vcdp->fullBit  (c+2,(vlTOPp->clock));
	vcdp->fullBit  (c+3,(vlTOPp->reset));
	vcdp->fullBit  (c+4,(((~ (IData)(vlTOPp->reset)) 
			      & (3U == (IData)(vlTOPp->SucceedingAssertTester__DOT__value)))));
    }
}
