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
	vcdp->declBit  (c+8,"clock",-1);
	vcdp->declBit  (c+9,"reset",-1);
	vcdp->declBit  (c+8,"ParameterizedVendingMachineTester clock",-1);
	vcdp->declBit  (c+9,"ParameterizedVendingMachineTester reset",-1);
	vcdp->declBit  (c+8,"ParameterizedVendingMachineTester dut_clock",-1);
	vcdp->declBit  (c+9,"ParameterizedVendingMachineTester dut_reset",-1);
	vcdp->declBit  (c+1,"ParameterizedVendingMachineTester dut_io_inputs_0",-1);
	vcdp->declBit  (c+2,"ParameterizedVendingMachineTester dut_io_inputs_1",-1);
	vcdp->declBit  (c+4,"ParameterizedVendingMachineTester dut_io_dispense",-1);
	vcdp->declBus  (c+5,"ParameterizedVendingMachineTester value",-1,6,0);
	// Tracing: ParameterizedVendingMachineTester _RAND_0 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:135
	vcdp->declBit  (c+6,"ParameterizedVendingMachineTester done",-1);
	// Tracing: ParameterizedVendingMachineTester _T_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:137
	// Tracing: ParameterizedVendingMachineTester _T_4 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:138
	// Tracing: ParameterizedVendingMachineTester _GEN_3 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:139
	// Tracing: ParameterizedVendingMachineTester _GEN_4 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:140
	// Tracing: ParameterizedVendingMachineTester _GEN_5 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:141
	// Tracing: ParameterizedVendingMachineTester _GEN_6 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:142
	// Tracing: ParameterizedVendingMachineTester _GEN_7 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:143
	// Tracing: ParameterizedVendingMachineTester _GEN_8 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:144
	// Tracing: ParameterizedVendingMachineTester _GEN_9 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:145
	// Tracing: ParameterizedVendingMachineTester _GEN_10 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:146
	// Tracing: ParameterizedVendingMachineTester _GEN_11 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:147
	// Tracing: ParameterizedVendingMachineTester _GEN_12 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:148
	// Tracing: ParameterizedVendingMachineTester _GEN_13 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:149
	// Tracing: ParameterizedVendingMachineTester _GEN_14 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:150
	// Tracing: ParameterizedVendingMachineTester _GEN_15 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:151
	// Tracing: ParameterizedVendingMachineTester _GEN_16 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:152
	// Tracing: ParameterizedVendingMachineTester _GEN_17 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:153
	// Tracing: ParameterizedVendingMachineTester _GEN_18 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:154
	// Tracing: ParameterizedVendingMachineTester _GEN_19 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:155
	// Tracing: ParameterizedVendingMachineTester _GEN_20 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:156
	// Tracing: ParameterizedVendingMachineTester _GEN_21 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:157
	// Tracing: ParameterizedVendingMachineTester _GEN_22 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:158
	// Tracing: ParameterizedVendingMachineTester _GEN_23 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:159
	// Tracing: ParameterizedVendingMachineTester _GEN_24 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:160
	// Tracing: ParameterizedVendingMachineTester _GEN_25 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:161
	// Tracing: ParameterizedVendingMachineTester _GEN_26 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:162
	// Tracing: ParameterizedVendingMachineTester _GEN_27 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:163
	// Tracing: ParameterizedVendingMachineTester _GEN_28 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:164
	// Tracing: ParameterizedVendingMachineTester _GEN_29 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:165
	// Tracing: ParameterizedVendingMachineTester _GEN_30 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:166
	// Tracing: ParameterizedVendingMachineTester _GEN_31 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:167
	// Tracing: ParameterizedVendingMachineTester _GEN_32 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:168
	// Tracing: ParameterizedVendingMachineTester _GEN_33 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:169
	// Tracing: ParameterizedVendingMachineTester _GEN_34 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:170
	// Tracing: ParameterizedVendingMachineTester _GEN_35 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:171
	// Tracing: ParameterizedVendingMachineTester _GEN_36 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:172
	// Tracing: ParameterizedVendingMachineTester _GEN_37 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:173
	// Tracing: ParameterizedVendingMachineTester _GEN_38 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:174
	// Tracing: ParameterizedVendingMachineTester _GEN_39 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:175
	// Tracing: ParameterizedVendingMachineTester _GEN_40 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:176
	// Tracing: ParameterizedVendingMachineTester _GEN_41 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:177
	// Tracing: ParameterizedVendingMachineTester _GEN_42 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:178
	// Tracing: ParameterizedVendingMachineTester _GEN_43 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:179
	// Tracing: ParameterizedVendingMachineTester _GEN_44 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:180
	// Tracing: ParameterizedVendingMachineTester _GEN_45 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:181
	// Tracing: ParameterizedVendingMachineTester _GEN_46 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:182
	// Tracing: ParameterizedVendingMachineTester _GEN_47 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:183
	// Tracing: ParameterizedVendingMachineTester _GEN_48 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:184
	// Tracing: ParameterizedVendingMachineTester _GEN_49 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:185
	// Tracing: ParameterizedVendingMachineTester _GEN_50 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:186
	// Tracing: ParameterizedVendingMachineTester _GEN_51 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:187
	// Tracing: ParameterizedVendingMachineTester _GEN_52 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:188
	// Tracing: ParameterizedVendingMachineTester _GEN_53 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:189
	// Tracing: ParameterizedVendingMachineTester _GEN_54 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:190
	// Tracing: ParameterizedVendingMachineTester _GEN_55 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:191
	// Tracing: ParameterizedVendingMachineTester _GEN_56 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:192
	// Tracing: ParameterizedVendingMachineTester _GEN_57 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:193
	// Tracing: ParameterizedVendingMachineTester _GEN_58 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:194
	// Tracing: ParameterizedVendingMachineTester _GEN_59 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:195
	// Tracing: ParameterizedVendingMachineTester _GEN_60 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:196
	// Tracing: ParameterizedVendingMachineTester _GEN_61 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:197
	// Tracing: ParameterizedVendingMachineTester _GEN_62 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:198
	// Tracing: ParameterizedVendingMachineTester _GEN_63 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:199
	// Tracing: ParameterizedVendingMachineTester _GEN_64 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:200
	// Tracing: ParameterizedVendingMachineTester _GEN_65 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:201
	// Tracing: ParameterizedVendingMachineTester _GEN_66 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:202
	// Tracing: ParameterizedVendingMachineTester _GEN_67 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:203
	// Tracing: ParameterizedVendingMachineTester _GEN_68 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:204
	// Tracing: ParameterizedVendingMachineTester _GEN_69 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:205
	// Tracing: ParameterizedVendingMachineTester _GEN_70 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:206
	// Tracing: ParameterizedVendingMachineTester _GEN_71 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:207
	// Tracing: ParameterizedVendingMachineTester _GEN_72 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:208
	// Tracing: ParameterizedVendingMachineTester _GEN_73 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:209
	// Tracing: ParameterizedVendingMachineTester _GEN_74 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:210
	// Tracing: ParameterizedVendingMachineTester _GEN_75 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:211
	// Tracing: ParameterizedVendingMachineTester _GEN_76 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:212
	// Tracing: ParameterizedVendingMachineTester _GEN_77 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:213
	// Tracing: ParameterizedVendingMachineTester _GEN_78 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:214
	// Tracing: ParameterizedVendingMachineTester _GEN_79 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:215
	// Tracing: ParameterizedVendingMachineTester _GEN_80 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:216
	// Tracing: ParameterizedVendingMachineTester _GEN_81 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:217
	// Tracing: ParameterizedVendingMachineTester _GEN_82 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:218
	// Tracing: ParameterizedVendingMachineTester _GEN_83 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:219
	// Tracing: ParameterizedVendingMachineTester _GEN_84 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:220
	// Tracing: ParameterizedVendingMachineTester _GEN_85 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:221
	// Tracing: ParameterizedVendingMachineTester _GEN_86 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:222
	// Tracing: ParameterizedVendingMachineTester _GEN_87 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:223
	// Tracing: ParameterizedVendingMachineTester _GEN_88 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:224
	// Tracing: ParameterizedVendingMachineTester _GEN_89 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:225
	// Tracing: ParameterizedVendingMachineTester _GEN_90 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:226
	// Tracing: ParameterizedVendingMachineTester _GEN_91 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:227
	// Tracing: ParameterizedVendingMachineTester _GEN_92 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:228
	// Tracing: ParameterizedVendingMachineTester _GEN_93 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:229
	// Tracing: ParameterizedVendingMachineTester _GEN_94 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:230
	// Tracing: ParameterizedVendingMachineTester _GEN_95 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:231
	// Tracing: ParameterizedVendingMachineTester _GEN_96 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:232
	// Tracing: ParameterizedVendingMachineTester _GEN_97 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:233
	// Tracing: ParameterizedVendingMachineTester _GEN_98 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:234
	// Tracing: ParameterizedVendingMachineTester _GEN_99 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:235
	// Tracing: ParameterizedVendingMachineTester _GEN_100 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:236
	// Tracing: ParameterizedVendingMachineTester _GEN_101 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:237
	// Tracing: ParameterizedVendingMachineTester _GEN_155 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:238
	// Tracing: ParameterizedVendingMachineTester _GEN_156 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:239
	// Tracing: ParameterizedVendingMachineTester _GEN_157 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:240
	// Tracing: ParameterizedVendingMachineTester _GEN_158 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:241
	// Tracing: ParameterizedVendingMachineTester _GEN_159 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:242
	// Tracing: ParameterizedVendingMachineTester _GEN_160 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:243
	// Tracing: ParameterizedVendingMachineTester _GEN_161 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:244
	// Tracing: ParameterizedVendingMachineTester _GEN_162 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:245
	// Tracing: ParameterizedVendingMachineTester _GEN_163 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:246
	// Tracing: ParameterizedVendingMachineTester _GEN_164 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:247
	// Tracing: ParameterizedVendingMachineTester _GEN_165 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:248
	// Tracing: ParameterizedVendingMachineTester _GEN_166 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:249
	// Tracing: ParameterizedVendingMachineTester _GEN_167 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:250
	// Tracing: ParameterizedVendingMachineTester _GEN_168 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:251
	// Tracing: ParameterizedVendingMachineTester _GEN_169 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:252
	// Tracing: ParameterizedVendingMachineTester _GEN_170 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:253
	// Tracing: ParameterizedVendingMachineTester _GEN_171 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:254
	// Tracing: ParameterizedVendingMachineTester _GEN_172 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:255
	// Tracing: ParameterizedVendingMachineTester _GEN_173 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:256
	// Tracing: ParameterizedVendingMachineTester _GEN_174 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:257
	// Tracing: ParameterizedVendingMachineTester _GEN_175 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:258
	// Tracing: ParameterizedVendingMachineTester _GEN_176 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:259
	// Tracing: ParameterizedVendingMachineTester _GEN_177 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:260
	// Tracing: ParameterizedVendingMachineTester _GEN_178 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:261
	// Tracing: ParameterizedVendingMachineTester _GEN_179 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:262
	// Tracing: ParameterizedVendingMachineTester _GEN_180 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:263
	// Tracing: ParameterizedVendingMachineTester _GEN_181 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:264
	// Tracing: ParameterizedVendingMachineTester _GEN_182 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:265
	// Tracing: ParameterizedVendingMachineTester _GEN_183 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:266
	// Tracing: ParameterizedVendingMachineTester _GEN_184 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:267
	// Tracing: ParameterizedVendingMachineTester _GEN_185 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:268
	// Tracing: ParameterizedVendingMachineTester _GEN_186 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:269
	// Tracing: ParameterizedVendingMachineTester _GEN_187 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:270
	// Tracing: ParameterizedVendingMachineTester _GEN_188 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:271
	// Tracing: ParameterizedVendingMachineTester _GEN_189 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:272
	// Tracing: ParameterizedVendingMachineTester _GEN_190 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:273
	// Tracing: ParameterizedVendingMachineTester _GEN_191 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:274
	// Tracing: ParameterizedVendingMachineTester _GEN_192 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:275
	// Tracing: ParameterizedVendingMachineTester _GEN_193 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:276
	// Tracing: ParameterizedVendingMachineTester _GEN_194 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:277
	// Tracing: ParameterizedVendingMachineTester _GEN_195 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:278
	// Tracing: ParameterizedVendingMachineTester _GEN_196 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:279
	// Tracing: ParameterizedVendingMachineTester _GEN_197 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:280
	// Tracing: ParameterizedVendingMachineTester _GEN_198 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:281
	// Tracing: ParameterizedVendingMachineTester _GEN_199 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:282
	// Tracing: ParameterizedVendingMachineTester _GEN_200 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:283
	// Tracing: ParameterizedVendingMachineTester _GEN_201 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:284
	// Tracing: ParameterizedVendingMachineTester _T_9 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:285
	// Tracing: ParameterizedVendingMachineTester _T_11 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:286
	// Tracing: ParameterizedVendingMachineTester _T_12 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:287
	vcdp->declBit  (c+8,"ParameterizedVendingMachineTester dut clock",-1);
	vcdp->declBit  (c+9,"ParameterizedVendingMachineTester dut reset",-1);
	vcdp->declBit  (c+1,"ParameterizedVendingMachineTester dut io_inputs_0",-1);
	vcdp->declBit  (c+2,"ParameterizedVendingMachineTester dut io_inputs_1",-1);
	vcdp->declBit  (c+4,"ParameterizedVendingMachineTester dut io_dispense",-1);
	// Tracing: ParameterizedVendingMachineTester dut _T // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:8
	// Tracing: ParameterizedVendingMachineTester dut _T_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:9
	// Tracing: ParameterizedVendingMachineTester dut _T_2 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:10
	// Tracing: ParameterizedVendingMachineTester dut _T_3 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:11
	// Tracing: ParameterizedVendingMachineTester dut _T_4 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:12
	// Tracing: ParameterizedVendingMachineTester dut _T_6 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:13
	// Tracing: ParameterizedVendingMachineTester dut _T_7 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:14
	vcdp->declBus  (c+7,"ParameterizedVendingMachineTester dut value",-1,9,0);
	// Tracing: ParameterizedVendingMachineTester dut _RAND_0 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:16
	vcdp->declBit  (c+4,"ParameterizedVendingMachineTester dut doDispense",-1);
	// Tracing: ParameterizedVendingMachineTester dut _GEN_1 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:18
	vcdp->declBus  (c+3,"ParameterizedVendingMachineTester dut incValue",-1,9,0);
	// Tracing: ParameterizedVendingMachineTester dut _T_9 // Ignored: Inlined leading underscore at /home/ajis01/scratch/CS252A_Project/chipyard/tools/chisel3/test_run_dir/ParameterizedVendingMachineTester/2020030622451517300229654449927853/ParameterizedVendingMachineTester.v:20
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
	vcdp->fullBus  (c+3,(((2U & (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_101))
			       ? 0x1dU : ((1U & (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT___GEN_101))
					   ? 1U : 0U))),10);
	vcdp->fullBit  (c+4,((0x1edU <= (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__dut__DOT__value))));
	vcdp->fullBus  (c+5,(vlTOPp->ParameterizedVendingMachineTester__DOT__value),7);
	vcdp->fullBit  (c+6,((0x64U == (IData)(vlTOPp->ParameterizedVendingMachineTester__DOT__value))));
	vcdp->fullBus  (c+7,(vlTOPp->ParameterizedVendingMachineTester__DOT__dut__DOT__value),10);
	vcdp->fullBit  (c+8,(vlTOPp->clock));
	vcdp->fullBit  (c+9,(vlTOPp->reset));
    }
}
