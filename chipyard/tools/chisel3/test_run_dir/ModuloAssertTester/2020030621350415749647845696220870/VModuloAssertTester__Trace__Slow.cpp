// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VModuloAssertTester__Syms.h"


//======================

void VModuloAssertTester::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VModuloAssertTester::traceInit, &VModuloAssertTester::traceFull, &VModuloAssertTester::traceChg, this);
}
void VModuloAssertTester::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VModuloAssertTester* t=(VModuloAssertTester*)userthis;
    VModuloAssertTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VModuloAssertTester::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VModuloAssertTester* t=(VModuloAssertTester*)userthis;
    VModuloAssertTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VModuloAssertTester::traceInitThis(VModuloAssertTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VModuloAssertTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VModuloAssertTester::traceFullThis(VModuloAssertTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VModuloAssertTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VModuloAssertTester::traceInitThis__1(VModuloAssertTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VModuloAssertTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+1,"clock",-1);
	vcdp->declBit  (c+2,"reset",-1);
	vcdp->declBit  (c+1,"ModuloAssertTester clock",-1);
	vcdp->declBit  (c+2,"ModuloAssertTester reset",-1);
	// Tracing: ModuloAssertTester _GEN_0 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ModuloAssertTester/2020030621350415749647845696220870/ModuloAssertTester.v:5
	// Tracing: ModuloAssertTester _T // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ModuloAssertTester/2020030621350415749647845696220870/ModuloAssertTester.v:6
	// Tracing: ModuloAssertTester _T_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ModuloAssertTester/2020030621350415749647845696220870/ModuloAssertTester.v:7
	// Tracing: ModuloAssertTester _T_3 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ModuloAssertTester/2020030621350415749647845696220870/ModuloAssertTester.v:8
	// Tracing: ModuloAssertTester _T_4 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ModuloAssertTester/2020030621350415749647845696220870/ModuloAssertTester.v:9
	// Tracing: ModuloAssertTester _T_6 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ModuloAssertTester/2020030621350415749647845696220870/ModuloAssertTester.v:10
    }
}

void VModuloAssertTester::traceFullThis__1(VModuloAssertTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VModuloAssertTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->clock));
	vcdp->fullBit  (c+2,(vlTOPp->reset));
    }
}
