// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAsyncResetQueueTester__Syms.h"


//======================

void VAsyncResetQueueTester::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VAsyncResetQueueTester::traceInit, &VAsyncResetQueueTester::traceFull, &VAsyncResetQueueTester::traceChg, this);
}
void VAsyncResetQueueTester::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VAsyncResetQueueTester* t=(VAsyncResetQueueTester*)userthis;
    VAsyncResetQueueTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VAsyncResetQueueTester::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VAsyncResetQueueTester* t=(VAsyncResetQueueTester*)userthis;
    VAsyncResetQueueTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VAsyncResetQueueTester::traceInitThis(VAsyncResetQueueTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAsyncResetQueueTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VAsyncResetQueueTester::traceFullThis(VAsyncResetQueueTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAsyncResetQueueTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VAsyncResetQueueTester::traceInitThis__1(VAsyncResetQueueTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAsyncResetQueueTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+12,"clock",-1);
	vcdp->declBit  (c+13,"reset",-1);
	vcdp->declBit  (c+12,"AsyncResetQueueTester clock",-1);
	vcdp->declBit  (c+13,"AsyncResetQueueTester reset",-1);
	vcdp->declBit  (c+1,"AsyncResetQueueTester queue_clock",-1);
	vcdp->declBit  (c+6,"AsyncResetQueueTester queue_reset",-1);
	vcdp->declBit  (c+2,"AsyncResetQueueTester queue_io_enq_ready",-1);
	vcdp->declBus  (c+5,"AsyncResetQueueTester queue_io_count",-1,2,0);
	vcdp->declBus  (c+7,"AsyncResetQueueTester value",-1,1,0);
	// Tracing: AsyncResetQueueTester _RAND_0 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetQueueTester/2020030621375514167381297357862129/AsyncResetQueueTester.v:115
	vcdp->declBit  (c+8,"AsyncResetQueueTester cDiv",-1);
	// Tracing: AsyncResetQueueTester _T_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetQueueTester/2020030621375514167381297357862129/AsyncResetQueueTester.v:117
	vcdp->declBus  (c+9,"AsyncResetQueueTester value_1",-1,3,0);
	// Tracing: AsyncResetQueueTester _RAND_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetQueueTester/2020030621375514167381297357862129/AsyncResetQueueTester.v:119
	vcdp->declBit  (c+10,"AsyncResetQueueTester done",-1);
	// Tracing: AsyncResetQueueTester _T_5 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetQueueTester/2020030621375514167381297357862129/AsyncResetQueueTester.v:121
	vcdp->declBit  (c+6,"AsyncResetQueueTester asyncResetNext",-1);
	// Tracing: AsyncResetQueueTester _RAND_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetQueueTester/2020030621375514167381297357862129/AsyncResetQueueTester.v:123
	vcdp->declBit  (c+11,"AsyncResetQueueTester doCheck",-1);
	// Tracing: AsyncResetQueueTester _RAND_3 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetQueueTester/2020030621375514167381297357862129/AsyncResetQueueTester.v:125
	// Tracing: AsyncResetQueueTester _T_6 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetQueueTester/2020030621375514167381297357862129/AsyncResetQueueTester.v:126
	// Tracing: AsyncResetQueueTester _T_7 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetQueueTester/2020030621375514167381297357862129/AsyncResetQueueTester.v:127
	// Tracing: AsyncResetQueueTester _T_9 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetQueueTester/2020030621375514167381297357862129/AsyncResetQueueTester.v:128
	// Tracing: AsyncResetQueueTester _T_10 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetQueueTester/2020030621375514167381297357862129/AsyncResetQueueTester.v:129
	// Tracing: AsyncResetQueueTester _T_12 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetQueueTester/2020030621375514167381297357862129/AsyncResetQueueTester.v:130
	vcdp->declBit  (c+1,"AsyncResetQueueTester queue clock",-1);
	vcdp->declBit  (c+6,"AsyncResetQueueTester queue reset",-1);
	vcdp->declBit  (c+2,"AsyncResetQueueTester queue io_enq_ready",-1);
	vcdp->declBus  (c+5,"AsyncResetQueueTester queue io_count",-1,2,0);
	vcdp->declBus  (c+3,"AsyncResetQueueTester queue value",-1,1,0);
	// Tracing: AsyncResetQueueTester queue _RAND_0 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetQueueTester/2020030621375514167381297357862129/AsyncResetQueueTester.v:8
	vcdp->declBus  (c+4,"AsyncResetQueueTester queue value_1",-1,1,0);
	// Tracing: AsyncResetQueueTester queue _RAND_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetQueueTester/2020030621375514167381297357862129/AsyncResetQueueTester.v:10
	// Tracing: AsyncResetQueueTester queue _T_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetQueueTester/2020030621375514167381297357862129/AsyncResetQueueTester.v:11
	// Tracing: AsyncResetQueueTester queue _RAND_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetQueueTester/2020030621375514167381297357862129/AsyncResetQueueTester.v:12
	// Tracing: AsyncResetQueueTester queue _T_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetQueueTester/2020030621375514167381297357862129/AsyncResetQueueTester.v:13
	// Tracing: AsyncResetQueueTester queue _T_5 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetQueueTester/2020030621375514167381297357862129/AsyncResetQueueTester.v:14
	// Tracing: AsyncResetQueueTester queue _T_12 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetQueueTester/2020030621375514167381297357862129/AsyncResetQueueTester.v:15
	// Tracing: AsyncResetQueueTester queue _T_20 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetQueueTester/2020030621375514167381297357862129/AsyncResetQueueTester.v:16
	// Tracing: AsyncResetQueueTester queue _T_21 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetQueueTester/2020030621375514167381297357862129/AsyncResetQueueTester.v:17
	// Tracing: AsyncResetQueueTester queue _T_22 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetQueueTester/2020030621375514167381297357862129/AsyncResetQueueTester.v:18
	// Tracing: AsyncResetQueueTester queue _GEN_14 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetQueueTester/2020030621375514167381297357862129/AsyncResetQueueTester.v:19
    }
}

void VAsyncResetQueueTester::traceFullThis__1(VAsyncResetQueueTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAsyncResetQueueTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->AsyncResetQueueTester__DOT__queue_clock));
	vcdp->fullBit  (c+2,((1U & (~ (IData)(vlTOPp->AsyncResetQueueTester__DOT__queue__DOT___T_5)))));
	vcdp->fullBus  (c+3,(vlTOPp->AsyncResetQueueTester__DOT__queue__DOT__value),2);
	vcdp->fullBus  (c+4,(vlTOPp->AsyncResetQueueTester__DOT__queue__DOT__value_1),2);
	vcdp->fullBus  (c+5,(vlTOPp->AsyncResetQueueTester__DOT__queue_io_count),3);
	vcdp->fullBit  (c+6,(vlTOPp->AsyncResetQueueTester__DOT__asyncResetNext));
	vcdp->fullBus  (c+7,(vlTOPp->AsyncResetQueueTester__DOT__value),2);
	vcdp->fullBit  (c+8,((3U == (IData)(vlTOPp->AsyncResetQueueTester__DOT__value))));
	vcdp->fullBus  (c+9,(vlTOPp->AsyncResetQueueTester__DOT__value_1),4);
	vcdp->fullBit  (c+10,((0xfU == (IData)(vlTOPp->AsyncResetQueueTester__DOT__value_1))));
	vcdp->fullBit  (c+11,(vlTOPp->AsyncResetQueueTester__DOT__doCheck));
	vcdp->fullBit  (c+12,(vlTOPp->clock));
	vcdp->fullBit  (c+13,(vlTOPp->reset));
    }
}
