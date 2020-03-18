// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _VMixedVecIOTester__Syms_H_
#define _VMixedVecIOTester__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VMixedVecIOTester.h"

// SYMS CLASS
class VMixedVecIOTester__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VMixedVecIOTester*             TOPp;
    
    // CREATORS
    VMixedVecIOTester__Syms(VMixedVecIOTester* topp, const char* namep);
    ~VMixedVecIOTester__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r; }
    
} VL_ATTR_ALIGNED(64);

#endif // guard
