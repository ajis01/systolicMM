// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VBlackBoxFlipTester__Syms.h"
#include "VBlackBoxFlipTester.h"

// FUNCTIONS
VBlackBoxFlipTester__Syms::VBlackBoxFlipTester__Syms(VBlackBoxFlipTester* topp, const char* namep)
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
