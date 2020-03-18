// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _VComplexAssignTester__Syms_H_
#define _VComplexAssignTester__Syms_H_

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "VComplexAssignTester.h"

// SYMS CLASS
class VComplexAssignTester__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VComplexAssignTester*          TOPp;
    
    // SCOPE NAMES
    VerilatedScope __Vscope_ComplexAssignTester;
    
    // CREATORS
    VComplexAssignTester__Syms(VComplexAssignTester* topp, const char* namep);
    ~VComplexAssignTester__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r; }
    
} VL_ATTR_ALIGNED(64);

#endif // guard
