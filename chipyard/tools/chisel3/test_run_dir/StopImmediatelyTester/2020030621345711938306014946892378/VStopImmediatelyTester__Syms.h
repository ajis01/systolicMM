// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _VStopImmediatelyTester__Syms_H_
#define _VStopImmediatelyTester__Syms_H_

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "VStopImmediatelyTester.h"

// SYMS CLASS
class VStopImmediatelyTester__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VStopImmediatelyTester*        TOPp;
    
    // SCOPE NAMES
    VerilatedScope __Vscope_StopImmediatelyTester;
    
    // CREATORS
    VStopImmediatelyTester__Syms(VStopImmediatelyTester* topp, const char* namep);
    ~VStopImmediatelyTester__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r; }
    
} VL_ATTR_ALIGNED(64);

#endif // guard
