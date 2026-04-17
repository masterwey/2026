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



int screen_cfg_door_digital_clock_1_min_value = 25;
int screen_cfg_door_digital_clock_1_hour_value = 11;
int screen_cfg_door_digital_clock_1_sec_value = 50;
void setup_scr_screen_cfg_door(lv_ui *ui)
{
    //Write codes screen_cfg_door
    ui->screen_cfg_door = lv_obj_create(NULL);
    lv_obj_set_size(ui->screen_cfg_door, 1280, 800);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_door, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_door, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_door, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_cont_1
    ui->screen_cfg_door_cont_1 = lv_obj_create(ui->screen_cfg_door);
    lv_obj_set_pos(ui->screen_cfg_door_cont_1, 0, 0);
    lv_obj_set_size(ui->screen_cfg_door_cont_1, 1280, 1272);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_door_cont_1, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_door_cont_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_door_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_door_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_door_cont_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_door_cont_1, lv_color_hex(0x1B2C42), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_door_cont_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_door_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_door_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_door_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_door_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_door_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_btn_67
    ui->screen_cfg_door_btn_67 = lv_button_create(ui->screen_cfg_door_cont_1);
    lv_obj_set_pos(ui->screen_cfg_door_btn_67, 699, 89);
    lv_obj_set_size(ui->screen_cfg_door_btn_67, 143, 47);
    ui->screen_cfg_door_btn_67_label = lv_label_create(ui->screen_cfg_door_btn_67);
    lv_label_set_text(ui->screen_cfg_door_btn_67_label, "设备控制");
    lv_label_set_long_mode(ui->screen_cfg_door_btn_67_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_door_btn_67_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_door_btn_67, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_door_btn_67_label, LV_PCT(100));

    //Write style for screen_cfg_door_btn_67, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_door_btn_67, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_door_btn_67, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_door_btn_67, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_door_btn_67, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_door_btn_67, lv_color_hex(0x758AA6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_door_btn_67, &lv_font_AlibabaPuHuiTiRegular_34, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_door_btn_67, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_door_btn_67, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_cont_44
    ui->screen_cfg_door_cont_44 = lv_obj_create(ui->screen_cfg_door_cont_1);
    lv_obj_set_pos(ui->screen_cfg_door_cont_44, 30, 176);
    lv_obj_set_size(ui->screen_cfg_door_cont_44, 597, 195);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_door_cont_44, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_door_cont_44, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_door_cont_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_door_cont_44, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_door_cont_44, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_door_cont_44, lv_color_hex(0x2A405C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_door_cont_44, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_door_cont_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_door_cont_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_door_cont_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_door_cont_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_door_cont_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_label_1
    ui->screen_cfg_door_label_1 = lv_label_create(ui->screen_cfg_door_cont_44);
    lv_obj_set_pos(ui->screen_cfg_door_label_1, 38, 33);
    lv_obj_set_size(ui->screen_cfg_door_label_1, 164, 42);
    lv_label_set_text(ui->screen_cfg_door_label_1, "模式设置");
    lv_label_set_long_mode(ui->screen_cfg_door_label_1, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_door_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_door_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_door_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_door_label_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_door_label_1, &lv_font_AlibabaPuHuiTiRegular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_door_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_door_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_door_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_door_label_1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_door_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_door_label_1, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_door_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_door_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_door_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_door_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_cb_1
    ui->screen_cfg_door_cb_1 = lv_checkbox_create(ui->screen_cfg_door_cont_44);
    lv_obj_set_pos(ui->screen_cfg_door_cb_1, 48, 106);
    lv_checkbox_set_text(ui->screen_cfg_door_cb_1, "单人");

    //Write style for screen_cfg_door_cb_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_top(ui->screen_cfg_door_cb_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_door_cb_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_door_cb_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_door_cb_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_door_cb_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_door_cb_1, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_door_cb_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_door_cb_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_door_cb_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_door_cb_1, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_door_cb_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_door_cb_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_door_cb_1, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_all(ui->screen_cfg_door_cb_1, 3, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_door_cb_1, 5, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_door_cb_1, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_door_cb_1, lv_color_hex(0x44D7B6), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_door_cb_1, LV_BORDER_SIDE_FULL, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_door_cb_1, 25, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_door_cb_1, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_door_cb_1, lv_color_hex(0xffffff), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_door_cb_1, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_cb_2
    ui->screen_cfg_door_cb_2 = lv_checkbox_create(ui->screen_cfg_door_cont_44);
    lv_obj_set_pos(ui->screen_cfg_door_cb_2, 245, 107);
    lv_checkbox_set_text(ui->screen_cfg_door_cb_2, "双人");

    //Write style for screen_cfg_door_cb_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_top(ui->screen_cfg_door_cb_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_door_cb_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_door_cb_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_door_cb_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_door_cb_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_door_cb_2, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_door_cb_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_door_cb_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_door_cb_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_door_cb_2, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_door_cb_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_door_cb_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_door_cb_2, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_all(ui->screen_cfg_door_cb_2, 3, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_door_cb_2, 5, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_door_cb_2, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_door_cb_2, lv_color_hex(0x44D7B6), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_door_cb_2, LV_BORDER_SIDE_FULL, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_door_cb_2, 25, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_door_cb_2, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_door_cb_2, lv_color_hex(0xffffff), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_door_cb_2, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_cont_45
    ui->screen_cfg_door_cont_45 = lv_obj_create(ui->screen_cfg_door_cont_1);
    lv_obj_set_pos(ui->screen_cfg_door_cont_45, 654, 176);
    lv_obj_set_size(ui->screen_cfg_door_cont_45, 597, 195);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_door_cont_45, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_door_cont_45, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_door_cont_45, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_door_cont_45, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_door_cont_45, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_door_cont_45, lv_color_hex(0x2A405C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_door_cont_45, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_door_cont_45, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_door_cont_45, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_door_cont_45, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_door_cont_45, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_door_cont_45, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_label_2
    ui->screen_cfg_door_label_2 = lv_label_create(ui->screen_cfg_door_cont_45);
    lv_obj_set_pos(ui->screen_cfg_door_label_2, 47, 33);
    lv_obj_set_size(ui->screen_cfg_door_label_2, 164, 42);
    lv_label_set_text(ui->screen_cfg_door_label_2, "门禁");
    lv_label_set_long_mode(ui->screen_cfg_door_label_2, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_door_label_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_door_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_door_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_door_label_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_door_label_2, &lv_font_AlibabaPuHuiTiRegular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_door_label_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_door_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_door_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_door_label_2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_door_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_door_label_2, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_door_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_door_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_door_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_door_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_btn_68
    ui->screen_cfg_door_btn_68 = lv_button_create(ui->screen_cfg_door_cont_45);
    lv_obj_set_pos(ui->screen_cfg_door_btn_68, 45, 104);
    lv_obj_set_size(ui->screen_cfg_door_btn_68, 105, 45);
    ui->screen_cfg_door_btn_68_label = lv_label_create(ui->screen_cfg_door_btn_68);
    lv_label_set_text(ui->screen_cfg_door_btn_68_label, "开门");
    lv_label_set_long_mode(ui->screen_cfg_door_btn_68_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_door_btn_68_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_door_btn_68, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_door_btn_68_label, LV_PCT(100));

    //Write style for screen_cfg_door_btn_68, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_door_btn_68, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_door_btn_68, lv_color_hex(0x3ECDAD), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_door_btn_68, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_door_btn_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_door_btn_68, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_door_btn_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_door_btn_68, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_door_btn_68, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_door_btn_68, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_door_btn_68, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_cont_47
    ui->screen_cfg_door_cont_47 = lv_obj_create(ui->screen_cfg_door_cont_1);
    lv_obj_set_pos(ui->screen_cfg_door_cont_47, 30, 431);
    lv_obj_set_size(ui->screen_cfg_door_cont_47, 1219, 813);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_door_cont_47, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_door_cont_47, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_door_cont_47, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_door_cont_47, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_door_cont_47, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_door_cont_47, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_door_cont_47, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_door_cont_47, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_door_cont_47, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_door_cont_47, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_cont_48
    ui->screen_cfg_door_cont_48 = lv_obj_create(ui->screen_cfg_door_cont_47);
    lv_obj_set_pos(ui->screen_cfg_door_cont_48, 0, 0);
    lv_obj_set_size(ui->screen_cfg_door_cont_48, 1219, 813);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_door_cont_48, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_door_cont_48, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_door_cont_48, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_door_cont_48, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_door_cont_48, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_door_cont_48, lv_color_hex(0x2A405C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_door_cont_48, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_door_cont_48, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_door_cont_48, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_door_cont_48, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_door_cont_48, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_door_cont_48, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_line_3
    ui->screen_cfg_door_line_3 = lv_line_create(ui->screen_cfg_door_cont_48);
    lv_obj_set_pos(ui->screen_cfg_door_line_3, 564, 733);
    lv_obj_set_size(ui->screen_cfg_door_line_3, 30, 30);
    static lv_point_precise_t screen_cfg_door_line_3[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_cfg_door_line_3, screen_cfg_door_line_3, 2);

    //Write style for screen_cfg_door_line_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_cfg_door_line_3, 15, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_cfg_door_line_3, lv_color_hex(0x6f6f6f), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_cfg_door_line_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_cfg_door_line_3, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_line_2
    ui->screen_cfg_door_line_2 = lv_line_create(ui->screen_cfg_door_cont_48);
    lv_obj_set_pos(ui->screen_cfg_door_line_2, 646, 732);
    lv_obj_set_size(ui->screen_cfg_door_line_2, 30, 30);
    static lv_point_precise_t screen_cfg_door_line_2[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_cfg_door_line_2, screen_cfg_door_line_2, 2);

    //Write style for screen_cfg_door_line_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_cfg_door_line_2, 15, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_cfg_door_line_2, lv_color_hex(0x44D7B6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_cfg_door_line_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_cfg_door_line_2, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_cont_49
    ui->screen_cfg_door_cont_49 = lv_obj_create(ui->screen_cfg_door_cont_47);
    lv_obj_set_pos(ui->screen_cfg_door_cont_49, 0, 0);
    lv_obj_set_size(ui->screen_cfg_door_cont_49, 1219, 813);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_door_cont_49, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_door_cont_49, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_door_cont_49, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_door_cont_49, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_door_cont_49, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_door_cont_49, lv_color_hex(0x2A405C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_door_cont_49, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_door_cont_49, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_door_cont_49, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_door_cont_49, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_door_cont_49, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_door_cont_49, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_line_5
    ui->screen_cfg_door_line_5 = lv_line_create(ui->screen_cfg_door_cont_49);
    lv_obj_set_pos(ui->screen_cfg_door_line_5, 661, 757);
    lv_obj_set_size(ui->screen_cfg_door_line_5, 30, 30);
    static lv_point_precise_t screen_cfg_door_line_5[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_cfg_door_line_5, screen_cfg_door_line_5, 2);

    //Write style for screen_cfg_door_line_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_cfg_door_line_5, 15, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_cfg_door_line_5, lv_color_hex(0x6f6f6f), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_cfg_door_line_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_cfg_door_line_5, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_line_4
    ui->screen_cfg_door_line_4 = lv_line_create(ui->screen_cfg_door_cont_49);
    lv_obj_set_pos(ui->screen_cfg_door_line_4, 547, 757);
    lv_obj_set_size(ui->screen_cfg_door_line_4, 30, 30);
    static lv_point_precise_t screen_cfg_door_line_4[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_cfg_door_line_4, screen_cfg_door_line_4, 2);

    //Write style for screen_cfg_door_line_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_cfg_door_line_4, 15, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_cfg_door_line_4, lv_color_hex(0x44D7B6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_cfg_door_line_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_cfg_door_line_4, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_btn_69
    ui->screen_cfg_door_btn_69 = lv_button_create(ui->screen_cfg_door_cont_49);
    lv_obj_set_pos(ui->screen_cfg_door_btn_69, 1086, 33);
    lv_obj_set_size(ui->screen_cfg_door_btn_69, 101, 40);
    ui->screen_cfg_door_btn_69_label = lv_label_create(ui->screen_cfg_door_btn_69);
    lv_label_set_text(ui->screen_cfg_door_btn_69_label, "新增");
    lv_label_set_long_mode(ui->screen_cfg_door_btn_69_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_door_btn_69_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_door_btn_69, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_door_btn_69_label, LV_PCT(100));

    //Write style for screen_cfg_door_btn_69, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_door_btn_69, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_door_btn_69, lv_color_hex(0x3ECDAD), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_door_btn_69, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_door_btn_69, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_door_btn_69, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_door_btn_69, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_door_btn_69, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_door_btn_69, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_door_btn_69, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_door_btn_69, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_label_3
    ui->screen_cfg_door_label_3 = lv_label_create(ui->screen_cfg_door_cont_49);
    lv_obj_set_pos(ui->screen_cfg_door_label_3, 38, 33);
    lv_obj_set_size(ui->screen_cfg_door_label_3, 164, 42);
    lv_label_set_text(ui->screen_cfg_door_label_3, "模式设置");
    lv_label_set_long_mode(ui->screen_cfg_door_label_3, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_door_label_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_door_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_door_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_door_label_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_door_label_3, &lv_font_AlibabaPuHuiTiRegular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_door_label_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_door_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_door_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_door_label_3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_door_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_door_label_3, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_door_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_door_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_door_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_door_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_cont_50
    ui->screen_cfg_door_cont_50 = lv_obj_create(ui->screen_cfg_door_cont_49);
    lv_obj_set_pos(ui->screen_cfg_door_cont_50, 27, 119);
    lv_obj_set_size(ui->screen_cfg_door_cont_50, 557, 101);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_door_cont_50, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_door_cont_50, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_door_cont_50, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_door_cont_50, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_door_cont_50, lv_color_hex(0x5A6B81), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_door_cont_50, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_door_cont_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_door_cont_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_door_cont_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_door_cont_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_door_cont_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_door_cont_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_door_cont_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_img_64
    ui->screen_cfg_door_img_64 = lv_image_create(ui->screen_cfg_door_cont_50);
    lv_obj_set_pos(ui->screen_cfg_door_img_64, 33, 17);
    lv_obj_set_size(ui->screen_cfg_door_img_64, 69, 69);
    lv_obj_add_flag(ui->screen_cfg_door_img_64, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_pivot(ui->screen_cfg_door_img_64, 50,50);
    lv_image_set_rotation(ui->screen_cfg_door_img_64, 0);

    //Write style for screen_cfg_door_img_64, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_cfg_door_img_64, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_cfg_door_img_64, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_label_4
    ui->screen_cfg_door_label_4 = lv_label_create(ui->screen_cfg_door_cont_50);
    lv_obj_set_pos(ui->screen_cfg_door_label_4, 111, 35);
    lv_obj_set_size(ui->screen_cfg_door_label_4, 307, 33);
    lv_label_set_text(ui->screen_cfg_door_label_4, "用户1     IC卡号：78968762");
    lv_label_set_long_mode(ui->screen_cfg_door_label_4, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_door_label_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_door_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_door_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_door_label_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_door_label_4, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_door_label_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_door_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_door_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_door_label_4, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_door_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_door_label_4, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_door_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_door_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_door_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_door_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_btn_70
    ui->screen_cfg_door_btn_70 = lv_button_create(ui->screen_cfg_door_cont_50);
    lv_obj_set_pos(ui->screen_cfg_door_btn_70, 491, 34);
    lv_obj_set_size(ui->screen_cfg_door_btn_70, 36, 36);
    ui->screen_cfg_door_btn_70_label = lv_label_create(ui->screen_cfg_door_btn_70);
    lv_label_set_text(ui->screen_cfg_door_btn_70_label, "");
    lv_label_set_long_mode(ui->screen_cfg_door_btn_70_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_door_btn_70_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_door_btn_70, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_door_btn_70_label, LV_PCT(100));

    //Write style for screen_cfg_door_btn_70, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_door_btn_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_door_btn_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_door_btn_70, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_door_btn_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_cfg_door_btn_70, &_icon_delete_RGB565A8_36x36, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_cfg_door_btn_70, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_cfg_door_btn_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_door_btn_70, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_door_btn_70, &lv_font_HarmonyOS_Sans_Medium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_door_btn_70, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_door_btn_70, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_cont_51
    ui->screen_cfg_door_cont_51 = lv_obj_create(ui->screen_cfg_door_cont_49);
    lv_obj_set_pos(ui->screen_cfg_door_cont_51, 630, 121);
    lv_obj_set_size(ui->screen_cfg_door_cont_51, 557, 101);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_door_cont_51, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_door_cont_51, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_door_cont_51, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_door_cont_51, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_door_cont_51, lv_color_hex(0x5A6B81), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_door_cont_51, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_door_cont_51, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_door_cont_51, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_door_cont_51, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_door_cont_51, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_door_cont_51, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_door_cont_51, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_door_cont_51, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_img_65
    ui->screen_cfg_door_img_65 = lv_image_create(ui->screen_cfg_door_cont_51);
    lv_obj_set_pos(ui->screen_cfg_door_img_65, 33, 17);
    lv_obj_set_size(ui->screen_cfg_door_img_65, 69, 69);
    lv_obj_add_flag(ui->screen_cfg_door_img_65, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_pivot(ui->screen_cfg_door_img_65, 50,50);
    lv_image_set_rotation(ui->screen_cfg_door_img_65, 0);

    //Write style for screen_cfg_door_img_65, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_cfg_door_img_65, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_cfg_door_img_65, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_label_5
    ui->screen_cfg_door_label_5 = lv_label_create(ui->screen_cfg_door_cont_51);
    lv_obj_set_pos(ui->screen_cfg_door_label_5, 112, 37);
    lv_obj_set_size(ui->screen_cfg_door_label_5, 307, 33);
    lv_label_set_text(ui->screen_cfg_door_label_5, "用户1     IC卡号：78968762");
    lv_label_set_long_mode(ui->screen_cfg_door_label_5, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_door_label_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_door_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_door_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_door_label_5, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_door_label_5, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_door_label_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_door_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_door_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_door_label_5, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_door_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_door_label_5, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_door_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_door_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_door_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_door_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_btn_71
    ui->screen_cfg_door_btn_71 = lv_button_create(ui->screen_cfg_door_cont_51);
    lv_obj_set_pos(ui->screen_cfg_door_btn_71, 491, 34);
    lv_obj_set_size(ui->screen_cfg_door_btn_71, 36, 36);
    ui->screen_cfg_door_btn_71_label = lv_label_create(ui->screen_cfg_door_btn_71);
    lv_label_set_text(ui->screen_cfg_door_btn_71_label, "");
    lv_label_set_long_mode(ui->screen_cfg_door_btn_71_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_door_btn_71_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_door_btn_71, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_door_btn_71_label, LV_PCT(100));

    //Write style for screen_cfg_door_btn_71, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_door_btn_71, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_door_btn_71, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_door_btn_71, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_door_btn_71, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_cfg_door_btn_71, &_icon_delete_RGB565A8_36x36, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_cfg_door_btn_71, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_cfg_door_btn_71, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_door_btn_71, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_door_btn_71, &lv_font_HarmonyOS_Sans_Medium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_door_btn_71, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_door_btn_71, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_cont_52
    ui->screen_cfg_door_cont_52 = lv_obj_create(ui->screen_cfg_door_cont_49);
    lv_obj_set_pos(ui->screen_cfg_door_cont_52, 27, 249);
    lv_obj_set_size(ui->screen_cfg_door_cont_52, 557, 101);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_door_cont_52, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_door_cont_52, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_door_cont_52, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_door_cont_52, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_door_cont_52, lv_color_hex(0x5A6B81), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_door_cont_52, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_door_cont_52, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_door_cont_52, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_door_cont_52, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_door_cont_52, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_door_cont_52, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_door_cont_52, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_door_cont_52, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_img_66
    ui->screen_cfg_door_img_66 = lv_image_create(ui->screen_cfg_door_cont_52);
    lv_obj_set_pos(ui->screen_cfg_door_img_66, 33, 17);
    lv_obj_set_size(ui->screen_cfg_door_img_66, 69, 69);
    lv_obj_add_flag(ui->screen_cfg_door_img_66, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_pivot(ui->screen_cfg_door_img_66, 50,50);
    lv_image_set_rotation(ui->screen_cfg_door_img_66, 0);

    //Write style for screen_cfg_door_img_66, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_cfg_door_img_66, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_cfg_door_img_66, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_label_6
    ui->screen_cfg_door_label_6 = lv_label_create(ui->screen_cfg_door_cont_52);
    lv_obj_set_pos(ui->screen_cfg_door_label_6, 112, 37);
    lv_obj_set_size(ui->screen_cfg_door_label_6, 307, 33);
    lv_label_set_text(ui->screen_cfg_door_label_6, "用户1     IC卡号：78968762");
    lv_label_set_long_mode(ui->screen_cfg_door_label_6, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_door_label_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_door_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_door_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_door_label_6, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_door_label_6, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_door_label_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_door_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_door_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_door_label_6, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_door_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_door_label_6, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_door_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_door_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_door_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_door_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_btn_72
    ui->screen_cfg_door_btn_72 = lv_button_create(ui->screen_cfg_door_cont_52);
    lv_obj_set_pos(ui->screen_cfg_door_btn_72, 491, 34);
    lv_obj_set_size(ui->screen_cfg_door_btn_72, 36, 36);
    ui->screen_cfg_door_btn_72_label = lv_label_create(ui->screen_cfg_door_btn_72);
    lv_label_set_text(ui->screen_cfg_door_btn_72_label, "");
    lv_label_set_long_mode(ui->screen_cfg_door_btn_72_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_door_btn_72_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_door_btn_72, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_door_btn_72_label, LV_PCT(100));

    //Write style for screen_cfg_door_btn_72, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_door_btn_72, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_door_btn_72, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_door_btn_72, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_door_btn_72, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_cfg_door_btn_72, &_icon_delete_RGB565A8_36x36, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_cfg_door_btn_72, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_cfg_door_btn_72, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_door_btn_72, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_door_btn_72, &lv_font_HarmonyOS_Sans_Medium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_door_btn_72, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_door_btn_72, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_cont_53
    ui->screen_cfg_door_cont_53 = lv_obj_create(ui->screen_cfg_door_cont_49);
    lv_obj_set_pos(ui->screen_cfg_door_cont_53, 630, 249);
    lv_obj_set_size(ui->screen_cfg_door_cont_53, 557, 101);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_door_cont_53, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_door_cont_53, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_door_cont_53, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_door_cont_53, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_door_cont_53, lv_color_hex(0x5A6B81), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_door_cont_53, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_door_cont_53, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_door_cont_53, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_door_cont_53, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_door_cont_53, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_door_cont_53, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_door_cont_53, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_door_cont_53, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_img_67
    ui->screen_cfg_door_img_67 = lv_image_create(ui->screen_cfg_door_cont_53);
    lv_obj_set_pos(ui->screen_cfg_door_img_67, 33, 17);
    lv_obj_set_size(ui->screen_cfg_door_img_67, 69, 69);
    lv_obj_add_flag(ui->screen_cfg_door_img_67, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_pivot(ui->screen_cfg_door_img_67, 50,50);
    lv_image_set_rotation(ui->screen_cfg_door_img_67, 0);

    //Write style for screen_cfg_door_img_67, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_cfg_door_img_67, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_cfg_door_img_67, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_label_7
    ui->screen_cfg_door_label_7 = lv_label_create(ui->screen_cfg_door_cont_53);
    lv_obj_set_pos(ui->screen_cfg_door_label_7, 112, 37);
    lv_obj_set_size(ui->screen_cfg_door_label_7, 307, 33);
    lv_label_set_text(ui->screen_cfg_door_label_7, "用户1     IC卡号：78968762");
    lv_label_set_long_mode(ui->screen_cfg_door_label_7, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_door_label_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_door_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_door_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_door_label_7, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_door_label_7, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_door_label_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_door_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_door_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_door_label_7, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_door_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_door_label_7, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_door_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_door_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_door_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_door_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_btn_73
    ui->screen_cfg_door_btn_73 = lv_button_create(ui->screen_cfg_door_cont_53);
    lv_obj_set_pos(ui->screen_cfg_door_btn_73, 491, 34);
    lv_obj_set_size(ui->screen_cfg_door_btn_73, 36, 36);
    ui->screen_cfg_door_btn_73_label = lv_label_create(ui->screen_cfg_door_btn_73);
    lv_label_set_text(ui->screen_cfg_door_btn_73_label, "");
    lv_label_set_long_mode(ui->screen_cfg_door_btn_73_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_door_btn_73_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_door_btn_73, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_door_btn_73_label, LV_PCT(100));

    //Write style for screen_cfg_door_btn_73, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_door_btn_73, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_door_btn_73, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_door_btn_73, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_door_btn_73, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_cfg_door_btn_73, &_icon_delete_RGB565A8_36x36, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_cfg_door_btn_73, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_cfg_door_btn_73, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_door_btn_73, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_door_btn_73, &lv_font_HarmonyOS_Sans_Medium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_door_btn_73, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_door_btn_73, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_cont_54
    ui->screen_cfg_door_cont_54 = lv_obj_create(ui->screen_cfg_door_cont_49);
    lv_obj_set_pos(ui->screen_cfg_door_cont_54, 27, 379);
    lv_obj_set_size(ui->screen_cfg_door_cont_54, 557, 101);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_door_cont_54, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_door_cont_54, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_door_cont_54, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_door_cont_54, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_door_cont_54, lv_color_hex(0x5A6B81), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_door_cont_54, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_door_cont_54, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_door_cont_54, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_door_cont_54, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_door_cont_54, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_door_cont_54, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_door_cont_54, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_door_cont_54, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_img_68
    ui->screen_cfg_door_img_68 = lv_image_create(ui->screen_cfg_door_cont_54);
    lv_obj_set_pos(ui->screen_cfg_door_img_68, 33, 17);
    lv_obj_set_size(ui->screen_cfg_door_img_68, 69, 69);
    lv_obj_add_flag(ui->screen_cfg_door_img_68, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_pivot(ui->screen_cfg_door_img_68, 50,50);
    lv_image_set_rotation(ui->screen_cfg_door_img_68, 0);

    //Write style for screen_cfg_door_img_68, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_cfg_door_img_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_cfg_door_img_68, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_label_8
    ui->screen_cfg_door_label_8 = lv_label_create(ui->screen_cfg_door_cont_54);
    lv_obj_set_pos(ui->screen_cfg_door_label_8, 112, 37);
    lv_obj_set_size(ui->screen_cfg_door_label_8, 307, 33);
    lv_label_set_text(ui->screen_cfg_door_label_8, "用户1     IC卡号：78968762");
    lv_label_set_long_mode(ui->screen_cfg_door_label_8, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_door_label_8, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_door_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_door_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_door_label_8, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_door_label_8, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_door_label_8, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_door_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_door_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_door_label_8, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_door_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_door_label_8, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_door_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_door_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_door_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_door_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_btn_74
    ui->screen_cfg_door_btn_74 = lv_button_create(ui->screen_cfg_door_cont_54);
    lv_obj_set_pos(ui->screen_cfg_door_btn_74, 491, 34);
    lv_obj_set_size(ui->screen_cfg_door_btn_74, 36, 36);
    ui->screen_cfg_door_btn_74_label = lv_label_create(ui->screen_cfg_door_btn_74);
    lv_label_set_text(ui->screen_cfg_door_btn_74_label, "");
    lv_label_set_long_mode(ui->screen_cfg_door_btn_74_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_door_btn_74_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_door_btn_74, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_door_btn_74_label, LV_PCT(100));

    //Write style for screen_cfg_door_btn_74, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_door_btn_74, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_door_btn_74, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_door_btn_74, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_door_btn_74, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_cfg_door_btn_74, &_icon_delete_RGB565A8_36x36, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_cfg_door_btn_74, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_cfg_door_btn_74, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_door_btn_74, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_door_btn_74, &lv_font_HarmonyOS_Sans_Medium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_door_btn_74, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_door_btn_74, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_cont_55
    ui->screen_cfg_door_cont_55 = lv_obj_create(ui->screen_cfg_door_cont_49);
    lv_obj_set_pos(ui->screen_cfg_door_cont_55, 27, 506);
    lv_obj_set_size(ui->screen_cfg_door_cont_55, 557, 101);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_door_cont_55, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_door_cont_55, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_door_cont_55, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_door_cont_55, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_door_cont_55, lv_color_hex(0x5A6B81), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_door_cont_55, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_door_cont_55, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_door_cont_55, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_door_cont_55, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_door_cont_55, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_door_cont_55, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_door_cont_55, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_door_cont_55, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_img_69
    ui->screen_cfg_door_img_69 = lv_image_create(ui->screen_cfg_door_cont_55);
    lv_obj_set_pos(ui->screen_cfg_door_img_69, 33, 17);
    lv_obj_set_size(ui->screen_cfg_door_img_69, 69, 69);
    lv_obj_add_flag(ui->screen_cfg_door_img_69, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_pivot(ui->screen_cfg_door_img_69, 50,50);
    lv_image_set_rotation(ui->screen_cfg_door_img_69, 0);

    //Write style for screen_cfg_door_img_69, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_cfg_door_img_69, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_cfg_door_img_69, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_label_9
    ui->screen_cfg_door_label_9 = lv_label_create(ui->screen_cfg_door_cont_55);
    lv_obj_set_pos(ui->screen_cfg_door_label_9, 112, 37);
    lv_obj_set_size(ui->screen_cfg_door_label_9, 307, 33);
    lv_label_set_text(ui->screen_cfg_door_label_9, "用户1     IC卡号：78968762");
    lv_label_set_long_mode(ui->screen_cfg_door_label_9, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_door_label_9, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_door_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_door_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_door_label_9, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_door_label_9, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_door_label_9, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_door_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_door_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_door_label_9, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_door_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_door_label_9, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_door_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_door_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_door_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_door_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_btn_75
    ui->screen_cfg_door_btn_75 = lv_button_create(ui->screen_cfg_door_cont_55);
    lv_obj_set_pos(ui->screen_cfg_door_btn_75, 491, 34);
    lv_obj_set_size(ui->screen_cfg_door_btn_75, 36, 36);
    ui->screen_cfg_door_btn_75_label = lv_label_create(ui->screen_cfg_door_btn_75);
    lv_label_set_text(ui->screen_cfg_door_btn_75_label, "");
    lv_label_set_long_mode(ui->screen_cfg_door_btn_75_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_door_btn_75_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_door_btn_75, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_door_btn_75_label, LV_PCT(100));

    //Write style for screen_cfg_door_btn_75, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_door_btn_75, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_door_btn_75, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_door_btn_75, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_door_btn_75, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_cfg_door_btn_75, &_icon_delete_RGB565A8_36x36, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_cfg_door_btn_75, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_cfg_door_btn_75, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_door_btn_75, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_door_btn_75, &lv_font_HarmonyOS_Sans_Medium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_door_btn_75, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_door_btn_75, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_cont_56
    ui->screen_cfg_door_cont_56 = lv_obj_create(ui->screen_cfg_door_cont_49);
    lv_obj_set_pos(ui->screen_cfg_door_cont_56, 27, 624);
    lv_obj_set_size(ui->screen_cfg_door_cont_56, 557, 101);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_door_cont_56, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_door_cont_56, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_door_cont_56, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_door_cont_56, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_door_cont_56, lv_color_hex(0x5A6B81), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_door_cont_56, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_door_cont_56, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_door_cont_56, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_door_cont_56, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_door_cont_56, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_door_cont_56, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_door_cont_56, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_door_cont_56, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_img_70
    ui->screen_cfg_door_img_70 = lv_image_create(ui->screen_cfg_door_cont_56);
    lv_obj_set_pos(ui->screen_cfg_door_img_70, 33, 17);
    lv_obj_set_size(ui->screen_cfg_door_img_70, 69, 69);
    lv_obj_add_flag(ui->screen_cfg_door_img_70, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_pivot(ui->screen_cfg_door_img_70, 50,50);
    lv_image_set_rotation(ui->screen_cfg_door_img_70, 0);

    //Write style for screen_cfg_door_img_70, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_cfg_door_img_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_cfg_door_img_70, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_label_10
    ui->screen_cfg_door_label_10 = lv_label_create(ui->screen_cfg_door_cont_56);
    lv_obj_set_pos(ui->screen_cfg_door_label_10, 112, 37);
    lv_obj_set_size(ui->screen_cfg_door_label_10, 307, 33);
    lv_label_set_text(ui->screen_cfg_door_label_10, "用户1     IC卡号：78968762");
    lv_label_set_long_mode(ui->screen_cfg_door_label_10, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_door_label_10, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_door_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_door_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_door_label_10, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_door_label_10, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_door_label_10, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_door_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_door_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_door_label_10, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_door_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_door_label_10, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_door_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_door_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_door_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_door_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_btn_76
    ui->screen_cfg_door_btn_76 = lv_button_create(ui->screen_cfg_door_cont_56);
    lv_obj_set_pos(ui->screen_cfg_door_btn_76, 491, 34);
    lv_obj_set_size(ui->screen_cfg_door_btn_76, 36, 36);
    ui->screen_cfg_door_btn_76_label = lv_label_create(ui->screen_cfg_door_btn_76);
    lv_label_set_text(ui->screen_cfg_door_btn_76_label, "");
    lv_label_set_long_mode(ui->screen_cfg_door_btn_76_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_door_btn_76_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_door_btn_76, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_door_btn_76_label, LV_PCT(100));

    //Write style for screen_cfg_door_btn_76, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_door_btn_76, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_door_btn_76, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_door_btn_76, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_door_btn_76, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_cfg_door_btn_76, &_icon_delete_RGB565A8_36x36, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_cfg_door_btn_76, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_cfg_door_btn_76, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_door_btn_76, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_door_btn_76, &lv_font_HarmonyOS_Sans_Medium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_door_btn_76, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_door_btn_76, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_cont_57
    ui->screen_cfg_door_cont_57 = lv_obj_create(ui->screen_cfg_door_cont_49);
    lv_obj_set_pos(ui->screen_cfg_door_cont_57, 630, 378);
    lv_obj_set_size(ui->screen_cfg_door_cont_57, 557, 101);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_door_cont_57, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_door_cont_57, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_door_cont_57, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_door_cont_57, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_door_cont_57, lv_color_hex(0x5A6B81), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_door_cont_57, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_door_cont_57, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_door_cont_57, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_door_cont_57, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_door_cont_57, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_door_cont_57, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_door_cont_57, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_door_cont_57, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_img_71
    ui->screen_cfg_door_img_71 = lv_image_create(ui->screen_cfg_door_cont_57);
    lv_obj_set_pos(ui->screen_cfg_door_img_71, 33, 17);
    lv_obj_set_size(ui->screen_cfg_door_img_71, 69, 69);
    lv_obj_add_flag(ui->screen_cfg_door_img_71, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_pivot(ui->screen_cfg_door_img_71, 50,50);
    lv_image_set_rotation(ui->screen_cfg_door_img_71, 0);

    //Write style for screen_cfg_door_img_71, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_cfg_door_img_71, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_cfg_door_img_71, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_label_11
    ui->screen_cfg_door_label_11 = lv_label_create(ui->screen_cfg_door_cont_57);
    lv_obj_set_pos(ui->screen_cfg_door_label_11, 112, 37);
    lv_obj_set_size(ui->screen_cfg_door_label_11, 307, 33);
    lv_label_set_text(ui->screen_cfg_door_label_11, "用户1     IC卡号：78968762");
    lv_label_set_long_mode(ui->screen_cfg_door_label_11, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_door_label_11, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_door_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_door_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_door_label_11, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_door_label_11, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_door_label_11, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_door_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_door_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_door_label_11, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_door_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_door_label_11, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_door_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_door_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_door_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_door_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_btn_77
    ui->screen_cfg_door_btn_77 = lv_button_create(ui->screen_cfg_door_cont_57);
    lv_obj_set_pos(ui->screen_cfg_door_btn_77, 491, 34);
    lv_obj_set_size(ui->screen_cfg_door_btn_77, 36, 36);
    ui->screen_cfg_door_btn_77_label = lv_label_create(ui->screen_cfg_door_btn_77);
    lv_label_set_text(ui->screen_cfg_door_btn_77_label, "");
    lv_label_set_long_mode(ui->screen_cfg_door_btn_77_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_door_btn_77_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_door_btn_77, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_door_btn_77_label, LV_PCT(100));

    //Write style for screen_cfg_door_btn_77, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_door_btn_77, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_door_btn_77, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_door_btn_77, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_door_btn_77, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_cfg_door_btn_77, &_icon_delete_RGB565A8_36x36, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_cfg_door_btn_77, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_cfg_door_btn_77, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_door_btn_77, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_door_btn_77, &lv_font_HarmonyOS_Sans_Medium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_door_btn_77, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_door_btn_77, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_cont_58
    ui->screen_cfg_door_cont_58 = lv_obj_create(ui->screen_cfg_door_cont_49);
    lv_obj_set_pos(ui->screen_cfg_door_cont_58, 630, 505);
    lv_obj_set_size(ui->screen_cfg_door_cont_58, 557, 101);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_door_cont_58, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_door_cont_58, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_door_cont_58, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_door_cont_58, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_door_cont_58, lv_color_hex(0x5A6B81), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_door_cont_58, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_door_cont_58, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_door_cont_58, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_door_cont_58, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_door_cont_58, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_door_cont_58, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_door_cont_58, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_door_cont_58, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_img_72
    ui->screen_cfg_door_img_72 = lv_image_create(ui->screen_cfg_door_cont_58);
    lv_obj_set_pos(ui->screen_cfg_door_img_72, 33, 17);
    lv_obj_set_size(ui->screen_cfg_door_img_72, 69, 69);
    lv_obj_add_flag(ui->screen_cfg_door_img_72, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_pivot(ui->screen_cfg_door_img_72, 50,50);
    lv_image_set_rotation(ui->screen_cfg_door_img_72, 0);

    //Write style for screen_cfg_door_img_72, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_cfg_door_img_72, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_cfg_door_img_72, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_label_12
    ui->screen_cfg_door_label_12 = lv_label_create(ui->screen_cfg_door_cont_58);
    lv_obj_set_pos(ui->screen_cfg_door_label_12, 112, 37);
    lv_obj_set_size(ui->screen_cfg_door_label_12, 307, 33);
    lv_label_set_text(ui->screen_cfg_door_label_12, "用户1     IC卡号：78968762");
    lv_label_set_long_mode(ui->screen_cfg_door_label_12, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_door_label_12, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_door_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_door_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_door_label_12, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_door_label_12, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_door_label_12, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_door_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_door_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_door_label_12, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_door_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_door_label_12, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_door_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_door_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_door_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_door_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_btn_78
    ui->screen_cfg_door_btn_78 = lv_button_create(ui->screen_cfg_door_cont_58);
    lv_obj_set_pos(ui->screen_cfg_door_btn_78, 491, 34);
    lv_obj_set_size(ui->screen_cfg_door_btn_78, 36, 36);
    ui->screen_cfg_door_btn_78_label = lv_label_create(ui->screen_cfg_door_btn_78);
    lv_label_set_text(ui->screen_cfg_door_btn_78_label, "");
    lv_label_set_long_mode(ui->screen_cfg_door_btn_78_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_door_btn_78_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_door_btn_78, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_door_btn_78_label, LV_PCT(100));

    //Write style for screen_cfg_door_btn_78, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_door_btn_78, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_door_btn_78, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_door_btn_78, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_door_btn_78, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_cfg_door_btn_78, &_icon_delete_RGB565A8_36x36, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_cfg_door_btn_78, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_cfg_door_btn_78, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_door_btn_78, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_door_btn_78, &lv_font_HarmonyOS_Sans_Medium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_door_btn_78, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_door_btn_78, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_cont_59
    ui->screen_cfg_door_cont_59 = lv_obj_create(ui->screen_cfg_door_cont_49);
    lv_obj_set_pos(ui->screen_cfg_door_cont_59, 630, 621);
    lv_obj_set_size(ui->screen_cfg_door_cont_59, 557, 101);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_door_cont_59, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_door_cont_59, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_door_cont_59, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_door_cont_59, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_door_cont_59, lv_color_hex(0x5A6B81), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_door_cont_59, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_door_cont_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_door_cont_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_door_cont_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_door_cont_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_door_cont_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_door_cont_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_door_cont_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_img_73
    ui->screen_cfg_door_img_73 = lv_image_create(ui->screen_cfg_door_cont_59);
    lv_obj_set_pos(ui->screen_cfg_door_img_73, 33, 17);
    lv_obj_set_size(ui->screen_cfg_door_img_73, 69, 69);
    lv_obj_add_flag(ui->screen_cfg_door_img_73, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_pivot(ui->screen_cfg_door_img_73, 50,50);
    lv_image_set_rotation(ui->screen_cfg_door_img_73, 0);

    //Write style for screen_cfg_door_img_73, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_cfg_door_img_73, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_cfg_door_img_73, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_label_13
    ui->screen_cfg_door_label_13 = lv_label_create(ui->screen_cfg_door_cont_59);
    lv_obj_set_pos(ui->screen_cfg_door_label_13, 112, 37);
    lv_obj_set_size(ui->screen_cfg_door_label_13, 307, 33);
    lv_label_set_text(ui->screen_cfg_door_label_13, "用户1     IC卡号：78968762");
    lv_label_set_long_mode(ui->screen_cfg_door_label_13, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_door_label_13, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_door_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_door_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_door_label_13, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_door_label_13, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_door_label_13, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_door_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_door_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_door_label_13, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_door_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_door_label_13, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_door_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_door_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_door_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_door_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_btn_79
    ui->screen_cfg_door_btn_79 = lv_button_create(ui->screen_cfg_door_cont_59);
    lv_obj_set_pos(ui->screen_cfg_door_btn_79, 491, 34);
    lv_obj_set_size(ui->screen_cfg_door_btn_79, 36, 36);
    ui->screen_cfg_door_btn_79_label = lv_label_create(ui->screen_cfg_door_btn_79);
    lv_label_set_text(ui->screen_cfg_door_btn_79_label, "");
    lv_label_set_long_mode(ui->screen_cfg_door_btn_79_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_door_btn_79_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_door_btn_79, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_door_btn_79_label, LV_PCT(100));

    //Write style for screen_cfg_door_btn_79, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_door_btn_79, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_door_btn_79, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_door_btn_79, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_door_btn_79, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_cfg_door_btn_79, &_icon_delete_RGB565A8_36x36, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_cfg_door_btn_79, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_cfg_door_btn_79, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_door_btn_79, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_door_btn_79, &lv_font_HarmonyOS_Sans_Medium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_door_btn_79, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_door_btn_79, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_cont_61
    ui->screen_cfg_door_cont_61 = lv_obj_create(ui->screen_cfg_door_cont_1);
    lv_obj_set_pos(ui->screen_cfg_door_cont_61, 327, 217);
    lv_obj_set_size(ui->screen_cfg_door_cont_61, 629, 365);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_door_cont_61, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_cfg_door_cont_61, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_cfg_door_cont_61, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_door_cont_61, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_door_cont_61, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_door_cont_61, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_door_cont_61, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_door_cont_61, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_door_cont_61, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_door_cont_61, lv_color_hex(0x2A405C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_door_cont_61, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_door_cont_61, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_door_cont_61, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_door_cont_61, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_door_cont_61, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_door_cont_61, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_label_15
    ui->screen_cfg_door_label_15 = lv_label_create(ui->screen_cfg_door_cont_61);
    lv_obj_set_pos(ui->screen_cfg_door_label_15, 116, 126);
    lv_obj_set_size(ui->screen_cfg_door_label_15, 396, 50);
    lv_label_set_text(ui->screen_cfg_door_label_15, "是否删除用户门禁信息？");
    lv_label_set_long_mode(ui->screen_cfg_door_label_15, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_door_label_15, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_door_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_door_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_door_label_15, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_door_label_15, &lv_font_AlibabaPuHuiTiRegular_36, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_door_label_15, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_door_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_door_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_door_label_15, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_door_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_door_label_15, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_door_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_door_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_door_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_door_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_btn_81
    ui->screen_cfg_door_btn_81 = lv_button_create(ui->screen_cfg_door_cont_61);
    lv_obj_set_pos(ui->screen_cfg_door_btn_81, 349, 242);
    lv_obj_set_size(ui->screen_cfg_door_btn_81, 150, 60);
    ui->screen_cfg_door_btn_81_label = lv_label_create(ui->screen_cfg_door_btn_81);
    lv_label_set_text(ui->screen_cfg_door_btn_81_label, "确认");
    lv_label_set_long_mode(ui->screen_cfg_door_btn_81_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_door_btn_81_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_door_btn_81, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_door_btn_81_label, LV_PCT(100));

    //Write style for screen_cfg_door_btn_81, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_door_btn_81, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_door_btn_81, lv_color_hex(0x44D7B6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_door_btn_81, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_door_btn_81, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_door_btn_81, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_door_btn_81, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_door_btn_81, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_door_btn_81, &lv_font_HarmonyOS_Sans_Medium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_door_btn_81, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_door_btn_81, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_btn_82
    ui->screen_cfg_door_btn_82 = lv_button_create(ui->screen_cfg_door_cont_61);
    lv_obj_set_pos(ui->screen_cfg_door_btn_82, 129, 242);
    lv_obj_set_size(ui->screen_cfg_door_btn_82, 150, 60);
    ui->screen_cfg_door_btn_82_label = lv_label_create(ui->screen_cfg_door_btn_82);
    lv_label_set_text(ui->screen_cfg_door_btn_82_label, "取消");
    lv_label_set_long_mode(ui->screen_cfg_door_btn_82_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_door_btn_82_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_door_btn_82, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_door_btn_82_label, LV_PCT(100));

    //Write style for screen_cfg_door_btn_82, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_door_btn_82, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_door_btn_82, lv_color_hex(0xff5756), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_door_btn_82, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_door_btn_82, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_door_btn_82, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_door_btn_82, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_door_btn_82, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_door_btn_82, &lv_font_HarmonyOS_Sans_Medium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_door_btn_82, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_door_btn_82, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_btn_80
    ui->screen_cfg_door_btn_80 = lv_button_create(ui->screen_cfg_door_cont_61);
    lv_obj_set_pos(ui->screen_cfg_door_btn_80, 520, 6);
    lv_obj_set_size(ui->screen_cfg_door_btn_80, 100, 50);
    ui->screen_cfg_door_btn_80_label = lv_label_create(ui->screen_cfg_door_btn_80);
    lv_label_set_text(ui->screen_cfg_door_btn_80_label, "" LV_SYMBOL_CLOSE " ");
    lv_label_set_long_mode(ui->screen_cfg_door_btn_80_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_door_btn_80_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_door_btn_80, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_door_btn_80_label, LV_PCT(100));

    //Write style for screen_cfg_door_btn_80, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_door_btn_80, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_door_btn_80, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_door_btn_80, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_door_btn_80, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_door_btn_80, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_door_btn_80, &lv_font_HarmonyOS_Sans_Medium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_door_btn_80, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_door_btn_80, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_cont_60
    ui->screen_cfg_door_cont_60 = lv_obj_create(ui->screen_cfg_door_cont_1);
    lv_obj_set_pos(ui->screen_cfg_door_cont_60, 327, 217);
    lv_obj_set_size(ui->screen_cfg_door_cont_60, 629, 365);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_door_cont_60, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_cfg_door_cont_60, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_cfg_door_cont_60, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_door_cont_60, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_door_cont_60, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_door_cont_60, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_door_cont_60, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_door_cont_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_door_cont_60, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_door_cont_60, lv_color_hex(0x2A405C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_door_cont_60, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_door_cont_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_door_cont_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_door_cont_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_door_cont_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_door_cont_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_label_14
    ui->screen_cfg_door_label_14 = lv_label_create(ui->screen_cfg_door_cont_60);
    lv_obj_set_pos(ui->screen_cfg_door_label_14, 266, 229);
    lv_obj_set_size(ui->screen_cfg_door_label_14, 108, 50);
    lv_label_set_text(ui->screen_cfg_door_label_14, "请刷卡");
    lv_label_set_long_mode(ui->screen_cfg_door_label_14, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_door_label_14, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_door_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_door_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_door_label_14, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_door_label_14, &lv_font_AlibabaPuHuiTiRegular_36, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_door_label_14, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_door_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_door_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_door_label_14, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_door_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_door_label_14, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_door_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_door_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_door_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_door_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_btn_83
    ui->screen_cfg_door_btn_83 = lv_button_create(ui->screen_cfg_door_cont_60);
    lv_obj_set_pos(ui->screen_cfg_door_btn_83, 554, 22);
    lv_obj_set_size(ui->screen_cfg_door_btn_83, 100, 50);
    ui->screen_cfg_door_btn_83_label = lv_label_create(ui->screen_cfg_door_btn_83);
    lv_label_set_text(ui->screen_cfg_door_btn_83_label, "" LV_SYMBOL_CLOSE " ");
    lv_label_set_long_mode(ui->screen_cfg_door_btn_83_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_door_btn_83_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_door_btn_83, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_door_btn_83_label, LV_PCT(100));

    //Write style for screen_cfg_door_btn_83, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_door_btn_83, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_door_btn_83, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_door_btn_83, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_door_btn_83, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_door_btn_83, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_door_btn_83, &lv_font_HarmonyOS_Sans_Medium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_door_btn_83, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_door_btn_83, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_cont_62
    ui->screen_cfg_door_cont_62 = lv_obj_create(ui->screen_cfg_door_cont_1);
    lv_obj_set_pos(ui->screen_cfg_door_cont_62, 325, 217);
    lv_obj_set_size(ui->screen_cfg_door_cont_62, 629, 365);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_door_cont_62, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_cfg_door_cont_62, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_cfg_door_cont_62, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_door_cont_62, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_door_cont_62, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_door_cont_62, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_door_cont_62, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_door_cont_62, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_door_cont_62, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_door_cont_62, lv_color_hex(0x2A405C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_door_cont_62, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_door_cont_62, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_door_cont_62, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_door_cont_62, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_door_cont_62, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_door_cont_62, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_label_16
    ui->screen_cfg_door_label_16 = lv_label_create(ui->screen_cfg_door_cont_62);
    lv_obj_set_pos(ui->screen_cfg_door_label_16, 236, 230);
    lv_obj_set_size(ui->screen_cfg_door_label_16, 149, 50);
    lv_label_set_text(ui->screen_cfg_door_label_16, "刷卡成功");
    lv_label_set_long_mode(ui->screen_cfg_door_label_16, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_door_label_16, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_door_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_door_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_door_label_16, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_door_label_16, &lv_font_AlibabaPuHuiTiRegular_36, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_door_label_16, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_door_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_door_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_door_label_16, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_door_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_door_label_16, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_door_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_door_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_door_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_door_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_btn_84
    ui->screen_cfg_door_btn_84 = lv_button_create(ui->screen_cfg_door_cont_62);
    lv_obj_set_pos(ui->screen_cfg_door_btn_84, 554, 22);
    lv_obj_set_size(ui->screen_cfg_door_btn_84, 100, 50);
    ui->screen_cfg_door_btn_84_label = lv_label_create(ui->screen_cfg_door_btn_84);
    lv_label_set_text(ui->screen_cfg_door_btn_84_label, "" LV_SYMBOL_CLOSE " ");
    lv_label_set_long_mode(ui->screen_cfg_door_btn_84_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_door_btn_84_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_door_btn_84, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_door_btn_84_label, LV_PCT(100));

    //Write style for screen_cfg_door_btn_84, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_door_btn_84, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_door_btn_84, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_door_btn_84, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_door_btn_84, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_door_btn_84, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_door_btn_84, &lv_font_HarmonyOS_Sans_Medium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_door_btn_84, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_door_btn_84, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_datetext_1
    ui->screen_cfg_door_datetext_1 = lv_label_create(ui->screen_cfg_door);
    lv_obj_set_pos(ui->screen_cfg_door_datetext_1, 912, 16);
    lv_obj_set_size(ui->screen_cfg_door_datetext_1, 130, 36);
    lv_label_set_text(ui->screen_cfg_door_datetext_1, "2024/04/22");
    lv_obj_set_style_text_align(ui->screen_cfg_door_datetext_1, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_add_flag(ui->screen_cfg_door_datetext_1, LV_OBJ_FLAG_CLICKABLE);
    lv_obj_add_event_cb(ui->screen_cfg_door_datetext_1, screen_cfg_door_datetext_1_event_handler, LV_EVENT_ALL, NULL);

    //Write style for screen_cfg_door_datetext_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_door_datetext_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_door_datetext_1, &lv_font_AlibabaPuHuiTiRegular_18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_door_datetext_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_door_datetext_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_door_datetext_1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_door_datetext_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_door_datetext_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_door_datetext_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_door_datetext_1, 9, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_door_datetext_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_door_datetext_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_door_datetext_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_img_63
    ui->screen_cfg_door_img_63 = lv_image_create(ui->screen_cfg_door);
    lv_obj_set_pos(ui->screen_cfg_door_img_63, 43, 13);
    lv_obj_set_size(ui->screen_cfg_door_img_63, 184, 56);
    lv_obj_add_flag(ui->screen_cfg_door_img_63, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_pivot(ui->screen_cfg_door_img_63, 50,50);
    lv_image_set_rotation(ui->screen_cfg_door_img_63, 0);

    //Write style for screen_cfg_door_img_63, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_cfg_door_img_63, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_cfg_door_img_63, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_digital_clock_1
    static bool screen_cfg_door_digital_clock_1_timer_enabled = false;
    ui->screen_cfg_door_digital_clock_1 = lv_label_create(ui->screen_cfg_door);
    lv_obj_set_pos(ui->screen_cfg_door_digital_clock_1, 1042, 16);
    lv_obj_set_size(ui->screen_cfg_door_digital_clock_1, 130, 36);
    lv_label_set_text(ui->screen_cfg_door_digital_clock_1, "11:25");
    if (!screen_cfg_door_digital_clock_1_timer_enabled) {
        lv_timer_create(screen_cfg_door_digital_clock_1_timer, 1000, NULL);
        screen_cfg_door_digital_clock_1_timer_enabled = true;
    }

    //Write style for screen_cfg_door_digital_clock_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_radius(ui->screen_cfg_door_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_door_digital_clock_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_door_digital_clock_1, &lv_font_AlibabaPuHuiTiRegular_18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_door_digital_clock_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_door_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_door_digital_clock_1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_door_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_door_digital_clock_1, 9, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_door_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_door_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_door_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_door_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_btn_1
    ui->screen_cfg_door_btn_1 = lv_button_create(ui->screen_cfg_door);
    lv_obj_set_pos(ui->screen_cfg_door_btn_1, 1098, 14);
    lv_obj_set_size(ui->screen_cfg_door_btn_1, 44, 44);
    ui->screen_cfg_door_btn_1_label = lv_label_create(ui->screen_cfg_door_btn_1);
    lv_label_set_text(ui->screen_cfg_door_btn_1_label, "");
    lv_label_set_long_mode(ui->screen_cfg_door_btn_1_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_door_btn_1_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_door_btn_1, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_door_btn_1_label, LV_PCT(100));

    //Write style for screen_cfg_door_btn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_door_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_door_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_door_btn_1, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_door_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_cfg_door_btn_1, &_icon_setup_RGB565A8_44x44, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_cfg_door_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_cfg_door_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_door_btn_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_door_btn_1, &lv_font_AlibabaPuHuiTiRegular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_door_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_door_btn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_img_13
    ui->screen_cfg_door_img_13 = lv_image_create(ui->screen_cfg_door);
    lv_obj_set_pos(ui->screen_cfg_door_img_13, 1157, 14);
    lv_obj_set_size(ui->screen_cfg_door_img_13, 44, 44);
    lv_obj_add_flag(ui->screen_cfg_door_img_13, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_cfg_door_img_13, &_icon_device_RGB565A8_44x44);
    lv_image_set_pivot(ui->screen_cfg_door_img_13, 50,50);
    lv_image_set_rotation(ui->screen_cfg_door_img_13, 0);

    //Write style for screen_cfg_door_img_13, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_cfg_door_img_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_cfg_door_img_13, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_btn_4
    ui->screen_cfg_door_btn_4 = lv_button_create(ui->screen_cfg_door);
    lv_obj_set_pos(ui->screen_cfg_door_btn_4, 1070, 88);
    lv_obj_set_size(ui->screen_cfg_door_btn_4, 163, 42);
    ui->screen_cfg_door_btn_4_label = lv_label_create(ui->screen_cfg_door_btn_4);
    lv_label_set_text(ui->screen_cfg_door_btn_4_label, "门锁控制");
    lv_label_set_long_mode(ui->screen_cfg_door_btn_4_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_door_btn_4_label, LV_ALIGN_LEFT_MID, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_door_btn_4, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_door_btn_4_label, LV_PCT(100));

    //Write style for screen_cfg_door_btn_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_door_btn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_door_btn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_door_btn_4, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_door_btn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_door_btn_4, lv_color_hex(0x44D7B6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_door_btn_4, &lv_font_AlibabaPuHuiTiRegular_34, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_door_btn_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_door_btn_4, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_img_14
    ui->screen_cfg_door_img_14 = lv_image_create(ui->screen_cfg_door);
    lv_obj_set_pos(ui->screen_cfg_door_img_14, 1215, 14);
    lv_obj_set_size(ui->screen_cfg_door_img_14, 44, 44);
    lv_obj_add_flag(ui->screen_cfg_door_img_14, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_cfg_door_img_14, &_icon_signal_RGB565A8_44x44);
    lv_image_set_pivot(ui->screen_cfg_door_img_14, 50,50);
    lv_image_set_rotation(ui->screen_cfg_door_img_14, 0);

    //Write style for screen_cfg_door_img_14, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_cfg_door_img_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_cfg_door_img_14, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_img_15
    ui->screen_cfg_door_img_15 = lv_image_create(ui->screen_cfg_door);
    lv_obj_set_pos(ui->screen_cfg_door_img_15, 1215, 14);
    lv_obj_set_size(ui->screen_cfg_door_img_15, 44, 44);
    lv_obj_add_flag(ui->screen_cfg_door_img_15, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_cfg_door_img_15, &_icon_signal_n_RGB565A8_44x44);
    lv_image_set_pivot(ui->screen_cfg_door_img_15, 50,50);
    lv_image_set_rotation(ui->screen_cfg_door_img_15, 0);

    //Write style for screen_cfg_door_img_15, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_cfg_door_img_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_cfg_door_img_15, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_btn_2
    ui->screen_cfg_door_btn_2 = lv_button_create(ui->screen_cfg_door);
    lv_obj_set_pos(ui->screen_cfg_door_btn_2, 891, 89);
    lv_obj_set_size(ui->screen_cfg_door_btn_2, 155, 42);
    ui->screen_cfg_door_btn_2_label = lv_label_create(ui->screen_cfg_door_btn_2);
    lv_label_set_text(ui->screen_cfg_door_btn_2_label, "报警设置");
    lv_label_set_long_mode(ui->screen_cfg_door_btn_2_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_door_btn_2_label, LV_ALIGN_LEFT_MID, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_door_btn_2, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_door_btn_2_label, LV_PCT(100));

    //Write style for screen_cfg_door_btn_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_door_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_door_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_door_btn_2, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_door_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_door_btn_2, lv_color_hex(0x758AA6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_door_btn_2, &lv_font_AlibabaPuHuiTiRegular_34, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_door_btn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_door_btn_2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_btn_5
    ui->screen_cfg_door_btn_5 = lv_button_create(ui->screen_cfg_door);
    lv_obj_set_pos(ui->screen_cfg_door_btn_5, 48, 100);
    lv_obj_set_size(ui->screen_cfg_door_btn_5, 44, 44);
    ui->screen_cfg_door_btn_5_label = lv_label_create(ui->screen_cfg_door_btn_5);
    lv_label_set_text(ui->screen_cfg_door_btn_5_label, "");
    lv_label_set_long_mode(ui->screen_cfg_door_btn_5_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_door_btn_5_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_door_btn_5, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_door_btn_5_label, LV_PCT(100));

    //Write style for screen_cfg_door_btn_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_door_btn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_door_btn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_door_btn_5, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_door_btn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_cfg_door_btn_5, &_icon_reture_RGB565A8_44x44, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_cfg_door_btn_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_cfg_door_btn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_door_btn_5, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_door_btn_5, &lv_font_AlibabaPuHuiTiRegular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_door_btn_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_door_btn_5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_door_line_1
    ui->screen_cfg_door_line_1 = lv_line_create(ui->screen_cfg_door);
    lv_obj_set_pos(ui->screen_cfg_door_line_1, 1110, 139);
    lv_obj_set_size(ui->screen_cfg_door_line_1, 40, 7);
    static lv_point_precise_t screen_cfg_door_line_1[] = {{0, 0},{40, 0}};
    lv_line_set_points(ui->screen_cfg_door_line_1, screen_cfg_door_line_1, 2);

    //Write style for screen_cfg_door_line_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_cfg_door_line_1, 7, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_cfg_door_line_1, lv_color_hex(0x44D7B6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_cfg_door_line_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_cfg_door_line_1, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of screen_cfg_door.


    //Update current screen layout.
    lv_obj_update_layout(ui->screen_cfg_door);

    //Init events for screen.
    events_init_screen_cfg_door(ui);
}
