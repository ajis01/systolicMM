// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCastToUIntTester__Syms.h"


//======================

void VCastToUIntTester::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VCastToUIntTester::traceInit, &VCastToUIntTester::traceFull, &VCastToUIntTester::traceChg, this);
}
void VCastToUIntTester::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VCastToUIntTester* t=(VCastToUIntTester*)userthis;
    VCastToUIntTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VCastToUIntTester::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VCastToUIntTester* t=(VCastToUIntTester*)userthis;
    VCastToUIntTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VCastToUIntTester::traceInitThis(VCastToUIntTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCastToUIntTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VCastToUIntTester::traceFullThis(VCastToUIntTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCastToUIntTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VCastToUIntTester::traceInitThis__1(VCastToUIntTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCastToUIntTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+1,"clock",-1);
	vcdp->declBit  (c+2,"reset",-1);
	vcdp->declBit  (c+1,"CastToUIntTester clock",-1);
	vcdp->declBit  (c+2,"CastToUIntTester reset",-1);
	vcdp->declBus  (c+3,"CastToUIntTester CastToUInt_io_in",-1,6,0);
	vcdp->declBus  (c+3,"CastToUIntTester CastToUInt_io_out",-1,6,0);
	vcdp->declBus  (c+4,"CastToUIntTester CastToUInt_1_io_in",-1,6,0);
	vcdp->declBus  (c+4,"CastToUIntTester CastToUInt_1_io_out",-1,6,0);
	vcdp->declBus  (c+5,"CastToUIntTester CastToUInt_2_io_in",-1,6,0);
	vcdp->declBus  (c+5,"CastToUIntTester CastToUInt_2_io_out",-1,6,0);
	vcdp->declBus  (c+6,"CastToUIntTester CastToUInt_3_io_in",-1,6,0);
	vcdp->declBus  (c+6,"CastToUIntTester CastToUInt_3_io_out",-1,6,0);
	vcdp->declBus  (c+7,"CastToUIntTester CastToUInt_4_io_in",-1,6,0);
	vcdp->declBus  (c+7,"CastToUIntTester CastToUInt_4_io_out",-1,6,0);
	// Tracing: CastToUIntTester _T // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastToUIntTester/2020030621333713852934033646446157/CastToUIntTester.v:21
	// Tracing: CastToUIntTester _T_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastToUIntTester/2020030621333713852934033646446157/CastToUIntTester.v:22
	// Tracing: CastToUIntTester _T_3 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastToUIntTester/2020030621333713852934033646446157/CastToUIntTester.v:23
	// Tracing: CastToUIntTester _T_4 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastToUIntTester/2020030621333713852934033646446157/CastToUIntTester.v:24
	// Tracing: CastToUIntTester _T_6 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastToUIntTester/2020030621333713852934033646446157/CastToUIntTester.v:25
	// Tracing: CastToUIntTester _T_7 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastToUIntTester/2020030621333713852934033646446157/CastToUIntTester.v:26
	// Tracing: CastToUIntTester _T_8 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastToUIntTester/2020030621333713852934033646446157/CastToUIntTester.v:27
	// Tracing: CastToUIntTester _T_10 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastToUIntTester/2020030621333713852934033646446157/CastToUIntTester.v:28
	// Tracing: CastToUIntTester _T_11 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastToUIntTester/2020030621333713852934033646446157/CastToUIntTester.v:29
	// Tracing: CastToUIntTester _T_12 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastToUIntTester/2020030621333713852934033646446157/CastToUIntTester.v:30
	// Tracing: CastToUIntTester _T_14 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastToUIntTester/2020030621333713852934033646446157/CastToUIntTester.v:31
	// Tracing: CastToUIntTester _T_15 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastToUIntTester/2020030621333713852934033646446157/CastToUIntTester.v:32
	// Tracing: CastToUIntTester _T_16 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastToUIntTester/2020030621333713852934033646446157/CastToUIntTester.v:33
	// Tracing: CastToUIntTester _T_18 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastToUIntTester/2020030621333713852934033646446157/CastToUIntTester.v:34
	// Tracing: CastToUIntTester _T_19 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastToUIntTester/2020030621333713852934033646446157/CastToUIntTester.v:35
	// Tracing: CastToUIntTester _T_21 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastToUIntTester/2020030621333713852934033646446157/CastToUIntTester.v:36
	vcdp->declBus  (c+3,"CastToUIntTester CastToUInt io_in",-1,6,0);
	vcdp->declBus  (c+3,"CastToUIntTester CastToUInt io_out",-1,6,0);
	vcdp->declBus  (c+4,"CastToUIntTester CastToUInt_1 io_in",-1,6,0);
	vcdp->declBus  (c+4,"CastToUIntTester CastToUInt_1 io_out",-1,6,0);
	vcdp->declBus  (c+5,"CastToUIntTester CastToUInt_2 io_in",-1,6,0);
	vcdp->declBus  (c+5,"CastToUIntTester CastToUInt_2 io_out",-1,6,0);
	vcdp->declBus  (c+6,"CastToUIntTester CastToUInt_3 io_in",-1,6,0);
	vcdp->declBus  (c+6,"CastToUIntTester CastToUInt_3 io_out",-1,6,0);
	vcdp->declBus  (c+7,"CastToUIntTester CastToUInt_4 io_in",-1,6,0);
	vcdp->declBus  (c+7,"CastToUIntTester CastToUInt_4 io_out",-1,6,0);
    }
}

void VCastToUIntTester::traceFullThis__1(VCastToUIntTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCastToUIntTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->clock));
	vcdp->fullBit  (c+2,(vlTOPp->reset));
	vcdp->fullBus  (c+3,(0U),7);
	vcdp->fullBus  (c+4,(1U),7);
	vcdp->fullBus  (c+5,(2U),7);
	vcdp->fullBus  (c+6,(0x64U),7);
	vcdp->fullBus  (c+7,(0x65U),7);
    }
}
