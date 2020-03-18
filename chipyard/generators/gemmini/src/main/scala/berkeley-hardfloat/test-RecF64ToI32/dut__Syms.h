// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _dut__Syms_H_
#define _dut__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "dut.h"

// SYMS CLASS
class dut__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    dut*                           TOPp;
    
    // CREATORS
    dut__Syms(dut* topp, const char* namep);
    ~dut__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif // guard
