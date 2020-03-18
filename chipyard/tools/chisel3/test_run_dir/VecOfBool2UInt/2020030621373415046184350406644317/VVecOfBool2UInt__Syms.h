// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _VVecOfBool2UInt__Syms_H_
#define _VVecOfBool2UInt__Syms_H_

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "VVecOfBool2UInt.h"

// SYMS CLASS
class VVecOfBool2UInt__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VVecOfBool2UInt*               TOPp;
    
    // CREATORS
    VVecOfBool2UInt__Syms(VVecOfBool2UInt* topp, const char* namep);
    ~VVecOfBool2UInt__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r; }
    
} VL_ATTR_ALIGNED(64);

#endif // guard
