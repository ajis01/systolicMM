// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VVecOfBool2UInt__Syms.h"
#include "VVecOfBool2UInt.h"

// FUNCTIONS
VVecOfBool2UInt__Syms::VVecOfBool2UInt__Syms(VVecOfBool2UInt* topp, const char* namep)
	// Setup locals
	: __Vm_namep(namep)
	, __Vm_activity(false)
	, __Vm_didInit(false)
	// Setup submodule names
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
}