// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = vlSelf->clock;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sad_w = 0x3aU;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sad_r = 0x3bU;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__INT_SOURCE_addr = 0x30U;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__DATAX0_addr = 0x32U;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__FIFO_CTL_addr = 0x38U;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__FIFO_DATA = 0x60U;
    vlSelf->Mini_NPU__DOT__left__DOT__CLK_FRQ = 0x989680U;
    vlSelf->Mini_NPU__DOT__right__DOT__CLK_FRQ = 0x989680U;
    vlSelf->Mini_NPU__DOT__back__DOT__CLK_FRQ = 0x989680U;
    vlSelf->Mini_NPU__DOT__forward__DOT__CLK_FRQ = 0x989680U;
    vlSelf->Mini_NPU__DOT__down__DOT__CLK_FRQ = 0x989680U;
    vlSelf->Mini_NPU__DOT__up__DOT__CLK_FRQ = 0x989680U;
    vlSelf->Mini_NPU__DOT__led_c__DOT__CLK_FRQ = 0x989680U;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/afs/andrew.cmu.edu/usr19/ccherry2/private/18224/Mini-NPU/testbench/mini_npu.sv", 4, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->start = VL_RAND_RESET_I(1);
    vlSelf->stop = VL_RAND_RESET_I(1);
    vlSelf->SDA_in = VL_RAND_RESET_I(1);
    vlSelf->SDA = VL_RAND_RESET_I(1);
    vlSelf->SCL = VL_RAND_RESET_I(1);
    vlSelf->LEDs = VL_RAND_RESET_I(8);
    vlSelf->Mini_NPU__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__stop = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__SDA_in = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__SDA = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__SCL = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__LEDs = VL_RAND_RESET_I(8);
    vlSelf->Mini_NPU__DOT__write_done = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__data_ready = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__read_done = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__abort = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__write = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__poll = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__data_read = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__data_avail = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__X_DATA = VL_RAND_RESET_I(16);
    vlSelf->Mini_NPU__DOT__Y_DATA = VL_RAND_RESET_I(16);
    vlSelf->Mini_NPU__DOT__Z_DATA = VL_RAND_RESET_I(16);
    vlSelf->Mini_NPU__DOT__left_activated = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__right_activated = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__back_activated = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__forward_activated = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__down_activated = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__up_activated = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__left_fired = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__right_fired = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__back_fired = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__forward_fired = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__down_fired = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__up_fired = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__fired_array = VL_RAND_RESET_I(8);
    vlSelf->Mini_NPU__DOT__ph__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__ph__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__ph__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__ph__DOT__stop = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__ph__DOT__write_done = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__ph__DOT__data_ready = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__ph__DOT__read_done = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__ph__DOT__abort = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__ph__DOT__write = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__ph__DOT__poll = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__ph__DOT__data_read = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__ph__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__ph__DOT__poll_en = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__ph__DOT__data_read_en = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__ph__DOT__ph_state = VL_RAND_RESET_I(2);
    vlSelf->Mini_NPU__DOT__ph__DOT__ph_nextState = VL_RAND_RESET_I(2);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__stop = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__SDA_in = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__write = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__poll = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_read = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__SDA = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__SCL = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__write_done = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_ready = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__read_done = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__abort = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_avail = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__X_DATA = VL_RAND_RESET_I(16);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__Y_DATA = VL_RAND_RESET_I(16);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__Z_DATA = VL_RAND_RESET_I(16);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__SDA_out = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sda_out_en = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__SCL_out = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__scl_out_en = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__ADDR = VL_RAND_RESET_I(8);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__addr = VL_RAND_RESET_I(8);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sub_addr = VL_RAND_RESET_I(8);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sad_w = VL_RAND_RESET_I(8);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sad_r = VL_RAND_RESET_I(8);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__INT_SOURCE_addr = VL_RAND_RESET_I(8);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__DATAX0_addr = VL_RAND_RESET_I(8);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__FIFO_CTL_addr = VL_RAND_RESET_I(8);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__FIFO_DATA = VL_RAND_RESET_I(8);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__INT_SOURCE = VL_RAND_RESET_I(8);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__X0_DATA = VL_RAND_RESET_I(8);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__X1_DATA = VL_RAND_RESET_I(8);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__Y0_DATA = VL_RAND_RESET_I(8);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__Y1_DATA = VL_RAND_RESET_I(8);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__Z0_DATA = VL_RAND_RESET_I(8);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__Z1_DATA = VL_RAND_RESET_I(8);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration = VL_RAND_RESET_I(2);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__count = VL_RAND_RESET_I(4);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count = VL_RAND_RESET_I(6);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__i_up = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__i_clr = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__count_en = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__count_reset = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count_en = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count_reset = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_in_s = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_clr_s = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_in_x0 = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_in_x1 = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_clr_x0 = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_clr_x1 = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_in_y0 = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_in_y1 = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_clr_y0 = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_clr_y1 = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_in_z0 = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_in_z1 = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_clr_z0 = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_clr_z1 = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__data = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state = VL_RAND_RESET_I(4);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_nextState = VL_RAND_RESET_I(4);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_source__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_source__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_source__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_source__DOT__shift_clr = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_source__DOT__serial_bit = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_source__DOT__Q = VL_RAND_RESET_I(8);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_x0__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_x0__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_x0__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_x0__DOT__shift_clr = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_x0__DOT__serial_bit = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_x0__DOT__Q = VL_RAND_RESET_I(8);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_x1__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_x1__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_x1__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_x1__DOT__shift_clr = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_x1__DOT__serial_bit = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_x1__DOT__Q = VL_RAND_RESET_I(8);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_y0__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_y0__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_y0__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_y0__DOT__shift_clr = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_y0__DOT__serial_bit = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_y0__DOT__Q = VL_RAND_RESET_I(8);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_y1__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_y1__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_y1__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_y1__DOT__shift_clr = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_y1__DOT__serial_bit = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_y1__DOT__Q = VL_RAND_RESET_I(8);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_z0__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_z0__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_z0__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_z0__DOT__shift_clr = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_z0__DOT__serial_bit = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_z0__DOT__Q = VL_RAND_RESET_I(8);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_z1__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_z1__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_z1__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_z1__DOT__shift_clr = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_z1__DOT__serial_bit = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_z1__DOT__Q = VL_RAND_RESET_I(8);
    vlSelf->Mini_NPU__DOT__x_axis__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__x_axis__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__x_axis__DOT__stop = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__x_axis__DOT__data_avail = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__x_axis__DOT__abort = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__x_axis__DOT__data = VL_RAND_RESET_I(16);
    vlSelf->Mini_NPU__DOT__x_axis__DOT__activate1 = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__x_axis__DOT__activate2 = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__x_axis__DOT__AltB = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__x_axis__DOT__AeqB = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__x_axis__DOT__AgtB = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__x_axis__DOT__d1_en = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__x_axis__DOT__d2_en = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__x_axis__DOT__d2n_en = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__x_axis__DOT__d1_clr = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__x_axis__DOT__d2_clr = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__x_axis__DOT__d2n_clr = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__x_axis__DOT__data1 = VL_RAND_RESET_I(16);
    vlSelf->Mini_NPU__DOT__x_axis__DOT__data2 = VL_RAND_RESET_I(16);
    vlSelf->Mini_NPU__DOT__x_axis__DOT__data2_next = VL_RAND_RESET_I(16);
    vlSelf->Mini_NPU__DOT__x_axis__DOT__an_state = VL_RAND_RESET_I(3);
    vlSelf->Mini_NPU__DOT__x_axis__DOT__an_nextState = VL_RAND_RESET_I(3);
    vlSelf->Mini_NPU__DOT__y_axis__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__y_axis__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__y_axis__DOT__stop = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__y_axis__DOT__data_avail = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__y_axis__DOT__abort = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__y_axis__DOT__data = VL_RAND_RESET_I(16);
    vlSelf->Mini_NPU__DOT__y_axis__DOT__activate1 = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__y_axis__DOT__activate2 = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__y_axis__DOT__AltB = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__y_axis__DOT__AeqB = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__y_axis__DOT__AgtB = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__y_axis__DOT__d1_en = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__y_axis__DOT__d2_en = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__y_axis__DOT__d2n_en = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__y_axis__DOT__d1_clr = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__y_axis__DOT__d2_clr = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__y_axis__DOT__d2n_clr = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__y_axis__DOT__data1 = VL_RAND_RESET_I(16);
    vlSelf->Mini_NPU__DOT__y_axis__DOT__data2 = VL_RAND_RESET_I(16);
    vlSelf->Mini_NPU__DOT__y_axis__DOT__data2_next = VL_RAND_RESET_I(16);
    vlSelf->Mini_NPU__DOT__y_axis__DOT__an_state = VL_RAND_RESET_I(3);
    vlSelf->Mini_NPU__DOT__y_axis__DOT__an_nextState = VL_RAND_RESET_I(3);
    vlSelf->Mini_NPU__DOT__z_axis__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__z_axis__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__z_axis__DOT__stop = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__z_axis__DOT__data_avail = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__z_axis__DOT__abort = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__z_axis__DOT__data = VL_RAND_RESET_I(16);
    vlSelf->Mini_NPU__DOT__z_axis__DOT__activate1 = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__z_axis__DOT__activate2 = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__z_axis__DOT__AltB = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__z_axis__DOT__AeqB = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__z_axis__DOT__AgtB = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__z_axis__DOT__d1_en = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__z_axis__DOT__d2_en = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__z_axis__DOT__d2n_en = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__z_axis__DOT__d1_clr = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__z_axis__DOT__d2_clr = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__z_axis__DOT__d2n_clr = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__z_axis__DOT__data1 = VL_RAND_RESET_I(16);
    vlSelf->Mini_NPU__DOT__z_axis__DOT__data2 = VL_RAND_RESET_I(16);
    vlSelf->Mini_NPU__DOT__z_axis__DOT__data2_next = VL_RAND_RESET_I(16);
    vlSelf->Mini_NPU__DOT__z_axis__DOT__an_state = VL_RAND_RESET_I(3);
    vlSelf->Mini_NPU__DOT__z_axis__DOT__an_nextState = VL_RAND_RESET_I(3);
    vlSelf->Mini_NPU__DOT__left__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__left__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__left__DOT__activated = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__left__DOT__fire = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__left__DOT__CLK_FRQ = VL_RAND_RESET_I(24);
    vlSelf->Mini_NPU__DOT__left__DOT__cycle_en = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__left__DOT__cycle_reset = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__left__DOT__accum_up = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__left__DOT__accum_down = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__left__DOT__accum_reset = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__left__DOT__cycle = VL_RAND_RESET_I(24);
    vlSelf->Mini_NPU__DOT__left__DOT__accum = VL_RAND_RESET_I(7);
    vlSelf->Mini_NPU__DOT__left__DOT__mn_state = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__left__DOT__mn_nextState = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__right__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__right__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__right__DOT__activated = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__right__DOT__fire = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__right__DOT__CLK_FRQ = VL_RAND_RESET_I(24);
    vlSelf->Mini_NPU__DOT__right__DOT__cycle_en = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__right__DOT__cycle_reset = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__right__DOT__accum_up = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__right__DOT__accum_down = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__right__DOT__accum_reset = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__right__DOT__cycle = VL_RAND_RESET_I(24);
    vlSelf->Mini_NPU__DOT__right__DOT__accum = VL_RAND_RESET_I(7);
    vlSelf->Mini_NPU__DOT__right__DOT__mn_state = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__right__DOT__mn_nextState = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__back__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__back__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__back__DOT__activated = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__back__DOT__fire = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__back__DOT__CLK_FRQ = VL_RAND_RESET_I(24);
    vlSelf->Mini_NPU__DOT__back__DOT__cycle_en = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__back__DOT__cycle_reset = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__back__DOT__accum_up = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__back__DOT__accum_down = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__back__DOT__accum_reset = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__back__DOT__cycle = VL_RAND_RESET_I(24);
    vlSelf->Mini_NPU__DOT__back__DOT__accum = VL_RAND_RESET_I(7);
    vlSelf->Mini_NPU__DOT__back__DOT__mn_state = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__back__DOT__mn_nextState = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__forward__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__forward__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__forward__DOT__activated = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__forward__DOT__fire = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__forward__DOT__CLK_FRQ = VL_RAND_RESET_I(24);
    vlSelf->Mini_NPU__DOT__forward__DOT__cycle_en = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__forward__DOT__cycle_reset = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__forward__DOT__accum_up = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__forward__DOT__accum_down = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__forward__DOT__accum_reset = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__forward__DOT__cycle = VL_RAND_RESET_I(24);
    vlSelf->Mini_NPU__DOT__forward__DOT__accum = VL_RAND_RESET_I(7);
    vlSelf->Mini_NPU__DOT__forward__DOT__mn_state = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__forward__DOT__mn_nextState = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__down__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__down__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__down__DOT__activated = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__down__DOT__fire = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__down__DOT__CLK_FRQ = VL_RAND_RESET_I(24);
    vlSelf->Mini_NPU__DOT__down__DOT__cycle_en = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__down__DOT__cycle_reset = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__down__DOT__accum_up = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__down__DOT__accum_down = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__down__DOT__accum_reset = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__down__DOT__cycle = VL_RAND_RESET_I(24);
    vlSelf->Mini_NPU__DOT__down__DOT__accum = VL_RAND_RESET_I(7);
    vlSelf->Mini_NPU__DOT__down__DOT__mn_state = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__down__DOT__mn_nextState = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__up__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__up__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__up__DOT__activated = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__up__DOT__fire = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__up__DOT__CLK_FRQ = VL_RAND_RESET_I(24);
    vlSelf->Mini_NPU__DOT__up__DOT__cycle_en = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__up__DOT__cycle_reset = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__up__DOT__accum_up = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__up__DOT__accum_down = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__up__DOT__accum_reset = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__up__DOT__cycle = VL_RAND_RESET_I(24);
    vlSelf->Mini_NPU__DOT__up__DOT__accum = VL_RAND_RESET_I(7);
    vlSelf->Mini_NPU__DOT__up__DOT__mn_state = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__up__DOT__mn_nextState = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__led_c__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__led_c__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__led_c__DOT__fired_array = VL_RAND_RESET_I(8);
    vlSelf->Mini_NPU__DOT__led_c__DOT__LEDs = VL_RAND_RESET_I(8);
    vlSelf->Mini_NPU__DOT__led_c__DOT__CLK_FRQ = VL_RAND_RESET_I(24);
    vlSelf->Mini_NPU__DOT__led_c__DOT__count_done = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__led_c__DOT__count_down = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__led_c__DOT__count_reset = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__led_c__DOT__led_en = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__led_c__DOT__led_reset = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__led_c__DOT__fired_clr = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__led_c__DOT__count = VL_RAND_RESET_I(25);
    vlSelf->Mini_NPU__DOT__led_c__DOT__led_state = VL_RAND_RESET_I(1);
    vlSelf->Mini_NPU__DOT__led_c__DOT__led_nextState = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = VL_RAND_RESET_I(1);
}
