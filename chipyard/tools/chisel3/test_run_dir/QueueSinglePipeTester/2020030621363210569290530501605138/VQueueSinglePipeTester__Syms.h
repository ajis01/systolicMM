// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _VQueueSinglePipeTester__Syms_H_
#define _VQueueSinglePipeTester__Syms_H_

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "VQueueSinglePipeTester.h"

// SYMS CLASS
class VQueueSinglePipeTester__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VQueueSinglePipeTester*        TOPp;
    
    // SCOPE NAMES
    VerilatedScope __Vscope_QueueSinglePipeTester;
    
    // CREATORS
    VQueueSinglePipeTester__Syms(VQueueSinglePipeTester* topp, const char* namep);
    ~VQueueSinglePipeTester__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r; }
    
} VL_ATTR_ALIGNED(64);

#endif // guard
