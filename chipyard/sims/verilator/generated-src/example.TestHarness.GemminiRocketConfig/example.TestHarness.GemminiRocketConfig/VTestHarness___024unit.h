// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTestHarness.h for the primary calling header

#ifndef _VTestHarness___024unit_H_
#define _VTestHarness___024unit_H_

#include "verilated_heavy.h"
#include "VTestHarness__Dpi.h"

class VTestHarness__Syms;

//----------

VL_MODULE(VTestHarness___024unit) {
  public:
    
    // PORTS
    
    // LOCAL SIGNALS
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    VTestHarness__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VTestHarness___024unit);  ///< Copying not allowed
  public:
    VTestHarness___024unit(const char* name="TOP");
    ~VTestHarness___024unit();
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VTestHarness__Syms* symsp, bool first);
    void __Vdpiimwrap_serial_tick_TOP____024unit(const CData serial_out_valid, CData& serial_out_ready, const IData serial_out_bits, CData& serial_in_valid, const CData serial_in_ready, IData& serial_in_bits, IData& serial_tick__Vfuncrtn);
    void __Vdpiimwrap_uart_init_TOP____024unit(const std::string& filename, const IData uartno);
    void __Vdpiimwrap_uart_tick_TOP____024unit(const CData serial_out_valid, CData& serial_out_ready, const CData serial_out_bits, CData& serial_in_valid, const CData serial_in_ready, CData& serial_in_bits);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
} VL_ATTR_ALIGNED(128);

#endif // guard
