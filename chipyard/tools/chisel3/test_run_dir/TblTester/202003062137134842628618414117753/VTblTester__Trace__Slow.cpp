// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTblTester__Syms.h"


//======================

void VTblTester::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VTblTester::traceInit, &VTblTester::traceFull, &VTblTester::traceChg, this);
}
void VTblTester::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VTblTester* t=(VTblTester*)userthis;
    VTblTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VTblTester::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VTblTester* t=(VTblTester*)userthis;
    VTblTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VTblTester::traceInitThis(VTblTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTblTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VTblTester::traceFullThis(VTblTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTblTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VTblTester::traceInitThis__1(VTblTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTblTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+10,"clock",-1);
	vcdp->declBit  (c+11,"reset",-1);
	vcdp->declBit  (c+10,"TblTester clock",-1);
	vcdp->declBit  (c+11,"TblTester reset",-1);
	vcdp->declBit  (c+10,"TblTester dut_clock",-1);
	vcdp->declBit  (c+1,"TblTester dut_io_wi",-1);
	vcdp->declBit  (c+2,"TblTester dut_io_ri",-1);
	vcdp->declBit  (c+3,"TblTester dut_io_d",-1);
	vcdp->declBit  (c+4,"TblTester dut_io_o",-1);
	vcdp->declBus  (c+6,"TblTester value",-1,2,0);
	// Tracing: TblTester _RAND_0 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/202003062137134842628618414117753/TblTester.v:78
	vcdp->declBit  (c+7,"TblTester wrap",-1);
	// Tracing: TblTester _T_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/202003062137134842628618414117753/TblTester.v:80
	// Tracing: TblTester _T_4 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/202003062137134842628618414117753/TblTester.v:81
	// Tracing: TblTester _GEN_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/202003062137134842628618414117753/TblTester.v:82
	// Tracing: TblTester _GEN_33 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/202003062137134842628618414117753/TblTester.v:83
	// Tracing: TblTester _GEN_3 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/202003062137134842628618414117753/TblTester.v:84
	// Tracing: TblTester _GEN_4 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/202003062137134842628618414117753/TblTester.v:85
	// Tracing: TblTester _GEN_34 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/202003062137134842628618414117753/TblTester.v:86
	// Tracing: TblTester _GEN_5 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/202003062137134842628618414117753/TblTester.v:87
	// Tracing: TblTester _GEN_35 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/202003062137134842628618414117753/TblTester.v:88
	// Tracing: TblTester _GEN_6 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/202003062137134842628618414117753/TblTester.v:89
	// Tracing: TblTester _GEN_36 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/202003062137134842628618414117753/TblTester.v:90
	// Tracing: TblTester _GEN_7 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/202003062137134842628618414117753/TblTester.v:91
	// Tracing: TblTester _GEN_37 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/202003062137134842628618414117753/TblTester.v:92
	// Tracing: TblTester _GEN_8 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/202003062137134842628618414117753/TblTester.v:93
	// Tracing: TblTester _GEN_10 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/202003062137134842628618414117753/TblTester.v:94
	// Tracing: TblTester _GEN_38 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/202003062137134842628618414117753/TblTester.v:95
	// Tracing: TblTester _GEN_11 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/202003062137134842628618414117753/TblTester.v:96
	// Tracing: TblTester _GEN_12 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/202003062137134842628618414117753/TblTester.v:97
	// Tracing: TblTester _GEN_39 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/202003062137134842628618414117753/TblTester.v:98
	// Tracing: TblTester _GEN_13 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/202003062137134842628618414117753/TblTester.v:99
	// Tracing: TblTester _GEN_40 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/202003062137134842628618414117753/TblTester.v:100
	// Tracing: TblTester _GEN_14 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/202003062137134842628618414117753/TblTester.v:101
	// Tracing: TblTester _GEN_41 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/202003062137134842628618414117753/TblTester.v:102
	// Tracing: TblTester _GEN_15 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/202003062137134842628618414117753/TblTester.v:103
	// Tracing: TblTester _GEN_42 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/202003062137134842628618414117753/TblTester.v:104
	// Tracing: TblTester _GEN_16 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/202003062137134842628618414117753/TblTester.v:105
	// Tracing: TblTester _GEN_19 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/202003062137134842628618414117753/TblTester.v:106
	// Tracing: TblTester _GEN_43 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/202003062137134842628618414117753/TblTester.v:107
	// Tracing: TblTester _GEN_20 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/202003062137134842628618414117753/TblTester.v:108
	// Tracing: TblTester _GEN_21 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/202003062137134842628618414117753/TblTester.v:109
	// Tracing: TblTester _GEN_22 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/202003062137134842628618414117753/TblTester.v:110
	// Tracing: TblTester _GEN_23 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/202003062137134842628618414117753/TblTester.v:111
	// Tracing: TblTester _GEN_24 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/202003062137134842628618414117753/TblTester.v:112
	// Tracing: TblTester _T_7 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/202003062137134842628618414117753/TblTester.v:113
	// Tracing: TblTester _T_8 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/202003062137134842628618414117753/TblTester.v:114
	// Tracing: TblTester _T_9 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/202003062137134842628618414117753/TblTester.v:115
	// Tracing: TblTester _T_11 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/202003062137134842628618414117753/TblTester.v:116
	// Tracing: TblTester _T_12 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/202003062137134842628618414117753/TblTester.v:117
	// Tracing: TblTester _GEN_27 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/202003062137134842628618414117753/TblTester.v:118
	// Tracing: TblTester _GEN_47 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/202003062137134842628618414117753/TblTester.v:119
	// Tracing: TblTester _GEN_28 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/202003062137134842628618414117753/TblTester.v:120
	// Tracing: TblTester _GEN_29 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/202003062137134842628618414117753/TblTester.v:121
	// Tracing: TblTester _GEN_30 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/202003062137134842628618414117753/TblTester.v:122
	// Tracing: TblTester _GEN_31 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/202003062137134842628618414117753/TblTester.v:123
	// Tracing: TblTester _GEN_32 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/202003062137134842628618414117753/TblTester.v:124
	// Tracing: TblTester _T_13 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/202003062137134842628618414117753/TblTester.v:125
	// Tracing: TblTester _T_15 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/202003062137134842628618414117753/TblTester.v:126
	// Tracing: TblTester _T_16 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/202003062137134842628618414117753/TblTester.v:127
	// Tracing: TblTester _T_18 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/202003062137134842628618414117753/TblTester.v:128
	// Tracing: TblTester _GEN_54 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/202003062137134842628618414117753/TblTester.v:129
	// Tracing: TblTester _GEN_56 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/202003062137134842628618414117753/TblTester.v:130
	// Tracing: TblTester _GEN_57 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/202003062137134842628618414117753/TblTester.v:131
	vcdp->declBit  (c+10,"TblTester dut clock",-1);
	vcdp->declBit  (c+1,"TblTester dut io_wi",-1);
	vcdp->declBit  (c+2,"TblTester dut io_ri",-1);
	vcdp->declBit  (c+3,"TblTester dut io_d",-1);
	vcdp->declBit  (c+4,"TblTester dut io_o",-1);
	{int i; for (i=0; i<2; i++) {
		vcdp->declBit  (c+8+i*1,"TblTester dut m",(i+0));}}
	// Tracing: TblTester dut _RAND_0 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/202003062137134842628618414117753/TblTester.v:9
	vcdp->declBit  (c+5,"TblTester dut m__T_data",-1);
	vcdp->declBit  (c+2,"TblTester dut m__T_addr",-1);
	vcdp->declBit  (c+3,"TblTester dut m__T_1_data",-1);
	vcdp->declBit  (c+1,"TblTester dut m__T_1_addr",-1);
	vcdp->declBit  (c+12,"TblTester dut m__T_1_mask",-1);
	vcdp->declBit  (c+12,"TblTester dut m__T_1_en",-1);
	// Tracing: TblTester dut _T_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/202003062137134842628618414117753/TblTester.v:16
    }
}

void VTblTester::traceFullThis__1(VTblTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTblTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->TblTester__DOT__dut_io_wi));
	vcdp->fullBit  (c+2,(vlTOPp->TblTester__DOT__dut_io_ri));
	vcdp->fullBit  (c+3,(vlTOPp->TblTester__DOT__dut_io_d));
	vcdp->fullBit  (c+4,(vlTOPp->TblTester__DOT__dut_io_o));
	vcdp->fullBit  (c+5,(vlTOPp->TblTester__DOT__dut__DOT__m
			     [vlTOPp->TblTester__DOT__dut_io_ri]));
	vcdp->fullBus  (c+6,(vlTOPp->TblTester__DOT__value),3);
	vcdp->fullBit  (c+7,((7U == (IData)(vlTOPp->TblTester__DOT__value))));
	vcdp->fullBit  (c+8,(vlTOPp->TblTester__DOT__dut__DOT__m[0]));
	vcdp->fullBit  (c+9,(vlTOPp->TblTester__DOT__dut__DOT__m[1]));
	vcdp->fullBit  (c+10,(vlTOPp->clock));
	vcdp->fullBit  (c+11,(vlTOPp->reset));
	vcdp->fullBit  (c+12,(1U));
    }
}
