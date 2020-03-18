// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCastFromLitTester__Syms.h"


//======================

void VCastFromLitTester::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VCastFromLitTester::traceInit, &VCastFromLitTester::traceFull, &VCastFromLitTester::traceChg, this);
}
void VCastFromLitTester::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VCastFromLitTester* t=(VCastFromLitTester*)userthis;
    VCastFromLitTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VCastFromLitTester::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VCastFromLitTester* t=(VCastFromLitTester*)userthis;
    VCastFromLitTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VCastFromLitTester::traceInitThis(VCastFromLitTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCastFromLitTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VCastFromLitTester::traceFullThis(VCastFromLitTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCastFromLitTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VCastFromLitTester::traceInitThis__1(VCastFromLitTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCastFromLitTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+1,"clock",-1);
	vcdp->declBit  (c+2,"reset",-1);
	vcdp->declBit  (c+1,"CastFromLitTester clock",-1);
	vcdp->declBit  (c+2,"CastFromLitTester reset",-1);
	vcdp->declBus  (c+3,"CastFromLitTester CastFromLit_io_out",-1,6,0);
	vcdp->declBit  (c+4,"CastFromLitTester CastFromLit_io_valid",-1);
	vcdp->declBus  (c+5,"CastFromLitTester CastFromLit_1_io_out",-1,6,0);
	vcdp->declBit  (c+4,"CastFromLitTester CastFromLit_1_io_valid",-1);
	vcdp->declBus  (c+6,"CastFromLitTester CastFromLit_2_io_out",-1,6,0);
	vcdp->declBit  (c+4,"CastFromLitTester CastFromLit_2_io_valid",-1);
	vcdp->declBus  (c+7,"CastFromLitTester CastFromLit_3_io_out",-1,6,0);
	vcdp->declBit  (c+4,"CastFromLitTester CastFromLit_3_io_valid",-1);
	vcdp->declBus  (c+8,"CastFromLitTester CastFromLit_4_io_out",-1,6,0);
	vcdp->declBit  (c+4,"CastFromLitTester CastFromLit_4_io_valid",-1);
	// Tracing: CastFromLitTester _T_4 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastFromLitTester/202003062244305752313659698926430/CastFromLitTester.v:130
	// Tracing: CastFromLitTester _T_6 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastFromLitTester/202003062244305752313659698926430/CastFromLitTester.v:131
	// Tracing: CastFromLitTester _T_7 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastFromLitTester/202003062244305752313659698926430/CastFromLitTester.v:132
	// Tracing: CastFromLitTester _T_12 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastFromLitTester/202003062244305752313659698926430/CastFromLitTester.v:133
	// Tracing: CastFromLitTester _T_14 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastFromLitTester/202003062244305752313659698926430/CastFromLitTester.v:134
	// Tracing: CastFromLitTester _T_15 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastFromLitTester/202003062244305752313659698926430/CastFromLitTester.v:135
	// Tracing: CastFromLitTester _T_20 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastFromLitTester/202003062244305752313659698926430/CastFromLitTester.v:136
	// Tracing: CastFromLitTester _T_22 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastFromLitTester/202003062244305752313659698926430/CastFromLitTester.v:137
	// Tracing: CastFromLitTester _T_23 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastFromLitTester/202003062244305752313659698926430/CastFromLitTester.v:138
	// Tracing: CastFromLitTester _T_28 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastFromLitTester/202003062244305752313659698926430/CastFromLitTester.v:139
	// Tracing: CastFromLitTester _T_30 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastFromLitTester/202003062244305752313659698926430/CastFromLitTester.v:140
	// Tracing: CastFromLitTester _T_31 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastFromLitTester/202003062244305752313659698926430/CastFromLitTester.v:141
	// Tracing: CastFromLitTester _T_36 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastFromLitTester/202003062244305752313659698926430/CastFromLitTester.v:142
	// Tracing: CastFromLitTester _T_38 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastFromLitTester/202003062244305752313659698926430/CastFromLitTester.v:143
	// Tracing: CastFromLitTester _T_39 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastFromLitTester/202003062244305752313659698926430/CastFromLitTester.v:144
	// Tracing: CastFromLitTester _T_41 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastFromLitTester/202003062244305752313659698926430/CastFromLitTester.v:145
	vcdp->declBus  (c+3,"CastFromLitTester CastFromLit io_out",-1,6,0);
	vcdp->declBit  (c+4,"CastFromLitTester CastFromLit io_valid",-1);
	// Tracing: CastFromLitTester CastFromLit _T // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastFromLitTester/202003062244305752313659698926430/CastFromLitTester.v:5
	// Tracing: CastFromLitTester CastFromLit _T_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastFromLitTester/202003062244305752313659698926430/CastFromLitTester.v:6
	// Tracing: CastFromLitTester CastFromLit _T_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastFromLitTester/202003062244305752313659698926430/CastFromLitTester.v:7
	// Tracing: CastFromLitTester CastFromLit _T_3 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastFromLitTester/202003062244305752313659698926430/CastFromLitTester.v:8
	// Tracing: CastFromLitTester CastFromLit _T_4 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastFromLitTester/202003062244305752313659698926430/CastFromLitTester.v:9
	// Tracing: CastFromLitTester CastFromLit _T_5 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastFromLitTester/202003062244305752313659698926430/CastFromLitTester.v:10
	// Tracing: CastFromLitTester CastFromLit _T_6 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastFromLitTester/202003062244305752313659698926430/CastFromLitTester.v:11
	// Tracing: CastFromLitTester CastFromLit _T_7 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastFromLitTester/202003062244305752313659698926430/CastFromLitTester.v:12
	vcdp->declBus  (c+5,"CastFromLitTester CastFromLit_1 io_out",-1,6,0);
	vcdp->declBit  (c+4,"CastFromLitTester CastFromLit_1 io_valid",-1);
	// Tracing: CastFromLitTester CastFromLit_1 _T // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastFromLitTester/202003062244305752313659698926430/CastFromLitTester.v:28
	// Tracing: CastFromLitTester CastFromLit_1 _T_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastFromLitTester/202003062244305752313659698926430/CastFromLitTester.v:29
	// Tracing: CastFromLitTester CastFromLit_1 _T_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastFromLitTester/202003062244305752313659698926430/CastFromLitTester.v:30
	// Tracing: CastFromLitTester CastFromLit_1 _T_3 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastFromLitTester/202003062244305752313659698926430/CastFromLitTester.v:31
	// Tracing: CastFromLitTester CastFromLit_1 _T_4 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastFromLitTester/202003062244305752313659698926430/CastFromLitTester.v:32
	// Tracing: CastFromLitTester CastFromLit_1 _T_5 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastFromLitTester/202003062244305752313659698926430/CastFromLitTester.v:33
	// Tracing: CastFromLitTester CastFromLit_1 _T_6 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastFromLitTester/202003062244305752313659698926430/CastFromLitTester.v:34
	// Tracing: CastFromLitTester CastFromLit_1 _T_7 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastFromLitTester/202003062244305752313659698926430/CastFromLitTester.v:35
	vcdp->declBus  (c+6,"CastFromLitTester CastFromLit_2 io_out",-1,6,0);
	vcdp->declBit  (c+4,"CastFromLitTester CastFromLit_2 io_valid",-1);
	// Tracing: CastFromLitTester CastFromLit_2 _T // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastFromLitTester/202003062244305752313659698926430/CastFromLitTester.v:51
	// Tracing: CastFromLitTester CastFromLit_2 _T_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastFromLitTester/202003062244305752313659698926430/CastFromLitTester.v:52
	// Tracing: CastFromLitTester CastFromLit_2 _T_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastFromLitTester/202003062244305752313659698926430/CastFromLitTester.v:53
	// Tracing: CastFromLitTester CastFromLit_2 _T_3 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastFromLitTester/202003062244305752313659698926430/CastFromLitTester.v:54
	// Tracing: CastFromLitTester CastFromLit_2 _T_4 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastFromLitTester/202003062244305752313659698926430/CastFromLitTester.v:55
	// Tracing: CastFromLitTester CastFromLit_2 _T_5 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastFromLitTester/202003062244305752313659698926430/CastFromLitTester.v:56
	// Tracing: CastFromLitTester CastFromLit_2 _T_6 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastFromLitTester/202003062244305752313659698926430/CastFromLitTester.v:57
	// Tracing: CastFromLitTester CastFromLit_2 _T_7 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastFromLitTester/202003062244305752313659698926430/CastFromLitTester.v:58
	vcdp->declBus  (c+7,"CastFromLitTester CastFromLit_3 io_out",-1,6,0);
	vcdp->declBit  (c+4,"CastFromLitTester CastFromLit_3 io_valid",-1);
	// Tracing: CastFromLitTester CastFromLit_3 _T // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastFromLitTester/202003062244305752313659698926430/CastFromLitTester.v:74
	// Tracing: CastFromLitTester CastFromLit_3 _T_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastFromLitTester/202003062244305752313659698926430/CastFromLitTester.v:75
	// Tracing: CastFromLitTester CastFromLit_3 _T_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastFromLitTester/202003062244305752313659698926430/CastFromLitTester.v:76
	// Tracing: CastFromLitTester CastFromLit_3 _T_3 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastFromLitTester/202003062244305752313659698926430/CastFromLitTester.v:77
	// Tracing: CastFromLitTester CastFromLit_3 _T_4 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastFromLitTester/202003062244305752313659698926430/CastFromLitTester.v:78
	// Tracing: CastFromLitTester CastFromLit_3 _T_5 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastFromLitTester/202003062244305752313659698926430/CastFromLitTester.v:79
	// Tracing: CastFromLitTester CastFromLit_3 _T_6 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastFromLitTester/202003062244305752313659698926430/CastFromLitTester.v:80
	// Tracing: CastFromLitTester CastFromLit_3 _T_7 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastFromLitTester/202003062244305752313659698926430/CastFromLitTester.v:81
	vcdp->declBus  (c+8,"CastFromLitTester CastFromLit_4 io_out",-1,6,0);
	vcdp->declBit  (c+4,"CastFromLitTester CastFromLit_4 io_valid",-1);
	// Tracing: CastFromLitTester CastFromLit_4 _T // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastFromLitTester/202003062244305752313659698926430/CastFromLitTester.v:97
	// Tracing: CastFromLitTester CastFromLit_4 _T_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastFromLitTester/202003062244305752313659698926430/CastFromLitTester.v:98
	// Tracing: CastFromLitTester CastFromLit_4 _T_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastFromLitTester/202003062244305752313659698926430/CastFromLitTester.v:99
	// Tracing: CastFromLitTester CastFromLit_4 _T_3 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastFromLitTester/202003062244305752313659698926430/CastFromLitTester.v:100
	// Tracing: CastFromLitTester CastFromLit_4 _T_4 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastFromLitTester/202003062244305752313659698926430/CastFromLitTester.v:101
	// Tracing: CastFromLitTester CastFromLit_4 _T_5 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastFromLitTester/202003062244305752313659698926430/CastFromLitTester.v:102
	// Tracing: CastFromLitTester CastFromLit_4 _T_6 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastFromLitTester/202003062244305752313659698926430/CastFromLitTester.v:103
	// Tracing: CastFromLitTester CastFromLit_4 _T_7 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/CastFromLitTester/202003062244305752313659698926430/CastFromLitTester.v:104
    }
}

void VCastFromLitTester::traceFullThis__1(VCastFromLitTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCastFromLitTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->clock));
	vcdp->fullBit  (c+2,(vlTOPp->reset));
	vcdp->fullBus  (c+3,(0U),7);
	vcdp->fullBit  (c+4,(1U));
	vcdp->fullBus  (c+5,(1U),7);
	vcdp->fullBus  (c+6,(2U),7);
	vcdp->fullBus  (c+7,(0x64U),7);
	vcdp->fullBus  (c+8,(0x65U),7);
    }
}
