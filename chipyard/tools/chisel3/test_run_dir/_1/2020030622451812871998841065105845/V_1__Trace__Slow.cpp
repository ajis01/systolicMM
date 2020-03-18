// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "V_1__Syms.h"


//======================

void V_1::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&V_1::traceInit, &V_1::traceFull, &V_1::traceChg, this);
}
void V_1::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    V_1* t=(V_1*)userthis;
    V_1__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void V_1::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    V_1* t=(V_1*)userthis;
    V_1__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void V_1::traceInitThis(V_1__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    V_1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void V_1::traceFullThis(V_1__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    V_1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void V_1::traceInitThis__1(V_1__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    V_1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+1,"clock",-1);
	vcdp->declBit  (c+2,"reset",-1);
	// Tracing: _1 clock // Ignored: Leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/_1/2020030622451812871998841065105845/_1.v:2
	// Tracing: _1 reset // Ignored: Leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/_1/2020030622451812871998841065105845/_1.v:3
	// Tracing: _1 value // Ignored: Leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/_1/2020030622451812871998841065105845/_1.v:5
	// Tracing: _1 _RAND_0 // Ignored: Leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/_1/2020030622451812871998841065105845/_1.v:6
	// Tracing: _1 _T_5 // Ignored: Leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/_1/2020030622451812871998841065105845/_1.v:7
	// Tracing: _1 _T_14 // Ignored: Leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/_1/2020030622451812871998841065105845/_1.v:8
    }
}

void V_1::traceFullThis__1(V_1__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    V_1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->clock));
	vcdp->fullBit  (c+2,(vlTOPp->reset));
    }
}
