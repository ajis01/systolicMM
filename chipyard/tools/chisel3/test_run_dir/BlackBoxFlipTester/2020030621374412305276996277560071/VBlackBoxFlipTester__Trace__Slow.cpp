// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VBlackBoxFlipTester__Syms.h"


//======================

void VBlackBoxFlipTester::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VBlackBoxFlipTester::traceInit, &VBlackBoxFlipTester::traceFull, &VBlackBoxFlipTester::traceChg, this);
}
void VBlackBoxFlipTester::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VBlackBoxFlipTester* t=(VBlackBoxFlipTester*)userthis;
    VBlackBoxFlipTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VBlackBoxFlipTester::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VBlackBoxFlipTester* t=(VBlackBoxFlipTester*)userthis;
    VBlackBoxFlipTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VBlackBoxFlipTester::traceInitThis(VBlackBoxFlipTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBlackBoxFlipTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VBlackBoxFlipTester::traceFullThis(VBlackBoxFlipTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBlackBoxFlipTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VBlackBoxFlipTester::traceInitThis__1(VBlackBoxFlipTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBlackBoxFlipTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+1,"clock",-1);
	vcdp->declBit  (c+2,"reset",-1);
	vcdp->declBit  (c+1,"BlackBoxFlipTester clock",-1);
	vcdp->declBit  (c+2,"BlackBoxFlipTester reset",-1);
	vcdp->declBit  (c+3,"BlackBoxFlipTester blackBox_in",-1);
	vcdp->declBit  (c+4,"BlackBoxFlipTester blackBox_out",-1);
	// Tracing: BlackBoxFlipTester _T // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/BlackBoxFlipTester/2020030621374412305276996277560071/BlackBoxFlipTester.v:7
	// Tracing: BlackBoxFlipTester _T_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/BlackBoxFlipTester/2020030621374412305276996277560071/BlackBoxFlipTester.v:8
	// Tracing: BlackBoxFlipTester _T_3 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/BlackBoxFlipTester/2020030621374412305276996277560071/BlackBoxFlipTester.v:9
	// Tracing: BlackBoxFlipTester _T_5 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/BlackBoxFlipTester/2020030621374412305276996277560071/BlackBoxFlipTester.v:10
	vcdp->declBus  (c+3,"BlackBoxFlipTester blackBox in",-1,0,0);
	vcdp->declBus  (c+4,"BlackBoxFlipTester blackBox out",-1,0,0);
    }
}

void VBlackBoxFlipTester::traceFullThis__1(VBlackBoxFlipTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBlackBoxFlipTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->clock));
	vcdp->fullBit  (c+2,(vlTOPp->reset));
	vcdp->fullBit  (c+3,(1U));
	vcdp->fullBit  (c+4,(1U));
    }
}
