// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "V_2__Syms.h"


//======================

void V_2::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&V_2::traceInit, &V_2::traceFull, &V_2::traceChg, this);
}
void V_2::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    V_2* t=(V_2*)userthis;
    V_2__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void V_2::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    V_2* t=(V_2*)userthis;
    V_2__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void V_2::traceInitThis(V_2__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    V_2* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void V_2::traceFullThis(V_2__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    V_2* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void V_2::traceInitThis__1(V_2__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    V_2* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+1,"clock",-1);
	vcdp->declBit  (c+2,"reset",-1);
	// Tracing: _2 clock // Ignored: Leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/_2/2020030622454012845600953992873936/_2.v:2
	// Tracing: _2 reset // Ignored: Leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/_2/2020030622454012845600953992873936/_2.v:3
	// Tracing: _2 value // Ignored: Leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/_2/2020030622454012845600953992873936/_2.v:5
	// Tracing: _2 _RAND_0 // Ignored: Leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/_2/2020030622454012845600953992873936/_2.v:6
	// Tracing: _2 _T_4 // Ignored: Leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/_2/2020030622454012845600953992873936/_2.v:7
	// Tracing: _2 _T_13 // Ignored: Leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/_2/2020030622454012845600953992873936/_2.v:8
    }
}

void V_2::traceFullThis__1(V_2__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    V_2* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->clock));
	vcdp->fullBit  (c+2,(vlTOPp->reset));
    }
}
