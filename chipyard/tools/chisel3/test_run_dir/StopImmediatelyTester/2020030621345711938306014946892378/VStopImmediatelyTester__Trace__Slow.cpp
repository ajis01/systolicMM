// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VStopImmediatelyTester__Syms.h"


//======================

void VStopImmediatelyTester::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VStopImmediatelyTester::traceInit, &VStopImmediatelyTester::traceFull, &VStopImmediatelyTester::traceChg, this);
}
void VStopImmediatelyTester::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VStopImmediatelyTester* t=(VStopImmediatelyTester*)userthis;
    VStopImmediatelyTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VStopImmediatelyTester::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VStopImmediatelyTester* t=(VStopImmediatelyTester*)userthis;
    VStopImmediatelyTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VStopImmediatelyTester::traceInitThis(VStopImmediatelyTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStopImmediatelyTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VStopImmediatelyTester::traceFullThis(VStopImmediatelyTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStopImmediatelyTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VStopImmediatelyTester::traceInitThis__1(VStopImmediatelyTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStopImmediatelyTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+2,"clock",-1);
	vcdp->declBit  (c+3,"reset",-1);
	vcdp->declBit  (c+2,"StopImmediatelyTester clock",-1);
	vcdp->declBit  (c+3,"StopImmediatelyTester reset",-1);
	vcdp->declBus  (c+1,"StopImmediatelyTester cycle",-1,3,0);
	// Tracing: StopImmediatelyTester _RAND_0 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/StopImmediatelyTester/2020030621345711938306014946892378/StopImmediatelyTester.v:6
	// Tracing: StopImmediatelyTester _T_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/StopImmediatelyTester/2020030621345711938306014946892378/StopImmediatelyTester.v:7
	// Tracing: StopImmediatelyTester _T_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/StopImmediatelyTester/2020030621345711938306014946892378/StopImmediatelyTester.v:8
	// Tracing: StopImmediatelyTester _T_4 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/StopImmediatelyTester/2020030621345711938306014946892378/StopImmediatelyTester.v:9
	// Tracing: StopImmediatelyTester _T_5 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/StopImmediatelyTester/2020030621345711938306014946892378/StopImmediatelyTester.v:10
	// Tracing: StopImmediatelyTester _T_7 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/StopImmediatelyTester/2020030621345711938306014946892378/StopImmediatelyTester.v:11
	// Tracing: StopImmediatelyTester _T_8 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/StopImmediatelyTester/2020030621345711938306014946892378/StopImmediatelyTester.v:12
    }
}

void VStopImmediatelyTester::traceFullThis__1(VStopImmediatelyTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStopImmediatelyTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+1,(vlTOPp->StopImmediatelyTester__DOT__cycle),4);
	vcdp->fullBit  (c+2,(vlTOPp->clock));
	vcdp->fullBit  (c+3,(vlTOPp->reset));
    }
}
