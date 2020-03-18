// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _VFixedPointFromBitsTester__Syms_H_
#define _VFixedPointFromBitsTester__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VFixedPointFromBitsTester.h"

// SYMS CLASS
class VFixedPointFromBitsTester__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VFixedPointFromBitsTester*     TOPp;
    
    // CREATORS
    VFixedPointFromBitsTester__Syms(VFixedPointFromBitsTester* topp, const char* namep);
    ~VFixedPointFromBitsTester__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r; }
    
} VL_ATTR_ALIGNED(64);

#endif // guard
