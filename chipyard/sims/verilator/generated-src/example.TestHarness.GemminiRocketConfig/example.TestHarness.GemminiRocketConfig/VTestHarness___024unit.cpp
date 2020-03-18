// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness___024unit.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"


//--------------------
// Internal Methods

VL_INLINE_OPT void VTestHarness___024unit::__Vdpiimwrap_serial_tick_TOP____024unit(const CData serial_out_valid, CData& serial_out_ready, const IData serial_out_bits, CData& serial_in_valid, const CData serial_in_ready, IData& serial_in_bits, IData& serial_tick__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTestHarness___024unit::__Vdpiimwrap_serial_tick_TOP____024unit\n"); );
    // Body
    unsigned char serial_out_valid__Vcvt;
    serial_out_valid__Vcvt = serial_out_valid;
    unsigned char serial_out_ready__Vcvt;
    int serial_out_bits__Vcvt;
    serial_out_bits__Vcvt = serial_out_bits;
    unsigned char serial_in_valid__Vcvt;
    unsigned char serial_in_ready__Vcvt;
    serial_in_ready__Vcvt = serial_in_ready;
    int serial_in_bits__Vcvt;
    int serial_tick__Vfuncrtn__Vcvt = serial_tick(serial_out_valid__Vcvt, &serial_out_ready__Vcvt, serial_out_bits__Vcvt, &serial_in_valid__Vcvt, serial_in_ready__Vcvt, &serial_in_bits__Vcvt);
    serial_out_ready = (1U & serial_out_ready__Vcvt);
    serial_in_valid = (1U & serial_in_valid__Vcvt);
    serial_in_bits = serial_in_bits__Vcvt;
    serial_tick__Vfuncrtn = serial_tick__Vfuncrtn__Vcvt;
}

VL_INLINE_OPT void VTestHarness___024unit::__Vdpiimwrap_uart_init_TOP____024unit(const std::string& filename, const IData uartno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTestHarness___024unit::__Vdpiimwrap_uart_init_TOP____024unit\n"); );
    // Body
    const char* filename__Vcvt;
    filename__Vcvt = filename.c_str();
    int uartno__Vcvt;
    uartno__Vcvt = uartno;
    uart_init(filename__Vcvt, uartno__Vcvt);
}

VL_INLINE_OPT void VTestHarness___024unit::__Vdpiimwrap_uart_tick_TOP____024unit(const CData serial_out_valid, CData& serial_out_ready, const CData serial_out_bits, CData& serial_in_valid, const CData serial_in_ready, CData& serial_in_bits) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTestHarness___024unit::__Vdpiimwrap_uart_tick_TOP____024unit\n"); );
    // Body
    unsigned char serial_out_valid__Vcvt;
    serial_out_valid__Vcvt = serial_out_valid;
    unsigned char serial_out_ready__Vcvt;
    char serial_out_bits__Vcvt;
    serial_out_bits__Vcvt = serial_out_bits;
    unsigned char serial_in_valid__Vcvt;
    unsigned char serial_in_ready__Vcvt;
    serial_in_ready__Vcvt = serial_in_ready;
    char serial_in_bits__Vcvt;
    uart_tick(serial_out_valid__Vcvt, &serial_out_ready__Vcvt, serial_out_bits__Vcvt, &serial_in_valid__Vcvt, serial_in_ready__Vcvt, &serial_in_bits__Vcvt);
    serial_out_ready = (1U & serial_out_ready__Vcvt);
    serial_in_valid = (1U & serial_in_valid__Vcvt);
    serial_in_bits = (0xffU & serial_in_bits__Vcvt);
}
