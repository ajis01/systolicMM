// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VAsyncResetQueueTester__Syms.h"
#include "VAsyncResetQueueTester.h"

// FUNCTIONS
VAsyncResetQueueTester__Syms::VAsyncResetQueueTester__Syms(VAsyncResetQueueTester* topp, const char* namep)
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
    __Vscope_AsyncResetQueueTester.configure(this,name(),"AsyncResetQueueTester");
}
