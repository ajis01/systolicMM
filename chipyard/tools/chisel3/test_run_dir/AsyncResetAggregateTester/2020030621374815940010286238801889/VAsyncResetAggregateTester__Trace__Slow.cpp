// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAsyncResetAggregateTester__Syms.h"


//======================

void VAsyncResetAggregateTester::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VAsyncResetAggregateTester::traceInit, &VAsyncResetAggregateTester::traceFull, &VAsyncResetAggregateTester::traceChg, this);
}
void VAsyncResetAggregateTester::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VAsyncResetAggregateTester* t=(VAsyncResetAggregateTester*)userthis;
    VAsyncResetAggregateTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VAsyncResetAggregateTester::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VAsyncResetAggregateTester* t=(VAsyncResetAggregateTester*)userthis;
    VAsyncResetAggregateTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VAsyncResetAggregateTester::traceInitThis(VAsyncResetAggregateTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAsyncResetAggregateTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VAsyncResetAggregateTester::traceFullThis(VAsyncResetAggregateTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAsyncResetAggregateTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VAsyncResetAggregateTester::traceInitThis__1(VAsyncResetAggregateTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAsyncResetAggregateTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+11,"clock",-1);
	vcdp->declBit  (c+12,"reset",-1);
	vcdp->declBit  (c+11,"AsyncResetAggregateTester clock",-1);
	vcdp->declBit  (c+12,"AsyncResetAggregateTester reset",-1);
	vcdp->declBus  (c+6,"AsyncResetAggregateTester value",-1,1,0);
	// Tracing: AsyncResetAggregateTester _RAND_0 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetAggregateTester/2020030621374815940010286238801889/AsyncResetAggregateTester.v:6
	vcdp->declBit  (c+7,"AsyncResetAggregateTester cDiv",-1);
	// Tracing: AsyncResetAggregateTester _T_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetAggregateTester/2020030621374815940010286238801889/AsyncResetAggregateTester.v:8
	vcdp->declBit  (c+1,"AsyncResetAggregateTester slowClk",-1);
	vcdp->declBus  (c+8,"AsyncResetAggregateTester value_1",-1,3,0);
	// Tracing: AsyncResetAggregateTester _RAND_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetAggregateTester/2020030621374815940010286238801889/AsyncResetAggregateTester.v:11
	vcdp->declBit  (c+9,"AsyncResetAggregateTester done",-1);
	// Tracing: AsyncResetAggregateTester _T_5 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetAggregateTester/2020030621374815940010286238801889/AsyncResetAggregateTester.v:13
	vcdp->declBit  (c+10,"AsyncResetAggregateTester asyncResetNext",-1);
	// Tracing: AsyncResetAggregateTester _RAND_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetAggregateTester/2020030621374815940010286238801889/AsyncResetAggregateTester.v:15
	// Tracing: AsyncResetAggregateTester _T_6 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetAggregateTester/2020030621374815940010286238801889/AsyncResetAggregateTester.v:16
	vcdp->declBit  (c+10,"AsyncResetAggregateTester asyncReset",-1);
	vcdp->declBus  (c+2,"AsyncResetAggregateTester reg_0_x",-1,7,0);
	// Tracing: AsyncResetAggregateTester _RAND_3 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetAggregateTester/2020030621374815940010286238801889/AsyncResetAggregateTester.v:19
	vcdp->declBus  (c+3,"AsyncResetAggregateTester reg_0_y",-1,7,0);
	// Tracing: AsyncResetAggregateTester _RAND_4 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetAggregateTester/2020030621374815940010286238801889/AsyncResetAggregateTester.v:21
	vcdp->declBus  (c+4,"AsyncResetAggregateTester reg_1_x",-1,7,0);
	// Tracing: AsyncResetAggregateTester _RAND_5 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetAggregateTester/2020030621374815940010286238801889/AsyncResetAggregateTester.v:23
	vcdp->declBus  (c+5,"AsyncResetAggregateTester reg_1_y",-1,7,0);
	// Tracing: AsyncResetAggregateTester _RAND_6 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetAggregateTester/2020030621374815940010286238801889/AsyncResetAggregateTester.v:25
	// Tracing: AsyncResetAggregateTester _T_8 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetAggregateTester/2020030621374815940010286238801889/AsyncResetAggregateTester.v:26
	// Tracing: AsyncResetAggregateTester _T_9 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetAggregateTester/2020030621374815940010286238801889/AsyncResetAggregateTester.v:27
	// Tracing: AsyncResetAggregateTester _T_11 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetAggregateTester/2020030621374815940010286238801889/AsyncResetAggregateTester.v:28
	// Tracing: AsyncResetAggregateTester _T_12 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetAggregateTester/2020030621374815940010286238801889/AsyncResetAggregateTester.v:29
	// Tracing: AsyncResetAggregateTester _T_13 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetAggregateTester/2020030621374815940010286238801889/AsyncResetAggregateTester.v:30
	// Tracing: AsyncResetAggregateTester _T_15 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetAggregateTester/2020030621374815940010286238801889/AsyncResetAggregateTester.v:31
	// Tracing: AsyncResetAggregateTester _T_16 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetAggregateTester/2020030621374815940010286238801889/AsyncResetAggregateTester.v:32
	// Tracing: AsyncResetAggregateTester _T_17 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetAggregateTester/2020030621374815940010286238801889/AsyncResetAggregateTester.v:33
	// Tracing: AsyncResetAggregateTester _T_19 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetAggregateTester/2020030621374815940010286238801889/AsyncResetAggregateTester.v:34
	// Tracing: AsyncResetAggregateTester _T_20 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetAggregateTester/2020030621374815940010286238801889/AsyncResetAggregateTester.v:35
	// Tracing: AsyncResetAggregateTester _T_21 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetAggregateTester/2020030621374815940010286238801889/AsyncResetAggregateTester.v:36
	// Tracing: AsyncResetAggregateTester _T_23 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetAggregateTester/2020030621374815940010286238801889/AsyncResetAggregateTester.v:37
	// Tracing: AsyncResetAggregateTester _T_24 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetAggregateTester/2020030621374815940010286238801889/AsyncResetAggregateTester.v:38
	// Tracing: AsyncResetAggregateTester _T_25 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetAggregateTester/2020030621374815940010286238801889/AsyncResetAggregateTester.v:39
	// Tracing: AsyncResetAggregateTester _T_26 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetAggregateTester/2020030621374815940010286238801889/AsyncResetAggregateTester.v:40
	// Tracing: AsyncResetAggregateTester _T_27 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetAggregateTester/2020030621374815940010286238801889/AsyncResetAggregateTester.v:41
	// Tracing: AsyncResetAggregateTester _T_28 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetAggregateTester/2020030621374815940010286238801889/AsyncResetAggregateTester.v:42
	// Tracing: AsyncResetAggregateTester _T_30 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetAggregateTester/2020030621374815940010286238801889/AsyncResetAggregateTester.v:43
	// Tracing: AsyncResetAggregateTester _T_31 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetAggregateTester/2020030621374815940010286238801889/AsyncResetAggregateTester.v:44
	// Tracing: AsyncResetAggregateTester _T_32 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetAggregateTester/2020030621374815940010286238801889/AsyncResetAggregateTester.v:45
	// Tracing: AsyncResetAggregateTester _T_34 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetAggregateTester/2020030621374815940010286238801889/AsyncResetAggregateTester.v:46
	// Tracing: AsyncResetAggregateTester _T_35 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetAggregateTester/2020030621374815940010286238801889/AsyncResetAggregateTester.v:47
	// Tracing: AsyncResetAggregateTester _T_36 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetAggregateTester/2020030621374815940010286238801889/AsyncResetAggregateTester.v:48
	// Tracing: AsyncResetAggregateTester _T_38 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetAggregateTester/2020030621374815940010286238801889/AsyncResetAggregateTester.v:49
	// Tracing: AsyncResetAggregateTester _T_39 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetAggregateTester/2020030621374815940010286238801889/AsyncResetAggregateTester.v:50
	// Tracing: AsyncResetAggregateTester _T_40 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetAggregateTester/2020030621374815940010286238801889/AsyncResetAggregateTester.v:51
	// Tracing: AsyncResetAggregateTester _T_42 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetAggregateTester/2020030621374815940010286238801889/AsyncResetAggregateTester.v:52
	// Tracing: AsyncResetAggregateTester _T_43 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetAggregateTester/2020030621374815940010286238801889/AsyncResetAggregateTester.v:53
	// Tracing: AsyncResetAggregateTester _T_44 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetAggregateTester/2020030621374815940010286238801889/AsyncResetAggregateTester.v:54
	// Tracing: AsyncResetAggregateTester _T_62 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetAggregateTester/2020030621374815940010286238801889/AsyncResetAggregateTester.v:55
	// Tracing: AsyncResetAggregateTester _GEN_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetAggregateTester/2020030621374815940010286238801889/AsyncResetAggregateTester.v:56
	// Tracing: AsyncResetAggregateTester _GEN_3 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/AsyncResetAggregateTester/2020030621374815940010286238801889/AsyncResetAggregateTester.v:57
    }
}

void VAsyncResetAggregateTester::traceFullThis__1(VAsyncResetAggregateTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAsyncResetAggregateTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->AsyncResetAggregateTester__DOT__slowClk));
	vcdp->fullBus  (c+2,(vlTOPp->AsyncResetAggregateTester__DOT__reg_0_x),8);
	vcdp->fullBus  (c+3,(vlTOPp->AsyncResetAggregateTester__DOT__reg_0_y),8);
	vcdp->fullBus  (c+4,(vlTOPp->AsyncResetAggregateTester__DOT__reg_1_x),8);
	vcdp->fullBus  (c+5,(vlTOPp->AsyncResetAggregateTester__DOT__reg_1_y),8);
	vcdp->fullBus  (c+6,(vlTOPp->AsyncResetAggregateTester__DOT__value),2);
	vcdp->fullBit  (c+7,((3U == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__value))));
	vcdp->fullBus  (c+8,(vlTOPp->AsyncResetAggregateTester__DOT__value_1),4);
	vcdp->fullBit  (c+9,((0xfU == (IData)(vlTOPp->AsyncResetAggregateTester__DOT__value_1))));
	vcdp->fullBit  (c+10,(vlTOPp->AsyncResetAggregateTester__DOT__asyncResetNext));
	vcdp->fullBit  (c+11,(vlTOPp->clock));
	vcdp->fullBit  (c+12,(vlTOPp->reset));
    }
}
