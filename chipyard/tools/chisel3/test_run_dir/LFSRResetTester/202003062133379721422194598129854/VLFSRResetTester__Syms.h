// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _VLFSRResetTester__Syms_H_
#define _VLFSRResetTester__Syms_H_

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "VLFSRResetTester.h"

// SYMS CLASS
class VLFSRResetTester__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VLFSRResetTester*              TOPp;
    
    // SCOPE NAMES
    VerilatedScope __Vscope_LFSRResetTester;
    
    // CREATORS
    VLFSRResetTester__Syms(VLFSRResetTester* topp, const char* namep);
    ~VLFSRResetTester__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r; }
    
} VL_ATTR_ALIGNED(64);

#endif // guard
