// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VBlackBoxTester__Syms.h"


//======================

void VBlackBoxTester::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VBlackBoxTester::traceInit, &VBlackBoxTester::traceFull, &VBlackBoxTester::traceChg, this);
}
void VBlackBoxTester::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VBlackBoxTester* t=(VBlackBoxTester*)userthis;
    VBlackBoxTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VBlackBoxTester::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VBlackBoxTester* t=(VBlackBoxTester*)userthis;
    VBlackBoxTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VBlackBoxTester::traceInitThis(VBlackBoxTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBlackBoxTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VBlackBoxTester::traceFullThis(VBlackBoxTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBlackBoxTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VBlackBoxTester::traceInitThis__1(VBlackBoxTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBlackBoxTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+1,"clock",-1);
	vcdp->declBit  (c+2,"reset",-1);
	vcdp->declBit  (c+1,"BlackBoxTester clock",-1);
	vcdp->declBit  (c+2,"BlackBoxTester reset",-1);
	vcdp->declBit  (c+3,"BlackBoxTester blackBoxPos_in",-1);
	vcdp->declBit  (c+4,"BlackBoxTester blackBoxPos_out",-1);
	vcdp->declBit  (c+5,"BlackBoxTester blackBoxNeg_in",-1);
	vcdp->declBit  (c+6,"BlackBoxTester blackBoxNeg_out",-1);
	// Tracing: BlackBoxTester _T // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/BlackBoxTester/2020030621373714512347935346742508/BlackBoxTester.v:9
	// Tracing: BlackBoxTester _T_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/BlackBoxTester/2020030621373714512347935346742508/BlackBoxTester.v:10
	// Tracing: BlackBoxTester _T_3 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/BlackBoxTester/2020030621373714512347935346742508/BlackBoxTester.v:11
	// Tracing: BlackBoxTester _T_4 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/BlackBoxTester/2020030621373714512347935346742508/BlackBoxTester.v:12
	// Tracing: BlackBoxTester _T_6 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/BlackBoxTester/2020030621373714512347935346742508/BlackBoxTester.v:13
	// Tracing: BlackBoxTester _T_7 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/BlackBoxTester/2020030621373714512347935346742508/BlackBoxTester.v:14
	// Tracing: BlackBoxTester _T_9 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/BlackBoxTester/2020030621373714512347935346742508/BlackBoxTester.v:15
	vcdp->declBus  (c+3,"BlackBoxTester blackBoxPos in",-1,0,0);
	vcdp->declBus  (c+4,"BlackBoxTester blackBoxPos out",-1,0,0);
	vcdp->declBus  (c+5,"BlackBoxTester blackBoxNeg in",-1,0,0);
	vcdp->declBus  (c+6,"BlackBoxTester blackBoxNeg out",-1,0,0);
    }
}

void VBlackBoxTester::traceFullThis__1(VBlackBoxTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBlackBoxTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->clock));
	vcdp->fullBit  (c+2,(vlTOPp->reset));
	vcdp->fullBit  (c+3,(1U));
	vcdp->fullBit  (c+4,(0U));
	vcdp->fullBit  (c+5,(0U));
	vcdp->fullBit  (c+6,(1U));
    }
}
