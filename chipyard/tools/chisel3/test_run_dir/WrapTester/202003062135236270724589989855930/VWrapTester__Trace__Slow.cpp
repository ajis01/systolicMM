// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VWrapTester__Syms.h"


//======================

void VWrapTester::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VWrapTester::traceInit, &VWrapTester::traceFull, &VWrapTester::traceChg, this);
}
void VWrapTester::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VWrapTester* t=(VWrapTester*)userthis;
    VWrapTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VWrapTester::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VWrapTester* t=(VWrapTester*)userthis;
    VWrapTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VWrapTester::traceInitThis(VWrapTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VWrapTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VWrapTester::traceFullThis(VWrapTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VWrapTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VWrapTester::traceInitThis__1(VWrapTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VWrapTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+3,"clock",-1);
	vcdp->declBit  (c+4,"reset",-1);
	vcdp->declBit  (c+3,"WrapTester clock",-1);
	vcdp->declBit  (c+4,"WrapTester reset",-1);
	vcdp->declBus  (c+1,"WrapTester value",-1,1,0);
	// Tracing: WrapTester _RAND_0 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/WrapTester/202003062135236270724589989855930/WrapTester.v:6
	vcdp->declBit  (c+2,"WrapTester wrap",-1);
	// Tracing: WrapTester _T_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/WrapTester/202003062135236270724589989855930/WrapTester.v:8
	// Tracing: WrapTester _T_5 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/WrapTester/202003062135236270724589989855930/WrapTester.v:9
	// Tracing: WrapTester _T_6 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/WrapTester/202003062135236270724589989855930/WrapTester.v:10
	// Tracing: WrapTester _T_8 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/WrapTester/202003062135236270724589989855930/WrapTester.v:11
    }
}

void VWrapTester::traceFullThis__1(VWrapTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VWrapTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+1,(vlTOPp->WrapTester__DOT__value),2);
	vcdp->fullBit  (c+2,((2U == (IData)(vlTOPp->WrapTester__DOT__value))));
	vcdp->fullBit  (c+3,(vlTOPp->clock));
	vcdp->fullBit  (c+4,(vlTOPp->reset));
    }
}
