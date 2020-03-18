// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VEnableTester__Syms.h"


//======================

void VEnableTester::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VEnableTester::traceInit, &VEnableTester::traceFull, &VEnableTester::traceChg, this);
}
void VEnableTester::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VEnableTester* t=(VEnableTester*)userthis;
    VEnableTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VEnableTester::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VEnableTester* t=(VEnableTester*)userthis;
    VEnableTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VEnableTester::traceInitThis(VEnableTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEnableTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VEnableTester::traceFullThis(VEnableTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEnableTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VEnableTester::traceInitThis__1(VEnableTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEnableTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+5,"clock",-1);
	vcdp->declBit  (c+6,"reset",-1);
	vcdp->declBit  (c+5,"EnableTester clock",-1);
	vcdp->declBit  (c+6,"EnableTester reset",-1);
	vcdp->declBus  (c+1,"EnableTester ens",-1,29,0);
	// Tracing: EnableTester _RAND_0 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnableTester/202003062134345502074200795023892/EnableTester.v:6
	// Tracing: EnableTester _T // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnableTester/202003062134345502074200795023892/EnableTester.v:7
	// Tracing: EnableTester _T_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnableTester/202003062134345502074200795023892/EnableTester.v:8
	vcdp->declBus  (c+2,"EnableTester value",-1,4,0);
	// Tracing: EnableTester _RAND_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnableTester/202003062134345502074200795023892/EnableTester.v:10
	// Tracing: EnableTester _T_4 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnableTester/202003062134345502074200795023892/EnableTester.v:11
	vcdp->declBus  (c+3,"EnableTester value_1",-1,5,0);
	// Tracing: EnableTester _RAND_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnableTester/202003062134345502074200795023892/EnableTester.v:13
	vcdp->declBit  (c+4,"EnableTester done",-1);
	// Tracing: EnableTester _T_8 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnableTester/202003062134345502074200795023892/EnableTester.v:15
	// Tracing: EnableTester _T_9 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnableTester/202003062134345502074200795023892/EnableTester.v:16
	// Tracing: EnableTester _T_11 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnableTester/202003062134345502074200795023892/EnableTester.v:17
	// Tracing: EnableTester _T_12 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnableTester/202003062134345502074200795023892/EnableTester.v:18
	// Tracing: EnableTester _T_14 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnableTester/202003062134345502074200795023892/EnableTester.v:19
    }
}

void VEnableTester::traceFullThis__1(VEnableTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEnableTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+1,(vlTOPp->EnableTester__DOT__ens),30);
	vcdp->fullBus  (c+2,(vlTOPp->EnableTester__DOT__value),5);
	vcdp->fullBus  (c+3,(vlTOPp->EnableTester__DOT__value_1),6);
	vcdp->fullBit  (c+4,((0x20U == (IData)(vlTOPp->EnableTester__DOT__value_1))));
	vcdp->fullBit  (c+5,(vlTOPp->clock));
	vcdp->fullBit  (c+6,(vlTOPp->reset));
    }
}
