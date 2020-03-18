// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtest__Syms.h"


//======================

void Vtest::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&Vtest::traceInit, &Vtest::traceFull, &Vtest::traceChg, this);
}
void Vtest::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    Vtest* t=(Vtest*)userthis;
    Vtest__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void Vtest::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vtest* t=(Vtest*)userthis;
    Vtest__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void Vtest::traceInitThis(Vtest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void Vtest::traceFullThis(Vtest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vtest::traceInitThis__1(Vtest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
    }
}
