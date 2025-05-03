// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

extern const VlUnpacked<CData/*0:0*/, 8> Vtop__ConstPool__TABLE_ha6e3e4ba_0;
extern const VlUnpacked<CData/*0:0*/, 8> Vtop__ConstPool__TABLE_h2dc28e24_0;
extern const VlUnpacked<CData/*0:0*/, 8> Vtop__ConstPool__TABLE_h5b88da62_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtop__ConstPool__TABLE_h8e0147ef_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtop__ConstPool__TABLE_hcbeb02c1_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtop__ConstPool__TABLE_h82edd3c6_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vtop__ConstPool__TABLE_h8aaa24a6_0;

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*2:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*2:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*2:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*2:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*2:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*2:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    // Body
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__X1_DATA = vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_x1__DOT__Q;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__X0_DATA = vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_x0__DOT__Q;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__Y1_DATA = vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_y1__DOT__Q;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__Y0_DATA = vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_y0__DOT__Q;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__Z1_DATA = vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_z1__DOT__Q;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__Z0_DATA = vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_z0__DOT__Q;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__i_up = 0U;
    vlSelf->Mini_NPU__DOT__left__DOT__accum_down = 
        (vlSelf->Mini_NPU__DOT__left__DOT__CLK_FRQ 
         == vlSelf->Mini_NPU__DOT__left__DOT__cycle);
    vlSelf->Mini_NPU__DOT__right__DOT__accum_down = 
        (vlSelf->Mini_NPU__DOT__right__DOT__CLK_FRQ 
         == vlSelf->Mini_NPU__DOT__right__DOT__cycle);
    vlSelf->Mini_NPU__DOT__back__DOT__accum_down = 
        (vlSelf->Mini_NPU__DOT__back__DOT__CLK_FRQ 
         == vlSelf->Mini_NPU__DOT__back__DOT__cycle);
    vlSelf->Mini_NPU__DOT__forward__DOT__accum_down 
        = (vlSelf->Mini_NPU__DOT__forward__DOT__CLK_FRQ 
           == vlSelf->Mini_NPU__DOT__forward__DOT__cycle);
    vlSelf->Mini_NPU__DOT__down__DOT__accum_down = 
        (vlSelf->Mini_NPU__DOT__down__DOT__CLK_FRQ 
         == vlSelf->Mini_NPU__DOT__down__DOT__cycle);
    vlSelf->Mini_NPU__DOT__up__DOT__accum_down = (vlSelf->Mini_NPU__DOT__up__DOT__CLK_FRQ 
                                                  == vlSelf->Mini_NPU__DOT__up__DOT__cycle);
    vlSelf->Mini_NPU__DOT__start = vlSelf->start;
    vlSelf->Mini_NPU__DOT__SDA_in = vlSelf->SDA_in;
    vlSelf->LEDs = vlSelf->Mini_NPU__DOT__led_c__DOT__LEDs;
    vlSelf->Mini_NPU__DOT__X_DATA = (((IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_x1__DOT__Q) 
                                      << 8U) | (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_x0__DOT__Q));
    vlSelf->Mini_NPU__DOT__Y_DATA = (((IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_y1__DOT__Q) 
                                      << 8U) | (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_y0__DOT__Q));
    vlSelf->Mini_NPU__DOT__Z_DATA = (((IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_z1__DOT__Q) 
                                      << 8U) | (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_z0__DOT__Q));
    vlSelf->Mini_NPU__DOT__stop = vlSelf->stop;
    vlSelf->Mini_NPU__DOT__led_c__DOT__count_done = 
        (0U == vlSelf->Mini_NPU__DOT__led_c__DOT__count);
    vlSelf->Mini_NPU__DOT__x_axis__DOT__AgtB = 0U;
    vlSelf->Mini_NPU__DOT__x_axis__DOT__AeqB = 0U;
    vlSelf->Mini_NPU__DOT__y_axis__DOT__AgtB = 0U;
    vlSelf->Mini_NPU__DOT__y_axis__DOT__AeqB = 0U;
    vlSelf->Mini_NPU__DOT__z_axis__DOT__AgtB = 0U;
    vlSelf->Mini_NPU__DOT__z_axis__DOT__AeqB = 0U;
    vlSelf->Mini_NPU__DOT__left_fired = (0x59U == (IData)(vlSelf->Mini_NPU__DOT__left__DOT__accum));
    vlSelf->Mini_NPU__DOT__right_fired = (0x59U == (IData)(vlSelf->Mini_NPU__DOT__right__DOT__accum));
    vlSelf->Mini_NPU__DOT__back_fired = (0x59U == (IData)(vlSelf->Mini_NPU__DOT__back__DOT__accum));
    vlSelf->Mini_NPU__DOT__forward_fired = (0x59U == (IData)(vlSelf->Mini_NPU__DOT__forward__DOT__accum));
    vlSelf->Mini_NPU__DOT__down_fired = (0x59U == (IData)(vlSelf->Mini_NPU__DOT__down__DOT__accum));
    vlSelf->Mini_NPU__DOT__up_fired = (0x59U == (IData)(vlSelf->Mini_NPU__DOT__up__DOT__accum));
    vlSelf->Mini_NPU__DOT__clock = vlSelf->clock;
    vlSelf->Mini_NPU__DOT__reset = vlSelf->reset;
    vlSelf->Mini_NPU__DOT__x_axis__DOT__AltB = 0U;
    if (((IData)(vlSelf->Mini_NPU__DOT__x_axis__DOT__data1) 
         == (IData)(vlSelf->Mini_NPU__DOT__x_axis__DOT__data2))) {
        vlSelf->Mini_NPU__DOT__x_axis__DOT__AgtB = 0U;
        vlSelf->Mini_NPU__DOT__x_axis__DOT__AeqB = 1U;
        vlSelf->Mini_NPU__DOT__x_axis__DOT__AltB = 0U;
    } else if ((IData)(((~ ((IData)(vlSelf->Mini_NPU__DOT__x_axis__DOT__data1) 
                            >> 0xfU)) & ((IData)(vlSelf->Mini_NPU__DOT__x_axis__DOT__data2) 
                                         >> 0xfU)))) {
        vlSelf->Mini_NPU__DOT__x_axis__DOT__AgtB = 1U;
        vlSelf->Mini_NPU__DOT__x_axis__DOT__AeqB = 0U;
        vlSelf->Mini_NPU__DOT__x_axis__DOT__AltB = 0U;
    } else if ((IData)((((IData)(vlSelf->Mini_NPU__DOT__x_axis__DOT__data1) 
                         >> 0xfU) & (~ ((IData)(vlSelf->Mini_NPU__DOT__x_axis__DOT__data2) 
                                        >> 0xfU))))) {
        vlSelf->Mini_NPU__DOT__x_axis__DOT__AgtB = 0U;
        vlSelf->Mini_NPU__DOT__x_axis__DOT__AeqB = 0U;
        vlSelf->Mini_NPU__DOT__x_axis__DOT__AltB = 1U;
    } else if (((IData)(vlSelf->Mini_NPU__DOT__x_axis__DOT__data1) 
                < (IData)(vlSelf->Mini_NPU__DOT__x_axis__DOT__data2))) {
        vlSelf->Mini_NPU__DOT__x_axis__DOT__AgtB = 0U;
        vlSelf->Mini_NPU__DOT__x_axis__DOT__AeqB = 0U;
        vlSelf->Mini_NPU__DOT__x_axis__DOT__AltB = 1U;
    } else if (((IData)(vlSelf->Mini_NPU__DOT__x_axis__DOT__data1) 
                > (IData)(vlSelf->Mini_NPU__DOT__x_axis__DOT__data2))) {
        vlSelf->Mini_NPU__DOT__x_axis__DOT__AgtB = 1U;
        vlSelf->Mini_NPU__DOT__x_axis__DOT__AeqB = 0U;
        vlSelf->Mini_NPU__DOT__x_axis__DOT__AltB = 0U;
    }
    vlSelf->Mini_NPU__DOT__y_axis__DOT__AltB = 0U;
    if (((IData)(vlSelf->Mini_NPU__DOT__y_axis__DOT__data1) 
         == (IData)(vlSelf->Mini_NPU__DOT__y_axis__DOT__data2))) {
        vlSelf->Mini_NPU__DOT__y_axis__DOT__AgtB = 0U;
        vlSelf->Mini_NPU__DOT__y_axis__DOT__AeqB = 1U;
        vlSelf->Mini_NPU__DOT__y_axis__DOT__AltB = 0U;
    } else if ((IData)(((~ ((IData)(vlSelf->Mini_NPU__DOT__y_axis__DOT__data1) 
                            >> 0xfU)) & ((IData)(vlSelf->Mini_NPU__DOT__y_axis__DOT__data2) 
                                         >> 0xfU)))) {
        vlSelf->Mini_NPU__DOT__y_axis__DOT__AgtB = 1U;
        vlSelf->Mini_NPU__DOT__y_axis__DOT__AeqB = 0U;
        vlSelf->Mini_NPU__DOT__y_axis__DOT__AltB = 0U;
    } else if ((IData)((((IData)(vlSelf->Mini_NPU__DOT__y_axis__DOT__data1) 
                         >> 0xfU) & (~ ((IData)(vlSelf->Mini_NPU__DOT__y_axis__DOT__data2) 
                                        >> 0xfU))))) {
        vlSelf->Mini_NPU__DOT__y_axis__DOT__AgtB = 0U;
        vlSelf->Mini_NPU__DOT__y_axis__DOT__AeqB = 0U;
        vlSelf->Mini_NPU__DOT__y_axis__DOT__AltB = 1U;
    } else if (((IData)(vlSelf->Mini_NPU__DOT__y_axis__DOT__data1) 
                < (IData)(vlSelf->Mini_NPU__DOT__y_axis__DOT__data2))) {
        vlSelf->Mini_NPU__DOT__y_axis__DOT__AgtB = 0U;
        vlSelf->Mini_NPU__DOT__y_axis__DOT__AeqB = 0U;
        vlSelf->Mini_NPU__DOT__y_axis__DOT__AltB = 1U;
    } else if (((IData)(vlSelf->Mini_NPU__DOT__y_axis__DOT__data1) 
                > (IData)(vlSelf->Mini_NPU__DOT__y_axis__DOT__data2))) {
        vlSelf->Mini_NPU__DOT__y_axis__DOT__AgtB = 1U;
        vlSelf->Mini_NPU__DOT__y_axis__DOT__AeqB = 0U;
        vlSelf->Mini_NPU__DOT__y_axis__DOT__AltB = 0U;
    }
    vlSelf->Mini_NPU__DOT__z_axis__DOT__AltB = 0U;
    if (((IData)(vlSelf->Mini_NPU__DOT__z_axis__DOT__data1) 
         == (IData)(vlSelf->Mini_NPU__DOT__z_axis__DOT__data2))) {
        vlSelf->Mini_NPU__DOT__z_axis__DOT__AgtB = 0U;
        vlSelf->Mini_NPU__DOT__z_axis__DOT__AeqB = 1U;
        vlSelf->Mini_NPU__DOT__z_axis__DOT__AltB = 0U;
    } else if ((IData)(((~ ((IData)(vlSelf->Mini_NPU__DOT__z_axis__DOT__data1) 
                            >> 0xfU)) & ((IData)(vlSelf->Mini_NPU__DOT__z_axis__DOT__data2) 
                                         >> 0xfU)))) {
        vlSelf->Mini_NPU__DOT__z_axis__DOT__AgtB = 1U;
        vlSelf->Mini_NPU__DOT__z_axis__DOT__AeqB = 0U;
        vlSelf->Mini_NPU__DOT__z_axis__DOT__AltB = 0U;
    } else if ((IData)((((IData)(vlSelf->Mini_NPU__DOT__z_axis__DOT__data1) 
                         >> 0xfU) & (~ ((IData)(vlSelf->Mini_NPU__DOT__z_axis__DOT__data2) 
                                        >> 0xfU))))) {
        vlSelf->Mini_NPU__DOT__z_axis__DOT__AgtB = 0U;
        vlSelf->Mini_NPU__DOT__z_axis__DOT__AeqB = 0U;
        vlSelf->Mini_NPU__DOT__z_axis__DOT__AltB = 1U;
    } else if (((IData)(vlSelf->Mini_NPU__DOT__z_axis__DOT__data1) 
                < (IData)(vlSelf->Mini_NPU__DOT__z_axis__DOT__data2))) {
        vlSelf->Mini_NPU__DOT__z_axis__DOT__AgtB = 0U;
        vlSelf->Mini_NPU__DOT__z_axis__DOT__AeqB = 0U;
        vlSelf->Mini_NPU__DOT__z_axis__DOT__AltB = 1U;
    } else if (((IData)(vlSelf->Mini_NPU__DOT__z_axis__DOT__data1) 
                > (IData)(vlSelf->Mini_NPU__DOT__z_axis__DOT__data2))) {
        vlSelf->Mini_NPU__DOT__z_axis__DOT__AgtB = 1U;
        vlSelf->Mini_NPU__DOT__z_axis__DOT__AeqB = 0U;
        vlSelf->Mini_NPU__DOT__z_axis__DOT__AltB = 0U;
    }
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__INT_SOURCE = vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_source__DOT__Q;
    vlSelf->Mini_NPU__DOT__write = vlSelf->Mini_NPU__DOT__ph__DOT__write;
    vlSelf->Mini_NPU__DOT__data_read = vlSelf->Mini_NPU__DOT__ph__DOT__data_read;
    vlSelf->Mini_NPU__DOT__poll = vlSelf->Mini_NPU__DOT__ph__DOT__poll;
    vlSelf->Mini_NPU__DOT__ph__DOT__start = vlSelf->Mini_NPU__DOT__start;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__SDA_in = vlSelf->Mini_NPU__DOT__SDA_in;
    vlSelf->Mini_NPU__DOT__LEDs = vlSelf->LEDs;
    vlSelf->Mini_NPU__DOT__x_axis__DOT__data = vlSelf->Mini_NPU__DOT__X_DATA;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__X_DATA = vlSelf->Mini_NPU__DOT__X_DATA;
    vlSelf->Mini_NPU__DOT__y_axis__DOT__data = vlSelf->Mini_NPU__DOT__Y_DATA;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__Y_DATA = vlSelf->Mini_NPU__DOT__Y_DATA;
    vlSelf->Mini_NPU__DOT__z_axis__DOT__data = vlSelf->Mini_NPU__DOT__Z_DATA;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__Z_DATA = vlSelf->Mini_NPU__DOT__Z_DATA;
    vlSelf->Mini_NPU__DOT__ph__DOT__stop = vlSelf->Mini_NPU__DOT__stop;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__stop = vlSelf->Mini_NPU__DOT__stop;
    vlSelf->Mini_NPU__DOT__x_axis__DOT__stop = vlSelf->Mini_NPU__DOT__stop;
    vlSelf->Mini_NPU__DOT__y_axis__DOT__stop = vlSelf->Mini_NPU__DOT__stop;
    vlSelf->Mini_NPU__DOT__z_axis__DOT__stop = vlSelf->Mini_NPU__DOT__stop;
    vlSelf->Mini_NPU__DOT__led_c__DOT__led_reset = 0U;
    vlSelf->Mini_NPU__DOT__led_c__DOT__count_reset = 0U;
    vlSelf->Mini_NPU__DOT__left__DOT__fire = vlSelf->Mini_NPU__DOT__left_fired;
    vlSelf->Mini_NPU__DOT__right__DOT__fire = vlSelf->Mini_NPU__DOT__right_fired;
    vlSelf->Mini_NPU__DOT__back__DOT__fire = vlSelf->Mini_NPU__DOT__back_fired;
    vlSelf->Mini_NPU__DOT__forward__DOT__fire = vlSelf->Mini_NPU__DOT__forward_fired;
    vlSelf->Mini_NPU__DOT__down__DOT__fire = vlSelf->Mini_NPU__DOT__down_fired;
    vlSelf->Mini_NPU__DOT__up__DOT__fire = vlSelf->Mini_NPU__DOT__up_fired;
    vlSelf->Mini_NPU__DOT__fired_array = (((IData)(vlSelf->Mini_NPU__DOT__left_fired) 
                                           << 5U) | 
                                          (((IData)(vlSelf->Mini_NPU__DOT__right_fired) 
                                            << 4U) 
                                           | (((IData)(vlSelf->Mini_NPU__DOT__back_fired) 
                                               << 3U) 
                                              | (((IData)(vlSelf->Mini_NPU__DOT__forward_fired) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->Mini_NPU__DOT__down_fired) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->Mini_NPU__DOT__up_fired))))));
    vlSelf->Mini_NPU__DOT__ph__DOT__clock = vlSelf->Mini_NPU__DOT__clock;
    vlSelf->Mini_NPU__DOT__x_axis__DOT__clock = vlSelf->Mini_NPU__DOT__clock;
    vlSelf->Mini_NPU__DOT__y_axis__DOT__clock = vlSelf->Mini_NPU__DOT__clock;
    vlSelf->Mini_NPU__DOT__z_axis__DOT__clock = vlSelf->Mini_NPU__DOT__clock;
    vlSelf->Mini_NPU__DOT__left__DOT__clock = vlSelf->Mini_NPU__DOT__clock;
    vlSelf->Mini_NPU__DOT__right__DOT__clock = vlSelf->Mini_NPU__DOT__clock;
    vlSelf->Mini_NPU__DOT__back__DOT__clock = vlSelf->Mini_NPU__DOT__clock;
    vlSelf->Mini_NPU__DOT__forward__DOT__clock = vlSelf->Mini_NPU__DOT__clock;
    vlSelf->Mini_NPU__DOT__down__DOT__clock = vlSelf->Mini_NPU__DOT__clock;
    vlSelf->Mini_NPU__DOT__up__DOT__clock = vlSelf->Mini_NPU__DOT__clock;
    vlSelf->Mini_NPU__DOT__led_c__DOT__clock = vlSelf->Mini_NPU__DOT__clock;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__clock = vlSelf->Mini_NPU__DOT__clock;
    vlSelf->Mini_NPU__DOT__ph__DOT__reset = vlSelf->Mini_NPU__DOT__reset;
    vlSelf->Mini_NPU__DOT__x_axis__DOT__reset = vlSelf->Mini_NPU__DOT__reset;
    vlSelf->Mini_NPU__DOT__y_axis__DOT__reset = vlSelf->Mini_NPU__DOT__reset;
    vlSelf->Mini_NPU__DOT__z_axis__DOT__reset = vlSelf->Mini_NPU__DOT__reset;
    vlSelf->Mini_NPU__DOT__left__DOT__reset = vlSelf->Mini_NPU__DOT__reset;
    vlSelf->Mini_NPU__DOT__right__DOT__reset = vlSelf->Mini_NPU__DOT__reset;
    vlSelf->Mini_NPU__DOT__back__DOT__reset = vlSelf->Mini_NPU__DOT__reset;
    vlSelf->Mini_NPU__DOT__forward__DOT__reset = vlSelf->Mini_NPU__DOT__reset;
    vlSelf->Mini_NPU__DOT__down__DOT__reset = vlSelf->Mini_NPU__DOT__reset;
    vlSelf->Mini_NPU__DOT__up__DOT__reset = vlSelf->Mini_NPU__DOT__reset;
    vlSelf->Mini_NPU__DOT__led_c__DOT__reset = vlSelf->Mini_NPU__DOT__reset;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__reset = vlSelf->Mini_NPU__DOT__reset;
    vlSelf->Mini_NPU__DOT__x_axis__DOT__activate1 = 0U;
    vlSelf->Mini_NPU__DOT__x_axis__DOT__activate2 = 0U;
    vlSelf->Mini_NPU__DOT__y_axis__DOT__activate1 = 0U;
    vlSelf->Mini_NPU__DOT__y_axis__DOT__activate2 = 0U;
    vlSelf->Mini_NPU__DOT__z_axis__DOT__activate1 = 0U;
    vlSelf->Mini_NPU__DOT__z_axis__DOT__activate2 = 0U;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__write = vlSelf->Mini_NPU__DOT__write;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__write_done = 0U;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_read = vlSelf->Mini_NPU__DOT__data_read;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__poll = vlSelf->Mini_NPU__DOT__poll;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__count_reset = 0U;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__count_en = 0U;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__i_clr = 0U;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count_reset = 0U;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count_en = 0U;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_clr_s = 0U;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_clr_z1 = 0U;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_clr_z0 = 0U;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_in_s = 0U;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_in_x1 = 0U;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_clr_x0 = 0U;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_clr_x1 = 0U;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_in_y0 = 0U;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_in_y1 = 0U;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_clr_y0 = 0U;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_clr_y1 = 0U;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_in_z0 = 0U;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_in_z1 = 0U;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_in_x0 = 0U;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__scl_out_en = 0U;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__SCL_out = 0U;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_ready = 0U;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__read_done = 0U;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_avail = 0U;
    if ((1U & (~ ((((((((0U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state)) 
                        | (1U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) 
                       | (2U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) 
                      | (3U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) 
                     | (4U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) 
                    | (0xdU == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) 
                   | (5U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) 
                  | (6U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state)))))) {
        if ((7U != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
            if ((8U != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                if ((9U != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                    if ((0xaU != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                        if ((0xbU != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                            if ((0xcU == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                                if (vlSelf->Mini_NPU__DOT__write) {
                                    vlSelf->Mini_NPU__DOT__i2c_m__DOT__write_done = 1U;
                                }
                                if ((1U & (~ (IData)(vlSelf->Mini_NPU__DOT__write)))) {
                                    if (((IData)(vlSelf->Mini_NPU__DOT__poll) 
                                         & (~ ((IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__INT_SOURCE) 
                                               >> 7U)))) {
                                        vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_clr_s = 1U;
                                    } else if (((IData)(vlSelf->Mini_NPU__DOT__poll) 
                                                & ((IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__INT_SOURCE) 
                                                   >> 7U))) {
                                        vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_clr_s = 1U;
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->Mini_NPU__DOT__poll) 
                                                  & (~ 
                                                     ((IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__INT_SOURCE) 
                                                      >> 7U)))))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->Mini_NPU__DOT__poll) 
                                                    & ((IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__INT_SOURCE) 
                                                       >> 7U))))) {
                                            if (vlSelf->Mini_NPU__DOT__data_read) {
                                                vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_clr_z1 = 1U;
                                                vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_clr_z0 = 1U;
                                                vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_clr_x0 = 1U;
                                                vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_clr_x1 = 1U;
                                                vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_clr_y0 = 1U;
                                                vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_clr_y1 = 1U;
                                                vlSelf->Mini_NPU__DOT__i2c_m__DOT__read_done = 1U;
                                            }
                                        }
                                        if (((IData)(vlSelf->Mini_NPU__DOT__poll) 
                                             & ((IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__INT_SOURCE) 
                                                >> 7U))) {
                                            vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_ready = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((7U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
            if ((1U & (~ ((IData)(vlSelf->Mini_NPU__DOT__poll) 
                          & (0U < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__count)))))) {
                if ((1U & (~ ((IData)(vlSelf->Mini_NPU__DOT__poll) 
                              & (0U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__count)))))) {
                    if ((1U & (~ ((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                                  & (7U >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))))) {
                        if ((((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                              & (7U < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count))) 
                             & (0xfU >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))) {
                            vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_in_x1 = 1U;
                        }
                        if ((1U & (~ (((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                                       & (7U < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count))) 
                                      & (0xfU >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))))) {
                            if ((((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                                  & (0xfU < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count))) 
                                 & (0x17U >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))) {
                                vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_in_y0 = 1U;
                            }
                            if ((1U & (~ (((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                                           & (0xfU 
                                              < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count))) 
                                          & (0x17U 
                                             >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))))) {
                                if ((((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                                      & (0x17U < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count))) 
                                     & (0x1fU >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))) {
                                    vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_in_y1 = 1U;
                                }
                                if ((1U & (~ (((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                                               & (0x17U 
                                                  < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count))) 
                                              & (0x1fU 
                                                 >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))))) {
                                    if ((((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                                          & (0x1fU 
                                             < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count))) 
                                         & (0x27U >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))) {
                                        vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_in_z0 = 1U;
                                    }
                                    if ((1U & (~ (((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                                                   & (0x1fU 
                                                      < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count))) 
                                                  & (0x27U 
                                                     >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))))) {
                                        if ((((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                                              & (0x27U 
                                                 < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count))) 
                                             & (0x2fU 
                                                >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))) {
                                            vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_in_z1 = 1U;
                                        }
                                        if ((1U & (~ 
                                                   (((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                                                     & (0x27U 
                                                        < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count))) 
                                                    & (0x2fU 
                                                       >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))))) {
                                            if (((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                                                 & (0x30U 
                                                    == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))) {
                                                vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_avail = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sda_out_en = 0U;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sub_addr = 0U;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sub_addr = ((IData)(vlSelf->Mini_NPU__DOT__write)
                                                    ? (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__FIFO_CTL_addr)
                                                    : 
                                                   ((IData)(vlSelf->Mini_NPU__DOT__poll)
                                                     ? (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__INT_SOURCE_addr)
                                                     : 
                                                    ((IData)(vlSelf->Mini_NPU__DOT__data_read)
                                                      ? (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__DATAX0_addr)
                                                      : (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__sub_addr))));
    vlSelf->Mini_NPU__DOT__led_c__DOT__fired_array 
        = vlSelf->Mini_NPU__DOT__fired_array;
    vlSelf->Mini_NPU__DOT__led_c__DOT__led_en = 0U;
    if ((1U & (~ (IData)(vlSelf->Mini_NPU__DOT__led_c__DOT__led_state)))) {
        if ((0U != (IData)(vlSelf->Mini_NPU__DOT__fired_array))) {
            if ((0U < (IData)(vlSelf->Mini_NPU__DOT__fired_array))) {
                vlSelf->Mini_NPU__DOT__led_c__DOT__led_en = 1U;
            }
        }
    }
    vlSelf->Mini_NPU__DOT__led_c__DOT__led_nextState = 0U;
    vlSelf->Mini_NPU__DOT__led_c__DOT__count_down = 0U;
    if (vlSelf->Mini_NPU__DOT__led_c__DOT__led_state) {
        if (vlSelf->Mini_NPU__DOT__led_c__DOT__led_state) {
            if (vlSelf->Mini_NPU__DOT__led_c__DOT__count_done) {
                if (vlSelf->Mini_NPU__DOT__led_c__DOT__count_done) {
                    vlSelf->Mini_NPU__DOT__led_c__DOT__led_reset = 1U;
                    vlSelf->Mini_NPU__DOT__led_c__DOT__count_reset = 1U;
                    vlSelf->Mini_NPU__DOT__led_c__DOT__led_nextState = 0U;
                }
            } else {
                vlSelf->Mini_NPU__DOT__led_c__DOT__led_nextState = 1U;
            }
            if ((1U & (~ (IData)(vlSelf->Mini_NPU__DOT__led_c__DOT__count_done)))) {
                vlSelf->Mini_NPU__DOT__led_c__DOT__count_down = 1U;
            }
        }
    } else {
        if ((0U == (IData)(vlSelf->Mini_NPU__DOT__fired_array))) {
            vlSelf->Mini_NPU__DOT__led_c__DOT__led_nextState = 0U;
        } else if ((0U < (IData)(vlSelf->Mini_NPU__DOT__fired_array))) {
            vlSelf->Mini_NPU__DOT__led_c__DOT__led_nextState = 1U;
        }
        if ((0U != (IData)(vlSelf->Mini_NPU__DOT__fired_array))) {
            if ((0U < (IData)(vlSelf->Mini_NPU__DOT__fired_array))) {
                vlSelf->Mini_NPU__DOT__led_c__DOT__count_down = 1U;
            }
        }
    }
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_source__DOT__clock 
        = vlSelf->Mini_NPU__DOT__i2c_m__DOT__clock;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_x0__DOT__clock 
        = vlSelf->Mini_NPU__DOT__i2c_m__DOT__clock;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_x1__DOT__clock 
        = vlSelf->Mini_NPU__DOT__i2c_m__DOT__clock;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_y0__DOT__clock 
        = vlSelf->Mini_NPU__DOT__i2c_m__DOT__clock;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_y1__DOT__clock 
        = vlSelf->Mini_NPU__DOT__i2c_m__DOT__clock;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_z0__DOT__clock 
        = vlSelf->Mini_NPU__DOT__i2c_m__DOT__clock;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_z1__DOT__clock 
        = vlSelf->Mini_NPU__DOT__i2c_m__DOT__clock;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_source__DOT__reset 
        = vlSelf->Mini_NPU__DOT__i2c_m__DOT__reset;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_x0__DOT__reset 
        = vlSelf->Mini_NPU__DOT__i2c_m__DOT__reset;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_x1__DOT__reset 
        = vlSelf->Mini_NPU__DOT__i2c_m__DOT__reset;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_y0__DOT__reset 
        = vlSelf->Mini_NPU__DOT__i2c_m__DOT__reset;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_y1__DOT__reset 
        = vlSelf->Mini_NPU__DOT__i2c_m__DOT__reset;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_z0__DOT__reset 
        = vlSelf->Mini_NPU__DOT__i2c_m__DOT__reset;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_z1__DOT__reset 
        = vlSelf->Mini_NPU__DOT__i2c_m__DOT__reset;
    if ((0U != (IData)(vlSelf->Mini_NPU__DOT__x_axis__DOT__an_state))) {
        if ((1U != (IData)(vlSelf->Mini_NPU__DOT__x_axis__DOT__an_state))) {
            if ((2U == (IData)(vlSelf->Mini_NPU__DOT__x_axis__DOT__an_state))) {
                if (vlSelf->Mini_NPU__DOT__x_axis__DOT__AltB) {
                    vlSelf->Mini_NPU__DOT__x_axis__DOT__activate1 = 1U;
                }
                if ((1U & (~ (IData)(vlSelf->Mini_NPU__DOT__x_axis__DOT__AltB)))) {
                    if ((1U & (~ (IData)(vlSelf->Mini_NPU__DOT__x_axis__DOT__AeqB)))) {
                        if (vlSelf->Mini_NPU__DOT__x_axis__DOT__AgtB) {
                            vlSelf->Mini_NPU__DOT__x_axis__DOT__activate2 = 1U;
                        }
                    }
                }
            }
        }
        vlSelf->Mini_NPU__DOT__left_activated = vlSelf->Mini_NPU__DOT__x_axis__DOT__activate1;
    } else {
        vlSelf->Mini_NPU__DOT__left_activated = vlSelf->Mini_NPU__DOT__x_axis__DOT__activate1;
    }
    vlSelf->Mini_NPU__DOT__right_activated = vlSelf->Mini_NPU__DOT__x_axis__DOT__activate2;
    if ((0U != (IData)(vlSelf->Mini_NPU__DOT__y_axis__DOT__an_state))) {
        if ((1U != (IData)(vlSelf->Mini_NPU__DOT__y_axis__DOT__an_state))) {
            if ((2U == (IData)(vlSelf->Mini_NPU__DOT__y_axis__DOT__an_state))) {
                if (vlSelf->Mini_NPU__DOT__y_axis__DOT__AltB) {
                    vlSelf->Mini_NPU__DOT__y_axis__DOT__activate1 = 1U;
                }
                if ((1U & (~ (IData)(vlSelf->Mini_NPU__DOT__y_axis__DOT__AltB)))) {
                    if ((1U & (~ (IData)(vlSelf->Mini_NPU__DOT__y_axis__DOT__AeqB)))) {
                        if (vlSelf->Mini_NPU__DOT__y_axis__DOT__AgtB) {
                            vlSelf->Mini_NPU__DOT__y_axis__DOT__activate2 = 1U;
                        }
                    }
                }
            }
        }
        vlSelf->Mini_NPU__DOT__back_activated = vlSelf->Mini_NPU__DOT__y_axis__DOT__activate1;
    } else {
        vlSelf->Mini_NPU__DOT__back_activated = vlSelf->Mini_NPU__DOT__y_axis__DOT__activate1;
    }
    vlSelf->Mini_NPU__DOT__forward_activated = vlSelf->Mini_NPU__DOT__y_axis__DOT__activate2;
    if ((0U != (IData)(vlSelf->Mini_NPU__DOT__z_axis__DOT__an_state))) {
        if ((1U != (IData)(vlSelf->Mini_NPU__DOT__z_axis__DOT__an_state))) {
            if ((2U == (IData)(vlSelf->Mini_NPU__DOT__z_axis__DOT__an_state))) {
                if (vlSelf->Mini_NPU__DOT__z_axis__DOT__AltB) {
                    vlSelf->Mini_NPU__DOT__z_axis__DOT__activate1 = 1U;
                }
                if ((1U & (~ (IData)(vlSelf->Mini_NPU__DOT__z_axis__DOT__AltB)))) {
                    if ((1U & (~ (IData)(vlSelf->Mini_NPU__DOT__z_axis__DOT__AeqB)))) {
                        if (vlSelf->Mini_NPU__DOT__z_axis__DOT__AgtB) {
                            vlSelf->Mini_NPU__DOT__z_axis__DOT__activate2 = 1U;
                        }
                    }
                }
            }
        }
        vlSelf->Mini_NPU__DOT__down_activated = vlSelf->Mini_NPU__DOT__z_axis__DOT__activate1;
    } else {
        vlSelf->Mini_NPU__DOT__down_activated = vlSelf->Mini_NPU__DOT__z_axis__DOT__activate1;
    }
    vlSelf->Mini_NPU__DOT__up_activated = vlSelf->Mini_NPU__DOT__z_axis__DOT__activate2;
    vlSelf->Mini_NPU__DOT__write_done = vlSelf->Mini_NPU__DOT__i2c_m__DOT__write_done;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_source__DOT__shift_clr 
        = vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_clr_s;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_z1__DOT__shift_clr 
        = vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_clr_z1;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_z0__DOT__shift_clr 
        = vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_clr_z0;
    if (((((((((0U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state)) 
               | (1U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) 
              | (2U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) 
             | (3U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) 
            | (4U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) 
           | (0xdU == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) 
          | (5U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) 
         | (6U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state)))) {
        if ((0U != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
            if ((1U != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                if ((2U != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                    if ((3U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                        if ((0U >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__count))) {
                            if ((0U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__count))) {
                                vlSelf->Mini_NPU__DOT__i2c_m__DOT__i_up = 1U;
                            }
                        }
                    }
                    if ((3U != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                        if ((4U != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                            if ((0xdU != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                                if ((5U != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                                    if ((1U & (~ ((1U 
                                                   == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                                                  | ((2U 
                                                      == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                                                     & (IData)(vlSelf->Mini_NPU__DOT__write)))))) {
                                        if ((1U & (~ 
                                                   ((2U 
                                                     == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                                                    & (~ (IData)(vlSelf->Mini_NPU__DOT__write)))))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((3U 
                                                      == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                                                     & (IData)(vlSelf->Mini_NPU__DOT__poll))))) {
                                                if (
                                                    ((3U 
                                                      == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                                                     & (IData)(vlSelf->Mini_NPU__DOT__data_read))) {
                                                    vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count_en = 1U;
                                                    vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_in_x0 = 1U;
                                                }
                                            }
                                            if (((3U 
                                                  == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                                                 & (IData)(vlSelf->Mini_NPU__DOT__poll))) {
                                                vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_in_s = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if ((2U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                    vlSelf->Mini_NPU__DOT__i2c_m__DOT__count_en = 1U;
                } else if ((3U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                    if ((0U < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__count))) {
                        vlSelf->Mini_NPU__DOT__i2c_m__DOT__count_en = 1U;
                    } else if ((0U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__count))) {
                        vlSelf->Mini_NPU__DOT__i2c_m__DOT__count_en = 0U;
                    }
                } else if ((4U != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                    if ((0xdU != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                        if ((5U != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                            if (((1U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                                 | ((2U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                                    & (IData)(vlSelf->Mini_NPU__DOT__write)))) {
                                vlSelf->Mini_NPU__DOT__i2c_m__DOT__count_en = 1U;
                            } else if ((1U & (~ ((2U 
                                                  == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                                                 & (~ (IData)(vlSelf->Mini_NPU__DOT__write)))))) {
                                if (((3U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                                     & (IData)(vlSelf->Mini_NPU__DOT__poll))) {
                                    vlSelf->Mini_NPU__DOT__i2c_m__DOT__count_en = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((0U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
            if ((1U & (~ (((~ (IData)(vlSelf->Mini_NPU__DOT__write)) 
                           & (~ (IData)(vlSelf->Mini_NPU__DOT__poll))) 
                          & (~ (IData)(vlSelf->Mini_NPU__DOT__data_read)))))) {
                if ((((IData)(vlSelf->Mini_NPU__DOT__write) 
                      | (IData)(vlSelf->Mini_NPU__DOT__poll)) 
                     | (IData)(vlSelf->Mini_NPU__DOT__data_read))) {
                    vlSelf->Mini_NPU__DOT__i2c_m__DOT__count_reset = 1U;
                    vlSelf->Mini_NPU__DOT__i2c_m__DOT__i_clr = 1U;
                    vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count_reset = 1U;
                    vlSelf->Mini_NPU__DOT__i2c_m__DOT__scl_out_en = 1U;
                    vlSelf->Mini_NPU__DOT__i2c_m__DOT__SCL_out = 1U;
                }
            }
        } else {
            if ((1U != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                if ((2U != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                    if ((3U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                        if ((0U >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__count))) {
                            if ((0U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__count))) {
                                vlSelf->Mini_NPU__DOT__i2c_m__DOT__count_reset = 1U;
                            }
                        }
                    }
                    if ((3U != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                        if ((4U != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                            if ((0xdU != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                                if ((5U != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                                    if ((1U & (~ ((1U 
                                                   == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                                                  | ((2U 
                                                      == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                                                     & (IData)(vlSelf->Mini_NPU__DOT__write)))))) {
                                        if ((1U & (~ 
                                                   ((2U 
                                                     == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                                                    & (~ (IData)(vlSelf->Mini_NPU__DOT__write)))))) {
                                            if (((3U 
                                                  == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                                                 & (IData)(vlSelf->Mini_NPU__DOT__poll))) {
                                                vlSelf->Mini_NPU__DOT__i2c_m__DOT__i_clr = 1U;
                                            } else if (
                                                       ((3U 
                                                         == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                                                        & (IData)(vlSelf->Mini_NPU__DOT__data_read))) {
                                                vlSelf->Mini_NPU__DOT__i2c_m__DOT__i_clr = 1U;
                                            } else if (
                                                       ((3U 
                                                         == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                                                        & (IData)(vlSelf->Mini_NPU__DOT__write))) {
                                                vlSelf->Mini_NPU__DOT__i2c_m__DOT__i_clr = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((1U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                vlSelf->Mini_NPU__DOT__i2c_m__DOT__scl_out_en = 1U;
                vlSelf->Mini_NPU__DOT__i2c_m__DOT__SCL_out = 1U;
            } else if ((2U != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                if ((3U != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                    if ((4U != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                        if ((0xdU != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                            if ((5U != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                                if ((1U & (~ ((1U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                                              | ((2U 
                                                  == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                                                 & (IData)(vlSelf->Mini_NPU__DOT__write)))))) {
                                    if (((2U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                                         & (~ (IData)(vlSelf->Mini_NPU__DOT__write)))) {
                                        vlSelf->Mini_NPU__DOT__i2c_m__DOT__scl_out_en = 1U;
                                        vlSelf->Mini_NPU__DOT__i2c_m__DOT__SCL_out = 1U;
                                    } else if ((1U 
                                                & (~ 
                                                   ((3U 
                                                     == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                                                    & (IData)(vlSelf->Mini_NPU__DOT__poll))))) {
                                        if ((1U & (~ 
                                                   ((3U 
                                                     == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                                                    & (IData)(vlSelf->Mini_NPU__DOT__data_read))))) {
                                            if (((3U 
                                                  == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                                                 & (IData)(vlSelf->Mini_NPU__DOT__write))) {
                                                vlSelf->Mini_NPU__DOT__i2c_m__DOT__scl_out_en = 1U;
                                                vlSelf->Mini_NPU__DOT__i2c_m__DOT__SCL_out = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_source__DOT__en 
            = vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_in_s;
        vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_x1__DOT__en 
            = vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_in_x1;
        vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_x0__DOT__shift_clr 
            = vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_clr_x0;
        vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_x1__DOT__shift_clr 
            = vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_clr_x1;
        vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_y0__DOT__en 
            = vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_in_y0;
        vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_y1__DOT__en 
            = vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_in_y1;
        vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_y0__DOT__shift_clr 
            = vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_clr_y0;
        vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_y1__DOT__shift_clr 
            = vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_clr_y1;
        vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_z0__DOT__en 
            = vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_in_z0;
        vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_z1__DOT__en 
            = vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_in_z1;
        vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_x0__DOT__en 
            = vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_in_x0;
    } else {
        if ((7U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
            if ((1U & (~ ((IData)(vlSelf->Mini_NPU__DOT__poll) 
                          & (0U < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__count)))))) {
                if (((IData)(vlSelf->Mini_NPU__DOT__poll) 
                     & (0U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__count)))) {
                    vlSelf->Mini_NPU__DOT__i2c_m__DOT__count_reset = 1U;
                }
                if ((1U & (~ ((IData)(vlSelf->Mini_NPU__DOT__poll) 
                              & (0U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__count)))))) {
                    if ((1U & (~ ((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                                  & (7U >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))))) {
                        if ((1U & (~ (((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                                       & (7U < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count))) 
                                      & (0xfU >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))))) {
                            if ((1U & (~ (((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                                           & (0xfU 
                                              < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count))) 
                                          & (0x17U 
                                             >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))))) {
                                if ((1U & (~ (((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                                               & (0x17U 
                                                  < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count))) 
                                              & (0x1fU 
                                                 >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))))) {
                                    if ((1U & (~ (((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                                                   & (0x1fU 
                                                      < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count))) 
                                                  & (0x27U 
                                                     >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))))) {
                                        if ((1U & (~ 
                                                   (((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                                                     & (0x27U 
                                                        < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count))) 
                                                    & (0x2fU 
                                                       >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))))) {
                                            if (((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                                                 & (0x30U 
                                                    == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))) {
                                                vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count_reset = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if (((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                         & (7U >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))) {
                        vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count_en = 1U;
                        vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_in_x0 = 1U;
                    } else if ((((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                                 & (7U < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count))) 
                                & (0xfU >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))) {
                        vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count_en = 1U;
                    } else if ((((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                                 & (0xfU < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count))) 
                                & (0x17U >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))) {
                        vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count_en = 1U;
                    } else if ((((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                                 & (0x17U < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count))) 
                                & (0x1fU >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))) {
                        vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count_en = 1U;
                    } else if ((((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                                 & (0x1fU < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count))) 
                                & (0x27U >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))) {
                        vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count_en = 1U;
                    } else if ((((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                                 & (0x27U < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count))) 
                                & (0x2fU >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))) {
                        vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count_en = 1U;
                    }
                }
            }
            if (((IData)(vlSelf->Mini_NPU__DOT__poll) 
                 & (0U < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__count)))) {
                vlSelf->Mini_NPU__DOT__i2c_m__DOT__count_en = 1U;
                vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_in_s = 1U;
            } else if (((IData)(vlSelf->Mini_NPU__DOT__poll) 
                        & (0U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__count)))) {
                vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_in_s = 1U;
            }
        }
        vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_source__DOT__en 
            = vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_in_s;
        vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_x1__DOT__en 
            = vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_in_x1;
        vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_x0__DOT__shift_clr 
            = vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_clr_x0;
        vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_x1__DOT__shift_clr 
            = vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_clr_x1;
        vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_y0__DOT__en 
            = vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_in_y0;
        vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_y1__DOT__en 
            = vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_in_y1;
        vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_y0__DOT__shift_clr 
            = vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_clr_y0;
        vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_y1__DOT__shift_clr 
            = vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_clr_y1;
        vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_z0__DOT__en 
            = vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_in_z0;
        vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_z1__DOT__en 
            = vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_in_z1;
        vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_x0__DOT__en 
            = vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_in_x0;
        if ((7U != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
            if ((8U != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                if ((9U != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                    if ((0xaU == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                        vlSelf->Mini_NPU__DOT__i2c_m__DOT__scl_out_en = 1U;
                        vlSelf->Mini_NPU__DOT__i2c_m__DOT__SCL_out = 1U;
                    } else if ((0xbU == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                        vlSelf->Mini_NPU__DOT__i2c_m__DOT__scl_out_en = 1U;
                        vlSelf->Mini_NPU__DOT__i2c_m__DOT__SCL_out = 1U;
                    }
                }
            }
        }
    }
    vlSelf->SCL = ((IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__scl_out_en)
                    ? (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__SCL_out)
                    : (IData)(vlSelf->clock));
    vlSelf->Mini_NPU__DOT__data_ready = vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_ready;
    vlSelf->Mini_NPU__DOT__read_done = vlSelf->Mini_NPU__DOT__i2c_m__DOT__read_done;
    vlSelf->Mini_NPU__DOT__data_avail = vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_avail;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__addr = 0U;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__addr = ((0U 
                                                == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration))
                                                ? (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__sad_w)
                                                : (
                                                   (1U 
                                                    == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration))
                                                    ? (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__sub_addr)
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration))
                                                     ? (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__sad_r)
                                                     : (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__addr))));
    vlSelf->Mini_NPU__DOT__left__DOT__activated = vlSelf->Mini_NPU__DOT__left_activated;
    __Vtableidx2 = (((IData)(vlSelf->Mini_NPU__DOT__left_activated) 
                     << 2U) | (((IData)(vlSelf->Mini_NPU__DOT__left_fired) 
                                << 1U) | (IData)(vlSelf->Mini_NPU__DOT__left__DOT__mn_state)));
    vlSelf->Mini_NPU__DOT__left__DOT__cycle_en = Vtop__ConstPool__TABLE_ha6e3e4ba_0
        [__Vtableidx2];
    vlSelf->Mini_NPU__DOT__left__DOT__cycle_reset = 
        Vtop__ConstPool__TABLE_h2dc28e24_0[__Vtableidx2];
    vlSelf->Mini_NPU__DOT__left__DOT__accum_up = Vtop__ConstPool__TABLE_h2dc28e24_0
        [__Vtableidx2];
    vlSelf->Mini_NPU__DOT__left__DOT__accum_reset = 
        Vtop__ConstPool__TABLE_h5b88da62_0[__Vtableidx2];
    vlSelf->Mini_NPU__DOT__left__DOT__mn_nextState 
        = Vtop__ConstPool__TABLE_h2dc28e24_0[__Vtableidx2];
    vlSelf->Mini_NPU__DOT__right__DOT__activated = vlSelf->Mini_NPU__DOT__right_activated;
    __Vtableidx3 = (((IData)(vlSelf->Mini_NPU__DOT__right_activated) 
                     << 2U) | (((IData)(vlSelf->Mini_NPU__DOT__right_fired) 
                                << 1U) | (IData)(vlSelf->Mini_NPU__DOT__right__DOT__mn_state)));
    vlSelf->Mini_NPU__DOT__right__DOT__cycle_en = Vtop__ConstPool__TABLE_ha6e3e4ba_0
        [__Vtableidx3];
    vlSelf->Mini_NPU__DOT__right__DOT__cycle_reset 
        = Vtop__ConstPool__TABLE_h2dc28e24_0[__Vtableidx3];
    vlSelf->Mini_NPU__DOT__right__DOT__accum_up = Vtop__ConstPool__TABLE_h2dc28e24_0
        [__Vtableidx3];
    vlSelf->Mini_NPU__DOT__right__DOT__accum_reset 
        = Vtop__ConstPool__TABLE_h5b88da62_0[__Vtableidx3];
    vlSelf->Mini_NPU__DOT__right__DOT__mn_nextState 
        = Vtop__ConstPool__TABLE_h2dc28e24_0[__Vtableidx3];
    vlSelf->Mini_NPU__DOT__back__DOT__activated = vlSelf->Mini_NPU__DOT__back_activated;
    __Vtableidx4 = (((IData)(vlSelf->Mini_NPU__DOT__back_activated) 
                     << 2U) | (((IData)(vlSelf->Mini_NPU__DOT__back_fired) 
                                << 1U) | (IData)(vlSelf->Mini_NPU__DOT__back__DOT__mn_state)));
    vlSelf->Mini_NPU__DOT__back__DOT__cycle_en = Vtop__ConstPool__TABLE_ha6e3e4ba_0
        [__Vtableidx4];
    vlSelf->Mini_NPU__DOT__back__DOT__cycle_reset = 
        Vtop__ConstPool__TABLE_h2dc28e24_0[__Vtableidx4];
    vlSelf->Mini_NPU__DOT__back__DOT__accum_up = Vtop__ConstPool__TABLE_h2dc28e24_0
        [__Vtableidx4];
    vlSelf->Mini_NPU__DOT__back__DOT__accum_reset = 
        Vtop__ConstPool__TABLE_h5b88da62_0[__Vtableidx4];
    vlSelf->Mini_NPU__DOT__back__DOT__mn_nextState 
        = Vtop__ConstPool__TABLE_h2dc28e24_0[__Vtableidx4];
    vlSelf->Mini_NPU__DOT__forward__DOT__activated 
        = vlSelf->Mini_NPU__DOT__forward_activated;
    __Vtableidx5 = (((IData)(vlSelf->Mini_NPU__DOT__forward_activated) 
                     << 2U) | (((IData)(vlSelf->Mini_NPU__DOT__forward_fired) 
                                << 1U) | (IData)(vlSelf->Mini_NPU__DOT__forward__DOT__mn_state)));
    vlSelf->Mini_NPU__DOT__forward__DOT__cycle_en = 
        Vtop__ConstPool__TABLE_ha6e3e4ba_0[__Vtableidx5];
    vlSelf->Mini_NPU__DOT__forward__DOT__cycle_reset 
        = Vtop__ConstPool__TABLE_h2dc28e24_0[__Vtableidx5];
    vlSelf->Mini_NPU__DOT__forward__DOT__accum_up = 
        Vtop__ConstPool__TABLE_h2dc28e24_0[__Vtableidx5];
    vlSelf->Mini_NPU__DOT__forward__DOT__accum_reset 
        = Vtop__ConstPool__TABLE_h5b88da62_0[__Vtableidx5];
    vlSelf->Mini_NPU__DOT__forward__DOT__mn_nextState 
        = Vtop__ConstPool__TABLE_h2dc28e24_0[__Vtableidx5];
    vlSelf->Mini_NPU__DOT__down__DOT__activated = vlSelf->Mini_NPU__DOT__down_activated;
    __Vtableidx6 = (((IData)(vlSelf->Mini_NPU__DOT__down_activated) 
                     << 2U) | (((IData)(vlSelf->Mini_NPU__DOT__down_fired) 
                                << 1U) | (IData)(vlSelf->Mini_NPU__DOT__down__DOT__mn_state)));
    vlSelf->Mini_NPU__DOT__down__DOT__cycle_en = Vtop__ConstPool__TABLE_ha6e3e4ba_0
        [__Vtableidx6];
    vlSelf->Mini_NPU__DOT__down__DOT__cycle_reset = 
        Vtop__ConstPool__TABLE_h2dc28e24_0[__Vtableidx6];
    vlSelf->Mini_NPU__DOT__down__DOT__accum_up = Vtop__ConstPool__TABLE_h2dc28e24_0
        [__Vtableidx6];
    vlSelf->Mini_NPU__DOT__down__DOT__accum_reset = 
        Vtop__ConstPool__TABLE_h5b88da62_0[__Vtableidx6];
    vlSelf->Mini_NPU__DOT__down__DOT__mn_nextState 
        = Vtop__ConstPool__TABLE_h2dc28e24_0[__Vtableidx6];
    vlSelf->Mini_NPU__DOT__up__DOT__activated = vlSelf->Mini_NPU__DOT__up_activated;
    __Vtableidx7 = (((IData)(vlSelf->Mini_NPU__DOT__up_activated) 
                     << 2U) | (((IData)(vlSelf->Mini_NPU__DOT__up_fired) 
                                << 1U) | (IData)(vlSelf->Mini_NPU__DOT__up__DOT__mn_state)));
    vlSelf->Mini_NPU__DOT__up__DOT__cycle_en = Vtop__ConstPool__TABLE_ha6e3e4ba_0
        [__Vtableidx7];
    vlSelf->Mini_NPU__DOT__up__DOT__cycle_reset = Vtop__ConstPool__TABLE_h2dc28e24_0
        [__Vtableidx7];
    vlSelf->Mini_NPU__DOT__up__DOT__accum_up = Vtop__ConstPool__TABLE_h2dc28e24_0
        [__Vtableidx7];
    vlSelf->Mini_NPU__DOT__up__DOT__accum_reset = Vtop__ConstPool__TABLE_h5b88da62_0
        [__Vtableidx7];
    vlSelf->Mini_NPU__DOT__up__DOT__mn_nextState = 
        Vtop__ConstPool__TABLE_h2dc28e24_0[__Vtableidx7];
    vlSelf->Mini_NPU__DOT__ph__DOT__write_done = vlSelf->Mini_NPU__DOT__write_done;
    vlSelf->Mini_NPU__DOT__SCL = vlSelf->SCL;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__SCL = vlSelf->SCL;
    vlSelf->Mini_NPU__DOT__ph__DOT__data_ready = vlSelf->Mini_NPU__DOT__data_ready;
    vlSelf->Mini_NPU__DOT__ph__DOT__read_done = vlSelf->Mini_NPU__DOT__read_done;
    vlSelf->Mini_NPU__DOT__x_axis__DOT__data_avail 
        = vlSelf->Mini_NPU__DOT__data_avail;
    vlSelf->Mini_NPU__DOT__y_axis__DOT__data_avail 
        = vlSelf->Mini_NPU__DOT__data_avail;
    vlSelf->Mini_NPU__DOT__z_axis__DOT__data_avail 
        = vlSelf->Mini_NPU__DOT__data_avail;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__ADDR = (((2U 
                                                 == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                                                & (IData)(vlSelf->Mini_NPU__DOT__ph__DOT__write))
                                                ? (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__FIFO_DATA)
                                                : (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__addr));
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__SDA_out = 0U;
    if (((((((((0U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state)) 
               | (1U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) 
              | (2U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) 
             | (3U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) 
            | (4U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) 
           | (0xdU == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) 
          | (5U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) 
         | (6U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state)))) {
        if ((0U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
            if ((1U & (~ (((~ (IData)(vlSelf->Mini_NPU__DOT__write)) 
                           & (~ (IData)(vlSelf->Mini_NPU__DOT__poll))) 
                          & (~ (IData)(vlSelf->Mini_NPU__DOT__data_read)))))) {
                if ((((IData)(vlSelf->Mini_NPU__DOT__write) 
                      | (IData)(vlSelf->Mini_NPU__DOT__poll)) 
                     | (IData)(vlSelf->Mini_NPU__DOT__data_read))) {
                    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sda_out_en = 1U;
                    vlSelf->Mini_NPU__DOT__i2c_m__DOT__SDA_out = 1U;
                }
            }
        } else if ((1U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
            vlSelf->Mini_NPU__DOT__i2c_m__DOT__sda_out_en = 1U;
            vlSelf->Mini_NPU__DOT__i2c_m__DOT__SDA_out = 0U;
        } else if ((2U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
            vlSelf->Mini_NPU__DOT__i2c_m__DOT__sda_out_en = 1U;
            vlSelf->Mini_NPU__DOT__i2c_m__DOT__SDA_out 
                = (1U & ((IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__ADDR) 
                         >> (7U & (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__count))));
        } else if ((3U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
            if ((0U < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__count))) {
                vlSelf->Mini_NPU__DOT__i2c_m__DOT__sda_out_en = 1U;
                vlSelf->Mini_NPU__DOT__i2c_m__DOT__SDA_out 
                    = (1U & ((IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__ADDR) 
                             >> (7U & (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__count))));
            } else if ((0U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__count))) {
                vlSelf->Mini_NPU__DOT__i2c_m__DOT__sda_out_en = 1U;
                vlSelf->Mini_NPU__DOT__i2c_m__DOT__SDA_out 
                    = (1U & ((IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__ADDR) 
                             >> (7U & (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__count))));
            }
        } else if ((4U != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
            if ((0xdU != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                if ((5U != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                    if (((1U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                         | ((2U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                            & (IData)(vlSelf->Mini_NPU__DOT__write)))) {
                        vlSelf->Mini_NPU__DOT__i2c_m__DOT__sda_out_en = 1U;
                        vlSelf->Mini_NPU__DOT__i2c_m__DOT__SDA_out 
                            = (1U & ((IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__ADDR) 
                                     >> (7U & (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__count))));
                    } else if (((2U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                                & (~ (IData)(vlSelf->Mini_NPU__DOT__write)))) {
                        vlSelf->Mini_NPU__DOT__i2c_m__DOT__sda_out_en = 1U;
                        vlSelf->Mini_NPU__DOT__i2c_m__DOT__SDA_out = 1U;
                    } else if ((1U & (~ ((3U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                                         & (IData)(vlSelf->Mini_NPU__DOT__poll))))) {
                        if ((1U & (~ ((3U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                                      & (IData)(vlSelf->Mini_NPU__DOT__data_read))))) {
                            if (((3U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                                 & (IData)(vlSelf->Mini_NPU__DOT__write))) {
                                vlSelf->Mini_NPU__DOT__i2c_m__DOT__sda_out_en = 1U;
                                vlSelf->Mini_NPU__DOT__i2c_m__DOT__SDA_out = 0U;
                            }
                        }
                    }
                }
            }
        }
    } else if ((7U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
        if ((1U & (~ ((IData)(vlSelf->Mini_NPU__DOT__poll) 
                      & (0U < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__count)))))) {
            if ((1U & (~ ((IData)(vlSelf->Mini_NPU__DOT__poll) 
                          & (0U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__count)))))) {
                if ((1U & (~ ((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                              & (7U >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))))) {
                    if ((1U & (~ (((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                                   & (7U < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count))) 
                                  & (0xfU >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))))) {
                        if ((1U & (~ (((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                                       & (0xfU < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count))) 
                                      & (0x17U >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))))) {
                            if ((1U & (~ (((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                                           & (0x17U 
                                              < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count))) 
                                          & (0x1fU 
                                             >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))))) {
                                if ((1U & (~ (((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                                               & (0x1fU 
                                                  < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count))) 
                                              & (0x27U 
                                                 >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))))) {
                                    if ((1U & (~ (((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                                                   & (0x27U 
                                                      < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count))) 
                                                  & (0x2fU 
                                                     >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))))) {
                                        if (((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                                             & (0x30U 
                                                == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))) {
                                            vlSelf->Mini_NPU__DOT__i2c_m__DOT__sda_out_en = 1U;
                                            vlSelf->Mini_NPU__DOT__i2c_m__DOT__SDA_out = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((8U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
        vlSelf->Mini_NPU__DOT__i2c_m__DOT__sda_out_en = 1U;
        vlSelf->Mini_NPU__DOT__i2c_m__DOT__SDA_out = 1U;
    } else if ((9U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
        vlSelf->Mini_NPU__DOT__i2c_m__DOT__sda_out_en = 1U;
        vlSelf->Mini_NPU__DOT__i2c_m__DOT__SDA_out = 0U;
    } else if ((0xaU == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
        vlSelf->Mini_NPU__DOT__i2c_m__DOT__sda_out_en = 1U;
        vlSelf->Mini_NPU__DOT__i2c_m__DOT__SDA_out = 0U;
    } else if ((0xbU == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
        vlSelf->Mini_NPU__DOT__i2c_m__DOT__sda_out_en = 1U;
        vlSelf->Mini_NPU__DOT__i2c_m__DOT__SDA_out = 1U;
    }
    vlSelf->SDA = ((IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__sda_out_en)
                    ? (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__SDA_out)
                    : (IData)(vlSelf->SDA_in));
    vlSelf->Mini_NPU__DOT__SDA = vlSelf->SDA;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_nextState = 0U;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__data = vlSelf->SDA;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__abort = 0U;
    if (((((((((0U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state)) 
               | (1U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) 
              | (2U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) 
             | (3U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) 
            | (4U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) 
           | (0xdU == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) 
          | (5U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) 
         | (6U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state)))) {
        if ((0U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
            if ((1U & (((~ (IData)(vlSelf->Mini_NPU__DOT__write)) 
                        & (~ (IData)(vlSelf->Mini_NPU__DOT__poll))) 
                       & (~ (IData)(vlSelf->Mini_NPU__DOT__data_read))))) {
                vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_nextState = 0U;
            } else if ((((IData)(vlSelf->Mini_NPU__DOT__write) 
                         | (IData)(vlSelf->Mini_NPU__DOT__poll)) 
                        | (IData)(vlSelf->Mini_NPU__DOT__data_read))) {
                vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_nextState = 1U;
            }
        } else if ((1U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
            vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_nextState = 2U;
        } else if ((2U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
            vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_nextState = 3U;
        } else if ((3U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
            if ((0U < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__count))) {
                vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_nextState = 3U;
            } else if ((0U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__count))) {
                vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_nextState = 4U;
            }
        } else if ((4U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
            if (vlSelf->SDA) {
                if (vlSelf->SDA) {
                    vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_nextState = 0xdU;
                }
            } else {
                vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_nextState = 5U;
            }
        } else if ((0xdU == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
            vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_nextState = 0xdU;
        } else if ((5U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
            if (vlSelf->SDA) {
                vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_nextState = 6U;
            } else if ((1U & (~ (IData)(vlSelf->SDA)))) {
                vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_nextState = 0xdU;
            }
        } else if (((1U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                    | ((2U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                       & (IData)(vlSelf->Mini_NPU__DOT__write)))) {
            vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_nextState = 3U;
        } else if (((2U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                    & (~ (IData)(vlSelf->Mini_NPU__DOT__write)))) {
            vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_nextState = 1U;
        } else if (((3U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                    & (IData)(vlSelf->Mini_NPU__DOT__poll))) {
            vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_nextState = 7U;
        } else if (((3U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                    & (IData)(vlSelf->Mini_NPU__DOT__data_read))) {
            vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_nextState = 7U;
        } else if (((3U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                    & (IData)(vlSelf->Mini_NPU__DOT__write))) {
            vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_nextState = 0xbU;
        }
        if ((0U != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
            if ((1U != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                if ((2U != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                    if ((3U != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                        if ((4U != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                            if ((0xdU != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                                if ((5U != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                                    if ((1U & (~ ((1U 
                                                   == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                                                  | ((2U 
                                                      == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                                                     & (IData)(vlSelf->Mini_NPU__DOT__write)))))) {
                                        if ((1U & (~ 
                                                   ((2U 
                                                     == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                                                    & (~ (IData)(vlSelf->Mini_NPU__DOT__write)))))) {
                                            if (((3U 
                                                  == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                                                 & (IData)(vlSelf->Mini_NPU__DOT__poll))) {
                                                vlSelf->Mini_NPU__DOT__i2c_m__DOT__data 
                                                    = vlSelf->SDA;
                                            } else if (
                                                       ((3U 
                                                         == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                                                        & (IData)(vlSelf->Mini_NPU__DOT__data_read))) {
                                                vlSelf->Mini_NPU__DOT__i2c_m__DOT__data 
                                                    = vlSelf->SDA;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        if ((4U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                            if (vlSelf->SDA) {
                                if (vlSelf->SDA) {
                                    vlSelf->Mini_NPU__DOT__i2c_m__DOT__abort = 1U;
                                }
                            }
                        } else if ((0xdU != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                            if ((5U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                                if ((1U & (~ (IData)(vlSelf->SDA)))) {
                                    if ((1U & (~ (IData)(vlSelf->SDA)))) {
                                        vlSelf->Mini_NPU__DOT__i2c_m__DOT__abort = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((7U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
        if (((IData)(vlSelf->Mini_NPU__DOT__poll) & 
             (0U < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__count)))) {
            vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_nextState = 7U;
            vlSelf->Mini_NPU__DOT__i2c_m__DOT__data 
                = vlSelf->SDA;
        } else if (((IData)(vlSelf->Mini_NPU__DOT__poll) 
                    & (0U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__count)))) {
            vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_nextState = 8U;
            vlSelf->Mini_NPU__DOT__i2c_m__DOT__data 
                = vlSelf->SDA;
        } else if (((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                    & (7U >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))) {
            vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_nextState = 7U;
            vlSelf->Mini_NPU__DOT__i2c_m__DOT__data 
                = vlSelf->SDA;
        } else if ((((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                     & (7U < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count))) 
                    & (0xfU >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))) {
            vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_nextState = 7U;
            vlSelf->Mini_NPU__DOT__i2c_m__DOT__data 
                = vlSelf->SDA;
        } else if ((((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                     & (0xfU < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count))) 
                    & (0x17U >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))) {
            vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_nextState = 7U;
            vlSelf->Mini_NPU__DOT__i2c_m__DOT__data 
                = vlSelf->SDA;
        } else if ((((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                     & (0x17U < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count))) 
                    & (0x1fU >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))) {
            vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_nextState = 7U;
            vlSelf->Mini_NPU__DOT__i2c_m__DOT__data 
                = vlSelf->SDA;
        } else if ((((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                     & (0x1fU < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count))) 
                    & (0x27U >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))) {
            vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_nextState = 7U;
            vlSelf->Mini_NPU__DOT__i2c_m__DOT__data 
                = vlSelf->SDA;
        } else if ((((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                     & (0x27U < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count))) 
                    & (0x2fU >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))) {
            vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_nextState = 7U;
            vlSelf->Mini_NPU__DOT__i2c_m__DOT__data 
                = vlSelf->SDA;
        } else if (((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                    & (0x30U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))) {
            vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_nextState = 9U;
        }
    } else if ((8U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
        vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_nextState = 9U;
    } else if ((9U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
        vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_nextState = 0xaU;
    } else if ((0xaU == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
        vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_nextState = 0xbU;
    } else if ((0xbU == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
        vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_nextState = 0xcU;
    } else if ((0xcU == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
        if (vlSelf->Mini_NPU__DOT__write) {
            vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_nextState = 0U;
        } else if (((IData)(vlSelf->Mini_NPU__DOT__poll) 
                    & (~ ((IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__INT_SOURCE) 
                          >> 7U)))) {
            vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_nextState = 0U;
        } else if (((IData)(vlSelf->Mini_NPU__DOT__poll) 
                    & ((IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__INT_SOURCE) 
                       >> 7U))) {
            vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_nextState = 0U;
        } else if (vlSelf->Mini_NPU__DOT__data_read) {
            vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_nextState = 0U;
        }
    }
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__SDA = vlSelf->Mini_NPU__DOT__SDA;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_source__DOT__serial_bit 
        = vlSelf->Mini_NPU__DOT__i2c_m__DOT__data;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_x0__DOT__serial_bit 
        = vlSelf->Mini_NPU__DOT__i2c_m__DOT__data;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_x1__DOT__serial_bit 
        = vlSelf->Mini_NPU__DOT__i2c_m__DOT__data;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_y0__DOT__serial_bit 
        = vlSelf->Mini_NPU__DOT__i2c_m__DOT__data;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_y1__DOT__serial_bit 
        = vlSelf->Mini_NPU__DOT__i2c_m__DOT__data;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_z0__DOT__serial_bit 
        = vlSelf->Mini_NPU__DOT__i2c_m__DOT__data;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_z1__DOT__serial_bit 
        = vlSelf->Mini_NPU__DOT__i2c_m__DOT__data;
    vlSelf->Mini_NPU__DOT__abort = vlSelf->Mini_NPU__DOT__i2c_m__DOT__abort;
    vlSelf->Mini_NPU__DOT__ph__DOT__abort = vlSelf->Mini_NPU__DOT__abort;
    vlSelf->Mini_NPU__DOT__x_axis__DOT__abort = vlSelf->Mini_NPU__DOT__abort;
    vlSelf->Mini_NPU__DOT__y_axis__DOT__abort = vlSelf->Mini_NPU__DOT__abort;
    vlSelf->Mini_NPU__DOT__z_axis__DOT__abort = vlSelf->Mini_NPU__DOT__abort;
    vlSelf->Mini_NPU__DOT__x_axis__DOT__d2n_clr = 0U;
    vlSelf->Mini_NPU__DOT__x_axis__DOT__d2_clr = 0U;
    vlSelf->Mini_NPU__DOT__x_axis__DOT__d1_clr = 0U;
    vlSelf->Mini_NPU__DOT__x_axis__DOT__d1_en = 0U;
    vlSelf->Mini_NPU__DOT__x_axis__DOT__d2_en = 0U;
    if ((0U != (IData)(vlSelf->Mini_NPU__DOT__x_axis__DOT__an_state))) {
        if ((1U == (IData)(vlSelf->Mini_NPU__DOT__x_axis__DOT__an_state))) {
            if ((1U & (~ ((IData)(vlSelf->stop) | (IData)(vlSelf->Mini_NPU__DOT__abort))))) {
                if (vlSelf->Mini_NPU__DOT__data_avail) {
                    if (vlSelf->Mini_NPU__DOT__data_avail) {
                        vlSelf->Mini_NPU__DOT__x_axis__DOT__d2_en = 1U;
                    }
                }
            }
        }
    }
    vlSelf->Mini_NPU__DOT__x_axis__DOT__d2n_en = 0U;
    vlSelf->Mini_NPU__DOT__y_axis__DOT__d2n_clr = 0U;
    vlSelf->Mini_NPU__DOT__y_axis__DOT__d2_clr = 0U;
    vlSelf->Mini_NPU__DOT__y_axis__DOT__d1_clr = 0U;
    vlSelf->Mini_NPU__DOT__y_axis__DOT__d1_en = 0U;
    vlSelf->Mini_NPU__DOT__y_axis__DOT__d2_en = 0U;
    if ((0U != (IData)(vlSelf->Mini_NPU__DOT__y_axis__DOT__an_state))) {
        if ((1U == (IData)(vlSelf->Mini_NPU__DOT__y_axis__DOT__an_state))) {
            if ((1U & (~ ((IData)(vlSelf->stop) | (IData)(vlSelf->Mini_NPU__DOT__abort))))) {
                if (vlSelf->Mini_NPU__DOT__data_avail) {
                    if (vlSelf->Mini_NPU__DOT__data_avail) {
                        vlSelf->Mini_NPU__DOT__y_axis__DOT__d2_en = 1U;
                    }
                }
            }
        }
    }
    vlSelf->Mini_NPU__DOT__y_axis__DOT__d2n_en = 0U;
    vlSelf->Mini_NPU__DOT__z_axis__DOT__d2n_clr = 0U;
    vlSelf->Mini_NPU__DOT__z_axis__DOT__d2_clr = 0U;
    vlSelf->Mini_NPU__DOT__z_axis__DOT__d1_clr = 0U;
    vlSelf->Mini_NPU__DOT__z_axis__DOT__d1_en = 0U;
    vlSelf->Mini_NPU__DOT__z_axis__DOT__d2_en = 0U;
    if ((0U != (IData)(vlSelf->Mini_NPU__DOT__z_axis__DOT__an_state))) {
        if ((1U == (IData)(vlSelf->Mini_NPU__DOT__z_axis__DOT__an_state))) {
            if ((1U & (~ ((IData)(vlSelf->stop) | (IData)(vlSelf->Mini_NPU__DOT__abort))))) {
                if (vlSelf->Mini_NPU__DOT__data_avail) {
                    if (vlSelf->Mini_NPU__DOT__data_avail) {
                        vlSelf->Mini_NPU__DOT__z_axis__DOT__d2_en = 1U;
                    }
                }
            }
        }
    }
    vlSelf->Mini_NPU__DOT__z_axis__DOT__d2n_en = 0U;
    vlSelf->Mini_NPU__DOT__x_axis__DOT__an_nextState = 0U;
    if ((0U == (IData)(vlSelf->Mini_NPU__DOT__x_axis__DOT__an_state))) {
        if ((1U & (~ (IData)(vlSelf->Mini_NPU__DOT__data_avail)))) {
            vlSelf->Mini_NPU__DOT__x_axis__DOT__d2n_clr = 1U;
            vlSelf->Mini_NPU__DOT__x_axis__DOT__d2_clr = 1U;
            vlSelf->Mini_NPU__DOT__x_axis__DOT__d1_clr = 1U;
        }
        if (vlSelf->Mini_NPU__DOT__data_avail) {
            if (vlSelf->Mini_NPU__DOT__data_avail) {
                vlSelf->Mini_NPU__DOT__x_axis__DOT__d1_en = 1U;
                vlSelf->Mini_NPU__DOT__x_axis__DOT__d2n_en = 1U;
                vlSelf->Mini_NPU__DOT__x_axis__DOT__an_nextState = 1U;
            }
        } else {
            vlSelf->Mini_NPU__DOT__x_axis__DOT__an_nextState = 0U;
        }
    } else if ((1U == (IData)(vlSelf->Mini_NPU__DOT__x_axis__DOT__an_state))) {
        if (((IData)(vlSelf->stop) | (IData)(vlSelf->Mini_NPU__DOT__abort))) {
            vlSelf->Mini_NPU__DOT__x_axis__DOT__d2n_clr = 1U;
            vlSelf->Mini_NPU__DOT__x_axis__DOT__d2_clr = 1U;
            vlSelf->Mini_NPU__DOT__x_axis__DOT__d1_clr = 1U;
            vlSelf->Mini_NPU__DOT__x_axis__DOT__an_nextState = 0U;
        } else if (vlSelf->Mini_NPU__DOT__data_avail) {
            if (vlSelf->Mini_NPU__DOT__data_avail) {
                vlSelf->Mini_NPU__DOT__x_axis__DOT__an_nextState = 2U;
            }
        } else {
            vlSelf->Mini_NPU__DOT__x_axis__DOT__an_nextState = 1U;
        }
        if ((1U & (~ ((IData)(vlSelf->stop) | (IData)(vlSelf->Mini_NPU__DOT__abort))))) {
            if (vlSelf->Mini_NPU__DOT__data_avail) {
                if (vlSelf->Mini_NPU__DOT__data_avail) {
                    vlSelf->Mini_NPU__DOT__x_axis__DOT__d1_en = 1U;
                    vlSelf->Mini_NPU__DOT__x_axis__DOT__d2n_en = 1U;
                }
            }
        }
    } else if ((2U == (IData)(vlSelf->Mini_NPU__DOT__x_axis__DOT__an_state))) {
        if (vlSelf->Mini_NPU__DOT__x_axis__DOT__AltB) {
            vlSelf->Mini_NPU__DOT__x_axis__DOT__an_nextState = 3U;
        } else if (vlSelf->Mini_NPU__DOT__x_axis__DOT__AeqB) {
            vlSelf->Mini_NPU__DOT__x_axis__DOT__an_nextState = 1U;
        } else if (vlSelf->Mini_NPU__DOT__x_axis__DOT__AgtB) {
            vlSelf->Mini_NPU__DOT__x_axis__DOT__an_nextState = 3U;
        } else if ((1U & (((~ (IData)(vlSelf->Mini_NPU__DOT__x_axis__DOT__AltB)) 
                           & (~ (IData)(vlSelf->Mini_NPU__DOT__x_axis__DOT__AeqB))) 
                          & (~ (IData)(vlSelf->Mini_NPU__DOT__x_axis__DOT__AgtB))))) {
            vlSelf->Mini_NPU__DOT__x_axis__DOT__an_nextState = 4U;
        }
    } else if ((4U == (IData)(vlSelf->Mini_NPU__DOT__x_axis__DOT__an_state))) {
        vlSelf->Mini_NPU__DOT__x_axis__DOT__an_nextState = 4U;
    } else if ((3U == (IData)(vlSelf->Mini_NPU__DOT__x_axis__DOT__an_state))) {
        vlSelf->Mini_NPU__DOT__x_axis__DOT__an_nextState = 1U;
    }
    vlSelf->Mini_NPU__DOT__y_axis__DOT__an_nextState = 0U;
    if ((0U == (IData)(vlSelf->Mini_NPU__DOT__y_axis__DOT__an_state))) {
        if ((1U & (~ (IData)(vlSelf->Mini_NPU__DOT__data_avail)))) {
            vlSelf->Mini_NPU__DOT__y_axis__DOT__d2n_clr = 1U;
            vlSelf->Mini_NPU__DOT__y_axis__DOT__d2_clr = 1U;
            vlSelf->Mini_NPU__DOT__y_axis__DOT__d1_clr = 1U;
        }
        if (vlSelf->Mini_NPU__DOT__data_avail) {
            if (vlSelf->Mini_NPU__DOT__data_avail) {
                vlSelf->Mini_NPU__DOT__y_axis__DOT__d1_en = 1U;
                vlSelf->Mini_NPU__DOT__y_axis__DOT__d2n_en = 1U;
                vlSelf->Mini_NPU__DOT__y_axis__DOT__an_nextState = 1U;
            }
        } else {
            vlSelf->Mini_NPU__DOT__y_axis__DOT__an_nextState = 0U;
        }
    } else if ((1U == (IData)(vlSelf->Mini_NPU__DOT__y_axis__DOT__an_state))) {
        if (((IData)(vlSelf->stop) | (IData)(vlSelf->Mini_NPU__DOT__abort))) {
            vlSelf->Mini_NPU__DOT__y_axis__DOT__d2n_clr = 1U;
            vlSelf->Mini_NPU__DOT__y_axis__DOT__d2_clr = 1U;
            vlSelf->Mini_NPU__DOT__y_axis__DOT__d1_clr = 1U;
            vlSelf->Mini_NPU__DOT__y_axis__DOT__an_nextState = 0U;
        } else if (vlSelf->Mini_NPU__DOT__data_avail) {
            if (vlSelf->Mini_NPU__DOT__data_avail) {
                vlSelf->Mini_NPU__DOT__y_axis__DOT__an_nextState = 2U;
            }
        } else {
            vlSelf->Mini_NPU__DOT__y_axis__DOT__an_nextState = 1U;
        }
        if ((1U & (~ ((IData)(vlSelf->stop) | (IData)(vlSelf->Mini_NPU__DOT__abort))))) {
            if (vlSelf->Mini_NPU__DOT__data_avail) {
                if (vlSelf->Mini_NPU__DOT__data_avail) {
                    vlSelf->Mini_NPU__DOT__y_axis__DOT__d1_en = 1U;
                    vlSelf->Mini_NPU__DOT__y_axis__DOT__d2n_en = 1U;
                }
            }
        }
    } else if ((2U == (IData)(vlSelf->Mini_NPU__DOT__y_axis__DOT__an_state))) {
        if (vlSelf->Mini_NPU__DOT__y_axis__DOT__AltB) {
            vlSelf->Mini_NPU__DOT__y_axis__DOT__an_nextState = 3U;
        } else if (vlSelf->Mini_NPU__DOT__y_axis__DOT__AeqB) {
            vlSelf->Mini_NPU__DOT__y_axis__DOT__an_nextState = 1U;
        } else if (vlSelf->Mini_NPU__DOT__y_axis__DOT__AgtB) {
            vlSelf->Mini_NPU__DOT__y_axis__DOT__an_nextState = 3U;
        } else if ((1U & (((~ (IData)(vlSelf->Mini_NPU__DOT__y_axis__DOT__AltB)) 
                           & (~ (IData)(vlSelf->Mini_NPU__DOT__y_axis__DOT__AeqB))) 
                          & (~ (IData)(vlSelf->Mini_NPU__DOT__y_axis__DOT__AgtB))))) {
            vlSelf->Mini_NPU__DOT__y_axis__DOT__an_nextState = 4U;
        }
    } else if ((4U == (IData)(vlSelf->Mini_NPU__DOT__y_axis__DOT__an_state))) {
        vlSelf->Mini_NPU__DOT__y_axis__DOT__an_nextState = 4U;
    } else if ((3U == (IData)(vlSelf->Mini_NPU__DOT__y_axis__DOT__an_state))) {
        vlSelf->Mini_NPU__DOT__y_axis__DOT__an_nextState = 1U;
    }
    vlSelf->Mini_NPU__DOT__z_axis__DOT__an_nextState = 0U;
    if ((0U == (IData)(vlSelf->Mini_NPU__DOT__z_axis__DOT__an_state))) {
        if ((1U & (~ (IData)(vlSelf->Mini_NPU__DOT__data_avail)))) {
            vlSelf->Mini_NPU__DOT__z_axis__DOT__d2n_clr = 1U;
            vlSelf->Mini_NPU__DOT__z_axis__DOT__d2_clr = 1U;
            vlSelf->Mini_NPU__DOT__z_axis__DOT__d1_clr = 1U;
        }
        if (vlSelf->Mini_NPU__DOT__data_avail) {
            if (vlSelf->Mini_NPU__DOT__data_avail) {
                vlSelf->Mini_NPU__DOT__z_axis__DOT__d1_en = 1U;
                vlSelf->Mini_NPU__DOT__z_axis__DOT__d2n_en = 1U;
                vlSelf->Mini_NPU__DOT__z_axis__DOT__an_nextState = 1U;
            }
        } else {
            vlSelf->Mini_NPU__DOT__z_axis__DOT__an_nextState = 0U;
        }
    } else if ((1U == (IData)(vlSelf->Mini_NPU__DOT__z_axis__DOT__an_state))) {
        if (((IData)(vlSelf->stop) | (IData)(vlSelf->Mini_NPU__DOT__abort))) {
            vlSelf->Mini_NPU__DOT__z_axis__DOT__d2n_clr = 1U;
            vlSelf->Mini_NPU__DOT__z_axis__DOT__d2_clr = 1U;
            vlSelf->Mini_NPU__DOT__z_axis__DOT__d1_clr = 1U;
            vlSelf->Mini_NPU__DOT__z_axis__DOT__an_nextState = 0U;
        } else if (vlSelf->Mini_NPU__DOT__data_avail) {
            if (vlSelf->Mini_NPU__DOT__data_avail) {
                vlSelf->Mini_NPU__DOT__z_axis__DOT__an_nextState = 2U;
            }
        } else {
            vlSelf->Mini_NPU__DOT__z_axis__DOT__an_nextState = 1U;
        }
        if ((1U & (~ ((IData)(vlSelf->stop) | (IData)(vlSelf->Mini_NPU__DOT__abort))))) {
            if (vlSelf->Mini_NPU__DOT__data_avail) {
                if (vlSelf->Mini_NPU__DOT__data_avail) {
                    vlSelf->Mini_NPU__DOT__z_axis__DOT__d1_en = 1U;
                    vlSelf->Mini_NPU__DOT__z_axis__DOT__d2n_en = 1U;
                }
            }
        }
    } else if ((2U == (IData)(vlSelf->Mini_NPU__DOT__z_axis__DOT__an_state))) {
        if (vlSelf->Mini_NPU__DOT__z_axis__DOT__AltB) {
            vlSelf->Mini_NPU__DOT__z_axis__DOT__an_nextState = 3U;
        } else if (vlSelf->Mini_NPU__DOT__z_axis__DOT__AeqB) {
            vlSelf->Mini_NPU__DOT__z_axis__DOT__an_nextState = 1U;
        } else if (vlSelf->Mini_NPU__DOT__z_axis__DOT__AgtB) {
            vlSelf->Mini_NPU__DOT__z_axis__DOT__an_nextState = 3U;
        } else if ((1U & (((~ (IData)(vlSelf->Mini_NPU__DOT__z_axis__DOT__AltB)) 
                           & (~ (IData)(vlSelf->Mini_NPU__DOT__z_axis__DOT__AeqB))) 
                          & (~ (IData)(vlSelf->Mini_NPU__DOT__z_axis__DOT__AgtB))))) {
            vlSelf->Mini_NPU__DOT__z_axis__DOT__an_nextState = 4U;
        }
    } else if ((4U == (IData)(vlSelf->Mini_NPU__DOT__z_axis__DOT__an_state))) {
        vlSelf->Mini_NPU__DOT__z_axis__DOT__an_nextState = 4U;
    } else if ((3U == (IData)(vlSelf->Mini_NPU__DOT__z_axis__DOT__an_state))) {
        vlSelf->Mini_NPU__DOT__z_axis__DOT__an_nextState = 1U;
    }
    __Vtableidx1 = (((IData)(vlSelf->start) << 7U) 
                    | (((IData)(vlSelf->Mini_NPU__DOT__write_done) 
                        << 6U) | (((IData)(vlSelf->Mini_NPU__DOT__data_ready) 
                                   << 5U) | (((IData)(vlSelf->Mini_NPU__DOT__read_done) 
                                              << 4U) 
                                             | (((IData)(vlSelf->Mini_NPU__DOT__abort) 
                                                 << 3U) 
                                                | (((IData)(vlSelf->stop) 
                                                    << 2U) 
                                                   | (IData)(vlSelf->Mini_NPU__DOT__ph__DOT__ph_state)))))));
    vlSelf->Mini_NPU__DOT__ph__DOT__write_en = Vtop__ConstPool__TABLE_h8e0147ef_0
        [__Vtableidx1];
    vlSelf->Mini_NPU__DOT__ph__DOT__poll_en = Vtop__ConstPool__TABLE_hcbeb02c1_0
        [__Vtableidx1];
    vlSelf->Mini_NPU__DOT__ph__DOT__data_read_en = 
        Vtop__ConstPool__TABLE_h82edd3c6_0[__Vtableidx1];
    vlSelf->Mini_NPU__DOT__ph__DOT__ph_nextState = 
        Vtop__ConstPool__TABLE_h8aaa24a6_0[__Vtableidx1];
}

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*2:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*2:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*2:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*2:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*2:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*2:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    CData/*7:0*/ __Vdly__Mini_NPU__DOT__i2c_m__DOT__sipo_source__DOT__Q;
    __Vdly__Mini_NPU__DOT__i2c_m__DOT__sipo_source__DOT__Q = 0;
    CData/*7:0*/ __Vdly__Mini_NPU__DOT__i2c_m__DOT__sipo_x0__DOT__Q;
    __Vdly__Mini_NPU__DOT__i2c_m__DOT__sipo_x0__DOT__Q = 0;
    CData/*7:0*/ __Vdly__Mini_NPU__DOT__i2c_m__DOT__sipo_x1__DOT__Q;
    __Vdly__Mini_NPU__DOT__i2c_m__DOT__sipo_x1__DOT__Q = 0;
    CData/*7:0*/ __Vdly__Mini_NPU__DOT__i2c_m__DOT__sipo_y0__DOT__Q;
    __Vdly__Mini_NPU__DOT__i2c_m__DOT__sipo_y0__DOT__Q = 0;
    CData/*7:0*/ __Vdly__Mini_NPU__DOT__i2c_m__DOT__sipo_y1__DOT__Q;
    __Vdly__Mini_NPU__DOT__i2c_m__DOT__sipo_y1__DOT__Q = 0;
    CData/*7:0*/ __Vdly__Mini_NPU__DOT__i2c_m__DOT__sipo_z0__DOT__Q;
    __Vdly__Mini_NPU__DOT__i2c_m__DOT__sipo_z0__DOT__Q = 0;
    CData/*7:0*/ __Vdly__Mini_NPU__DOT__i2c_m__DOT__sipo_z1__DOT__Q;
    __Vdly__Mini_NPU__DOT__i2c_m__DOT__sipo_z1__DOT__Q = 0;
    SData/*15:0*/ __Vdly__Mini_NPU__DOT__x_axis__DOT__data2_next;
    __Vdly__Mini_NPU__DOT__x_axis__DOT__data2_next = 0;
    SData/*15:0*/ __Vdly__Mini_NPU__DOT__y_axis__DOT__data2_next;
    __Vdly__Mini_NPU__DOT__y_axis__DOT__data2_next = 0;
    SData/*15:0*/ __Vdly__Mini_NPU__DOT__z_axis__DOT__data2_next;
    __Vdly__Mini_NPU__DOT__z_axis__DOT__data2_next = 0;
    // Body
    __Vdly__Mini_NPU__DOT__z_axis__DOT__data2_next 
        = vlSelf->Mini_NPU__DOT__z_axis__DOT__data2_next;
    __Vdly__Mini_NPU__DOT__y_axis__DOT__data2_next 
        = vlSelf->Mini_NPU__DOT__y_axis__DOT__data2_next;
    __Vdly__Mini_NPU__DOT__x_axis__DOT__data2_next 
        = vlSelf->Mini_NPU__DOT__x_axis__DOT__data2_next;
    __Vdly__Mini_NPU__DOT__i2c_m__DOT__sipo_z1__DOT__Q 
        = vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_z1__DOT__Q;
    __Vdly__Mini_NPU__DOT__i2c_m__DOT__sipo_z0__DOT__Q 
        = vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_z0__DOT__Q;
    __Vdly__Mini_NPU__DOT__i2c_m__DOT__sipo_y1__DOT__Q 
        = vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_y1__DOT__Q;
    __Vdly__Mini_NPU__DOT__i2c_m__DOT__sipo_y0__DOT__Q 
        = vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_y0__DOT__Q;
    __Vdly__Mini_NPU__DOT__i2c_m__DOT__sipo_x1__DOT__Q 
        = vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_x1__DOT__Q;
    __Vdly__Mini_NPU__DOT__i2c_m__DOT__sipo_x0__DOT__Q 
        = vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_x0__DOT__Q;
    __Vdly__Mini_NPU__DOT__i2c_m__DOT__sipo_source__DOT__Q 
        = vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_source__DOT__Q;
    __Vdly__Mini_NPU__DOT__z_axis__DOT__data2_next 
        = (((IData)(vlSelf->reset) | (IData)(vlSelf->Mini_NPU__DOT__z_axis__DOT__d2n_clr))
            ? 0U : ((IData)(vlSelf->Mini_NPU__DOT__z_axis__DOT__d2n_en)
                     ? (IData)(vlSelf->Mini_NPU__DOT__Z_DATA)
                     : (IData)(vlSelf->Mini_NPU__DOT__z_axis__DOT__data2_next)));
    __Vdly__Mini_NPU__DOT__y_axis__DOT__data2_next 
        = (((IData)(vlSelf->reset) | (IData)(vlSelf->Mini_NPU__DOT__y_axis__DOT__d2n_clr))
            ? 0U : ((IData)(vlSelf->Mini_NPU__DOT__y_axis__DOT__d2n_en)
                     ? (IData)(vlSelf->Mini_NPU__DOT__Y_DATA)
                     : (IData)(vlSelf->Mini_NPU__DOT__y_axis__DOT__data2_next)));
    __Vdly__Mini_NPU__DOT__x_axis__DOT__data2_next 
        = (((IData)(vlSelf->reset) | (IData)(vlSelf->Mini_NPU__DOT__x_axis__DOT__d2n_clr))
            ? 0U : ((IData)(vlSelf->Mini_NPU__DOT__x_axis__DOT__d2n_en)
                     ? (IData)(vlSelf->Mini_NPU__DOT__X_DATA)
                     : (IData)(vlSelf->Mini_NPU__DOT__x_axis__DOT__data2_next)));
    vlSelf->Mini_NPU__DOT__led_c__DOT__LEDs = (((IData)(vlSelf->reset) 
                                                | (IData)(vlSelf->Mini_NPU__DOT__led_c__DOT__led_reset))
                                                ? 0U
                                                : ((IData)(vlSelf->Mini_NPU__DOT__led_c__DOT__led_en)
                                                    ? (IData)(vlSelf->Mini_NPU__DOT__fired_array)
                                                    : (IData)(vlSelf->Mini_NPU__DOT__led_c__DOT__LEDs)));
    vlSelf->Mini_NPU__DOT__up__DOT__cycle = (((((IData)(vlSelf->reset) 
                                                | (IData)(vlSelf->Mini_NPU__DOT__up__DOT__cycle_reset)) 
                                               | (IData)(vlSelf->Mini_NPU__DOT__up__DOT__accum_up)) 
                                              | (IData)(vlSelf->Mini_NPU__DOT__up__DOT__accum_down))
                                              ? 0U : 
                                             (0xffffffU 
                                              & ((IData)(vlSelf->Mini_NPU__DOT__up__DOT__cycle_en)
                                                  ? 
                                                 ((IData)(1U) 
                                                  + vlSelf->Mini_NPU__DOT__up__DOT__cycle)
                                                  : vlSelf->Mini_NPU__DOT__up__DOT__cycle)));
    vlSelf->Mini_NPU__DOT__down__DOT__cycle = (((((IData)(vlSelf->reset) 
                                                  | (IData)(vlSelf->Mini_NPU__DOT__down__DOT__cycle_reset)) 
                                                 | (IData)(vlSelf->Mini_NPU__DOT__down__DOT__accum_up)) 
                                                | (IData)(vlSelf->Mini_NPU__DOT__down__DOT__accum_down))
                                                ? 0U
                                                : (0xffffffU 
                                                   & ((IData)(vlSelf->Mini_NPU__DOT__down__DOT__cycle_en)
                                                       ? 
                                                      ((IData)(1U) 
                                                       + vlSelf->Mini_NPU__DOT__down__DOT__cycle)
                                                       : vlSelf->Mini_NPU__DOT__down__DOT__cycle)));
    vlSelf->Mini_NPU__DOT__forward__DOT__cycle = ((
                                                   (((IData)(vlSelf->reset) 
                                                     | (IData)(vlSelf->Mini_NPU__DOT__forward__DOT__cycle_reset)) 
                                                    | (IData)(vlSelf->Mini_NPU__DOT__forward__DOT__accum_up)) 
                                                   | (IData)(vlSelf->Mini_NPU__DOT__forward__DOT__accum_down))
                                                   ? 0U
                                                   : 
                                                  (0xffffffU 
                                                   & ((IData)(vlSelf->Mini_NPU__DOT__forward__DOT__cycle_en)
                                                       ? 
                                                      ((IData)(1U) 
                                                       + vlSelf->Mini_NPU__DOT__forward__DOT__cycle)
                                                       : vlSelf->Mini_NPU__DOT__forward__DOT__cycle)));
    vlSelf->Mini_NPU__DOT__back__DOT__cycle = (((((IData)(vlSelf->reset) 
                                                  | (IData)(vlSelf->Mini_NPU__DOT__back__DOT__cycle_reset)) 
                                                 | (IData)(vlSelf->Mini_NPU__DOT__back__DOT__accum_up)) 
                                                | (IData)(vlSelf->Mini_NPU__DOT__back__DOT__accum_down))
                                                ? 0U
                                                : (0xffffffU 
                                                   & ((IData)(vlSelf->Mini_NPU__DOT__back__DOT__cycle_en)
                                                       ? 
                                                      ((IData)(1U) 
                                                       + vlSelf->Mini_NPU__DOT__back__DOT__cycle)
                                                       : vlSelf->Mini_NPU__DOT__back__DOT__cycle)));
    vlSelf->Mini_NPU__DOT__right__DOT__cycle = (((((IData)(vlSelf->reset) 
                                                   | (IData)(vlSelf->Mini_NPU__DOT__right__DOT__cycle_reset)) 
                                                  | (IData)(vlSelf->Mini_NPU__DOT__right__DOT__accum_up)) 
                                                 | (IData)(vlSelf->Mini_NPU__DOT__right__DOT__accum_down))
                                                 ? 0U
                                                 : 
                                                (0xffffffU 
                                                 & ((IData)(vlSelf->Mini_NPU__DOT__right__DOT__cycle_en)
                                                     ? 
                                                    ((IData)(1U) 
                                                     + vlSelf->Mini_NPU__DOT__right__DOT__cycle)
                                                     : vlSelf->Mini_NPU__DOT__right__DOT__cycle)));
    vlSelf->Mini_NPU__DOT__left__DOT__cycle = (((((IData)(vlSelf->reset) 
                                                  | (IData)(vlSelf->Mini_NPU__DOT__left__DOT__cycle_reset)) 
                                                 | (IData)(vlSelf->Mini_NPU__DOT__left__DOT__accum_up)) 
                                                | (IData)(vlSelf->Mini_NPU__DOT__left__DOT__accum_down))
                                                ? 0U
                                                : (0xffffffU 
                                                   & ((IData)(vlSelf->Mini_NPU__DOT__left__DOT__cycle_en)
                                                       ? 
                                                      ((IData)(1U) 
                                                       + vlSelf->Mini_NPU__DOT__left__DOT__cycle)
                                                       : vlSelf->Mini_NPU__DOT__left__DOT__cycle)));
    vlSelf->Mini_NPU__DOT__led_c__DOT__count = (0x1ffffffU 
                                                & ((((IData)(vlSelf->reset) 
                                                     | (IData)(vlSelf->Mini_NPU__DOT__led_c__DOT__count_reset)) 
                                                    | (IData)(vlSelf->Mini_NPU__DOT__led_c__DOT__count_done))
                                                    ? vlSelf->Mini_NPU__DOT__led_c__DOT__CLK_FRQ
                                                    : 
                                                   ((IData)(vlSelf->Mini_NPU__DOT__led_c__DOT__count_down)
                                                     ? 
                                                    (vlSelf->Mini_NPU__DOT__led_c__DOT__count 
                                                     - (IData)(1U))
                                                     : vlSelf->Mini_NPU__DOT__led_c__DOT__count)));
    if (((IData)(vlSelf->reset) | (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_clr_z1))) {
        __Vdly__Mini_NPU__DOT__i2c_m__DOT__sipo_z1__DOT__Q = 0U;
    } else if (vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_in_z1) {
        __Vdly__Mini_NPU__DOT__i2c_m__DOT__sipo_z1__DOT__Q 
            = (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_z1__DOT__Q), 1U));
        __Vdly__Mini_NPU__DOT__i2c_m__DOT__sipo_z1__DOT__Q 
            = ((0xfeU & (IData)(__Vdly__Mini_NPU__DOT__i2c_m__DOT__sipo_z1__DOT__Q)) 
               | (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data));
    } else {
        __Vdly__Mini_NPU__DOT__i2c_m__DOT__sipo_z1__DOT__Q 
            = vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_z1__DOT__Q;
    }
    if (((IData)(vlSelf->reset) | (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_clr_z0))) {
        __Vdly__Mini_NPU__DOT__i2c_m__DOT__sipo_z0__DOT__Q = 0U;
    } else if (vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_in_z0) {
        __Vdly__Mini_NPU__DOT__i2c_m__DOT__sipo_z0__DOT__Q 
            = (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_z0__DOT__Q), 1U));
        __Vdly__Mini_NPU__DOT__i2c_m__DOT__sipo_z0__DOT__Q 
            = ((0xfeU & (IData)(__Vdly__Mini_NPU__DOT__i2c_m__DOT__sipo_z0__DOT__Q)) 
               | (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data));
    } else {
        __Vdly__Mini_NPU__DOT__i2c_m__DOT__sipo_z0__DOT__Q 
            = vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_z0__DOT__Q;
    }
    if (((IData)(vlSelf->reset) | (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_clr_y1))) {
        __Vdly__Mini_NPU__DOT__i2c_m__DOT__sipo_y1__DOT__Q = 0U;
    } else if (vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_in_y1) {
        __Vdly__Mini_NPU__DOT__i2c_m__DOT__sipo_y1__DOT__Q 
            = (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_y1__DOT__Q), 1U));
        __Vdly__Mini_NPU__DOT__i2c_m__DOT__sipo_y1__DOT__Q 
            = ((0xfeU & (IData)(__Vdly__Mini_NPU__DOT__i2c_m__DOT__sipo_y1__DOT__Q)) 
               | (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data));
    } else {
        __Vdly__Mini_NPU__DOT__i2c_m__DOT__sipo_y1__DOT__Q 
            = vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_y1__DOT__Q;
    }
    if (((IData)(vlSelf->reset) | (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_clr_y0))) {
        __Vdly__Mini_NPU__DOT__i2c_m__DOT__sipo_y0__DOT__Q = 0U;
    } else if (vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_in_y0) {
        __Vdly__Mini_NPU__DOT__i2c_m__DOT__sipo_y0__DOT__Q 
            = (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_y0__DOT__Q), 1U));
        __Vdly__Mini_NPU__DOT__i2c_m__DOT__sipo_y0__DOT__Q 
            = ((0xfeU & (IData)(__Vdly__Mini_NPU__DOT__i2c_m__DOT__sipo_y0__DOT__Q)) 
               | (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data));
    } else {
        __Vdly__Mini_NPU__DOT__i2c_m__DOT__sipo_y0__DOT__Q 
            = vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_y0__DOT__Q;
    }
    if (((IData)(vlSelf->reset) | (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_clr_x1))) {
        __Vdly__Mini_NPU__DOT__i2c_m__DOT__sipo_x1__DOT__Q = 0U;
    } else if (vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_in_x1) {
        __Vdly__Mini_NPU__DOT__i2c_m__DOT__sipo_x1__DOT__Q 
            = (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_x1__DOT__Q), 1U));
        __Vdly__Mini_NPU__DOT__i2c_m__DOT__sipo_x1__DOT__Q 
            = ((0xfeU & (IData)(__Vdly__Mini_NPU__DOT__i2c_m__DOT__sipo_x1__DOT__Q)) 
               | (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data));
    } else {
        __Vdly__Mini_NPU__DOT__i2c_m__DOT__sipo_x1__DOT__Q 
            = vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_x1__DOT__Q;
    }
    if (((IData)(vlSelf->reset) | (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_clr_x0))) {
        __Vdly__Mini_NPU__DOT__i2c_m__DOT__sipo_x0__DOT__Q = 0U;
    } else if (vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_in_x0) {
        __Vdly__Mini_NPU__DOT__i2c_m__DOT__sipo_x0__DOT__Q 
            = (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_x0__DOT__Q), 1U));
        __Vdly__Mini_NPU__DOT__i2c_m__DOT__sipo_x0__DOT__Q 
            = ((0xfeU & (IData)(__Vdly__Mini_NPU__DOT__i2c_m__DOT__sipo_x0__DOT__Q)) 
               | (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data));
    } else {
        __Vdly__Mini_NPU__DOT__i2c_m__DOT__sipo_x0__DOT__Q 
            = vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_x0__DOT__Q;
    }
    vlSelf->Mini_NPU__DOT__up__DOT__accum = (((IData)(vlSelf->reset) 
                                              | (IData)(vlSelf->Mini_NPU__DOT__up__DOT__accum_reset))
                                              ? 0U : 
                                             (0x7fU 
                                              & (((IData)(vlSelf->Mini_NPU__DOT__up__DOT__accum_up) 
                                                  & (IData)(vlSelf->Mini_NPU__DOT__up__DOT__accum_down))
                                                  ? 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelf->Mini_NPU__DOT__up__DOT__accum))
                                                  : 
                                                 ((IData)(vlSelf->Mini_NPU__DOT__up__DOT__accum_up)
                                                   ? 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelf->Mini_NPU__DOT__up__DOT__accum))
                                                   : 
                                                  (((IData)(vlSelf->Mini_NPU__DOT__up__DOT__accum_down) 
                                                    & (0U 
                                                       == (IData)(vlSelf->Mini_NPU__DOT__up__DOT__accum)))
                                                    ? (IData)(vlSelf->Mini_NPU__DOT__up__DOT__accum)
                                                    : 
                                                   ((IData)(vlSelf->Mini_NPU__DOT__up__DOT__accum_down)
                                                     ? 
                                                    ((IData)(vlSelf->Mini_NPU__DOT__up__DOT__accum) 
                                                     - (IData)(1U))
                                                     : (IData)(vlSelf->Mini_NPU__DOT__up__DOT__accum)))))));
    vlSelf->Mini_NPU__DOT__down__DOT__accum = (((IData)(vlSelf->reset) 
                                                | (IData)(vlSelf->Mini_NPU__DOT__down__DOT__accum_reset))
                                                ? 0U
                                                : (0x7fU 
                                                   & (((IData)(vlSelf->Mini_NPU__DOT__down__DOT__accum_up) 
                                                       & (IData)(vlSelf->Mini_NPU__DOT__down__DOT__accum_down))
                                                       ? 
                                                      ((IData)(1U) 
                                                       + (IData)(vlSelf->Mini_NPU__DOT__down__DOT__accum))
                                                       : 
                                                      ((IData)(vlSelf->Mini_NPU__DOT__down__DOT__accum_up)
                                                        ? 
                                                       ((IData)(1U) 
                                                        + (IData)(vlSelf->Mini_NPU__DOT__down__DOT__accum))
                                                        : 
                                                       (((IData)(vlSelf->Mini_NPU__DOT__down__DOT__accum_down) 
                                                         & (0U 
                                                            == (IData)(vlSelf->Mini_NPU__DOT__down__DOT__accum)))
                                                         ? (IData)(vlSelf->Mini_NPU__DOT__down__DOT__accum)
                                                         : 
                                                        ((IData)(vlSelf->Mini_NPU__DOT__down__DOT__accum_down)
                                                          ? 
                                                         ((IData)(vlSelf->Mini_NPU__DOT__down__DOT__accum) 
                                                          - (IData)(1U))
                                                          : (IData)(vlSelf->Mini_NPU__DOT__down__DOT__accum)))))));
    vlSelf->Mini_NPU__DOT__forward__DOT__accum = (((IData)(vlSelf->reset) 
                                                   | (IData)(vlSelf->Mini_NPU__DOT__forward__DOT__accum_reset))
                                                   ? 0U
                                                   : 
                                                  (0x7fU 
                                                   & (((IData)(vlSelf->Mini_NPU__DOT__forward__DOT__accum_up) 
                                                       & (IData)(vlSelf->Mini_NPU__DOT__forward__DOT__accum_down))
                                                       ? 
                                                      ((IData)(1U) 
                                                       + (IData)(vlSelf->Mini_NPU__DOT__forward__DOT__accum))
                                                       : 
                                                      ((IData)(vlSelf->Mini_NPU__DOT__forward__DOT__accum_up)
                                                        ? 
                                                       ((IData)(1U) 
                                                        + (IData)(vlSelf->Mini_NPU__DOT__forward__DOT__accum))
                                                        : 
                                                       (((IData)(vlSelf->Mini_NPU__DOT__forward__DOT__accum_down) 
                                                         & (0U 
                                                            == (IData)(vlSelf->Mini_NPU__DOT__forward__DOT__accum)))
                                                         ? (IData)(vlSelf->Mini_NPU__DOT__forward__DOT__accum)
                                                         : 
                                                        ((IData)(vlSelf->Mini_NPU__DOT__forward__DOT__accum_down)
                                                          ? 
                                                         ((IData)(vlSelf->Mini_NPU__DOT__forward__DOT__accum) 
                                                          - (IData)(1U))
                                                          : (IData)(vlSelf->Mini_NPU__DOT__forward__DOT__accum)))))));
    vlSelf->Mini_NPU__DOT__back__DOT__accum = (((IData)(vlSelf->reset) 
                                                | (IData)(vlSelf->Mini_NPU__DOT__back__DOT__accum_reset))
                                                ? 0U
                                                : (0x7fU 
                                                   & (((IData)(vlSelf->Mini_NPU__DOT__back__DOT__accum_up) 
                                                       & (IData)(vlSelf->Mini_NPU__DOT__back__DOT__accum_down))
                                                       ? 
                                                      ((IData)(1U) 
                                                       + (IData)(vlSelf->Mini_NPU__DOT__back__DOT__accum))
                                                       : 
                                                      ((IData)(vlSelf->Mini_NPU__DOT__back__DOT__accum_up)
                                                        ? 
                                                       ((IData)(1U) 
                                                        + (IData)(vlSelf->Mini_NPU__DOT__back__DOT__accum))
                                                        : 
                                                       (((IData)(vlSelf->Mini_NPU__DOT__back__DOT__accum_down) 
                                                         & (0U 
                                                            == (IData)(vlSelf->Mini_NPU__DOT__back__DOT__accum)))
                                                         ? (IData)(vlSelf->Mini_NPU__DOT__back__DOT__accum)
                                                         : 
                                                        ((IData)(vlSelf->Mini_NPU__DOT__back__DOT__accum_down)
                                                          ? 
                                                         ((IData)(vlSelf->Mini_NPU__DOT__back__DOT__accum) 
                                                          - (IData)(1U))
                                                          : (IData)(vlSelf->Mini_NPU__DOT__back__DOT__accum)))))));
    vlSelf->Mini_NPU__DOT__right__DOT__accum = (((IData)(vlSelf->reset) 
                                                 | (IData)(vlSelf->Mini_NPU__DOT__right__DOT__accum_reset))
                                                 ? 0U
                                                 : 
                                                (0x7fU 
                                                 & (((IData)(vlSelf->Mini_NPU__DOT__right__DOT__accum_up) 
                                                     & (IData)(vlSelf->Mini_NPU__DOT__right__DOT__accum_down))
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSelf->Mini_NPU__DOT__right__DOT__accum))
                                                     : 
                                                    ((IData)(vlSelf->Mini_NPU__DOT__right__DOT__accum_up)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->Mini_NPU__DOT__right__DOT__accum))
                                                      : 
                                                     (((IData)(vlSelf->Mini_NPU__DOT__right__DOT__accum_down) 
                                                       & (0U 
                                                          == (IData)(vlSelf->Mini_NPU__DOT__right__DOT__accum)))
                                                       ? (IData)(vlSelf->Mini_NPU__DOT__right__DOT__accum)
                                                       : 
                                                      ((IData)(vlSelf->Mini_NPU__DOT__right__DOT__accum_down)
                                                        ? 
                                                       ((IData)(vlSelf->Mini_NPU__DOT__right__DOT__accum) 
                                                        - (IData)(1U))
                                                        : (IData)(vlSelf->Mini_NPU__DOT__right__DOT__accum)))))));
    vlSelf->Mini_NPU__DOT__left__DOT__accum = (((IData)(vlSelf->reset) 
                                                | (IData)(vlSelf->Mini_NPU__DOT__left__DOT__accum_reset))
                                                ? 0U
                                                : (0x7fU 
                                                   & (((IData)(vlSelf->Mini_NPU__DOT__left__DOT__accum_up) 
                                                       & (IData)(vlSelf->Mini_NPU__DOT__left__DOT__accum_down))
                                                       ? 
                                                      ((IData)(1U) 
                                                       + (IData)(vlSelf->Mini_NPU__DOT__left__DOT__accum))
                                                       : 
                                                      ((IData)(vlSelf->Mini_NPU__DOT__left__DOT__accum_up)
                                                        ? 
                                                       ((IData)(1U) 
                                                        + (IData)(vlSelf->Mini_NPU__DOT__left__DOT__accum))
                                                        : 
                                                       (((IData)(vlSelf->Mini_NPU__DOT__left__DOT__accum_down) 
                                                         & (0U 
                                                            == (IData)(vlSelf->Mini_NPU__DOT__left__DOT__accum)))
                                                         ? (IData)(vlSelf->Mini_NPU__DOT__left__DOT__accum)
                                                         : 
                                                        ((IData)(vlSelf->Mini_NPU__DOT__left__DOT__accum_down)
                                                          ? 
                                                         ((IData)(vlSelf->Mini_NPU__DOT__left__DOT__accum) 
                                                          - (IData)(1U))
                                                          : (IData)(vlSelf->Mini_NPU__DOT__left__DOT__accum)))))));
    vlSelf->Mini_NPU__DOT__z_axis__DOT__data2 = (((IData)(vlSelf->reset) 
                                                  | (IData)(vlSelf->Mini_NPU__DOT__z_axis__DOT__d2_clr))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->Mini_NPU__DOT__z_axis__DOT__d2_en)
                                                   ? (IData)(vlSelf->Mini_NPU__DOT__z_axis__DOT__data2_next)
                                                   : (IData)(vlSelf->Mini_NPU__DOT__z_axis__DOT__data2)));
    vlSelf->Mini_NPU__DOT__y_axis__DOT__data2 = (((IData)(vlSelf->reset) 
                                                  | (IData)(vlSelf->Mini_NPU__DOT__y_axis__DOT__d2_clr))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->Mini_NPU__DOT__y_axis__DOT__d2_en)
                                                   ? (IData)(vlSelf->Mini_NPU__DOT__y_axis__DOT__data2_next)
                                                   : (IData)(vlSelf->Mini_NPU__DOT__y_axis__DOT__data2)));
    vlSelf->Mini_NPU__DOT__x_axis__DOT__data2 = (((IData)(vlSelf->reset) 
                                                  | (IData)(vlSelf->Mini_NPU__DOT__x_axis__DOT__d2_clr))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->Mini_NPU__DOT__x_axis__DOT__d2_en)
                                                   ? (IData)(vlSelf->Mini_NPU__DOT__x_axis__DOT__data2_next)
                                                   : (IData)(vlSelf->Mini_NPU__DOT__x_axis__DOT__data2)));
    vlSelf->Mini_NPU__DOT__z_axis__DOT__data1 = (((IData)(vlSelf->reset) 
                                                  | (IData)(vlSelf->Mini_NPU__DOT__z_axis__DOT__d1_clr))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->Mini_NPU__DOT__z_axis__DOT__d1_en)
                                                   ? (IData)(vlSelf->Mini_NPU__DOT__Z_DATA)
                                                   : (IData)(vlSelf->Mini_NPU__DOT__z_axis__DOT__data1)));
    vlSelf->Mini_NPU__DOT__y_axis__DOT__data1 = (((IData)(vlSelf->reset) 
                                                  | (IData)(vlSelf->Mini_NPU__DOT__y_axis__DOT__d1_clr))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->Mini_NPU__DOT__y_axis__DOT__d1_en)
                                                   ? (IData)(vlSelf->Mini_NPU__DOT__Y_DATA)
                                                   : (IData)(vlSelf->Mini_NPU__DOT__y_axis__DOT__data1)));
    vlSelf->Mini_NPU__DOT__x_axis__DOT__data1 = (((IData)(vlSelf->reset) 
                                                  | (IData)(vlSelf->Mini_NPU__DOT__x_axis__DOT__d1_clr))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->Mini_NPU__DOT__x_axis__DOT__d1_en)
                                                   ? (IData)(vlSelf->Mini_NPU__DOT__X_DATA)
                                                   : (IData)(vlSelf->Mini_NPU__DOT__x_axis__DOT__data1)));
    if (((IData)(vlSelf->reset) | (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_clr_s))) {
        __Vdly__Mini_NPU__DOT__i2c_m__DOT__sipo_source__DOT__Q = 0U;
    } else if (vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_in_s) {
        __Vdly__Mini_NPU__DOT__i2c_m__DOT__sipo_source__DOT__Q 
            = (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_source__DOT__Q), 1U));
        __Vdly__Mini_NPU__DOT__i2c_m__DOT__sipo_source__DOT__Q 
            = ((0xfeU & (IData)(__Vdly__Mini_NPU__DOT__i2c_m__DOT__sipo_source__DOT__Q)) 
               | (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data));
    } else {
        __Vdly__Mini_NPU__DOT__i2c_m__DOT__sipo_source__DOT__Q 
            = vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_source__DOT__Q;
    }
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count = 
        (((IData)(vlSelf->reset) | (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count_reset))
          ? 0U : (0x3fU & ((IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count_en)
                            ? ((IData)(1U) + (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count))
                            : (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count))));
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__count = (((IData)(vlSelf->reset) 
                                                 | (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__count_reset))
                                                 ? 7U
                                                 : 
                                                (0xfU 
                                                 & ((IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__count_en)
                                                     ? 
                                                    ((IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__count) 
                                                     - (IData)(1U))
                                                     : (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__count))));
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration = 
        (((IData)(vlSelf->reset) | (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i_clr))
          ? 0U : (3U & ((IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i_up)
                         ? ((IData)(1U) + (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration))
                         : (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration))));
    vlSelf->Mini_NPU__DOT__ph__DOT__data_read = ((1U 
                                                  & (~ 
                                                     ((IData)(vlSelf->reset) 
                                                      | (~ (IData)(vlSelf->Mini_NPU__DOT__ph__DOT__data_read_en))))) 
                                                 && ((IData)(vlSelf->Mini_NPU__DOT__ph__DOT__data_read_en) 
                                                     || (IData)(vlSelf->Mini_NPU__DOT__ph__DOT__data_read)));
    vlSelf->Mini_NPU__DOT__ph__DOT__poll = ((1U & (~ 
                                                   ((IData)(vlSelf->reset) 
                                                    | (~ (IData)(vlSelf->Mini_NPU__DOT__ph__DOT__poll_en))))) 
                                            && ((IData)(vlSelf->Mini_NPU__DOT__ph__DOT__poll_en) 
                                                || (IData)(vlSelf->Mini_NPU__DOT__ph__DOT__poll)));
    vlSelf->Mini_NPU__DOT__ph__DOT__write = ((1U & 
                                              (~ ((IData)(vlSelf->reset) 
                                                  | (~ (IData)(vlSelf->Mini_NPU__DOT__ph__DOT__write_en))))) 
                                             && ((IData)(vlSelf->Mini_NPU__DOT__ph__DOT__write_en) 
                                                 || (IData)(vlSelf->Mini_NPU__DOT__ph__DOT__write)));
    vlSelf->Mini_NPU__DOT__led_c__DOT__led_state = 
        ((1U & (~ (IData)(vlSelf->reset))) && (IData)(vlSelf->Mini_NPU__DOT__led_c__DOT__led_nextState));
    vlSelf->Mini_NPU__DOT__up__DOT__mn_state = ((1U 
                                                 & (~ (IData)(vlSelf->reset))) 
                                                && (IData)(vlSelf->Mini_NPU__DOT__up__DOT__mn_nextState));
    vlSelf->Mini_NPU__DOT__down__DOT__mn_state = ((1U 
                                                   & (~ (IData)(vlSelf->reset))) 
                                                  && (IData)(vlSelf->Mini_NPU__DOT__down__DOT__mn_nextState));
    vlSelf->Mini_NPU__DOT__forward__DOT__mn_state = 
        ((1U & (~ (IData)(vlSelf->reset))) && (IData)(vlSelf->Mini_NPU__DOT__forward__DOT__mn_nextState));
    vlSelf->Mini_NPU__DOT__back__DOT__mn_state = ((1U 
                                                   & (~ (IData)(vlSelf->reset))) 
                                                  && (IData)(vlSelf->Mini_NPU__DOT__back__DOT__mn_nextState));
    vlSelf->Mini_NPU__DOT__right__DOT__mn_state = (
                                                   (1U 
                                                    & (~ (IData)(vlSelf->reset))) 
                                                   && (IData)(vlSelf->Mini_NPU__DOT__right__DOT__mn_nextState));
    vlSelf->Mini_NPU__DOT__left__DOT__mn_state = ((1U 
                                                   & (~ (IData)(vlSelf->reset))) 
                                                  && (IData)(vlSelf->Mini_NPU__DOT__left__DOT__mn_nextState));
    if (vlSelf->reset) {
        vlSelf->Mini_NPU__DOT__ph__DOT__ph_state = 0U;
        vlSelf->Mini_NPU__DOT__z_axis__DOT__an_state = 0U;
        vlSelf->Mini_NPU__DOT__y_axis__DOT__an_state = 0U;
        vlSelf->Mini_NPU__DOT__x_axis__DOT__an_state = 0U;
        vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state = 0U;
    } else {
        vlSelf->Mini_NPU__DOT__ph__DOT__ph_state = vlSelf->Mini_NPU__DOT__ph__DOT__ph_nextState;
        vlSelf->Mini_NPU__DOT__z_axis__DOT__an_state 
            = vlSelf->Mini_NPU__DOT__z_axis__DOT__an_nextState;
        vlSelf->Mini_NPU__DOT__y_axis__DOT__an_state 
            = vlSelf->Mini_NPU__DOT__y_axis__DOT__an_nextState;
        vlSelf->Mini_NPU__DOT__x_axis__DOT__an_state 
            = vlSelf->Mini_NPU__DOT__x_axis__DOT__an_nextState;
        vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state 
            = vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_nextState;
    }
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_z1__DOT__Q 
        = __Vdly__Mini_NPU__DOT__i2c_m__DOT__sipo_z1__DOT__Q;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_z0__DOT__Q 
        = __Vdly__Mini_NPU__DOT__i2c_m__DOT__sipo_z0__DOT__Q;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_y1__DOT__Q 
        = __Vdly__Mini_NPU__DOT__i2c_m__DOT__sipo_y1__DOT__Q;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_y0__DOT__Q 
        = __Vdly__Mini_NPU__DOT__i2c_m__DOT__sipo_y0__DOT__Q;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_x1__DOT__Q 
        = __Vdly__Mini_NPU__DOT__i2c_m__DOT__sipo_x1__DOT__Q;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_x0__DOT__Q 
        = __Vdly__Mini_NPU__DOT__i2c_m__DOT__sipo_x0__DOT__Q;
    vlSelf->Mini_NPU__DOT__z_axis__DOT__data2_next 
        = __Vdly__Mini_NPU__DOT__z_axis__DOT__data2_next;
    vlSelf->Mini_NPU__DOT__y_axis__DOT__data2_next 
        = __Vdly__Mini_NPU__DOT__y_axis__DOT__data2_next;
    vlSelf->Mini_NPU__DOT__x_axis__DOT__data2_next 
        = __Vdly__Mini_NPU__DOT__x_axis__DOT__data2_next;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_source__DOT__Q 
        = __Vdly__Mini_NPU__DOT__i2c_m__DOT__sipo_source__DOT__Q;
    vlSelf->LEDs = vlSelf->Mini_NPU__DOT__led_c__DOT__LEDs;
    vlSelf->Mini_NPU__DOT__up__DOT__accum_down = (vlSelf->Mini_NPU__DOT__up__DOT__CLK_FRQ 
                                                  == vlSelf->Mini_NPU__DOT__up__DOT__cycle);
    vlSelf->Mini_NPU__DOT__down__DOT__accum_down = 
        (vlSelf->Mini_NPU__DOT__down__DOT__CLK_FRQ 
         == vlSelf->Mini_NPU__DOT__down__DOT__cycle);
    vlSelf->Mini_NPU__DOT__forward__DOT__accum_down 
        = (vlSelf->Mini_NPU__DOT__forward__DOT__CLK_FRQ 
           == vlSelf->Mini_NPU__DOT__forward__DOT__cycle);
    vlSelf->Mini_NPU__DOT__back__DOT__accum_down = 
        (vlSelf->Mini_NPU__DOT__back__DOT__CLK_FRQ 
         == vlSelf->Mini_NPU__DOT__back__DOT__cycle);
    vlSelf->Mini_NPU__DOT__right__DOT__accum_down = 
        (vlSelf->Mini_NPU__DOT__right__DOT__CLK_FRQ 
         == vlSelf->Mini_NPU__DOT__right__DOT__cycle);
    vlSelf->Mini_NPU__DOT__left__DOT__accum_down = 
        (vlSelf->Mini_NPU__DOT__left__DOT__CLK_FRQ 
         == vlSelf->Mini_NPU__DOT__left__DOT__cycle);
    vlSelf->Mini_NPU__DOT__led_c__DOT__count_done = 
        (0U == vlSelf->Mini_NPU__DOT__led_c__DOT__count);
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__Z1_DATA = vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_z1__DOT__Q;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__Z0_DATA = vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_z0__DOT__Q;
    vlSelf->Mini_NPU__DOT__Z_DATA = (((IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_z1__DOT__Q) 
                                      << 8U) | (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_z0__DOT__Q));
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__Y1_DATA = vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_y1__DOT__Q;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__Y0_DATA = vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_y0__DOT__Q;
    vlSelf->Mini_NPU__DOT__Y_DATA = (((IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_y1__DOT__Q) 
                                      << 8U) | (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_y0__DOT__Q));
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__X1_DATA = vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_x1__DOT__Q;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__X0_DATA = vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_x0__DOT__Q;
    vlSelf->Mini_NPU__DOT__X_DATA = (((IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_x1__DOT__Q) 
                                      << 8U) | (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_x0__DOT__Q));
    vlSelf->Mini_NPU__DOT__up_fired = (0x59U == (IData)(vlSelf->Mini_NPU__DOT__up__DOT__accum));
    vlSelf->Mini_NPU__DOT__down_fired = (0x59U == (IData)(vlSelf->Mini_NPU__DOT__down__DOT__accum));
    vlSelf->Mini_NPU__DOT__forward_fired = (0x59U == (IData)(vlSelf->Mini_NPU__DOT__forward__DOT__accum));
    vlSelf->Mini_NPU__DOT__back_fired = (0x59U == (IData)(vlSelf->Mini_NPU__DOT__back__DOT__accum));
    vlSelf->Mini_NPU__DOT__right_fired = (0x59U == (IData)(vlSelf->Mini_NPU__DOT__right__DOT__accum));
    vlSelf->Mini_NPU__DOT__left_fired = (0x59U == (IData)(vlSelf->Mini_NPU__DOT__left__DOT__accum));
    vlSelf->Mini_NPU__DOT__z_axis__DOT__AgtB = 0U;
    vlSelf->Mini_NPU__DOT__z_axis__DOT__AeqB = 0U;
    vlSelf->Mini_NPU__DOT__z_axis__DOT__AltB = 0U;
    if (((IData)(vlSelf->Mini_NPU__DOT__z_axis__DOT__data1) 
         == (IData)(vlSelf->Mini_NPU__DOT__z_axis__DOT__data2))) {
        vlSelf->Mini_NPU__DOT__z_axis__DOT__AgtB = 0U;
        vlSelf->Mini_NPU__DOT__z_axis__DOT__AeqB = 1U;
        vlSelf->Mini_NPU__DOT__z_axis__DOT__AltB = 0U;
    } else if ((IData)(((~ ((IData)(vlSelf->Mini_NPU__DOT__z_axis__DOT__data1) 
                            >> 0xfU)) & ((IData)(vlSelf->Mini_NPU__DOT__z_axis__DOT__data2) 
                                         >> 0xfU)))) {
        vlSelf->Mini_NPU__DOT__z_axis__DOT__AgtB = 1U;
        vlSelf->Mini_NPU__DOT__z_axis__DOT__AeqB = 0U;
        vlSelf->Mini_NPU__DOT__z_axis__DOT__AltB = 0U;
    } else if ((IData)((((IData)(vlSelf->Mini_NPU__DOT__z_axis__DOT__data1) 
                         >> 0xfU) & (~ ((IData)(vlSelf->Mini_NPU__DOT__z_axis__DOT__data2) 
                                        >> 0xfU))))) {
        vlSelf->Mini_NPU__DOT__z_axis__DOT__AgtB = 0U;
        vlSelf->Mini_NPU__DOT__z_axis__DOT__AeqB = 0U;
        vlSelf->Mini_NPU__DOT__z_axis__DOT__AltB = 1U;
    } else if (((IData)(vlSelf->Mini_NPU__DOT__z_axis__DOT__data1) 
                < (IData)(vlSelf->Mini_NPU__DOT__z_axis__DOT__data2))) {
        vlSelf->Mini_NPU__DOT__z_axis__DOT__AgtB = 0U;
        vlSelf->Mini_NPU__DOT__z_axis__DOT__AeqB = 0U;
        vlSelf->Mini_NPU__DOT__z_axis__DOT__AltB = 1U;
    } else if (((IData)(vlSelf->Mini_NPU__DOT__z_axis__DOT__data1) 
                > (IData)(vlSelf->Mini_NPU__DOT__z_axis__DOT__data2))) {
        vlSelf->Mini_NPU__DOT__z_axis__DOT__AgtB = 1U;
        vlSelf->Mini_NPU__DOT__z_axis__DOT__AeqB = 0U;
        vlSelf->Mini_NPU__DOT__z_axis__DOT__AltB = 0U;
    }
    vlSelf->Mini_NPU__DOT__y_axis__DOT__AgtB = 0U;
    vlSelf->Mini_NPU__DOT__y_axis__DOT__AeqB = 0U;
    vlSelf->Mini_NPU__DOT__y_axis__DOT__AltB = 0U;
    if (((IData)(vlSelf->Mini_NPU__DOT__y_axis__DOT__data1) 
         == (IData)(vlSelf->Mini_NPU__DOT__y_axis__DOT__data2))) {
        vlSelf->Mini_NPU__DOT__y_axis__DOT__AgtB = 0U;
        vlSelf->Mini_NPU__DOT__y_axis__DOT__AeqB = 1U;
        vlSelf->Mini_NPU__DOT__y_axis__DOT__AltB = 0U;
    } else if ((IData)(((~ ((IData)(vlSelf->Mini_NPU__DOT__y_axis__DOT__data1) 
                            >> 0xfU)) & ((IData)(vlSelf->Mini_NPU__DOT__y_axis__DOT__data2) 
                                         >> 0xfU)))) {
        vlSelf->Mini_NPU__DOT__y_axis__DOT__AgtB = 1U;
        vlSelf->Mini_NPU__DOT__y_axis__DOT__AeqB = 0U;
        vlSelf->Mini_NPU__DOT__y_axis__DOT__AltB = 0U;
    } else if ((IData)((((IData)(vlSelf->Mini_NPU__DOT__y_axis__DOT__data1) 
                         >> 0xfU) & (~ ((IData)(vlSelf->Mini_NPU__DOT__y_axis__DOT__data2) 
                                        >> 0xfU))))) {
        vlSelf->Mini_NPU__DOT__y_axis__DOT__AgtB = 0U;
        vlSelf->Mini_NPU__DOT__y_axis__DOT__AeqB = 0U;
        vlSelf->Mini_NPU__DOT__y_axis__DOT__AltB = 1U;
    } else if (((IData)(vlSelf->Mini_NPU__DOT__y_axis__DOT__data1) 
                < (IData)(vlSelf->Mini_NPU__DOT__y_axis__DOT__data2))) {
        vlSelf->Mini_NPU__DOT__y_axis__DOT__AgtB = 0U;
        vlSelf->Mini_NPU__DOT__y_axis__DOT__AeqB = 0U;
        vlSelf->Mini_NPU__DOT__y_axis__DOT__AltB = 1U;
    } else if (((IData)(vlSelf->Mini_NPU__DOT__y_axis__DOT__data1) 
                > (IData)(vlSelf->Mini_NPU__DOT__y_axis__DOT__data2))) {
        vlSelf->Mini_NPU__DOT__y_axis__DOT__AgtB = 1U;
        vlSelf->Mini_NPU__DOT__y_axis__DOT__AeqB = 0U;
        vlSelf->Mini_NPU__DOT__y_axis__DOT__AltB = 0U;
    }
    vlSelf->Mini_NPU__DOT__x_axis__DOT__AgtB = 0U;
    vlSelf->Mini_NPU__DOT__x_axis__DOT__AeqB = 0U;
    vlSelf->Mini_NPU__DOT__x_axis__DOT__AltB = 0U;
    if (((IData)(vlSelf->Mini_NPU__DOT__x_axis__DOT__data1) 
         == (IData)(vlSelf->Mini_NPU__DOT__x_axis__DOT__data2))) {
        vlSelf->Mini_NPU__DOT__x_axis__DOT__AgtB = 0U;
        vlSelf->Mini_NPU__DOT__x_axis__DOT__AeqB = 1U;
        vlSelf->Mini_NPU__DOT__x_axis__DOT__AltB = 0U;
    } else if ((IData)(((~ ((IData)(vlSelf->Mini_NPU__DOT__x_axis__DOT__data1) 
                            >> 0xfU)) & ((IData)(vlSelf->Mini_NPU__DOT__x_axis__DOT__data2) 
                                         >> 0xfU)))) {
        vlSelf->Mini_NPU__DOT__x_axis__DOT__AgtB = 1U;
        vlSelf->Mini_NPU__DOT__x_axis__DOT__AeqB = 0U;
        vlSelf->Mini_NPU__DOT__x_axis__DOT__AltB = 0U;
    } else if ((IData)((((IData)(vlSelf->Mini_NPU__DOT__x_axis__DOT__data1) 
                         >> 0xfU) & (~ ((IData)(vlSelf->Mini_NPU__DOT__x_axis__DOT__data2) 
                                        >> 0xfU))))) {
        vlSelf->Mini_NPU__DOT__x_axis__DOT__AgtB = 0U;
        vlSelf->Mini_NPU__DOT__x_axis__DOT__AeqB = 0U;
        vlSelf->Mini_NPU__DOT__x_axis__DOT__AltB = 1U;
    } else if (((IData)(vlSelf->Mini_NPU__DOT__x_axis__DOT__data1) 
                < (IData)(vlSelf->Mini_NPU__DOT__x_axis__DOT__data2))) {
        vlSelf->Mini_NPU__DOT__x_axis__DOT__AgtB = 0U;
        vlSelf->Mini_NPU__DOT__x_axis__DOT__AeqB = 0U;
        vlSelf->Mini_NPU__DOT__x_axis__DOT__AltB = 1U;
    } else if (((IData)(vlSelf->Mini_NPU__DOT__x_axis__DOT__data1) 
                > (IData)(vlSelf->Mini_NPU__DOT__x_axis__DOT__data2))) {
        vlSelf->Mini_NPU__DOT__x_axis__DOT__AgtB = 1U;
        vlSelf->Mini_NPU__DOT__x_axis__DOT__AeqB = 0U;
        vlSelf->Mini_NPU__DOT__x_axis__DOT__AltB = 0U;
    }
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__INT_SOURCE = vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_source__DOT__Q;
    vlSelf->Mini_NPU__DOT__data_read = vlSelf->Mini_NPU__DOT__ph__DOT__data_read;
    vlSelf->Mini_NPU__DOT__poll = vlSelf->Mini_NPU__DOT__ph__DOT__poll;
    vlSelf->Mini_NPU__DOT__write = vlSelf->Mini_NPU__DOT__ph__DOT__write;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__i_up = 0U;
    vlSelf->Mini_NPU__DOT__LEDs = vlSelf->LEDs;
    vlSelf->Mini_NPU__DOT__led_c__DOT__led_reset = 0U;
    vlSelf->Mini_NPU__DOT__led_c__DOT__count_reset = 0U;
    vlSelf->Mini_NPU__DOT__z_axis__DOT__data = vlSelf->Mini_NPU__DOT__Z_DATA;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__Z_DATA = vlSelf->Mini_NPU__DOT__Z_DATA;
    vlSelf->Mini_NPU__DOT__y_axis__DOT__data = vlSelf->Mini_NPU__DOT__Y_DATA;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__Y_DATA = vlSelf->Mini_NPU__DOT__Y_DATA;
    vlSelf->Mini_NPU__DOT__x_axis__DOT__data = vlSelf->Mini_NPU__DOT__X_DATA;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__X_DATA = vlSelf->Mini_NPU__DOT__X_DATA;
    vlSelf->Mini_NPU__DOT__up__DOT__fire = vlSelf->Mini_NPU__DOT__up_fired;
    vlSelf->Mini_NPU__DOT__down__DOT__fire = vlSelf->Mini_NPU__DOT__down_fired;
    vlSelf->Mini_NPU__DOT__forward__DOT__fire = vlSelf->Mini_NPU__DOT__forward_fired;
    vlSelf->Mini_NPU__DOT__back__DOT__fire = vlSelf->Mini_NPU__DOT__back_fired;
    vlSelf->Mini_NPU__DOT__right__DOT__fire = vlSelf->Mini_NPU__DOT__right_fired;
    vlSelf->Mini_NPU__DOT__left__DOT__fire = vlSelf->Mini_NPU__DOT__left_fired;
    vlSelf->Mini_NPU__DOT__fired_array = (((IData)(vlSelf->Mini_NPU__DOT__left_fired) 
                                           << 5U) | 
                                          (((IData)(vlSelf->Mini_NPU__DOT__right_fired) 
                                            << 4U) 
                                           | (((IData)(vlSelf->Mini_NPU__DOT__back_fired) 
                                               << 3U) 
                                              | (((IData)(vlSelf->Mini_NPU__DOT__forward_fired) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->Mini_NPU__DOT__down_fired) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->Mini_NPU__DOT__up_fired))))));
    vlSelf->Mini_NPU__DOT__z_axis__DOT__activate1 = 0U;
    vlSelf->Mini_NPU__DOT__z_axis__DOT__activate2 = 0U;
    vlSelf->Mini_NPU__DOT__y_axis__DOT__activate1 = 0U;
    vlSelf->Mini_NPU__DOT__y_axis__DOT__activate2 = 0U;
    vlSelf->Mini_NPU__DOT__x_axis__DOT__activate1 = 0U;
    vlSelf->Mini_NPU__DOT__x_axis__DOT__activate2 = 0U;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_read = vlSelf->Mini_NPU__DOT__data_read;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__poll = vlSelf->Mini_NPU__DOT__poll;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_in_x1 = 0U;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_in_y0 = 0U;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_in_y1 = 0U;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_in_z0 = 0U;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_in_z1 = 0U;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_avail = 0U;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__write = vlSelf->Mini_NPU__DOT__write;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__count_reset = 0U;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__count_en = 0U;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__i_clr = 0U;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count_reset = 0U;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count_en = 0U;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_clr_s = 0U;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_clr_z1 = 0U;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_clr_z0 = 0U;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_in_s = 0U;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_clr_x0 = 0U;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_clr_x1 = 0U;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_clr_y0 = 0U;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_clr_y1 = 0U;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_in_x0 = 0U;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__scl_out_en = 0U;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__SCL_out = 0U;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__write_done = 0U;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_ready = 0U;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__read_done = 0U;
    if ((1U & (~ ((((((((0U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state)) 
                        | (1U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) 
                       | (2U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) 
                      | (3U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) 
                     | (4U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) 
                    | (0xdU == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) 
                   | (5U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) 
                  | (6U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state)))))) {
        if ((7U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
            if ((1U & (~ ((IData)(vlSelf->Mini_NPU__DOT__poll) 
                          & (0U < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__count)))))) {
                if ((1U & (~ ((IData)(vlSelf->Mini_NPU__DOT__poll) 
                              & (0U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__count)))))) {
                    if ((1U & (~ ((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                                  & (7U >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))))) {
                        if ((((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                              & (7U < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count))) 
                             & (0xfU >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))) {
                            vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_in_x1 = 1U;
                        }
                        if ((1U & (~ (((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                                       & (7U < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count))) 
                                      & (0xfU >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))))) {
                            if ((((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                                  & (0xfU < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count))) 
                                 & (0x17U >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))) {
                                vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_in_y0 = 1U;
                            }
                            if ((1U & (~ (((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                                           & (0xfU 
                                              < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count))) 
                                          & (0x17U 
                                             >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))))) {
                                if ((((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                                      & (0x17U < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count))) 
                                     & (0x1fU >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))) {
                                    vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_in_y1 = 1U;
                                }
                                if ((1U & (~ (((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                                               & (0x17U 
                                                  < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count))) 
                                              & (0x1fU 
                                                 >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))))) {
                                    if ((((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                                          & (0x1fU 
                                             < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count))) 
                                         & (0x27U >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))) {
                                        vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_in_z0 = 1U;
                                    }
                                    if ((1U & (~ (((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                                                   & (0x1fU 
                                                      < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count))) 
                                                  & (0x27U 
                                                     >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))))) {
                                        if ((((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                                              & (0x27U 
                                                 < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count))) 
                                             & (0x2fU 
                                                >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))) {
                                            vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_in_z1 = 1U;
                                        }
                                        if ((1U & (~ 
                                                   (((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                                                     & (0x27U 
                                                        < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count))) 
                                                    & (0x2fU 
                                                       >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))))) {
                                            if (((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                                                 & (0x30U 
                                                    == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))) {
                                                vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_avail = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((7U != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
            if ((8U != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                if ((9U != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                    if ((0xaU != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                        if ((0xbU != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                            if ((0xcU == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                                if ((1U & (~ (IData)(vlSelf->Mini_NPU__DOT__write)))) {
                                    if (((IData)(vlSelf->Mini_NPU__DOT__poll) 
                                         & (~ ((IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__INT_SOURCE) 
                                               >> 7U)))) {
                                        vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_clr_s = 1U;
                                    } else if (((IData)(vlSelf->Mini_NPU__DOT__poll) 
                                                & ((IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__INT_SOURCE) 
                                                   >> 7U))) {
                                        vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_clr_s = 1U;
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->Mini_NPU__DOT__poll) 
                                                  & (~ 
                                                     ((IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__INT_SOURCE) 
                                                      >> 7U)))))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->Mini_NPU__DOT__poll) 
                                                    & ((IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__INT_SOURCE) 
                                                       >> 7U))))) {
                                            if (vlSelf->Mini_NPU__DOT__data_read) {
                                                vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_clr_z1 = 1U;
                                                vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_clr_z0 = 1U;
                                                vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_clr_x0 = 1U;
                                                vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_clr_x1 = 1U;
                                                vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_clr_y0 = 1U;
                                                vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_clr_y1 = 1U;
                                                vlSelf->Mini_NPU__DOT__i2c_m__DOT__read_done = 1U;
                                            }
                                        }
                                        if (((IData)(vlSelf->Mini_NPU__DOT__poll) 
                                             & ((IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__INT_SOURCE) 
                                                >> 7U))) {
                                            vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_ready = 1U;
                                        }
                                    }
                                }
                                if (vlSelf->Mini_NPU__DOT__write) {
                                    vlSelf->Mini_NPU__DOT__i2c_m__DOT__write_done = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sda_out_en = 0U;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sub_addr = 0U;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sub_addr = ((IData)(vlSelf->Mini_NPU__DOT__write)
                                                    ? (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__FIFO_CTL_addr)
                                                    : 
                                                   ((IData)(vlSelf->Mini_NPU__DOT__poll)
                                                     ? (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__INT_SOURCE_addr)
                                                     : 
                                                    ((IData)(vlSelf->Mini_NPU__DOT__data_read)
                                                      ? (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__DATAX0_addr)
                                                      : (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__sub_addr))));
    vlSelf->Mini_NPU__DOT__led_c__DOT__fired_array 
        = vlSelf->Mini_NPU__DOT__fired_array;
    vlSelf->Mini_NPU__DOT__led_c__DOT__led_en = 0U;
    if ((1U & (~ (IData)(vlSelf->Mini_NPU__DOT__led_c__DOT__led_state)))) {
        if ((0U != (IData)(vlSelf->Mini_NPU__DOT__fired_array))) {
            if ((0U < (IData)(vlSelf->Mini_NPU__DOT__fired_array))) {
                vlSelf->Mini_NPU__DOT__led_c__DOT__led_en = 1U;
            }
        }
    }
    vlSelf->Mini_NPU__DOT__led_c__DOT__led_nextState = 0U;
    vlSelf->Mini_NPU__DOT__led_c__DOT__count_down = 0U;
    if (vlSelf->Mini_NPU__DOT__led_c__DOT__led_state) {
        if (vlSelf->Mini_NPU__DOT__led_c__DOT__led_state) {
            if (vlSelf->Mini_NPU__DOT__led_c__DOT__count_done) {
                if (vlSelf->Mini_NPU__DOT__led_c__DOT__count_done) {
                    vlSelf->Mini_NPU__DOT__led_c__DOT__led_reset = 1U;
                    vlSelf->Mini_NPU__DOT__led_c__DOT__count_reset = 1U;
                    vlSelf->Mini_NPU__DOT__led_c__DOT__led_nextState = 0U;
                }
            } else {
                vlSelf->Mini_NPU__DOT__led_c__DOT__led_nextState = 1U;
            }
            if ((1U & (~ (IData)(vlSelf->Mini_NPU__DOT__led_c__DOT__count_done)))) {
                vlSelf->Mini_NPU__DOT__led_c__DOT__count_down = 1U;
            }
        }
    } else {
        if ((0U == (IData)(vlSelf->Mini_NPU__DOT__fired_array))) {
            vlSelf->Mini_NPU__DOT__led_c__DOT__led_nextState = 0U;
        } else if ((0U < (IData)(vlSelf->Mini_NPU__DOT__fired_array))) {
            vlSelf->Mini_NPU__DOT__led_c__DOT__led_nextState = 1U;
        }
        if ((0U != (IData)(vlSelf->Mini_NPU__DOT__fired_array))) {
            if ((0U < (IData)(vlSelf->Mini_NPU__DOT__fired_array))) {
                vlSelf->Mini_NPU__DOT__led_c__DOT__count_down = 1U;
            }
        }
    }
    if ((0U != (IData)(vlSelf->Mini_NPU__DOT__z_axis__DOT__an_state))) {
        if ((1U != (IData)(vlSelf->Mini_NPU__DOT__z_axis__DOT__an_state))) {
            if ((2U == (IData)(vlSelf->Mini_NPU__DOT__z_axis__DOT__an_state))) {
                if (vlSelf->Mini_NPU__DOT__z_axis__DOT__AltB) {
                    vlSelf->Mini_NPU__DOT__z_axis__DOT__activate1 = 1U;
                }
                if ((1U & (~ (IData)(vlSelf->Mini_NPU__DOT__z_axis__DOT__AltB)))) {
                    if ((1U & (~ (IData)(vlSelf->Mini_NPU__DOT__z_axis__DOT__AeqB)))) {
                        if (vlSelf->Mini_NPU__DOT__z_axis__DOT__AgtB) {
                            vlSelf->Mini_NPU__DOT__z_axis__DOT__activate2 = 1U;
                        }
                    }
                }
            }
        }
        vlSelf->Mini_NPU__DOT__down_activated = vlSelf->Mini_NPU__DOT__z_axis__DOT__activate1;
    } else {
        vlSelf->Mini_NPU__DOT__down_activated = vlSelf->Mini_NPU__DOT__z_axis__DOT__activate1;
    }
    vlSelf->Mini_NPU__DOT__up_activated = vlSelf->Mini_NPU__DOT__z_axis__DOT__activate2;
    if ((0U != (IData)(vlSelf->Mini_NPU__DOT__y_axis__DOT__an_state))) {
        if ((1U != (IData)(vlSelf->Mini_NPU__DOT__y_axis__DOT__an_state))) {
            if ((2U == (IData)(vlSelf->Mini_NPU__DOT__y_axis__DOT__an_state))) {
                if (vlSelf->Mini_NPU__DOT__y_axis__DOT__AltB) {
                    vlSelf->Mini_NPU__DOT__y_axis__DOT__activate1 = 1U;
                }
                if ((1U & (~ (IData)(vlSelf->Mini_NPU__DOT__y_axis__DOT__AltB)))) {
                    if ((1U & (~ (IData)(vlSelf->Mini_NPU__DOT__y_axis__DOT__AeqB)))) {
                        if (vlSelf->Mini_NPU__DOT__y_axis__DOT__AgtB) {
                            vlSelf->Mini_NPU__DOT__y_axis__DOT__activate2 = 1U;
                        }
                    }
                }
            }
        }
        vlSelf->Mini_NPU__DOT__back_activated = vlSelf->Mini_NPU__DOT__y_axis__DOT__activate1;
    } else {
        vlSelf->Mini_NPU__DOT__back_activated = vlSelf->Mini_NPU__DOT__y_axis__DOT__activate1;
    }
    vlSelf->Mini_NPU__DOT__forward_activated = vlSelf->Mini_NPU__DOT__y_axis__DOT__activate2;
    if ((0U != (IData)(vlSelf->Mini_NPU__DOT__x_axis__DOT__an_state))) {
        if ((1U != (IData)(vlSelf->Mini_NPU__DOT__x_axis__DOT__an_state))) {
            if ((2U == (IData)(vlSelf->Mini_NPU__DOT__x_axis__DOT__an_state))) {
                if (vlSelf->Mini_NPU__DOT__x_axis__DOT__AltB) {
                    vlSelf->Mini_NPU__DOT__x_axis__DOT__activate1 = 1U;
                }
                if ((1U & (~ (IData)(vlSelf->Mini_NPU__DOT__x_axis__DOT__AltB)))) {
                    if ((1U & (~ (IData)(vlSelf->Mini_NPU__DOT__x_axis__DOT__AeqB)))) {
                        if (vlSelf->Mini_NPU__DOT__x_axis__DOT__AgtB) {
                            vlSelf->Mini_NPU__DOT__x_axis__DOT__activate2 = 1U;
                        }
                    }
                }
            }
        }
        vlSelf->Mini_NPU__DOT__left_activated = vlSelf->Mini_NPU__DOT__x_axis__DOT__activate1;
    } else {
        vlSelf->Mini_NPU__DOT__left_activated = vlSelf->Mini_NPU__DOT__x_axis__DOT__activate1;
    }
    vlSelf->Mini_NPU__DOT__right_activated = vlSelf->Mini_NPU__DOT__x_axis__DOT__activate2;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_x1__DOT__en 
        = vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_in_x1;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_y0__DOT__en 
        = vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_in_y0;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_y1__DOT__en 
        = vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_in_y1;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_z0__DOT__en 
        = vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_in_z0;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_z1__DOT__en 
        = vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_in_z1;
    vlSelf->Mini_NPU__DOT__data_avail = vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_avail;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_source__DOT__shift_clr 
        = vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_clr_s;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_z1__DOT__shift_clr 
        = vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_clr_z1;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_z0__DOT__shift_clr 
        = vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_clr_z0;
    if (((((((((0U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state)) 
               | (1U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) 
              | (2U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) 
             | (3U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) 
            | (4U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) 
           | (0xdU == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) 
          | (5U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) 
         | (6U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state)))) {
        if ((0U != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
            if ((1U != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                if ((2U != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                    if ((3U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                        if ((0U >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__count))) {
                            if ((0U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__count))) {
                                vlSelf->Mini_NPU__DOT__i2c_m__DOT__i_up = 1U;
                            }
                        }
                    }
                    if ((3U != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                        if ((4U != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                            if ((0xdU != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                                if ((5U != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                                    if ((1U & (~ ((1U 
                                                   == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                                                  | ((2U 
                                                      == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                                                     & (IData)(vlSelf->Mini_NPU__DOT__write)))))) {
                                        if ((1U & (~ 
                                                   ((2U 
                                                     == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                                                    & (~ (IData)(vlSelf->Mini_NPU__DOT__write)))))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((3U 
                                                      == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                                                     & (IData)(vlSelf->Mini_NPU__DOT__poll))))) {
                                                if (
                                                    ((3U 
                                                      == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                                                     & (IData)(vlSelf->Mini_NPU__DOT__data_read))) {
                                                    vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count_en = 1U;
                                                    vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_in_x0 = 1U;
                                                }
                                            }
                                            if (((3U 
                                                  == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                                                 & (IData)(vlSelf->Mini_NPU__DOT__poll))) {
                                                vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_in_s = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if ((2U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                    vlSelf->Mini_NPU__DOT__i2c_m__DOT__count_en = 1U;
                } else if ((3U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                    if ((0U < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__count))) {
                        vlSelf->Mini_NPU__DOT__i2c_m__DOT__count_en = 1U;
                    } else if ((0U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__count))) {
                        vlSelf->Mini_NPU__DOT__i2c_m__DOT__count_en = 0U;
                    }
                } else if ((4U != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                    if ((0xdU != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                        if ((5U != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                            if (((1U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                                 | ((2U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                                    & (IData)(vlSelf->Mini_NPU__DOT__write)))) {
                                vlSelf->Mini_NPU__DOT__i2c_m__DOT__count_en = 1U;
                            } else if ((1U & (~ ((2U 
                                                  == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                                                 & (~ (IData)(vlSelf->Mini_NPU__DOT__write)))))) {
                                if (((3U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                                     & (IData)(vlSelf->Mini_NPU__DOT__poll))) {
                                    vlSelf->Mini_NPU__DOT__i2c_m__DOT__count_en = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((0U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
            if ((1U & (~ (((~ (IData)(vlSelf->Mini_NPU__DOT__write)) 
                           & (~ (IData)(vlSelf->Mini_NPU__DOT__poll))) 
                          & (~ (IData)(vlSelf->Mini_NPU__DOT__data_read)))))) {
                if ((((IData)(vlSelf->Mini_NPU__DOT__write) 
                      | (IData)(vlSelf->Mini_NPU__DOT__poll)) 
                     | (IData)(vlSelf->Mini_NPU__DOT__data_read))) {
                    vlSelf->Mini_NPU__DOT__i2c_m__DOT__count_reset = 1U;
                    vlSelf->Mini_NPU__DOT__i2c_m__DOT__i_clr = 1U;
                    vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count_reset = 1U;
                    vlSelf->Mini_NPU__DOT__i2c_m__DOT__scl_out_en = 1U;
                    vlSelf->Mini_NPU__DOT__i2c_m__DOT__SCL_out = 1U;
                }
            }
        } else {
            if ((1U != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                if ((2U != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                    if ((3U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                        if ((0U >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__count))) {
                            if ((0U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__count))) {
                                vlSelf->Mini_NPU__DOT__i2c_m__DOT__count_reset = 1U;
                            }
                        }
                    }
                    if ((3U != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                        if ((4U != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                            if ((0xdU != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                                if ((5U != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                                    if ((1U & (~ ((1U 
                                                   == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                                                  | ((2U 
                                                      == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                                                     & (IData)(vlSelf->Mini_NPU__DOT__write)))))) {
                                        if ((1U & (~ 
                                                   ((2U 
                                                     == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                                                    & (~ (IData)(vlSelf->Mini_NPU__DOT__write)))))) {
                                            if (((3U 
                                                  == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                                                 & (IData)(vlSelf->Mini_NPU__DOT__poll))) {
                                                vlSelf->Mini_NPU__DOT__i2c_m__DOT__i_clr = 1U;
                                            } else if (
                                                       ((3U 
                                                         == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                                                        & (IData)(vlSelf->Mini_NPU__DOT__data_read))) {
                                                vlSelf->Mini_NPU__DOT__i2c_m__DOT__i_clr = 1U;
                                            } else if (
                                                       ((3U 
                                                         == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                                                        & (IData)(vlSelf->Mini_NPU__DOT__write))) {
                                                vlSelf->Mini_NPU__DOT__i2c_m__DOT__i_clr = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((1U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                vlSelf->Mini_NPU__DOT__i2c_m__DOT__scl_out_en = 1U;
                vlSelf->Mini_NPU__DOT__i2c_m__DOT__SCL_out = 1U;
            } else if ((2U != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                if ((3U != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                    if ((4U != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                        if ((0xdU != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                            if ((5U != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                                if ((1U & (~ ((1U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                                              | ((2U 
                                                  == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                                                 & (IData)(vlSelf->Mini_NPU__DOT__write)))))) {
                                    if (((2U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                                         & (~ (IData)(vlSelf->Mini_NPU__DOT__write)))) {
                                        vlSelf->Mini_NPU__DOT__i2c_m__DOT__scl_out_en = 1U;
                                        vlSelf->Mini_NPU__DOT__i2c_m__DOT__SCL_out = 1U;
                                    } else if ((1U 
                                                & (~ 
                                                   ((3U 
                                                     == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                                                    & (IData)(vlSelf->Mini_NPU__DOT__poll))))) {
                                        if ((1U & (~ 
                                                   ((3U 
                                                     == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                                                    & (IData)(vlSelf->Mini_NPU__DOT__data_read))))) {
                                            if (((3U 
                                                  == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                                                 & (IData)(vlSelf->Mini_NPU__DOT__write))) {
                                                vlSelf->Mini_NPU__DOT__i2c_m__DOT__scl_out_en = 1U;
                                                vlSelf->Mini_NPU__DOT__i2c_m__DOT__SCL_out = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_source__DOT__en 
            = vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_in_s;
        vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_x0__DOT__shift_clr 
            = vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_clr_x0;
        vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_x1__DOT__shift_clr 
            = vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_clr_x1;
        vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_y0__DOT__shift_clr 
            = vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_clr_y0;
        vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_y1__DOT__shift_clr 
            = vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_clr_y1;
        vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_x0__DOT__en 
            = vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_in_x0;
    } else {
        if ((7U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
            if ((1U & (~ ((IData)(vlSelf->Mini_NPU__DOT__poll) 
                          & (0U < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__count)))))) {
                if (((IData)(vlSelf->Mini_NPU__DOT__poll) 
                     & (0U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__count)))) {
                    vlSelf->Mini_NPU__DOT__i2c_m__DOT__count_reset = 1U;
                }
                if ((1U & (~ ((IData)(vlSelf->Mini_NPU__DOT__poll) 
                              & (0U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__count)))))) {
                    if ((1U & (~ ((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                                  & (7U >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))))) {
                        if ((1U & (~ (((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                                       & (7U < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count))) 
                                      & (0xfU >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))))) {
                            if ((1U & (~ (((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                                           & (0xfU 
                                              < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count))) 
                                          & (0x17U 
                                             >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))))) {
                                if ((1U & (~ (((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                                               & (0x17U 
                                                  < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count))) 
                                              & (0x1fU 
                                                 >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))))) {
                                    if ((1U & (~ (((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                                                   & (0x1fU 
                                                      < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count))) 
                                                  & (0x27U 
                                                     >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))))) {
                                        if ((1U & (~ 
                                                   (((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                                                     & (0x27U 
                                                        < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count))) 
                                                    & (0x2fU 
                                                       >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))))) {
                                            if (((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                                                 & (0x30U 
                                                    == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))) {
                                                vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count_reset = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if (((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                         & (7U >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))) {
                        vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count_en = 1U;
                        vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_in_x0 = 1U;
                    } else if ((((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                                 & (7U < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count))) 
                                & (0xfU >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))) {
                        vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count_en = 1U;
                    } else if ((((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                                 & (0xfU < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count))) 
                                & (0x17U >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))) {
                        vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count_en = 1U;
                    } else if ((((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                                 & (0x17U < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count))) 
                                & (0x1fU >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))) {
                        vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count_en = 1U;
                    } else if ((((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                                 & (0x1fU < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count))) 
                                & (0x27U >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))) {
                        vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count_en = 1U;
                    } else if ((((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                                 & (0x27U < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count))) 
                                & (0x2fU >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))) {
                        vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count_en = 1U;
                    }
                }
            }
            if (((IData)(vlSelf->Mini_NPU__DOT__poll) 
                 & (0U < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__count)))) {
                vlSelf->Mini_NPU__DOT__i2c_m__DOT__count_en = 1U;
                vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_in_s = 1U;
            } else if (((IData)(vlSelf->Mini_NPU__DOT__poll) 
                        & (0U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__count)))) {
                vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_in_s = 1U;
            }
        }
        vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_source__DOT__en 
            = vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_in_s;
        vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_x0__DOT__shift_clr 
            = vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_clr_x0;
        vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_x1__DOT__shift_clr 
            = vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_clr_x1;
        vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_y0__DOT__shift_clr 
            = vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_clr_y0;
        vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_y1__DOT__shift_clr 
            = vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_clr_y1;
        vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_x0__DOT__en 
            = vlSelf->Mini_NPU__DOT__i2c_m__DOT__shift_in_x0;
        if ((7U != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
            if ((8U != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                if ((9U != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                    if ((0xaU == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                        vlSelf->Mini_NPU__DOT__i2c_m__DOT__scl_out_en = 1U;
                        vlSelf->Mini_NPU__DOT__i2c_m__DOT__SCL_out = 1U;
                    } else if ((0xbU == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                        vlSelf->Mini_NPU__DOT__i2c_m__DOT__scl_out_en = 1U;
                        vlSelf->Mini_NPU__DOT__i2c_m__DOT__SCL_out = 1U;
                    }
                }
            }
        }
    }
    vlSelf->SCL = ((IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__scl_out_en)
                    ? (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__SCL_out)
                    : (IData)(vlSelf->clock));
    vlSelf->Mini_NPU__DOT__write_done = vlSelf->Mini_NPU__DOT__i2c_m__DOT__write_done;
    vlSelf->Mini_NPU__DOT__data_ready = vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_ready;
    vlSelf->Mini_NPU__DOT__read_done = vlSelf->Mini_NPU__DOT__i2c_m__DOT__read_done;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__addr = 0U;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__addr = ((0U 
                                                == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration))
                                                ? (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__sad_w)
                                                : (
                                                   (1U 
                                                    == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration))
                                                    ? (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__sub_addr)
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration))
                                                     ? (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__sad_r)
                                                     : (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__addr))));
    vlSelf->Mini_NPU__DOT__down__DOT__activated = vlSelf->Mini_NPU__DOT__down_activated;
    __Vtableidx6 = (((IData)(vlSelf->Mini_NPU__DOT__down_activated) 
                     << 2U) | (((IData)(vlSelf->Mini_NPU__DOT__down_fired) 
                                << 1U) | (IData)(vlSelf->Mini_NPU__DOT__down__DOT__mn_state)));
    vlSelf->Mini_NPU__DOT__down__DOT__cycle_en = Vtop__ConstPool__TABLE_ha6e3e4ba_0
        [__Vtableidx6];
    vlSelf->Mini_NPU__DOT__down__DOT__cycle_reset = 
        Vtop__ConstPool__TABLE_h2dc28e24_0[__Vtableidx6];
    vlSelf->Mini_NPU__DOT__down__DOT__accum_up = Vtop__ConstPool__TABLE_h2dc28e24_0
        [__Vtableidx6];
    vlSelf->Mini_NPU__DOT__down__DOT__accum_reset = 
        Vtop__ConstPool__TABLE_h5b88da62_0[__Vtableidx6];
    vlSelf->Mini_NPU__DOT__down__DOT__mn_nextState 
        = Vtop__ConstPool__TABLE_h2dc28e24_0[__Vtableidx6];
    vlSelf->Mini_NPU__DOT__up__DOT__activated = vlSelf->Mini_NPU__DOT__up_activated;
    __Vtableidx7 = (((IData)(vlSelf->Mini_NPU__DOT__up_activated) 
                     << 2U) | (((IData)(vlSelf->Mini_NPU__DOT__up_fired) 
                                << 1U) | (IData)(vlSelf->Mini_NPU__DOT__up__DOT__mn_state)));
    vlSelf->Mini_NPU__DOT__up__DOT__cycle_en = Vtop__ConstPool__TABLE_ha6e3e4ba_0
        [__Vtableidx7];
    vlSelf->Mini_NPU__DOT__up__DOT__cycle_reset = Vtop__ConstPool__TABLE_h2dc28e24_0
        [__Vtableidx7];
    vlSelf->Mini_NPU__DOT__up__DOT__accum_up = Vtop__ConstPool__TABLE_h2dc28e24_0
        [__Vtableidx7];
    vlSelf->Mini_NPU__DOT__up__DOT__accum_reset = Vtop__ConstPool__TABLE_h5b88da62_0
        [__Vtableidx7];
    vlSelf->Mini_NPU__DOT__up__DOT__mn_nextState = 
        Vtop__ConstPool__TABLE_h2dc28e24_0[__Vtableidx7];
    vlSelf->Mini_NPU__DOT__back__DOT__activated = vlSelf->Mini_NPU__DOT__back_activated;
    __Vtableidx4 = (((IData)(vlSelf->Mini_NPU__DOT__back_activated) 
                     << 2U) | (((IData)(vlSelf->Mini_NPU__DOT__back_fired) 
                                << 1U) | (IData)(vlSelf->Mini_NPU__DOT__back__DOT__mn_state)));
    vlSelf->Mini_NPU__DOT__back__DOT__cycle_en = Vtop__ConstPool__TABLE_ha6e3e4ba_0
        [__Vtableidx4];
    vlSelf->Mini_NPU__DOT__back__DOT__cycle_reset = 
        Vtop__ConstPool__TABLE_h2dc28e24_0[__Vtableidx4];
    vlSelf->Mini_NPU__DOT__back__DOT__accum_up = Vtop__ConstPool__TABLE_h2dc28e24_0
        [__Vtableidx4];
    vlSelf->Mini_NPU__DOT__back__DOT__accum_reset = 
        Vtop__ConstPool__TABLE_h5b88da62_0[__Vtableidx4];
    vlSelf->Mini_NPU__DOT__back__DOT__mn_nextState 
        = Vtop__ConstPool__TABLE_h2dc28e24_0[__Vtableidx4];
    vlSelf->Mini_NPU__DOT__forward__DOT__activated 
        = vlSelf->Mini_NPU__DOT__forward_activated;
    __Vtableidx5 = (((IData)(vlSelf->Mini_NPU__DOT__forward_activated) 
                     << 2U) | (((IData)(vlSelf->Mini_NPU__DOT__forward_fired) 
                                << 1U) | (IData)(vlSelf->Mini_NPU__DOT__forward__DOT__mn_state)));
    vlSelf->Mini_NPU__DOT__forward__DOT__cycle_en = 
        Vtop__ConstPool__TABLE_ha6e3e4ba_0[__Vtableidx5];
    vlSelf->Mini_NPU__DOT__forward__DOT__cycle_reset 
        = Vtop__ConstPool__TABLE_h2dc28e24_0[__Vtableidx5];
    vlSelf->Mini_NPU__DOT__forward__DOT__accum_up = 
        Vtop__ConstPool__TABLE_h2dc28e24_0[__Vtableidx5];
    vlSelf->Mini_NPU__DOT__forward__DOT__accum_reset 
        = Vtop__ConstPool__TABLE_h5b88da62_0[__Vtableidx5];
    vlSelf->Mini_NPU__DOT__forward__DOT__mn_nextState 
        = Vtop__ConstPool__TABLE_h2dc28e24_0[__Vtableidx5];
    vlSelf->Mini_NPU__DOT__left__DOT__activated = vlSelf->Mini_NPU__DOT__left_activated;
    __Vtableidx2 = (((IData)(vlSelf->Mini_NPU__DOT__left_activated) 
                     << 2U) | (((IData)(vlSelf->Mini_NPU__DOT__left_fired) 
                                << 1U) | (IData)(vlSelf->Mini_NPU__DOT__left__DOT__mn_state)));
    vlSelf->Mini_NPU__DOT__left__DOT__cycle_en = Vtop__ConstPool__TABLE_ha6e3e4ba_0
        [__Vtableidx2];
    vlSelf->Mini_NPU__DOT__left__DOT__cycle_reset = 
        Vtop__ConstPool__TABLE_h2dc28e24_0[__Vtableidx2];
    vlSelf->Mini_NPU__DOT__left__DOT__accum_up = Vtop__ConstPool__TABLE_h2dc28e24_0
        [__Vtableidx2];
    vlSelf->Mini_NPU__DOT__left__DOT__accum_reset = 
        Vtop__ConstPool__TABLE_h5b88da62_0[__Vtableidx2];
    vlSelf->Mini_NPU__DOT__left__DOT__mn_nextState 
        = Vtop__ConstPool__TABLE_h2dc28e24_0[__Vtableidx2];
    vlSelf->Mini_NPU__DOT__right__DOT__activated = vlSelf->Mini_NPU__DOT__right_activated;
    __Vtableidx3 = (((IData)(vlSelf->Mini_NPU__DOT__right_activated) 
                     << 2U) | (((IData)(vlSelf->Mini_NPU__DOT__right_fired) 
                                << 1U) | (IData)(vlSelf->Mini_NPU__DOT__right__DOT__mn_state)));
    vlSelf->Mini_NPU__DOT__right__DOT__cycle_en = Vtop__ConstPool__TABLE_ha6e3e4ba_0
        [__Vtableidx3];
    vlSelf->Mini_NPU__DOT__right__DOT__cycle_reset 
        = Vtop__ConstPool__TABLE_h2dc28e24_0[__Vtableidx3];
    vlSelf->Mini_NPU__DOT__right__DOT__accum_up = Vtop__ConstPool__TABLE_h2dc28e24_0
        [__Vtableidx3];
    vlSelf->Mini_NPU__DOT__right__DOT__accum_reset 
        = Vtop__ConstPool__TABLE_h5b88da62_0[__Vtableidx3];
    vlSelf->Mini_NPU__DOT__right__DOT__mn_nextState 
        = Vtop__ConstPool__TABLE_h2dc28e24_0[__Vtableidx3];
    vlSelf->Mini_NPU__DOT__x_axis__DOT__data_avail 
        = vlSelf->Mini_NPU__DOT__data_avail;
    vlSelf->Mini_NPU__DOT__y_axis__DOT__data_avail 
        = vlSelf->Mini_NPU__DOT__data_avail;
    vlSelf->Mini_NPU__DOT__z_axis__DOT__data_avail 
        = vlSelf->Mini_NPU__DOT__data_avail;
    vlSelf->Mini_NPU__DOT__SCL = vlSelf->SCL;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__SCL = vlSelf->SCL;
    vlSelf->Mini_NPU__DOT__ph__DOT__write_done = vlSelf->Mini_NPU__DOT__write_done;
    vlSelf->Mini_NPU__DOT__ph__DOT__data_ready = vlSelf->Mini_NPU__DOT__data_ready;
    vlSelf->Mini_NPU__DOT__ph__DOT__read_done = vlSelf->Mini_NPU__DOT__read_done;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__ADDR = (((2U 
                                                 == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                                                & (IData)(vlSelf->Mini_NPU__DOT__ph__DOT__write))
                                                ? (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__FIFO_DATA)
                                                : (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__addr));
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__SDA_out = 0U;
    if (((((((((0U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state)) 
               | (1U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) 
              | (2U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) 
             | (3U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) 
            | (4U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) 
           | (0xdU == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) 
          | (5U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) 
         | (6U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state)))) {
        if ((0U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
            if ((1U & (~ (((~ (IData)(vlSelf->Mini_NPU__DOT__write)) 
                           & (~ (IData)(vlSelf->Mini_NPU__DOT__poll))) 
                          & (~ (IData)(vlSelf->Mini_NPU__DOT__data_read)))))) {
                if ((((IData)(vlSelf->Mini_NPU__DOT__write) 
                      | (IData)(vlSelf->Mini_NPU__DOT__poll)) 
                     | (IData)(vlSelf->Mini_NPU__DOT__data_read))) {
                    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sda_out_en = 1U;
                    vlSelf->Mini_NPU__DOT__i2c_m__DOT__SDA_out = 1U;
                }
            }
        } else if ((1U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
            vlSelf->Mini_NPU__DOT__i2c_m__DOT__sda_out_en = 1U;
            vlSelf->Mini_NPU__DOT__i2c_m__DOT__SDA_out = 0U;
        } else if ((2U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
            vlSelf->Mini_NPU__DOT__i2c_m__DOT__sda_out_en = 1U;
            vlSelf->Mini_NPU__DOT__i2c_m__DOT__SDA_out 
                = (1U & ((IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__ADDR) 
                         >> (7U & (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__count))));
        } else if ((3U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
            if ((0U < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__count))) {
                vlSelf->Mini_NPU__DOT__i2c_m__DOT__sda_out_en = 1U;
                vlSelf->Mini_NPU__DOT__i2c_m__DOT__SDA_out 
                    = (1U & ((IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__ADDR) 
                             >> (7U & (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__count))));
            } else if ((0U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__count))) {
                vlSelf->Mini_NPU__DOT__i2c_m__DOT__sda_out_en = 1U;
                vlSelf->Mini_NPU__DOT__i2c_m__DOT__SDA_out 
                    = (1U & ((IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__ADDR) 
                             >> (7U & (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__count))));
            }
        } else if ((4U != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
            if ((0xdU != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                if ((5U != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                    if (((1U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                         | ((2U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                            & (IData)(vlSelf->Mini_NPU__DOT__write)))) {
                        vlSelf->Mini_NPU__DOT__i2c_m__DOT__sda_out_en = 1U;
                        vlSelf->Mini_NPU__DOT__i2c_m__DOT__SDA_out 
                            = (1U & ((IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__ADDR) 
                                     >> (7U & (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__count))));
                    } else if (((2U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                                & (~ (IData)(vlSelf->Mini_NPU__DOT__write)))) {
                        vlSelf->Mini_NPU__DOT__i2c_m__DOT__sda_out_en = 1U;
                        vlSelf->Mini_NPU__DOT__i2c_m__DOT__SDA_out = 1U;
                    } else if ((1U & (~ ((3U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                                         & (IData)(vlSelf->Mini_NPU__DOT__poll))))) {
                        if ((1U & (~ ((3U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                                      & (IData)(vlSelf->Mini_NPU__DOT__data_read))))) {
                            if (((3U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                                 & (IData)(vlSelf->Mini_NPU__DOT__write))) {
                                vlSelf->Mini_NPU__DOT__i2c_m__DOT__sda_out_en = 1U;
                                vlSelf->Mini_NPU__DOT__i2c_m__DOT__SDA_out = 0U;
                            }
                        }
                    }
                }
            }
        }
    } else if ((7U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
        if ((1U & (~ ((IData)(vlSelf->Mini_NPU__DOT__poll) 
                      & (0U < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__count)))))) {
            if ((1U & (~ ((IData)(vlSelf->Mini_NPU__DOT__poll) 
                          & (0U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__count)))))) {
                if ((1U & (~ ((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                              & (7U >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))))) {
                    if ((1U & (~ (((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                                   & (7U < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count))) 
                                  & (0xfU >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))))) {
                        if ((1U & (~ (((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                                       & (0xfU < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count))) 
                                      & (0x17U >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))))) {
                            if ((1U & (~ (((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                                           & (0x17U 
                                              < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count))) 
                                          & (0x1fU 
                                             >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))))) {
                                if ((1U & (~ (((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                                               & (0x1fU 
                                                  < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count))) 
                                              & (0x27U 
                                                 >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))))) {
                                    if ((1U & (~ (((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                                                   & (0x27U 
                                                      < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count))) 
                                                  & (0x2fU 
                                                     >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))))) {
                                        if (((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                                             & (0x30U 
                                                == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))) {
                                            vlSelf->Mini_NPU__DOT__i2c_m__DOT__sda_out_en = 1U;
                                            vlSelf->Mini_NPU__DOT__i2c_m__DOT__SDA_out = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((8U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
        vlSelf->Mini_NPU__DOT__i2c_m__DOT__sda_out_en = 1U;
        vlSelf->Mini_NPU__DOT__i2c_m__DOT__SDA_out = 1U;
    } else if ((9U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
        vlSelf->Mini_NPU__DOT__i2c_m__DOT__sda_out_en = 1U;
        vlSelf->Mini_NPU__DOT__i2c_m__DOT__SDA_out = 0U;
    } else if ((0xaU == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
        vlSelf->Mini_NPU__DOT__i2c_m__DOT__sda_out_en = 1U;
        vlSelf->Mini_NPU__DOT__i2c_m__DOT__SDA_out = 0U;
    } else if ((0xbU == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
        vlSelf->Mini_NPU__DOT__i2c_m__DOT__sda_out_en = 1U;
        vlSelf->Mini_NPU__DOT__i2c_m__DOT__SDA_out = 1U;
    }
    vlSelf->SDA = ((IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__sda_out_en)
                    ? (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__SDA_out)
                    : (IData)(vlSelf->SDA_in));
    vlSelf->Mini_NPU__DOT__SDA = vlSelf->SDA;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_nextState = 0U;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__data = vlSelf->SDA;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__abort = 0U;
    if (((((((((0U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state)) 
               | (1U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) 
              | (2U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) 
             | (3U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) 
            | (4U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) 
           | (0xdU == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) 
          | (5U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) 
         | (6U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state)))) {
        if ((0U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
            if ((1U & (((~ (IData)(vlSelf->Mini_NPU__DOT__write)) 
                        & (~ (IData)(vlSelf->Mini_NPU__DOT__poll))) 
                       & (~ (IData)(vlSelf->Mini_NPU__DOT__data_read))))) {
                vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_nextState = 0U;
            } else if ((((IData)(vlSelf->Mini_NPU__DOT__write) 
                         | (IData)(vlSelf->Mini_NPU__DOT__poll)) 
                        | (IData)(vlSelf->Mini_NPU__DOT__data_read))) {
                vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_nextState = 1U;
            }
        } else if ((1U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
            vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_nextState = 2U;
        } else if ((2U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
            vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_nextState = 3U;
        } else if ((3U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
            if ((0U < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__count))) {
                vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_nextState = 3U;
            } else if ((0U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__count))) {
                vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_nextState = 4U;
            }
        } else if ((4U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
            if (vlSelf->SDA) {
                if (vlSelf->SDA) {
                    vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_nextState = 0xdU;
                }
            } else {
                vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_nextState = 5U;
            }
        } else if ((0xdU == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
            vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_nextState = 0xdU;
        } else if ((5U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
            if (vlSelf->SDA) {
                vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_nextState = 6U;
            } else if ((1U & (~ (IData)(vlSelf->SDA)))) {
                vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_nextState = 0xdU;
            }
        } else if (((1U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                    | ((2U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                       & (IData)(vlSelf->Mini_NPU__DOT__write)))) {
            vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_nextState = 3U;
        } else if (((2U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                    & (~ (IData)(vlSelf->Mini_NPU__DOT__write)))) {
            vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_nextState = 1U;
        } else if (((3U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                    & (IData)(vlSelf->Mini_NPU__DOT__poll))) {
            vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_nextState = 7U;
        } else if (((3U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                    & (IData)(vlSelf->Mini_NPU__DOT__data_read))) {
            vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_nextState = 7U;
        } else if (((3U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                    & (IData)(vlSelf->Mini_NPU__DOT__write))) {
            vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_nextState = 0xbU;
        }
        if ((0U != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
            if ((1U != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                if ((2U != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                    if ((3U != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                        if ((4U != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                            if ((0xdU != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                                if ((5U != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                                    if ((1U & (~ ((1U 
                                                   == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                                                  | ((2U 
                                                      == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                                                     & (IData)(vlSelf->Mini_NPU__DOT__write)))))) {
                                        if ((1U & (~ 
                                                   ((2U 
                                                     == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                                                    & (~ (IData)(vlSelf->Mini_NPU__DOT__write)))))) {
                                            if (((3U 
                                                  == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                                                 & (IData)(vlSelf->Mini_NPU__DOT__poll))) {
                                                vlSelf->Mini_NPU__DOT__i2c_m__DOT__data 
                                                    = vlSelf->SDA;
                                            } else if (
                                                       ((3U 
                                                         == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__iteration)) 
                                                        & (IData)(vlSelf->Mini_NPU__DOT__data_read))) {
                                                vlSelf->Mini_NPU__DOT__i2c_m__DOT__data 
                                                    = vlSelf->SDA;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        if ((4U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                            if (vlSelf->SDA) {
                                if (vlSelf->SDA) {
                                    vlSelf->Mini_NPU__DOT__i2c_m__DOT__abort = 1U;
                                }
                            }
                        } else if ((0xdU != (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                            if ((5U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
                                if ((1U & (~ (IData)(vlSelf->SDA)))) {
                                    if ((1U & (~ (IData)(vlSelf->SDA)))) {
                                        vlSelf->Mini_NPU__DOT__i2c_m__DOT__abort = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((7U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
        if (((IData)(vlSelf->Mini_NPU__DOT__poll) & 
             (0U < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__count)))) {
            vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_nextState = 7U;
            vlSelf->Mini_NPU__DOT__i2c_m__DOT__data 
                = vlSelf->SDA;
        } else if (((IData)(vlSelf->Mini_NPU__DOT__poll) 
                    & (0U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__count)))) {
            vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_nextState = 8U;
            vlSelf->Mini_NPU__DOT__i2c_m__DOT__data 
                = vlSelf->SDA;
        } else if (((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                    & (7U >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))) {
            vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_nextState = 7U;
            vlSelf->Mini_NPU__DOT__i2c_m__DOT__data 
                = vlSelf->SDA;
        } else if ((((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                     & (7U < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count))) 
                    & (0xfU >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))) {
            vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_nextState = 7U;
            vlSelf->Mini_NPU__DOT__i2c_m__DOT__data 
                = vlSelf->SDA;
        } else if ((((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                     & (0xfU < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count))) 
                    & (0x17U >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))) {
            vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_nextState = 7U;
            vlSelf->Mini_NPU__DOT__i2c_m__DOT__data 
                = vlSelf->SDA;
        } else if ((((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                     & (0x17U < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count))) 
                    & (0x1fU >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))) {
            vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_nextState = 7U;
            vlSelf->Mini_NPU__DOT__i2c_m__DOT__data 
                = vlSelf->SDA;
        } else if ((((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                     & (0x1fU < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count))) 
                    & (0x27U >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))) {
            vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_nextState = 7U;
            vlSelf->Mini_NPU__DOT__i2c_m__DOT__data 
                = vlSelf->SDA;
        } else if ((((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                     & (0x27U < (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count))) 
                    & (0x2fU >= (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))) {
            vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_nextState = 7U;
            vlSelf->Mini_NPU__DOT__i2c_m__DOT__data 
                = vlSelf->SDA;
        } else if (((IData)(vlSelf->Mini_NPU__DOT__data_read) 
                    & (0x30U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__data_count)))) {
            vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_nextState = 9U;
        }
    } else if ((8U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
        vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_nextState = 9U;
    } else if ((9U == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
        vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_nextState = 0xaU;
    } else if ((0xaU == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
        vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_nextState = 0xbU;
    } else if ((0xbU == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
        vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_nextState = 0xcU;
    } else if ((0xcU == (IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_state))) {
        if (vlSelf->Mini_NPU__DOT__write) {
            vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_nextState = 0U;
        } else if (((IData)(vlSelf->Mini_NPU__DOT__poll) 
                    & (~ ((IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__INT_SOURCE) 
                          >> 7U)))) {
            vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_nextState = 0U;
        } else if (((IData)(vlSelf->Mini_NPU__DOT__poll) 
                    & ((IData)(vlSelf->Mini_NPU__DOT__i2c_m__DOT__INT_SOURCE) 
                       >> 7U))) {
            vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_nextState = 0U;
        } else if (vlSelf->Mini_NPU__DOT__data_read) {
            vlSelf->Mini_NPU__DOT__i2c_m__DOT__i2c_nextState = 0U;
        }
    }
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__SDA = vlSelf->Mini_NPU__DOT__SDA;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_source__DOT__serial_bit 
        = vlSelf->Mini_NPU__DOT__i2c_m__DOT__data;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_x0__DOT__serial_bit 
        = vlSelf->Mini_NPU__DOT__i2c_m__DOT__data;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_x1__DOT__serial_bit 
        = vlSelf->Mini_NPU__DOT__i2c_m__DOT__data;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_y0__DOT__serial_bit 
        = vlSelf->Mini_NPU__DOT__i2c_m__DOT__data;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_y1__DOT__serial_bit 
        = vlSelf->Mini_NPU__DOT__i2c_m__DOT__data;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_z0__DOT__serial_bit 
        = vlSelf->Mini_NPU__DOT__i2c_m__DOT__data;
    vlSelf->Mini_NPU__DOT__i2c_m__DOT__sipo_z1__DOT__serial_bit 
        = vlSelf->Mini_NPU__DOT__i2c_m__DOT__data;
    vlSelf->Mini_NPU__DOT__abort = vlSelf->Mini_NPU__DOT__i2c_m__DOT__abort;
    vlSelf->Mini_NPU__DOT__ph__DOT__abort = vlSelf->Mini_NPU__DOT__abort;
    vlSelf->Mini_NPU__DOT__x_axis__DOT__abort = vlSelf->Mini_NPU__DOT__abort;
    vlSelf->Mini_NPU__DOT__y_axis__DOT__abort = vlSelf->Mini_NPU__DOT__abort;
    vlSelf->Mini_NPU__DOT__z_axis__DOT__abort = vlSelf->Mini_NPU__DOT__abort;
    vlSelf->Mini_NPU__DOT__x_axis__DOT__d2n_clr = 0U;
    vlSelf->Mini_NPU__DOT__x_axis__DOT__d2_clr = 0U;
    vlSelf->Mini_NPU__DOT__x_axis__DOT__d1_clr = 0U;
    vlSelf->Mini_NPU__DOT__x_axis__DOT__d1_en = 0U;
    vlSelf->Mini_NPU__DOT__x_axis__DOT__d2_en = 0U;
    if ((0U != (IData)(vlSelf->Mini_NPU__DOT__x_axis__DOT__an_state))) {
        if ((1U == (IData)(vlSelf->Mini_NPU__DOT__x_axis__DOT__an_state))) {
            if ((1U & (~ ((IData)(vlSelf->stop) | (IData)(vlSelf->Mini_NPU__DOT__abort))))) {
                if (vlSelf->Mini_NPU__DOT__data_avail) {
                    if (vlSelf->Mini_NPU__DOT__data_avail) {
                        vlSelf->Mini_NPU__DOT__x_axis__DOT__d2_en = 1U;
                    }
                }
            }
        }
    }
    vlSelf->Mini_NPU__DOT__x_axis__DOT__d2n_en = 0U;
    vlSelf->Mini_NPU__DOT__y_axis__DOT__d2n_clr = 0U;
    vlSelf->Mini_NPU__DOT__y_axis__DOT__d2_clr = 0U;
    vlSelf->Mini_NPU__DOT__y_axis__DOT__d1_clr = 0U;
    vlSelf->Mini_NPU__DOT__y_axis__DOT__d1_en = 0U;
    vlSelf->Mini_NPU__DOT__y_axis__DOT__d2_en = 0U;
    if ((0U != (IData)(vlSelf->Mini_NPU__DOT__y_axis__DOT__an_state))) {
        if ((1U == (IData)(vlSelf->Mini_NPU__DOT__y_axis__DOT__an_state))) {
            if ((1U & (~ ((IData)(vlSelf->stop) | (IData)(vlSelf->Mini_NPU__DOT__abort))))) {
                if (vlSelf->Mini_NPU__DOT__data_avail) {
                    if (vlSelf->Mini_NPU__DOT__data_avail) {
                        vlSelf->Mini_NPU__DOT__y_axis__DOT__d2_en = 1U;
                    }
                }
            }
        }
    }
    vlSelf->Mini_NPU__DOT__y_axis__DOT__d2n_en = 0U;
    vlSelf->Mini_NPU__DOT__z_axis__DOT__d2n_clr = 0U;
    vlSelf->Mini_NPU__DOT__z_axis__DOT__d2_clr = 0U;
    vlSelf->Mini_NPU__DOT__z_axis__DOT__d1_clr = 0U;
    vlSelf->Mini_NPU__DOT__z_axis__DOT__d1_en = 0U;
    vlSelf->Mini_NPU__DOT__z_axis__DOT__d2_en = 0U;
    if ((0U != (IData)(vlSelf->Mini_NPU__DOT__z_axis__DOT__an_state))) {
        if ((1U == (IData)(vlSelf->Mini_NPU__DOT__z_axis__DOT__an_state))) {
            if ((1U & (~ ((IData)(vlSelf->stop) | (IData)(vlSelf->Mini_NPU__DOT__abort))))) {
                if (vlSelf->Mini_NPU__DOT__data_avail) {
                    if (vlSelf->Mini_NPU__DOT__data_avail) {
                        vlSelf->Mini_NPU__DOT__z_axis__DOT__d2_en = 1U;
                    }
                }
            }
        }
    }
    vlSelf->Mini_NPU__DOT__z_axis__DOT__d2n_en = 0U;
    vlSelf->Mini_NPU__DOT__x_axis__DOT__an_nextState = 0U;
    if ((0U == (IData)(vlSelf->Mini_NPU__DOT__x_axis__DOT__an_state))) {
        if ((1U & (~ (IData)(vlSelf->Mini_NPU__DOT__data_avail)))) {
            vlSelf->Mini_NPU__DOT__x_axis__DOT__d2n_clr = 1U;
            vlSelf->Mini_NPU__DOT__x_axis__DOT__d2_clr = 1U;
            vlSelf->Mini_NPU__DOT__x_axis__DOT__d1_clr = 1U;
        }
        if (vlSelf->Mini_NPU__DOT__data_avail) {
            if (vlSelf->Mini_NPU__DOT__data_avail) {
                vlSelf->Mini_NPU__DOT__x_axis__DOT__d1_en = 1U;
                vlSelf->Mini_NPU__DOT__x_axis__DOT__d2n_en = 1U;
                vlSelf->Mini_NPU__DOT__x_axis__DOT__an_nextState = 1U;
            }
        } else {
            vlSelf->Mini_NPU__DOT__x_axis__DOT__an_nextState = 0U;
        }
    } else if ((1U == (IData)(vlSelf->Mini_NPU__DOT__x_axis__DOT__an_state))) {
        if (((IData)(vlSelf->stop) | (IData)(vlSelf->Mini_NPU__DOT__abort))) {
            vlSelf->Mini_NPU__DOT__x_axis__DOT__d2n_clr = 1U;
            vlSelf->Mini_NPU__DOT__x_axis__DOT__d2_clr = 1U;
            vlSelf->Mini_NPU__DOT__x_axis__DOT__d1_clr = 1U;
            vlSelf->Mini_NPU__DOT__x_axis__DOT__an_nextState = 0U;
        } else if (vlSelf->Mini_NPU__DOT__data_avail) {
            if (vlSelf->Mini_NPU__DOT__data_avail) {
                vlSelf->Mini_NPU__DOT__x_axis__DOT__an_nextState = 2U;
            }
        } else {
            vlSelf->Mini_NPU__DOT__x_axis__DOT__an_nextState = 1U;
        }
        if ((1U & (~ ((IData)(vlSelf->stop) | (IData)(vlSelf->Mini_NPU__DOT__abort))))) {
            if (vlSelf->Mini_NPU__DOT__data_avail) {
                if (vlSelf->Mini_NPU__DOT__data_avail) {
                    vlSelf->Mini_NPU__DOT__x_axis__DOT__d1_en = 1U;
                    vlSelf->Mini_NPU__DOT__x_axis__DOT__d2n_en = 1U;
                }
            }
        }
    } else if ((2U == (IData)(vlSelf->Mini_NPU__DOT__x_axis__DOT__an_state))) {
        if (vlSelf->Mini_NPU__DOT__x_axis__DOT__AltB) {
            vlSelf->Mini_NPU__DOT__x_axis__DOT__an_nextState = 3U;
        } else if (vlSelf->Mini_NPU__DOT__x_axis__DOT__AeqB) {
            vlSelf->Mini_NPU__DOT__x_axis__DOT__an_nextState = 1U;
        } else if (vlSelf->Mini_NPU__DOT__x_axis__DOT__AgtB) {
            vlSelf->Mini_NPU__DOT__x_axis__DOT__an_nextState = 3U;
        } else if ((1U & (((~ (IData)(vlSelf->Mini_NPU__DOT__x_axis__DOT__AltB)) 
                           & (~ (IData)(vlSelf->Mini_NPU__DOT__x_axis__DOT__AeqB))) 
                          & (~ (IData)(vlSelf->Mini_NPU__DOT__x_axis__DOT__AgtB))))) {
            vlSelf->Mini_NPU__DOT__x_axis__DOT__an_nextState = 4U;
        }
    } else if ((4U == (IData)(vlSelf->Mini_NPU__DOT__x_axis__DOT__an_state))) {
        vlSelf->Mini_NPU__DOT__x_axis__DOT__an_nextState = 4U;
    } else if ((3U == (IData)(vlSelf->Mini_NPU__DOT__x_axis__DOT__an_state))) {
        vlSelf->Mini_NPU__DOT__x_axis__DOT__an_nextState = 1U;
    }
    vlSelf->Mini_NPU__DOT__y_axis__DOT__an_nextState = 0U;
    if ((0U == (IData)(vlSelf->Mini_NPU__DOT__y_axis__DOT__an_state))) {
        if ((1U & (~ (IData)(vlSelf->Mini_NPU__DOT__data_avail)))) {
            vlSelf->Mini_NPU__DOT__y_axis__DOT__d2n_clr = 1U;
            vlSelf->Mini_NPU__DOT__y_axis__DOT__d2_clr = 1U;
            vlSelf->Mini_NPU__DOT__y_axis__DOT__d1_clr = 1U;
        }
        if (vlSelf->Mini_NPU__DOT__data_avail) {
            if (vlSelf->Mini_NPU__DOT__data_avail) {
                vlSelf->Mini_NPU__DOT__y_axis__DOT__d1_en = 1U;
                vlSelf->Mini_NPU__DOT__y_axis__DOT__d2n_en = 1U;
                vlSelf->Mini_NPU__DOT__y_axis__DOT__an_nextState = 1U;
            }
        } else {
            vlSelf->Mini_NPU__DOT__y_axis__DOT__an_nextState = 0U;
        }
    } else if ((1U == (IData)(vlSelf->Mini_NPU__DOT__y_axis__DOT__an_state))) {
        if (((IData)(vlSelf->stop) | (IData)(vlSelf->Mini_NPU__DOT__abort))) {
            vlSelf->Mini_NPU__DOT__y_axis__DOT__d2n_clr = 1U;
            vlSelf->Mini_NPU__DOT__y_axis__DOT__d2_clr = 1U;
            vlSelf->Mini_NPU__DOT__y_axis__DOT__d1_clr = 1U;
            vlSelf->Mini_NPU__DOT__y_axis__DOT__an_nextState = 0U;
        } else if (vlSelf->Mini_NPU__DOT__data_avail) {
            if (vlSelf->Mini_NPU__DOT__data_avail) {
                vlSelf->Mini_NPU__DOT__y_axis__DOT__an_nextState = 2U;
            }
        } else {
            vlSelf->Mini_NPU__DOT__y_axis__DOT__an_nextState = 1U;
        }
        if ((1U & (~ ((IData)(vlSelf->stop) | (IData)(vlSelf->Mini_NPU__DOT__abort))))) {
            if (vlSelf->Mini_NPU__DOT__data_avail) {
                if (vlSelf->Mini_NPU__DOT__data_avail) {
                    vlSelf->Mini_NPU__DOT__y_axis__DOT__d1_en = 1U;
                    vlSelf->Mini_NPU__DOT__y_axis__DOT__d2n_en = 1U;
                }
            }
        }
    } else if ((2U == (IData)(vlSelf->Mini_NPU__DOT__y_axis__DOT__an_state))) {
        if (vlSelf->Mini_NPU__DOT__y_axis__DOT__AltB) {
            vlSelf->Mini_NPU__DOT__y_axis__DOT__an_nextState = 3U;
        } else if (vlSelf->Mini_NPU__DOT__y_axis__DOT__AeqB) {
            vlSelf->Mini_NPU__DOT__y_axis__DOT__an_nextState = 1U;
        } else if (vlSelf->Mini_NPU__DOT__y_axis__DOT__AgtB) {
            vlSelf->Mini_NPU__DOT__y_axis__DOT__an_nextState = 3U;
        } else if ((1U & (((~ (IData)(vlSelf->Mini_NPU__DOT__y_axis__DOT__AltB)) 
                           & (~ (IData)(vlSelf->Mini_NPU__DOT__y_axis__DOT__AeqB))) 
                          & (~ (IData)(vlSelf->Mini_NPU__DOT__y_axis__DOT__AgtB))))) {
            vlSelf->Mini_NPU__DOT__y_axis__DOT__an_nextState = 4U;
        }
    } else if ((4U == (IData)(vlSelf->Mini_NPU__DOT__y_axis__DOT__an_state))) {
        vlSelf->Mini_NPU__DOT__y_axis__DOT__an_nextState = 4U;
    } else if ((3U == (IData)(vlSelf->Mini_NPU__DOT__y_axis__DOT__an_state))) {
        vlSelf->Mini_NPU__DOT__y_axis__DOT__an_nextState = 1U;
    }
    vlSelf->Mini_NPU__DOT__z_axis__DOT__an_nextState = 0U;
    if ((0U == (IData)(vlSelf->Mini_NPU__DOT__z_axis__DOT__an_state))) {
        if ((1U & (~ (IData)(vlSelf->Mini_NPU__DOT__data_avail)))) {
            vlSelf->Mini_NPU__DOT__z_axis__DOT__d2n_clr = 1U;
            vlSelf->Mini_NPU__DOT__z_axis__DOT__d2_clr = 1U;
            vlSelf->Mini_NPU__DOT__z_axis__DOT__d1_clr = 1U;
        }
        if (vlSelf->Mini_NPU__DOT__data_avail) {
            if (vlSelf->Mini_NPU__DOT__data_avail) {
                vlSelf->Mini_NPU__DOT__z_axis__DOT__d1_en = 1U;
                vlSelf->Mini_NPU__DOT__z_axis__DOT__d2n_en = 1U;
                vlSelf->Mini_NPU__DOT__z_axis__DOT__an_nextState = 1U;
            }
        } else {
            vlSelf->Mini_NPU__DOT__z_axis__DOT__an_nextState = 0U;
        }
    } else if ((1U == (IData)(vlSelf->Mini_NPU__DOT__z_axis__DOT__an_state))) {
        if (((IData)(vlSelf->stop) | (IData)(vlSelf->Mini_NPU__DOT__abort))) {
            vlSelf->Mini_NPU__DOT__z_axis__DOT__d2n_clr = 1U;
            vlSelf->Mini_NPU__DOT__z_axis__DOT__d2_clr = 1U;
            vlSelf->Mini_NPU__DOT__z_axis__DOT__d1_clr = 1U;
            vlSelf->Mini_NPU__DOT__z_axis__DOT__an_nextState = 0U;
        } else if (vlSelf->Mini_NPU__DOT__data_avail) {
            if (vlSelf->Mini_NPU__DOT__data_avail) {
                vlSelf->Mini_NPU__DOT__z_axis__DOT__an_nextState = 2U;
            }
        } else {
            vlSelf->Mini_NPU__DOT__z_axis__DOT__an_nextState = 1U;
        }
        if ((1U & (~ ((IData)(vlSelf->stop) | (IData)(vlSelf->Mini_NPU__DOT__abort))))) {
            if (vlSelf->Mini_NPU__DOT__data_avail) {
                if (vlSelf->Mini_NPU__DOT__data_avail) {
                    vlSelf->Mini_NPU__DOT__z_axis__DOT__d1_en = 1U;
                    vlSelf->Mini_NPU__DOT__z_axis__DOT__d2n_en = 1U;
                }
            }
        }
    } else if ((2U == (IData)(vlSelf->Mini_NPU__DOT__z_axis__DOT__an_state))) {
        if (vlSelf->Mini_NPU__DOT__z_axis__DOT__AltB) {
            vlSelf->Mini_NPU__DOT__z_axis__DOT__an_nextState = 3U;
        } else if (vlSelf->Mini_NPU__DOT__z_axis__DOT__AeqB) {
            vlSelf->Mini_NPU__DOT__z_axis__DOT__an_nextState = 1U;
        } else if (vlSelf->Mini_NPU__DOT__z_axis__DOT__AgtB) {
            vlSelf->Mini_NPU__DOT__z_axis__DOT__an_nextState = 3U;
        } else if ((1U & (((~ (IData)(vlSelf->Mini_NPU__DOT__z_axis__DOT__AltB)) 
                           & (~ (IData)(vlSelf->Mini_NPU__DOT__z_axis__DOT__AeqB))) 
                          & (~ (IData)(vlSelf->Mini_NPU__DOT__z_axis__DOT__AgtB))))) {
            vlSelf->Mini_NPU__DOT__z_axis__DOT__an_nextState = 4U;
        }
    } else if ((4U == (IData)(vlSelf->Mini_NPU__DOT__z_axis__DOT__an_state))) {
        vlSelf->Mini_NPU__DOT__z_axis__DOT__an_nextState = 4U;
    } else if ((3U == (IData)(vlSelf->Mini_NPU__DOT__z_axis__DOT__an_state))) {
        vlSelf->Mini_NPU__DOT__z_axis__DOT__an_nextState = 1U;
    }
    __Vtableidx1 = (((IData)(vlSelf->start) << 7U) 
                    | (((IData)(vlSelf->Mini_NPU__DOT__write_done) 
                        << 6U) | (((IData)(vlSelf->Mini_NPU__DOT__data_ready) 
                                   << 5U) | (((IData)(vlSelf->Mini_NPU__DOT__read_done) 
                                              << 4U) 
                                             | (((IData)(vlSelf->Mini_NPU__DOT__abort) 
                                                 << 3U) 
                                                | (((IData)(vlSelf->stop) 
                                                    << 2U) 
                                                   | (IData)(vlSelf->Mini_NPU__DOT__ph__DOT__ph_state)))))));
    vlSelf->Mini_NPU__DOT__ph__DOT__write_en = Vtop__ConstPool__TABLE_h8e0147ef_0
        [__Vtableidx1];
    vlSelf->Mini_NPU__DOT__ph__DOT__poll_en = Vtop__ConstPool__TABLE_hcbeb02c1_0
        [__Vtableidx1];
    vlSelf->Mini_NPU__DOT__ph__DOT__data_read_en = 
        Vtop__ConstPool__TABLE_h82edd3c6_0[__Vtableidx1];
    vlSelf->Mini_NPU__DOT__ph__DOT__ph_nextState = 
        Vtop__ConstPool__TABLE_h8aaa24a6_0[__Vtableidx1];
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/afs/andrew.cmu.edu/usr19/ccherry2/private/18224/Mini-NPU/testbench/mini_npu.sv", 4, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/afs/andrew.cmu.edu/usr19/ccherry2/private/18224/Mini-NPU/testbench/mini_npu.sv", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/afs/andrew.cmu.edu/usr19/ccherry2/private/18224/Mini-NPU/testbench/mini_npu.sv", 4, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->start & 0xfeU))) {
        Verilated::overWidthError("start");}
    if (VL_UNLIKELY((vlSelf->stop & 0xfeU))) {
        Verilated::overWidthError("stop");}
    if (VL_UNLIKELY((vlSelf->SDA_in & 0xfeU))) {
        Verilated::overWidthError("SDA_in");}
    if (VL_UNLIKELY((vlSelf->SDA & 0xfeU))) {
        Verilated::overWidthError("SDA");}
}
#endif  // VL_DEBUG
