// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _VAsyncResetQueueTester__Syms_H_
#define _VAsyncResetQueueTester__Syms_H_

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "VAsyncResetQueueTester.h"

// SYMS CLASS
class VAsyncResetQueueTester__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VAsyncResetQueueTester*        TOPp;
    
    // SCOPE NAMES
    VerilatedScope __Vscope_AsyncResetQueueTester;
    
    // CREATORS
    VAsyncResetQueueTester__Syms(VAsyncResetQueueTester* topp, const char* namep);
    ~VAsyncResetQueueTester__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r; }
    
} VL_ATTR_ALIGNED(64);

#endif // guard
