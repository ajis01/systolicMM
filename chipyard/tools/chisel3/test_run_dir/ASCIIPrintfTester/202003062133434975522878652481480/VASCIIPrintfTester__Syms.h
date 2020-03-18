// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _VASCIIPrintfTester__Syms_H_
#define _VASCIIPrintfTester__Syms_H_

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "VASCIIPrintfTester.h"

// SYMS CLASS
class VASCIIPrintfTester__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VASCIIPrintfTester*            TOPp;
    
    // CREATORS
    VASCIIPrintfTester__Syms(VASCIIPrintfTester* topp, const char* namep);
    ~VASCIIPrintfTester__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r; }
    
} VL_ATTR_ALIGNED(64);

#endif // guard
