// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VParameterizedVendingMachineTester__Syms.h"


//======================

void VParameterizedVendingMachineTester::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VParameterizedVendingMachineTester::traceInit, &VParameterizedVendingMachineTester::traceFull, &VParameterizedVendingMachineTester::traceChg, this);
}
void VParameterizedVendingMachineTester::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VParameterizedVendingMachineTester* t=(VParameterizedVendingMachineTester*)userthis;
    VParameterizedVendingMachineTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VParameterizedVendingMachineTester::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VParameterizedVendingMachineTester* t=(VParameterizedVendingMachineTester*)userthis;
    VParameterizedVendingMachineTester__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VParameterizedVendingMachineTester::traceInitThis(VParameterizedVendingMachineTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VParameterizedVendingMachineTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VParameterizedVendingMachineTester::traceFullThis(VParameterizedVendingMachineTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VParameterizedVendingMachineTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VParameterizedVendingMachineTester::traceInitThis__1(VParameterizedVendingMachineTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VParameterizedVendingMachineTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+10,"clock",-1);
	vcdp->declBit  (c+11,"reset",-1);
	vcdp->declBit  (c+10,"ParameterizedVendingMachineTester clock",-1);
	vcdp->declBit  (c+11,"ParameterizedVendingMachineTester reset",-1);
	vcdp->declBit  (c+10,"ParameterizedVendingMachineTester dut_clock",-1);
	vcdp->declBit  (c+11,"ParameterizedVendingMachineTester dut_reset",-1);
	vcdp->declBit  (c+1,"ParameterizedVendingMachineTester dut_io_inputs_0",-1);
	vcdp->declBit  (c+2,"ParameterizedVendingMachineTester dut_io_inputs_1",-1);
	vcdp->declBit  (c+3,"ParameterizedVendingMachineTester dut_io_inputs_2",-1);
	vcdp->declBit  (c+4,"ParameterizedVendingMachineTester dut_io_inputs_3",-1);
	vcdp->declBit  (c+6,"ParameterizedVendingMachineTester dut_io_dispense",-1);
	vcdp->declBus  (c+7,"ParameterizedVendingMachineTester value",-1,6,0);
	// Tracing: ParameterizedVendingMachineTester _RAND_0 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:213
	vcdp->declBit  (c+8,"ParameterizedVendingMachineTester done",-1);
	// Tracing: ParameterizedVendingMachineTester _T_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:215
	// Tracing: ParameterizedVendingMachineTester _T_4 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:216
	// Tracing: ParameterizedVendingMachineTester _GEN_3 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:217
	// Tracing: ParameterizedVendingMachineTester _GEN_4 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:218
	// Tracing: ParameterizedVendingMachineTester _GEN_5 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:219
	// Tracing: ParameterizedVendingMachineTester _GEN_6 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:220
	// Tracing: ParameterizedVendingMachineTester _GEN_7 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:221
	// Tracing: ParameterizedVendingMachineTester _GEN_8 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:222
	// Tracing: ParameterizedVendingMachineTester _GEN_9 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:223
	// Tracing: ParameterizedVendingMachineTester _GEN_10 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:224
	// Tracing: ParameterizedVendingMachineTester _GEN_11 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:225
	// Tracing: ParameterizedVendingMachineTester _GEN_12 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:226
	// Tracing: ParameterizedVendingMachineTester _GEN_13 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:227
	// Tracing: ParameterizedVendingMachineTester _GEN_14 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:228
	// Tracing: ParameterizedVendingMachineTester _GEN_15 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:229
	// Tracing: ParameterizedVendingMachineTester _GEN_16 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:230
	// Tracing: ParameterizedVendingMachineTester _GEN_17 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:231
	// Tracing: ParameterizedVendingMachineTester _GEN_18 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:232
	// Tracing: ParameterizedVendingMachineTester _GEN_19 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:233
	// Tracing: ParameterizedVendingMachineTester _GEN_20 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:234
	// Tracing: ParameterizedVendingMachineTester _GEN_21 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:235
	// Tracing: ParameterizedVendingMachineTester _GEN_22 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:236
	// Tracing: ParameterizedVendingMachineTester _GEN_23 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:237
	// Tracing: ParameterizedVendingMachineTester _GEN_24 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:238
	// Tracing: ParameterizedVendingMachineTester _GEN_25 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:239
	// Tracing: ParameterizedVendingMachineTester _GEN_26 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:240
	// Tracing: ParameterizedVendingMachineTester _GEN_27 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:241
	// Tracing: ParameterizedVendingMachineTester _GEN_28 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:242
	// Tracing: ParameterizedVendingMachineTester _GEN_29 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:243
	// Tracing: ParameterizedVendingMachineTester _GEN_30 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:244
	// Tracing: ParameterizedVendingMachineTester _GEN_31 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:245
	// Tracing: ParameterizedVendingMachineTester _GEN_32 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:246
	// Tracing: ParameterizedVendingMachineTester _GEN_33 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:247
	// Tracing: ParameterizedVendingMachineTester _GEN_34 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:248
	// Tracing: ParameterizedVendingMachineTester _GEN_35 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:249
	// Tracing: ParameterizedVendingMachineTester _GEN_36 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:250
	// Tracing: ParameterizedVendingMachineTester _GEN_37 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:251
	// Tracing: ParameterizedVendingMachineTester _GEN_38 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:252
	// Tracing: ParameterizedVendingMachineTester _GEN_39 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:253
	// Tracing: ParameterizedVendingMachineTester _GEN_40 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:254
	// Tracing: ParameterizedVendingMachineTester _GEN_41 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:255
	// Tracing: ParameterizedVendingMachineTester _GEN_42 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:256
	// Tracing: ParameterizedVendingMachineTester _GEN_43 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:257
	// Tracing: ParameterizedVendingMachineTester _GEN_44 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:258
	// Tracing: ParameterizedVendingMachineTester _GEN_45 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:259
	// Tracing: ParameterizedVendingMachineTester _GEN_46 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:260
	// Tracing: ParameterizedVendingMachineTester _GEN_47 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:261
	// Tracing: ParameterizedVendingMachineTester _GEN_48 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:262
	// Tracing: ParameterizedVendingMachineTester _GEN_49 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:263
	// Tracing: ParameterizedVendingMachineTester _GEN_50 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:264
	// Tracing: ParameterizedVendingMachineTester _GEN_51 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:265
	// Tracing: ParameterizedVendingMachineTester _GEN_52 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:266
	// Tracing: ParameterizedVendingMachineTester _GEN_53 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:267
	// Tracing: ParameterizedVendingMachineTester _GEN_54 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:268
	// Tracing: ParameterizedVendingMachineTester _GEN_55 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:269
	// Tracing: ParameterizedVendingMachineTester _GEN_56 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:270
	// Tracing: ParameterizedVendingMachineTester _GEN_57 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:271
	// Tracing: ParameterizedVendingMachineTester _GEN_58 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:272
	// Tracing: ParameterizedVendingMachineTester _GEN_59 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:273
	// Tracing: ParameterizedVendingMachineTester _GEN_60 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:274
	// Tracing: ParameterizedVendingMachineTester _GEN_61 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:275
	// Tracing: ParameterizedVendingMachineTester _GEN_62 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:276
	// Tracing: ParameterizedVendingMachineTester _GEN_63 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:277
	// Tracing: ParameterizedVendingMachineTester _GEN_64 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:278
	// Tracing: ParameterizedVendingMachineTester _GEN_65 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:279
	// Tracing: ParameterizedVendingMachineTester _GEN_66 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:280
	// Tracing: ParameterizedVendingMachineTester _GEN_67 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:281
	// Tracing: ParameterizedVendingMachineTester _GEN_68 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:282
	// Tracing: ParameterizedVendingMachineTester _GEN_69 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:283
	// Tracing: ParameterizedVendingMachineTester _GEN_70 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:284
	// Tracing: ParameterizedVendingMachineTester _GEN_71 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:285
	// Tracing: ParameterizedVendingMachineTester _GEN_72 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:286
	// Tracing: ParameterizedVendingMachineTester _GEN_73 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:287
	// Tracing: ParameterizedVendingMachineTester _GEN_74 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:288
	// Tracing: ParameterizedVendingMachineTester _GEN_75 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:289
	// Tracing: ParameterizedVendingMachineTester _GEN_76 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:290
	// Tracing: ParameterizedVendingMachineTester _GEN_77 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:291
	// Tracing: ParameterizedVendingMachineTester _GEN_78 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:292
	// Tracing: ParameterizedVendingMachineTester _GEN_79 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:293
	// Tracing: ParameterizedVendingMachineTester _GEN_80 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:294
	// Tracing: ParameterizedVendingMachineTester _GEN_81 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:295
	// Tracing: ParameterizedVendingMachineTester _GEN_82 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:296
	// Tracing: ParameterizedVendingMachineTester _GEN_83 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:297
	// Tracing: ParameterizedVendingMachineTester _GEN_84 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:298
	// Tracing: ParameterizedVendingMachineTester _GEN_85 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:299
	// Tracing: ParameterizedVendingMachineTester _GEN_86 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:300
	// Tracing: ParameterizedVendingMachineTester _GEN_87 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:301
	// Tracing: ParameterizedVendingMachineTester _GEN_88 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:302
	// Tracing: ParameterizedVendingMachineTester _GEN_89 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:303
	// Tracing: ParameterizedVendingMachineTester _GEN_90 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:304
	// Tracing: ParameterizedVendingMachineTester _GEN_91 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:305
	// Tracing: ParameterizedVendingMachineTester _GEN_92 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:306
	// Tracing: ParameterizedVendingMachineTester _GEN_93 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:307
	// Tracing: ParameterizedVendingMachineTester _GEN_94 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:308
	// Tracing: ParameterizedVendingMachineTester _GEN_95 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:309
	// Tracing: ParameterizedVendingMachineTester _GEN_96 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:310
	// Tracing: ParameterizedVendingMachineTester _GEN_97 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:311
	// Tracing: ParameterizedVendingMachineTester _GEN_98 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:312
	// Tracing: ParameterizedVendingMachineTester _GEN_99 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:313
	// Tracing: ParameterizedVendingMachineTester _GEN_100 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:314
	// Tracing: ParameterizedVendingMachineTester _GEN_101 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:315
	// Tracing: ParameterizedVendingMachineTester _GEN_124 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:316
	// Tracing: ParameterizedVendingMachineTester _GEN_125 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:317
	// Tracing: ParameterizedVendingMachineTester _GEN_126 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:318
	// Tracing: ParameterizedVendingMachineTester _GEN_127 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:319
	// Tracing: ParameterizedVendingMachineTester _GEN_128 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:320
	// Tracing: ParameterizedVendingMachineTester _GEN_129 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:321
	// Tracing: ParameterizedVendingMachineTester _GEN_130 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:322
	// Tracing: ParameterizedVendingMachineTester _GEN_131 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:323
	// Tracing: ParameterizedVendingMachineTester _GEN_132 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:324
	// Tracing: ParameterizedVendingMachineTester _GEN_133 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:325
	// Tracing: ParameterizedVendingMachineTester _GEN_134 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:326
	// Tracing: ParameterizedVendingMachineTester _GEN_135 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:327
	// Tracing: ParameterizedVendingMachineTester _GEN_136 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:328
	// Tracing: ParameterizedVendingMachineTester _GEN_137 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:329
	// Tracing: ParameterizedVendingMachineTester _GEN_138 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:330
	// Tracing: ParameterizedVendingMachineTester _GEN_139 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:331
	// Tracing: ParameterizedVendingMachineTester _GEN_140 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:332
	// Tracing: ParameterizedVendingMachineTester _GEN_141 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:333
	// Tracing: ParameterizedVendingMachineTester _GEN_142 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:334
	// Tracing: ParameterizedVendingMachineTester _GEN_143 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:335
	// Tracing: ParameterizedVendingMachineTester _GEN_144 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:336
	// Tracing: ParameterizedVendingMachineTester _GEN_202 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:337
	// Tracing: ParameterizedVendingMachineTester _GEN_145 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:338
	// Tracing: ParameterizedVendingMachineTester _GEN_146 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:339
	// Tracing: ParameterizedVendingMachineTester _GEN_147 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:340
	// Tracing: ParameterizedVendingMachineTester _GEN_148 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:341
	// Tracing: ParameterizedVendingMachineTester _GEN_149 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:342
	// Tracing: ParameterizedVendingMachineTester _GEN_150 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:343
	// Tracing: ParameterizedVendingMachineTester _GEN_151 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:344
	// Tracing: ParameterizedVendingMachineTester _GEN_152 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:345
	// Tracing: ParameterizedVendingMachineTester _GEN_153 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:346
	// Tracing: ParameterizedVendingMachineTester _GEN_154 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:347
	// Tracing: ParameterizedVendingMachineTester _GEN_155 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:348
	// Tracing: ParameterizedVendingMachineTester _GEN_156 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:349
	// Tracing: ParameterizedVendingMachineTester _GEN_157 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:350
	// Tracing: ParameterizedVendingMachineTester _GEN_158 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:351
	// Tracing: ParameterizedVendingMachineTester _GEN_159 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:352
	// Tracing: ParameterizedVendingMachineTester _GEN_160 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:353
	// Tracing: ParameterizedVendingMachineTester _GEN_161 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:354
	// Tracing: ParameterizedVendingMachineTester _GEN_162 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:355
	// Tracing: ParameterizedVendingMachineTester _GEN_163 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:356
	// Tracing: ParameterizedVendingMachineTester _GEN_164 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:357
	// Tracing: ParameterizedVendingMachineTester _GEN_203 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:358
	// Tracing: ParameterizedVendingMachineTester _GEN_165 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:359
	// Tracing: ParameterizedVendingMachineTester _GEN_166 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:360
	// Tracing: ParameterizedVendingMachineTester _GEN_167 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:361
	// Tracing: ParameterizedVendingMachineTester _GEN_168 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:362
	// Tracing: ParameterizedVendingMachineTester _GEN_169 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:363
	// Tracing: ParameterizedVendingMachineTester _GEN_170 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:364
	// Tracing: ParameterizedVendingMachineTester _GEN_171 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:365
	// Tracing: ParameterizedVendingMachineTester _GEN_172 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:366
	// Tracing: ParameterizedVendingMachineTester _GEN_173 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:367
	// Tracing: ParameterizedVendingMachineTester _GEN_174 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:368
	// Tracing: ParameterizedVendingMachineTester _GEN_175 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:369
	// Tracing: ParameterizedVendingMachineTester _GEN_176 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:370
	// Tracing: ParameterizedVendingMachineTester _GEN_177 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:371
	// Tracing: ParameterizedVendingMachineTester _GEN_178 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:372
	// Tracing: ParameterizedVendingMachineTester _GEN_179 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:373
	// Tracing: ParameterizedVendingMachineTester _GEN_180 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:374
	// Tracing: ParameterizedVendingMachineTester _GEN_181 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:375
	// Tracing: ParameterizedVendingMachineTester _GEN_182 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:376
	// Tracing: ParameterizedVendingMachineTester _GEN_183 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:377
	// Tracing: ParameterizedVendingMachineTester _GEN_184 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:378
	// Tracing: ParameterizedVendingMachineTester _GEN_185 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:379
	// Tracing: ParameterizedVendingMachineTester _GEN_186 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:380
	// Tracing: ParameterizedVendingMachineTester _GEN_187 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:381
	// Tracing: ParameterizedVendingMachineTester _GEN_188 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:382
	// Tracing: ParameterizedVendingMachineTester _GEN_189 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:383
	// Tracing: ParameterizedVendingMachineTester _GEN_190 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:384
	// Tracing: ParameterizedVendingMachineTester _GEN_204 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:385
	// Tracing: ParameterizedVendingMachineTester _GEN_191 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:386
	// Tracing: ParameterizedVendingMachineTester _GEN_192 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:387
	// Tracing: ParameterizedVendingMachineTester _GEN_193 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:388
	// Tracing: ParameterizedVendingMachineTester _GEN_194 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:389
	// Tracing: ParameterizedVendingMachineTester _GEN_195 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:390
	// Tracing: ParameterizedVendingMachineTester _GEN_196 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:391
	// Tracing: ParameterizedVendingMachineTester _GEN_197 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:392
	// Tracing: ParameterizedVendingMachineTester _GEN_198 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:393
	// Tracing: ParameterizedVendingMachineTester _GEN_199 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:394
	// Tracing: ParameterizedVendingMachineTester _GEN_200 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:395
	// Tracing: ParameterizedVendingMachineTester _GEN_201 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:396
	// Tracing: ParameterizedVendingMachineTester _T_11 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:397
	// Tracing: ParameterizedVendingMachineTester _T_13 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:398
	// Tracing: ParameterizedVendingMachineTester _T_14 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:399
	vcdp->declBit  (c+10,"ParameterizedVendingMachineTester dut clock",-1);
	vcdp->declBit  (c+11,"ParameterizedVendingMachineTester dut reset",-1);
	vcdp->declBit  (c+1,"ParameterizedVendingMachineTester dut io_inputs_0",-1);
	vcdp->declBit  (c+2,"ParameterizedVendingMachineTester dut io_inputs_1",-1);
	vcdp->declBit  (c+3,"ParameterizedVendingMachineTester dut io_inputs_2",-1);
	vcdp->declBit  (c+4,"ParameterizedVendingMachineTester dut io_inputs_3",-1);
	vcdp->declBit  (c+6,"ParameterizedVendingMachineTester dut io_dispense",-1);
	// Tracing: ParameterizedVendingMachineTester dut _T // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:10
	// Tracing: ParameterizedVendingMachineTester dut _T_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:11
	// Tracing: ParameterizedVendingMachineTester dut _T_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:12
	// Tracing: ParameterizedVendingMachineTester dut _T_3 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:13
	// Tracing: ParameterizedVendingMachineTester dut _T_4 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:14
	// Tracing: ParameterizedVendingMachineTester dut _T_5 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:15
	// Tracing: ParameterizedVendingMachineTester dut _T_6 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:16
	// Tracing: ParameterizedVendingMachineTester dut _T_7 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:17
	// Tracing: ParameterizedVendingMachineTester dut _T_8 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:18
	// Tracing: ParameterizedVendingMachineTester dut _T_11 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:19
	// Tracing: ParameterizedVendingMachineTester dut _T_12 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:20
	// Tracing: ParameterizedVendingMachineTester dut _T_14 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:21
	// Tracing: ParameterizedVendingMachineTester dut _T_15 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:22
	// Tracing: ParameterizedVendingMachineTester dut _T_19 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:23
	// Tracing: ParameterizedVendingMachineTester dut _T_20 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:24
	// Tracing: ParameterizedVendingMachineTester dut _T_22 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:25
	// Tracing: ParameterizedVendingMachineTester dut _T_23 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:26
	// Tracing: ParameterizedVendingMachineTester dut _T_28 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:27
	// Tracing: ParameterizedVendingMachineTester dut _T_30 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:28
	// Tracing: ParameterizedVendingMachineTester dut _T_31 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:29
	vcdp->declBus  (c+9,"ParameterizedVendingMachineTester dut value",-1,7,0);
	// Tracing: ParameterizedVendingMachineTester dut _RAND_0 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:31
	vcdp->declBit  (c+6,"ParameterizedVendingMachineTester dut doDispense",-1);
	// Tracing: ParameterizedVendingMachineTester dut _GEN_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:33
	// Tracing: ParameterizedVendingMachineTester dut _GEN_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:34
	// Tracing: ParameterizedVendingMachineTester dut _GEN_3 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:35
	vcdp->declBus  (c+5,"ParameterizedVendingMachineTester dut incValue",-1,7,0);
	// Tracing: ParameterizedVendingMachineTester dut _T_33 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622450817647947363273923894/ParameterizedVendingMachineTester.v:37
    }
}

void VParameterizedVendingMachineTester::traceFullThis__1(VParameterizedVendingMachineTester__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VParameterizedVendingMachineTester* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,((1U & (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_101))));
	vcdp->fullBit  (c+2,((1U & ((IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_101) 
				    >> 1U))));
	vcdp->fullBit  (c+3,((1U & ((IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_101) 
				    >> 2U))));
	vcdp->fullBit  (c+4,((1U & ((IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_101) 
				    >> 3U))));
	vcdp->fullBus  (c+5,(((8U & (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_101))
			       ? 0x19U : ((4U & (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_101))
					   ? 0xaU : 
					  ((2U & (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_101))
					    ? 5U : 
					   ((1U & (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_101))
					     ? 1U : 0U))))),8);
	vcdp->fullBit  (c+6,((0x96U <= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__dut__DOT__value))));
	vcdp->fullBus  (c+7,(vlTOPp->ParameterizedVendingMachineTester__DOT__value),7);
	vcdp->fullBit  (c+8,((0x64U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))));
	vcdp->fullBus  (c+9,(vlTOPp->ParameterizedVendingMachineTester__DOT__dut__DOT__value),8);
	vcdp->fullBit  (c+10,(vlTOPp->clock));
	vcdp->fullBit  (c+11,(vlTOPp->reset));
    }
}
