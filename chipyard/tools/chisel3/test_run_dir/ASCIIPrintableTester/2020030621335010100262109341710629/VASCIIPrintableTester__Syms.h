// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _VASCIIPrintableTester__Syms_H_
#define _VASCIIPrintableTester__Syms_H_

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "VASCIIPrintableTester.h"

// SYMS CLASS
class VASCIIPrintableTester__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VASCIIPrintableTester*         TOPp;
    
    // CREATORS
    VASCIIPrintableTester__Syms(VASCIIPrintableTester* topp, const char* namep);
    ~VASCIIPrintableTester__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r; }
    
} VL_ATTR_ALIGNED(64);

#endif // guard
