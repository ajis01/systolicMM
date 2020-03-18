// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VFixedPointFromBitsTester__Syms.h"


//======================

void VFixedPointFromBitsTester::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VFixedPointFromBitsTester::traceInit, &VFixedPointFromBitsTester::traceFull, &VFixedPointFromBitsTester::traceChg, this);
}
void VFixedPointFromBitsTester::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VFixedPointFromBitsTester* t=(VFixedPointFromBitsTester*)userthis;
    VFixedPointFromBitsTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VFixedPointFromBitsTester::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VFixedPointFromBitsTester* t=(VFixedPointFromBitsTester*)userthis;
    VFixedPointFromBitsTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VFixedPointFromBitsTester::traceInitThis(VFixedPointFromBitsTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VFixedPointFromBitsTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VFixedPointFromBitsTester::traceFullThis(VFixedPointFromBitsTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VFixedPointFromBitsTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VFixedPointFromBitsTester::traceInitThis__1(VFixedPointFromBitsTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VFixedPointFromBitsTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+1,"clock",-1);
	vcdp->declBit  (c+2,"reset",-1);
	vcdp->declBit  (c+1,"FixedPointFromBitsTester clock",-1);
	vcdp->declBit  (c+2,"FixedPointFromBitsTester reset",-1);
	// Tracing: FixedPointFromBitsTester _T_40 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/FixedPointFromBitsTester/2020030621363614559496025745260491/FixedPointFromBitsTester.v:5
	// Tracing: FixedPointFromBitsTester _T_41 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/FixedPointFromBitsTester/2020030621363614559496025745260491/FixedPointFromBitsTester.v:6
	// Tracing: FixedPointFromBitsTester _T_43 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/FixedPointFromBitsTester/2020030621363614559496025745260491/FixedPointFromBitsTester.v:7
	// Tracing: FixedPointFromBitsTester _T_45 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/FixedPointFromBitsTester/2020030621363614559496025745260491/FixedPointFromBitsTester.v:8
	// Tracing: FixedPointFromBitsTester _T_46 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/FixedPointFromBitsTester/2020030621363614559496025745260491/FixedPointFromBitsTester.v:9
	// Tracing: FixedPointFromBitsTester _T_52 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/FixedPointFromBitsTester/2020030621363614559496025745260491/FixedPointFromBitsTester.v:10
	// Tracing: FixedPointFromBitsTester _T_54 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/FixedPointFromBitsTester/2020030621363614559496025745260491/FixedPointFromBitsTester.v:11
	// Tracing: FixedPointFromBitsTester _T_55 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/FixedPointFromBitsTester/2020030621363614559496025745260491/FixedPointFromBitsTester.v:12
	// Tracing: FixedPointFromBitsTester _T_76 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/FixedPointFromBitsTester/2020030621363614559496025745260491/FixedPointFromBitsTester.v:13
    }
}

void VFixedPointFromBitsTester::traceFullThis__1(VFixedPointFromBitsTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VFixedPointFromBitsTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->clock));
	vcdp->fullBit  (c+2,(vlTOPp->reset));
    }
}
