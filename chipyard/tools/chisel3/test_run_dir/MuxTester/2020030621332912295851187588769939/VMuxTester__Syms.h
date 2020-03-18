// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _VMuxTester__Syms_H_
#define _VMuxTester__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VMuxTester.h"

// SYMS CLASS
class VMuxTester__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VMuxTester*                    TOPp;
    
    // CREATORS
    VMuxTester__Syms(VMuxTester* topp, const char* namep);
    ~VMuxTester__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r; }
    
} VL_ATTR_ALIGNED(64);

#endif // guard
