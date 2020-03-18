// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _VQueueCloneTester__Syms_H_
#define _VQueueCloneTester__Syms_H_

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "VQueueCloneTester.h"

// SYMS CLASS
class VQueueCloneTester__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VQueueCloneTester*             TOPp;
    
    // SCOPE NAMES
    VerilatedScope __Vscope_QueueCloneTester;
    
    // CREATORS
    VQueueCloneTester__Syms(VQueueCloneTester* topp, const char* namep);
    ~VQueueCloneTester__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r; }
    
} VL_ATTR_ALIGNED(64);

#endif // guard
