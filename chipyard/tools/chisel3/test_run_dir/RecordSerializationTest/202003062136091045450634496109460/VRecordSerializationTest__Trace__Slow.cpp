// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VRecordSerializationTest__Syms.h"


//======================

void VRecordSerializationTest::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VRecordSerializationTest::traceInit, &VRecordSerializationTest::traceFull, &VRecordSerializationTest::traceChg, this);
}
void VRecordSerializationTest::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VRecordSerializationTest* t=(VRecordSerializationTest*)userthis;
    VRecordSerializationTest__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VRecordSerializationTest::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VRecordSerializationTest* t=(VRecordSerializationTest*)userthis;
    VRecordSerializationTest__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VRecordSerializationTest::traceInitThis(VRecordSerializationTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VRecordSerializationTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VRecordSerializationTest::traceFullThis(VRecordSerializationTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VRecordSerializationTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VRecordSerializationTest::traceInitThis__1(VRecordSerializationTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VRecordSerializationTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+1,"clock",-1);
	vcdp->declBit  (c+2,"reset",-1);
	vcdp->declBit  (c+1,"RecordSerializationTest clock",-1);
	vcdp->declBit  (c+2,"RecordSerializationTest reset",-1);
	// Tracing: RecordSerializationTest _T_20 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/RecordSerializationTest/202003062136091045450634496109460/RecordSerializationTest.v:5
    }
}

void VRecordSerializationTest::traceFullThis__1(VRecordSerializationTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VRecordSerializationTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->clock));
	vcdp->fullBit  (c+2,(vlTOPp->reset));
    }
}
