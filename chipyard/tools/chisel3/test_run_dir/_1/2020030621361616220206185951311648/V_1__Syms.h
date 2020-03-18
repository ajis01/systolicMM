// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _V_1__Syms_H_
#define _V_1__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "V_1.h"

// SYMS CLASS
class V_1__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    bool __Vm_didInit;
    
    // SUBCELL STATE
    V_1*                           TOPp;
    
    // CREATORS
    V_1__Syms(V_1* topp, const char* namep);
    ~V_1__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r; }
    
} VL_ATTR_ALIGNED(64);

#endif // guard
