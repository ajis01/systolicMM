// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VComplexAssignTester__Syms.h"


//======================

void VComplexAssignTester::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VComplexAssignTester::traceInit, &VComplexAssignTester::traceFull, &VComplexAssignTester::traceChg, this);
}
void VComplexAssignTester::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VComplexAssignTester* t=(VComplexAssignTester*)userthis;
    VComplexAssignTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VComplexAssignTester::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VComplexAssignTester* t=(VComplexAssignTester*)userthis;
    VComplexAssignTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VComplexAssignTester::traceInitThis(VComplexAssignTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VComplexAssignTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VComplexAssignTester::traceFullThis(VComplexAssignTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VComplexAssignTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VComplexAssignTester::traceInitThis__1(VComplexAssignTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VComplexAssignTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+6,"clock",-1);
	vcdp->declBit  (c+7,"reset",-1);
	vcdp->declBit  (c+6,"ComplexAssignTester clock",-1);
	vcdp->declBit  (c+7,"ComplexAssignTester reset",-1);
	vcdp->declBit  (c+1,"ComplexAssignTester dut_io_e",-1);
	vcdp->declBus  (c+8,"ComplexAssignTester dut_io_in_re",-1,31,0);
	vcdp->declBus  (c+9,"ComplexAssignTester dut_io_in_im",-1,31,0);
	vcdp->declBus  (c+2,"ComplexAssignTester dut_io_out_re",-1,31,0);
	vcdp->declBus  (c+3,"ComplexAssignTester dut_io_out_im",-1,31,0);
	vcdp->declBit  (c+1,"ComplexAssignTester value",-1);
	// Tracing: ComplexAssignTester _RAND_0 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ComplexAssignTester/2020030621370617909771229573179027/ComplexAssignTester.v:21
	// Tracing: ComplexAssignTester _T_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ComplexAssignTester/2020030621370617909771229573179027/ComplexAssignTester.v:22
	// Tracing: ComplexAssignTester _T_4 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ComplexAssignTester/2020030621370617909771229573179027/ComplexAssignTester.v:23
	vcdp->declBit  (c+4,"ComplexAssignTester re_correct",-1);
	// Tracing: ComplexAssignTester _T_5 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ComplexAssignTester/2020030621370617909771229573179027/ComplexAssignTester.v:25
	vcdp->declBit  (c+5,"ComplexAssignTester im_correct",-1);
	// Tracing: ComplexAssignTester _T_6 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ComplexAssignTester/2020030621370617909771229573179027/ComplexAssignTester.v:27
	// Tracing: ComplexAssignTester _T_8 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ComplexAssignTester/2020030621370617909771229573179027/ComplexAssignTester.v:28
	// Tracing: ComplexAssignTester _T_9 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ComplexAssignTester/2020030621370617909771229573179027/ComplexAssignTester.v:29
	// Tracing: ComplexAssignTester _T_11 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ComplexAssignTester/2020030621370617909771229573179027/ComplexAssignTester.v:30
	vcdp->declBit  (c+1,"ComplexAssignTester dut io_e",-1);
	vcdp->declBus  (c+8,"ComplexAssignTester dut io_in_re",-1,31,0);
	vcdp->declBus  (c+9,"ComplexAssignTester dut io_in_im",-1,31,0);
	vcdp->declBus  (c+2,"ComplexAssignTester dut io_out_re",-1,31,0);
	vcdp->declBus  (c+3,"ComplexAssignTester dut io_out_im",-1,31,0);
    }
}

void VComplexAssignTester::traceFullThis__1(VComplexAssignTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VComplexAssignTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->ComplexAssignTester__DOT__value));
	vcdp->fullBus  (c+2,(((IData)(vlTOPp->ComplexAssignTester__DOT__value)
			       ? 0x365bd8aaU : 0U)),32);
	vcdp->fullBus  (c+3,(((IData)(vlTOPp->ComplexAssignTester__DOT__value)
			       ? 0x3194cd7bU : 0U)),32);
	vcdp->fullBit  (c+4,((((IData)(vlTOPp->ComplexAssignTester__DOT__value)
			        ? 0x365bd8aaU : 0U) 
			      == ((IData)(vlTOPp->ComplexAssignTester__DOT__value)
				   ? 0x365bd8aaU : 0U))));
	vcdp->fullBit  (c+5,((((IData)(vlTOPp->ComplexAssignTester__DOT__value)
			        ? 0x3194cd7bU : 0U) 
			      == ((IData)(vlTOPp->ComplexAssignTester__DOT__value)
				   ? 0x3194cd7bU : 0U))));
	vcdp->fullBit  (c+6,(vlTOPp->clock));
	vcdp->fullBit  (c+7,(vlTOPp->reset));
	vcdp->fullBus  (c+8,(0x365bd8aaU),32);
	vcdp->fullBus  (c+9,(0x3194cd7bU),32);
    }
}
