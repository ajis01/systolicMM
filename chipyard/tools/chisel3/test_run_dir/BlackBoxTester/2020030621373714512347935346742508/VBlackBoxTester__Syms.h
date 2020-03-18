// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _VBlackBoxTester__Syms_H_
#define _VBlackBoxTester__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VBlackBoxTester.h"

// SYMS CLASS
class VBlackBoxTester__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VBlackBoxTester*               TOPp;
    
    // CREATORS
    VBlackBoxTester__Syms(VBlackBoxTester* topp, const char* namep);
    ~VBlackBoxTester__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r; }
    
} VL_ATTR_ALIGNED(64);

#endif // guard
