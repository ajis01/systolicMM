// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VEnumOpsTester__Syms.h"


//======================

void VEnumOpsTester::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VEnumOpsTester::traceInit, &VEnumOpsTester::traceFull, &VEnumOpsTester::traceChg, this);
}
void VEnumOpsTester::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VEnumOpsTester* t=(VEnumOpsTester*)userthis;
    VEnumOpsTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VEnumOpsTester::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VEnumOpsTester* t=(VEnumOpsTester*)userthis;
    VEnumOpsTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VEnumOpsTester::traceInitThis(VEnumOpsTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEnumOpsTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VEnumOpsTester::traceFullThis(VEnumOpsTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEnumOpsTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VEnumOpsTester::traceInitThis__1(VEnumOpsTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEnumOpsTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+1,"clock",-1);
	vcdp->declBit  (c+2,"reset",-1);
	vcdp->declBit  (c+1,"EnumOpsTester clock",-1);
	vcdp->declBit  (c+2,"EnumOpsTester reset",-1);
	vcdp->declBus  (c+3,"EnumOpsTester EnumOps_io_x",-1,6,0);
	vcdp->declBus  (c+3,"EnumOpsTester EnumOps_io_y",-1,6,0);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_io_lt",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_io_le",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_io_gt",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_io_ge",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_io_eq",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_io_ne",-1);
	vcdp->declBus  (c+3,"EnumOpsTester EnumOps_1_io_x",-1,6,0);
	vcdp->declBus  (c+6,"EnumOpsTester EnumOps_1_io_y",-1,6,0);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_1_io_lt",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_1_io_le",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_1_io_gt",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_1_io_ge",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_1_io_eq",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_1_io_ne",-1);
	vcdp->declBus  (c+3,"EnumOpsTester EnumOps_2_io_x",-1,6,0);
	vcdp->declBus  (c+7,"EnumOpsTester EnumOps_2_io_y",-1,6,0);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_2_io_lt",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_2_io_le",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_2_io_gt",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_2_io_ge",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_2_io_eq",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_2_io_ne",-1);
	vcdp->declBus  (c+3,"EnumOpsTester EnumOps_3_io_x",-1,6,0);
	vcdp->declBus  (c+8,"EnumOpsTester EnumOps_3_io_y",-1,6,0);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_3_io_lt",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_3_io_le",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_3_io_gt",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_3_io_ge",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_3_io_eq",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_3_io_ne",-1);
	vcdp->declBus  (c+3,"EnumOpsTester EnumOps_4_io_x",-1,6,0);
	vcdp->declBus  (c+9,"EnumOpsTester EnumOps_4_io_y",-1,6,0);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_4_io_lt",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_4_io_le",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_4_io_gt",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_4_io_ge",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_4_io_eq",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_4_io_ne",-1);
	vcdp->declBus  (c+6,"EnumOpsTester EnumOps_5_io_x",-1,6,0);
	vcdp->declBus  (c+3,"EnumOpsTester EnumOps_5_io_y",-1,6,0);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_5_io_lt",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_5_io_le",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_5_io_gt",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_5_io_ge",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_5_io_eq",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_5_io_ne",-1);
	vcdp->declBus  (c+6,"EnumOpsTester EnumOps_6_io_x",-1,6,0);
	vcdp->declBus  (c+6,"EnumOpsTester EnumOps_6_io_y",-1,6,0);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_6_io_lt",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_6_io_le",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_6_io_gt",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_6_io_ge",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_6_io_eq",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_6_io_ne",-1);
	vcdp->declBus  (c+6,"EnumOpsTester EnumOps_7_io_x",-1,6,0);
	vcdp->declBus  (c+7,"EnumOpsTester EnumOps_7_io_y",-1,6,0);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_7_io_lt",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_7_io_le",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_7_io_gt",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_7_io_ge",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_7_io_eq",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_7_io_ne",-1);
	vcdp->declBus  (c+6,"EnumOpsTester EnumOps_8_io_x",-1,6,0);
	vcdp->declBus  (c+8,"EnumOpsTester EnumOps_8_io_y",-1,6,0);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_8_io_lt",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_8_io_le",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_8_io_gt",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_8_io_ge",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_8_io_eq",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_8_io_ne",-1);
	vcdp->declBus  (c+6,"EnumOpsTester EnumOps_9_io_x",-1,6,0);
	vcdp->declBus  (c+9,"EnumOpsTester EnumOps_9_io_y",-1,6,0);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_9_io_lt",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_9_io_le",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_9_io_gt",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_9_io_ge",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_9_io_eq",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_9_io_ne",-1);
	vcdp->declBus  (c+7,"EnumOpsTester EnumOps_10_io_x",-1,6,0);
	vcdp->declBus  (c+3,"EnumOpsTester EnumOps_10_io_y",-1,6,0);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_10_io_lt",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_10_io_le",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_10_io_gt",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_10_io_ge",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_10_io_eq",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_10_io_ne",-1);
	vcdp->declBus  (c+7,"EnumOpsTester EnumOps_11_io_x",-1,6,0);
	vcdp->declBus  (c+6,"EnumOpsTester EnumOps_11_io_y",-1,6,0);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_11_io_lt",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_11_io_le",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_11_io_gt",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_11_io_ge",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_11_io_eq",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_11_io_ne",-1);
	vcdp->declBus  (c+7,"EnumOpsTester EnumOps_12_io_x",-1,6,0);
	vcdp->declBus  (c+7,"EnumOpsTester EnumOps_12_io_y",-1,6,0);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_12_io_lt",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_12_io_le",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_12_io_gt",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_12_io_ge",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_12_io_eq",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_12_io_ne",-1);
	vcdp->declBus  (c+7,"EnumOpsTester EnumOps_13_io_x",-1,6,0);
	vcdp->declBus  (c+8,"EnumOpsTester EnumOps_13_io_y",-1,6,0);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_13_io_lt",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_13_io_le",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_13_io_gt",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_13_io_ge",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_13_io_eq",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_13_io_ne",-1);
	vcdp->declBus  (c+7,"EnumOpsTester EnumOps_14_io_x",-1,6,0);
	vcdp->declBus  (c+9,"EnumOpsTester EnumOps_14_io_y",-1,6,0);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_14_io_lt",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_14_io_le",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_14_io_gt",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_14_io_ge",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_14_io_eq",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_14_io_ne",-1);
	vcdp->declBus  (c+8,"EnumOpsTester EnumOps_15_io_x",-1,6,0);
	vcdp->declBus  (c+3,"EnumOpsTester EnumOps_15_io_y",-1,6,0);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_15_io_lt",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_15_io_le",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_15_io_gt",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_15_io_ge",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_15_io_eq",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_15_io_ne",-1);
	vcdp->declBus  (c+8,"EnumOpsTester EnumOps_16_io_x",-1,6,0);
	vcdp->declBus  (c+6,"EnumOpsTester EnumOps_16_io_y",-1,6,0);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_16_io_lt",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_16_io_le",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_16_io_gt",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_16_io_ge",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_16_io_eq",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_16_io_ne",-1);
	vcdp->declBus  (c+8,"EnumOpsTester EnumOps_17_io_x",-1,6,0);
	vcdp->declBus  (c+7,"EnumOpsTester EnumOps_17_io_y",-1,6,0);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_17_io_lt",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_17_io_le",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_17_io_gt",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_17_io_ge",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_17_io_eq",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_17_io_ne",-1);
	vcdp->declBus  (c+8,"EnumOpsTester EnumOps_18_io_x",-1,6,0);
	vcdp->declBus  (c+8,"EnumOpsTester EnumOps_18_io_y",-1,6,0);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_18_io_lt",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_18_io_le",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_18_io_gt",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_18_io_ge",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_18_io_eq",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_18_io_ne",-1);
	vcdp->declBus  (c+8,"EnumOpsTester EnumOps_19_io_x",-1,6,0);
	vcdp->declBus  (c+9,"EnumOpsTester EnumOps_19_io_y",-1,6,0);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_19_io_lt",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_19_io_le",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_19_io_gt",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_19_io_ge",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_19_io_eq",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_19_io_ne",-1);
	vcdp->declBus  (c+9,"EnumOpsTester EnumOps_20_io_x",-1,6,0);
	vcdp->declBus  (c+3,"EnumOpsTester EnumOps_20_io_y",-1,6,0);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_20_io_lt",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_20_io_le",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_20_io_gt",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_20_io_ge",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_20_io_eq",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_20_io_ne",-1);
	vcdp->declBus  (c+9,"EnumOpsTester EnumOps_21_io_x",-1,6,0);
	vcdp->declBus  (c+6,"EnumOpsTester EnumOps_21_io_y",-1,6,0);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_21_io_lt",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_21_io_le",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_21_io_gt",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_21_io_ge",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_21_io_eq",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_21_io_ne",-1);
	vcdp->declBus  (c+9,"EnumOpsTester EnumOps_22_io_x",-1,6,0);
	vcdp->declBus  (c+7,"EnumOpsTester EnumOps_22_io_y",-1,6,0);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_22_io_lt",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_22_io_le",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_22_io_gt",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_22_io_ge",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_22_io_eq",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_22_io_ne",-1);
	vcdp->declBus  (c+9,"EnumOpsTester EnumOps_23_io_x",-1,6,0);
	vcdp->declBus  (c+8,"EnumOpsTester EnumOps_23_io_y",-1,6,0);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_23_io_lt",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_23_io_le",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_23_io_gt",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_23_io_ge",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_23_io_eq",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_23_io_ne",-1);
	vcdp->declBus  (c+9,"EnumOpsTester EnumOps_24_io_x",-1,6,0);
	vcdp->declBus  (c+9,"EnumOpsTester EnumOps_24_io_y",-1,6,0);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_24_io_lt",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_24_io_le",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_24_io_gt",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_24_io_ge",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_24_io_eq",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_24_io_ne",-1);
	// Tracing: EnumOpsTester _T_3 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:222
	// Tracing: EnumOpsTester _T_5 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:223
	// Tracing: EnumOpsTester _T_6 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:224
	// Tracing: EnumOpsTester _T_10 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:225
	// Tracing: EnumOpsTester _T_12 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:226
	// Tracing: EnumOpsTester _T_13 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:227
	// Tracing: EnumOpsTester _T_17 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:228
	// Tracing: EnumOpsTester _T_19 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:229
	// Tracing: EnumOpsTester _T_20 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:230
	// Tracing: EnumOpsTester _T_24 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:231
	// Tracing: EnumOpsTester _T_26 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:232
	// Tracing: EnumOpsTester _T_27 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:233
	// Tracing: EnumOpsTester _T_31 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:234
	// Tracing: EnumOpsTester _T_33 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:235
	// Tracing: EnumOpsTester _T_34 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:236
	// Tracing: EnumOpsTester _T_38 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:237
	// Tracing: EnumOpsTester _T_40 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:238
	// Tracing: EnumOpsTester _T_41 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:239
	// Tracing: EnumOpsTester _T_45 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:240
	// Tracing: EnumOpsTester _T_47 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:241
	// Tracing: EnumOpsTester _T_48 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:242
	// Tracing: EnumOpsTester _T_52 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:243
	// Tracing: EnumOpsTester _T_54 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:244
	// Tracing: EnumOpsTester _T_55 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:245
	// Tracing: EnumOpsTester _T_59 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:246
	// Tracing: EnumOpsTester _T_61 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:247
	// Tracing: EnumOpsTester _T_62 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:248
	// Tracing: EnumOpsTester _T_66 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:249
	// Tracing: EnumOpsTester _T_68 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:250
	// Tracing: EnumOpsTester _T_69 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:251
	// Tracing: EnumOpsTester _T_73 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:252
	// Tracing: EnumOpsTester _T_75 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:253
	// Tracing: EnumOpsTester _T_76 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:254
	// Tracing: EnumOpsTester _T_80 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:255
	// Tracing: EnumOpsTester _T_82 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:256
	// Tracing: EnumOpsTester _T_83 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:257
	// Tracing: EnumOpsTester _T_87 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:258
	// Tracing: EnumOpsTester _T_89 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:259
	// Tracing: EnumOpsTester _T_90 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:260
	// Tracing: EnumOpsTester _T_94 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:261
	// Tracing: EnumOpsTester _T_96 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:262
	// Tracing: EnumOpsTester _T_97 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:263
	// Tracing: EnumOpsTester _T_101 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:264
	// Tracing: EnumOpsTester _T_103 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:265
	// Tracing: EnumOpsTester _T_104 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:266
	// Tracing: EnumOpsTester _T_108 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:267
	// Tracing: EnumOpsTester _T_110 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:268
	// Tracing: EnumOpsTester _T_111 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:269
	// Tracing: EnumOpsTester _T_115 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:270
	// Tracing: EnumOpsTester _T_117 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:271
	// Tracing: EnumOpsTester _T_118 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:272
	// Tracing: EnumOpsTester _T_122 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:273
	// Tracing: EnumOpsTester _T_124 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:274
	// Tracing: EnumOpsTester _T_125 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:275
	// Tracing: EnumOpsTester _T_129 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:276
	// Tracing: EnumOpsTester _T_131 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:277
	// Tracing: EnumOpsTester _T_132 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:278
	// Tracing: EnumOpsTester _T_136 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:279
	// Tracing: EnumOpsTester _T_138 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:280
	// Tracing: EnumOpsTester _T_139 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:281
	// Tracing: EnumOpsTester _T_143 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:282
	// Tracing: EnumOpsTester _T_145 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:283
	// Tracing: EnumOpsTester _T_146 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:284
	// Tracing: EnumOpsTester _T_150 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:285
	// Tracing: EnumOpsTester _T_152 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:286
	// Tracing: EnumOpsTester _T_153 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:287
	// Tracing: EnumOpsTester _T_157 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:288
	// Tracing: EnumOpsTester _T_159 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:289
	// Tracing: EnumOpsTester _T_160 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:290
	// Tracing: EnumOpsTester _T_164 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:291
	// Tracing: EnumOpsTester _T_166 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:292
	// Tracing: EnumOpsTester _T_167 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:293
	// Tracing: EnumOpsTester _T_171 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:294
	// Tracing: EnumOpsTester _T_173 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:295
	// Tracing: EnumOpsTester _T_174 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:296
	// Tracing: EnumOpsTester _T_178 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:297
	// Tracing: EnumOpsTester _T_180 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:298
	// Tracing: EnumOpsTester _T_181 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:299
	// Tracing: EnumOpsTester _T_185 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:300
	// Tracing: EnumOpsTester _T_187 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:301
	// Tracing: EnumOpsTester _T_188 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:302
	// Tracing: EnumOpsTester _T_192 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:303
	// Tracing: EnumOpsTester _T_194 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:304
	// Tracing: EnumOpsTester _T_195 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:305
	// Tracing: EnumOpsTester _T_199 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:306
	// Tracing: EnumOpsTester _T_201 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:307
	// Tracing: EnumOpsTester _T_202 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:308
	// Tracing: EnumOpsTester _T_206 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:309
	// Tracing: EnumOpsTester _T_208 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:310
	// Tracing: EnumOpsTester _T_209 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:311
	// Tracing: EnumOpsTester _T_213 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:312
	// Tracing: EnumOpsTester _T_215 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:313
	// Tracing: EnumOpsTester _T_216 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:314
	// Tracing: EnumOpsTester _T_220 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:315
	// Tracing: EnumOpsTester _T_222 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:316
	// Tracing: EnumOpsTester _T_223 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:317
	// Tracing: EnumOpsTester _T_227 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:318
	// Tracing: EnumOpsTester _T_229 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:319
	// Tracing: EnumOpsTester _T_230 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:320
	// Tracing: EnumOpsTester _T_234 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:321
	// Tracing: EnumOpsTester _T_236 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:322
	// Tracing: EnumOpsTester _T_237 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:323
	// Tracing: EnumOpsTester _T_241 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:324
	// Tracing: EnumOpsTester _T_243 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:325
	// Tracing: EnumOpsTester _T_244 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:326
	// Tracing: EnumOpsTester _T_248 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:327
	// Tracing: EnumOpsTester _T_250 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:328
	// Tracing: EnumOpsTester _T_251 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:329
	// Tracing: EnumOpsTester _T_255 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:330
	// Tracing: EnumOpsTester _T_257 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:331
	// Tracing: EnumOpsTester _T_258 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:332
	// Tracing: EnumOpsTester _T_262 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:333
	// Tracing: EnumOpsTester _T_264 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:334
	// Tracing: EnumOpsTester _T_265 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:335
	// Tracing: EnumOpsTester _T_269 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:336
	// Tracing: EnumOpsTester _T_271 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:337
	// Tracing: EnumOpsTester _T_272 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:338
	// Tracing: EnumOpsTester _T_276 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:339
	// Tracing: EnumOpsTester _T_278 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:340
	// Tracing: EnumOpsTester _T_279 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:341
	// Tracing: EnumOpsTester _T_283 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:342
	// Tracing: EnumOpsTester _T_285 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:343
	// Tracing: EnumOpsTester _T_286 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:344
	// Tracing: EnumOpsTester _T_290 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:345
	// Tracing: EnumOpsTester _T_292 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:346
	// Tracing: EnumOpsTester _T_293 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:347
	// Tracing: EnumOpsTester _T_297 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:348
	// Tracing: EnumOpsTester _T_299 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:349
	// Tracing: EnumOpsTester _T_300 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:350
	// Tracing: EnumOpsTester _T_304 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:351
	// Tracing: EnumOpsTester _T_306 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:352
	// Tracing: EnumOpsTester _T_307 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:353
	// Tracing: EnumOpsTester _T_311 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:354
	// Tracing: EnumOpsTester _T_313 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:355
	// Tracing: EnumOpsTester _T_314 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:356
	// Tracing: EnumOpsTester _T_318 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:357
	// Tracing: EnumOpsTester _T_320 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:358
	// Tracing: EnumOpsTester _T_321 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:359
	// Tracing: EnumOpsTester _T_325 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:360
	// Tracing: EnumOpsTester _T_327 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:361
	// Tracing: EnumOpsTester _T_328 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:362
	// Tracing: EnumOpsTester _T_332 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:363
	// Tracing: EnumOpsTester _T_334 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:364
	// Tracing: EnumOpsTester _T_335 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:365
	// Tracing: EnumOpsTester _T_339 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:366
	// Tracing: EnumOpsTester _T_341 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:367
	// Tracing: EnumOpsTester _T_342 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:368
	// Tracing: EnumOpsTester _T_346 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:369
	// Tracing: EnumOpsTester _T_348 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:370
	// Tracing: EnumOpsTester _T_349 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:371
	// Tracing: EnumOpsTester _T_353 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:372
	// Tracing: EnumOpsTester _T_355 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:373
	// Tracing: EnumOpsTester _T_356 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:374
	// Tracing: EnumOpsTester _T_360 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:375
	// Tracing: EnumOpsTester _T_362 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:376
	// Tracing: EnumOpsTester _T_363 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:377
	// Tracing: EnumOpsTester _T_367 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:378
	// Tracing: EnumOpsTester _T_369 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:379
	// Tracing: EnumOpsTester _T_370 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:380
	// Tracing: EnumOpsTester _T_374 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:381
	// Tracing: EnumOpsTester _T_376 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:382
	// Tracing: EnumOpsTester _T_377 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:383
	// Tracing: EnumOpsTester _T_381 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:384
	// Tracing: EnumOpsTester _T_383 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:385
	// Tracing: EnumOpsTester _T_384 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:386
	// Tracing: EnumOpsTester _T_388 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:387
	// Tracing: EnumOpsTester _T_390 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:388
	// Tracing: EnumOpsTester _T_391 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:389
	// Tracing: EnumOpsTester _T_395 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:390
	// Tracing: EnumOpsTester _T_397 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:391
	// Tracing: EnumOpsTester _T_398 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:392
	// Tracing: EnumOpsTester _T_402 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:393
	// Tracing: EnumOpsTester _T_404 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:394
	// Tracing: EnumOpsTester _T_405 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:395
	// Tracing: EnumOpsTester _T_409 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:396
	// Tracing: EnumOpsTester _T_411 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:397
	// Tracing: EnumOpsTester _T_412 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:398
	// Tracing: EnumOpsTester _T_416 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:399
	// Tracing: EnumOpsTester _T_418 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:400
	// Tracing: EnumOpsTester _T_419 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:401
	// Tracing: EnumOpsTester _T_423 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:402
	// Tracing: EnumOpsTester _T_425 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:403
	// Tracing: EnumOpsTester _T_426 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:404
	// Tracing: EnumOpsTester _T_430 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:405
	// Tracing: EnumOpsTester _T_432 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:406
	// Tracing: EnumOpsTester _T_433 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:407
	// Tracing: EnumOpsTester _T_437 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:408
	// Tracing: EnumOpsTester _T_439 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:409
	// Tracing: EnumOpsTester _T_440 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:410
	// Tracing: EnumOpsTester _T_444 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:411
	// Tracing: EnumOpsTester _T_446 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:412
	// Tracing: EnumOpsTester _T_447 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:413
	// Tracing: EnumOpsTester _T_451 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:414
	// Tracing: EnumOpsTester _T_453 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:415
	// Tracing: EnumOpsTester _T_454 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:416
	// Tracing: EnumOpsTester _T_458 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:417
	// Tracing: EnumOpsTester _T_460 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:418
	// Tracing: EnumOpsTester _T_461 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:419
	// Tracing: EnumOpsTester _T_465 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:420
	// Tracing: EnumOpsTester _T_467 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:421
	// Tracing: EnumOpsTester _T_468 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:422
	// Tracing: EnumOpsTester _T_472 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:423
	// Tracing: EnumOpsTester _T_474 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:424
	// Tracing: EnumOpsTester _T_475 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:425
	// Tracing: EnumOpsTester _T_479 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:426
	// Tracing: EnumOpsTester _T_481 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:427
	// Tracing: EnumOpsTester _T_482 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:428
	// Tracing: EnumOpsTester _T_486 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:429
	// Tracing: EnumOpsTester _T_488 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:430
	// Tracing: EnumOpsTester _T_489 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:431
	// Tracing: EnumOpsTester _T_493 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:432
	// Tracing: EnumOpsTester _T_495 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:433
	// Tracing: EnumOpsTester _T_496 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:434
	// Tracing: EnumOpsTester _T_500 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:435
	// Tracing: EnumOpsTester _T_502 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:436
	// Tracing: EnumOpsTester _T_503 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:437
	// Tracing: EnumOpsTester _T_507 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:438
	// Tracing: EnumOpsTester _T_509 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:439
	// Tracing: EnumOpsTester _T_510 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:440
	// Tracing: EnumOpsTester _T_514 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:441
	// Tracing: EnumOpsTester _T_516 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:442
	// Tracing: EnumOpsTester _T_517 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:443
	// Tracing: EnumOpsTester _T_521 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:444
	// Tracing: EnumOpsTester _T_523 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:445
	// Tracing: EnumOpsTester _T_524 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:446
	// Tracing: EnumOpsTester _T_528 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:447
	// Tracing: EnumOpsTester _T_530 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:448
	// Tracing: EnumOpsTester _T_531 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:449
	// Tracing: EnumOpsTester _T_535 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:450
	// Tracing: EnumOpsTester _T_537 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:451
	// Tracing: EnumOpsTester _T_538 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:452
	// Tracing: EnumOpsTester _T_542 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:453
	// Tracing: EnumOpsTester _T_544 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:454
	// Tracing: EnumOpsTester _T_545 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:455
	// Tracing: EnumOpsTester _T_549 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:456
	// Tracing: EnumOpsTester _T_551 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:457
	// Tracing: EnumOpsTester _T_552 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:458
	// Tracing: EnumOpsTester _T_556 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:459
	// Tracing: EnumOpsTester _T_558 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:460
	// Tracing: EnumOpsTester _T_559 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:461
	// Tracing: EnumOpsTester _T_563 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:462
	// Tracing: EnumOpsTester _T_565 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:463
	// Tracing: EnumOpsTester _T_566 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:464
	// Tracing: EnumOpsTester _T_570 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:465
	// Tracing: EnumOpsTester _T_572 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:466
	// Tracing: EnumOpsTester _T_573 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:467
	// Tracing: EnumOpsTester _T_577 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:468
	// Tracing: EnumOpsTester _T_579 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:469
	// Tracing: EnumOpsTester _T_580 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:470
	// Tracing: EnumOpsTester _T_584 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:471
	// Tracing: EnumOpsTester _T_586 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:472
	// Tracing: EnumOpsTester _T_587 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:473
	// Tracing: EnumOpsTester _T_591 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:474
	// Tracing: EnumOpsTester _T_593 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:475
	// Tracing: EnumOpsTester _T_594 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:476
	// Tracing: EnumOpsTester _T_598 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:477
	// Tracing: EnumOpsTester _T_600 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:478
	// Tracing: EnumOpsTester _T_601 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:479
	// Tracing: EnumOpsTester _T_605 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:480
	// Tracing: EnumOpsTester _T_607 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:481
	// Tracing: EnumOpsTester _T_608 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:482
	// Tracing: EnumOpsTester _T_612 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:483
	// Tracing: EnumOpsTester _T_614 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:484
	// Tracing: EnumOpsTester _T_615 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:485
	// Tracing: EnumOpsTester _T_619 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:486
	// Tracing: EnumOpsTester _T_621 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:487
	// Tracing: EnumOpsTester _T_622 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:488
	// Tracing: EnumOpsTester _T_626 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:489
	// Tracing: EnumOpsTester _T_628 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:490
	// Tracing: EnumOpsTester _T_629 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:491
	// Tracing: EnumOpsTester _T_633 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:492
	// Tracing: EnumOpsTester _T_635 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:493
	// Tracing: EnumOpsTester _T_636 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:494
	// Tracing: EnumOpsTester _T_640 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:495
	// Tracing: EnumOpsTester _T_642 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:496
	// Tracing: EnumOpsTester _T_643 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:497
	// Tracing: EnumOpsTester _T_647 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:498
	// Tracing: EnumOpsTester _T_649 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:499
	// Tracing: EnumOpsTester _T_650 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:500
	// Tracing: EnumOpsTester _T_654 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:501
	// Tracing: EnumOpsTester _T_656 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:502
	// Tracing: EnumOpsTester _T_657 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:503
	// Tracing: EnumOpsTester _T_661 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:504
	// Tracing: EnumOpsTester _T_663 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:505
	// Tracing: EnumOpsTester _T_664 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:506
	// Tracing: EnumOpsTester _T_668 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:507
	// Tracing: EnumOpsTester _T_670 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:508
	// Tracing: EnumOpsTester _T_671 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:509
	// Tracing: EnumOpsTester _T_675 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:510
	// Tracing: EnumOpsTester _T_677 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:511
	// Tracing: EnumOpsTester _T_678 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:512
	// Tracing: EnumOpsTester _T_682 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:513
	// Tracing: EnumOpsTester _T_684 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:514
	// Tracing: EnumOpsTester _T_685 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:515
	// Tracing: EnumOpsTester _T_689 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:516
	// Tracing: EnumOpsTester _T_691 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:517
	// Tracing: EnumOpsTester _T_692 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:518
	// Tracing: EnumOpsTester _T_696 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:519
	// Tracing: EnumOpsTester _T_698 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:520
	// Tracing: EnumOpsTester _T_699 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:521
	// Tracing: EnumOpsTester _T_703 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:522
	// Tracing: EnumOpsTester _T_705 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:523
	// Tracing: EnumOpsTester _T_706 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:524
	// Tracing: EnumOpsTester _T_710 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:525
	// Tracing: EnumOpsTester _T_712 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:526
	// Tracing: EnumOpsTester _T_713 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:527
	// Tracing: EnumOpsTester _T_717 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:528
	// Tracing: EnumOpsTester _T_719 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:529
	// Tracing: EnumOpsTester _T_720 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:530
	// Tracing: EnumOpsTester _T_724 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:531
	// Tracing: EnumOpsTester _T_726 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:532
	// Tracing: EnumOpsTester _T_727 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:533
	// Tracing: EnumOpsTester _T_731 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:534
	// Tracing: EnumOpsTester _T_733 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:535
	// Tracing: EnumOpsTester _T_734 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:536
	// Tracing: EnumOpsTester _T_738 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:537
	// Tracing: EnumOpsTester _T_740 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:538
	// Tracing: EnumOpsTester _T_741 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:539
	// Tracing: EnumOpsTester _T_745 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:540
	// Tracing: EnumOpsTester _T_747 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:541
	// Tracing: EnumOpsTester _T_748 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:542
	// Tracing: EnumOpsTester _T_752 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:543
	// Tracing: EnumOpsTester _T_754 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:544
	// Tracing: EnumOpsTester _T_755 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:545
	// Tracing: EnumOpsTester _T_759 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:546
	// Tracing: EnumOpsTester _T_761 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:547
	// Tracing: EnumOpsTester _T_762 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:548
	// Tracing: EnumOpsTester _T_766 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:549
	// Tracing: EnumOpsTester _T_768 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:550
	// Tracing: EnumOpsTester _T_769 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:551
	// Tracing: EnumOpsTester _T_773 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:552
	// Tracing: EnumOpsTester _T_775 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:553
	// Tracing: EnumOpsTester _T_776 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:554
	// Tracing: EnumOpsTester _T_780 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:555
	// Tracing: EnumOpsTester _T_782 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:556
	// Tracing: EnumOpsTester _T_783 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:557
	// Tracing: EnumOpsTester _T_787 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:558
	// Tracing: EnumOpsTester _T_789 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:559
	// Tracing: EnumOpsTester _T_790 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:560
	// Tracing: EnumOpsTester _T_794 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:561
	// Tracing: EnumOpsTester _T_796 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:562
	// Tracing: EnumOpsTester _T_797 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:563
	// Tracing: EnumOpsTester _T_801 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:564
	// Tracing: EnumOpsTester _T_803 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:565
	// Tracing: EnumOpsTester _T_804 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:566
	// Tracing: EnumOpsTester _T_808 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:567
	// Tracing: EnumOpsTester _T_810 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:568
	// Tracing: EnumOpsTester _T_811 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:569
	// Tracing: EnumOpsTester _T_815 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:570
	// Tracing: EnumOpsTester _T_817 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:571
	// Tracing: EnumOpsTester _T_818 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:572
	// Tracing: EnumOpsTester _T_822 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:573
	// Tracing: EnumOpsTester _T_824 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:574
	// Tracing: EnumOpsTester _T_825 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:575
	// Tracing: EnumOpsTester _T_829 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:576
	// Tracing: EnumOpsTester _T_831 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:577
	// Tracing: EnumOpsTester _T_832 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:578
	// Tracing: EnumOpsTester _T_836 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:579
	// Tracing: EnumOpsTester _T_838 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:580
	// Tracing: EnumOpsTester _T_839 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:581
	// Tracing: EnumOpsTester _T_843 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:582
	// Tracing: EnumOpsTester _T_845 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:583
	// Tracing: EnumOpsTester _T_846 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:584
	// Tracing: EnumOpsTester _T_850 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:585
	// Tracing: EnumOpsTester _T_852 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:586
	// Tracing: EnumOpsTester _T_853 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:587
	// Tracing: EnumOpsTester _T_857 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:588
	// Tracing: EnumOpsTester _T_859 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:589
	// Tracing: EnumOpsTester _T_860 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:590
	// Tracing: EnumOpsTester _T_864 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:591
	// Tracing: EnumOpsTester _T_866 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:592
	// Tracing: EnumOpsTester _T_867 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:593
	// Tracing: EnumOpsTester _T_871 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:594
	// Tracing: EnumOpsTester _T_873 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:595
	// Tracing: EnumOpsTester _T_874 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:596
	// Tracing: EnumOpsTester _T_878 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:597
	// Tracing: EnumOpsTester _T_880 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:598
	// Tracing: EnumOpsTester _T_881 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:599
	// Tracing: EnumOpsTester _T_885 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:600
	// Tracing: EnumOpsTester _T_887 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:601
	// Tracing: EnumOpsTester _T_888 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:602
	// Tracing: EnumOpsTester _T_892 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:603
	// Tracing: EnumOpsTester _T_894 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:604
	// Tracing: EnumOpsTester _T_895 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:605
	// Tracing: EnumOpsTester _T_899 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:606
	// Tracing: EnumOpsTester _T_901 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:607
	// Tracing: EnumOpsTester _T_902 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:608
	// Tracing: EnumOpsTester _T_906 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:609
	// Tracing: EnumOpsTester _T_908 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:610
	// Tracing: EnumOpsTester _T_909 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:611
	// Tracing: EnumOpsTester _T_913 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:612
	// Tracing: EnumOpsTester _T_915 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:613
	// Tracing: EnumOpsTester _T_916 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:614
	// Tracing: EnumOpsTester _T_920 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:615
	// Tracing: EnumOpsTester _T_922 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:616
	// Tracing: EnumOpsTester _T_923 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:617
	// Tracing: EnumOpsTester _T_927 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:618
	// Tracing: EnumOpsTester _T_929 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:619
	// Tracing: EnumOpsTester _T_930 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:620
	// Tracing: EnumOpsTester _T_934 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:621
	// Tracing: EnumOpsTester _T_936 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:622
	// Tracing: EnumOpsTester _T_937 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:623
	// Tracing: EnumOpsTester _T_941 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:624
	// Tracing: EnumOpsTester _T_943 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:625
	// Tracing: EnumOpsTester _T_944 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:626
	// Tracing: EnumOpsTester _T_948 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:627
	// Tracing: EnumOpsTester _T_950 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:628
	// Tracing: EnumOpsTester _T_951 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:629
	// Tracing: EnumOpsTester _T_955 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:630
	// Tracing: EnumOpsTester _T_957 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:631
	// Tracing: EnumOpsTester _T_958 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:632
	// Tracing: EnumOpsTester _T_962 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:633
	// Tracing: EnumOpsTester _T_964 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:634
	// Tracing: EnumOpsTester _T_965 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:635
	// Tracing: EnumOpsTester _T_969 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:636
	// Tracing: EnumOpsTester _T_971 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:637
	// Tracing: EnumOpsTester _T_972 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:638
	// Tracing: EnumOpsTester _T_976 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:639
	// Tracing: EnumOpsTester _T_978 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:640
	// Tracing: EnumOpsTester _T_979 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:641
	// Tracing: EnumOpsTester _T_983 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:642
	// Tracing: EnumOpsTester _T_985 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:643
	// Tracing: EnumOpsTester _T_986 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:644
	// Tracing: EnumOpsTester _T_990 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:645
	// Tracing: EnumOpsTester _T_992 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:646
	// Tracing: EnumOpsTester _T_993 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:647
	// Tracing: EnumOpsTester _T_997 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:648
	// Tracing: EnumOpsTester _T_999 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:649
	// Tracing: EnumOpsTester _T_1000 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:650
	// Tracing: EnumOpsTester _T_1004 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:651
	// Tracing: EnumOpsTester _T_1006 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:652
	// Tracing: EnumOpsTester _T_1007 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:653
	// Tracing: EnumOpsTester _T_1011 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:654
	// Tracing: EnumOpsTester _T_1013 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:655
	// Tracing: EnumOpsTester _T_1014 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:656
	// Tracing: EnumOpsTester _T_1018 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:657
	// Tracing: EnumOpsTester _T_1020 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:658
	// Tracing: EnumOpsTester _T_1021 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:659
	// Tracing: EnumOpsTester _T_1025 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:660
	// Tracing: EnumOpsTester _T_1027 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:661
	// Tracing: EnumOpsTester _T_1028 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:662
	// Tracing: EnumOpsTester _T_1032 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:663
	// Tracing: EnumOpsTester _T_1034 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:664
	// Tracing: EnumOpsTester _T_1035 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:665
	// Tracing: EnumOpsTester _T_1039 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:666
	// Tracing: EnumOpsTester _T_1041 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:667
	// Tracing: EnumOpsTester _T_1042 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:668
	// Tracing: EnumOpsTester _T_1046 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:669
	// Tracing: EnumOpsTester _T_1048 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:670
	// Tracing: EnumOpsTester _T_1049 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:671
	// Tracing: EnumOpsTester _T_1051 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/EnumOpsTester/2020030621340413337952837861996004/EnumOpsTester.v:672
	vcdp->declBus  (c+3,"EnumOpsTester EnumOps io_x",-1,6,0);
	vcdp->declBus  (c+3,"EnumOpsTester EnumOps io_y",-1,6,0);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps io_lt",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps io_le",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps io_gt",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps io_ge",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps io_eq",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps io_ne",-1);
	vcdp->declBus  (c+3,"EnumOpsTester EnumOps_1 io_x",-1,6,0);
	vcdp->declBus  (c+6,"EnumOpsTester EnumOps_1 io_y",-1,6,0);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_1 io_lt",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_1 io_le",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_1 io_gt",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_1 io_ge",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_1 io_eq",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_1 io_ne",-1);
	vcdp->declBus  (c+3,"EnumOpsTester EnumOps_2 io_x",-1,6,0);
	vcdp->declBus  (c+7,"EnumOpsTester EnumOps_2 io_y",-1,6,0);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_2 io_lt",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_2 io_le",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_2 io_gt",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_2 io_ge",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_2 io_eq",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_2 io_ne",-1);
	vcdp->declBus  (c+3,"EnumOpsTester EnumOps_3 io_x",-1,6,0);
	vcdp->declBus  (c+8,"EnumOpsTester EnumOps_3 io_y",-1,6,0);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_3 io_lt",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_3 io_le",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_3 io_gt",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_3 io_ge",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_3 io_eq",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_3 io_ne",-1);
	vcdp->declBus  (c+3,"EnumOpsTester EnumOps_4 io_x",-1,6,0);
	vcdp->declBus  (c+9,"EnumOpsTester EnumOps_4 io_y",-1,6,0);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_4 io_lt",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_4 io_le",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_4 io_gt",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_4 io_ge",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_4 io_eq",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_4 io_ne",-1);
	vcdp->declBus  (c+6,"EnumOpsTester EnumOps_5 io_x",-1,6,0);
	vcdp->declBus  (c+3,"EnumOpsTester EnumOps_5 io_y",-1,6,0);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_5 io_lt",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_5 io_le",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_5 io_gt",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_5 io_ge",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_5 io_eq",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_5 io_ne",-1);
	vcdp->declBus  (c+6,"EnumOpsTester EnumOps_6 io_x",-1,6,0);
	vcdp->declBus  (c+6,"EnumOpsTester EnumOps_6 io_y",-1,6,0);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_6 io_lt",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_6 io_le",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_6 io_gt",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_6 io_ge",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_6 io_eq",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_6 io_ne",-1);
	vcdp->declBus  (c+6,"EnumOpsTester EnumOps_7 io_x",-1,6,0);
	vcdp->declBus  (c+7,"EnumOpsTester EnumOps_7 io_y",-1,6,0);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_7 io_lt",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_7 io_le",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_7 io_gt",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_7 io_ge",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_7 io_eq",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_7 io_ne",-1);
	vcdp->declBus  (c+6,"EnumOpsTester EnumOps_8 io_x",-1,6,0);
	vcdp->declBus  (c+8,"EnumOpsTester EnumOps_8 io_y",-1,6,0);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_8 io_lt",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_8 io_le",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_8 io_gt",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_8 io_ge",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_8 io_eq",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_8 io_ne",-1);
	vcdp->declBus  (c+6,"EnumOpsTester EnumOps_9 io_x",-1,6,0);
	vcdp->declBus  (c+9,"EnumOpsTester EnumOps_9 io_y",-1,6,0);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_9 io_lt",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_9 io_le",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_9 io_gt",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_9 io_ge",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_9 io_eq",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_9 io_ne",-1);
	vcdp->declBus  (c+7,"EnumOpsTester EnumOps_10 io_x",-1,6,0);
	vcdp->declBus  (c+3,"EnumOpsTester EnumOps_10 io_y",-1,6,0);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_10 io_lt",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_10 io_le",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_10 io_gt",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_10 io_ge",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_10 io_eq",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_10 io_ne",-1);
	vcdp->declBus  (c+7,"EnumOpsTester EnumOps_11 io_x",-1,6,0);
	vcdp->declBus  (c+6,"EnumOpsTester EnumOps_11 io_y",-1,6,0);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_11 io_lt",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_11 io_le",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_11 io_gt",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_11 io_ge",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_11 io_eq",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_11 io_ne",-1);
	vcdp->declBus  (c+7,"EnumOpsTester EnumOps_12 io_x",-1,6,0);
	vcdp->declBus  (c+7,"EnumOpsTester EnumOps_12 io_y",-1,6,0);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_12 io_lt",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_12 io_le",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_12 io_gt",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_12 io_ge",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_12 io_eq",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_12 io_ne",-1);
	vcdp->declBus  (c+7,"EnumOpsTester EnumOps_13 io_x",-1,6,0);
	vcdp->declBus  (c+8,"EnumOpsTester EnumOps_13 io_y",-1,6,0);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_13 io_lt",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_13 io_le",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_13 io_gt",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_13 io_ge",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_13 io_eq",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_13 io_ne",-1);
	vcdp->declBus  (c+7,"EnumOpsTester EnumOps_14 io_x",-1,6,0);
	vcdp->declBus  (c+9,"EnumOpsTester EnumOps_14 io_y",-1,6,0);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_14 io_lt",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_14 io_le",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_14 io_gt",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_14 io_ge",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_14 io_eq",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_14 io_ne",-1);
	vcdp->declBus  (c+8,"EnumOpsTester EnumOps_15 io_x",-1,6,0);
	vcdp->declBus  (c+3,"EnumOpsTester EnumOps_15 io_y",-1,6,0);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_15 io_lt",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_15 io_le",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_15 io_gt",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_15 io_ge",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_15 io_eq",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_15 io_ne",-1);
	vcdp->declBus  (c+8,"EnumOpsTester EnumOps_16 io_x",-1,6,0);
	vcdp->declBus  (c+6,"EnumOpsTester EnumOps_16 io_y",-1,6,0);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_16 io_lt",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_16 io_le",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_16 io_gt",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_16 io_ge",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_16 io_eq",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_16 io_ne",-1);
	vcdp->declBus  (c+8,"EnumOpsTester EnumOps_17 io_x",-1,6,0);
	vcdp->declBus  (c+7,"EnumOpsTester EnumOps_17 io_y",-1,6,0);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_17 io_lt",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_17 io_le",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_17 io_gt",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_17 io_ge",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_17 io_eq",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_17 io_ne",-1);
	vcdp->declBus  (c+8,"EnumOpsTester EnumOps_18 io_x",-1,6,0);
	vcdp->declBus  (c+8,"EnumOpsTester EnumOps_18 io_y",-1,6,0);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_18 io_lt",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_18 io_le",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_18 io_gt",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_18 io_ge",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_18 io_eq",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_18 io_ne",-1);
	vcdp->declBus  (c+8,"EnumOpsTester EnumOps_19 io_x",-1,6,0);
	vcdp->declBus  (c+9,"EnumOpsTester EnumOps_19 io_y",-1,6,0);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_19 io_lt",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_19 io_le",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_19 io_gt",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_19 io_ge",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_19 io_eq",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_19 io_ne",-1);
	vcdp->declBus  (c+9,"EnumOpsTester EnumOps_20 io_x",-1,6,0);
	vcdp->declBus  (c+3,"EnumOpsTester EnumOps_20 io_y",-1,6,0);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_20 io_lt",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_20 io_le",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_20 io_gt",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_20 io_ge",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_20 io_eq",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_20 io_ne",-1);
	vcdp->declBus  (c+9,"EnumOpsTester EnumOps_21 io_x",-1,6,0);
	vcdp->declBus  (c+6,"EnumOpsTester EnumOps_21 io_y",-1,6,0);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_21 io_lt",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_21 io_le",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_21 io_gt",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_21 io_ge",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_21 io_eq",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_21 io_ne",-1);
	vcdp->declBus  (c+9,"EnumOpsTester EnumOps_22 io_x",-1,6,0);
	vcdp->declBus  (c+7,"EnumOpsTester EnumOps_22 io_y",-1,6,0);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_22 io_lt",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_22 io_le",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_22 io_gt",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_22 io_ge",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_22 io_eq",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_22 io_ne",-1);
	vcdp->declBus  (c+9,"EnumOpsTester EnumOps_23 io_x",-1,6,0);
	vcdp->declBus  (c+8,"EnumOpsTester EnumOps_23 io_y",-1,6,0);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_23 io_lt",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_23 io_le",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_23 io_gt",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_23 io_ge",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_23 io_eq",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_23 io_ne",-1);
	vcdp->declBus  (c+9,"EnumOpsTester EnumOps_24 io_x",-1,6,0);
	vcdp->declBus  (c+9,"EnumOpsTester EnumOps_24 io_y",-1,6,0);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_24 io_lt",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_24 io_le",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_24 io_gt",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_24 io_ge",-1);
	vcdp->declBit  (c+5,"EnumOpsTester EnumOps_24 io_eq",-1);
	vcdp->declBit  (c+4,"EnumOpsTester EnumOps_24 io_ne",-1);
    }
}

void VEnumOpsTester::traceFullThis__1(VEnumOpsTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VEnumOpsTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->clock));
	vcdp->fullBit  (c+2,(vlTOPp->reset));
	vcdp->fullBus  (c+3,(0U),7);
	vcdp->fullBit  (c+4,(0U));
	vcdp->fullBit  (c+5,(1U));
	vcdp->fullBus  (c+6,(1U),7);
	vcdp->fullBus  (c+7,(2U),7);
	vcdp->fullBus  (c+8,(0x64U),7);
	vcdp->fullBus  (c+9,(0x65U),7);
    }
}
