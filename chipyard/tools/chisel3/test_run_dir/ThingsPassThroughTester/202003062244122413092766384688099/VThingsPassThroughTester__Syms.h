// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _VThingsPassThroughTester__Syms_H_
#define _VThingsPassThroughTester__Syms_H_

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "VThingsPassThroughTester.h"

// SYMS CLASS
class VThingsPassThroughTester__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VThingsPassThroughTester*      TOPp;
    
    // SCOPE NAMES
    VerilatedScope __Vscope_ThingsPassThroughTester;
    
    // CREATORS
    VThingsPassThroughTester__Syms(VThingsPassThroughTester* topp, const char* namep);
    ~VThingsPassThroughTester__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r; }
    
} VL_ATTR_ALIGNED(64);

#endif // guard
