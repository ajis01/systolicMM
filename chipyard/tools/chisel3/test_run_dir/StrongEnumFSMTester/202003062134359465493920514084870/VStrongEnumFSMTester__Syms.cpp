// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VStrongEnumFSMTester__Syms.h"
#include "VStrongEnumFSMTester.h"

// FUNCTIONS
VStrongEnumFSMTester__Syms::VStrongEnumFSMTester__Syms(VStrongEnumFSMTester* topp, const char* namep)
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
    // Setup scope names
    __Vscope_StrongEnumFSMTester.configure(this,name(),"StrongEnumFSMTester");
}
