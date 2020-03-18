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
	vcdp->declBit  (c+24,"clock",-1);
	vcdp->declBit  (c+25,"reset",-1);
	vcdp->declBit  (c+24,"TblTester clock",-1);
	vcdp->declBit  (c+25,"TblTester reset",-1);
	vcdp->declBit  (c+24,"TblTester dut_clock",-1);
	vcdp->declBus  (c+1,"TblTester dut_io_wi",-1,3,0);
	vcdp->declBus  (c+2,"TblTester dut_io_ri",-1,3,0);
	vcdp->declBus  (c+3,"TblTester dut_io_d",-1,3,0);
	vcdp->declBus  (c+4,"TblTester dut_io_o",-1,3,0);
	vcdp->declBus  (c+6,"TblTester value",-1,2,0);
	// Tracing: TblTester _RAND_0 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/2020030621372811980065429952240361/TblTester.v:78
	vcdp->declBit  (c+7,"TblTester wrap",-1);
	// Tracing: TblTester _T_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/2020030621372811980065429952240361/TblTester.v:80
	// Tracing: TblTester _T_4 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/2020030621372811980065429952240361/TblTester.v:81
	// Tracing: TblTester _GEN_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/2020030621372811980065429952240361/TblTester.v:82
	// Tracing: TblTester _GEN_3 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/2020030621372811980065429952240361/TblTester.v:83
	// Tracing: TblTester _GEN_4 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/2020030621372811980065429952240361/TblTester.v:84
	// Tracing: TblTester _GEN_5 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/2020030621372811980065429952240361/TblTester.v:85
	// Tracing: TblTester _GEN_6 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/2020030621372811980065429952240361/TblTester.v:86
	// Tracing: TblTester _GEN_7 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/2020030621372811980065429952240361/TblTester.v:87
	// Tracing: TblTester _GEN_8 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/2020030621372811980065429952240361/TblTester.v:88
	// Tracing: TblTester _GEN_10 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/2020030621372811980065429952240361/TblTester.v:89
	// Tracing: TblTester _GEN_11 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/2020030621372811980065429952240361/TblTester.v:90
	// Tracing: TblTester _GEN_12 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/2020030621372811980065429952240361/TblTester.v:91
	// Tracing: TblTester _GEN_13 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/2020030621372811980065429952240361/TblTester.v:92
	// Tracing: TblTester _GEN_14 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/2020030621372811980065429952240361/TblTester.v:93
	// Tracing: TblTester _GEN_15 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/2020030621372811980065429952240361/TblTester.v:94
	// Tracing: TblTester _GEN_16 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/2020030621372811980065429952240361/TblTester.v:95
	// Tracing: TblTester _GEN_18 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/2020030621372811980065429952240361/TblTester.v:96
	// Tracing: TblTester _GEN_19 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/2020030621372811980065429952240361/TblTester.v:97
	// Tracing: TblTester _GEN_20 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/2020030621372811980065429952240361/TblTester.v:98
	// Tracing: TblTester _GEN_21 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/2020030621372811980065429952240361/TblTester.v:99
	// Tracing: TblTester _GEN_22 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/2020030621372811980065429952240361/TblTester.v:100
	// Tracing: TblTester _GEN_23 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/2020030621372811980065429952240361/TblTester.v:101
	// Tracing: TblTester _GEN_24 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/2020030621372811980065429952240361/TblTester.v:102
	// Tracing: TblTester _T_7 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/2020030621372811980065429952240361/TblTester.v:103
	// Tracing: TblTester _T_8 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/2020030621372811980065429952240361/TblTester.v:104
	// Tracing: TblTester _T_9 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/2020030621372811980065429952240361/TblTester.v:105
	// Tracing: TblTester _T_11 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/2020030621372811980065429952240361/TblTester.v:106
	// Tracing: TblTester _T_12 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/2020030621372811980065429952240361/TblTester.v:107
	// Tracing: TblTester _GEN_26 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/2020030621372811980065429952240361/TblTester.v:108
	// Tracing: TblTester _GEN_27 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/2020030621372811980065429952240361/TblTester.v:109
	// Tracing: TblTester _GEN_28 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/2020030621372811980065429952240361/TblTester.v:110
	// Tracing: TblTester _GEN_29 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/2020030621372811980065429952240361/TblTester.v:111
	// Tracing: TblTester _GEN_30 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/2020030621372811980065429952240361/TblTester.v:112
	// Tracing: TblTester _GEN_31 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/2020030621372811980065429952240361/TblTester.v:113
	// Tracing: TblTester _GEN_32 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/2020030621372811980065429952240361/TblTester.v:114
	// Tracing: TblTester _T_13 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/2020030621372811980065429952240361/TblTester.v:115
	// Tracing: TblTester _T_15 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/2020030621372811980065429952240361/TblTester.v:116
	// Tracing: TblTester _T_16 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/2020030621372811980065429952240361/TblTester.v:117
	// Tracing: TblTester _T_18 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/2020030621372811980065429952240361/TblTester.v:118
	// Tracing: TblTester _GEN_33 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/2020030621372811980065429952240361/TblTester.v:119
	// Tracing: TblTester _GEN_35 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/2020030621372811980065429952240361/TblTester.v:120
	// Tracing: TblTester _GEN_36 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/2020030621372811980065429952240361/TblTester.v:121
	vcdp->declBit  (c+24,"TblTester dut clock",-1);
	vcdp->declBus  (c+1,"TblTester dut io_wi",-1,3,0);
	vcdp->declBus  (c+2,"TblTester dut io_ri",-1,3,0);
	vcdp->declBus  (c+3,"TblTester dut io_d",-1,3,0);
	vcdp->declBus  (c+4,"TblTester dut io_o",-1,3,0);
	{int i; for (i=0; i<16; i++) {
		vcdp->declBus  (c+8+i*1,"TblTester dut m",(i+0),3,0);}}
	// Tracing: TblTester dut _RAND_0 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/2020030621372811980065429952240361/TblTester.v:9
	vcdp->declBus  (c+5,"TblTester dut m__T_data",-1,3,0);
	vcdp->declBus  (c+2,"TblTester dut m__T_addr",-1,3,0);
	vcdp->declBus  (c+3,"TblTester dut m__T_1_data",-1,3,0);
	vcdp->declBus  (c+1,"TblTester dut m__T_1_addr",-1,3,0);
	vcdp->declBit  (c+26,"TblTester dut m__T_1_mask",-1);
	vcdp->declBit  (c+26,"TblTester dut m__T_1_en",-1);
	// Tracing: TblTester dut _T_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/TblTester/2020030621372811980065429952240361/TblTester.v:16
    }
}

void VTblTester::traceFullThis__1(VTblTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTblTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+1,(vlTOPp->TblTester__DOT__dut_io_wi),4);
	vcdp->fullBus  (c+2,(vlTOPp->TblTester__DOT__dut_io_ri),4);
	vcdp->fullBus  (c+3,(vlTOPp->TblTester__DOT__dut_io_d),4);
	vcdp->fullBus  (c+4,(vlTOPp->TblTester__DOT__dut_io_o),4);
	vcdp->fullBus  (c+5,(vlTOPp->TblTester__DOT__dut__DOT__m
			     [vlTOPp->TblTester__DOT__dut_io_ri]),4);
	vcdp->fullBus  (c+6,(vlTOPp->TblTester__DOT__value),3);
	vcdp->fullBit  (c+7,((7U == (IData)(vlTOPp->TblTester__DOT__value))));
	vcdp->fullBus  (c+8,(vlTOPp->TblTester__DOT__dut__DOT__m[0]),4);
	vcdp->fullBus  (c+9,(vlTOPp->TblTester__DOT__dut__DOT__m[1]),4);
	vcdp->fullBus  (c+10,(vlTOPp->TblTester__DOT__dut__DOT__m[2]),4);
	vcdp->fullBus  (c+11,(vlTOPp->TblTester__DOT__dut__DOT__m[3]),4);
	vcdp->fullBus  (c+12,(vlTOPp->TblTester__DOT__dut__DOT__m[4]),4);
	vcdp->fullBus  (c+13,(vlTOPp->TblTester__DOT__dut__DOT__m[5]),4);
	vcdp->fullBus  (c+14,(vlTOPp->TblTester__DOT__dut__DOT__m[6]),4);
	vcdp->fullBus  (c+15,(vlTOPp->TblTester__DOT__dut__DOT__m[7]),4);
	vcdp->fullBus  (c+16,(vlTOPp->TblTester__DOT__dut__DOT__m[8]),4);
	vcdp->fullBus  (c+17,(vlTOPp->TblTester__DOT__dut__DOT__m[9]),4);
	vcdp->fullBus  (c+18,(vlTOPp->TblTester__DOT__dut__DOT__m[10]),4);
	vcdp->fullBus  (c+19,(vlTOPp->TblTester__DOT__dut__DOT__m[11]),4);
	vcdp->fullBus  (c+20,(vlTOPp->TblTester__DOT__dut__DOT__m[12]),4);
	vcdp->fullBus  (c+21,(vlTOPp->TblTester__DOT__dut__DOT__m[13]),4);
	vcdp->fullBus  (c+22,(vlTOPp->TblTester__DOT__dut__DOT__m[14]),4);
	vcdp->fullBus  (c+23,(vlTOPp->TblTester__DOT__dut__DOT__m[15]),4);
	vcdp->fullBit  (c+24,(vlTOPp->clock));
	vcdp->fullBit  (c+25,(vlTOPp->reset));
	vcdp->fullBit  (c+26,(1U));
    }
}
