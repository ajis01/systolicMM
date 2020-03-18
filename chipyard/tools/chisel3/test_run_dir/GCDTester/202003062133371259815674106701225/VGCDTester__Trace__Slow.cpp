// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VGCDTester__Syms.h"


//======================

void VGCDTester::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VGCDTester::traceInit, &VGCDTester::traceFull, &VGCDTester::traceChg, this);
}
void VGCDTester::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VGCDTester* t=(VGCDTester*)userthis;
    VGCDTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VGCDTester::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VGCDTester* t=(VGCDTester*)userthis;
    VGCDTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VGCDTester::traceInitThis(VGCDTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VGCDTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VGCDTester::traceFullThis(VGCDTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VGCDTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VGCDTester::traceInitThis__1(VGCDTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VGCDTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+5,"clock",-1);
	vcdp->declBit  (c+6,"reset",-1);
	vcdp->declBit  (c+5,"GCDTester clock",-1);
	vcdp->declBit  (c+6,"GCDTester reset",-1);
	vcdp->declBit  (c+5,"GCDTester dut_clock",-1);
	vcdp->declBit  (c+1,"GCDTester dut_io_e",-1);
	vcdp->declBus  (c+2,"GCDTester dut_io_z",-1,31,0);
	vcdp->declBit  (c+3,"GCDTester dut_io_v",-1);
	vcdp->declBit  (c+1,"GCDTester first",-1);
	// Tracing: GCDTester _RAND_0 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/GCDTester/202003062133371259815674106701225/GCDTester.v:85
	// Tracing: GCDTester _GEN_0 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/GCDTester/202003062133371259815674106701225/GCDTester.v:86
	// Tracing: GCDTester _T // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/GCDTester/202003062133371259815674106701225/GCDTester.v:87
	// Tracing: GCDTester _T_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/GCDTester/202003062133371259815674106701225/GCDTester.v:88
	// Tracing: GCDTester _T_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/GCDTester/202003062133371259815674106701225/GCDTester.v:89
	// Tracing: GCDTester _T_4 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/GCDTester/202003062133371259815674106701225/GCDTester.v:90
	// Tracing: GCDTester _T_5 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/GCDTester/202003062133371259815674106701225/GCDTester.v:91
	// Tracing: GCDTester _T_7 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/GCDTester/202003062133371259815674106701225/GCDTester.v:92
	vcdp->declBit  (c+5,"GCDTester dut clock",-1);
	vcdp->declBit  (c+1,"GCDTester dut io_e",-1);
	vcdp->declBus  (c+2,"GCDTester dut io_z",-1,31,0);
	vcdp->declBit  (c+3,"GCDTester dut io_v",-1);
	vcdp->declBus  (c+2,"GCDTester dut x",-1,31,0);
	// Tracing: GCDTester dut _RAND_0 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/GCDTester/202003062133371259815674106701225/GCDTester.v:8
	vcdp->declBus  (c+4,"GCDTester dut y",-1,31,0);
	// Tracing: GCDTester dut _RAND_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/GCDTester/202003062133371259815674106701225/GCDTester.v:10
	// Tracing: GCDTester dut _T // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/GCDTester/202003062133371259815674106701225/GCDTester.v:11
	// Tracing: GCDTester dut _T_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/GCDTester/202003062133371259815674106701225/GCDTester.v:12
	// Tracing: GCDTester dut _T_4 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/GCDTester/202003062133371259815674106701225/GCDTester.v:13
    }
}

void VGCDTester::traceFullThis__1(VGCDTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VGCDTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->GCDTester__DOT__first));
	vcdp->fullBus  (c+2,(vlTOPp->GCDTester__DOT__dut__DOT__x),32);
	vcdp->fullBit  (c+3,((0U == vlTOPp->GCDTester__DOT__dut__DOT__y)));
	vcdp->fullBus  (c+4,(vlTOPp->GCDTester__DOT__dut__DOT__y),32);
	vcdp->fullBit  (c+5,(vlTOPp->clock));
	vcdp->fullBit  (c+6,(vlTOPp->reset));
    }
}
