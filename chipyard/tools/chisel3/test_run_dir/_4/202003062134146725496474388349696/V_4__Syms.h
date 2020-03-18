// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _V_4__Syms_H_
#define _V_4__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "V_4.h"

// SYMS CLASS
class V_4__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    bool __Vm_didInit;
    
    // SUBCELL STATE
    V_4*                           TOPp;
    
    // CREATORS
    V_4__Syms(V_4* topp, const char* namep);
    ~V_4__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r; }
    
} VL_ATTR_ALIGNED(64);

#endif // guard
