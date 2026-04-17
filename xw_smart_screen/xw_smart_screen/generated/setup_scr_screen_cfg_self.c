/*
* Copyright 2025 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "widgets_init.h"
#include "custom.h"



int screen_cfg_self_digital_clock_1_min_value = 25;
int screen_cfg_self_digital_clock_1_hour_value = 11;
int screen_cfg_self_digital_clock_1_sec_value = 50;
void setup_scr_screen_cfg_self(lv_ui *ui)
{
    //Write codes screen_cfg_self
    ui->screen_cfg_self = lv_obj_create(NULL);
    lv_obj_set_size(ui->screen_cfg_self, 1280, 800);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_self, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_self, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_cont_1
    ui->screen_cfg_self_cont_1 = lv_obj_create(ui->screen_cfg_self);
    lv_obj_set_pos(ui->screen_cfg_self_cont_1, 0, 0);
    lv_obj_set_size(ui->screen_cfg_self_cont_1, 1280, 2000);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_self_cont_1, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_self_cont_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_self_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_cont_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_cont_1, lv_color_hex(0x1B2C42), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_cont_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_self_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_cont_80
    ui->screen_cfg_self_cont_80 = lv_obj_create(ui->screen_cfg_self_cont_1);
    lv_obj_set_pos(ui->screen_cfg_self_cont_80, 18, 176);
    lv_obj_set_size(ui->screen_cfg_self_cont_80, 1231, 1000);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_self_cont_80, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_self_cont_80, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_self_cont_80, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_cont_80, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_cont_80, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_cont_80, lv_color_hex(0x2A405C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_cont_80, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_cont_80, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_self_cont_80, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_cont_80, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_cont_80, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_cont_80, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_label_32
    ui->screen_cfg_self_label_32 = lv_label_create(ui->screen_cfg_self_cont_80);
    lv_obj_set_pos(ui->screen_cfg_self_label_32, 36, 33);
    lv_obj_set_size(ui->screen_cfg_self_label_32, 164, 42);
    lv_label_set_text(ui->screen_cfg_self_label_32, "传感器设置");
    lv_label_set_long_mode(ui->screen_cfg_self_label_32, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_self_label_32, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_self_label_32, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_label_32, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_self_label_32, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_label_32, &lv_font_AlibabaPuHuiTiRegular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_label_32, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_label_32, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_self_label_32, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_label_32, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_label_32, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_label_32, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_label_32, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_self_label_32, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_label_32, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_label_32, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_label_33
    ui->screen_cfg_self_label_33 = lv_label_create(ui->screen_cfg_self_cont_80);
    lv_obj_set_pos(ui->screen_cfg_self_label_33, 9, 86);
    lv_obj_set_size(ui->screen_cfg_self_label_33, 108, 35);
    lv_label_set_text(ui->screen_cfg_self_label_33, "传感器类型");
    lv_label_set_long_mode(ui->screen_cfg_self_label_33, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_self_label_33, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_self_label_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_label_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_self_label_33, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_label_33, &lv_font_AlibabaPuHuiTiRegular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_label_33, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_label_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_self_label_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_label_33, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_label_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_label_33, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_label_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_self_label_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_label_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_label_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_label_35
    ui->screen_cfg_self_label_35 = lv_label_create(ui->screen_cfg_self_cont_80);
    lv_obj_set_pos(ui->screen_cfg_self_label_35, 186, 87);
    lv_obj_set_size(ui->screen_cfg_self_label_35, 58, 35);
    lv_label_set_text(ui->screen_cfg_self_label_35, "品牌");
    lv_label_set_long_mode(ui->screen_cfg_self_label_35, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_self_label_35, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_self_label_35, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_label_35, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_self_label_35, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_label_35, &lv_font_AlibabaPuHuiTiRegular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_label_35, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_label_35, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_self_label_35, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_label_35, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_label_35, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_label_35, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_label_35, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_self_label_35, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_label_35, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_label_35, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_label_36
    ui->screen_cfg_self_label_36 = lv_label_create(ui->screen_cfg_self_cont_80);
    lv_obj_set_pos(ui->screen_cfg_self_label_36, 306, 87);
    lv_obj_set_size(ui->screen_cfg_self_label_36, 58, 35);
    lv_label_set_text(ui->screen_cfg_self_label_36, "地址");
    lv_label_set_long_mode(ui->screen_cfg_self_label_36, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_self_label_36, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_self_label_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_label_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_self_label_36, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_label_36, &lv_font_AlibabaPuHuiTiRegular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_label_36, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_label_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_self_label_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_label_36, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_label_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_label_36, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_label_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_self_label_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_label_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_label_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_label_37
    ui->screen_cfg_self_label_37 = lv_label_create(ui->screen_cfg_self_cont_80);
    lv_obj_set_pos(ui->screen_cfg_self_label_37, 426, 87);
    lv_obj_set_size(ui->screen_cfg_self_label_37, 109, 35);
    lv_label_set_text(ui->screen_cfg_self_label_37, "起始寄存器");
    lv_label_set_long_mode(ui->screen_cfg_self_label_37, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_self_label_37, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_self_label_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_label_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_self_label_37, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_label_37, &lv_font_AlibabaPuHuiTiRegular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_label_37, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_label_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_self_label_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_label_37, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_label_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_label_37, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_label_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_self_label_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_label_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_label_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_label_38
    ui->screen_cfg_self_label_38 = lv_label_create(ui->screen_cfg_self_cont_80);
    lv_obj_set_pos(ui->screen_cfg_self_label_38, 597, 87);
    lv_obj_set_size(ui->screen_cfg_self_label_38, 109, 35);
    lv_label_set_text(ui->screen_cfg_self_label_38, "寄存器长度");
    lv_label_set_long_mode(ui->screen_cfg_self_label_38, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_self_label_38, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_self_label_38, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_label_38, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_self_label_38, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_label_38, &lv_font_AlibabaPuHuiTiRegular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_label_38, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_label_38, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_self_label_38, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_label_38, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_label_38, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_label_38, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_label_38, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_self_label_38, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_label_38, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_label_38, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_label_39
    ui->screen_cfg_self_label_39 = lv_label_create(ui->screen_cfg_self_cont_80);
    lv_obj_set_pos(ui->screen_cfg_self_label_39, 768, 87);
    lv_obj_set_size(ui->screen_cfg_self_label_39, 109, 35);
    lv_label_set_text(ui->screen_cfg_self_label_39, "数据比例");
    lv_label_set_long_mode(ui->screen_cfg_self_label_39, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_self_label_39, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_self_label_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_label_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_self_label_39, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_label_39, &lv_font_AlibabaPuHuiTiRegular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_label_39, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_label_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_self_label_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_label_39, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_label_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_label_39, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_label_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_self_label_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_label_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_label_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_label_40
    ui->screen_cfg_self_label_40 = lv_label_create(ui->screen_cfg_self_cont_80);
    lv_obj_set_pos(ui->screen_cfg_self_label_40, 1092, 87);
    lv_obj_set_size(ui->screen_cfg_self_label_40, 91, 35);
    lv_label_set_text(ui->screen_cfg_self_label_40, "使能开关");
    lv_label_set_long_mode(ui->screen_cfg_self_label_40, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_self_label_40, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_self_label_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_label_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_self_label_40, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_label_40, &lv_font_AlibabaPuHuiTiRegular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_label_40, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_label_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_self_label_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_label_40, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_label_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_label_40, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_label_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_self_label_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_label_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_label_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_label_41
    ui->screen_cfg_self_label_41 = lv_label_create(ui->screen_cfg_self_cont_80);
    lv_obj_set_pos(ui->screen_cfg_self_label_41, 939, 87);
    lv_obj_set_size(ui->screen_cfg_self_label_41, 91, 35);
    lv_label_set_text(ui->screen_cfg_self_label_41, "通道");
    lv_label_set_long_mode(ui->screen_cfg_self_label_41, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_self_label_41, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_self_label_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_label_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_self_label_41, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_label_41, &lv_font_AlibabaPuHuiTiRegular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_label_41, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_label_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_self_label_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_label_41, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_label_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_label_41, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_label_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_self_label_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_label_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_label_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_cont_81
    ui->screen_cfg_self_cont_81 = lv_obj_create(ui->screen_cfg_self_cont_80);
    lv_obj_set_pos(ui->screen_cfg_self_cont_81, 1, 131);
    lv_obj_set_size(ui->screen_cfg_self_cont_81, 1228, 43);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_self_cont_81, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_self_cont_81, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_self_cont_81, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_cont_81, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_cont_81, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_cont_81, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_cont_81, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_cont_81, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_cont_81, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_self_cont_81, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_cont_81, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_cont_81, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_cont_81, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_10
    ui->screen_cfg_self_ddlist_10 = lv_dropdown_create(ui->screen_cfg_self_cont_81);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_10, 11, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_10, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_10, "温度\n湿度\nVOC\n可燃\n氧气\n烟雾\n氢气\n电流\n功率");

    //Write style for screen_cfg_self_ddlist_10, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_10, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_10, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_10, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_10, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_10, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_10, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_10, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_10, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_10, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_10, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_10, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_10, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_10, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_10, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_10_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_10_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_10_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_10_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_10_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_10_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_10_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_10_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_10_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_10_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_10_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_10), &style_screen_cfg_self_ddlist_10_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_10_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_10_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_10_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_10_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_10_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_10_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_10_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_10_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_10_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_10_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_10_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_10_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_10_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_10_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_10_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_10), &style_screen_cfg_self_ddlist_10_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_10_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_10_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_10_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_10_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_10_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_10_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_10_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_10), &style_screen_cfg_self_ddlist_10_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_11
    ui->screen_cfg_self_ddlist_11 = lv_dropdown_create(ui->screen_cfg_self_cont_81);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_11, 148, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_11, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_11, "中安\n天空物联\n其它MODBUS\nAI");

    //Write style for screen_cfg_self_ddlist_11, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_11, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_11, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_11, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_11, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_11, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_11, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_11, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_11, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_11, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_11, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_11, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_11, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_11, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_11, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_11_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_11_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_11_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_11_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_11_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_11_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_11_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_11_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_11_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_11_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_11_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_11), &style_screen_cfg_self_ddlist_11_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_11_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_11_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_11_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_11_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_11_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_11_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_11_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_11_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_11_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_11_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_11_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_11_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_11_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_11_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_11_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_11), &style_screen_cfg_self_ddlist_11_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_11_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_11_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_11_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_11_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_11_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_11_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_11_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_11), &style_screen_cfg_self_ddlist_11_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_12
    ui->screen_cfg_self_ddlist_12 = lv_dropdown_create(ui->screen_cfg_self_cont_81);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_12, 283, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_12, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_12, "0X01\n0X02\n0X03\n0X04\n0X05\n0X06\n0X07\n0X08\n0X09\n0X0A\n0X0B\n0X0C\n0X0D\n0X0E\n0X0F\n0X10\n0X11\n0X12\n0X13\n0X14\n0X15\n0X16\n0X17\n0X18\n0X19\n0X1A\n0X1B\n0X1C\n0X1D\n0X1E\n0X1F\n0X20");

    //Write style for screen_cfg_self_ddlist_12, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_12, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_12, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_12, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_12, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_12, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_12, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_12, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_12, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_12, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_12, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_12, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_12, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_12, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_12, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_12_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_12_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_12_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_12_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_12_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_12_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_12_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_12_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_12_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_12_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_12_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_12), &style_screen_cfg_self_ddlist_12_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_12_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_12_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_12_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_12_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_12_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_12_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_12_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_12_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_12_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_12_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_12_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_12_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_12_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_12_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_12_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_12), &style_screen_cfg_self_ddlist_12_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_12_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_12_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_12_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_12_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_12_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_12_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_12_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_12), &style_screen_cfg_self_ddlist_12_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_10
    ui->screen_cfg_self_ta_10 = lv_textarea_create(ui->screen_cfg_self_cont_81);
    lv_obj_set_pos(ui->screen_cfg_self_ta_10, 424, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_10, 108, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_10, "0X0000");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_10, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_10, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_10, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_10, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_10, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_10, 6);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_10, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_10, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_10, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_10, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_10, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_10, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_10, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_10, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_10, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_10, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_10, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_10, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_10, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_10, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_10, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_10, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_10, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_10, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_10, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_10, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_10, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_10, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_10, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_11
    ui->screen_cfg_self_ta_11 = lv_textarea_create(ui->screen_cfg_self_cont_81);
    lv_obj_set_pos(ui->screen_cfg_self_ta_11, 595, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_11, 108, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_11, "0X02");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_11, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_11, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_11, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_11, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_11, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_11, 4);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_11, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_11, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_11, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_11, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_11, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_11, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_11, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_11, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_11, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_11, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_11, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_11, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_11, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_11, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_11, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_11, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_11, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_11, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_11, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_11, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_11, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_11, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_11, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_12
    ui->screen_cfg_self_ta_12 = lv_textarea_create(ui->screen_cfg_self_cont_81);
    lv_obj_set_pos(ui->screen_cfg_self_ta_12, 773, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_12, 36, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_12, "K");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_12, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_12, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_12, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_12, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_12, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_12, 4);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_12, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_12, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_12, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_12, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_12, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_12, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_12, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_12, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_12, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_12, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_12, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_12, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_12, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_12, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_12, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_12, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_12, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_12, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_12, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_12, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_12, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_12, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_12, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_13
    ui->screen_cfg_self_ta_13 = lv_textarea_create(ui->screen_cfg_self_cont_81);
    lv_obj_set_pos(ui->screen_cfg_self_ta_13, 835, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_13, 36, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_13, "B");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_13, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_13, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_13, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_13, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_13, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_13, 4);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_13, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_13, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_13, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_13, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_13, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_13, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_13, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_13, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_13, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_13, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_13, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_13, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_13, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_13, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_13, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_13, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_13, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_13, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_13, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_13, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_13, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_13, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_13, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_13
    ui->screen_cfg_self_ddlist_13 = lv_dropdown_create(ui->screen_cfg_self_cont_81);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_13, 932, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_13, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_13, "0X01\n0X02\n0X03\n0X04");

    //Write style for screen_cfg_self_ddlist_13, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_13, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_13, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_13, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_13, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_13, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_13, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_13, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_13, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_13, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_13, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_13, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_13, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_13, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_13, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_13_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_13_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_13_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_13_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_13_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_13_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_13_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_13_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_13_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_13_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_13_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_13), &style_screen_cfg_self_ddlist_13_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_13_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_13_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_13_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_13_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_13_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_13_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_13_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_13_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_13_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_13_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_13_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_13_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_13_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_13_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_13_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_13), &style_screen_cfg_self_ddlist_13_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_13_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_13_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_13_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_13_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_13_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_13_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_13_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_13), &style_screen_cfg_self_ddlist_13_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_sw_3
    ui->screen_cfg_self_sw_3 = lv_switch_create(ui->screen_cfg_self_cont_81);
    lv_obj_set_pos(ui->screen_cfg_self_sw_3, 1101, 3);
    lv_obj_set_size(ui->screen_cfg_self_sw_3, 77, 30);

    //Write style for screen_cfg_self_sw_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_3, lv_color_hex(0xe6e2e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_3, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_sw_3, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_sw_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_sw_3, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_3, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_3, lv_color_hex(0x44D7B6), LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_3, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_3, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

    //Write style for screen_cfg_self_sw_3, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_3, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_3, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_3, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_3, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_sw_3, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_sw_3, Part: LV_PART_KNOB, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_3, 255, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_3, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_3, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_3, 0, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_cfg_self_sw_3, 10, LV_PART_KNOB|LV_STATE_FOCUSED);

    //Write codes screen_cfg_self_cont_82
    ui->screen_cfg_self_cont_82 = lv_obj_create(ui->screen_cfg_self_cont_80);
    lv_obj_set_pos(ui->screen_cfg_self_cont_82, 1, 182);
    lv_obj_set_size(ui->screen_cfg_self_cont_82, 1228, 43);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_self_cont_82, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_self_cont_82, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_self_cont_82, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_cont_82, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_cont_82, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_cont_82, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_cont_82, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_cont_82, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_cont_82, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_self_cont_82, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_cont_82, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_cont_82, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_cont_82, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_17
    ui->screen_cfg_self_ddlist_17 = lv_dropdown_create(ui->screen_cfg_self_cont_82);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_17, 11, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_17, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_17, "温度\n湿度\nVOC\n可燃\n氧气\n烟雾\n氢气\n电流\n功率");

    //Write style for screen_cfg_self_ddlist_17, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_17, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_17, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_17, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_17, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_17, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_17, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_17, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_17, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_17, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_17, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_17, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_17, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_17, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_17, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_17_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_17_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_17_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_17_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_17_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_17_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_17_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_17_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_17_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_17_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_17_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_17), &style_screen_cfg_self_ddlist_17_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_17_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_17_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_17_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_17_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_17_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_17_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_17_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_17_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_17_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_17_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_17_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_17_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_17_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_17_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_17_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_17), &style_screen_cfg_self_ddlist_17_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_17_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_17_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_17_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_17_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_17_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_17_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_17_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_17), &style_screen_cfg_self_ddlist_17_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_16
    ui->screen_cfg_self_ddlist_16 = lv_dropdown_create(ui->screen_cfg_self_cont_82);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_16, 148, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_16, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_16, "中安\n天空物联\n其它MODBUS\nAI");

    //Write style for screen_cfg_self_ddlist_16, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_16, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_16, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_16, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_16, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_16, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_16, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_16, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_16, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_16, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_16, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_16, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_16, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_16, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_16, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_16_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_16_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_16_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_16_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_16_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_16_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_16_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_16_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_16_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_16_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_16_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_16), &style_screen_cfg_self_ddlist_16_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_16_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_16_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_16_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_16_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_16_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_16_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_16_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_16_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_16_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_16_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_16_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_16_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_16_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_16_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_16_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_16), &style_screen_cfg_self_ddlist_16_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_16_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_16_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_16_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_16_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_16_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_16_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_16_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_16), &style_screen_cfg_self_ddlist_16_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_15
    ui->screen_cfg_self_ddlist_15 = lv_dropdown_create(ui->screen_cfg_self_cont_82);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_15, 283, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_15, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_15, "0X01\n0X02\n0X03\n0X04\n0X05\n0X06\n0X07\n0X08\n0X09\n0X0A\n0X0B\n0X0C\n0X0D\n0X0E\n0X0F\n0X10\n0X11\n0X12\n0X13\n0X14\n0X15\n0X16\n0X17\n0X18\n0X19\n0X1A\n0X1B\n0X1C\n0X1D\n0X1E\n0X1F\n0X20");

    //Write style for screen_cfg_self_ddlist_15, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_15, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_15, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_15, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_15, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_15, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_15, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_15, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_15, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_15, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_15, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_15, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_15, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_15, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_15, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_15_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_15_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_15_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_15_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_15_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_15_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_15_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_15_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_15_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_15_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_15_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_15), &style_screen_cfg_self_ddlist_15_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_15_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_15_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_15_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_15_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_15_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_15_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_15_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_15_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_15_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_15_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_15_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_15_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_15_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_15_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_15_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_15), &style_screen_cfg_self_ddlist_15_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_15_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_15_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_15_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_15_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_15_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_15_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_15_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_15), &style_screen_cfg_self_ddlist_15_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_17
    ui->screen_cfg_self_ta_17 = lv_textarea_create(ui->screen_cfg_self_cont_82);
    lv_obj_set_pos(ui->screen_cfg_self_ta_17, 424, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_17, 108, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_17, "0X0000");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_17, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_17, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_17, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_17, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_17, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_17, 6);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_17, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_17, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_17, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_17, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_17, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_17, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_17, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_17, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_17, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_17, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_17, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_17, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_17, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_17, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_17, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_17, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_17, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_17, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_17, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_17, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_17, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_17, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_17, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_16
    ui->screen_cfg_self_ta_16 = lv_textarea_create(ui->screen_cfg_self_cont_82);
    lv_obj_set_pos(ui->screen_cfg_self_ta_16, 595, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_16, 108, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_16, "0X02");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_16, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_16, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_16, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_16, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_16, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_16, 4);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_16, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_16, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_16, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_16, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_16, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_16, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_16, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_16, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_16, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_16, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_16, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_16, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_16, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_16, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_16, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_16, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_16, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_16, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_16, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_16, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_16, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_16, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_16, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_15
    ui->screen_cfg_self_ta_15 = lv_textarea_create(ui->screen_cfg_self_cont_82);
    lv_obj_set_pos(ui->screen_cfg_self_ta_15, 773, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_15, 36, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_15, "K");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_15, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_15, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_15, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_15, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_15, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_15, 4);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_15, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_15, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_15, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_15, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_15, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_15, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_15, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_15, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_15, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_15, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_15, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_15, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_15, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_15, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_15, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_15, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_15, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_15, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_15, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_15, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_15, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_15, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_15, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_14
    ui->screen_cfg_self_ta_14 = lv_textarea_create(ui->screen_cfg_self_cont_82);
    lv_obj_set_pos(ui->screen_cfg_self_ta_14, 835, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_14, 36, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_14, "B");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_14, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_14, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_14, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_14, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_14, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_14, 4);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_14, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_14, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_14, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_14, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_14, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_14, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_14, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_14, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_14, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_14, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_14, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_14, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_14, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_14, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_14, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_14, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_14, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_14, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_14, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_14, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_14, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_14, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_14, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_14
    ui->screen_cfg_self_ddlist_14 = lv_dropdown_create(ui->screen_cfg_self_cont_82);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_14, 932, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_14, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_14, "0X01\n0X02\n0X03\n0X04");

    //Write style for screen_cfg_self_ddlist_14, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_14, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_14, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_14, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_14, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_14, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_14, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_14, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_14, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_14, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_14, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_14, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_14, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_14, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_14, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_14_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_14_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_14_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_14_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_14_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_14_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_14_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_14_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_14_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_14_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_14_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_14), &style_screen_cfg_self_ddlist_14_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_14_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_14_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_14_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_14_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_14_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_14_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_14_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_14_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_14_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_14_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_14_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_14_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_14_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_14_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_14_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_14), &style_screen_cfg_self_ddlist_14_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_14_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_14_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_14_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_14_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_14_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_14_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_14_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_14), &style_screen_cfg_self_ddlist_14_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_sw_4
    ui->screen_cfg_self_sw_4 = lv_switch_create(ui->screen_cfg_self_cont_82);
    lv_obj_set_pos(ui->screen_cfg_self_sw_4, 1101, 3);
    lv_obj_set_size(ui->screen_cfg_self_sw_4, 77, 30);

    //Write style for screen_cfg_self_sw_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_4, lv_color_hex(0xe6e2e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_4, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_sw_4, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_sw_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_sw_4, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_4, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_4, lv_color_hex(0x44D7B6), LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_4, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_4, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

    //Write style for screen_cfg_self_sw_4, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_4, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_4, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_4, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_4, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_sw_4, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_sw_4, Part: LV_PART_KNOB, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_4, 255, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_4, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_4, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_4, 0, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_cfg_self_sw_4, 10, LV_PART_KNOB|LV_STATE_FOCUSED);

    //Write codes screen_cfg_self_cont_83
    ui->screen_cfg_self_cont_83 = lv_obj_create(ui->screen_cfg_self_cont_80);
    lv_obj_set_pos(ui->screen_cfg_self_cont_83, 1, 233);
    lv_obj_set_size(ui->screen_cfg_self_cont_83, 1228, 43);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_self_cont_83, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_self_cont_83, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_self_cont_83, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_cont_83, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_cont_83, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_cont_83, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_cont_83, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_cont_83, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_cont_83, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_self_cont_83, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_cont_83, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_cont_83, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_cont_83, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_21
    ui->screen_cfg_self_ddlist_21 = lv_dropdown_create(ui->screen_cfg_self_cont_83);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_21, 11, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_21, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_21, "温度\n湿度\nVOC\n可燃\n氧气\n烟雾\n氢气\n电流\n功率");

    //Write style for screen_cfg_self_ddlist_21, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_21, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_21, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_21, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_21, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_21, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_21, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_21, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_21, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_21, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_21, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_21, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_21, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_21, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_21, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_21_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_21_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_21_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_21_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_21_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_21_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_21_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_21_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_21_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_21_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_21_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_21), &style_screen_cfg_self_ddlist_21_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_21_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_21_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_21_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_21_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_21_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_21_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_21_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_21_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_21_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_21_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_21_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_21_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_21_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_21_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_21_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_21), &style_screen_cfg_self_ddlist_21_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_21_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_21_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_21_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_21_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_21_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_21_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_21_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_21), &style_screen_cfg_self_ddlist_21_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_20
    ui->screen_cfg_self_ddlist_20 = lv_dropdown_create(ui->screen_cfg_self_cont_83);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_20, 148, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_20, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_20, "中安\n天空物联\n其它MODBUS\nAI");

    //Write style for screen_cfg_self_ddlist_20, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_20, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_20, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_20, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_20, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_20, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_20, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_20, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_20, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_20, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_20, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_20, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_20, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_20, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_20, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_20_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_20_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_20_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_20_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_20_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_20_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_20_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_20_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_20_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_20_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_20_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_20), &style_screen_cfg_self_ddlist_20_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_20_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_20_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_20_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_20_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_20_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_20_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_20_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_20_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_20_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_20_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_20_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_20_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_20_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_20_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_20_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_20), &style_screen_cfg_self_ddlist_20_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_20_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_20_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_20_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_20_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_20_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_20_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_20_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_20), &style_screen_cfg_self_ddlist_20_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_19
    ui->screen_cfg_self_ddlist_19 = lv_dropdown_create(ui->screen_cfg_self_cont_83);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_19, 283, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_19, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_19, "0X01\n0X02\n0X03\n0X04\n0X05\n0X06\n0X07\n0X08\n0X09\n0X0A\n0X0B\n0X0C\n0X0D\n0X0E\n0X0F\n0X10\n0X11\n0X12\n0X13\n0X14\n0X15\n0X16\n0X17\n0X18\n0X19\n0X1A\n0X1B\n0X1C\n0X1D\n0X1E\n0X1F\n0X20");

    //Write style for screen_cfg_self_ddlist_19, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_19, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_19, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_19, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_19, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_19, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_19, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_19, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_19, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_19, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_19, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_19, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_19, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_19, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_19, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_19_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_19_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_19_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_19_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_19_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_19_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_19_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_19_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_19_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_19_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_19_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_19), &style_screen_cfg_self_ddlist_19_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_19_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_19_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_19_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_19_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_19_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_19_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_19_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_19_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_19_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_19_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_19_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_19_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_19_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_19_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_19_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_19), &style_screen_cfg_self_ddlist_19_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_19_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_19_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_19_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_19_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_19_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_19_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_19_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_19), &style_screen_cfg_self_ddlist_19_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_21
    ui->screen_cfg_self_ta_21 = lv_textarea_create(ui->screen_cfg_self_cont_83);
    lv_obj_set_pos(ui->screen_cfg_self_ta_21, 424, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_21, 108, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_21, "0X0000");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_21, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_21, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_21, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_21, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_21, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_21, 6);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_21, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_21, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_21, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_21, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_21, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_21, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_21, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_21, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_21, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_21, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_21, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_21, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_21, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_21, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_21, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_21, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_21, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_21, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_21, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_21, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_21, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_21, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_21, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_20
    ui->screen_cfg_self_ta_20 = lv_textarea_create(ui->screen_cfg_self_cont_83);
    lv_obj_set_pos(ui->screen_cfg_self_ta_20, 595, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_20, 108, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_20, "0X02");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_20, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_20, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_20, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_20, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_20, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_20, 4);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_20, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_20, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_20, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_20, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_20, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_20, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_20, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_20, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_20, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_20, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_20, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_20, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_20, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_20, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_20, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_20, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_20, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_20, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_20, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_20, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_20, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_20, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_20, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_19
    ui->screen_cfg_self_ta_19 = lv_textarea_create(ui->screen_cfg_self_cont_83);
    lv_obj_set_pos(ui->screen_cfg_self_ta_19, 773, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_19, 36, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_19, "K");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_19, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_19, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_19, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_19, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_19, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_19, 4);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_19, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_19, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_19, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_19, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_19, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_19, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_19, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_19, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_19, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_19, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_19, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_19, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_19, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_19, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_19, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_19, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_19, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_19, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_19, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_19, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_19, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_19, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_19, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_18
    ui->screen_cfg_self_ta_18 = lv_textarea_create(ui->screen_cfg_self_cont_83);
    lv_obj_set_pos(ui->screen_cfg_self_ta_18, 835, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_18, 36, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_18, "B");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_18, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_18, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_18, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_18, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_18, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_18, 4);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_18, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_18, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_18, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_18, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_18, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_18, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_18, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_18, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_18, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_18, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_18, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_18, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_18, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_18, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_18, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_18, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_18, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_18, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_18, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_18, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_18, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_18, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_18, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_18
    ui->screen_cfg_self_ddlist_18 = lv_dropdown_create(ui->screen_cfg_self_cont_83);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_18, 932, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_18, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_18, "0X01\n0X02\n0X03\n0X04");

    //Write style for screen_cfg_self_ddlist_18, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_18, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_18, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_18, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_18, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_18, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_18, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_18, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_18, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_18, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_18, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_18, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_18, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_18, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_18, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_18_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_18_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_18_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_18_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_18_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_18_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_18_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_18_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_18_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_18_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_18_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_18), &style_screen_cfg_self_ddlist_18_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_18_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_18_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_18_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_18_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_18_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_18_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_18_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_18_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_18_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_18_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_18_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_18_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_18_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_18_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_18_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_18), &style_screen_cfg_self_ddlist_18_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_18_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_18_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_18_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_18_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_18_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_18_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_18_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_18), &style_screen_cfg_self_ddlist_18_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_sw_5
    ui->screen_cfg_self_sw_5 = lv_switch_create(ui->screen_cfg_self_cont_83);
    lv_obj_set_pos(ui->screen_cfg_self_sw_5, 1101, 3);
    lv_obj_set_size(ui->screen_cfg_self_sw_5, 77, 30);

    //Write style for screen_cfg_self_sw_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_5, lv_color_hex(0xe6e2e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_5, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_sw_5, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_sw_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_sw_5, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_5, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_5, lv_color_hex(0x44D7B6), LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_5, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_5, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

    //Write style for screen_cfg_self_sw_5, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_5, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_5, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_5, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_5, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_sw_5, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_sw_5, Part: LV_PART_KNOB, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_5, 255, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_5, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_5, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_5, 0, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_cfg_self_sw_5, 10, LV_PART_KNOB|LV_STATE_FOCUSED);

    //Write codes screen_cfg_self_cont_84
    ui->screen_cfg_self_cont_84 = lv_obj_create(ui->screen_cfg_self_cont_80);
    lv_obj_set_pos(ui->screen_cfg_self_cont_84, 1, 284);
    lv_obj_set_size(ui->screen_cfg_self_cont_84, 1228, 43);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_self_cont_84, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_self_cont_84, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_self_cont_84, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_cont_84, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_cont_84, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_cont_84, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_cont_84, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_cont_84, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_cont_84, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_self_cont_84, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_cont_84, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_cont_84, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_cont_84, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_25
    ui->screen_cfg_self_ddlist_25 = lv_dropdown_create(ui->screen_cfg_self_cont_84);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_25, 11, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_25, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_25, "温度\n湿度\nVOC\n可燃\n氧气\n烟雾\n氢气\n电流\n功率");

    //Write style for screen_cfg_self_ddlist_25, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_25, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_25, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_25, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_25, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_25, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_25, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_25, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_25, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_25, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_25, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_25, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_25, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_25, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_25, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_25, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_25_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_25_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_25_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_25_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_25_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_25_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_25_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_25_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_25_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_25_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_25_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_25), &style_screen_cfg_self_ddlist_25_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_25_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_25_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_25_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_25_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_25_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_25_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_25_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_25_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_25_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_25_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_25_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_25_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_25_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_25_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_25_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_25), &style_screen_cfg_self_ddlist_25_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_25_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_25_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_25_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_25_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_25_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_25_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_25_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_25), &style_screen_cfg_self_ddlist_25_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_24
    ui->screen_cfg_self_ddlist_24 = lv_dropdown_create(ui->screen_cfg_self_cont_84);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_24, 148, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_24, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_24, "中安\n天空物联\n其它MODBUS\nAI");

    //Write style for screen_cfg_self_ddlist_24, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_24, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_24, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_24, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_24, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_24, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_24, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_24, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_24, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_24, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_24, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_24, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_24, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_24, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_24, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_24_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_24_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_24_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_24_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_24_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_24_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_24_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_24_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_24_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_24_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_24_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_24), &style_screen_cfg_self_ddlist_24_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_24_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_24_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_24_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_24_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_24_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_24_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_24_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_24_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_24_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_24_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_24_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_24_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_24_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_24_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_24_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_24), &style_screen_cfg_self_ddlist_24_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_24_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_24_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_24_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_24_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_24_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_24_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_24_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_24), &style_screen_cfg_self_ddlist_24_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_23
    ui->screen_cfg_self_ddlist_23 = lv_dropdown_create(ui->screen_cfg_self_cont_84);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_23, 283, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_23, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_23, "0X01\n0X02\n0X03\n0X04\n0X05\n0X06\n0X07\n0X08\n0X09\n0X0A\n0X0B\n0X0C\n0X0D\n0X0E\n0X0F\n0X10\n0X11\n0X12\n0X13\n0X14\n0X15\n0X16\n0X17\n0X18\n0X19\n0X1A\n0X1B\n0X1C\n0X1D\n0X1E\n0X1F\n0X20");

    //Write style for screen_cfg_self_ddlist_23, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_23, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_23, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_23, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_23, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_23, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_23, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_23, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_23, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_23, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_23, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_23, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_23, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_23, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_23, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_23_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_23_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_23_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_23_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_23_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_23_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_23_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_23_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_23_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_23_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_23_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_23), &style_screen_cfg_self_ddlist_23_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_23_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_23_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_23_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_23_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_23_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_23_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_23_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_23_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_23_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_23_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_23_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_23_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_23_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_23_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_23_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_23), &style_screen_cfg_self_ddlist_23_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_23_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_23_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_23_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_23_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_23_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_23_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_23_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_23), &style_screen_cfg_self_ddlist_23_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_25
    ui->screen_cfg_self_ta_25 = lv_textarea_create(ui->screen_cfg_self_cont_84);
    lv_obj_set_pos(ui->screen_cfg_self_ta_25, 424, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_25, 108, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_25, "0X0000");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_25, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_25, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_25, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_25, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_25, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_25, 6);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_25, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_25, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_25, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_25, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_25, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_25, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_25, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_25, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_25, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_25, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_25, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_25, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_25, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_25, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_25, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_25, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_25, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_25, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_25, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_25, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_25, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_25, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_25, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_25, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_24
    ui->screen_cfg_self_ta_24 = lv_textarea_create(ui->screen_cfg_self_cont_84);
    lv_obj_set_pos(ui->screen_cfg_self_ta_24, 595, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_24, 108, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_24, "0X02");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_24, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_24, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_24, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_24, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_24, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_24, 4);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_24, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_24, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_24, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_24, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_24, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_24, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_24, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_24, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_24, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_24, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_24, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_24, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_24, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_24, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_24, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_24, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_24, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_24, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_24, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_24, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_24, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_24, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_24, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_23
    ui->screen_cfg_self_ta_23 = lv_textarea_create(ui->screen_cfg_self_cont_84);
    lv_obj_set_pos(ui->screen_cfg_self_ta_23, 773, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_23, 36, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_23, "K");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_23, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_23, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_23, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_23, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_23, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_23, 4);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_23, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_23, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_23, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_23, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_23, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_23, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_23, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_23, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_23, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_23, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_23, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_23, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_23, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_23, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_23, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_23, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_23, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_23, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_23, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_23, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_23, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_23, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_23, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_22
    ui->screen_cfg_self_ta_22 = lv_textarea_create(ui->screen_cfg_self_cont_84);
    lv_obj_set_pos(ui->screen_cfg_self_ta_22, 835, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_22, 36, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_22, "B");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_22, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_22, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_22, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_22, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_22, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_22, 4);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_22, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_22, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_22, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_22, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_22, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_22, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_22, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_22, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_22, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_22, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_22, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_22, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_22, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_22, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_22, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_22, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_22, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_22, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_22, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_22, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_22, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_22, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_22, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_22
    ui->screen_cfg_self_ddlist_22 = lv_dropdown_create(ui->screen_cfg_self_cont_84);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_22, 932, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_22, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_22, "0X01\n0X02\n0X03\n0X04");

    //Write style for screen_cfg_self_ddlist_22, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_22, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_22, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_22, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_22, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_22, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_22, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_22, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_22, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_22, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_22, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_22, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_22, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_22, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_22, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_22_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_22_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_22_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_22_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_22_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_22_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_22_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_22_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_22_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_22_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_22_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_22), &style_screen_cfg_self_ddlist_22_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_22_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_22_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_22_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_22_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_22_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_22_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_22_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_22_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_22_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_22_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_22_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_22_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_22_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_22_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_22_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_22), &style_screen_cfg_self_ddlist_22_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_22_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_22_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_22_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_22_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_22_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_22_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_22_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_22), &style_screen_cfg_self_ddlist_22_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_sw_6
    ui->screen_cfg_self_sw_6 = lv_switch_create(ui->screen_cfg_self_cont_84);
    lv_obj_set_pos(ui->screen_cfg_self_sw_6, 1101, 3);
    lv_obj_set_size(ui->screen_cfg_self_sw_6, 77, 30);

    //Write style for screen_cfg_self_sw_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_6, lv_color_hex(0xe6e2e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_6, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_sw_6, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_sw_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_sw_6, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_6, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_6, lv_color_hex(0x44D7B6), LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_6, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_6, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

    //Write style for screen_cfg_self_sw_6, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_6, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_6, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_6, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_6, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_sw_6, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_sw_6, Part: LV_PART_KNOB, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_6, 255, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_6, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_6, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_6, 0, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_cfg_self_sw_6, 10, LV_PART_KNOB|LV_STATE_FOCUSED);

    //Write codes screen_cfg_self_cont_85
    ui->screen_cfg_self_cont_85 = lv_obj_create(ui->screen_cfg_self_cont_80);
    lv_obj_set_pos(ui->screen_cfg_self_cont_85, 1, 335);
    lv_obj_set_size(ui->screen_cfg_self_cont_85, 1228, 43);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_self_cont_85, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_self_cont_85, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_self_cont_85, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_cont_85, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_cont_85, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_cont_85, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_cont_85, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_cont_85, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_cont_85, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_self_cont_85, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_cont_85, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_cont_85, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_cont_85, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_29
    ui->screen_cfg_self_ddlist_29 = lv_dropdown_create(ui->screen_cfg_self_cont_85);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_29, 11, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_29, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_29, "温度\n湿度\nVOC\n可燃\n氧气\n烟雾\n氢气\n电流\n功率");

    //Write style for screen_cfg_self_ddlist_29, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_29, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_29, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_29, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_29, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_29, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_29, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_29, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_29, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_29, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_29, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_29, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_29, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_29, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_29, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_29, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_29_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_29_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_29_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_29_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_29_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_29_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_29_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_29_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_29_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_29_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_29_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_29), &style_screen_cfg_self_ddlist_29_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_29_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_29_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_29_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_29_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_29_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_29_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_29_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_29_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_29_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_29_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_29_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_29_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_29_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_29_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_29_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_29), &style_screen_cfg_self_ddlist_29_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_29_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_29_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_29_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_29_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_29_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_29_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_29_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_29), &style_screen_cfg_self_ddlist_29_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_28
    ui->screen_cfg_self_ddlist_28 = lv_dropdown_create(ui->screen_cfg_self_cont_85);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_28, 148, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_28, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_28, "中安\n天空物联\n其它MODBUS\nAI");

    //Write style for screen_cfg_self_ddlist_28, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_28, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_28, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_28, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_28, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_28, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_28, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_28, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_28, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_28, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_28, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_28, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_28, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_28, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_28, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_28, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_28_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_28_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_28_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_28_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_28_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_28_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_28_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_28_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_28_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_28_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_28_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_28), &style_screen_cfg_self_ddlist_28_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_28_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_28_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_28_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_28_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_28_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_28_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_28_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_28_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_28_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_28_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_28_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_28_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_28_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_28_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_28_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_28), &style_screen_cfg_self_ddlist_28_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_28_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_28_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_28_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_28_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_28_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_28_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_28_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_28), &style_screen_cfg_self_ddlist_28_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_27
    ui->screen_cfg_self_ddlist_27 = lv_dropdown_create(ui->screen_cfg_self_cont_85);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_27, 283, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_27, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_27, "0X01\n0X02\n0X03\n0X04\n0X05\n0X06\n0X07\n0X08\n0X09\n0X0A\n0X0B\n0X0C\n0X0D\n0X0E\n0X0F\n0X10\n0X11\n0X12\n0X13\n0X14\n0X15\n0X16\n0X17\n0X18\n0X19\n0X1A\n0X1B\n0X1C\n0X1D\n0X1E\n0X1F\n0X20");

    //Write style for screen_cfg_self_ddlist_27, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_27, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_27, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_27, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_27, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_27, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_27, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_27, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_27, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_27, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_27, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_27, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_27, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_27, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_27, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_27, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_27_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_27_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_27_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_27_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_27_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_27_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_27_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_27_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_27_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_27_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_27_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_27), &style_screen_cfg_self_ddlist_27_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_27_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_27_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_27_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_27_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_27_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_27_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_27_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_27_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_27_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_27_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_27_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_27_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_27_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_27_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_27_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_27), &style_screen_cfg_self_ddlist_27_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_27_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_27_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_27_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_27_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_27_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_27_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_27_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_27), &style_screen_cfg_self_ddlist_27_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_29
    ui->screen_cfg_self_ta_29 = lv_textarea_create(ui->screen_cfg_self_cont_85);
    lv_obj_set_pos(ui->screen_cfg_self_ta_29, 424, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_29, 108, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_29, "0X0000");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_29, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_29, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_29, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_29, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_29, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_29, 6);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_29, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_29, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_29, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_29, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_29, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_29, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_29, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_29, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_29, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_29, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_29, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_29, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_29, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_29, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_29, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_29, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_29, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_29, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_29, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_29, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_29, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_29, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_29, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_29, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_28
    ui->screen_cfg_self_ta_28 = lv_textarea_create(ui->screen_cfg_self_cont_85);
    lv_obj_set_pos(ui->screen_cfg_self_ta_28, 595, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_28, 108, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_28, "0X02");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_28, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_28, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_28, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_28, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_28, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_28, 4);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_28, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_28, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_28, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_28, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_28, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_28, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_28, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_28, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_28, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_28, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_28, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_28, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_28, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_28, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_28, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_28, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_28, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_28, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_28, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_28, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_28, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_28, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_28, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_28, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_27
    ui->screen_cfg_self_ta_27 = lv_textarea_create(ui->screen_cfg_self_cont_85);
    lv_obj_set_pos(ui->screen_cfg_self_ta_27, 773, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_27, 36, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_27, "K");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_27, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_27, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_27, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_27, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_27, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_27, 4);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_27, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_27, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_27, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_27, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_27, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_27, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_27, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_27, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_27, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_27, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_27, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_27, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_27, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_27, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_27, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_27, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_27, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_27, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_27, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_27, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_27, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_27, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_27, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_27, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_26
    ui->screen_cfg_self_ta_26 = lv_textarea_create(ui->screen_cfg_self_cont_85);
    lv_obj_set_pos(ui->screen_cfg_self_ta_26, 835, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_26, 36, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_26, "B");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_26, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_26, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_26, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_26, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_26, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_26, 4);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_26, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_26, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_26, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_26, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_26, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_26, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_26, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_26, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_26, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_26, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_26, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_26, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_26, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_26, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_26, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_26, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_26, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_26, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_26, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_26, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_26, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_26, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_26, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_26, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_26
    ui->screen_cfg_self_ddlist_26 = lv_dropdown_create(ui->screen_cfg_self_cont_85);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_26, 932, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_26, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_26, "0X01\n0X02\n0X03\n0X04");

    //Write style for screen_cfg_self_ddlist_26, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_26, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_26, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_26, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_26, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_26, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_26, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_26, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_26, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_26, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_26, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_26, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_26, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_26, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_26, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_26, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_26_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_26_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_26_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_26_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_26_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_26_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_26_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_26_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_26_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_26_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_26_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_26), &style_screen_cfg_self_ddlist_26_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_26_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_26_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_26_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_26_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_26_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_26_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_26_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_26_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_26_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_26_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_26_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_26_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_26_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_26_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_26_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_26), &style_screen_cfg_self_ddlist_26_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_26_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_26_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_26_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_26_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_26_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_26_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_26_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_26), &style_screen_cfg_self_ddlist_26_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_sw_7
    ui->screen_cfg_self_sw_7 = lv_switch_create(ui->screen_cfg_self_cont_85);
    lv_obj_set_pos(ui->screen_cfg_self_sw_7, 1101, 3);
    lv_obj_set_size(ui->screen_cfg_self_sw_7, 77, 30);

    //Write style for screen_cfg_self_sw_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_7, lv_color_hex(0xe6e2e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_7, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_sw_7, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_sw_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_sw_7, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_7, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_7, lv_color_hex(0x44D7B6), LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_7, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_7, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

    //Write style for screen_cfg_self_sw_7, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_7, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_7, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_7, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_7, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_sw_7, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_sw_7, Part: LV_PART_KNOB, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_7, 255, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_7, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_7, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_7, 0, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_cfg_self_sw_7, 10, LV_PART_KNOB|LV_STATE_FOCUSED);

    //Write codes screen_cfg_self_cont_86
    ui->screen_cfg_self_cont_86 = lv_obj_create(ui->screen_cfg_self_cont_80);
    lv_obj_set_pos(ui->screen_cfg_self_cont_86, 1, 386);
    lv_obj_set_size(ui->screen_cfg_self_cont_86, 1228, 43);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_self_cont_86, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_self_cont_86, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_self_cont_86, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_cont_86, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_cont_86, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_cont_86, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_cont_86, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_cont_86, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_cont_86, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_self_cont_86, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_cont_86, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_cont_86, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_cont_86, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_33
    ui->screen_cfg_self_ddlist_33 = lv_dropdown_create(ui->screen_cfg_self_cont_86);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_33, 11, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_33, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_33, "温度\n湿度\nVOC\n可燃\n氧气\n烟雾\n氢气\n电流\n功率");

    //Write style for screen_cfg_self_ddlist_33, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_33, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_33, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_33, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_33, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_33, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_33, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_33, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_33, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_33, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_33, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_33, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_33, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_33, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_33, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_33_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_33_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_33_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_33_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_33_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_33_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_33_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_33_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_33_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_33_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_33_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_33), &style_screen_cfg_self_ddlist_33_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_33_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_33_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_33_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_33_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_33_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_33_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_33_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_33_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_33_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_33_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_33_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_33_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_33_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_33_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_33_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_33), &style_screen_cfg_self_ddlist_33_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_33_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_33_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_33_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_33_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_33_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_33_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_33_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_33), &style_screen_cfg_self_ddlist_33_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_32
    ui->screen_cfg_self_ddlist_32 = lv_dropdown_create(ui->screen_cfg_self_cont_86);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_32, 148, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_32, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_32, "中安\n天空物联\n其它MODBUS\nAI");

    //Write style for screen_cfg_self_ddlist_32, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_32, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_32, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_32, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_32, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_32, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_32, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_32, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_32, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_32, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_32, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_32, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_32, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_32, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_32, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_32, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_32_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_32_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_32_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_32_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_32_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_32_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_32_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_32_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_32_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_32_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_32_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_32), &style_screen_cfg_self_ddlist_32_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_32_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_32_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_32_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_32_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_32_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_32_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_32_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_32_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_32_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_32_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_32_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_32_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_32_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_32_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_32_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_32), &style_screen_cfg_self_ddlist_32_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_32_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_32_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_32_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_32_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_32_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_32_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_32_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_32), &style_screen_cfg_self_ddlist_32_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_31
    ui->screen_cfg_self_ddlist_31 = lv_dropdown_create(ui->screen_cfg_self_cont_86);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_31, 283, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_31, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_31, "0X01\n0X02\n0X03\n0X04\n0X05\n0X06\n0X07\n0X08\n0X09\n0X0A\n0X0B\n0X0C\n0X0D\n0X0E\n0X0F\n0X10\n0X11\n0X12\n0X13\n0X14\n0X15\n0X16\n0X17\n0X18\n0X19\n0X1A\n0X1B\n0X1C\n0X1D\n0X1E\n0X1F\n0X20");

    //Write style for screen_cfg_self_ddlist_31, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_31, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_31, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_31, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_31, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_31, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_31, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_31, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_31, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_31, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_31, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_31, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_31, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_31, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_31, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_31, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_31_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_31_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_31_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_31_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_31_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_31_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_31_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_31_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_31_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_31_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_31_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_31), &style_screen_cfg_self_ddlist_31_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_31_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_31_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_31_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_31_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_31_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_31_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_31_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_31_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_31_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_31_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_31_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_31_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_31_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_31_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_31_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_31), &style_screen_cfg_self_ddlist_31_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_31_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_31_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_31_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_31_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_31_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_31_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_31_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_31), &style_screen_cfg_self_ddlist_31_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_33
    ui->screen_cfg_self_ta_33 = lv_textarea_create(ui->screen_cfg_self_cont_86);
    lv_obj_set_pos(ui->screen_cfg_self_ta_33, 424, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_33, 108, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_33, "0X0000");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_33, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_33, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_33, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_33, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_33, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_33, 6);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_33, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_33, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_33, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_33, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_33, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_33, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_33, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_33, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_33, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_33, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_33, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_33, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_33, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_33, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_33, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_33, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_33, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_33, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_33, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_33, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_33, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_33, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_33, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_32
    ui->screen_cfg_self_ta_32 = lv_textarea_create(ui->screen_cfg_self_cont_86);
    lv_obj_set_pos(ui->screen_cfg_self_ta_32, 595, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_32, 108, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_32, "0X02");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_32, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_32, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_32, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_32, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_32, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_32, 4);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_32, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_32, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_32, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_32, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_32, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_32, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_32, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_32, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_32, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_32, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_32, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_32, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_32, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_32, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_32, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_32, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_32, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_32, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_32, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_32, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_32, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_32, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_32, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_32, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_31
    ui->screen_cfg_self_ta_31 = lv_textarea_create(ui->screen_cfg_self_cont_86);
    lv_obj_set_pos(ui->screen_cfg_self_ta_31, 773, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_31, 36, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_31, "K");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_31, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_31, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_31, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_31, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_31, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_31, 4);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_31, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_31, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_31, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_31, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_31, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_31, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_31, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_31, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_31, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_31, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_31, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_31, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_31, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_31, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_31, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_31, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_31, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_31, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_31, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_31, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_31, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_31, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_31, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_31, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_30
    ui->screen_cfg_self_ta_30 = lv_textarea_create(ui->screen_cfg_self_cont_86);
    lv_obj_set_pos(ui->screen_cfg_self_ta_30, 835, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_30, 36, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_30, "B");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_30, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_30, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_30, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_30, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_30, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_30, 4);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_30, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_30, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_30, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_30, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_30, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_30, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_30, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_30, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_30, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_30, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_30, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_30, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_30, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_30, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_30, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_30, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_30, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_30, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_30, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_30, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_30, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_30, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_30, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_30
    ui->screen_cfg_self_ddlist_30 = lv_dropdown_create(ui->screen_cfg_self_cont_86);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_30, 932, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_30, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_30, "0X01\n0X02\n0X03\n0X04");

    //Write style for screen_cfg_self_ddlist_30, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_30, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_30, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_30, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_30, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_30, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_30, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_30, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_30, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_30, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_30, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_30, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_30, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_30, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_30, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_30_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_30_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_30_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_30_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_30_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_30_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_30_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_30_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_30_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_30_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_30_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_30), &style_screen_cfg_self_ddlist_30_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_30_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_30_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_30_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_30_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_30_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_30_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_30_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_30_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_30_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_30_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_30_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_30_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_30_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_30_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_30_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_30), &style_screen_cfg_self_ddlist_30_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_30_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_30_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_30_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_30_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_30_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_30_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_30_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_30), &style_screen_cfg_self_ddlist_30_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_sw_8
    ui->screen_cfg_self_sw_8 = lv_switch_create(ui->screen_cfg_self_cont_86);
    lv_obj_set_pos(ui->screen_cfg_self_sw_8, 1101, 3);
    lv_obj_set_size(ui->screen_cfg_self_sw_8, 77, 30);

    //Write style for screen_cfg_self_sw_8, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_8, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_8, lv_color_hex(0xe6e2e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_8, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_sw_8, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_sw_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_sw_8, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_8, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_8, lv_color_hex(0x44D7B6), LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_8, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_8, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

    //Write style for screen_cfg_self_sw_8, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_8, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_8, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_8, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_8, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_sw_8, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_sw_8, Part: LV_PART_KNOB, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_8, 255, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_8, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_8, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_8, 0, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_cfg_self_sw_8, 10, LV_PART_KNOB|LV_STATE_FOCUSED);

    //Write codes screen_cfg_self_cont_87
    ui->screen_cfg_self_cont_87 = lv_obj_create(ui->screen_cfg_self_cont_80);
    lv_obj_set_pos(ui->screen_cfg_self_cont_87, 1, 437);
    lv_obj_set_size(ui->screen_cfg_self_cont_87, 1228, 43);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_self_cont_87, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_self_cont_87, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_self_cont_87, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_cont_87, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_cont_87, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_cont_87, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_cont_87, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_cont_87, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_cont_87, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_self_cont_87, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_cont_87, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_cont_87, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_cont_87, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_37
    ui->screen_cfg_self_ddlist_37 = lv_dropdown_create(ui->screen_cfg_self_cont_87);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_37, 11, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_37, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_37, "温度\n湿度\nVOC\n可燃\n氧气\n烟雾\n氢气\n电流\n功率");

    //Write style for screen_cfg_self_ddlist_37, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_37, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_37, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_37, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_37, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_37, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_37, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_37, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_37, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_37, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_37, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_37, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_37, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_37, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_37, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_37_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_37_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_37_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_37_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_37_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_37_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_37_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_37_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_37_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_37_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_37_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_37), &style_screen_cfg_self_ddlist_37_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_37_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_37_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_37_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_37_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_37_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_37_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_37_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_37_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_37_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_37_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_37_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_37_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_37_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_37_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_37_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_37), &style_screen_cfg_self_ddlist_37_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_37_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_37_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_37_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_37_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_37_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_37_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_37_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_37), &style_screen_cfg_self_ddlist_37_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_36
    ui->screen_cfg_self_ddlist_36 = lv_dropdown_create(ui->screen_cfg_self_cont_87);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_36, 148, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_36, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_36, "中安\n天空物联\n其它MODBUS\nAI");

    //Write style for screen_cfg_self_ddlist_36, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_36, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_36, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_36, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_36, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_36, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_36, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_36, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_36, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_36, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_36, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_36, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_36, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_36, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_36, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_36_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_36_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_36_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_36_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_36_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_36_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_36_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_36_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_36_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_36_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_36_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_36), &style_screen_cfg_self_ddlist_36_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_36_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_36_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_36_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_36_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_36_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_36_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_36_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_36_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_36_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_36_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_36_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_36_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_36_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_36_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_36_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_36), &style_screen_cfg_self_ddlist_36_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_36_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_36_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_36_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_36_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_36_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_36_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_36_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_36), &style_screen_cfg_self_ddlist_36_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_35
    ui->screen_cfg_self_ddlist_35 = lv_dropdown_create(ui->screen_cfg_self_cont_87);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_35, 283, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_35, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_35, "0X01\n0X02\n0X03\n0X04\n0X05\n0X06\n0X07\n0X08\n0X09\n0X0A\n0X0B\n0X0C\n0X0D\n0X0E\n0X0F\n0X10\n0X11\n0X12\n0X13\n0X14\n0X15\n0X16\n0X17\n0X18\n0X19\n0X1A\n0X1B\n0X1C\n0X1D\n0X1E\n0X1F\n0X20");

    //Write style for screen_cfg_self_ddlist_35, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_35, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_35, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_35, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_35, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_35, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_35, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_35, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_35, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_35, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_35, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_35, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_35, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_35, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_35, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_35, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_35_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_35_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_35_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_35_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_35_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_35_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_35_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_35_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_35_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_35_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_35_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_35), &style_screen_cfg_self_ddlist_35_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_35_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_35_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_35_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_35_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_35_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_35_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_35_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_35_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_35_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_35_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_35_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_35_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_35_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_35_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_35_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_35), &style_screen_cfg_self_ddlist_35_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_35_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_35_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_35_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_35_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_35_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_35_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_35_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_35), &style_screen_cfg_self_ddlist_35_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_37
    ui->screen_cfg_self_ta_37 = lv_textarea_create(ui->screen_cfg_self_cont_87);
    lv_obj_set_pos(ui->screen_cfg_self_ta_37, 424, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_37, 108, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_37, "0X0000");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_37, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_37, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_37, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_37, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_37, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_37, 6);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_37, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_37, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_37, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_37, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_37, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_37, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_37, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_37, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_37, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_37, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_37, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_37, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_37, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_37, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_37, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_37, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_37, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_37, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_37, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_37, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_37, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_37, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_37, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_36
    ui->screen_cfg_self_ta_36 = lv_textarea_create(ui->screen_cfg_self_cont_87);
    lv_obj_set_pos(ui->screen_cfg_self_ta_36, 595, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_36, 108, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_36, "0X02");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_36, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_36, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_36, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_36, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_36, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_36, 4);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_36, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_36, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_36, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_36, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_36, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_36, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_36, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_36, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_36, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_36, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_36, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_36, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_36, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_36, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_36, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_36, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_36, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_36, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_36, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_36, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_36, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_36, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_36, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_35
    ui->screen_cfg_self_ta_35 = lv_textarea_create(ui->screen_cfg_self_cont_87);
    lv_obj_set_pos(ui->screen_cfg_self_ta_35, 773, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_35, 36, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_35, "K");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_35, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_35, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_35, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_35, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_35, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_35, 4);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_35, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_35, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_35, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_35, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_35, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_35, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_35, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_35, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_35, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_35, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_35, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_35, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_35, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_35, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_35, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_35, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_35, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_35, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_35, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_35, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_35, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_35, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_35, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_35, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_34
    ui->screen_cfg_self_ta_34 = lv_textarea_create(ui->screen_cfg_self_cont_87);
    lv_obj_set_pos(ui->screen_cfg_self_ta_34, 835, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_34, 36, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_34, "B");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_34, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_34, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_34, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_34, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_34, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_34, 4);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_34, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_34, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_34, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_34, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_34, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_34, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_34, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_34, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_34, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_34, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_34, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_34, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_34, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_34, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_34, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_34, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_34, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_34, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_34, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_34, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_34, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_34, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_34, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_34, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_34
    ui->screen_cfg_self_ddlist_34 = lv_dropdown_create(ui->screen_cfg_self_cont_87);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_34, 932, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_34, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_34, "0X01\n0X02\n0X03\n0X04");

    //Write style for screen_cfg_self_ddlist_34, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_34, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_34, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_34, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_34, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_34, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_34, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_34, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_34, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_34, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_34, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_34, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_34, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_34, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_34, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_34, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_34_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_34_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_34_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_34_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_34_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_34_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_34_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_34_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_34_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_34_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_34_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_34), &style_screen_cfg_self_ddlist_34_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_34_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_34_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_34_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_34_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_34_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_34_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_34_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_34_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_34_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_34_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_34_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_34_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_34_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_34_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_34_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_34), &style_screen_cfg_self_ddlist_34_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_34_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_34_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_34_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_34_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_34_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_34_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_34_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_34), &style_screen_cfg_self_ddlist_34_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_sw_9
    ui->screen_cfg_self_sw_9 = lv_switch_create(ui->screen_cfg_self_cont_87);
    lv_obj_set_pos(ui->screen_cfg_self_sw_9, 1101, 3);
    lv_obj_set_size(ui->screen_cfg_self_sw_9, 77, 30);

    //Write style for screen_cfg_self_sw_9, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_9, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_9, lv_color_hex(0xe6e2e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_9, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_sw_9, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_sw_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_sw_9, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_9, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_9, lv_color_hex(0x44D7B6), LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_9, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_9, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

    //Write style for screen_cfg_self_sw_9, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_9, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_9, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_9, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_9, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_sw_9, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_sw_9, Part: LV_PART_KNOB, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_9, 255, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_9, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_9, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_9, 0, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_cfg_self_sw_9, 10, LV_PART_KNOB|LV_STATE_FOCUSED);

    //Write codes screen_cfg_self_cont_88
    ui->screen_cfg_self_cont_88 = lv_obj_create(ui->screen_cfg_self_cont_80);
    lv_obj_set_pos(ui->screen_cfg_self_cont_88, 1, 488);
    lv_obj_set_size(ui->screen_cfg_self_cont_88, 1228, 43);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_self_cont_88, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_self_cont_88, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_self_cont_88, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_cont_88, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_cont_88, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_cont_88, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_cont_88, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_cont_88, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_cont_88, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_self_cont_88, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_cont_88, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_cont_88, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_cont_88, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_41
    ui->screen_cfg_self_ddlist_41 = lv_dropdown_create(ui->screen_cfg_self_cont_88);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_41, 11, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_41, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_41, "温度\n湿度\nVOC\n可燃\n氧气\n烟雾\n氢气\n电流\n功率");

    //Write style for screen_cfg_self_ddlist_41, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_41, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_41, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_41, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_41, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_41, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_41, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_41, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_41, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_41, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_41, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_41, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_41, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_41, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_41, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_41_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_41_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_41_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_41_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_41_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_41_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_41_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_41_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_41_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_41_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_41_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_41), &style_screen_cfg_self_ddlist_41_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_41_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_41_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_41_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_41_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_41_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_41_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_41_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_41_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_41_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_41_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_41_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_41_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_41_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_41_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_41_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_41), &style_screen_cfg_self_ddlist_41_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_41_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_41_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_41_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_41_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_41_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_41_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_41_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_41), &style_screen_cfg_self_ddlist_41_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_40
    ui->screen_cfg_self_ddlist_40 = lv_dropdown_create(ui->screen_cfg_self_cont_88);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_40, 148, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_40, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_40, "中安\n天空物联\n其它MODBUS\nAI");

    //Write style for screen_cfg_self_ddlist_40, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_40, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_40, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_40, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_40, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_40, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_40, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_40, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_40, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_40, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_40, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_40, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_40, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_40, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_40, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_40_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_40_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_40_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_40_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_40_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_40_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_40_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_40_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_40_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_40_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_40_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_40), &style_screen_cfg_self_ddlist_40_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_40_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_40_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_40_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_40_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_40_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_40_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_40_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_40_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_40_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_40_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_40_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_40_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_40_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_40_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_40_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_40), &style_screen_cfg_self_ddlist_40_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_40_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_40_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_40_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_40_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_40_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_40_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_40_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_40), &style_screen_cfg_self_ddlist_40_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_39
    ui->screen_cfg_self_ddlist_39 = lv_dropdown_create(ui->screen_cfg_self_cont_88);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_39, 283, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_39, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_39, "0X01\n0X02\n0X03\n0X04\n0X05\n0X06\n0X07\n0X08\n0X09\n0X0A\n0X0B\n0X0C\n0X0D\n0X0E\n0X0F\n0X10\n0X11\n0X12\n0X13\n0X14\n0X15\n0X16\n0X17\n0X18\n0X19\n0X1A\n0X1B\n0X1C\n0X1D\n0X1E\n0X1F\n0X20");

    //Write style for screen_cfg_self_ddlist_39, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_39, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_39, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_39, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_39, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_39, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_39, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_39, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_39, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_39, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_39, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_39, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_39, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_39, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_39, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_39_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_39_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_39_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_39_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_39_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_39_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_39_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_39_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_39_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_39_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_39_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_39), &style_screen_cfg_self_ddlist_39_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_39_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_39_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_39_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_39_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_39_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_39_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_39_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_39_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_39_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_39_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_39_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_39_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_39_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_39_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_39_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_39), &style_screen_cfg_self_ddlist_39_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_39_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_39_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_39_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_39_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_39_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_39_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_39_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_39), &style_screen_cfg_self_ddlist_39_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_41
    ui->screen_cfg_self_ta_41 = lv_textarea_create(ui->screen_cfg_self_cont_88);
    lv_obj_set_pos(ui->screen_cfg_self_ta_41, 424, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_41, 108, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_41, "0X0000");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_41, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_41, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_41, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_41, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_41, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_41, 6);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_41, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_41, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_41, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_41, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_41, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_41, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_41, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_41, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_41, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_41, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_41, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_41, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_41, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_41, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_41, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_41, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_41, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_41, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_41, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_41, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_41, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_41, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_41, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_40
    ui->screen_cfg_self_ta_40 = lv_textarea_create(ui->screen_cfg_self_cont_88);
    lv_obj_set_pos(ui->screen_cfg_self_ta_40, 595, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_40, 108, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_40, "0X02");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_40, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_40, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_40, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_40, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_40, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_40, 4);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_40, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_40, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_40, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_40, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_40, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_40, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_40, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_40, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_40, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_40, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_40, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_40, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_40, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_40, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_40, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_40, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_40, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_40, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_40, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_40, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_40, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_40, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_40, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_39
    ui->screen_cfg_self_ta_39 = lv_textarea_create(ui->screen_cfg_self_cont_88);
    lv_obj_set_pos(ui->screen_cfg_self_ta_39, 773, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_39, 36, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_39, "K");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_39, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_39, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_39, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_39, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_39, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_39, 4);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_39, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_39, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_39, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_39, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_39, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_39, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_39, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_39, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_39, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_39, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_39, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_39, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_39, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_39, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_39, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_39, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_39, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_39, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_39, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_39, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_39, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_39, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_39, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_38
    ui->screen_cfg_self_ta_38 = lv_textarea_create(ui->screen_cfg_self_cont_88);
    lv_obj_set_pos(ui->screen_cfg_self_ta_38, 835, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_38, 36, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_38, "B");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_38, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_38, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_38, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_38, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_38, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_38, 4);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_38, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_38, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_38, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_38, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_38, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_38, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_38, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_38, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_38, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_38, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_38, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_38, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_38, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_38, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_38, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_38, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_38, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_38, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_38, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_38, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_38, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_38, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_38, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_38, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_38
    ui->screen_cfg_self_ddlist_38 = lv_dropdown_create(ui->screen_cfg_self_cont_88);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_38, 932, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_38, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_38, "0X01\n0X02\n0X03\n0X04");

    //Write style for screen_cfg_self_ddlist_38, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_38, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_38, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_38, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_38, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_38, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_38, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_38, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_38, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_38, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_38, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_38, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_38, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_38, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_38, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_38, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_38_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_38_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_38_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_38_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_38_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_38_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_38_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_38_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_38_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_38_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_38_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_38), &style_screen_cfg_self_ddlist_38_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_38_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_38_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_38_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_38_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_38_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_38_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_38_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_38_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_38_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_38_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_38_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_38_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_38_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_38_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_38_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_38), &style_screen_cfg_self_ddlist_38_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_38_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_38_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_38_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_38_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_38_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_38_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_38_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_38), &style_screen_cfg_self_ddlist_38_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_sw_10
    ui->screen_cfg_self_sw_10 = lv_switch_create(ui->screen_cfg_self_cont_88);
    lv_obj_set_pos(ui->screen_cfg_self_sw_10, 1101, 3);
    lv_obj_set_size(ui->screen_cfg_self_sw_10, 77, 30);

    //Write style for screen_cfg_self_sw_10, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_10, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_10, lv_color_hex(0xe6e2e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_10, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_sw_10, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_sw_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_sw_10, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_10, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_10, lv_color_hex(0x44D7B6), LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_10, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_10, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

    //Write style for screen_cfg_self_sw_10, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_10, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_10, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_10, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_10, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_sw_10, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_sw_10, Part: LV_PART_KNOB, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_10, 255, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_10, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_10, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_10, 0, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_cfg_self_sw_10, 10, LV_PART_KNOB|LV_STATE_FOCUSED);

    //Write codes screen_cfg_self_cont_89
    ui->screen_cfg_self_cont_89 = lv_obj_create(ui->screen_cfg_self_cont_80);
    lv_obj_set_pos(ui->screen_cfg_self_cont_89, 1, 539);
    lv_obj_set_size(ui->screen_cfg_self_cont_89, 1228, 43);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_self_cont_89, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_self_cont_89, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_self_cont_89, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_cont_89, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_cont_89, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_cont_89, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_cont_89, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_cont_89, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_cont_89, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_self_cont_89, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_cont_89, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_cont_89, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_cont_89, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_45
    ui->screen_cfg_self_ddlist_45 = lv_dropdown_create(ui->screen_cfg_self_cont_89);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_45, 11, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_45, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_45, "温度\n湿度\nVOC\n可燃\n氧气\n烟雾\n氢气\n电流\n功率");

    //Write style for screen_cfg_self_ddlist_45, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_45, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_45, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_45, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_45, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_45, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_45, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_45, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_45, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_45, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_45, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_45, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_45, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_45, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_45, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_45, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_45_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_45_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_45_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_45_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_45_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_45_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_45_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_45_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_45_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_45_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_45_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_45), &style_screen_cfg_self_ddlist_45_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_45_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_45_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_45_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_45_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_45_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_45_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_45_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_45_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_45_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_45_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_45_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_45_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_45_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_45_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_45_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_45), &style_screen_cfg_self_ddlist_45_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_45_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_45_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_45_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_45_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_45_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_45_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_45_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_45), &style_screen_cfg_self_ddlist_45_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_44
    ui->screen_cfg_self_ddlist_44 = lv_dropdown_create(ui->screen_cfg_self_cont_89);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_44, 148, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_44, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_44, "中安\n天空物联\n其它MODBUS\nAI");

    //Write style for screen_cfg_self_ddlist_44, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_44, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_44, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_44, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_44, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_44, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_44, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_44, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_44, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_44, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_44, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_44, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_44, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_44, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_44, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_44_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_44_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_44_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_44_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_44_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_44_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_44_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_44_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_44_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_44_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_44_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_44), &style_screen_cfg_self_ddlist_44_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_44_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_44_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_44_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_44_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_44_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_44_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_44_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_44_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_44_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_44_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_44_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_44_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_44_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_44_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_44_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_44), &style_screen_cfg_self_ddlist_44_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_44_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_44_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_44_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_44_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_44_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_44_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_44_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_44), &style_screen_cfg_self_ddlist_44_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_43
    ui->screen_cfg_self_ddlist_43 = lv_dropdown_create(ui->screen_cfg_self_cont_89);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_43, 283, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_43, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_43, "0X01\n0X02\n0X03\n0X04\n0X05\n0X06\n0X07\n0X08\n0X09\n0X0A\n0X0B\n0X0C\n0X0D\n0X0E\n0X0F\n0X10\n0X11\n0X12\n0X13\n0X14\n0X15\n0X16\n0X17\n0X18\n0X19\n0X1A\n0X1B\n0X1C\n0X1D\n0X1E\n0X1F\n0X20");

    //Write style for screen_cfg_self_ddlist_43, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_43, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_43, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_43, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_43, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_43, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_43, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_43, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_43, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_43, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_43, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_43, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_43, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_43, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_43, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_43_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_43_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_43_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_43_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_43_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_43_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_43_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_43_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_43_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_43_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_43_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_43), &style_screen_cfg_self_ddlist_43_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_43_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_43_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_43_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_43_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_43_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_43_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_43_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_43_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_43_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_43_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_43_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_43_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_43_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_43_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_43_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_43), &style_screen_cfg_self_ddlist_43_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_43_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_43_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_43_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_43_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_43_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_43_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_43_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_43), &style_screen_cfg_self_ddlist_43_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_45
    ui->screen_cfg_self_ta_45 = lv_textarea_create(ui->screen_cfg_self_cont_89);
    lv_obj_set_pos(ui->screen_cfg_self_ta_45, 424, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_45, 108, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_45, "0X0000");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_45, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_45, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_45, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_45, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_45, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_45, 6);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_45, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_45, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_45, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_45, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_45, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_45, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_45, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_45, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_45, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_45, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_45, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_45, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_45, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_45, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_45, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_45, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_45, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_45, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_45, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_45, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_45, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_45, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_45, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_45, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_44
    ui->screen_cfg_self_ta_44 = lv_textarea_create(ui->screen_cfg_self_cont_89);
    lv_obj_set_pos(ui->screen_cfg_self_ta_44, 595, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_44, 108, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_44, "0X02");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_44, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_44, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_44, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_44, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_44, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_44, 4);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_44, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_44, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_44, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_44, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_44, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_44, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_44, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_44, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_44, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_44, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_44, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_44, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_44, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_44, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_44, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_44, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_44, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_44, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_44, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_44, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_44, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_44, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_44, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_43
    ui->screen_cfg_self_ta_43 = lv_textarea_create(ui->screen_cfg_self_cont_89);
    lv_obj_set_pos(ui->screen_cfg_self_ta_43, 773, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_43, 36, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_43, "K");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_43, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_43, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_43, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_43, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_43, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_43, 4);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_43, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_43, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_43, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_43, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_43, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_43, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_43, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_43, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_43, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_43, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_43, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_43, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_43, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_43, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_43, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_43, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_43, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_43, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_43, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_43, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_43, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_43, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_43, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_42
    ui->screen_cfg_self_ta_42 = lv_textarea_create(ui->screen_cfg_self_cont_89);
    lv_obj_set_pos(ui->screen_cfg_self_ta_42, 835, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_42, 36, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_42, "B");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_42, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_42, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_42, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_42, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_42, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_42, 4);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_42, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_42, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_42, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_42, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_42, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_42, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_42, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_42, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_42, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_42, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_42, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_42, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_42, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_42, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_42, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_42, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_42, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_42, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_42, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_42, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_42, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_42, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_42, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_42
    ui->screen_cfg_self_ddlist_42 = lv_dropdown_create(ui->screen_cfg_self_cont_89);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_42, 932, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_42, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_42, "0X01\n0X02\n0X03\n0X04");

    //Write style for screen_cfg_self_ddlist_42, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_42, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_42, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_42, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_42, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_42, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_42, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_42, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_42, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_42, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_42, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_42, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_42, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_42, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_42, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_42_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_42_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_42_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_42_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_42_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_42_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_42_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_42_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_42_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_42_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_42_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_42), &style_screen_cfg_self_ddlist_42_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_42_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_42_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_42_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_42_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_42_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_42_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_42_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_42_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_42_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_42_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_42_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_42_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_42_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_42_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_42_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_42), &style_screen_cfg_self_ddlist_42_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_42_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_42_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_42_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_42_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_42_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_42_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_42_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_42), &style_screen_cfg_self_ddlist_42_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_sw_11
    ui->screen_cfg_self_sw_11 = lv_switch_create(ui->screen_cfg_self_cont_89);
    lv_obj_set_pos(ui->screen_cfg_self_sw_11, 1101, 3);
    lv_obj_set_size(ui->screen_cfg_self_sw_11, 77, 30);

    //Write style for screen_cfg_self_sw_11, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_11, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_11, lv_color_hex(0xe6e2e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_11, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_sw_11, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_sw_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_sw_11, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_11, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_11, lv_color_hex(0x44D7B6), LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_11, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_11, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

    //Write style for screen_cfg_self_sw_11, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_11, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_11, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_11, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_11, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_sw_11, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_sw_11, Part: LV_PART_KNOB, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_11, 255, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_11, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_11, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_11, 0, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_cfg_self_sw_11, 10, LV_PART_KNOB|LV_STATE_FOCUSED);

    //Write codes screen_cfg_self_cont_90
    ui->screen_cfg_self_cont_90 = lv_obj_create(ui->screen_cfg_self_cont_80);
    lv_obj_set_pos(ui->screen_cfg_self_cont_90, 1, 590);
    lv_obj_set_size(ui->screen_cfg_self_cont_90, 1228, 43);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_self_cont_90, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_self_cont_90, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_self_cont_90, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_cont_90, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_cont_90, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_cont_90, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_cont_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_cont_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_cont_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_self_cont_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_cont_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_cont_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_cont_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_49
    ui->screen_cfg_self_ddlist_49 = lv_dropdown_create(ui->screen_cfg_self_cont_90);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_49, 11, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_49, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_49, "温度\n湿度\nVOC\n可燃\n氧气\n烟雾\n氢气\n电流\n功率");

    //Write style for screen_cfg_self_ddlist_49, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_49, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_49, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_49, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_49, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_49, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_49, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_49, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_49, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_49, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_49, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_49, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_49, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_49, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_49, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_49, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_49_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_49_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_49_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_49_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_49_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_49_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_49_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_49_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_49_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_49_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_49_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_49), &style_screen_cfg_self_ddlist_49_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_49_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_49_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_49_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_49_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_49_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_49_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_49_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_49_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_49_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_49_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_49_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_49_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_49_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_49_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_49_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_49), &style_screen_cfg_self_ddlist_49_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_49_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_49_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_49_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_49_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_49_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_49_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_49_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_49), &style_screen_cfg_self_ddlist_49_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_48
    ui->screen_cfg_self_ddlist_48 = lv_dropdown_create(ui->screen_cfg_self_cont_90);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_48, 148, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_48, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_48, "中安\n天空物联\n其它MODBUS\nAI");

    //Write style for screen_cfg_self_ddlist_48, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_48, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_48, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_48, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_48, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_48, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_48, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_48, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_48, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_48, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_48, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_48, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_48, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_48, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_48, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_48, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_48_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_48_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_48_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_48_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_48_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_48_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_48_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_48_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_48_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_48_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_48_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_48), &style_screen_cfg_self_ddlist_48_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_48_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_48_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_48_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_48_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_48_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_48_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_48_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_48_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_48_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_48_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_48_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_48_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_48_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_48_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_48_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_48), &style_screen_cfg_self_ddlist_48_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_48_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_48_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_48_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_48_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_48_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_48_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_48_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_48), &style_screen_cfg_self_ddlist_48_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_47
    ui->screen_cfg_self_ddlist_47 = lv_dropdown_create(ui->screen_cfg_self_cont_90);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_47, 283, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_47, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_47, "0X01\n0X02\n0X03\n0X04\n0X05\n0X06\n0X07\n0X08\n0X09\n0X0A\n0X0B\n0X0C\n0X0D\n0X0E\n0X0F\n0X10\n0X11\n0X12\n0X13\n0X14\n0X15\n0X16\n0X17\n0X18\n0X19\n0X1A\n0X1B\n0X1C\n0X1D\n0X1E\n0X1F\n0X20");

    //Write style for screen_cfg_self_ddlist_47, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_47, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_47, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_47, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_47, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_47, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_47, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_47, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_47, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_47, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_47, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_47, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_47, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_47, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_47, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_47, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_47_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_47_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_47_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_47_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_47_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_47_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_47_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_47_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_47_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_47_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_47_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_47), &style_screen_cfg_self_ddlist_47_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_47_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_47_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_47_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_47_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_47_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_47_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_47_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_47_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_47_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_47_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_47_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_47_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_47_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_47_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_47_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_47), &style_screen_cfg_self_ddlist_47_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_47_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_47_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_47_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_47_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_47_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_47_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_47_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_47), &style_screen_cfg_self_ddlist_47_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_49
    ui->screen_cfg_self_ta_49 = lv_textarea_create(ui->screen_cfg_self_cont_90);
    lv_obj_set_pos(ui->screen_cfg_self_ta_49, 424, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_49, 108, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_49, "0X0000");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_49, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_49, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_49, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_49, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_49, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_49, 6);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_49, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_49, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_49, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_49, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_49, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_49, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_49, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_49, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_49, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_49, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_49, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_49, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_49, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_49, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_49, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_49, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_49, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_49, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_49, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_49, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_49, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_49, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_49, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_49, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_48
    ui->screen_cfg_self_ta_48 = lv_textarea_create(ui->screen_cfg_self_cont_90);
    lv_obj_set_pos(ui->screen_cfg_self_ta_48, 595, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_48, 108, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_48, "0X02");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_48, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_48, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_48, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_48, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_48, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_48, 4);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_48, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_48, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_48, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_48, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_48, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_48, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_48, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_48, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_48, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_48, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_48, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_48, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_48, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_48, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_48, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_48, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_48, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_48, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_48, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_48, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_48, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_48, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_48, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_48, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_47
    ui->screen_cfg_self_ta_47 = lv_textarea_create(ui->screen_cfg_self_cont_90);
    lv_obj_set_pos(ui->screen_cfg_self_ta_47, 773, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_47, 36, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_47, "K");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_47, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_47, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_47, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_47, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_47, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_47, 4);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_47, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_47, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_47, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_47, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_47, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_47, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_47, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_47, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_47, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_47, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_47, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_47, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_47, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_47, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_47, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_47, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_47, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_47, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_47, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_47, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_47, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_47, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_47, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_47, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_46
    ui->screen_cfg_self_ta_46 = lv_textarea_create(ui->screen_cfg_self_cont_90);
    lv_obj_set_pos(ui->screen_cfg_self_ta_46, 835, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_46, 36, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_46, "B");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_46, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_46, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_46, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_46, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_46, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_46, 4);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_46, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_46, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_46, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_46, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_46, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_46, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_46, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_46, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_46, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_46, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_46, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_46, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_46, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_46, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_46, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_46, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_46, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_46, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_46, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_46, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_46, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_46, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_46, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_46, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_46
    ui->screen_cfg_self_ddlist_46 = lv_dropdown_create(ui->screen_cfg_self_cont_90);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_46, 932, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_46, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_46, "0X01\n0X02\n0X03\n0X04");

    //Write style for screen_cfg_self_ddlist_46, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_46, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_46, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_46, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_46, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_46, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_46, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_46, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_46, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_46, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_46, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_46, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_46, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_46, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_46, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_46, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_46_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_46_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_46_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_46_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_46_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_46_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_46_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_46_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_46_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_46_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_46_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_46), &style_screen_cfg_self_ddlist_46_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_46_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_46_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_46_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_46_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_46_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_46_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_46_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_46_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_46_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_46_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_46_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_46_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_46_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_46_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_46_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_46), &style_screen_cfg_self_ddlist_46_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_46_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_46_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_46_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_46_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_46_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_46_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_46_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_46), &style_screen_cfg_self_ddlist_46_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_sw_12
    ui->screen_cfg_self_sw_12 = lv_switch_create(ui->screen_cfg_self_cont_90);
    lv_obj_set_pos(ui->screen_cfg_self_sw_12, 1101, 3);
    lv_obj_set_size(ui->screen_cfg_self_sw_12, 77, 30);

    //Write style for screen_cfg_self_sw_12, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_12, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_12, lv_color_hex(0xe6e2e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_12, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_sw_12, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_sw_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_sw_12, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_12, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_12, lv_color_hex(0x44D7B6), LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_12, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_12, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

    //Write style for screen_cfg_self_sw_12, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_12, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_12, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_12, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_12, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_sw_12, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_sw_12, Part: LV_PART_KNOB, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_12, 255, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_12, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_12, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_12, 0, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_cfg_self_sw_12, 10, LV_PART_KNOB|LV_STATE_FOCUSED);

    //Write codes screen_cfg_self_cont_91
    ui->screen_cfg_self_cont_91 = lv_obj_create(ui->screen_cfg_self_cont_80);
    lv_obj_set_pos(ui->screen_cfg_self_cont_91, 1, 641);
    lv_obj_set_size(ui->screen_cfg_self_cont_91, 1228, 43);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_self_cont_91, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_self_cont_91, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_self_cont_91, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_cont_91, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_cont_91, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_cont_91, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_cont_91, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_cont_91, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_cont_91, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_self_cont_91, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_cont_91, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_cont_91, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_cont_91, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_53
    ui->screen_cfg_self_ddlist_53 = lv_dropdown_create(ui->screen_cfg_self_cont_91);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_53, 11, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_53, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_53, "温度\n湿度\nVOC\n可燃\n氧气\n烟雾\n氢气\n电流\n功率");

    //Write style for screen_cfg_self_ddlist_53, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_53, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_53, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_53, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_53, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_53, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_53, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_53, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_53, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_53, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_53, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_53, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_53, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_53, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_53, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_53, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_53_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_53_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_53_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_53_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_53_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_53_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_53_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_53_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_53_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_53_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_53_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_53), &style_screen_cfg_self_ddlist_53_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_53_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_53_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_53_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_53_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_53_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_53_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_53_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_53_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_53_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_53_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_53_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_53_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_53_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_53_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_53_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_53), &style_screen_cfg_self_ddlist_53_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_53_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_53_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_53_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_53_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_53_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_53_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_53_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_53), &style_screen_cfg_self_ddlist_53_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_52
    ui->screen_cfg_self_ddlist_52 = lv_dropdown_create(ui->screen_cfg_self_cont_91);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_52, 148, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_52, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_52, "中安\n天空物联\n其它MODBUS\nAI");

    //Write style for screen_cfg_self_ddlist_52, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_52, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_52, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_52, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_52, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_52, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_52, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_52, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_52, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_52, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_52, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_52, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_52, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_52, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_52, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_52, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_52_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_52_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_52_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_52_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_52_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_52_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_52_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_52_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_52_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_52_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_52_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_52), &style_screen_cfg_self_ddlist_52_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_52_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_52_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_52_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_52_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_52_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_52_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_52_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_52_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_52_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_52_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_52_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_52_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_52_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_52_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_52_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_52), &style_screen_cfg_self_ddlist_52_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_52_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_52_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_52_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_52_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_52_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_52_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_52_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_52), &style_screen_cfg_self_ddlist_52_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_51
    ui->screen_cfg_self_ddlist_51 = lv_dropdown_create(ui->screen_cfg_self_cont_91);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_51, 283, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_51, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_51, "0X01\n0X02\n0X03\n0X04\n0X05\n0X06\n0X07\n0X08\n0X09\n0X0A\n0X0B\n0X0C\n0X0D\n0X0E\n0X0F\n0X10\n0X11\n0X12\n0X13\n0X14\n0X15\n0X16\n0X17\n0X18\n0X19\n0X1A\n0X1B\n0X1C\n0X1D\n0X1E\n0X1F\n0X20");

    //Write style for screen_cfg_self_ddlist_51, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_51, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_51, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_51, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_51, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_51, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_51, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_51, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_51, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_51, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_51, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_51, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_51, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_51, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_51, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_51, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_51_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_51_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_51_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_51_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_51_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_51_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_51_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_51_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_51_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_51_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_51_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_51), &style_screen_cfg_self_ddlist_51_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_51_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_51_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_51_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_51_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_51_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_51_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_51_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_51_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_51_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_51_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_51_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_51_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_51_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_51_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_51_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_51), &style_screen_cfg_self_ddlist_51_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_51_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_51_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_51_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_51_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_51_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_51_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_51_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_51), &style_screen_cfg_self_ddlist_51_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_53
    ui->screen_cfg_self_ta_53 = lv_textarea_create(ui->screen_cfg_self_cont_91);
    lv_obj_set_pos(ui->screen_cfg_self_ta_53, 424, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_53, 108, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_53, "0X0000");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_53, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_53, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_53, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_53, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_53, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_53, 6);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_53, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_53, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_53, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_53, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_53, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_53, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_53, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_53, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_53, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_53, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_53, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_53, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_53, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_53, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_53, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_53, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_53, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_53, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_53, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_53, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_53, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_53, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_53, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_53, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_52
    ui->screen_cfg_self_ta_52 = lv_textarea_create(ui->screen_cfg_self_cont_91);
    lv_obj_set_pos(ui->screen_cfg_self_ta_52, 595, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_52, 108, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_52, "0X02");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_52, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_52, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_52, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_52, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_52, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_52, 4);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_52, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_52, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_52, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_52, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_52, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_52, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_52, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_52, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_52, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_52, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_52, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_52, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_52, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_52, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_52, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_52, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_52, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_52, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_52, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_52, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_52, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_52, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_52, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_52, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_51
    ui->screen_cfg_self_ta_51 = lv_textarea_create(ui->screen_cfg_self_cont_91);
    lv_obj_set_pos(ui->screen_cfg_self_ta_51, 773, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_51, 36, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_51, "K");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_51, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_51, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_51, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_51, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_51, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_51, 4);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_51, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_51, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_51, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_51, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_51, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_51, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_51, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_51, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_51, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_51, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_51, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_51, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_51, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_51, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_51, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_51, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_51, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_51, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_51, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_51, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_51, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_51, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_51, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_51, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_50
    ui->screen_cfg_self_ta_50 = lv_textarea_create(ui->screen_cfg_self_cont_91);
    lv_obj_set_pos(ui->screen_cfg_self_ta_50, 835, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_50, 36, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_50, "B");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_50, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_50, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_50, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_50, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_50, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_50, 4);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_50, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_50, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_50, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_50, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_50, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_50, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_50, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_50, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_50, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_50, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_50, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_50, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_50, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_50, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_50, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_50, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_50, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_50, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_50, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_50, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_50, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_50, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_50, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_50
    ui->screen_cfg_self_ddlist_50 = lv_dropdown_create(ui->screen_cfg_self_cont_91);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_50, 932, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_50, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_50, "0X01\n0X02\n0X03\n0X04");

    //Write style for screen_cfg_self_ddlist_50, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_50, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_50, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_50, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_50, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_50, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_50, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_50, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_50, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_50, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_50, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_50, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_50, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_50, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_50, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_50_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_50_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_50_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_50_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_50_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_50_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_50_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_50_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_50_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_50_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_50_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_50), &style_screen_cfg_self_ddlist_50_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_50_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_50_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_50_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_50_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_50_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_50_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_50_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_50_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_50_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_50_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_50_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_50_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_50_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_50_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_50_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_50), &style_screen_cfg_self_ddlist_50_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_50_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_50_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_50_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_50_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_50_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_50_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_50_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_50), &style_screen_cfg_self_ddlist_50_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_sw_13
    ui->screen_cfg_self_sw_13 = lv_switch_create(ui->screen_cfg_self_cont_91);
    lv_obj_set_pos(ui->screen_cfg_self_sw_13, 1101, 3);
    lv_obj_set_size(ui->screen_cfg_self_sw_13, 77, 30);

    //Write style for screen_cfg_self_sw_13, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_13, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_13, lv_color_hex(0xe6e2e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_13, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_sw_13, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_sw_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_sw_13, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_13, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_13, lv_color_hex(0x44D7B6), LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_13, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_13, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

    //Write style for screen_cfg_self_sw_13, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_13, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_13, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_13, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_13, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_sw_13, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_sw_13, Part: LV_PART_KNOB, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_13, 255, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_13, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_13, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_13, 0, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_cfg_self_sw_13, 10, LV_PART_KNOB|LV_STATE_FOCUSED);

    //Write codes screen_cfg_self_cont_92
    ui->screen_cfg_self_cont_92 = lv_obj_create(ui->screen_cfg_self_cont_80);
    lv_obj_set_pos(ui->screen_cfg_self_cont_92, 1, 692);
    lv_obj_set_size(ui->screen_cfg_self_cont_92, 1228, 43);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_self_cont_92, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_self_cont_92, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_self_cont_92, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_cont_92, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_cont_92, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_cont_92, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_cont_92, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_cont_92, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_cont_92, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_self_cont_92, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_cont_92, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_cont_92, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_cont_92, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_57
    ui->screen_cfg_self_ddlist_57 = lv_dropdown_create(ui->screen_cfg_self_cont_92);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_57, 11, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_57, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_57, "温度\n湿度\nVOC\n可燃\n氧气\n烟雾\n氢气\n电流\n功率");

    //Write style for screen_cfg_self_ddlist_57, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_57, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_57, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_57, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_57, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_57, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_57, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_57, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_57, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_57, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_57, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_57, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_57, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_57, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_57, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_57, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_57_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_57_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_57_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_57_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_57_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_57_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_57_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_57_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_57_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_57_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_57_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_57), &style_screen_cfg_self_ddlist_57_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_57_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_57_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_57_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_57_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_57_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_57_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_57_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_57_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_57_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_57_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_57_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_57_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_57_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_57_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_57_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_57), &style_screen_cfg_self_ddlist_57_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_57_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_57_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_57_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_57_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_57_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_57_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_57_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_57), &style_screen_cfg_self_ddlist_57_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_56
    ui->screen_cfg_self_ddlist_56 = lv_dropdown_create(ui->screen_cfg_self_cont_92);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_56, 148, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_56, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_56, "中安\n天空物联\n其它MODBUS\nAI");

    //Write style for screen_cfg_self_ddlist_56, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_56, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_56, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_56, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_56, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_56, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_56, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_56, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_56, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_56, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_56, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_56, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_56, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_56, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_56, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_56, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_56_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_56_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_56_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_56_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_56_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_56_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_56_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_56_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_56_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_56_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_56_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_56), &style_screen_cfg_self_ddlist_56_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_56_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_56_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_56_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_56_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_56_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_56_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_56_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_56_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_56_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_56_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_56_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_56_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_56_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_56_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_56_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_56), &style_screen_cfg_self_ddlist_56_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_56_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_56_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_56_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_56_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_56_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_56_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_56_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_56), &style_screen_cfg_self_ddlist_56_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_55
    ui->screen_cfg_self_ddlist_55 = lv_dropdown_create(ui->screen_cfg_self_cont_92);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_55, 283, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_55, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_55, "0X01\n0X02\n0X03\n0X04\n0X05\n0X06\n0X07\n0X08\n0X09\n0X0A\n0X0B\n0X0C\n0X0D\n0X0E\n0X0F\n0X10\n0X11\n0X12\n0X13\n0X14\n0X15\n0X16\n0X17\n0X18\n0X19\n0X1A\n0X1B\n0X1C\n0X1D\n0X1E\n0X1F\n0X20");

    //Write style for screen_cfg_self_ddlist_55, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_55, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_55, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_55, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_55, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_55, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_55, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_55, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_55, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_55, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_55, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_55, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_55, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_55, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_55, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_55, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_55_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_55_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_55_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_55_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_55_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_55_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_55_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_55_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_55_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_55_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_55_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_55), &style_screen_cfg_self_ddlist_55_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_55_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_55_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_55_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_55_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_55_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_55_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_55_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_55_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_55_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_55_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_55_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_55_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_55_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_55_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_55_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_55), &style_screen_cfg_self_ddlist_55_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_55_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_55_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_55_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_55_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_55_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_55_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_55_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_55), &style_screen_cfg_self_ddlist_55_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_57
    ui->screen_cfg_self_ta_57 = lv_textarea_create(ui->screen_cfg_self_cont_92);
    lv_obj_set_pos(ui->screen_cfg_self_ta_57, 424, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_57, 108, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_57, "0X0000");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_57, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_57, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_57, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_57, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_57, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_57, 6);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_57, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_57, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_57, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_57, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_57, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_57, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_57, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_57, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_57, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_57, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_57, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_57, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_57, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_57, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_57, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_57, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_57, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_57, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_57, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_57, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_57, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_57, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_57, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_57, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_56
    ui->screen_cfg_self_ta_56 = lv_textarea_create(ui->screen_cfg_self_cont_92);
    lv_obj_set_pos(ui->screen_cfg_self_ta_56, 595, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_56, 108, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_56, "0X02");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_56, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_56, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_56, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_56, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_56, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_56, 4);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_56, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_56, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_56, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_56, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_56, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_56, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_56, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_56, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_56, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_56, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_56, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_56, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_56, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_56, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_56, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_56, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_56, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_56, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_56, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_56, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_56, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_56, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_56, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_56, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_55
    ui->screen_cfg_self_ta_55 = lv_textarea_create(ui->screen_cfg_self_cont_92);
    lv_obj_set_pos(ui->screen_cfg_self_ta_55, 773, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_55, 36, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_55, "K");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_55, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_55, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_55, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_55, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_55, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_55, 4);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_55, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_55, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_55, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_55, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_55, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_55, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_55, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_55, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_55, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_55, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_55, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_55, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_55, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_55, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_55, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_55, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_55, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_55, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_55, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_55, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_55, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_55, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_55, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_55, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_54
    ui->screen_cfg_self_ta_54 = lv_textarea_create(ui->screen_cfg_self_cont_92);
    lv_obj_set_pos(ui->screen_cfg_self_ta_54, 835, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_54, 36, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_54, "B");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_54, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_54, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_54, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_54, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_54, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_54, 4);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_54, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_54, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_54, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_54, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_54, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_54, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_54, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_54, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_54, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_54, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_54, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_54, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_54, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_54, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_54, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_54, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_54, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_54, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_54, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_54, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_54, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_54, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_54, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_54, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_54
    ui->screen_cfg_self_ddlist_54 = lv_dropdown_create(ui->screen_cfg_self_cont_92);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_54, 932, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_54, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_54, "0X01\n0X02\n0X03\n0X04");

    //Write style for screen_cfg_self_ddlist_54, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_54, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_54, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_54, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_54, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_54, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_54, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_54, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_54, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_54, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_54, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_54, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_54, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_54, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_54, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_54, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_54_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_54_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_54_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_54_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_54_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_54_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_54_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_54_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_54_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_54_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_54_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_54), &style_screen_cfg_self_ddlist_54_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_54_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_54_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_54_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_54_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_54_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_54_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_54_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_54_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_54_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_54_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_54_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_54_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_54_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_54_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_54_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_54), &style_screen_cfg_self_ddlist_54_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_54_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_54_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_54_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_54_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_54_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_54_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_54_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_54), &style_screen_cfg_self_ddlist_54_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_sw_14
    ui->screen_cfg_self_sw_14 = lv_switch_create(ui->screen_cfg_self_cont_92);
    lv_obj_set_pos(ui->screen_cfg_self_sw_14, 1101, 3);
    lv_obj_set_size(ui->screen_cfg_self_sw_14, 77, 30);

    //Write style for screen_cfg_self_sw_14, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_14, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_14, lv_color_hex(0xe6e2e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_14, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_sw_14, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_sw_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_sw_14, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_14, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_14, lv_color_hex(0x44D7B6), LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_14, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_14, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

    //Write style for screen_cfg_self_sw_14, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_14, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_14, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_14, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_14, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_sw_14, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_sw_14, Part: LV_PART_KNOB, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_14, 255, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_14, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_14, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_14, 0, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_cfg_self_sw_14, 10, LV_PART_KNOB|LV_STATE_FOCUSED);

    //Write codes screen_cfg_self_btn_6
    ui->screen_cfg_self_btn_6 = lv_button_create(ui->screen_cfg_self_cont_80);
    lv_obj_set_pos(ui->screen_cfg_self_btn_6, 1086, 33);
    lv_obj_set_size(ui->screen_cfg_self_btn_6, 101, 40);
    ui->screen_cfg_self_btn_6_label = lv_label_create(ui->screen_cfg_self_btn_6);
    lv_label_set_text(ui->screen_cfg_self_btn_6_label, "新增");
    lv_label_set_long_mode(ui->screen_cfg_self_btn_6_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_self_btn_6_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_self_btn_6, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_self_btn_6_label, LV_PCT(100));

    //Write style for screen_cfg_self_btn_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_btn_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_btn_6, lv_color_hex(0x3ECDAD), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_btn_6, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_btn_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_btn_6, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_btn_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_self_btn_6, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_btn_6, &lv_font_HarmonyOS_Sans_Medium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_btn_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_btn_6, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_btn_7
    ui->screen_cfg_self_btn_7 = lv_button_create(ui->screen_cfg_self_cont_80);
    lv_obj_set_pos(ui->screen_cfg_self_btn_7, 960, 33);
    lv_obj_set_size(ui->screen_cfg_self_btn_7, 101, 40);
    ui->screen_cfg_self_btn_7_label = lv_label_create(ui->screen_cfg_self_btn_7);
    lv_label_set_text(ui->screen_cfg_self_btn_7_label, "删除");
    lv_label_set_long_mode(ui->screen_cfg_self_btn_7_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_self_btn_7_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_self_btn_7, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_self_btn_7_label, LV_PCT(100));

    //Write style for screen_cfg_self_btn_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_btn_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_btn_7, lv_color_hex(0x3ECDAD), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_btn_7, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_btn_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_btn_7, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_btn_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_self_btn_7, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_btn_7, &lv_font_HarmonyOS_Sans_Medium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_btn_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_btn_7, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_cont_93
    ui->screen_cfg_self_cont_93 = lv_obj_create(ui->screen_cfg_self_cont_80);
    lv_obj_set_pos(ui->screen_cfg_self_cont_93, 1, 743);
    lv_obj_set_size(ui->screen_cfg_self_cont_93, 1228, 43);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_self_cont_93, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_self_cont_93, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_self_cont_93, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_cont_93, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_cont_93, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_cont_93, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_cont_93, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_cont_93, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_cont_93, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_self_cont_93, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_cont_93, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_cont_93, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_cont_93, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_61
    ui->screen_cfg_self_ddlist_61 = lv_dropdown_create(ui->screen_cfg_self_cont_93);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_61, 11, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_61, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_61, "温度\n湿度\nVOC\n可燃\n氧气\n烟雾\n氢气\n电流\n功率");

    //Write style for screen_cfg_self_ddlist_61, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_61, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_61, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_61, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_61, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_61, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_61, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_61, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_61, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_61, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_61, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_61, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_61, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_61, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_61, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_61, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_61_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_61_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_61_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_61_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_61_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_61_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_61_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_61_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_61_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_61_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_61_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_61), &style_screen_cfg_self_ddlist_61_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_61_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_61_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_61_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_61_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_61_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_61_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_61_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_61_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_61_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_61_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_61_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_61_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_61_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_61_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_61_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_61), &style_screen_cfg_self_ddlist_61_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_61_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_61_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_61_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_61_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_61_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_61_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_61_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_61), &style_screen_cfg_self_ddlist_61_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_60
    ui->screen_cfg_self_ddlist_60 = lv_dropdown_create(ui->screen_cfg_self_cont_93);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_60, 148, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_60, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_60, "中安\n天空物联\n其它MODBUS\nAI");

    //Write style for screen_cfg_self_ddlist_60, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_60, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_60, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_60, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_60, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_60, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_60, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_60, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_60, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_60, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_60, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_60, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_60, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_60, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_60, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_60_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_60_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_60_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_60_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_60_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_60_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_60_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_60_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_60_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_60_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_60_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_60), &style_screen_cfg_self_ddlist_60_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_60_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_60_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_60_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_60_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_60_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_60_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_60_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_60_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_60_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_60_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_60_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_60_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_60_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_60_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_60_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_60), &style_screen_cfg_self_ddlist_60_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_60_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_60_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_60_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_60_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_60_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_60_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_60_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_60), &style_screen_cfg_self_ddlist_60_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_59
    ui->screen_cfg_self_ddlist_59 = lv_dropdown_create(ui->screen_cfg_self_cont_93);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_59, 283, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_59, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_59, "0X01\n0X02\n0X03\n0X04\n0X05\n0X06\n0X07\n0X08\n0X09\n0X0A\n0X0B\n0X0C\n0X0D\n0X0E\n0X0F\n0X10\n0X11\n0X12\n0X13\n0X14\n0X15\n0X16\n0X17\n0X18\n0X19\n0X1A\n0X1B\n0X1C\n0X1D\n0X1E\n0X1F\n0X20");

    //Write style for screen_cfg_self_ddlist_59, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_59, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_59, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_59, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_59, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_59, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_59, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_59, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_59, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_59, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_59, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_59, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_59, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_59, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_59, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_59_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_59_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_59_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_59_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_59_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_59_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_59_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_59_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_59_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_59_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_59_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_59), &style_screen_cfg_self_ddlist_59_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_59_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_59_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_59_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_59_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_59_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_59_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_59_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_59_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_59_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_59_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_59_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_59_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_59_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_59_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_59_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_59), &style_screen_cfg_self_ddlist_59_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_59_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_59_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_59_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_59_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_59_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_59_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_59_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_59), &style_screen_cfg_self_ddlist_59_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_61
    ui->screen_cfg_self_ta_61 = lv_textarea_create(ui->screen_cfg_self_cont_93);
    lv_obj_set_pos(ui->screen_cfg_self_ta_61, 424, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_61, 108, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_61, "0X0000");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_61, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_61, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_61, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_61, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_61, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_61, 6);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_61, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_61, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_61, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_61, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_61, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_61, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_61, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_61, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_61, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_61, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_61, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_61, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_61, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_61, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_61, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_61, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_61, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_61, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_61, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_61, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_61, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_61, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_61, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_61, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_60
    ui->screen_cfg_self_ta_60 = lv_textarea_create(ui->screen_cfg_self_cont_93);
    lv_obj_set_pos(ui->screen_cfg_self_ta_60, 595, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_60, 108, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_60, "0X02");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_60, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_60, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_60, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_60, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_60, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_60, 4);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_60, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_60, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_60, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_60, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_60, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_60, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_60, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_60, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_60, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_60, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_60, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_60, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_60, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_60, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_60, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_60, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_60, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_60, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_60, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_60, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_60, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_60, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_60, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_59
    ui->screen_cfg_self_ta_59 = lv_textarea_create(ui->screen_cfg_self_cont_93);
    lv_obj_set_pos(ui->screen_cfg_self_ta_59, 773, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_59, 36, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_59, "K");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_59, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_59, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_59, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_59, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_59, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_59, 4);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_59, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_59, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_59, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_59, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_59, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_59, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_59, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_59, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_59, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_59, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_59, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_59, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_59, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_59, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_59, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_59, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_59, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_59, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_59, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_59, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_59, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_59, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_59, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_58
    ui->screen_cfg_self_ta_58 = lv_textarea_create(ui->screen_cfg_self_cont_93);
    lv_obj_set_pos(ui->screen_cfg_self_ta_58, 835, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_58, 36, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_58, "B");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_58, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_58, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_58, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_58, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_58, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_58, 4);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_58, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_58, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_58, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_58, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_58, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_58, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_58, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_58, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_58, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_58, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_58, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_58, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_58, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_58, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_58, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_58, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_58, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_58, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_58, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_58, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_58, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_58, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_58, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_58, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_58
    ui->screen_cfg_self_ddlist_58 = lv_dropdown_create(ui->screen_cfg_self_cont_93);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_58, 932, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_58, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_58, "0X01\n0X02\n0X03\n0X04");

    //Write style for screen_cfg_self_ddlist_58, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_58, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_58, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_58, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_58, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_58, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_58, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_58, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_58, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_58, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_58, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_58, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_58, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_58, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_58, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_58, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_58_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_58_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_58_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_58_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_58_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_58_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_58_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_58_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_58_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_58_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_58_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_58), &style_screen_cfg_self_ddlist_58_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_58_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_58_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_58_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_58_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_58_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_58_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_58_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_58_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_58_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_58_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_58_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_58_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_58_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_58_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_58_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_58), &style_screen_cfg_self_ddlist_58_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_58_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_58_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_58_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_58_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_58_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_58_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_58_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_58), &style_screen_cfg_self_ddlist_58_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_sw_15
    ui->screen_cfg_self_sw_15 = lv_switch_create(ui->screen_cfg_self_cont_93);
    lv_obj_set_pos(ui->screen_cfg_self_sw_15, 1101, 3);
    lv_obj_set_size(ui->screen_cfg_self_sw_15, 77, 30);

    //Write style for screen_cfg_self_sw_15, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_15, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_15, lv_color_hex(0xe6e2e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_15, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_sw_15, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_sw_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_sw_15, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_15, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_15, lv_color_hex(0x44D7B6), LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_15, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_15, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

    //Write style for screen_cfg_self_sw_15, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_15, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_15, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_15, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_15, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_sw_15, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_sw_15, Part: LV_PART_KNOB, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_15, 255, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_15, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_15, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_15, 0, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_cfg_self_sw_15, 10, LV_PART_KNOB|LV_STATE_FOCUSED);

    //Write codes screen_cfg_self_cont_94
    ui->screen_cfg_self_cont_94 = lv_obj_create(ui->screen_cfg_self_cont_80);
    lv_obj_set_pos(ui->screen_cfg_self_cont_94, 1, 794);
    lv_obj_set_size(ui->screen_cfg_self_cont_94, 1228, 43);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_self_cont_94, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_self_cont_94, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_self_cont_94, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_cont_94, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_cont_94, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_cont_94, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_cont_94, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_cont_94, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_cont_94, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_self_cont_94, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_cont_94, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_cont_94, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_cont_94, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_65
    ui->screen_cfg_self_ddlist_65 = lv_dropdown_create(ui->screen_cfg_self_cont_94);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_65, 11, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_65, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_65, "温度\n湿度\nVOC\n可燃\n氧气\n烟雾\n氢气\n电流\n功率");

    //Write style for screen_cfg_self_ddlist_65, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_65, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_65, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_65, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_65, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_65, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_65, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_65, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_65, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_65, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_65, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_65, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_65, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_65, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_65, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_65, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_65_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_65_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_65_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_65_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_65_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_65_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_65_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_65_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_65_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_65_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_65_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_65), &style_screen_cfg_self_ddlist_65_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_65_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_65_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_65_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_65_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_65_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_65_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_65_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_65_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_65_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_65_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_65_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_65_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_65_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_65_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_65_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_65), &style_screen_cfg_self_ddlist_65_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_65_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_65_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_65_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_65_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_65_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_65_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_65_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_65), &style_screen_cfg_self_ddlist_65_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_64
    ui->screen_cfg_self_ddlist_64 = lv_dropdown_create(ui->screen_cfg_self_cont_94);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_64, 148, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_64, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_64, "中安\n天空物联\n其它MODBUS\nAI");

    //Write style for screen_cfg_self_ddlist_64, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_64, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_64, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_64, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_64, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_64, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_64, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_64, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_64, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_64, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_64, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_64, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_64, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_64, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_64, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_64, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_64_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_64_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_64_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_64_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_64_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_64_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_64_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_64_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_64_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_64_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_64_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_64), &style_screen_cfg_self_ddlist_64_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_64_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_64_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_64_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_64_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_64_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_64_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_64_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_64_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_64_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_64_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_64_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_64_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_64_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_64_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_64_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_64), &style_screen_cfg_self_ddlist_64_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_64_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_64_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_64_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_64_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_64_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_64_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_64_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_64), &style_screen_cfg_self_ddlist_64_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_63
    ui->screen_cfg_self_ddlist_63 = lv_dropdown_create(ui->screen_cfg_self_cont_94);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_63, 283, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_63, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_63, "0X01\n0X02\n0X03\n0X04\n0X05\n0X06\n0X07\n0X08\n0X09\n0X0A\n0X0B\n0X0C\n0X0D\n0X0E\n0X0F\n0X10\n0X11\n0X12\n0X13\n0X14\n0X15\n0X16\n0X17\n0X18\n0X19\n0X1A\n0X1B\n0X1C\n0X1D\n0X1E\n0X1F\n0X20");

    //Write style for screen_cfg_self_ddlist_63, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_63, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_63, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_63, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_63, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_63, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_63, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_63, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_63, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_63, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_63, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_63, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_63, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_63, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_63, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_63, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_63_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_63_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_63_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_63_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_63_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_63_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_63_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_63_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_63_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_63_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_63_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_63), &style_screen_cfg_self_ddlist_63_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_63_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_63_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_63_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_63_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_63_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_63_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_63_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_63_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_63_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_63_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_63_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_63_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_63_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_63_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_63_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_63), &style_screen_cfg_self_ddlist_63_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_63_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_63_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_63_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_63_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_63_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_63_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_63_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_63), &style_screen_cfg_self_ddlist_63_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_65
    ui->screen_cfg_self_ta_65 = lv_textarea_create(ui->screen_cfg_self_cont_94);
    lv_obj_set_pos(ui->screen_cfg_self_ta_65, 424, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_65, 108, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_65, "0X0000");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_65, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_65, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_65, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_65, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_65, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_65, 6);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_65, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_65, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_65, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_65, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_65, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_65, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_65, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_65, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_65, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_65, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_65, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_65, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_65, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_65, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_65, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_65, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_65, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_65, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_65, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_65, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_65, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_65, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_65, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_65, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_64
    ui->screen_cfg_self_ta_64 = lv_textarea_create(ui->screen_cfg_self_cont_94);
    lv_obj_set_pos(ui->screen_cfg_self_ta_64, 595, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_64, 108, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_64, "0X02");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_64, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_64, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_64, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_64, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_64, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_64, 4);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_64, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_64, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_64, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_64, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_64, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_64, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_64, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_64, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_64, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_64, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_64, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_64, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_64, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_64, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_64, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_64, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_64, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_64, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_64, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_64, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_64, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_64, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_64, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_64, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_63
    ui->screen_cfg_self_ta_63 = lv_textarea_create(ui->screen_cfg_self_cont_94);
    lv_obj_set_pos(ui->screen_cfg_self_ta_63, 773, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_63, 36, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_63, "K");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_63, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_63, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_63, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_63, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_63, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_63, 4);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_63, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_63, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_63, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_63, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_63, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_63, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_63, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_63, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_63, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_63, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_63, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_63, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_63, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_63, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_63, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_63, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_63, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_63, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_63, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_63, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_63, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_63, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_63, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_63, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_62
    ui->screen_cfg_self_ta_62 = lv_textarea_create(ui->screen_cfg_self_cont_94);
    lv_obj_set_pos(ui->screen_cfg_self_ta_62, 835, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_62, 36, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_62, "B");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_62, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_62, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_62, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_62, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_62, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_62, 4);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_62, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_62, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_62, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_62, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_62, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_62, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_62, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_62, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_62, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_62, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_62, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_62, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_62, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_62, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_62, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_62, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_62, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_62, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_62, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_62, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_62, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_62, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_62, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_62, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_62
    ui->screen_cfg_self_ddlist_62 = lv_dropdown_create(ui->screen_cfg_self_cont_94);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_62, 932, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_62, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_62, "0X01\n0X02\n0X03\n0X04");

    //Write style for screen_cfg_self_ddlist_62, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_62, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_62, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_62, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_62, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_62, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_62, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_62, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_62, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_62, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_62, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_62, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_62, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_62, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_62, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_62, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_62_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_62_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_62_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_62_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_62_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_62_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_62_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_62_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_62_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_62_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_62_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_62), &style_screen_cfg_self_ddlist_62_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_62_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_62_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_62_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_62_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_62_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_62_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_62_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_62_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_62_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_62_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_62_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_62_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_62_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_62_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_62_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_62), &style_screen_cfg_self_ddlist_62_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_62_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_62_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_62_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_62_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_62_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_62_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_62_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_62), &style_screen_cfg_self_ddlist_62_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_sw_16
    ui->screen_cfg_self_sw_16 = lv_switch_create(ui->screen_cfg_self_cont_94);
    lv_obj_set_pos(ui->screen_cfg_self_sw_16, 1101, 3);
    lv_obj_set_size(ui->screen_cfg_self_sw_16, 77, 30);

    //Write style for screen_cfg_self_sw_16, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_16, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_16, lv_color_hex(0xe6e2e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_16, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_sw_16, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_sw_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_sw_16, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_16, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_16, lv_color_hex(0x44D7B6), LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_16, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_16, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

    //Write style for screen_cfg_self_sw_16, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_16, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_16, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_16, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_16, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_sw_16, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_sw_16, Part: LV_PART_KNOB, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_16, 255, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_16, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_16, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_16, 0, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_cfg_self_sw_16, 10, LV_PART_KNOB|LV_STATE_FOCUSED);

    //Write codes screen_cfg_self_cont_95
    ui->screen_cfg_self_cont_95 = lv_obj_create(ui->screen_cfg_self_cont_80);
    lv_obj_set_pos(ui->screen_cfg_self_cont_95, 1, 845);
    lv_obj_set_size(ui->screen_cfg_self_cont_95, 1228, 43);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_self_cont_95, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_self_cont_95, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_self_cont_95, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_cont_95, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_cont_95, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_cont_95, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_cont_95, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_cont_95, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_cont_95, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_self_cont_95, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_cont_95, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_cont_95, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_cont_95, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_69
    ui->screen_cfg_self_ddlist_69 = lv_dropdown_create(ui->screen_cfg_self_cont_95);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_69, 11, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_69, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_69, "温度\n湿度\nVOC\n可燃\n氧气\n烟雾\n氢气\n电流\n功率");

    //Write style for screen_cfg_self_ddlist_69, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_69, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_69, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_69, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_69, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_69, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_69, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_69, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_69, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_69, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_69, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_69, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_69, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_69, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_69, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_69, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_69_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_69_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_69_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_69_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_69_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_69_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_69_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_69_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_69_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_69_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_69_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_69), &style_screen_cfg_self_ddlist_69_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_69_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_69_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_69_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_69_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_69_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_69_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_69_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_69_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_69_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_69_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_69_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_69_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_69_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_69_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_69_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_69), &style_screen_cfg_self_ddlist_69_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_69_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_69_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_69_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_69_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_69_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_69_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_69_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_69), &style_screen_cfg_self_ddlist_69_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_68
    ui->screen_cfg_self_ddlist_68 = lv_dropdown_create(ui->screen_cfg_self_cont_95);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_68, 148, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_68, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_68, "中安\n天空物联\n其它MODBUS\nAI");

    //Write style for screen_cfg_self_ddlist_68, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_68, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_68, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_68, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_68, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_68, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_68, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_68, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_68, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_68, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_68, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_68, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_68, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_68, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_68, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_68_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_68_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_68_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_68_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_68_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_68_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_68_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_68_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_68_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_68_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_68_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_68), &style_screen_cfg_self_ddlist_68_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_68_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_68_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_68_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_68_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_68_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_68_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_68_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_68_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_68_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_68_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_68_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_68_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_68_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_68_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_68_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_68), &style_screen_cfg_self_ddlist_68_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_68_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_68_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_68_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_68_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_68_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_68_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_68_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_68), &style_screen_cfg_self_ddlist_68_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_67
    ui->screen_cfg_self_ddlist_67 = lv_dropdown_create(ui->screen_cfg_self_cont_95);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_67, 283, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_67, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_67, "0X01\n0X02\n0X03\n0X04\n0X05\n0X06\n0X07\n0X08\n0X09\n0X0A\n0X0B\n0X0C\n0X0D\n0X0E\n0X0F\n0X10\n0X11\n0X12\n0X13\n0X14\n0X15\n0X16\n0X17\n0X18\n0X19\n0X1A\n0X1B\n0X1C\n0X1D\n0X1E\n0X1F\n0X20");

    //Write style for screen_cfg_self_ddlist_67, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_67, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_67, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_67, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_67, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_67, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_67, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_67, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_67, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_67, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_67, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_67, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_67, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_67, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_67, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_67, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_67_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_67_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_67_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_67_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_67_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_67_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_67_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_67_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_67_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_67_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_67_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_67), &style_screen_cfg_self_ddlist_67_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_67_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_67_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_67_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_67_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_67_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_67_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_67_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_67_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_67_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_67_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_67_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_67_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_67_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_67_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_67_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_67), &style_screen_cfg_self_ddlist_67_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_67_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_67_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_67_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_67_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_67_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_67_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_67_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_67), &style_screen_cfg_self_ddlist_67_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_69
    ui->screen_cfg_self_ta_69 = lv_textarea_create(ui->screen_cfg_self_cont_95);
    lv_obj_set_pos(ui->screen_cfg_self_ta_69, 424, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_69, 108, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_69, "0X0000");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_69, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_69, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_69, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_69, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_69, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_69, 6);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_69, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_69, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_69, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_69, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_69, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_69, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_69, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_69, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_69, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_69, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_69, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_69, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_69, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_69, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_69, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_69, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_69, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_69, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_69, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_69, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_69, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_69, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_69, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_69, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_68
    ui->screen_cfg_self_ta_68 = lv_textarea_create(ui->screen_cfg_self_cont_95);
    lv_obj_set_pos(ui->screen_cfg_self_ta_68, 595, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_68, 108, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_68, "0X02");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_68, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_68, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_68, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_68, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_68, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_68, 4);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_68, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_68, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_68, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_68, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_68, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_68, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_68, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_68, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_68, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_68, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_68, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_68, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_68, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_68, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_68, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_68, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_68, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_68, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_68, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_68, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_68, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_68, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_68, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_67
    ui->screen_cfg_self_ta_67 = lv_textarea_create(ui->screen_cfg_self_cont_95);
    lv_obj_set_pos(ui->screen_cfg_self_ta_67, 773, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_67, 36, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_67, "K");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_67, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_67, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_67, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_67, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_67, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_67, 4);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_67, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_67, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_67, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_67, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_67, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_67, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_67, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_67, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_67, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_67, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_67, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_67, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_67, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_67, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_67, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_67, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_67, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_67, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_67, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_67, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_67, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_67, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_67, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_67, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_66
    ui->screen_cfg_self_ta_66 = lv_textarea_create(ui->screen_cfg_self_cont_95);
    lv_obj_set_pos(ui->screen_cfg_self_ta_66, 835, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_66, 36, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_66, "B");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_66, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_66, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_66, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_66, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_66, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_66, 4);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_66, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_66, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_66, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_66, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_66, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_66, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_66, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_66, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_66, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_66, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_66, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_66, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_66, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_66, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_66, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_66, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_66, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_66, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_66, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_66, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_66, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_66, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_66, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_66, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_66
    ui->screen_cfg_self_ddlist_66 = lv_dropdown_create(ui->screen_cfg_self_cont_95);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_66, 932, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_66, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_66, "0X01\n0X02\n0X03\n0X04");

    //Write style for screen_cfg_self_ddlist_66, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_66, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_66, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_66, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_66, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_66, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_66, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_66, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_66, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_66, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_66, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_66, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_66, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_66, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_66, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_66, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_66_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_66_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_66_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_66_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_66_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_66_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_66_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_66_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_66_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_66_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_66_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_66), &style_screen_cfg_self_ddlist_66_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_66_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_66_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_66_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_66_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_66_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_66_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_66_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_66_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_66_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_66_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_66_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_66_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_66_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_66_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_66_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_66), &style_screen_cfg_self_ddlist_66_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_66_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_66_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_66_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_66_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_66_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_66_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_66_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_66), &style_screen_cfg_self_ddlist_66_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_sw_17
    ui->screen_cfg_self_sw_17 = lv_switch_create(ui->screen_cfg_self_cont_95);
    lv_obj_set_pos(ui->screen_cfg_self_sw_17, 1101, 3);
    lv_obj_set_size(ui->screen_cfg_self_sw_17, 77, 30);

    //Write style for screen_cfg_self_sw_17, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_17, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_17, lv_color_hex(0xe6e2e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_17, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_sw_17, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_sw_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_sw_17, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_17, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_17, lv_color_hex(0x44D7B6), LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_17, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_17, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

    //Write style for screen_cfg_self_sw_17, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_17, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_17, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_17, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_17, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_sw_17, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_sw_17, Part: LV_PART_KNOB, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_17, 255, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_17, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_17, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_17, 0, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_cfg_self_sw_17, 10, LV_PART_KNOB|LV_STATE_FOCUSED);

    //Write codes screen_cfg_self_cont_96
    ui->screen_cfg_self_cont_96 = lv_obj_create(ui->screen_cfg_self_cont_80);
    lv_obj_set_pos(ui->screen_cfg_self_cont_96, 1, 896);
    lv_obj_set_size(ui->screen_cfg_self_cont_96, 1228, 43);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_self_cont_96, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_self_cont_96, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_self_cont_96, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_cont_96, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_cont_96, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_cont_96, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_cont_96, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_cont_96, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_cont_96, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_self_cont_96, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_cont_96, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_cont_96, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_cont_96, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_73
    ui->screen_cfg_self_ddlist_73 = lv_dropdown_create(ui->screen_cfg_self_cont_96);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_73, 11, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_73, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_73, "温度\n湿度\nVOC\n可燃\n氧气\n烟雾\n氢气\n电流\n功率");

    //Write style for screen_cfg_self_ddlist_73, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_73, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_73, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_73, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_73, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_73, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_73, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_73, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_73, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_73, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_73, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_73, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_73, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_73, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_73, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_73, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_73_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_73_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_73_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_73_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_73_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_73_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_73_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_73_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_73_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_73_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_73_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_73), &style_screen_cfg_self_ddlist_73_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_73_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_73_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_73_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_73_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_73_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_73_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_73_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_73_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_73_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_73_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_73_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_73_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_73_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_73_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_73_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_73), &style_screen_cfg_self_ddlist_73_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_73_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_73_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_73_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_73_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_73_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_73_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_73_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_73), &style_screen_cfg_self_ddlist_73_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_72
    ui->screen_cfg_self_ddlist_72 = lv_dropdown_create(ui->screen_cfg_self_cont_96);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_72, 148, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_72, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_72, "中安\n天空物联\n其它MODBUS\nAI");

    //Write style for screen_cfg_self_ddlist_72, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_72, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_72, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_72, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_72, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_72, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_72, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_72, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_72, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_72, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_72, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_72, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_72, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_72, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_72, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_72, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_72_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_72_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_72_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_72_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_72_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_72_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_72_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_72_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_72_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_72_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_72_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_72), &style_screen_cfg_self_ddlist_72_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_72_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_72_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_72_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_72_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_72_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_72_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_72_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_72_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_72_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_72_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_72_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_72_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_72_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_72_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_72_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_72), &style_screen_cfg_self_ddlist_72_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_72_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_72_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_72_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_72_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_72_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_72_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_72_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_72), &style_screen_cfg_self_ddlist_72_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_71
    ui->screen_cfg_self_ddlist_71 = lv_dropdown_create(ui->screen_cfg_self_cont_96);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_71, 283, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_71, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_71, "0X01\n0X02\n0X03\n0X04\n0X05\n0X06\n0X07\n0X08\n0X09\n0X0A\n0X0B\n0X0C\n0X0D\n0X0E\n0X0F\n0X10\n0X11\n0X12\n0X13\n0X14\n0X15\n0X16\n0X17\n0X18\n0X19\n0X1A\n0X1B\n0X1C\n0X1D\n0X1E\n0X1F\n0X20");

    //Write style for screen_cfg_self_ddlist_71, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_71, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_71, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_71, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_71, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_71, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_71, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_71, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_71, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_71, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_71, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_71, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_71, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_71, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_71, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_71, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_71_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_71_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_71_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_71_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_71_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_71_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_71_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_71_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_71_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_71_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_71_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_71), &style_screen_cfg_self_ddlist_71_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_71_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_71_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_71_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_71_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_71_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_71_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_71_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_71_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_71_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_71_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_71_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_71_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_71_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_71_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_71_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_71), &style_screen_cfg_self_ddlist_71_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_71_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_71_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_71_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_71_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_71_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_71_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_71_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_71), &style_screen_cfg_self_ddlist_71_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_73
    ui->screen_cfg_self_ta_73 = lv_textarea_create(ui->screen_cfg_self_cont_96);
    lv_obj_set_pos(ui->screen_cfg_self_ta_73, 424, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_73, 108, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_73, "0X0000");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_73, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_73, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_73, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_73, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_73, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_73, 6);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_73, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_73, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_73, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_73, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_73, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_73, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_73, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_73, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_73, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_73, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_73, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_73, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_73, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_73, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_73, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_73, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_73, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_73, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_73, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_73, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_73, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_73, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_73, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_73, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_72
    ui->screen_cfg_self_ta_72 = lv_textarea_create(ui->screen_cfg_self_cont_96);
    lv_obj_set_pos(ui->screen_cfg_self_ta_72, 595, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_72, 108, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_72, "0X02");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_72, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_72, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_72, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_72, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_72, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_72, 4);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_72, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_72, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_72, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_72, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_72, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_72, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_72, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_72, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_72, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_72, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_72, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_72, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_72, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_72, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_72, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_72, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_72, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_72, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_72, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_72, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_72, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_72, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_72, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_72, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_71
    ui->screen_cfg_self_ta_71 = lv_textarea_create(ui->screen_cfg_self_cont_96);
    lv_obj_set_pos(ui->screen_cfg_self_ta_71, 773, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_71, 36, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_71, "K");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_71, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_71, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_71, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_71, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_71, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_71, 4);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_71, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_71, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_71, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_71, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_71, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_71, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_71, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_71, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_71, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_71, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_71, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_71, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_71, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_71, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_71, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_71, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_71, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_71, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_71, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_71, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_71, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_71, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_71, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_71, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_70
    ui->screen_cfg_self_ta_70 = lv_textarea_create(ui->screen_cfg_self_cont_96);
    lv_obj_set_pos(ui->screen_cfg_self_ta_70, 835, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_70, 36, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_70, "B");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_70, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_70, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_70, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_70, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_70, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_70, 4);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_70, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_70, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_70, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_70, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_70, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_70, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_70, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_70, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_70, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_70, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_70, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_70, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_70, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_70, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_70, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_70, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_70, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_70, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_70, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_70, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_70, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_70, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_70, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_70
    ui->screen_cfg_self_ddlist_70 = lv_dropdown_create(ui->screen_cfg_self_cont_96);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_70, 932, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_70, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_70, "0X01\n0X02\n0X03\n0X04");

    //Write style for screen_cfg_self_ddlist_70, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_70, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_70, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_70, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_70, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_70, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_70, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_70, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_70, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_70, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_70, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_70, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_70, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_70, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_70, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_70_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_70_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_70_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_70_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_70_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_70_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_70_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_70_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_70_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_70_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_70_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_70), &style_screen_cfg_self_ddlist_70_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_70_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_70_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_70_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_70_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_70_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_70_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_70_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_70_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_70_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_70_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_70_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_70_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_70_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_70_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_70_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_70), &style_screen_cfg_self_ddlist_70_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_70_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_70_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_70_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_70_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_70_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_70_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_70_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_70), &style_screen_cfg_self_ddlist_70_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_sw_18
    ui->screen_cfg_self_sw_18 = lv_switch_create(ui->screen_cfg_self_cont_96);
    lv_obj_set_pos(ui->screen_cfg_self_sw_18, 1101, 3);
    lv_obj_set_size(ui->screen_cfg_self_sw_18, 77, 30);

    //Write style for screen_cfg_self_sw_18, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_18, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_18, lv_color_hex(0xe6e2e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_18, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_sw_18, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_sw_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_sw_18, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_18, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_18, lv_color_hex(0x44D7B6), LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_18, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_18, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

    //Write style for screen_cfg_self_sw_18, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_18, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_18, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_18, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_18, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_sw_18, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_sw_18, Part: LV_PART_KNOB, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_18, 255, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_18, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_18, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_18, 0, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_cfg_self_sw_18, 10, LV_PART_KNOB|LV_STATE_FOCUSED);

    //Write codes screen_cfg_self_cont_97
    ui->screen_cfg_self_cont_97 = lv_obj_create(ui->screen_cfg_self_cont_80);
    lv_obj_set_pos(ui->screen_cfg_self_cont_97, 1, 947);
    lv_obj_set_size(ui->screen_cfg_self_cont_97, 1228, 43);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_self_cont_97, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_self_cont_97, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_self_cont_97, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_cont_97, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_cont_97, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_cont_97, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_cont_97, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_cont_97, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_cont_97, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_self_cont_97, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_cont_97, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_cont_97, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_cont_97, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_77
    ui->screen_cfg_self_ddlist_77 = lv_dropdown_create(ui->screen_cfg_self_cont_97);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_77, 11, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_77, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_77, "温度\n湿度\nVOC\n可燃\n氧气\n烟雾\n氢气\n电流\n功率");

    //Write style for screen_cfg_self_ddlist_77, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_77, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_77, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_77, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_77, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_77, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_77, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_77, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_77, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_77, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_77, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_77, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_77, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_77, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_77, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_77, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_77_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_77_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_77_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_77_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_77_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_77_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_77_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_77_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_77_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_77_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_77_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_77), &style_screen_cfg_self_ddlist_77_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_77_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_77_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_77_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_77_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_77_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_77_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_77_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_77_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_77_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_77_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_77_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_77_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_77_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_77_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_77_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_77), &style_screen_cfg_self_ddlist_77_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_77_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_77_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_77_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_77_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_77_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_77_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_77_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_77), &style_screen_cfg_self_ddlist_77_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_76
    ui->screen_cfg_self_ddlist_76 = lv_dropdown_create(ui->screen_cfg_self_cont_97);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_76, 148, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_76, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_76, "中安\n天空物联\n其它MODBUS\nAI");

    //Write style for screen_cfg_self_ddlist_76, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_76, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_76, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_76, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_76, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_76, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_76, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_76, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_76, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_76, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_76, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_76, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_76, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_76, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_76, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_76, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_76_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_76_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_76_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_76_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_76_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_76_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_76_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_76_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_76_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_76_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_76_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_76), &style_screen_cfg_self_ddlist_76_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_76_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_76_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_76_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_76_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_76_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_76_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_76_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_76_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_76_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_76_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_76_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_76_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_76_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_76_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_76_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_76), &style_screen_cfg_self_ddlist_76_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_76_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_76_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_76_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_76_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_76_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_76_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_76_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_76), &style_screen_cfg_self_ddlist_76_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_75
    ui->screen_cfg_self_ddlist_75 = lv_dropdown_create(ui->screen_cfg_self_cont_97);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_75, 283, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_75, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_75, "0X01\n0X02\n0X03\n0X04\n0X05\n0X06\n0X07\n0X08\n0X09\n0X0A\n0X0B\n0X0C\n0X0D\n0X0E\n0X0F\n0X10\n0X11\n0X12\n0X13\n0X14\n0X15\n0X16\n0X17\n0X18\n0X19\n0X1A\n0X1B\n0X1C\n0X1D\n0X1E\n0X1F\n0X20");

    //Write style for screen_cfg_self_ddlist_75, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_75, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_75, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_75, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_75, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_75, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_75, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_75, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_75, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_75, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_75, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_75, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_75, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_75, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_75, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_75, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_75_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_75_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_75_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_75_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_75_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_75_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_75_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_75_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_75_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_75_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_75_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_75), &style_screen_cfg_self_ddlist_75_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_75_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_75_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_75_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_75_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_75_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_75_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_75_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_75_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_75_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_75_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_75_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_75_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_75_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_75_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_75_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_75), &style_screen_cfg_self_ddlist_75_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_75_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_75_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_75_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_75_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_75_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_75_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_75_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_75), &style_screen_cfg_self_ddlist_75_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_77
    ui->screen_cfg_self_ta_77 = lv_textarea_create(ui->screen_cfg_self_cont_97);
    lv_obj_set_pos(ui->screen_cfg_self_ta_77, 424, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_77, 108, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_77, "0X0000");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_77, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_77, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_77, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_77, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_77, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_77, 6);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_77, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_77, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_77, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_77, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_77, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_77, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_77, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_77, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_77, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_77, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_77, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_77, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_77, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_77, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_77, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_77, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_77, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_77, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_77, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_77, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_77, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_77, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_77, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_77, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_76
    ui->screen_cfg_self_ta_76 = lv_textarea_create(ui->screen_cfg_self_cont_97);
    lv_obj_set_pos(ui->screen_cfg_self_ta_76, 595, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_76, 108, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_76, "0X02");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_76, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_76, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_76, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_76, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_76, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_76, 4);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_76, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_76, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_76, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_76, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_76, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_76, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_76, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_76, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_76, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_76, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_76, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_76, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_76, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_76, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_76, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_76, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_76, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_76, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_76, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_76, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_76, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_76, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_76, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_76, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_75
    ui->screen_cfg_self_ta_75 = lv_textarea_create(ui->screen_cfg_self_cont_97);
    lv_obj_set_pos(ui->screen_cfg_self_ta_75, 773, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_75, 36, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_75, "K");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_75, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_75, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_75, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_75, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_75, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_75, 4);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_75, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_75, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_75, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_75, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_75, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_75, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_75, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_75, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_75, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_75, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_75, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_75, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_75, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_75, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_75, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_75, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_75, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_75, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_75, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_75, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_75, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_75, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_75, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_75, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_74
    ui->screen_cfg_self_ta_74 = lv_textarea_create(ui->screen_cfg_self_cont_97);
    lv_obj_set_pos(ui->screen_cfg_self_ta_74, 835, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_74, 36, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_74, "B");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_74, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_74, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_74, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_74, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_74, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_74, 4);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_74, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_74, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_74, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_74, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_74, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_74, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_74, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_74, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_74, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_74, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_74, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_74, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_74, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_74, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_74, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_74, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_74, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_74, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_74, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_74, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_74, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_74, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_74, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_74, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_74
    ui->screen_cfg_self_ddlist_74 = lv_dropdown_create(ui->screen_cfg_self_cont_97);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_74, 932, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_74, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_74, "0X01\n0X02\n0X03\n0X04");

    //Write style for screen_cfg_self_ddlist_74, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_74, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_74, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_74, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_74, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_74, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_74, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_74, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_74, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_74, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_74, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_74, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_74, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_74, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_74, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_74, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_74_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_74_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_74_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_74_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_74_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_74_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_74_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_74_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_74_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_74_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_74_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_74), &style_screen_cfg_self_ddlist_74_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_74_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_74_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_74_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_74_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_74_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_74_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_74_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_74_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_74_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_74_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_74_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_74_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_74_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_74_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_74_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_74), &style_screen_cfg_self_ddlist_74_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_74_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_74_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_74_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_74_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_74_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_74_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_74_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_74), &style_screen_cfg_self_ddlist_74_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_sw_19
    ui->screen_cfg_self_sw_19 = lv_switch_create(ui->screen_cfg_self_cont_97);
    lv_obj_set_pos(ui->screen_cfg_self_sw_19, 1101, 3);
    lv_obj_set_size(ui->screen_cfg_self_sw_19, 77, 30);

    //Write style for screen_cfg_self_sw_19, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_19, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_19, lv_color_hex(0xe6e2e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_19, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_sw_19, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_sw_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_sw_19, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_19, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_19, lv_color_hex(0x44D7B6), LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_19, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_19, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

    //Write style for screen_cfg_self_sw_19, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_19, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_19, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_19, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_19, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_sw_19, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_sw_19, Part: LV_PART_KNOB, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_19, 255, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_19, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_19, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_19, 0, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_cfg_self_sw_19, 10, LV_PART_KNOB|LV_STATE_FOCUSED);

    //Write codes screen_cfg_self_cont_98
    ui->screen_cfg_self_cont_98 = lv_obj_create(ui->screen_cfg_self_cont_1);
    lv_obj_set_pos(ui->screen_cfg_self_cont_98, 18, 1212);
    lv_obj_set_size(ui->screen_cfg_self_cont_98, 1231, 320);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_self_cont_98, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_self_cont_98, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_self_cont_98, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_cont_98, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_cont_98, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_cont_98, lv_color_hex(0x2A405C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_cont_98, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_cont_98, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_self_cont_98, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_cont_98, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_cont_98, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_cont_98, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_label_50
    ui->screen_cfg_self_label_50 = lv_label_create(ui->screen_cfg_self_cont_98);
    lv_obj_set_pos(ui->screen_cfg_self_label_50, 36, 33);
    lv_obj_set_size(ui->screen_cfg_self_label_50, 164, 42);
    lv_label_set_text(ui->screen_cfg_self_label_50, "风机设置");
    lv_label_set_long_mode(ui->screen_cfg_self_label_50, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_self_label_50, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_self_label_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_label_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_self_label_50, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_label_50, &lv_font_AlibabaPuHuiTiRegular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_label_50, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_label_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_self_label_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_label_50, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_label_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_label_50, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_label_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_self_label_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_label_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_label_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_label_49
    ui->screen_cfg_self_label_49 = lv_label_create(ui->screen_cfg_self_cont_98);
    lv_obj_set_pos(ui->screen_cfg_self_label_49, 9, 86);
    lv_obj_set_size(ui->screen_cfg_self_label_49, 108, 35);
    lv_label_set_text(ui->screen_cfg_self_label_49, "风机类型");
    lv_label_set_long_mode(ui->screen_cfg_self_label_49, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_self_label_49, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_self_label_49, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_label_49, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_self_label_49, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_label_49, &lv_font_AlibabaPuHuiTiRegular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_label_49, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_label_49, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_self_label_49, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_label_49, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_label_49, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_label_49, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_label_49, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_self_label_49, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_label_49, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_label_49, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_label_48
    ui->screen_cfg_self_label_48 = lv_label_create(ui->screen_cfg_self_cont_98);
    lv_obj_set_pos(ui->screen_cfg_self_label_48, 186, 87);
    lv_obj_set_size(ui->screen_cfg_self_label_48, 58, 35);
    lv_label_set_text(ui->screen_cfg_self_label_48, "品牌");
    lv_label_set_long_mode(ui->screen_cfg_self_label_48, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_self_label_48, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_self_label_48, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_label_48, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_self_label_48, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_label_48, &lv_font_AlibabaPuHuiTiRegular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_label_48, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_label_48, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_self_label_48, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_label_48, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_label_48, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_label_48, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_label_48, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_self_label_48, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_label_48, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_label_48, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_label_47
    ui->screen_cfg_self_label_47 = lv_label_create(ui->screen_cfg_self_cont_98);
    lv_obj_set_pos(ui->screen_cfg_self_label_47, 306, 87);
    lv_obj_set_size(ui->screen_cfg_self_label_47, 58, 35);
    lv_label_set_text(ui->screen_cfg_self_label_47, "地址");
    lv_label_set_long_mode(ui->screen_cfg_self_label_47, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_self_label_47, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_self_label_47, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_label_47, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_self_label_47, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_label_47, &lv_font_AlibabaPuHuiTiRegular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_label_47, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_label_47, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_self_label_47, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_label_47, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_label_47, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_label_47, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_label_47, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_self_label_47, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_label_47, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_label_47, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_label_46
    ui->screen_cfg_self_label_46 = lv_label_create(ui->screen_cfg_self_cont_98);
    lv_obj_set_pos(ui->screen_cfg_self_label_46, 426, 87);
    lv_obj_set_size(ui->screen_cfg_self_label_46, 109, 35);
    lv_label_set_text(ui->screen_cfg_self_label_46, "起始寄存器");
    lv_label_set_long_mode(ui->screen_cfg_self_label_46, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_self_label_46, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_self_label_46, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_label_46, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_self_label_46, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_label_46, &lv_font_AlibabaPuHuiTiRegular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_label_46, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_label_46, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_self_label_46, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_label_46, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_label_46, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_label_46, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_label_46, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_self_label_46, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_label_46, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_label_46, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_label_45
    ui->screen_cfg_self_label_45 = lv_label_create(ui->screen_cfg_self_cont_98);
    lv_obj_set_pos(ui->screen_cfg_self_label_45, 597, 87);
    lv_obj_set_size(ui->screen_cfg_self_label_45, 109, 35);
    lv_label_set_text(ui->screen_cfg_self_label_45, "寄存器长度");
    lv_label_set_long_mode(ui->screen_cfg_self_label_45, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_self_label_45, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_self_label_45, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_label_45, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_self_label_45, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_label_45, &lv_font_AlibabaPuHuiTiRegular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_label_45, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_label_45, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_self_label_45, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_label_45, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_label_45, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_label_45, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_label_45, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_self_label_45, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_label_45, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_label_45, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_label_44
    ui->screen_cfg_self_label_44 = lv_label_create(ui->screen_cfg_self_cont_98);
    lv_obj_set_pos(ui->screen_cfg_self_label_44, 768, 87);
    lv_obj_set_size(ui->screen_cfg_self_label_44, 109, 35);
    lv_label_set_text(ui->screen_cfg_self_label_44, "数据比例");
    lv_label_set_long_mode(ui->screen_cfg_self_label_44, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_self_label_44, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_self_label_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_label_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_self_label_44, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_label_44, &lv_font_AlibabaPuHuiTiRegular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_label_44, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_label_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_self_label_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_label_44, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_label_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_label_44, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_label_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_self_label_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_label_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_label_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_label_43
    ui->screen_cfg_self_label_43 = lv_label_create(ui->screen_cfg_self_cont_98);
    lv_obj_set_pos(ui->screen_cfg_self_label_43, 1092, 87);
    lv_obj_set_size(ui->screen_cfg_self_label_43, 91, 35);
    lv_label_set_text(ui->screen_cfg_self_label_43, "使能开关");
    lv_label_set_long_mode(ui->screen_cfg_self_label_43, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_self_label_43, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_self_label_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_label_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_self_label_43, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_label_43, &lv_font_AlibabaPuHuiTiRegular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_label_43, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_label_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_self_label_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_label_43, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_label_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_label_43, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_label_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_self_label_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_label_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_label_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_label_42
    ui->screen_cfg_self_label_42 = lv_label_create(ui->screen_cfg_self_cont_98);
    lv_obj_set_pos(ui->screen_cfg_self_label_42, 939, 87);
    lv_obj_set_size(ui->screen_cfg_self_label_42, 91, 35);
    lv_label_set_text(ui->screen_cfg_self_label_42, "通道");
    lv_label_set_long_mode(ui->screen_cfg_self_label_42, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_self_label_42, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_self_label_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_label_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_self_label_42, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_label_42, &lv_font_AlibabaPuHuiTiRegular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_label_42, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_label_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_self_label_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_label_42, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_label_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_label_42, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_label_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_self_label_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_label_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_label_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_cont_115
    ui->screen_cfg_self_cont_115 = lv_obj_create(ui->screen_cfg_self_cont_98);
    lv_obj_set_pos(ui->screen_cfg_self_cont_115, 1, 131);
    lv_obj_set_size(ui->screen_cfg_self_cont_115, 1228, 43);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_self_cont_115, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_self_cont_115, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_self_cont_115, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_cont_115, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_cont_115, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_cont_115, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_cont_115, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_cont_115, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_cont_115, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_self_cont_115, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_cont_115, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_cont_115, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_cont_115, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_145
    ui->screen_cfg_self_ddlist_145 = lv_dropdown_create(ui->screen_cfg_self_cont_115);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_145, 11, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_145, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_145, "模拟量\n变频器");

    //Write style for screen_cfg_self_ddlist_145, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_145, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_145, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_145, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_145, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_145, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_145, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_145, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_145, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_145, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_145, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_145, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_145, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_145, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_145, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_145, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_145_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_145_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_145_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_145_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_145_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_145_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_145_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_145_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_145_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_145_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_145_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_145), &style_screen_cfg_self_ddlist_145_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_145_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_145_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_145_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_145_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_145_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_145_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_145_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_145_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_145_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_145_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_145_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_145_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_145_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_145_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_145_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_145), &style_screen_cfg_self_ddlist_145_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_145_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_145_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_145_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_145_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_145_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_145_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_145_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_145), &style_screen_cfg_self_ddlist_145_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_144
    ui->screen_cfg_self_ddlist_144 = lv_dropdown_create(ui->screen_cfg_self_cont_115);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_144, 148, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_144, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_144, "模拟量厂家A\n变频器厂家A");

    //Write style for screen_cfg_self_ddlist_144, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_144, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_144, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_144, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_144, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_144, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_144, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_144, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_144, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_144, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_144, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_144, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_144, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_144, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_144, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_144, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_144_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_144_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_144_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_144_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_144_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_144_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_144_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_144_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_144_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_144_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_144_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_144), &style_screen_cfg_self_ddlist_144_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_144_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_144_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_144_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_144_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_144_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_144_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_144_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_144_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_144_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_144_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_144_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_144_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_144_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_144_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_144_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_144), &style_screen_cfg_self_ddlist_144_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_144_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_144_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_144_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_144_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_144_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_144_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_144_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_144), &style_screen_cfg_self_ddlist_144_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_143
    ui->screen_cfg_self_ddlist_143 = lv_dropdown_create(ui->screen_cfg_self_cont_115);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_143, 283, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_143, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_143, "0X01\n0X02\n0X03\n0X04\n0X05\n0X06\n0X07\n0X08\n0X09\n0X0A\n0X0B\n0X0C\n0X0D\n0X0E\n0X0F\n0X10\n0X11\n0X12\n0X13\n0X14\n0X15\n0X16\n0X17\n0X18\n0X19\n0X1A\n0X1B\n0X1C\n0X1D\n0X1E\n0X1F\n0X20");

    //Write style for screen_cfg_self_ddlist_143, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_143, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_143, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_143, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_143, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_143, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_143, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_143, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_143, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_143, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_143, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_143, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_143, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_143, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_143, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_143, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_143_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_143_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_143_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_143_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_143_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_143_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_143_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_143_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_143_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_143_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_143_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_143), &style_screen_cfg_self_ddlist_143_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_143_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_143_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_143_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_143_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_143_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_143_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_143_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_143_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_143_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_143_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_143_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_143_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_143_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_143_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_143_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_143), &style_screen_cfg_self_ddlist_143_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_143_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_143_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_143_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_143_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_143_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_143_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_143_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_143), &style_screen_cfg_self_ddlist_143_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_145
    ui->screen_cfg_self_ta_145 = lv_textarea_create(ui->screen_cfg_self_cont_115);
    lv_obj_set_pos(ui->screen_cfg_self_ta_145, 424, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_145, 108, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_145, "0X0000");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_145, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_145, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_145, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_145, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_145, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_145, 6);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_145, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_145, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_145, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_145, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_145, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_145, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_145, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_145, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_145, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_145, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_145, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_145, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_145, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_145, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_145, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_145, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_145, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_145, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_145, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_145, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_145, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_145, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_145, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_145, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_144
    ui->screen_cfg_self_ta_144 = lv_textarea_create(ui->screen_cfg_self_cont_115);
    lv_obj_set_pos(ui->screen_cfg_self_ta_144, 595, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_144, 108, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_144, "0X02");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_144, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_144, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_144, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_144, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_144, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_144, 4);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_144, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_144, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_144, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_144, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_144, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_144, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_144, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_144, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_144, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_144, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_144, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_144, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_144, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_144, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_144, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_144, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_144, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_144, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_144, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_144, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_144, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_144, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_144, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_144, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_143
    ui->screen_cfg_self_ta_143 = lv_textarea_create(ui->screen_cfg_self_cont_115);
    lv_obj_set_pos(ui->screen_cfg_self_ta_143, 773, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_143, 36, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_143, "K");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_143, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_143, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_143, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_143, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_143, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_143, 4);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_143, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_143, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_143, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_143, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_143, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_143, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_143, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_143, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_143, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_143, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_143, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_143, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_143, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_143, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_143, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_143, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_143, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_143, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_143, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_143, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_143, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_143, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_143, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_143, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_142
    ui->screen_cfg_self_ta_142 = lv_textarea_create(ui->screen_cfg_self_cont_115);
    lv_obj_set_pos(ui->screen_cfg_self_ta_142, 835, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_142, 36, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_142, "B");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_142, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_142, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_142, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_142, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_142, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_142, 4);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_142, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_142, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_142, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_142, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_142, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_142, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_142, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_142, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_142, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_142, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_142, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_142, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_142, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_142, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_142, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_142, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_142, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_142, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_142, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_142, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_142, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_142, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_142, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_142, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_142
    ui->screen_cfg_self_ddlist_142 = lv_dropdown_create(ui->screen_cfg_self_cont_115);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_142, 932, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_142, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_142, "0X01\n0X02\n0X03\n0X04");

    //Write style for screen_cfg_self_ddlist_142, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_142, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_142, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_142, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_142, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_142, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_142, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_142, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_142, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_142, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_142, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_142, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_142, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_142, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_142, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_142, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_142_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_142_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_142_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_142_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_142_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_142_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_142_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_142_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_142_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_142_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_142_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_142), &style_screen_cfg_self_ddlist_142_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_142_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_142_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_142_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_142_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_142_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_142_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_142_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_142_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_142_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_142_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_142_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_142_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_142_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_142_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_142_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_142), &style_screen_cfg_self_ddlist_142_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_142_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_142_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_142_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_142_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_142_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_142_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_142_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_142), &style_screen_cfg_self_ddlist_142_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_sw_36
    ui->screen_cfg_self_sw_36 = lv_switch_create(ui->screen_cfg_self_cont_115);
    lv_obj_set_pos(ui->screen_cfg_self_sw_36, 1101, 3);
    lv_obj_set_size(ui->screen_cfg_self_sw_36, 77, 30);

    //Write style for screen_cfg_self_sw_36, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_36, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_36, lv_color_hex(0xe6e2e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_36, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_sw_36, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_sw_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_sw_36, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_36, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_36, lv_color_hex(0x44D7B6), LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_36, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_36, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

    //Write style for screen_cfg_self_sw_36, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_36, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_36, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_36, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_36, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_sw_36, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_sw_36, Part: LV_PART_KNOB, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_36, 255, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_36, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_36, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_36, 0, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_cfg_self_sw_36, 10, LV_PART_KNOB|LV_STATE_FOCUSED);

    //Write codes screen_cfg_self_cont_116
    ui->screen_cfg_self_cont_116 = lv_obj_create(ui->screen_cfg_self_cont_98);
    lv_obj_set_pos(ui->screen_cfg_self_cont_116, 1, 186);
    lv_obj_set_size(ui->screen_cfg_self_cont_116, 1228, 43);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_self_cont_116, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_self_cont_116, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_self_cont_116, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_cont_116, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_cont_116, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_cont_116, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_cont_116, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_cont_116, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_cont_116, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_self_cont_116, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_cont_116, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_cont_116, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_cont_116, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_149
    ui->screen_cfg_self_ddlist_149 = lv_dropdown_create(ui->screen_cfg_self_cont_116);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_149, 11, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_149, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_149, "模拟量\n变频器");

    //Write style for screen_cfg_self_ddlist_149, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_149, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_149, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_149, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_149, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_149, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_149, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_149, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_149, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_149, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_149, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_149, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_149, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_149, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_149, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_149, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_149_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_149_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_149_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_149_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_149_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_149_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_149_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_149_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_149_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_149_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_149_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_149), &style_screen_cfg_self_ddlist_149_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_149_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_149_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_149_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_149_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_149_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_149_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_149_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_149_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_149_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_149_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_149_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_149_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_149_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_149_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_149_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_149), &style_screen_cfg_self_ddlist_149_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_149_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_149_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_149_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_149_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_149_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_149_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_149_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_149), &style_screen_cfg_self_ddlist_149_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_148
    ui->screen_cfg_self_ddlist_148 = lv_dropdown_create(ui->screen_cfg_self_cont_116);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_148, 148, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_148, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_148, "模拟量厂家A\n变频器厂家A");

    //Write style for screen_cfg_self_ddlist_148, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_148, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_148, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_148, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_148, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_148, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_148, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_148, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_148, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_148, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_148, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_148, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_148, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_148, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_148, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_148, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_148_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_148_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_148_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_148_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_148_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_148_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_148_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_148_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_148_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_148_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_148_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_148), &style_screen_cfg_self_ddlist_148_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_148_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_148_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_148_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_148_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_148_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_148_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_148_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_148_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_148_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_148_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_148_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_148_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_148_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_148_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_148_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_148), &style_screen_cfg_self_ddlist_148_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_148_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_148_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_148_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_148_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_148_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_148_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_148_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_148), &style_screen_cfg_self_ddlist_148_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_147
    ui->screen_cfg_self_ddlist_147 = lv_dropdown_create(ui->screen_cfg_self_cont_116);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_147, 283, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_147, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_147, "0X01\n0X02\n0X03\n0X04\n0X05\n0X06\n0X07\n0X08\n0X09\n0X0A\n0X0B\n0X0C\n0X0D\n0X0E\n0X0F\n0X10\n0X11\n0X12\n0X13\n0X14\n0X15\n0X16\n0X17\n0X18\n0X19\n0X1A\n0X1B\n0X1C\n0X1D\n0X1E\n0X1F\n0X20");

    //Write style for screen_cfg_self_ddlist_147, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_147, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_147, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_147, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_147, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_147, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_147, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_147, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_147, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_147, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_147, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_147, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_147, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_147, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_147, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_147, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_147_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_147_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_147_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_147_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_147_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_147_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_147_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_147_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_147_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_147_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_147_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_147), &style_screen_cfg_self_ddlist_147_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_147_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_147_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_147_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_147_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_147_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_147_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_147_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_147_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_147_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_147_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_147_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_147_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_147_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_147_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_147_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_147), &style_screen_cfg_self_ddlist_147_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_147_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_147_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_147_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_147_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_147_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_147_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_147_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_147), &style_screen_cfg_self_ddlist_147_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_149
    ui->screen_cfg_self_ta_149 = lv_textarea_create(ui->screen_cfg_self_cont_116);
    lv_obj_set_pos(ui->screen_cfg_self_ta_149, 424, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_149, 108, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_149, "0X0000");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_149, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_149, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_149, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_149, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_149, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_149, 6);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_149, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_149, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_149, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_149, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_149, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_149, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_149, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_149, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_149, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_149, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_149, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_149, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_149, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_149, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_149, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_149, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_149, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_149, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_149, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_149, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_149, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_149, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_149, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_149, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_148
    ui->screen_cfg_self_ta_148 = lv_textarea_create(ui->screen_cfg_self_cont_116);
    lv_obj_set_pos(ui->screen_cfg_self_ta_148, 595, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_148, 108, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_148, "0X02");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_148, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_148, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_148, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_148, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_148, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_148, 4);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_148, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_148, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_148, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_148, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_148, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_148, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_148, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_148, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_148, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_148, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_148, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_148, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_148, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_148, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_148, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_148, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_148, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_148, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_148, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_148, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_148, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_148, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_148, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_148, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_147
    ui->screen_cfg_self_ta_147 = lv_textarea_create(ui->screen_cfg_self_cont_116);
    lv_obj_set_pos(ui->screen_cfg_self_ta_147, 773, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_147, 36, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_147, "K");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_147, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_147, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_147, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_147, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_147, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_147, 4);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_147, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_147, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_147, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_147, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_147, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_147, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_147, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_147, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_147, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_147, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_147, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_147, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_147, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_147, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_147, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_147, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_147, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_147, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_147, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_147, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_147, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_147, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_147, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_147, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ta_146
    ui->screen_cfg_self_ta_146 = lv_textarea_create(ui->screen_cfg_self_cont_116);
    lv_obj_set_pos(ui->screen_cfg_self_ta_146, 835, 3);
    lv_obj_set_size(ui->screen_cfg_self_ta_146, 36, 30);
    lv_textarea_set_text(ui->screen_cfg_self_ta_146, "B");
    lv_textarea_set_placeholder_text(ui->screen_cfg_self_ta_146, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_self_ta_146, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_self_ta_146, false);
    lv_textarea_set_one_line(ui->screen_cfg_self_ta_146, false);
    lv_textarea_set_accepted_chars(ui->screen_cfg_self_ta_146, "");
    lv_textarea_set_max_length(ui->screen_cfg_self_ta_146, 4);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_self_ta_146, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_self_ta_146, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ta_146, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ta_146, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ta_146, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_ta_146, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_ta_146, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_146, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_146, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_146, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ta_146, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ta_146, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ta_146, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ta_146, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ta_146, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ta_146, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ta_146, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ta_146, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_146, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_ta_146, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ta_146, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ta_146, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ta_146, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ta_146, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_ddlist_146
    ui->screen_cfg_self_ddlist_146 = lv_dropdown_create(ui->screen_cfg_self_cont_116);
    lv_obj_set_pos(ui->screen_cfg_self_ddlist_146, 932, 3);
    lv_obj_set_size(ui->screen_cfg_self_ddlist_146, 108, 30);
    lv_dropdown_set_options(ui->screen_cfg_self_ddlist_146, "0X01\n0X02\n0X03\n0X04");

    //Write style for screen_cfg_self_ddlist_146, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_ddlist_146, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_ddlist_146, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_ddlist_146, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_ddlist_146, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_ddlist_146, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_ddlist_146, lv_color_hex(0xe1e6ee), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_ddlist_146, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_ddlist_146, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_ddlist_146, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_ddlist_146, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_ddlist_146, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_ddlist_146, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_ddlist_146, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_ddlist_146, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_ddlist_146, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_cfg_self_ddlist_146_extra_list_selected_checked
    static lv_style_t style_screen_cfg_self_ddlist_146_extra_list_selected_checked;
    ui_init_style(&style_screen_cfg_self_ddlist_146_extra_list_selected_checked);

    lv_style_set_border_width(&style_screen_cfg_self_ddlist_146_extra_list_selected_checked, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_146_extra_list_selected_checked, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_146_extra_list_selected_checked, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_146_extra_list_selected_checked, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_146_extra_list_selected_checked, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_146_extra_list_selected_checked, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_146_extra_list_selected_checked, lv_color_hex(0x00a1b5));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_146_extra_list_selected_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_146), &style_screen_cfg_self_ddlist_146_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_146_extra_list_main_default
    static lv_style_t style_screen_cfg_self_ddlist_146_extra_list_main_default;
    ui_init_style(&style_screen_cfg_self_ddlist_146_extra_list_main_default);

    lv_style_set_max_height(&style_screen_cfg_self_ddlist_146_extra_list_main_default, 90);
    lv_style_set_text_color(&style_screen_cfg_self_ddlist_146_extra_list_main_default, lv_color_hex(0x0D3055));
    lv_style_set_text_font(&style_screen_cfg_self_ddlist_146_extra_list_main_default, &lv_font_HarmonyOS_Sans_Medium_12);
    lv_style_set_text_opa(&style_screen_cfg_self_ddlist_146_extra_list_main_default, 255);
    lv_style_set_border_width(&style_screen_cfg_self_ddlist_146_extra_list_main_default, 1);
    lv_style_set_border_opa(&style_screen_cfg_self_ddlist_146_extra_list_main_default, 255);
    lv_style_set_border_color(&style_screen_cfg_self_ddlist_146_extra_list_main_default, lv_color_hex(0xe1e6ee));
    lv_style_set_border_side(&style_screen_cfg_self_ddlist_146_extra_list_main_default, LV_BORDER_SIDE_FULL);
    lv_style_set_radius(&style_screen_cfg_self_ddlist_146_extra_list_main_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_146_extra_list_main_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_146_extra_list_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_146_extra_list_main_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_146), &style_screen_cfg_self_ddlist_146_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_cfg_self_ddlist_146_extra_list_scrollbar_default
    static lv_style_t style_screen_cfg_self_ddlist_146_extra_list_scrollbar_default;
    ui_init_style(&style_screen_cfg_self_ddlist_146_extra_list_scrollbar_default);

    lv_style_set_radius(&style_screen_cfg_self_ddlist_146_extra_list_scrollbar_default, 3);
    lv_style_set_bg_opa(&style_screen_cfg_self_ddlist_146_extra_list_scrollbar_default, 255);
    lv_style_set_bg_color(&style_screen_cfg_self_ddlist_146_extra_list_scrollbar_default, lv_color_hex(0x00ff00));
    lv_style_set_bg_grad_dir(&style_screen_cfg_self_ddlist_146_extra_list_scrollbar_default, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_dropdown_get_list(ui->screen_cfg_self_ddlist_146), &style_screen_cfg_self_ddlist_146_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_sw_37
    ui->screen_cfg_self_sw_37 = lv_switch_create(ui->screen_cfg_self_cont_116);
    lv_obj_set_pos(ui->screen_cfg_self_sw_37, 1101, 3);
    lv_obj_set_size(ui->screen_cfg_self_sw_37, 77, 30);

    //Write style for screen_cfg_self_sw_37, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_37, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_37, lv_color_hex(0xe6e2e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_37, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_sw_37, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_sw_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_sw_37, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_37, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_37, lv_color_hex(0x44D7B6), LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_37, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_37, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

    //Write style for screen_cfg_self_sw_37, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_37, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_37, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_37, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_37, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_sw_37, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_sw_37, Part: LV_PART_KNOB, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_sw_37, 255, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_sw_37, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_sw_37, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_cfg_self_sw_37, 0, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_cfg_self_sw_37, 10, LV_PART_KNOB|LV_STATE_FOCUSED);

    //Write codes screen_cfg_self_cont_117
    ui->screen_cfg_self_cont_117 = lv_obj_create(ui->screen_cfg_self_cont_1);
    lv_obj_set_pos(ui->screen_cfg_self_cont_117, 18, 1574);
    lv_obj_set_size(ui->screen_cfg_self_cont_117, 1231, 320);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_self_cont_117, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_self_cont_117, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_self_cont_117, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_cont_117, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_cont_117, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_cont_117, lv_color_hex(0x2A405C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_cont_117, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_cont_117, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_self_cont_117, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_cont_117, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_cont_117, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_cont_117, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_label_59
    ui->screen_cfg_self_label_59 = lv_label_create(ui->screen_cfg_self_cont_117);
    lv_obj_set_pos(ui->screen_cfg_self_label_59, 36, 33);
    lv_obj_set_size(ui->screen_cfg_self_label_59, 164, 42);
    lv_label_set_text(ui->screen_cfg_self_label_59, "模式设置");
    lv_label_set_long_mode(ui->screen_cfg_self_label_59, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_self_label_59, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_self_label_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_label_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_self_label_59, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_label_59, &lv_font_AlibabaPuHuiTiRegular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_label_59, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_label_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_self_label_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_label_59, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_label_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_label_59, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_label_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_self_label_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_label_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_label_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_cb_2
    ui->screen_cfg_self_cb_2 = lv_checkbox_create(ui->screen_cfg_self_cont_117);
    lv_obj_set_pos(ui->screen_cfg_self_cb_2, 245, 107);
    lv_checkbox_set_text(ui->screen_cfg_self_cb_2, "试剂柜模式");

    //Write style for screen_cfg_self_cb_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_top(ui->screen_cfg_self_cb_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_cb_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_cb_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_self_cb_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_self_cb_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_cb_2, &lv_font_HarmonyOS_Sans_Medium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_cb_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_cb_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_cb_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_cb_2, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_cb_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_cb_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_cb_2, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_all(ui->screen_cfg_self_cb_2, 3, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_cb_2, 5, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_cb_2, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_cb_2, lv_color_hex(0x44D7B6), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_cb_2, LV_BORDER_SIDE_FULL, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_cb_2, 25, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_cb_2, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_cb_2, lv_color_hex(0xffffff), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_cb_2, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_cb_1
    ui->screen_cfg_self_cb_1 = lv_checkbox_create(ui->screen_cfg_self_cont_117);
    lv_obj_set_pos(ui->screen_cfg_self_cb_1, 48, 106);
    lv_checkbox_set_text(ui->screen_cfg_self_cb_1, "实验室模式");

    //Write style for screen_cfg_self_cb_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_top(ui->screen_cfg_self_cb_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_cb_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_cb_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_self_cb_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_self_cb_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_cb_1, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_cb_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_cb_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_cb_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_cb_1, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_cb_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_cb_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_self_cb_1, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_all(ui->screen_cfg_self_cb_1, 3, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_cb_1, 5, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_self_cb_1, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_self_cb_1, lv_color_hex(0x44D7B6), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_self_cb_1, LV_BORDER_SIDE_FULL, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_cb_1, 25, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_cb_1, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_self_cb_1, lv_color_hex(0xffffff), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_self_cb_1, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_datetext_1
    ui->screen_cfg_self_datetext_1 = lv_label_create(ui->screen_cfg_self);
    lv_obj_set_pos(ui->screen_cfg_self_datetext_1, 912, 16);
    lv_obj_set_size(ui->screen_cfg_self_datetext_1, 130, 36);
    lv_label_set_text(ui->screen_cfg_self_datetext_1, "2024/04/22");
    lv_obj_set_style_text_align(ui->screen_cfg_self_datetext_1, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_add_flag(ui->screen_cfg_self_datetext_1, LV_OBJ_FLAG_CLICKABLE);
    lv_obj_add_event_cb(ui->screen_cfg_self_datetext_1, screen_cfg_self_datetext_1_event_handler, LV_EVENT_ALL, NULL);

    //Write style for screen_cfg_self_datetext_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_self_datetext_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_datetext_1, &lv_font_AlibabaPuHuiTiRegular_18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_datetext_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_datetext_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_datetext_1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_datetext_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_datetext_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_datetext_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_datetext_1, 9, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_datetext_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_datetext_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_datetext_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_img_63
    ui->screen_cfg_self_img_63 = lv_image_create(ui->screen_cfg_self);
    lv_obj_set_pos(ui->screen_cfg_self_img_63, 43, 13);
    lv_obj_set_size(ui->screen_cfg_self_img_63, 184, 56);
    lv_obj_add_flag(ui->screen_cfg_self_img_63, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_pivot(ui->screen_cfg_self_img_63, 50,50);
    lv_image_set_rotation(ui->screen_cfg_self_img_63, 0);

    //Write style for screen_cfg_self_img_63, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_cfg_self_img_63, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_cfg_self_img_63, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_digital_clock_1
    static bool screen_cfg_self_digital_clock_1_timer_enabled = false;
    ui->screen_cfg_self_digital_clock_1 = lv_label_create(ui->screen_cfg_self);
    lv_obj_set_pos(ui->screen_cfg_self_digital_clock_1, 1042, 16);
    lv_obj_set_size(ui->screen_cfg_self_digital_clock_1, 130, 36);
    lv_label_set_text(ui->screen_cfg_self_digital_clock_1, "11:25");
    if (!screen_cfg_self_digital_clock_1_timer_enabled) {
        lv_timer_create(screen_cfg_self_digital_clock_1_timer, 1000, NULL);
        screen_cfg_self_digital_clock_1_timer_enabled = true;
    }

    //Write style for screen_cfg_self_digital_clock_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_radius(ui->screen_cfg_self_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_self_digital_clock_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_digital_clock_1, &lv_font_AlibabaPuHuiTiRegular_18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_digital_clock_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_self_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_digital_clock_1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_self_digital_clock_1, 9, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_self_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_self_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_self_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_btn_1
    ui->screen_cfg_self_btn_1 = lv_button_create(ui->screen_cfg_self);
    lv_obj_set_pos(ui->screen_cfg_self_btn_1, 1098, 14);
    lv_obj_set_size(ui->screen_cfg_self_btn_1, 44, 44);
    ui->screen_cfg_self_btn_1_label = lv_label_create(ui->screen_cfg_self_btn_1);
    lv_label_set_text(ui->screen_cfg_self_btn_1_label, "");
    lv_label_set_long_mode(ui->screen_cfg_self_btn_1_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_self_btn_1_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_self_btn_1, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_self_btn_1_label, LV_PCT(100));

    //Write style for screen_cfg_self_btn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_btn_1, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_cfg_self_btn_1, &_icon_setup_RGB565A8_44x44, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_cfg_self_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_cfg_self_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_self_btn_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_btn_1, &lv_font_AlibabaPuHuiTiRegular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_btn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_img_13
    ui->screen_cfg_self_img_13 = lv_image_create(ui->screen_cfg_self);
    lv_obj_set_pos(ui->screen_cfg_self_img_13, 1157, 14);
    lv_obj_set_size(ui->screen_cfg_self_img_13, 44, 44);
    lv_obj_add_flag(ui->screen_cfg_self_img_13, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_cfg_self_img_13, &_icon_device_RGB565A8_44x44);
    lv_image_set_pivot(ui->screen_cfg_self_img_13, 50,50);
    lv_image_set_rotation(ui->screen_cfg_self_img_13, 0);

    //Write style for screen_cfg_self_img_13, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_cfg_self_img_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_cfg_self_img_13, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_btn_4
    ui->screen_cfg_self_btn_4 = lv_button_create(ui->screen_cfg_self);
    lv_obj_set_pos(ui->screen_cfg_self_btn_4, 953, 88);
    lv_obj_set_size(ui->screen_cfg_self_btn_4, 257, 42);
    ui->screen_cfg_self_btn_4_label = lv_label_create(ui->screen_cfg_self_btn_4);
    lv_label_set_text(ui->screen_cfg_self_btn_4_label, "智能屏参数设置");
    lv_label_set_long_mode(ui->screen_cfg_self_btn_4_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_self_btn_4_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_self_btn_4, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_self_btn_4_label, LV_PCT(100));

    //Write style for screen_cfg_self_btn_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_btn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_btn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_btn_4, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_btn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_self_btn_4, lv_color_hex(0x44D7B6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_btn_4, &lv_font_AlibabaPuHuiTiRegular_34, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_btn_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_btn_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_img_14
    ui->screen_cfg_self_img_14 = lv_image_create(ui->screen_cfg_self);
    lv_obj_set_pos(ui->screen_cfg_self_img_14, 1215, 14);
    lv_obj_set_size(ui->screen_cfg_self_img_14, 44, 44);
    lv_obj_add_flag(ui->screen_cfg_self_img_14, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_cfg_self_img_14, &_icon_signal_RGB565A8_44x44);
    lv_image_set_pivot(ui->screen_cfg_self_img_14, 50,50);
    lv_image_set_rotation(ui->screen_cfg_self_img_14, 0);

    //Write style for screen_cfg_self_img_14, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_cfg_self_img_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_cfg_self_img_14, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_img_15
    ui->screen_cfg_self_img_15 = lv_image_create(ui->screen_cfg_self);
    lv_obj_set_pos(ui->screen_cfg_self_img_15, 1215, 14);
    lv_obj_set_size(ui->screen_cfg_self_img_15, 44, 44);
    lv_obj_add_flag(ui->screen_cfg_self_img_15, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_cfg_self_img_15, &_icon_signal_n_RGB565A8_44x44);
    lv_image_set_pivot(ui->screen_cfg_self_img_15, 50,50);
    lv_image_set_rotation(ui->screen_cfg_self_img_15, 0);

    //Write style for screen_cfg_self_img_15, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_cfg_self_img_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_cfg_self_img_15, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_btn_5
    ui->screen_cfg_self_btn_5 = lv_button_create(ui->screen_cfg_self);
    lv_obj_set_pos(ui->screen_cfg_self_btn_5, 48, 100);
    lv_obj_set_size(ui->screen_cfg_self_btn_5, 44, 44);
    ui->screen_cfg_self_btn_5_label = lv_label_create(ui->screen_cfg_self_btn_5);
    lv_label_set_text(ui->screen_cfg_self_btn_5_label, "");
    lv_label_set_long_mode(ui->screen_cfg_self_btn_5_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_self_btn_5_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_self_btn_5, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_self_btn_5_label, LV_PCT(100));

    //Write style for screen_cfg_self_btn_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_self_btn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_self_btn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_self_btn_5, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_self_btn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_cfg_self_btn_5, &_icon_reture_RGB565A8_44x44, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_cfg_self_btn_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_cfg_self_btn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_self_btn_5, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_self_btn_5, &lv_font_AlibabaPuHuiTiRegular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_self_btn_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_self_btn_5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_self_line_1
    ui->screen_cfg_self_line_1 = lv_line_create(ui->screen_cfg_self);
    lv_obj_set_pos(ui->screen_cfg_self_line_1, 1050, 139);
    lv_obj_set_size(ui->screen_cfg_self_line_1, 40, 7);
    static lv_point_precise_t screen_cfg_self_line_1[] = {{0, 0},{40, 0}};
    lv_line_set_points(ui->screen_cfg_self_line_1, screen_cfg_self_line_1, 2);

    //Write style for screen_cfg_self_line_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_cfg_self_line_1, 7, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_cfg_self_line_1, lv_color_hex(0x44D7B6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_cfg_self_line_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_cfg_self_line_1, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of screen_cfg_self.


    //Update current screen layout.
    lv_obj_update_layout(ui->screen_cfg_self);

}
