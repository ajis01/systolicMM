// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VDecoderTester__Syms.h"


//======================

void VDecoderTester::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VDecoderTester::traceInit, &VDecoderTester::traceFull, &VDecoderTester::traceChg, this);
}
void VDecoderTester::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VDecoderTester* t=(VDecoderTester*)userthis;
    VDecoderTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VDecoderTester::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VDecoderTester* t=(VDecoderTester*)userthis;
    VDecoderTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VDecoderTester::traceInitThis(VDecoderTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDecoderTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VDecoderTester::traceFullThis(VDecoderTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDecoderTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VDecoderTester::traceInitThis__1(VDecoderTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDecoderTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+5,"clock",-1);
	vcdp->declBit  (c+6,"reset",-1);
	vcdp->declBit  (c+5,"DecoderTester clock",-1);
	vcdp->declBit  (c+6,"DecoderTester reset",-1);
	vcdp->declBus  (c+1,"DecoderTester dut_io_inst",-1,31,0);
	vcdp->declBit  (c+2,"DecoderTester dut_io_matched",-1);
	vcdp->declBus  (c+3,"DecoderTester value",-1,1,0);
	// Tracing: DecoderTester _RAND_0 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/DecoderTester/2020030621374917645328628277226096/DecoderTester.v:34
	vcdp->declBit  (c+4,"DecoderTester wrap",-1);
	// Tracing: DecoderTester _T_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/DecoderTester/2020030621374917645328628277226096/DecoderTester.v:36
	// Tracing: DecoderTester _GEN_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/DecoderTester/2020030621374917645328628277226096/DecoderTester.v:37
	// Tracing: DecoderTester _GEN_3 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/DecoderTester/2020030621374917645328628277226096/DecoderTester.v:38
	// Tracing: DecoderTester _T_4 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/DecoderTester/2020030621374917645328628277226096/DecoderTester.v:39
	// Tracing: DecoderTester _T_5 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/DecoderTester/2020030621374917645328628277226096/DecoderTester.v:40
	// Tracing: DecoderTester _T_7 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/DecoderTester/2020030621374917645328628277226096/DecoderTester.v:41
	// Tracing: DecoderTester _T_8 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/DecoderTester/2020030621374917645328628277226096/DecoderTester.v:42
	// Tracing: DecoderTester _T_10 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/DecoderTester/2020030621374917645328628277226096/DecoderTester.v:43
	vcdp->declBus  (c+1,"DecoderTester dut io_inst",-1,31,0);
	vcdp->declBit  (c+2,"DecoderTester dut io_matched",-1);
	// Tracing: DecoderTester dut _T // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/DecoderTester/2020030621374917645328628277226096/DecoderTester.v:5
	// Tracing: DecoderTester dut _T_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/DecoderTester/2020030621374917645328628277226096/DecoderTester.v:6
	// Tracing: DecoderTester dut _T_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/DecoderTester/2020030621374917645328628277226096/DecoderTester.v:7
	// Tracing: DecoderTester dut _T_3 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/DecoderTester/2020030621374917645328628277226096/DecoderTester.v:8
	// Tracing: DecoderTester dut _T_4 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/DecoderTester/2020030621374917645328628277226096/DecoderTester.v:9
	// Tracing: DecoderTester dut _T_5 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/DecoderTester/2020030621374917645328628277226096/DecoderTester.v:10
	// Tracing: DecoderTester dut _T_6 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/DecoderTester/2020030621374917645328628277226096/DecoderTester.v:11
	// Tracing: DecoderTester dut _T_7 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/DecoderTester/2020030621374917645328628277226096/DecoderTester.v:12
	// Tracing: DecoderTester dut _T_9 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/DecoderTester/2020030621374917645328628277226096/DecoderTester.v:13
	// Tracing: DecoderTester dut _T_10 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/DecoderTester/2020030621374917645328628277226096/DecoderTester.v:14
    }
}

void VDecoderTester::traceFullThis__1(VDecoderTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDecoderTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+1,(vlTOPp->DecoderTester__DOT__dut_io_inst),32);
	vcdp->fullBit  (c+2,(((((1U == (1U & vlTOPp->DecoderTester__DOT__dut_io_inst)) 
				| (0x88402026U == (0xcd55af7eU 
						   & vlTOPp->DecoderTester__DOT__dut_io_inst))) 
			       | (0x1ca1fa83U == (0x1ca1fa83U 
						  & vlTOPp->DecoderTester__DOT__dut_io_inst))) 
			      | (0x502017U == (0x54a5b7U 
					       & vlTOPp->DecoderTester__DOT__dut_io_inst)))));
	vcdp->fullBus  (c+3,(vlTOPp->DecoderTester__DOT__value),2);
	vcdp->fullBit  (c+4,((3U == (IData)(vlTOPp->DecoderTester__DOT__value))));
	vcdp->fullBit  (c+5,(vlTOPp->clock));
	vcdp->fullBit  (c+6,(vlTOPp->reset));
    }
}
