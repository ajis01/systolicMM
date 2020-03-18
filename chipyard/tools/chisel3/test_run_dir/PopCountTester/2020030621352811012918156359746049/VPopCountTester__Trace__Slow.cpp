// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPopCountTester__Syms.h"


//======================

void VPopCountTester::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VPopCountTester::traceInit, &VPopCountTester::traceFull, &VPopCountTester::traceChg, this);
}
void VPopCountTester::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VPopCountTester* t=(VPopCountTester*)userthis;
    VPopCountTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VPopCountTester::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VPopCountTester* t=(VPopCountTester*)userthis;
    VPopCountTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VPopCountTester::traceInitThis(VPopCountTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPopCountTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VPopCountTester::traceFullThis(VPopCountTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPopCountTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VPopCountTester::traceInitThis__1(VPopCountTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPopCountTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+4,"clock",-1);
	vcdp->declBit  (c+5,"reset",-1);
	vcdp->declBit  (c+4,"PopCountTester clock",-1);
	vcdp->declBit  (c+5,"PopCountTester reset",-1);
	vcdp->declBus  (c+1,"PopCountTester x",-1,1,0);
	// Tracing: PopCountTester _RAND_0 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/PopCountTester/2020030621352811012918156359746049/PopCountTester.v:6
	// Tracing: PopCountTester _T_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/PopCountTester/2020030621352811012918156359746049/PopCountTester.v:7
	// Tracing: PopCountTester _T_4 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/PopCountTester/2020030621352811012918156359746049/PopCountTester.v:8
	// Tracing: PopCountTester _RAND_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/PopCountTester/2020030621352811012918156359746049/PopCountTester.v:9
	// Tracing: PopCountTester _T_6 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/PopCountTester/2020030621352811012918156359746049/PopCountTester.v:10
	// Tracing: PopCountTester _T_7 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/PopCountTester/2020030621352811012918156359746049/PopCountTester.v:11
	// Tracing: PopCountTester _T_8 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/PopCountTester/2020030621352811012918156359746049/PopCountTester.v:12
	vcdp->declBus  (c+2,"PopCountTester result",-1,1,0);
	// Tracing: PopCountTester _T_12 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/PopCountTester/2020030621352811012918156359746049/PopCountTester.v:14
	// Tracing: PopCountTester _GEN_0 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/PopCountTester/2020030621352811012918156359746049/PopCountTester.v:15
	vcdp->declBus  (c+3,"PopCountTester expected",-1,2,0);
	// Tracing: PopCountTester _GEN_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/PopCountTester/2020030621352811012918156359746049/PopCountTester.v:17
	// Tracing: PopCountTester _T_13 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/PopCountTester/2020030621352811012918156359746049/PopCountTester.v:18
	// Tracing: PopCountTester _T_15 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/PopCountTester/2020030621352811012918156359746049/PopCountTester.v:19
	// Tracing: PopCountTester _T_16 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/PopCountTester/2020030621352811012918156359746049/PopCountTester.v:20
    }
}

void VPopCountTester::traceFullThis__1(VPopCountTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPopCountTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+1,(vlTOPp->PopCountTester__DOT__x),2);
	vcdp->fullBus  (c+2,((3U & ((1U & (IData)(vlTOPp->PopCountTester__DOT__x)) 
				    + (1U & ((IData)(vlTOPp->PopCountTester__DOT__x) 
					     >> 1U))))),2);
	vcdp->fullBus  (c+3,((7U & ((1U & (IData)(vlTOPp->PopCountTester__DOT__x)) 
				    + (1U & ((IData)(vlTOPp->PopCountTester__DOT__x) 
					     >> 1U))))),3);
	vcdp->fullBit  (c+4,(vlTOPp->clock));
	vcdp->fullBit  (c+5,(vlTOPp->reset));
    }
}
