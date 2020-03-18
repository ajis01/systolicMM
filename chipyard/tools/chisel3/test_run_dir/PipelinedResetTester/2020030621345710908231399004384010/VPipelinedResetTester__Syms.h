// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _VPipelinedResetTester__Syms_H_
#define _VPipelinedResetTester__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VPipelinedResetTester.h"

// SYMS CLASS
class VPipelinedResetTester__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VPipelinedResetTester*         TOPp;
    
    // CREATORS
    VPipelinedResetTester__Syms(VPipelinedResetTester* topp, const char* namep);
    ~VPipelinedResetTester__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r; }
    
} VL_ATTR_ALIGNED(64);

#endif // guard
