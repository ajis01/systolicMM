// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _VCastFromLitTester__Syms_H_
#define _VCastFromLitTester__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VCastFromLitTester.h"

// SYMS CLASS
class VCastFromLitTester__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VCastFromLitTester*            TOPp;
    
    // CREATORS
    VCastFromLitTester__Syms(VCastFromLitTester* topp, const char* namep);
    ~VCastFromLitTester__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r; }
    
} VL_ATTR_ALIGNED(64);

#endif // guard
