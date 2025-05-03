// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP__SYMS_H_
#define VERILATED_VTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtop.h"

// INCLUDE MODULE CLASSES
#include "Vtop___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop___024root                 TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_Mini_NPU;
    VerilatedScope __Vscope_Mini_NPU__back;
    VerilatedScope __Vscope_Mini_NPU__down;
    VerilatedScope __Vscope_Mini_NPU__forward;
    VerilatedScope __Vscope_Mini_NPU__i2c_m;
    VerilatedScope __Vscope_Mini_NPU__i2c_m__sipo_source;
    VerilatedScope __Vscope_Mini_NPU__i2c_m__sipo_x0;
    VerilatedScope __Vscope_Mini_NPU__i2c_m__sipo_x1;
    VerilatedScope __Vscope_Mini_NPU__i2c_m__sipo_y0;
    VerilatedScope __Vscope_Mini_NPU__i2c_m__sipo_y1;
    VerilatedScope __Vscope_Mini_NPU__i2c_m__sipo_z0;
    VerilatedScope __Vscope_Mini_NPU__i2c_m__sipo_z1;
    VerilatedScope __Vscope_Mini_NPU__led_c;
    VerilatedScope __Vscope_Mini_NPU__left;
    VerilatedScope __Vscope_Mini_NPU__ph;
    VerilatedScope __Vscope_Mini_NPU__right;
    VerilatedScope __Vscope_Mini_NPU__up;
    VerilatedScope __Vscope_Mini_NPU__x_axis;
    VerilatedScope __Vscope_Mini_NPU__y_axis;
    VerilatedScope __Vscope_Mini_NPU__z_axis;
    VerilatedScope __Vscope_TOP;

    // SCOPE HIERARCHY
    VerilatedHierarchy __Vhier;

    // CONSTRUCTORS
    Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp);
    ~Vtop__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
