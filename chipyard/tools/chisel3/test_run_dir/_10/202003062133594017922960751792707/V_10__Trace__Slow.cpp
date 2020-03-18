// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "V_10__Syms.h"


//======================

void V_10::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&V_10::traceInit, &V_10::traceFull, &V_10::traceChg, this);
}
void V_10::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    V_10* t=(V_10*)userthis;
    V_10__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void V_10::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    V_10* t=(V_10*)userthis;
    V_10__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void V_10::traceInitThis(V_10__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    V_10* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void V_10::traceFullThis(V_10__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    V_10* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void V_10::traceInitThis__1(V_10__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    V_10* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+1,"clock",-1);
	vcdp->declBit  (c+2,"reset",-1);
	// Tracing: _10 clock // Ignored: Leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/_10/202003062133594017922960751792707/_10.v:2
	// Tracing: _10 reset // Ignored: Leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/_10/202003062133594017922960751792707/_10.v:3
	// Tracing: _10 value // Ignored: Leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/_10/202003062133594017922960751792707/_10.v:5
	// Tracing: _10 _RAND_0 // Ignored: Leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/_10/202003062133594017922960751792707/_10.v:6
	// Tracing: _10 done // Ignored: Leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/_10/202003062133594017922960751792707/_10.v:7
	// Tracing: _10 _T_10 // Ignored: Leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/_10/202003062133594017922960751792707/_10.v:8
	// Tracing: _10 _T_12 // Ignored: Leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/_10/202003062133594017922960751792707/_10.v:9
    }
}

void V_10::traceFullThis__1(V_10__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    V_10* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->clock));
	vcdp->fullBit  (c+2,(vlTOPp->reset));
    }
}
