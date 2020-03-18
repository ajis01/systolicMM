// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _VCountTester__Syms_H_
#define _VCountTester__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VCountTester.h"

// SYMS CLASS
class VCountTester__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VCountTester*                  TOPp;
    
    // CREATORS
    VCountTester__Syms(VCountTester* topp, const char* namep);
    ~VCountTester__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r; }
    
} VL_ATTR_ALIGNED(64);

#endif // guard
