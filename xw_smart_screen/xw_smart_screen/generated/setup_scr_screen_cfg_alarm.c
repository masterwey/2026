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



int screen_cfg_alarm_digital_clock_1_min_value = 25;
int screen_cfg_alarm_digital_clock_1_hour_value = 11;
int screen_cfg_alarm_digital_clock_1_sec_value = 50;
void setup_scr_screen_cfg_alarm(lv_ui *ui)
{
    //Write codes screen_cfg_alarm
    ui->screen_cfg_alarm = lv_obj_create(NULL);
    lv_obj_set_size(ui->screen_cfg_alarm, 1280, 800);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_alarm, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_alarm, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_cont_1
    ui->screen_cfg_alarm_cont_1 = lv_obj_create(ui->screen_cfg_alarm);
    lv_obj_set_pos(ui->screen_cfg_alarm_cont_1, 0, 0);
    lv_obj_set_size(ui->screen_cfg_alarm_cont_1, 1280, 1540);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_alarm_cont_1, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_alarm_cont_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_cont_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_cont_1, lv_color_hex(0x1B2C42), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_cont_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_btn_7
    ui->screen_cfg_alarm_btn_7 = lv_button_create(ui->screen_cfg_alarm_cont_1);
    lv_obj_set_pos(ui->screen_cfg_alarm_btn_7, 699, 89);
    lv_obj_set_size(ui->screen_cfg_alarm_btn_7, 143, 47);
    ui->screen_cfg_alarm_btn_7_label = lv_label_create(ui->screen_cfg_alarm_btn_7);
    lv_label_set_text(ui->screen_cfg_alarm_btn_7_label, "设备控制");
    lv_label_set_long_mode(ui->screen_cfg_alarm_btn_7_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_alarm_btn_7_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_alarm_btn_7, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_alarm_btn_7_label, LV_PCT(100));

    //Write style for screen_cfg_alarm_btn_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_btn_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_btn_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_btn_7, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_btn_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_btn_7, lv_color_hex(0x758AA6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_btn_7, &lv_font_AlibabaPuHuiTiRegular_34, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_btn_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_btn_7, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_cont_37
    ui->screen_cfg_alarm_cont_37 = lv_obj_create(ui->screen_cfg_alarm_cont_1);
    lv_obj_set_pos(ui->screen_cfg_alarm_cont_37, 761, 174);
    lv_obj_set_size(ui->screen_cfg_alarm_cont_37, 490, 1329);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_alarm_cont_37, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_alarm_cont_37, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_cont_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_cont_37, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_cont_37, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_cont_37, lv_color_hex(0x2A405C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_cont_37, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_cont_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_cont_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_cont_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_cont_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_cont_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_label_70
    ui->screen_cfg_alarm_label_70 = lv_label_create(ui->screen_cfg_alarm_cont_37);
    lv_obj_set_pos(ui->screen_cfg_alarm_label_70, 38, 33);
    lv_obj_set_size(ui->screen_cfg_alarm_label_70, 164, 42);
    lv_label_set_text(ui->screen_cfg_alarm_label_70, "报警联系人");
    lv_label_set_long_mode(ui->screen_cfg_alarm_label_70, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_alarm_label_70, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_label_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_label_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_label_70, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_label_70, &lv_font_AlibabaPuHuiTiRegular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_label_70, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_alarm_label_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_alarm_label_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_label_70, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_label_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_label_70, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_label_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_label_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_label_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_label_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_cont_47
    ui->screen_cfg_alarm_cont_47 = lv_obj_create(ui->screen_cfg_alarm_cont_37);
    lv_obj_set_pos(ui->screen_cfg_alarm_cont_47, 28, 317);
    lv_obj_set_size(ui->screen_cfg_alarm_cont_47, 444, 66);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_alarm_cont_47, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_alarm_cont_47, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_cont_47, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_alarm_cont_47, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_alarm_cont_47, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_alarm_cont_47, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_cont_47, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_cont_47, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_cont_47, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_cont_47, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_cont_47, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_cont_47, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_cont_47, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_ta_12
    ui->screen_cfg_alarm_ta_12 = lv_textarea_create(ui->screen_cfg_alarm_cont_47);
    lv_obj_set_pos(ui->screen_cfg_alarm_ta_12, 7, 12);
    lv_obj_set_size(ui->screen_cfg_alarm_ta_12, 231, 38);
    lv_textarea_set_text(ui->screen_cfg_alarm_ta_12, "18235878219");
    lv_textarea_set_placeholder_text(ui->screen_cfg_alarm_ta_12, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_alarm_ta_12, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_alarm_ta_12, false);
    lv_textarea_set_one_line(ui->screen_cfg_alarm_ta_12, true);
    lv_textarea_set_accepted_chars(ui->screen_cfg_alarm_ta_12, "");
    lv_textarea_set_max_length(ui->screen_cfg_alarm_ta_12, 11);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_alarm_ta_12, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_alarm_ta_12, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_ta_12, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_ta_12, &lv_font_HarmonyOS_Sans_Medium_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_ta_12, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_alarm_ta_12, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_ta_12, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_ta_12, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_ta_12, lv_color_hex(0x949494), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_ta_12, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_ta_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_ta_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_ta_12, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_ta_12, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_ta_12, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_ta_12, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_btn_69
    ui->screen_cfg_alarm_btn_69 = lv_button_create(ui->screen_cfg_alarm_cont_47);
    lv_obj_set_pos(ui->screen_cfg_alarm_btn_69, 384, 13);
    lv_obj_set_size(ui->screen_cfg_alarm_btn_69, 36, 36);
    ui->screen_cfg_alarm_btn_69_label = lv_label_create(ui->screen_cfg_alarm_btn_69);
    lv_label_set_text(ui->screen_cfg_alarm_btn_69_label, "");
    lv_label_set_long_mode(ui->screen_cfg_alarm_btn_69_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_alarm_btn_69_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_alarm_btn_69, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_alarm_btn_69_label, LV_PCT(100));

    //Write style for screen_cfg_alarm_btn_69, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_btn_69, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_btn_69, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_btn_69, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_btn_69, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_cfg_alarm_btn_69, &_icon_delete_RGB565A8_36x36, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_cfg_alarm_btn_69, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_cfg_alarm_btn_69, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_btn_69, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_btn_69, &lv_font_HarmonyOS_Sans_Medium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_btn_69, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_btn_69, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_sw_22
    ui->screen_cfg_alarm_sw_22 = lv_switch_create(ui->screen_cfg_alarm_cont_47);
    lv_obj_set_pos(ui->screen_cfg_alarm_sw_22, 278, 16);
    lv_obj_set_size(ui->screen_cfg_alarm_sw_22, 77, 29);

    //Write style for screen_cfg_alarm_sw_22, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_22, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_22, lv_color_hex(0xe6e2e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_22, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_sw_22, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_sw_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_alarm_sw_22, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_22, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_22, lv_color_hex(0x44D7B6), LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_22, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_22, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

    //Write style for screen_cfg_alarm_sw_22, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_22, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_22, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_22, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_22, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_sw_22, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write style for screen_cfg_alarm_sw_22, Part: LV_PART_KNOB, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_22, 255, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_22, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_22, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_22, 0, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_sw_22, 10, LV_PART_KNOB|LV_STATE_FOCUSED);

    //Write codes screen_cfg_alarm_cont_48
    ui->screen_cfg_alarm_cont_48 = lv_obj_create(ui->screen_cfg_alarm_cont_37);
    lv_obj_set_pos(ui->screen_cfg_alarm_cont_48, 28, 796);
    lv_obj_set_size(ui->screen_cfg_alarm_cont_48, 444, 66);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_alarm_cont_48, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_alarm_cont_48, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_cont_48, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_alarm_cont_48, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_alarm_cont_48, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_alarm_cont_48, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_cont_48, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_cont_48, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_cont_48, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_cont_48, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_cont_48, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_cont_48, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_cont_48, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_ta_11
    ui->screen_cfg_alarm_ta_11 = lv_textarea_create(ui->screen_cfg_alarm_cont_48);
    lv_obj_set_pos(ui->screen_cfg_alarm_ta_11, 7, 12);
    lv_obj_set_size(ui->screen_cfg_alarm_ta_11, 231, 38);
    lv_textarea_set_text(ui->screen_cfg_alarm_ta_11, "18235878219");
    lv_textarea_set_placeholder_text(ui->screen_cfg_alarm_ta_11, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_alarm_ta_11, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_alarm_ta_11, false);
    lv_textarea_set_one_line(ui->screen_cfg_alarm_ta_11, true);
    lv_textarea_set_accepted_chars(ui->screen_cfg_alarm_ta_11, "");
    lv_textarea_set_max_length(ui->screen_cfg_alarm_ta_11, 11);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_alarm_ta_11, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_alarm_ta_11, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_ta_11, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_ta_11, &lv_font_HarmonyOS_Sans_Medium_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_ta_11, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_alarm_ta_11, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_ta_11, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_ta_11, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_ta_11, lv_color_hex(0x949494), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_ta_11, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_ta_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_ta_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_ta_11, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_ta_11, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_ta_11, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_ta_11, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_btn_68
    ui->screen_cfg_alarm_btn_68 = lv_button_create(ui->screen_cfg_alarm_cont_48);
    lv_obj_set_pos(ui->screen_cfg_alarm_btn_68, 384, 13);
    lv_obj_set_size(ui->screen_cfg_alarm_btn_68, 36, 36);
    ui->screen_cfg_alarm_btn_68_label = lv_label_create(ui->screen_cfg_alarm_btn_68);
    lv_label_set_text(ui->screen_cfg_alarm_btn_68_label, "");
    lv_label_set_long_mode(ui->screen_cfg_alarm_btn_68_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_alarm_btn_68_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_alarm_btn_68, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_alarm_btn_68_label, LV_PCT(100));

    //Write style for screen_cfg_alarm_btn_68, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_btn_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_btn_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_btn_68, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_btn_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_cfg_alarm_btn_68, &_icon_delete_RGB565A8_36x36, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_cfg_alarm_btn_68, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_cfg_alarm_btn_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_btn_68, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_btn_68, &lv_font_HarmonyOS_Sans_Medium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_btn_68, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_btn_68, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_sw_21
    ui->screen_cfg_alarm_sw_21 = lv_switch_create(ui->screen_cfg_alarm_cont_48);
    lv_obj_set_pos(ui->screen_cfg_alarm_sw_21, 278, 16);
    lv_obj_set_size(ui->screen_cfg_alarm_sw_21, 77, 29);

    //Write style for screen_cfg_alarm_sw_21, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_21, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_21, lv_color_hex(0xe6e2e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_21, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_sw_21, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_sw_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_alarm_sw_21, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_21, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_21, lv_color_hex(0x44D7B6), LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_21, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_21, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

    //Write style for screen_cfg_alarm_sw_21, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_21, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_21, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_21, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_21, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_sw_21, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write style for screen_cfg_alarm_sw_21, Part: LV_PART_KNOB, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_21, 255, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_21, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_21, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_21, 0, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_sw_21, 10, LV_PART_KNOB|LV_STATE_FOCUSED);

    //Write codes screen_cfg_alarm_cont_49
    ui->screen_cfg_alarm_cont_49 = lv_obj_create(ui->screen_cfg_alarm_cont_37);
    lv_obj_set_pos(ui->screen_cfg_alarm_cont_49, 27, 1117);
    lv_obj_set_size(ui->screen_cfg_alarm_cont_49, 444, 66);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_alarm_cont_49, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_alarm_cont_49, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_cont_49, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_alarm_cont_49, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_alarm_cont_49, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_alarm_cont_49, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_cont_49, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_cont_49, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_cont_49, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_cont_49, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_cont_49, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_cont_49, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_cont_49, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_ta_10
    ui->screen_cfg_alarm_ta_10 = lv_textarea_create(ui->screen_cfg_alarm_cont_49);
    lv_obj_set_pos(ui->screen_cfg_alarm_ta_10, 7, 12);
    lv_obj_set_size(ui->screen_cfg_alarm_ta_10, 231, 38);
    lv_textarea_set_text(ui->screen_cfg_alarm_ta_10, "18235878219");
    lv_textarea_set_placeholder_text(ui->screen_cfg_alarm_ta_10, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_alarm_ta_10, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_alarm_ta_10, false);
    lv_textarea_set_one_line(ui->screen_cfg_alarm_ta_10, true);
    lv_textarea_set_accepted_chars(ui->screen_cfg_alarm_ta_10, "");
    lv_textarea_set_max_length(ui->screen_cfg_alarm_ta_10, 11);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_alarm_ta_10, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_alarm_ta_10, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_ta_10, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_ta_10, &lv_font_HarmonyOS_Sans_Medium_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_ta_10, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_alarm_ta_10, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_ta_10, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_ta_10, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_ta_10, lv_color_hex(0x949494), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_ta_10, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_ta_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_ta_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_ta_10, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_ta_10, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_ta_10, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_ta_10, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_btn_67
    ui->screen_cfg_alarm_btn_67 = lv_button_create(ui->screen_cfg_alarm_cont_49);
    lv_obj_set_pos(ui->screen_cfg_alarm_btn_67, 384, 13);
    lv_obj_set_size(ui->screen_cfg_alarm_btn_67, 36, 36);
    ui->screen_cfg_alarm_btn_67_label = lv_label_create(ui->screen_cfg_alarm_btn_67);
    lv_label_set_text(ui->screen_cfg_alarm_btn_67_label, "");
    lv_label_set_long_mode(ui->screen_cfg_alarm_btn_67_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_alarm_btn_67_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_alarm_btn_67, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_alarm_btn_67_label, LV_PCT(100));

    //Write style for screen_cfg_alarm_btn_67, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_btn_67, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_btn_67, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_btn_67, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_btn_67, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_cfg_alarm_btn_67, &_icon_delete_RGB565A8_36x36, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_cfg_alarm_btn_67, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_cfg_alarm_btn_67, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_btn_67, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_btn_67, &lv_font_HarmonyOS_Sans_Medium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_btn_67, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_btn_67, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_sw_20
    ui->screen_cfg_alarm_sw_20 = lv_switch_create(ui->screen_cfg_alarm_cont_49);
    lv_obj_set_pos(ui->screen_cfg_alarm_sw_20, 278, 16);
    lv_obj_set_size(ui->screen_cfg_alarm_sw_20, 77, 29);

    //Write style for screen_cfg_alarm_sw_20, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_20, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_20, lv_color_hex(0xe6e2e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_20, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_sw_20, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_sw_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_alarm_sw_20, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_20, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_20, lv_color_hex(0x44D7B6), LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_20, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_20, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

    //Write style for screen_cfg_alarm_sw_20, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_20, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_20, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_20, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_20, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_sw_20, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write style for screen_cfg_alarm_sw_20, Part: LV_PART_KNOB, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_20, 255, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_20, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_20, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_20, 0, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_sw_20, 10, LV_PART_KNOB|LV_STATE_FOCUSED);

    //Write codes screen_cfg_alarm_cont_46
    ui->screen_cfg_alarm_cont_46 = lv_obj_create(ui->screen_cfg_alarm_cont_37);
    lv_obj_set_pos(ui->screen_cfg_alarm_cont_46, 28, 487);
    lv_obj_set_size(ui->screen_cfg_alarm_cont_46, 444, 66);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_alarm_cont_46, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_alarm_cont_46, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_cont_46, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_alarm_cont_46, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_alarm_cont_46, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_alarm_cont_46, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_cont_46, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_cont_46, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_cont_46, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_cont_46, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_cont_46, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_cont_46, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_cont_46, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_ta_9
    ui->screen_cfg_alarm_ta_9 = lv_textarea_create(ui->screen_cfg_alarm_cont_46);
    lv_obj_set_pos(ui->screen_cfg_alarm_ta_9, 7, 12);
    lv_obj_set_size(ui->screen_cfg_alarm_ta_9, 231, 38);
    lv_textarea_set_text(ui->screen_cfg_alarm_ta_9, "18235878219");
    lv_textarea_set_placeholder_text(ui->screen_cfg_alarm_ta_9, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_alarm_ta_9, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_alarm_ta_9, false);
    lv_textarea_set_one_line(ui->screen_cfg_alarm_ta_9, true);
    lv_textarea_set_accepted_chars(ui->screen_cfg_alarm_ta_9, "");
    lv_textarea_set_max_length(ui->screen_cfg_alarm_ta_9, 11);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_alarm_ta_9, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_alarm_ta_9, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_ta_9, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_ta_9, &lv_font_HarmonyOS_Sans_Medium_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_ta_9, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_alarm_ta_9, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_ta_9, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_ta_9, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_ta_9, lv_color_hex(0x949494), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_ta_9, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_ta_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_ta_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_ta_9, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_ta_9, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_ta_9, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_ta_9, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_btn_66
    ui->screen_cfg_alarm_btn_66 = lv_button_create(ui->screen_cfg_alarm_cont_46);
    lv_obj_set_pos(ui->screen_cfg_alarm_btn_66, 384, 13);
    lv_obj_set_size(ui->screen_cfg_alarm_btn_66, 36, 36);
    ui->screen_cfg_alarm_btn_66_label = lv_label_create(ui->screen_cfg_alarm_btn_66);
    lv_label_set_text(ui->screen_cfg_alarm_btn_66_label, "");
    lv_label_set_long_mode(ui->screen_cfg_alarm_btn_66_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_alarm_btn_66_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_alarm_btn_66, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_alarm_btn_66_label, LV_PCT(100));

    //Write style for screen_cfg_alarm_btn_66, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_btn_66, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_btn_66, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_btn_66, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_btn_66, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_cfg_alarm_btn_66, &_icon_delete_RGB565A8_36x36, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_cfg_alarm_btn_66, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_cfg_alarm_btn_66, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_btn_66, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_btn_66, &lv_font_HarmonyOS_Sans_Medium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_btn_66, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_btn_66, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_sw_19
    ui->screen_cfg_alarm_sw_19 = lv_switch_create(ui->screen_cfg_alarm_cont_46);
    lv_obj_set_pos(ui->screen_cfg_alarm_sw_19, 278, 16);
    lv_obj_set_size(ui->screen_cfg_alarm_sw_19, 77, 29);

    //Write style for screen_cfg_alarm_sw_19, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_19, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_19, lv_color_hex(0xe6e2e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_19, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_sw_19, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_sw_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_alarm_sw_19, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_19, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_19, lv_color_hex(0x44D7B6), LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_19, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_19, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

    //Write style for screen_cfg_alarm_sw_19, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_19, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_19, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_19, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_19, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_sw_19, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write style for screen_cfg_alarm_sw_19, Part: LV_PART_KNOB, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_19, 255, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_19, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_19, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_19, 0, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_sw_19, 10, LV_PART_KNOB|LV_STATE_FOCUSED);

    //Write codes screen_cfg_alarm_label_69
    ui->screen_cfg_alarm_label_69 = lv_label_create(ui->screen_cfg_alarm_cont_37);
    lv_obj_set_pos(ui->screen_cfg_alarm_label_69, 39, 89);
    lv_obj_set_size(ui->screen_cfg_alarm_label_69, 122, 33);
    lv_label_set_text(ui->screen_cfg_alarm_label_69, "联系方式");
    lv_label_set_long_mode(ui->screen_cfg_alarm_label_69, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_alarm_label_69, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_label_69, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_label_69, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_label_69, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_label_69, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_label_69, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_alarm_label_69, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_alarm_label_69, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_label_69, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_label_69, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_label_69, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_label_69, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_label_69, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_label_69, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_label_69, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_cont_45
    ui->screen_cfg_alarm_cont_45 = lv_obj_create(ui->screen_cfg_alarm_cont_37);
    lv_obj_set_pos(ui->screen_cfg_alarm_cont_45, 28, 395);
    lv_obj_set_size(ui->screen_cfg_alarm_cont_45, 444, 66);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_alarm_cont_45, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_alarm_cont_45, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_cont_45, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_alarm_cont_45, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_alarm_cont_45, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_alarm_cont_45, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_cont_45, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_cont_45, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_cont_45, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_cont_45, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_cont_45, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_cont_45, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_cont_45, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_ta_8
    ui->screen_cfg_alarm_ta_8 = lv_textarea_create(ui->screen_cfg_alarm_cont_45);
    lv_obj_set_pos(ui->screen_cfg_alarm_ta_8, 7, 12);
    lv_obj_set_size(ui->screen_cfg_alarm_ta_8, 231, 38);
    lv_textarea_set_text(ui->screen_cfg_alarm_ta_8, "18235878219");
    lv_textarea_set_placeholder_text(ui->screen_cfg_alarm_ta_8, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_alarm_ta_8, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_alarm_ta_8, false);
    lv_textarea_set_one_line(ui->screen_cfg_alarm_ta_8, true);
    lv_textarea_set_accepted_chars(ui->screen_cfg_alarm_ta_8, "");
    lv_textarea_set_max_length(ui->screen_cfg_alarm_ta_8, 11);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_alarm_ta_8, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_alarm_ta_8, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_ta_8, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_ta_8, &lv_font_HarmonyOS_Sans_Medium_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_ta_8, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_alarm_ta_8, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_ta_8, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_ta_8, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_ta_8, lv_color_hex(0x949494), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_ta_8, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_ta_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_ta_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_ta_8, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_ta_8, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_ta_8, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_ta_8, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_btn_65
    ui->screen_cfg_alarm_btn_65 = lv_button_create(ui->screen_cfg_alarm_cont_45);
    lv_obj_set_pos(ui->screen_cfg_alarm_btn_65, 384, 13);
    lv_obj_set_size(ui->screen_cfg_alarm_btn_65, 36, 36);
    ui->screen_cfg_alarm_btn_65_label = lv_label_create(ui->screen_cfg_alarm_btn_65);
    lv_label_set_text(ui->screen_cfg_alarm_btn_65_label, "");
    lv_label_set_long_mode(ui->screen_cfg_alarm_btn_65_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_alarm_btn_65_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_alarm_btn_65, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_alarm_btn_65_label, LV_PCT(100));

    //Write style for screen_cfg_alarm_btn_65, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_btn_65, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_btn_65, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_btn_65, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_btn_65, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_cfg_alarm_btn_65, &_icon_delete_RGB565A8_36x36, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_cfg_alarm_btn_65, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_cfg_alarm_btn_65, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_btn_65, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_btn_65, &lv_font_HarmonyOS_Sans_Medium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_btn_65, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_btn_65, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_sw_18
    ui->screen_cfg_alarm_sw_18 = lv_switch_create(ui->screen_cfg_alarm_cont_45);
    lv_obj_set_pos(ui->screen_cfg_alarm_sw_18, 278, 16);
    lv_obj_set_size(ui->screen_cfg_alarm_sw_18, 77, 29);

    //Write style for screen_cfg_alarm_sw_18, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_18, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_18, lv_color_hex(0xe6e2e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_18, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_sw_18, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_sw_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_alarm_sw_18, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_18, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_18, lv_color_hex(0x44D7B6), LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_18, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_18, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

    //Write style for screen_cfg_alarm_sw_18, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_18, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_18, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_18, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_18, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_sw_18, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write style for screen_cfg_alarm_sw_18, Part: LV_PART_KNOB, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_18, 255, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_18, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_18, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_18, 0, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_sw_18, 10, LV_PART_KNOB|LV_STATE_FOCUSED);

    //Write codes screen_cfg_alarm_cont_44
    ui->screen_cfg_alarm_cont_44 = lv_obj_create(ui->screen_cfg_alarm_cont_37);
    lv_obj_set_pos(ui->screen_cfg_alarm_cont_44, 28, 589);
    lv_obj_set_size(ui->screen_cfg_alarm_cont_44, 444, 66);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_alarm_cont_44, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_alarm_cont_44, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_cont_44, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_alarm_cont_44, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_alarm_cont_44, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_alarm_cont_44, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_cont_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_cont_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_cont_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_cont_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_cont_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_cont_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_cont_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_ta_7
    ui->screen_cfg_alarm_ta_7 = lv_textarea_create(ui->screen_cfg_alarm_cont_44);
    lv_obj_set_pos(ui->screen_cfg_alarm_ta_7, 7, 12);
    lv_obj_set_size(ui->screen_cfg_alarm_ta_7, 231, 38);
    lv_textarea_set_text(ui->screen_cfg_alarm_ta_7, "18235878219");
    lv_textarea_set_placeholder_text(ui->screen_cfg_alarm_ta_7, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_alarm_ta_7, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_alarm_ta_7, false);
    lv_textarea_set_one_line(ui->screen_cfg_alarm_ta_7, true);
    lv_textarea_set_accepted_chars(ui->screen_cfg_alarm_ta_7, "");
    lv_textarea_set_max_length(ui->screen_cfg_alarm_ta_7, 11);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_alarm_ta_7, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_alarm_ta_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_ta_7, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_ta_7, &lv_font_HarmonyOS_Sans_Medium_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_ta_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_alarm_ta_7, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_ta_7, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_ta_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_ta_7, lv_color_hex(0x949494), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_ta_7, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_ta_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_ta_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_ta_7, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_ta_7, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_ta_7, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_ta_7, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_btn_64
    ui->screen_cfg_alarm_btn_64 = lv_button_create(ui->screen_cfg_alarm_cont_44);
    lv_obj_set_pos(ui->screen_cfg_alarm_btn_64, 384, 13);
    lv_obj_set_size(ui->screen_cfg_alarm_btn_64, 36, 36);
    ui->screen_cfg_alarm_btn_64_label = lv_label_create(ui->screen_cfg_alarm_btn_64);
    lv_label_set_text(ui->screen_cfg_alarm_btn_64_label, "");
    lv_label_set_long_mode(ui->screen_cfg_alarm_btn_64_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_alarm_btn_64_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_alarm_btn_64, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_alarm_btn_64_label, LV_PCT(100));

    //Write style for screen_cfg_alarm_btn_64, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_btn_64, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_btn_64, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_btn_64, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_btn_64, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_cfg_alarm_btn_64, &_icon_delete_RGB565A8_36x36, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_cfg_alarm_btn_64, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_cfg_alarm_btn_64, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_btn_64, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_btn_64, &lv_font_HarmonyOS_Sans_Medium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_btn_64, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_btn_64, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_sw_17
    ui->screen_cfg_alarm_sw_17 = lv_switch_create(ui->screen_cfg_alarm_cont_44);
    lv_obj_set_pos(ui->screen_cfg_alarm_sw_17, 278, 16);
    lv_obj_set_size(ui->screen_cfg_alarm_sw_17, 77, 29);

    //Write style for screen_cfg_alarm_sw_17, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_17, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_17, lv_color_hex(0xe6e2e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_17, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_sw_17, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_sw_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_alarm_sw_17, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_17, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_17, lv_color_hex(0x44D7B6), LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_17, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_17, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

    //Write style for screen_cfg_alarm_sw_17, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_17, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_17, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_17, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_17, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_sw_17, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write style for screen_cfg_alarm_sw_17, Part: LV_PART_KNOB, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_17, 255, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_17, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_17, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_17, 0, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_sw_17, 10, LV_PART_KNOB|LV_STATE_FOCUSED);

    //Write codes screen_cfg_alarm_cont_43
    ui->screen_cfg_alarm_cont_43 = lv_obj_create(ui->screen_cfg_alarm_cont_37);
    lv_obj_set_pos(ui->screen_cfg_alarm_cont_43, 26, 241);
    lv_obj_set_size(ui->screen_cfg_alarm_cont_43, 444, 66);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_alarm_cont_43, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_alarm_cont_43, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_cont_43, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_alarm_cont_43, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_alarm_cont_43, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_alarm_cont_43, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_cont_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_cont_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_cont_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_cont_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_cont_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_cont_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_cont_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_ta_6
    ui->screen_cfg_alarm_ta_6 = lv_textarea_create(ui->screen_cfg_alarm_cont_43);
    lv_obj_set_pos(ui->screen_cfg_alarm_ta_6, 7, 12);
    lv_obj_set_size(ui->screen_cfg_alarm_ta_6, 231, 38);
    lv_textarea_set_text(ui->screen_cfg_alarm_ta_6, "18235878219");
    lv_textarea_set_placeholder_text(ui->screen_cfg_alarm_ta_6, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_alarm_ta_6, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_alarm_ta_6, false);
    lv_textarea_set_one_line(ui->screen_cfg_alarm_ta_6, true);
    lv_textarea_set_accepted_chars(ui->screen_cfg_alarm_ta_6, "");
    lv_textarea_set_max_length(ui->screen_cfg_alarm_ta_6, 11);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_alarm_ta_6, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_alarm_ta_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_ta_6, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_ta_6, &lv_font_HarmonyOS_Sans_Medium_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_ta_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_alarm_ta_6, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_ta_6, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_ta_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_ta_6, lv_color_hex(0x949494), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_ta_6, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_ta_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_ta_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_ta_6, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_ta_6, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_ta_6, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_ta_6, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_btn_63
    ui->screen_cfg_alarm_btn_63 = lv_button_create(ui->screen_cfg_alarm_cont_43);
    lv_obj_set_pos(ui->screen_cfg_alarm_btn_63, 384, 13);
    lv_obj_set_size(ui->screen_cfg_alarm_btn_63, 36, 36);
    ui->screen_cfg_alarm_btn_63_label = lv_label_create(ui->screen_cfg_alarm_btn_63);
    lv_label_set_text(ui->screen_cfg_alarm_btn_63_label, "");
    lv_label_set_long_mode(ui->screen_cfg_alarm_btn_63_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_alarm_btn_63_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_alarm_btn_63, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_alarm_btn_63_label, LV_PCT(100));

    //Write style for screen_cfg_alarm_btn_63, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_btn_63, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_btn_63, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_btn_63, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_btn_63, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_cfg_alarm_btn_63, &_icon_delete_RGB565A8_36x36, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_cfg_alarm_btn_63, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_cfg_alarm_btn_63, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_btn_63, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_btn_63, &lv_font_HarmonyOS_Sans_Medium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_btn_63, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_btn_63, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_sw_16
    ui->screen_cfg_alarm_sw_16 = lv_switch_create(ui->screen_cfg_alarm_cont_43);
    lv_obj_set_pos(ui->screen_cfg_alarm_sw_16, 278, 16);
    lv_obj_set_size(ui->screen_cfg_alarm_sw_16, 77, 29);

    //Write style for screen_cfg_alarm_sw_16, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_16, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_16, lv_color_hex(0xe6e2e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_16, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_sw_16, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_sw_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_alarm_sw_16, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_16, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_16, lv_color_hex(0x44D7B6), LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_16, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_16, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

    //Write style for screen_cfg_alarm_sw_16, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_16, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_16, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_16, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_16, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_sw_16, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write style for screen_cfg_alarm_sw_16, Part: LV_PART_KNOB, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_16, 255, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_16, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_16, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_16, 0, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_sw_16, 10, LV_PART_KNOB|LV_STATE_FOCUSED);

    //Write codes screen_cfg_alarm_cont_42
    ui->screen_cfg_alarm_cont_42 = lv_obj_create(ui->screen_cfg_alarm_cont_37);
    lv_obj_set_pos(ui->screen_cfg_alarm_cont_42, 28, 692);
    lv_obj_set_size(ui->screen_cfg_alarm_cont_42, 444, 66);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_alarm_cont_42, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_alarm_cont_42, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_cont_42, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_alarm_cont_42, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_alarm_cont_42, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_alarm_cont_42, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_cont_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_cont_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_cont_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_cont_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_cont_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_cont_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_cont_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_ta_5
    ui->screen_cfg_alarm_ta_5 = lv_textarea_create(ui->screen_cfg_alarm_cont_42);
    lv_obj_set_pos(ui->screen_cfg_alarm_ta_5, 7, 12);
    lv_obj_set_size(ui->screen_cfg_alarm_ta_5, 231, 38);
    lv_textarea_set_text(ui->screen_cfg_alarm_ta_5, "18235878219");
    lv_textarea_set_placeholder_text(ui->screen_cfg_alarm_ta_5, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_alarm_ta_5, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_alarm_ta_5, false);
    lv_textarea_set_one_line(ui->screen_cfg_alarm_ta_5, true);
    lv_textarea_set_accepted_chars(ui->screen_cfg_alarm_ta_5, "");
    lv_textarea_set_max_length(ui->screen_cfg_alarm_ta_5, 11);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_alarm_ta_5, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_alarm_ta_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_ta_5, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_ta_5, &lv_font_HarmonyOS_Sans_Medium_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_ta_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_alarm_ta_5, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_ta_5, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_ta_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_ta_5, lv_color_hex(0x949494), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_ta_5, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_ta_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_ta_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_ta_5, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_ta_5, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_ta_5, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_ta_5, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_btn_62
    ui->screen_cfg_alarm_btn_62 = lv_button_create(ui->screen_cfg_alarm_cont_42);
    lv_obj_set_pos(ui->screen_cfg_alarm_btn_62, 384, 13);
    lv_obj_set_size(ui->screen_cfg_alarm_btn_62, 36, 36);
    ui->screen_cfg_alarm_btn_62_label = lv_label_create(ui->screen_cfg_alarm_btn_62);
    lv_label_set_text(ui->screen_cfg_alarm_btn_62_label, "");
    lv_label_set_long_mode(ui->screen_cfg_alarm_btn_62_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_alarm_btn_62_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_alarm_btn_62, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_alarm_btn_62_label, LV_PCT(100));

    //Write style for screen_cfg_alarm_btn_62, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_btn_62, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_btn_62, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_btn_62, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_btn_62, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_cfg_alarm_btn_62, &_icon_delete_RGB565A8_36x36, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_cfg_alarm_btn_62, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_cfg_alarm_btn_62, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_btn_62, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_btn_62, &lv_font_HarmonyOS_Sans_Medium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_btn_62, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_btn_62, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_sw_15
    ui->screen_cfg_alarm_sw_15 = lv_switch_create(ui->screen_cfg_alarm_cont_42);
    lv_obj_set_pos(ui->screen_cfg_alarm_sw_15, 278, 16);
    lv_obj_set_size(ui->screen_cfg_alarm_sw_15, 77, 29);

    //Write style for screen_cfg_alarm_sw_15, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_15, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_15, lv_color_hex(0xe6e2e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_15, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_sw_15, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_sw_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_alarm_sw_15, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_15, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_15, lv_color_hex(0x44D7B6), LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_15, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_15, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

    //Write style for screen_cfg_alarm_sw_15, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_15, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_15, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_15, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_15, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_sw_15, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write style for screen_cfg_alarm_sw_15, Part: LV_PART_KNOB, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_15, 255, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_15, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_15, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_15, 0, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_sw_15, 10, LV_PART_KNOB|LV_STATE_FOCUSED);

    //Write codes screen_cfg_alarm_cont_41
    ui->screen_cfg_alarm_cont_41 = lv_obj_create(ui->screen_cfg_alarm_cont_37);
    lv_obj_set_pos(ui->screen_cfg_alarm_cont_41, 26, 146);
    lv_obj_set_size(ui->screen_cfg_alarm_cont_41, 444, 66);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_alarm_cont_41, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_alarm_cont_41, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_cont_41, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_alarm_cont_41, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_alarm_cont_41, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_alarm_cont_41, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_cont_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_cont_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_cont_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_cont_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_cont_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_cont_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_cont_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_ta_4
    ui->screen_cfg_alarm_ta_4 = lv_textarea_create(ui->screen_cfg_alarm_cont_41);
    lv_obj_set_pos(ui->screen_cfg_alarm_ta_4, 7, 12);
    lv_obj_set_size(ui->screen_cfg_alarm_ta_4, 231, 38);
    lv_textarea_set_text(ui->screen_cfg_alarm_ta_4, "18235878219");
    lv_textarea_set_placeholder_text(ui->screen_cfg_alarm_ta_4, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_alarm_ta_4, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_alarm_ta_4, false);
    lv_textarea_set_one_line(ui->screen_cfg_alarm_ta_4, true);
    lv_textarea_set_accepted_chars(ui->screen_cfg_alarm_ta_4, "");
    lv_textarea_set_max_length(ui->screen_cfg_alarm_ta_4, 11);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_alarm_ta_4, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_alarm_ta_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_ta_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_ta_4, &lv_font_HarmonyOS_Sans_Medium_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_ta_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_alarm_ta_4, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_ta_4, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_ta_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_ta_4, lv_color_hex(0x949494), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_ta_4, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_ta_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_ta_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_ta_4, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_ta_4, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_ta_4, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_ta_4, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_btn_61
    ui->screen_cfg_alarm_btn_61 = lv_button_create(ui->screen_cfg_alarm_cont_41);
    lv_obj_set_pos(ui->screen_cfg_alarm_btn_61, 384, 13);
    lv_obj_set_size(ui->screen_cfg_alarm_btn_61, 36, 36);
    ui->screen_cfg_alarm_btn_61_label = lv_label_create(ui->screen_cfg_alarm_btn_61);
    lv_label_set_text(ui->screen_cfg_alarm_btn_61_label, "");
    lv_label_set_long_mode(ui->screen_cfg_alarm_btn_61_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_alarm_btn_61_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_alarm_btn_61, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_alarm_btn_61_label, LV_PCT(100));

    //Write style for screen_cfg_alarm_btn_61, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_btn_61, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_btn_61, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_btn_61, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_btn_61, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_cfg_alarm_btn_61, &_icon_delete_RGB565A8_36x36, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_cfg_alarm_btn_61, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_cfg_alarm_btn_61, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_btn_61, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_btn_61, &lv_font_HarmonyOS_Sans_Medium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_btn_61, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_btn_61, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_sw_14
    ui->screen_cfg_alarm_sw_14 = lv_switch_create(ui->screen_cfg_alarm_cont_41);
    lv_obj_set_pos(ui->screen_cfg_alarm_sw_14, 278, 16);
    lv_obj_set_size(ui->screen_cfg_alarm_sw_14, 77, 29);

    //Write style for screen_cfg_alarm_sw_14, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_14, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_14, lv_color_hex(0xe6e2e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_14, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_sw_14, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_sw_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_alarm_sw_14, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_14, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_14, lv_color_hex(0x44D7B6), LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_14, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_14, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

    //Write style for screen_cfg_alarm_sw_14, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_14, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_14, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_14, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_14, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_sw_14, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write style for screen_cfg_alarm_sw_14, Part: LV_PART_KNOB, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_14, 255, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_14, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_14, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_14, 0, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_sw_14, 10, LV_PART_KNOB|LV_STATE_FOCUSED);

    //Write codes screen_cfg_alarm_cont_40
    ui->screen_cfg_alarm_cont_40 = lv_obj_create(ui->screen_cfg_alarm_cont_37);
    lv_obj_set_pos(ui->screen_cfg_alarm_cont_40, 25, 1216);
    lv_obj_set_size(ui->screen_cfg_alarm_cont_40, 444, 66);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_alarm_cont_40, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_alarm_cont_40, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_cont_40, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_alarm_cont_40, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_alarm_cont_40, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_alarm_cont_40, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_cont_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_cont_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_cont_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_cont_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_cont_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_cont_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_cont_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_ta_3
    ui->screen_cfg_alarm_ta_3 = lv_textarea_create(ui->screen_cfg_alarm_cont_40);
    lv_obj_set_pos(ui->screen_cfg_alarm_ta_3, 7, 12);
    lv_obj_set_size(ui->screen_cfg_alarm_ta_3, 231, 38);
    lv_textarea_set_text(ui->screen_cfg_alarm_ta_3, "18235878219");
    lv_textarea_set_placeholder_text(ui->screen_cfg_alarm_ta_3, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_alarm_ta_3, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_alarm_ta_3, false);
    lv_textarea_set_one_line(ui->screen_cfg_alarm_ta_3, true);
    lv_textarea_set_accepted_chars(ui->screen_cfg_alarm_ta_3, "");
    lv_textarea_set_max_length(ui->screen_cfg_alarm_ta_3, 11);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_alarm_ta_3, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_alarm_ta_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_ta_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_ta_3, &lv_font_HarmonyOS_Sans_Medium_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_ta_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_alarm_ta_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_ta_3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_ta_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_ta_3, lv_color_hex(0x949494), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_ta_3, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_ta_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_ta_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_ta_3, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_ta_3, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_ta_3, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_ta_3, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_btn_60
    ui->screen_cfg_alarm_btn_60 = lv_button_create(ui->screen_cfg_alarm_cont_40);
    lv_obj_set_pos(ui->screen_cfg_alarm_btn_60, 384, 13);
    lv_obj_set_size(ui->screen_cfg_alarm_btn_60, 36, 36);
    ui->screen_cfg_alarm_btn_60_label = lv_label_create(ui->screen_cfg_alarm_btn_60);
    lv_label_set_text(ui->screen_cfg_alarm_btn_60_label, "");
    lv_label_set_long_mode(ui->screen_cfg_alarm_btn_60_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_alarm_btn_60_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_alarm_btn_60, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_alarm_btn_60_label, LV_PCT(100));

    //Write style for screen_cfg_alarm_btn_60, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_btn_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_btn_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_btn_60, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_btn_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_cfg_alarm_btn_60, &_icon_delete_RGB565A8_36x36, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_cfg_alarm_btn_60, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_cfg_alarm_btn_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_btn_60, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_btn_60, &lv_font_HarmonyOS_Sans_Medium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_btn_60, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_btn_60, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_sw_13
    ui->screen_cfg_alarm_sw_13 = lv_switch_create(ui->screen_cfg_alarm_cont_40);
    lv_obj_set_pos(ui->screen_cfg_alarm_sw_13, 278, 16);
    lv_obj_set_size(ui->screen_cfg_alarm_sw_13, 77, 29);

    //Write style for screen_cfg_alarm_sw_13, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_13, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_13, lv_color_hex(0xe6e2e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_13, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_sw_13, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_sw_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_alarm_sw_13, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_13, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_13, lv_color_hex(0x44D7B6), LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_13, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_13, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

    //Write style for screen_cfg_alarm_sw_13, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_13, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_13, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_13, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_13, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_sw_13, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write style for screen_cfg_alarm_sw_13, Part: LV_PART_KNOB, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_13, 255, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_13, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_13, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_13, 0, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_sw_13, 10, LV_PART_KNOB|LV_STATE_FOCUSED);

    //Write codes screen_cfg_alarm_cont_39
    ui->screen_cfg_alarm_cont_39 = lv_obj_create(ui->screen_cfg_alarm_cont_37);
    lv_obj_set_pos(ui->screen_cfg_alarm_cont_39, 28, 900);
    lv_obj_set_size(ui->screen_cfg_alarm_cont_39, 444, 66);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_alarm_cont_39, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_alarm_cont_39, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_cont_39, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_alarm_cont_39, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_alarm_cont_39, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_alarm_cont_39, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_cont_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_cont_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_cont_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_cont_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_cont_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_cont_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_cont_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_ta_2
    ui->screen_cfg_alarm_ta_2 = lv_textarea_create(ui->screen_cfg_alarm_cont_39);
    lv_obj_set_pos(ui->screen_cfg_alarm_ta_2, 7, 12);
    lv_obj_set_size(ui->screen_cfg_alarm_ta_2, 231, 38);
    lv_textarea_set_text(ui->screen_cfg_alarm_ta_2, "18235878219");
    lv_textarea_set_placeholder_text(ui->screen_cfg_alarm_ta_2, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_alarm_ta_2, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_alarm_ta_2, false);
    lv_textarea_set_one_line(ui->screen_cfg_alarm_ta_2, true);
    lv_textarea_set_accepted_chars(ui->screen_cfg_alarm_ta_2, "");
    lv_textarea_set_max_length(ui->screen_cfg_alarm_ta_2, 11);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_alarm_ta_2, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_alarm_ta_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_ta_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_ta_2, &lv_font_HarmonyOS_Sans_Medium_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_ta_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_alarm_ta_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_ta_2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_ta_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_ta_2, lv_color_hex(0x949494), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_ta_2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_ta_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_ta_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_ta_2, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_ta_2, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_ta_2, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_ta_2, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_btn_59
    ui->screen_cfg_alarm_btn_59 = lv_button_create(ui->screen_cfg_alarm_cont_39);
    lv_obj_set_pos(ui->screen_cfg_alarm_btn_59, 384, 13);
    lv_obj_set_size(ui->screen_cfg_alarm_btn_59, 36, 36);
    ui->screen_cfg_alarm_btn_59_label = lv_label_create(ui->screen_cfg_alarm_btn_59);
    lv_label_set_text(ui->screen_cfg_alarm_btn_59_label, "");
    lv_label_set_long_mode(ui->screen_cfg_alarm_btn_59_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_alarm_btn_59_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_alarm_btn_59, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_alarm_btn_59_label, LV_PCT(100));

    //Write style for screen_cfg_alarm_btn_59, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_btn_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_btn_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_btn_59, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_btn_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_cfg_alarm_btn_59, &_icon_delete_RGB565A8_36x36, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_cfg_alarm_btn_59, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_cfg_alarm_btn_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_btn_59, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_btn_59, &lv_font_HarmonyOS_Sans_Medium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_btn_59, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_btn_59, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_sw_12
    ui->screen_cfg_alarm_sw_12 = lv_switch_create(ui->screen_cfg_alarm_cont_39);
    lv_obj_set_pos(ui->screen_cfg_alarm_sw_12, 278, 16);
    lv_obj_set_size(ui->screen_cfg_alarm_sw_12, 77, 29);

    //Write style for screen_cfg_alarm_sw_12, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_12, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_12, lv_color_hex(0xe6e2e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_12, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_sw_12, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_sw_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_alarm_sw_12, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_12, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_12, lv_color_hex(0x44D7B6), LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_12, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_12, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

    //Write style for screen_cfg_alarm_sw_12, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_12, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_12, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_12, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_12, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_sw_12, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write style for screen_cfg_alarm_sw_12, Part: LV_PART_KNOB, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_12, 255, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_12, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_12, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_12, 0, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_sw_12, 10, LV_PART_KNOB|LV_STATE_FOCUSED);

    //Write codes screen_cfg_alarm_cont_38
    ui->screen_cfg_alarm_cont_38 = lv_obj_create(ui->screen_cfg_alarm_cont_37);
    lv_obj_set_pos(ui->screen_cfg_alarm_cont_38, 26, 1006);
    lv_obj_set_size(ui->screen_cfg_alarm_cont_38, 444, 66);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_alarm_cont_38, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_alarm_cont_38, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_cont_38, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_alarm_cont_38, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_alarm_cont_38, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_alarm_cont_38, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_cont_38, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_cont_38, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_cont_38, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_cont_38, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_cont_38, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_cont_38, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_cont_38, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_ta_1
    ui->screen_cfg_alarm_ta_1 = lv_textarea_create(ui->screen_cfg_alarm_cont_38);
    lv_obj_set_pos(ui->screen_cfg_alarm_ta_1, 7, 12);
    lv_obj_set_size(ui->screen_cfg_alarm_ta_1, 231, 38);
    lv_textarea_set_text(ui->screen_cfg_alarm_ta_1, "18235878219");
    lv_textarea_set_placeholder_text(ui->screen_cfg_alarm_ta_1, "");
    lv_textarea_set_password_bullet(ui->screen_cfg_alarm_ta_1, "*");
    lv_textarea_set_password_mode(ui->screen_cfg_alarm_ta_1, false);
    lv_textarea_set_one_line(ui->screen_cfg_alarm_ta_1, true);
    lv_textarea_set_accepted_chars(ui->screen_cfg_alarm_ta_1, "");
    lv_textarea_set_max_length(ui->screen_cfg_alarm_ta_1, 11);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_cfg_alarm_ta_1, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_cfg_alarm_ta_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_ta_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_ta_1, &lv_font_HarmonyOS_Sans_Medium_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_ta_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_alarm_ta_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_ta_1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_ta_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_ta_1, lv_color_hex(0x949494), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_ta_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_ta_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_ta_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_ta_1, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_ta_1, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_ta_1, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_ta_1, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_btn_58
    ui->screen_cfg_alarm_btn_58 = lv_button_create(ui->screen_cfg_alarm_cont_38);
    lv_obj_set_pos(ui->screen_cfg_alarm_btn_58, 384, 13);
    lv_obj_set_size(ui->screen_cfg_alarm_btn_58, 36, 36);
    ui->screen_cfg_alarm_btn_58_label = lv_label_create(ui->screen_cfg_alarm_btn_58);
    lv_label_set_text(ui->screen_cfg_alarm_btn_58_label, "");
    lv_label_set_long_mode(ui->screen_cfg_alarm_btn_58_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_alarm_btn_58_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_alarm_btn_58, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_alarm_btn_58_label, LV_PCT(100));

    //Write style for screen_cfg_alarm_btn_58, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_btn_58, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_btn_58, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_btn_58, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_btn_58, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_cfg_alarm_btn_58, &_icon_delete_RGB565A8_36x36, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_cfg_alarm_btn_58, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_cfg_alarm_btn_58, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_btn_58, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_btn_58, &lv_font_HarmonyOS_Sans_Medium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_btn_58, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_btn_58, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_sw_11
    ui->screen_cfg_alarm_sw_11 = lv_switch_create(ui->screen_cfg_alarm_cont_38);
    lv_obj_set_pos(ui->screen_cfg_alarm_sw_11, 278, 16);
    lv_obj_set_size(ui->screen_cfg_alarm_sw_11, 77, 29);

    //Write style for screen_cfg_alarm_sw_11, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_11, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_11, lv_color_hex(0xe6e2e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_11, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_sw_11, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_sw_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_alarm_sw_11, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_11, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_11, lv_color_hex(0x44D7B6), LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_11, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_11, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

    //Write style for screen_cfg_alarm_sw_11, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_11, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_11, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_11, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_11, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_sw_11, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write style for screen_cfg_alarm_sw_11, Part: LV_PART_KNOB, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_11, 255, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_11, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_11, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_11, 0, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_sw_11, 10, LV_PART_KNOB|LV_STATE_FOCUSED);

    //Write codes screen_cfg_alarm_cont_5
    ui->screen_cfg_alarm_cont_5 = lv_obj_create(ui->screen_cfg_alarm_cont_1);
    lv_obj_set_pos(ui->screen_cfg_alarm_cont_5, 37, 174);
    lv_obj_set_size(ui->screen_cfg_alarm_cont_5, 705, 1329);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_alarm_cont_5, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_alarm_cont_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_cont_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_cont_5, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_cont_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_cont_5, lv_color_hex(0x2A405C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_cont_5, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_cont_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_cont_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_cont_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_cont_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_cont_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_label_16
    ui->screen_cfg_alarm_label_16 = lv_label_create(ui->screen_cfg_alarm_cont_5);
    lv_obj_set_pos(ui->screen_cfg_alarm_label_16, 32, 32);
    lv_obj_set_size(ui->screen_cfg_alarm_label_16, 119, 42);
    lv_label_set_text(ui->screen_cfg_alarm_label_16, "设备配置");
    lv_label_set_long_mode(ui->screen_cfg_alarm_label_16, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_alarm_label_16, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_label_16, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_label_16, &lv_font_AlibabaPuHuiTiRegular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_label_16, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_alarm_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_alarm_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_label_16, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_label_16, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_label_64
    ui->screen_cfg_alarm_label_64 = lv_label_create(ui->screen_cfg_alarm_cont_5);
    lv_obj_set_pos(ui->screen_cfg_alarm_label_64, 76, 1191);
    lv_obj_set_size(ui->screen_cfg_alarm_label_64, 165, 33);
    lv_label_set_text(ui->screen_cfg_alarm_label_64, "滤芯报警开关");
    lv_label_set_long_mode(ui->screen_cfg_alarm_label_64, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_alarm_label_64, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_label_64, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_label_64, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_label_64, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_label_64, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_label_64, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_alarm_label_64, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_alarm_label_64, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_label_64, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_label_64, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_label_64, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_label_64, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_label_64, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_label_64, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_label_64, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_sw_8
    ui->screen_cfg_alarm_sw_8 = lv_switch_create(ui->screen_cfg_alarm_cont_5);
    lv_obj_set_pos(ui->screen_cfg_alarm_sw_8, 94, 1237);
    lv_obj_set_size(ui->screen_cfg_alarm_sw_8, 77, 30);

    //Write style for screen_cfg_alarm_sw_8, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_8, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_8, lv_color_hex(0xe6e2e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_8, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_sw_8, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_sw_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_alarm_sw_8, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_8, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_8, lv_color_hex(0x44D7B6), LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_8, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_8, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

    //Write style for screen_cfg_alarm_sw_8, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_8, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_8, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_8, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_8, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_sw_8, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write style for screen_cfg_alarm_sw_8, Part: LV_PART_KNOB, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_8, 255, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_8, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_8, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_8, 0, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_sw_8, 10, LV_PART_KNOB|LV_STATE_FOCUSED);

    //Write codes screen_cfg_alarm_label_65
    ui->screen_cfg_alarm_label_65 = lv_label_create(ui->screen_cfg_alarm_cont_5);
    lv_obj_set_pos(ui->screen_cfg_alarm_label_65, 273, 1191);
    lv_obj_set_size(ui->screen_cfg_alarm_label_65, 165, 33);
    lv_label_set_text(ui->screen_cfg_alarm_label_65, "烟感报警开关");
    lv_label_set_long_mode(ui->screen_cfg_alarm_label_65, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_alarm_label_65, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_label_65, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_label_65, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_label_65, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_label_65, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_label_65, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_alarm_label_65, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_alarm_label_65, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_label_65, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_label_65, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_label_65, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_label_65, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_label_65, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_label_65, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_label_65, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_sw_9
    ui->screen_cfg_alarm_sw_9 = lv_switch_create(ui->screen_cfg_alarm_cont_5);
    lv_obj_set_pos(ui->screen_cfg_alarm_sw_9, 288, 1237);
    lv_obj_set_size(ui->screen_cfg_alarm_sw_9, 77, 30);

    //Write style for screen_cfg_alarm_sw_9, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_9, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_9, lv_color_hex(0xe6e2e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_9, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_sw_9, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_sw_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_alarm_sw_9, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_9, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_9, lv_color_hex(0x44D7B6), LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_9, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_9, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

    //Write style for screen_cfg_alarm_sw_9, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_9, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_9, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_9, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_9, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_sw_9, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write style for screen_cfg_alarm_sw_9, Part: LV_PART_KNOB, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_9, 255, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_9, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_9, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_9, 0, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_sw_9, 10, LV_PART_KNOB|LV_STATE_FOCUSED);

    //Write codes screen_cfg_alarm_cont_36
    ui->screen_cfg_alarm_cont_36 = lv_obj_create(ui->screen_cfg_alarm_cont_1);
    lv_obj_set_pos(ui->screen_cfg_alarm_cont_36, 327, 217);
    lv_obj_set_size(ui->screen_cfg_alarm_cont_36, 629, 365);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_alarm_cont_36, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_cfg_alarm_cont_36, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_cfg_alarm_cont_36, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_cont_36, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_alarm_cont_36, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_alarm_cont_36, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_alarm_cont_36, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_cont_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_cont_36, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_cont_36, lv_color_hex(0x2A405C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_cont_36, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_cont_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_cont_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_cont_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_cont_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_cont_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_label_68
    ui->screen_cfg_alarm_label_68 = lv_label_create(ui->screen_cfg_alarm_cont_36);
    lv_obj_set_pos(ui->screen_cfg_alarm_label_68, 116, 126);
    lv_obj_set_size(ui->screen_cfg_alarm_label_68, 396, 50);
    lv_label_set_text(ui->screen_cfg_alarm_label_68, "是否删除报警联系人？");
    lv_label_set_long_mode(ui->screen_cfg_alarm_label_68, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_alarm_label_68, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_label_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_label_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_label_68, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_label_68, &lv_font_AlibabaPuHuiTiRegular_36, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_label_68, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_alarm_label_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_alarm_label_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_label_68, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_label_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_label_68, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_label_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_label_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_label_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_label_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_btn_57
    ui->screen_cfg_alarm_btn_57 = lv_button_create(ui->screen_cfg_alarm_cont_36);
    lv_obj_set_pos(ui->screen_cfg_alarm_btn_57, 349, 242);
    lv_obj_set_size(ui->screen_cfg_alarm_btn_57, 150, 60);
    ui->screen_cfg_alarm_btn_57_label = lv_label_create(ui->screen_cfg_alarm_btn_57);
    lv_label_set_text(ui->screen_cfg_alarm_btn_57_label, "确认");
    lv_label_set_long_mode(ui->screen_cfg_alarm_btn_57_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_alarm_btn_57_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_alarm_btn_57, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_alarm_btn_57_label, LV_PCT(100));

    //Write style for screen_cfg_alarm_btn_57, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_btn_57, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_btn_57, lv_color_hex(0x44D7B6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_btn_57, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_btn_57, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_btn_57, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_btn_57, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_btn_57, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_btn_57, &lv_font_HarmonyOS_Sans_Medium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_btn_57, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_btn_57, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_btn_56
    ui->screen_cfg_alarm_btn_56 = lv_button_create(ui->screen_cfg_alarm_cont_36);
    lv_obj_set_pos(ui->screen_cfg_alarm_btn_56, 129, 242);
    lv_obj_set_size(ui->screen_cfg_alarm_btn_56, 150, 60);
    ui->screen_cfg_alarm_btn_56_label = lv_label_create(ui->screen_cfg_alarm_btn_56);
    lv_label_set_text(ui->screen_cfg_alarm_btn_56_label, "取消");
    lv_label_set_long_mode(ui->screen_cfg_alarm_btn_56_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_alarm_btn_56_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_alarm_btn_56, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_alarm_btn_56_label, LV_PCT(100));

    //Write style for screen_cfg_alarm_btn_56, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_btn_56, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_btn_56, lv_color_hex(0xff5756), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_btn_56, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_btn_56, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_btn_56, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_btn_56, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_btn_56, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_btn_56, &lv_font_HarmonyOS_Sans_Medium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_btn_56, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_btn_56, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_btn_55
    ui->screen_cfg_alarm_btn_55 = lv_button_create(ui->screen_cfg_alarm_cont_36);
    lv_obj_set_pos(ui->screen_cfg_alarm_btn_55, 520, 6);
    lv_obj_set_size(ui->screen_cfg_alarm_btn_55, 100, 50);
    ui->screen_cfg_alarm_btn_55_label = lv_label_create(ui->screen_cfg_alarm_btn_55);
    lv_label_set_text(ui->screen_cfg_alarm_btn_55_label, "" LV_SYMBOL_CLOSE " ");
    lv_label_set_long_mode(ui->screen_cfg_alarm_btn_55_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_alarm_btn_55_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_alarm_btn_55, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_alarm_btn_55_label, LV_PCT(100));

    //Write style for screen_cfg_alarm_btn_55, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_btn_55, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_btn_55, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_btn_55, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_btn_55, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_btn_55, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_btn_55, &lv_font_HarmonyOS_Sans_Medium_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_btn_55, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_btn_55, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_datetext_1
    ui->screen_cfg_alarm_datetext_1 = lv_label_create(ui->screen_cfg_alarm);
    lv_obj_set_pos(ui->screen_cfg_alarm_datetext_1, 912, 16);
    lv_obj_set_size(ui->screen_cfg_alarm_datetext_1, 130, 36);
    lv_label_set_text(ui->screen_cfg_alarm_datetext_1, "2024/04/22");
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_datetext_1, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_add_flag(ui->screen_cfg_alarm_datetext_1, LV_OBJ_FLAG_CLICKABLE);
    lv_obj_add_event_cb(ui->screen_cfg_alarm_datetext_1, screen_cfg_alarm_datetext_1_event_handler, LV_EVENT_ALL, NULL);

    //Write style for screen_cfg_alarm_datetext_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_datetext_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_datetext_1, &lv_font_AlibabaPuHuiTiRegular_18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_datetext_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_alarm_datetext_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_datetext_1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_datetext_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_datetext_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_datetext_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_datetext_1, 9, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_datetext_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_datetext_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_datetext_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_img_63
    ui->screen_cfg_alarm_img_63 = lv_image_create(ui->screen_cfg_alarm);
    lv_obj_set_pos(ui->screen_cfg_alarm_img_63, 43, 13);
    lv_obj_set_size(ui->screen_cfg_alarm_img_63, 184, 56);
    lv_obj_add_flag(ui->screen_cfg_alarm_img_63, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_pivot(ui->screen_cfg_alarm_img_63, 50,50);
    lv_image_set_rotation(ui->screen_cfg_alarm_img_63, 0);

    //Write style for screen_cfg_alarm_img_63, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_cfg_alarm_img_63, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_cfg_alarm_img_63, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_digital_clock_1
    static bool screen_cfg_alarm_digital_clock_1_timer_enabled = false;
    ui->screen_cfg_alarm_digital_clock_1 = lv_label_create(ui->screen_cfg_alarm);
    lv_obj_set_pos(ui->screen_cfg_alarm_digital_clock_1, 1042, 16);
    lv_obj_set_size(ui->screen_cfg_alarm_digital_clock_1, 130, 36);
    lv_label_set_text(ui->screen_cfg_alarm_digital_clock_1, "11:25");
    if (!screen_cfg_alarm_digital_clock_1_timer_enabled) {
        lv_timer_create(screen_cfg_alarm_digital_clock_1_timer, 1000, NULL);
        screen_cfg_alarm_digital_clock_1_timer_enabled = true;
    }

    //Write style for screen_cfg_alarm_digital_clock_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_radius(ui->screen_cfg_alarm_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_digital_clock_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_digital_clock_1, &lv_font_AlibabaPuHuiTiRegular_18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_digital_clock_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_alarm_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_digital_clock_1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_digital_clock_1, 9, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_btn_1
    ui->screen_cfg_alarm_btn_1 = lv_button_create(ui->screen_cfg_alarm);
    lv_obj_set_pos(ui->screen_cfg_alarm_btn_1, 1098, 14);
    lv_obj_set_size(ui->screen_cfg_alarm_btn_1, 44, 44);
    ui->screen_cfg_alarm_btn_1_label = lv_label_create(ui->screen_cfg_alarm_btn_1);
    lv_label_set_text(ui->screen_cfg_alarm_btn_1_label, "");
    lv_label_set_long_mode(ui->screen_cfg_alarm_btn_1_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_alarm_btn_1_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_alarm_btn_1, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_alarm_btn_1_label, LV_PCT(100));

    //Write style for screen_cfg_alarm_btn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_btn_1, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_cfg_alarm_btn_1, &_icon_setup_RGB565A8_44x44, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_cfg_alarm_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_cfg_alarm_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_btn_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_btn_1, &lv_font_AlibabaPuHuiTiRegular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_btn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_img_13
    ui->screen_cfg_alarm_img_13 = lv_image_create(ui->screen_cfg_alarm);
    lv_obj_set_pos(ui->screen_cfg_alarm_img_13, 1157, 14);
    lv_obj_set_size(ui->screen_cfg_alarm_img_13, 44, 44);
    lv_obj_add_flag(ui->screen_cfg_alarm_img_13, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_cfg_alarm_img_13, &_icon_device_RGB565A8_44x44);
    lv_image_set_pivot(ui->screen_cfg_alarm_img_13, 50,50);
    lv_image_set_rotation(ui->screen_cfg_alarm_img_13, 0);

    //Write style for screen_cfg_alarm_img_13, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_cfg_alarm_img_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_cfg_alarm_img_13, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_btn_4
    ui->screen_cfg_alarm_btn_4 = lv_button_create(ui->screen_cfg_alarm);
    lv_obj_set_pos(ui->screen_cfg_alarm_btn_4, 1070, 91);
    lv_obj_set_size(ui->screen_cfg_alarm_btn_4, 158, 42);
    ui->screen_cfg_alarm_btn_4_label = lv_label_create(ui->screen_cfg_alarm_btn_4);
    lv_label_set_text(ui->screen_cfg_alarm_btn_4_label, "门锁控制");
    lv_label_set_long_mode(ui->screen_cfg_alarm_btn_4_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_alarm_btn_4_label, LV_ALIGN_LEFT_MID, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_alarm_btn_4, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_alarm_btn_4_label, LV_PCT(100));

    //Write style for screen_cfg_alarm_btn_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_btn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_btn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_btn_4, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_btn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_btn_4, lv_color_hex(0x758AA6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_btn_4, &lv_font_AlibabaPuHuiTiRegular_34, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_btn_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_btn_4, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_img_14
    ui->screen_cfg_alarm_img_14 = lv_image_create(ui->screen_cfg_alarm);
    lv_obj_set_pos(ui->screen_cfg_alarm_img_14, 1215, 14);
    lv_obj_set_size(ui->screen_cfg_alarm_img_14, 44, 44);
    lv_obj_add_flag(ui->screen_cfg_alarm_img_14, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_cfg_alarm_img_14, &_icon_signal_RGB565A8_44x44);
    lv_image_set_pivot(ui->screen_cfg_alarm_img_14, 50,50);
    lv_image_set_rotation(ui->screen_cfg_alarm_img_14, 0);

    //Write style for screen_cfg_alarm_img_14, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_cfg_alarm_img_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_cfg_alarm_img_14, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_img_15
    ui->screen_cfg_alarm_img_15 = lv_image_create(ui->screen_cfg_alarm);
    lv_obj_set_pos(ui->screen_cfg_alarm_img_15, 1215, 14);
    lv_obj_set_size(ui->screen_cfg_alarm_img_15, 44, 44);
    lv_obj_add_flag(ui->screen_cfg_alarm_img_15, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_cfg_alarm_img_15, &_icon_signal_n_RGB565A8_44x44);
    lv_image_set_pivot(ui->screen_cfg_alarm_img_15, 50,50);
    lv_image_set_rotation(ui->screen_cfg_alarm_img_15, 0);

    //Write style for screen_cfg_alarm_img_15, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_cfg_alarm_img_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_cfg_alarm_img_15, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_btn_2
    ui->screen_cfg_alarm_btn_2 = lv_button_create(ui->screen_cfg_alarm);
    lv_obj_set_pos(ui->screen_cfg_alarm_btn_2, 891, 88);
    lv_obj_set_size(ui->screen_cfg_alarm_btn_2, 137, 42);
    ui->screen_cfg_alarm_btn_2_label = lv_label_create(ui->screen_cfg_alarm_btn_2);
    lv_label_set_text(ui->screen_cfg_alarm_btn_2_label, "报警设置");
    lv_label_set_long_mode(ui->screen_cfg_alarm_btn_2_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_alarm_btn_2_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_alarm_btn_2, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_alarm_btn_2_label, LV_PCT(100));

    //Write style for screen_cfg_alarm_btn_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_btn_2, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_btn_2, lv_color_hex(0x44D7B6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_btn_2, &lv_font_AlibabaPuHuiTiRegular_34, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_btn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_btn_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_btn_5
    ui->screen_cfg_alarm_btn_5 = lv_button_create(ui->screen_cfg_alarm);
    lv_obj_set_pos(ui->screen_cfg_alarm_btn_5, 48, 100);
    lv_obj_set_size(ui->screen_cfg_alarm_btn_5, 44, 44);
    ui->screen_cfg_alarm_btn_5_label = lv_label_create(ui->screen_cfg_alarm_btn_5);
    lv_label_set_text(ui->screen_cfg_alarm_btn_5_label, "");
    lv_label_set_long_mode(ui->screen_cfg_alarm_btn_5_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_alarm_btn_5_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_alarm_btn_5, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_alarm_btn_5_label, LV_PCT(100));

    //Write style for screen_cfg_alarm_btn_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_btn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_btn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_btn_5, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_btn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_cfg_alarm_btn_5, &_icon_reture_RGB565A8_44x44, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_cfg_alarm_btn_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_cfg_alarm_btn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_btn_5, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_btn_5, &lv_font_AlibabaPuHuiTiRegular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_btn_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_btn_5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_line_1
    ui->screen_cfg_alarm_line_1 = lv_line_create(ui->screen_cfg_alarm);
    lv_obj_set_pos(ui->screen_cfg_alarm_line_1, 940, 144);
    lv_obj_set_size(ui->screen_cfg_alarm_line_1, 40, 7);
    static lv_point_precise_t screen_cfg_alarm_line_1[] = {{0, 0},{40, 0}};
    lv_line_set_points(ui->screen_cfg_alarm_line_1, screen_cfg_alarm_line_1, 2);

    //Write style for screen_cfg_alarm_line_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_cfg_alarm_line_1, 7, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_cfg_alarm_line_1, lv_color_hex(0x44D7B6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_cfg_alarm_line_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_cfg_alarm_line_1, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_btn_43
    ui->screen_cfg_alarm_btn_43 = lv_button_create(ui->screen_cfg_alarm);
    lv_obj_set_pos(ui->screen_cfg_alarm_btn_43, 1110, 257);
    lv_obj_set_size(ui->screen_cfg_alarm_btn_43, 101, 40);
    ui->screen_cfg_alarm_btn_43_label = lv_label_create(ui->screen_cfg_alarm_btn_43);
    lv_label_set_text(ui->screen_cfg_alarm_btn_43_label, "新增");
    lv_label_set_long_mode(ui->screen_cfg_alarm_btn_43_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_alarm_btn_43_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_alarm_btn_43, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_alarm_btn_43_label, LV_PCT(100));

    //Write style for screen_cfg_alarm_btn_43, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_btn_43, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_btn_43, lv_color_hex(0x3ECDAD), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_btn_43, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_btn_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_btn_43, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_btn_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_btn_43, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_btn_43, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_btn_43, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_btn_43, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_cont_50
    ui->screen_cfg_alarm_cont_50 = lv_obj_create(ui->screen_cfg_alarm);
    lv_obj_set_pos(ui->screen_cfg_alarm_cont_50, 37, 278);
    lv_obj_set_size(ui->screen_cfg_alarm_cont_50, 705, 140);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_alarm_cont_50, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_alarm_cont_50, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_cont_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_cont_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_cont_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_cont_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_cont_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_cont_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_cont_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_cont_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_sw_23
    ui->screen_cfg_alarm_sw_23 = lv_switch_create(ui->screen_cfg_alarm_cont_50);
    lv_obj_set_pos(ui->screen_cfg_alarm_sw_23, 549, 68);
    lv_obj_set_size(ui->screen_cfg_alarm_sw_23, 77, 30);

    //Write style for screen_cfg_alarm_sw_23, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_23, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_23, lv_color_hex(0xe6e2e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_23, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_sw_23, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_sw_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_alarm_sw_23, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_23, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_23, lv_color_hex(0x44D7B6), LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_23, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_23, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

    //Write style for screen_cfg_alarm_sw_23, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_23, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_23, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_23, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_23, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_sw_23, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write style for screen_cfg_alarm_sw_23, Part: LV_PART_KNOB, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_23, 255, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_23, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_23, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_23, 0, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_sw_23, 10, LV_PART_KNOB|LV_STATE_FOCUSED);

    //Write codes screen_cfg_alarm_cont_52
    ui->screen_cfg_alarm_cont_52 = lv_obj_create(ui->screen_cfg_alarm_cont_50);
    lv_obj_set_pos(ui->screen_cfg_alarm_cont_52, 46, 68);
    lv_obj_set_size(ui->screen_cfg_alarm_cont_52, 159, 36);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_alarm_cont_52, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_alarm_cont_52, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_cont_52, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_alarm_cont_52, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_alarm_cont_52, lv_color_hex(0x4D7AB0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_alarm_cont_52, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_cont_52, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_cont_52, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_cont_52, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_cont_52, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_cont_52, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_cont_52, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_cont_52, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_label_75
    ui->screen_cfg_alarm_label_75 = lv_label_create(ui->screen_cfg_alarm_cont_52);
    lv_obj_set_pos(ui->screen_cfg_alarm_label_75, 54, 1);
    lv_obj_set_size(ui->screen_cfg_alarm_label_75, 47, 30);
    lv_label_set_text(ui->screen_cfg_alarm_label_75, "300");
    lv_label_set_long_mode(ui->screen_cfg_alarm_label_75, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_alarm_label_75, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_label_75, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_label_75, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_label_75, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_label_75, &lv_font_HarmonyOS_Sans_Medium_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_label_75, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_alarm_label_75, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_alarm_label_75, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_label_75, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_label_75, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_label_75, lv_color_hex(0x44D7B6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_label_75, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_label_75, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_label_75, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_label_75, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_label_75, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_label_75, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_btn_73
    ui->screen_cfg_alarm_btn_73 = lv_button_create(ui->screen_cfg_alarm_cont_52);
    lv_obj_set_pos(ui->screen_cfg_alarm_btn_73, 2, 1);
    lv_obj_set_size(ui->screen_cfg_alarm_btn_73, 47, 30);
    ui->screen_cfg_alarm_btn_73_label = lv_label_create(ui->screen_cfg_alarm_btn_73);
    lv_label_set_text(ui->screen_cfg_alarm_btn_73_label, "-");
    lv_label_set_long_mode(ui->screen_cfg_alarm_btn_73_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_alarm_btn_73_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_alarm_btn_73, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_alarm_btn_73_label, LV_PCT(100));

    //Write style for screen_cfg_alarm_btn_73, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_btn_73, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_btn_73, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_alarm_btn_73, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_alarm_btn_73, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_alarm_btn_73, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_btn_73, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_btn_73, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_btn_73, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_btn_73, &lv_font_HarmonyOS_Sans_Medium_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_btn_73, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_btn_73, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_btn_72
    ui->screen_cfg_alarm_btn_72 = lv_button_create(ui->screen_cfg_alarm_cont_52);
    lv_obj_set_pos(ui->screen_cfg_alarm_btn_72, 106, 1);
    lv_obj_set_size(ui->screen_cfg_alarm_btn_72, 47, 30);
    ui->screen_cfg_alarm_btn_72_label = lv_label_create(ui->screen_cfg_alarm_btn_72);
    lv_label_set_text(ui->screen_cfg_alarm_btn_72_label, "+");
    lv_label_set_long_mode(ui->screen_cfg_alarm_btn_72_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_alarm_btn_72_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_alarm_btn_72, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_alarm_btn_72_label, LV_PCT(100));

    //Write style for screen_cfg_alarm_btn_72, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_btn_72, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_btn_72, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_alarm_btn_72, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_alarm_btn_72, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_alarm_btn_72, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_btn_72, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_btn_72, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_btn_72, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_btn_72, &lv_font_HarmonyOS_Sans_Medium_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_btn_72, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_btn_72, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_cont_51
    ui->screen_cfg_alarm_cont_51 = lv_obj_create(ui->screen_cfg_alarm_cont_50);
    lv_obj_set_pos(ui->screen_cfg_alarm_cont_51, 290, 68);
    lv_obj_set_size(ui->screen_cfg_alarm_cont_51, 159, 36);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_alarm_cont_51, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_alarm_cont_51, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_cont_51, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_alarm_cont_51, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_alarm_cont_51, lv_color_hex(0x4D7AB0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_alarm_cont_51, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_cont_51, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_cont_51, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_cont_51, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_cont_51, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_cont_51, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_cont_51, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_cont_51, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_label_74
    ui->screen_cfg_alarm_label_74 = lv_label_create(ui->screen_cfg_alarm_cont_51);
    lv_obj_set_pos(ui->screen_cfg_alarm_label_74, 54, 1);
    lv_obj_set_size(ui->screen_cfg_alarm_label_74, 47, 30);
    lv_label_set_text(ui->screen_cfg_alarm_label_74, "300");
    lv_label_set_long_mode(ui->screen_cfg_alarm_label_74, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_alarm_label_74, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_label_74, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_label_74, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_label_74, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_label_74, &lv_font_HarmonyOS_Sans_Medium_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_label_74, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_alarm_label_74, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_alarm_label_74, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_label_74, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_label_74, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_label_74, lv_color_hex(0x44D7B6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_label_74, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_label_74, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_label_74, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_label_74, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_label_74, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_label_74, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_btn_71
    ui->screen_cfg_alarm_btn_71 = lv_button_create(ui->screen_cfg_alarm_cont_51);
    lv_obj_set_pos(ui->screen_cfg_alarm_btn_71, 1, 0);
    lv_obj_set_size(ui->screen_cfg_alarm_btn_71, 47, 30);
    ui->screen_cfg_alarm_btn_71_label = lv_label_create(ui->screen_cfg_alarm_btn_71);
    lv_label_set_text(ui->screen_cfg_alarm_btn_71_label, "-");
    lv_label_set_long_mode(ui->screen_cfg_alarm_btn_71_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_alarm_btn_71_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_alarm_btn_71, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_alarm_btn_71_label, LV_PCT(100));

    //Write style for screen_cfg_alarm_btn_71, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_btn_71, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_btn_71, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_alarm_btn_71, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_alarm_btn_71, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_alarm_btn_71, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_btn_71, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_btn_71, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_btn_71, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_btn_71, &lv_font_HarmonyOS_Sans_Medium_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_btn_71, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_btn_71, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_btn_70
    ui->screen_cfg_alarm_btn_70 = lv_button_create(ui->screen_cfg_alarm_cont_51);
    lv_obj_set_pos(ui->screen_cfg_alarm_btn_70, 106, 1);
    lv_obj_set_size(ui->screen_cfg_alarm_btn_70, 47, 30);
    ui->screen_cfg_alarm_btn_70_label = lv_label_create(ui->screen_cfg_alarm_btn_70);
    lv_label_set_text(ui->screen_cfg_alarm_btn_70_label, "+");
    lv_label_set_long_mode(ui->screen_cfg_alarm_btn_70_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_alarm_btn_70_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_alarm_btn_70, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_alarm_btn_70_label, LV_PCT(100));

    //Write style for screen_cfg_alarm_btn_70, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_btn_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_btn_70, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_alarm_btn_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_alarm_btn_70, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_alarm_btn_70, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_btn_70, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_btn_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_btn_70, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_btn_70, &lv_font_HarmonyOS_Sans_Medium_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_btn_70, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_btn_70, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_label_73
    ui->screen_cfg_alarm_label_73 = lv_label_create(ui->screen_cfg_alarm_cont_50);
    lv_obj_set_pos(ui->screen_cfg_alarm_label_73, 534, 16);
    lv_obj_set_size(ui->screen_cfg_alarm_label_73, 106, 33);
    lv_label_set_text(ui->screen_cfg_alarm_label_73, "报警开关");
    lv_label_set_long_mode(ui->screen_cfg_alarm_label_73, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_alarm_label_73, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_label_73, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_label_73, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_label_73, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_label_73, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_label_73, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_alarm_label_73, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_alarm_label_73, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_label_73, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_label_73, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_label_73, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_label_73, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_label_73, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_label_73, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_label_73, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_label_72
    ui->screen_cfg_alarm_label_72 = lv_label_create(ui->screen_cfg_alarm_cont_50);
    lv_obj_set_pos(ui->screen_cfg_alarm_label_72, 313, 18);
    lv_obj_set_size(ui->screen_cfg_alarm_label_72, 104, 33);
    lv_label_set_text(ui->screen_cfg_alarm_label_72, "温度下限");
    lv_label_set_long_mode(ui->screen_cfg_alarm_label_72, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_alarm_label_72, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_label_72, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_label_72, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_label_72, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_label_72, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_label_72, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_alarm_label_72, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_alarm_label_72, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_label_72, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_label_72, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_label_72, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_label_72, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_label_72, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_label_72, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_label_72, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_label_71
    ui->screen_cfg_alarm_label_71 = lv_label_create(ui->screen_cfg_alarm_cont_50);
    lv_obj_set_pos(ui->screen_cfg_alarm_label_71, 71, 18);
    lv_obj_set_size(ui->screen_cfg_alarm_label_71, 106, 33);
    lv_label_set_text(ui->screen_cfg_alarm_label_71, "温度上限");
    lv_label_set_long_mode(ui->screen_cfg_alarm_label_71, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_alarm_label_71, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_label_71, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_label_71, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_label_71, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_label_71, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_label_71, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_alarm_label_71, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_alarm_label_71, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_label_71, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_label_71, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_label_71, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_label_71, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_label_71, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_label_71, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_label_71, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_line_10
    ui->screen_cfg_alarm_line_10 = lv_line_create(ui->screen_cfg_alarm_cont_50);
    lv_obj_set_pos(ui->screen_cfg_alarm_line_10, 30, 122);
    lv_obj_set_size(ui->screen_cfg_alarm_line_10, 637, 2);
    static lv_point_precise_t screen_cfg_alarm_line_10[] = {{0, 0},{637, 0}};
    lv_line_set_points(ui->screen_cfg_alarm_line_10, screen_cfg_alarm_line_10, 2);

    //Write style for screen_cfg_alarm_line_10, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_cfg_alarm_line_10, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_cfg_alarm_line_10, lv_color_hex(0x758AA6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_cfg_alarm_line_10, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_cfg_alarm_line_10, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_cont_53
    ui->screen_cfg_alarm_cont_53 = lv_obj_create(ui->screen_cfg_alarm);
    lv_obj_set_pos(ui->screen_cfg_alarm_cont_53, 37, 411);
    lv_obj_set_size(ui->screen_cfg_alarm_cont_53, 705, 140);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_alarm_cont_53, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_alarm_cont_53, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_cont_53, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_cont_53, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_cont_53, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_cont_53, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_cont_53, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_cont_53, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_cont_53, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_cont_53, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_sw_24
    ui->screen_cfg_alarm_sw_24 = lv_switch_create(ui->screen_cfg_alarm_cont_53);
    lv_obj_set_pos(ui->screen_cfg_alarm_sw_24, 549, 68);
    lv_obj_set_size(ui->screen_cfg_alarm_sw_24, 77, 30);

    //Write style for screen_cfg_alarm_sw_24, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_24, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_24, lv_color_hex(0xe6e2e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_24, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_sw_24, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_sw_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_alarm_sw_24, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_24, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_24, lv_color_hex(0x44D7B6), LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_24, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_24, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

    //Write style for screen_cfg_alarm_sw_24, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_24, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_24, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_24, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_24, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_sw_24, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write style for screen_cfg_alarm_sw_24, Part: LV_PART_KNOB, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_24, 255, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_24, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_24, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_24, 0, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_sw_24, 10, LV_PART_KNOB|LV_STATE_FOCUSED);

    //Write codes screen_cfg_alarm_cont_55
    ui->screen_cfg_alarm_cont_55 = lv_obj_create(ui->screen_cfg_alarm_cont_53);
    lv_obj_set_pos(ui->screen_cfg_alarm_cont_55, 46, 68);
    lv_obj_set_size(ui->screen_cfg_alarm_cont_55, 159, 36);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_alarm_cont_55, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_alarm_cont_55, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_cont_55, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_alarm_cont_55, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_alarm_cont_55, lv_color_hex(0x4D7AB0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_alarm_cont_55, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_cont_55, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_cont_55, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_cont_55, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_cont_55, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_cont_55, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_cont_55, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_cont_55, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_label_80
    ui->screen_cfg_alarm_label_80 = lv_label_create(ui->screen_cfg_alarm_cont_55);
    lv_obj_set_pos(ui->screen_cfg_alarm_label_80, 54, 1);
    lv_obj_set_size(ui->screen_cfg_alarm_label_80, 47, 30);
    lv_label_set_text(ui->screen_cfg_alarm_label_80, "300");
    lv_label_set_long_mode(ui->screen_cfg_alarm_label_80, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_alarm_label_80, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_label_80, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_label_80, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_label_80, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_label_80, &lv_font_HarmonyOS_Sans_Medium_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_label_80, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_alarm_label_80, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_alarm_label_80, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_label_80, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_label_80, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_label_80, lv_color_hex(0x44D7B6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_label_80, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_label_80, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_label_80, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_label_80, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_label_80, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_label_80, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_btn_77
    ui->screen_cfg_alarm_btn_77 = lv_button_create(ui->screen_cfg_alarm_cont_55);
    lv_obj_set_pos(ui->screen_cfg_alarm_btn_77, 2, 1);
    lv_obj_set_size(ui->screen_cfg_alarm_btn_77, 47, 30);
    ui->screen_cfg_alarm_btn_77_label = lv_label_create(ui->screen_cfg_alarm_btn_77);
    lv_label_set_text(ui->screen_cfg_alarm_btn_77_label, "-");
    lv_label_set_long_mode(ui->screen_cfg_alarm_btn_77_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_alarm_btn_77_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_alarm_btn_77, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_alarm_btn_77_label, LV_PCT(100));

    //Write style for screen_cfg_alarm_btn_77, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_btn_77, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_btn_77, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_alarm_btn_77, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_alarm_btn_77, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_alarm_btn_77, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_btn_77, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_btn_77, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_btn_77, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_btn_77, &lv_font_HarmonyOS_Sans_Medium_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_btn_77, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_btn_77, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_btn_76
    ui->screen_cfg_alarm_btn_76 = lv_button_create(ui->screen_cfg_alarm_cont_55);
    lv_obj_set_pos(ui->screen_cfg_alarm_btn_76, 106, 1);
    lv_obj_set_size(ui->screen_cfg_alarm_btn_76, 47, 30);
    ui->screen_cfg_alarm_btn_76_label = lv_label_create(ui->screen_cfg_alarm_btn_76);
    lv_label_set_text(ui->screen_cfg_alarm_btn_76_label, "+");
    lv_label_set_long_mode(ui->screen_cfg_alarm_btn_76_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_alarm_btn_76_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_alarm_btn_76, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_alarm_btn_76_label, LV_PCT(100));

    //Write style for screen_cfg_alarm_btn_76, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_btn_76, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_btn_76, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_alarm_btn_76, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_alarm_btn_76, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_alarm_btn_76, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_btn_76, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_btn_76, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_btn_76, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_btn_76, &lv_font_HarmonyOS_Sans_Medium_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_btn_76, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_btn_76, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_cont_54
    ui->screen_cfg_alarm_cont_54 = lv_obj_create(ui->screen_cfg_alarm_cont_53);
    lv_obj_set_pos(ui->screen_cfg_alarm_cont_54, 290, 68);
    lv_obj_set_size(ui->screen_cfg_alarm_cont_54, 159, 36);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_alarm_cont_54, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_alarm_cont_54, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_cont_54, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_alarm_cont_54, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_alarm_cont_54, lv_color_hex(0x4D7AB0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_alarm_cont_54, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_cont_54, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_cont_54, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_cont_54, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_cont_54, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_cont_54, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_cont_54, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_cont_54, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_label_79
    ui->screen_cfg_alarm_label_79 = lv_label_create(ui->screen_cfg_alarm_cont_54);
    lv_obj_set_pos(ui->screen_cfg_alarm_label_79, 54, 1);
    lv_obj_set_size(ui->screen_cfg_alarm_label_79, 47, 30);
    lv_label_set_text(ui->screen_cfg_alarm_label_79, "300");
    lv_label_set_long_mode(ui->screen_cfg_alarm_label_79, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_alarm_label_79, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_label_79, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_label_79, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_label_79, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_label_79, &lv_font_HarmonyOS_Sans_Medium_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_label_79, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_alarm_label_79, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_alarm_label_79, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_label_79, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_label_79, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_label_79, lv_color_hex(0x44D7B6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_label_79, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_label_79, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_label_79, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_label_79, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_label_79, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_label_79, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_btn_75
    ui->screen_cfg_alarm_btn_75 = lv_button_create(ui->screen_cfg_alarm_cont_54);
    lv_obj_set_pos(ui->screen_cfg_alarm_btn_75, 1, 0);
    lv_obj_set_size(ui->screen_cfg_alarm_btn_75, 47, 30);
    ui->screen_cfg_alarm_btn_75_label = lv_label_create(ui->screen_cfg_alarm_btn_75);
    lv_label_set_text(ui->screen_cfg_alarm_btn_75_label, "-");
    lv_label_set_long_mode(ui->screen_cfg_alarm_btn_75_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_alarm_btn_75_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_alarm_btn_75, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_alarm_btn_75_label, LV_PCT(100));

    //Write style for screen_cfg_alarm_btn_75, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_btn_75, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_btn_75, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_alarm_btn_75, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_alarm_btn_75, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_alarm_btn_75, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_btn_75, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_btn_75, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_btn_75, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_btn_75, &lv_font_HarmonyOS_Sans_Medium_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_btn_75, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_btn_75, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_btn_74
    ui->screen_cfg_alarm_btn_74 = lv_button_create(ui->screen_cfg_alarm_cont_54);
    lv_obj_set_pos(ui->screen_cfg_alarm_btn_74, 106, 1);
    lv_obj_set_size(ui->screen_cfg_alarm_btn_74, 47, 30);
    ui->screen_cfg_alarm_btn_74_label = lv_label_create(ui->screen_cfg_alarm_btn_74);
    lv_label_set_text(ui->screen_cfg_alarm_btn_74_label, "+");
    lv_label_set_long_mode(ui->screen_cfg_alarm_btn_74_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_alarm_btn_74_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_alarm_btn_74, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_alarm_btn_74_label, LV_PCT(100));

    //Write style for screen_cfg_alarm_btn_74, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_btn_74, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_btn_74, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_alarm_btn_74, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_alarm_btn_74, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_alarm_btn_74, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_btn_74, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_btn_74, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_btn_74, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_btn_74, &lv_font_HarmonyOS_Sans_Medium_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_btn_74, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_btn_74, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_label_78
    ui->screen_cfg_alarm_label_78 = lv_label_create(ui->screen_cfg_alarm_cont_53);
    lv_obj_set_pos(ui->screen_cfg_alarm_label_78, 534, 16);
    lv_obj_set_size(ui->screen_cfg_alarm_label_78, 106, 33);
    lv_label_set_text(ui->screen_cfg_alarm_label_78, "报警开关");
    lv_label_set_long_mode(ui->screen_cfg_alarm_label_78, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_alarm_label_78, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_label_78, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_label_78, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_label_78, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_label_78, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_label_78, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_alarm_label_78, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_alarm_label_78, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_label_78, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_label_78, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_label_78, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_label_78, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_label_78, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_label_78, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_label_78, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_label_77
    ui->screen_cfg_alarm_label_77 = lv_label_create(ui->screen_cfg_alarm_cont_53);
    lv_obj_set_pos(ui->screen_cfg_alarm_label_77, 311, 18);
    lv_obj_set_size(ui->screen_cfg_alarm_label_77, 104, 33);
    lv_label_set_text(ui->screen_cfg_alarm_label_77, "湿度下限");
    lv_label_set_long_mode(ui->screen_cfg_alarm_label_77, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_alarm_label_77, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_label_77, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_label_77, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_label_77, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_label_77, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_label_77, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_alarm_label_77, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_alarm_label_77, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_label_77, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_label_77, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_label_77, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_label_77, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_label_77, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_label_77, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_label_77, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_label_76
    ui->screen_cfg_alarm_label_76 = lv_label_create(ui->screen_cfg_alarm_cont_53);
    lv_obj_set_pos(ui->screen_cfg_alarm_label_76, 71, 18);
    lv_obj_set_size(ui->screen_cfg_alarm_label_76, 106, 33);
    lv_label_set_text(ui->screen_cfg_alarm_label_76, "湿度上限");
    lv_label_set_long_mode(ui->screen_cfg_alarm_label_76, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_alarm_label_76, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_label_76, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_label_76, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_label_76, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_label_76, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_label_76, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_alarm_label_76, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_alarm_label_76, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_label_76, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_label_76, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_label_76, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_label_76, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_label_76, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_label_76, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_label_76, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_line_11
    ui->screen_cfg_alarm_line_11 = lv_line_create(ui->screen_cfg_alarm_cont_53);
    lv_obj_set_pos(ui->screen_cfg_alarm_line_11, 30, 122);
    lv_obj_set_size(ui->screen_cfg_alarm_line_11, 637, 2);
    static lv_point_precise_t screen_cfg_alarm_line_11[] = {{0, 0},{637, 0}};
    lv_line_set_points(ui->screen_cfg_alarm_line_11, screen_cfg_alarm_line_11, 2);

    //Write style for screen_cfg_alarm_line_11, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_cfg_alarm_line_11, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_cfg_alarm_line_11, lv_color_hex(0x758AA6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_cfg_alarm_line_11, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_cfg_alarm_line_11, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_cont_59
    ui->screen_cfg_alarm_cont_59 = lv_obj_create(ui->screen_cfg_alarm);
    lv_obj_set_pos(ui->screen_cfg_alarm_cont_59, 37, 544);
    lv_obj_set_size(ui->screen_cfg_alarm_cont_59, 705, 140);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_alarm_cont_59, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_alarm_cont_59, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_cont_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_cont_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_cont_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_cont_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_cont_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_cont_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_cont_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_cont_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_sw_26
    ui->screen_cfg_alarm_sw_26 = lv_switch_create(ui->screen_cfg_alarm_cont_59);
    lv_obj_set_pos(ui->screen_cfg_alarm_sw_26, 549, 68);
    lv_obj_set_size(ui->screen_cfg_alarm_sw_26, 77, 30);

    //Write style for screen_cfg_alarm_sw_26, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_26, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_26, lv_color_hex(0xe6e2e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_26, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_26, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_sw_26, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_sw_26, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_alarm_sw_26, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_26, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_26, lv_color_hex(0x44D7B6), LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_26, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_26, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

    //Write style for screen_cfg_alarm_sw_26, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_26, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_26, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_26, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_26, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_sw_26, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write style for screen_cfg_alarm_sw_26, Part: LV_PART_KNOB, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_26, 255, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_26, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_26, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_26, 0, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_sw_26, 10, LV_PART_KNOB|LV_STATE_FOCUSED);

    //Write codes screen_cfg_alarm_cont_61
    ui->screen_cfg_alarm_cont_61 = lv_obj_create(ui->screen_cfg_alarm_cont_59);
    lv_obj_set_pos(ui->screen_cfg_alarm_cont_61, 46, 68);
    lv_obj_set_size(ui->screen_cfg_alarm_cont_61, 159, 36);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_alarm_cont_61, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_alarm_cont_61, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_cont_61, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_alarm_cont_61, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_alarm_cont_61, lv_color_hex(0x4D7AB0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_alarm_cont_61, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_cont_61, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_cont_61, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_cont_61, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_cont_61, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_cont_61, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_cont_61, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_cont_61, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_label_90
    ui->screen_cfg_alarm_label_90 = lv_label_create(ui->screen_cfg_alarm_cont_61);
    lv_obj_set_pos(ui->screen_cfg_alarm_label_90, 54, 1);
    lv_obj_set_size(ui->screen_cfg_alarm_label_90, 47, 30);
    lv_label_set_text(ui->screen_cfg_alarm_label_90, "300");
    lv_label_set_long_mode(ui->screen_cfg_alarm_label_90, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_alarm_label_90, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_label_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_label_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_label_90, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_label_90, &lv_font_HarmonyOS_Sans_Medium_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_label_90, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_alarm_label_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_alarm_label_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_label_90, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_label_90, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_label_90, lv_color_hex(0x44D7B6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_label_90, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_label_90, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_label_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_label_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_label_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_label_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_btn_85
    ui->screen_cfg_alarm_btn_85 = lv_button_create(ui->screen_cfg_alarm_cont_61);
    lv_obj_set_pos(ui->screen_cfg_alarm_btn_85, 2, 1);
    lv_obj_set_size(ui->screen_cfg_alarm_btn_85, 47, 30);
    ui->screen_cfg_alarm_btn_85_label = lv_label_create(ui->screen_cfg_alarm_btn_85);
    lv_label_set_text(ui->screen_cfg_alarm_btn_85_label, "-");
    lv_label_set_long_mode(ui->screen_cfg_alarm_btn_85_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_alarm_btn_85_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_alarm_btn_85, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_alarm_btn_85_label, LV_PCT(100));

    //Write style for screen_cfg_alarm_btn_85, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_btn_85, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_btn_85, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_alarm_btn_85, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_alarm_btn_85, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_alarm_btn_85, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_btn_85, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_btn_85, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_btn_85, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_btn_85, &lv_font_HarmonyOS_Sans_Medium_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_btn_85, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_btn_85, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_btn_84
    ui->screen_cfg_alarm_btn_84 = lv_button_create(ui->screen_cfg_alarm_cont_61);
    lv_obj_set_pos(ui->screen_cfg_alarm_btn_84, 106, 1);
    lv_obj_set_size(ui->screen_cfg_alarm_btn_84, 47, 30);
    ui->screen_cfg_alarm_btn_84_label = lv_label_create(ui->screen_cfg_alarm_btn_84);
    lv_label_set_text(ui->screen_cfg_alarm_btn_84_label, "+");
    lv_label_set_long_mode(ui->screen_cfg_alarm_btn_84_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_alarm_btn_84_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_alarm_btn_84, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_alarm_btn_84_label, LV_PCT(100));

    //Write style for screen_cfg_alarm_btn_84, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_btn_84, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_btn_84, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_alarm_btn_84, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_alarm_btn_84, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_alarm_btn_84, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_btn_84, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_btn_84, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_btn_84, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_btn_84, &lv_font_HarmonyOS_Sans_Medium_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_btn_84, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_btn_84, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_cont_60
    ui->screen_cfg_alarm_cont_60 = lv_obj_create(ui->screen_cfg_alarm_cont_59);
    lv_obj_set_pos(ui->screen_cfg_alarm_cont_60, 290, 68);
    lv_obj_set_size(ui->screen_cfg_alarm_cont_60, 159, 36);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_alarm_cont_60, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_alarm_cont_60, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_cont_60, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_alarm_cont_60, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_alarm_cont_60, lv_color_hex(0x4D7AB0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_alarm_cont_60, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_cont_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_cont_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_cont_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_cont_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_cont_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_cont_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_cont_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_label_89
    ui->screen_cfg_alarm_label_89 = lv_label_create(ui->screen_cfg_alarm_cont_60);
    lv_obj_set_pos(ui->screen_cfg_alarm_label_89, 54, 1);
    lv_obj_set_size(ui->screen_cfg_alarm_label_89, 47, 30);
    lv_label_set_text(ui->screen_cfg_alarm_label_89, "300");
    lv_label_set_long_mode(ui->screen_cfg_alarm_label_89, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_alarm_label_89, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_label_89, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_label_89, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_label_89, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_label_89, &lv_font_HarmonyOS_Sans_Medium_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_label_89, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_alarm_label_89, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_alarm_label_89, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_label_89, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_label_89, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_label_89, lv_color_hex(0x44D7B6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_label_89, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_label_89, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_label_89, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_label_89, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_label_89, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_label_89, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_btn_83
    ui->screen_cfg_alarm_btn_83 = lv_button_create(ui->screen_cfg_alarm_cont_60);
    lv_obj_set_pos(ui->screen_cfg_alarm_btn_83, 1, 0);
    lv_obj_set_size(ui->screen_cfg_alarm_btn_83, 47, 30);
    ui->screen_cfg_alarm_btn_83_label = lv_label_create(ui->screen_cfg_alarm_btn_83);
    lv_label_set_text(ui->screen_cfg_alarm_btn_83_label, "-");
    lv_label_set_long_mode(ui->screen_cfg_alarm_btn_83_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_alarm_btn_83_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_alarm_btn_83, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_alarm_btn_83_label, LV_PCT(100));

    //Write style for screen_cfg_alarm_btn_83, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_btn_83, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_btn_83, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_alarm_btn_83, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_alarm_btn_83, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_alarm_btn_83, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_btn_83, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_btn_83, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_btn_83, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_btn_83, &lv_font_HarmonyOS_Sans_Medium_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_btn_83, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_btn_83, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_btn_82
    ui->screen_cfg_alarm_btn_82 = lv_button_create(ui->screen_cfg_alarm_cont_60);
    lv_obj_set_pos(ui->screen_cfg_alarm_btn_82, 106, 1);
    lv_obj_set_size(ui->screen_cfg_alarm_btn_82, 47, 30);
    ui->screen_cfg_alarm_btn_82_label = lv_label_create(ui->screen_cfg_alarm_btn_82);
    lv_label_set_text(ui->screen_cfg_alarm_btn_82_label, "+");
    lv_label_set_long_mode(ui->screen_cfg_alarm_btn_82_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_alarm_btn_82_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_alarm_btn_82, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_alarm_btn_82_label, LV_PCT(100));

    //Write style for screen_cfg_alarm_btn_82, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_btn_82, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_btn_82, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_alarm_btn_82, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_alarm_btn_82, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_alarm_btn_82, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_btn_82, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_btn_82, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_btn_82, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_btn_82, &lv_font_HarmonyOS_Sans_Medium_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_btn_82, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_btn_82, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_label_88
    ui->screen_cfg_alarm_label_88 = lv_label_create(ui->screen_cfg_alarm_cont_59);
    lv_obj_set_pos(ui->screen_cfg_alarm_label_88, 534, 16);
    lv_obj_set_size(ui->screen_cfg_alarm_label_88, 106, 33);
    lv_label_set_text(ui->screen_cfg_alarm_label_88, "报警开关");
    lv_label_set_long_mode(ui->screen_cfg_alarm_label_88, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_alarm_label_88, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_label_88, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_label_88, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_label_88, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_label_88, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_label_88, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_alarm_label_88, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_alarm_label_88, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_label_88, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_label_88, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_label_88, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_label_88, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_label_88, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_label_88, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_label_88, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_label_87
    ui->screen_cfg_alarm_label_87 = lv_label_create(ui->screen_cfg_alarm_cont_59);
    lv_obj_set_pos(ui->screen_cfg_alarm_label_87, 311, 18);
    lv_obj_set_size(ui->screen_cfg_alarm_label_87, 104, 33);
    lv_label_set_text(ui->screen_cfg_alarm_label_87, "氧气下限");
    lv_label_set_long_mode(ui->screen_cfg_alarm_label_87, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_alarm_label_87, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_label_87, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_label_87, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_label_87, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_label_87, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_label_87, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_alarm_label_87, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_alarm_label_87, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_label_87, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_label_87, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_label_87, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_label_87, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_label_87, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_label_87, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_label_87, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_label_86
    ui->screen_cfg_alarm_label_86 = lv_label_create(ui->screen_cfg_alarm_cont_59);
    lv_obj_set_pos(ui->screen_cfg_alarm_label_86, 69, 18);
    lv_obj_set_size(ui->screen_cfg_alarm_label_86, 106, 33);
    lv_label_set_text(ui->screen_cfg_alarm_label_86, "氧气上限");
    lv_label_set_long_mode(ui->screen_cfg_alarm_label_86, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_alarm_label_86, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_label_86, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_label_86, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_label_86, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_label_86, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_label_86, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_alarm_label_86, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_alarm_label_86, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_label_86, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_label_86, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_label_86, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_label_86, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_label_86, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_label_86, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_label_86, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_line_13
    ui->screen_cfg_alarm_line_13 = lv_line_create(ui->screen_cfg_alarm_cont_59);
    lv_obj_set_pos(ui->screen_cfg_alarm_line_13, 30, 122);
    lv_obj_set_size(ui->screen_cfg_alarm_line_13, 637, 2);
    static lv_point_precise_t screen_cfg_alarm_line_13[] = {{0, 0},{637, 0}};
    lv_line_set_points(ui->screen_cfg_alarm_line_13, screen_cfg_alarm_line_13, 2);

    //Write style for screen_cfg_alarm_line_13, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_cfg_alarm_line_13, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_cfg_alarm_line_13, lv_color_hex(0x758AA6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_cfg_alarm_line_13, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_cfg_alarm_line_13, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_cont_56
    ui->screen_cfg_alarm_cont_56 = lv_obj_create(ui->screen_cfg_alarm);
    lv_obj_set_pos(ui->screen_cfg_alarm_cont_56, 37, 677);
    lv_obj_set_size(ui->screen_cfg_alarm_cont_56, 705, 140);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_alarm_cont_56, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_alarm_cont_56, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_cont_56, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_cont_56, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_cont_56, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_cont_56, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_cont_56, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_cont_56, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_cont_56, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_cont_56, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_sw_25
    ui->screen_cfg_alarm_sw_25 = lv_switch_create(ui->screen_cfg_alarm_cont_56);
    lv_obj_set_pos(ui->screen_cfg_alarm_sw_25, 549, 68);
    lv_obj_set_size(ui->screen_cfg_alarm_sw_25, 77, 30);

    //Write style for screen_cfg_alarm_sw_25, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_25, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_25, lv_color_hex(0xe6e2e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_25, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_25, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_sw_25, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_sw_25, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_alarm_sw_25, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_25, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_25, lv_color_hex(0x44D7B6), LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_25, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_25, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

    //Write style for screen_cfg_alarm_sw_25, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_25, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_25, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_25, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_25, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_sw_25, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write style for screen_cfg_alarm_sw_25, Part: LV_PART_KNOB, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_25, 255, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_25, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_25, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_25, 0, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_sw_25, 10, LV_PART_KNOB|LV_STATE_FOCUSED);

    //Write codes screen_cfg_alarm_cont_58
    ui->screen_cfg_alarm_cont_58 = lv_obj_create(ui->screen_cfg_alarm_cont_56);
    lv_obj_set_pos(ui->screen_cfg_alarm_cont_58, 46, 68);
    lv_obj_set_size(ui->screen_cfg_alarm_cont_58, 159, 36);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_alarm_cont_58, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_alarm_cont_58, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_cont_58, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_alarm_cont_58, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_alarm_cont_58, lv_color_hex(0x4D7AB0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_alarm_cont_58, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_cont_58, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_cont_58, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_cont_58, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_cont_58, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_cont_58, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_cont_58, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_cont_58, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_label_85
    ui->screen_cfg_alarm_label_85 = lv_label_create(ui->screen_cfg_alarm_cont_58);
    lv_obj_set_pos(ui->screen_cfg_alarm_label_85, 54, 1);
    lv_obj_set_size(ui->screen_cfg_alarm_label_85, 47, 30);
    lv_label_set_text(ui->screen_cfg_alarm_label_85, "300");
    lv_label_set_long_mode(ui->screen_cfg_alarm_label_85, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_alarm_label_85, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_label_85, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_label_85, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_label_85, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_label_85, &lv_font_HarmonyOS_Sans_Medium_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_label_85, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_alarm_label_85, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_alarm_label_85, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_label_85, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_label_85, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_label_85, lv_color_hex(0x44D7B6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_label_85, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_label_85, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_label_85, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_label_85, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_label_85, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_label_85, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_btn_81
    ui->screen_cfg_alarm_btn_81 = lv_button_create(ui->screen_cfg_alarm_cont_58);
    lv_obj_set_pos(ui->screen_cfg_alarm_btn_81, 2, 1);
    lv_obj_set_size(ui->screen_cfg_alarm_btn_81, 47, 30);
    ui->screen_cfg_alarm_btn_81_label = lv_label_create(ui->screen_cfg_alarm_btn_81);
    lv_label_set_text(ui->screen_cfg_alarm_btn_81_label, "-");
    lv_label_set_long_mode(ui->screen_cfg_alarm_btn_81_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_alarm_btn_81_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_alarm_btn_81, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_alarm_btn_81_label, LV_PCT(100));

    //Write style for screen_cfg_alarm_btn_81, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_btn_81, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_btn_81, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_alarm_btn_81, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_alarm_btn_81, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_alarm_btn_81, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_btn_81, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_btn_81, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_btn_81, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_btn_81, &lv_font_HarmonyOS_Sans_Medium_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_btn_81, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_btn_81, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_btn_80
    ui->screen_cfg_alarm_btn_80 = lv_button_create(ui->screen_cfg_alarm_cont_58);
    lv_obj_set_pos(ui->screen_cfg_alarm_btn_80, 106, 1);
    lv_obj_set_size(ui->screen_cfg_alarm_btn_80, 47, 30);
    ui->screen_cfg_alarm_btn_80_label = lv_label_create(ui->screen_cfg_alarm_btn_80);
    lv_label_set_text(ui->screen_cfg_alarm_btn_80_label, "+");
    lv_label_set_long_mode(ui->screen_cfg_alarm_btn_80_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_alarm_btn_80_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_alarm_btn_80, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_alarm_btn_80_label, LV_PCT(100));

    //Write style for screen_cfg_alarm_btn_80, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_btn_80, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_btn_80, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_alarm_btn_80, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_alarm_btn_80, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_alarm_btn_80, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_btn_80, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_btn_80, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_btn_80, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_btn_80, &lv_font_HarmonyOS_Sans_Medium_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_btn_80, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_btn_80, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_cont_57
    ui->screen_cfg_alarm_cont_57 = lv_obj_create(ui->screen_cfg_alarm_cont_56);
    lv_obj_set_pos(ui->screen_cfg_alarm_cont_57, 290, 68);
    lv_obj_set_size(ui->screen_cfg_alarm_cont_57, 159, 36);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_alarm_cont_57, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_alarm_cont_57, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_cont_57, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_alarm_cont_57, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_alarm_cont_57, lv_color_hex(0x4D7AB0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_alarm_cont_57, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_cont_57, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_cont_57, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_cont_57, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_cont_57, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_cont_57, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_cont_57, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_cont_57, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_label_84
    ui->screen_cfg_alarm_label_84 = lv_label_create(ui->screen_cfg_alarm_cont_57);
    lv_obj_set_pos(ui->screen_cfg_alarm_label_84, 54, 1);
    lv_obj_set_size(ui->screen_cfg_alarm_label_84, 47, 30);
    lv_label_set_text(ui->screen_cfg_alarm_label_84, "300");
    lv_label_set_long_mode(ui->screen_cfg_alarm_label_84, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_alarm_label_84, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_label_84, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_label_84, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_label_84, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_label_84, &lv_font_HarmonyOS_Sans_Medium_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_label_84, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_alarm_label_84, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_alarm_label_84, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_label_84, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_label_84, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_label_84, lv_color_hex(0x44D7B6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_label_84, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_label_84, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_label_84, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_label_84, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_label_84, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_label_84, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_btn_79
    ui->screen_cfg_alarm_btn_79 = lv_button_create(ui->screen_cfg_alarm_cont_57);
    lv_obj_set_pos(ui->screen_cfg_alarm_btn_79, 1, 0);
    lv_obj_set_size(ui->screen_cfg_alarm_btn_79, 47, 30);
    ui->screen_cfg_alarm_btn_79_label = lv_label_create(ui->screen_cfg_alarm_btn_79);
    lv_label_set_text(ui->screen_cfg_alarm_btn_79_label, "-");
    lv_label_set_long_mode(ui->screen_cfg_alarm_btn_79_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_alarm_btn_79_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_alarm_btn_79, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_alarm_btn_79_label, LV_PCT(100));

    //Write style for screen_cfg_alarm_btn_79, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_btn_79, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_btn_79, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_alarm_btn_79, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_alarm_btn_79, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_alarm_btn_79, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_btn_79, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_btn_79, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_btn_79, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_btn_79, &lv_font_HarmonyOS_Sans_Medium_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_btn_79, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_btn_79, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_btn_78
    ui->screen_cfg_alarm_btn_78 = lv_button_create(ui->screen_cfg_alarm_cont_57);
    lv_obj_set_pos(ui->screen_cfg_alarm_btn_78, 106, 1);
    lv_obj_set_size(ui->screen_cfg_alarm_btn_78, 47, 30);
    ui->screen_cfg_alarm_btn_78_label = lv_label_create(ui->screen_cfg_alarm_btn_78);
    lv_label_set_text(ui->screen_cfg_alarm_btn_78_label, "+");
    lv_label_set_long_mode(ui->screen_cfg_alarm_btn_78_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_alarm_btn_78_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_alarm_btn_78, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_alarm_btn_78_label, LV_PCT(100));

    //Write style for screen_cfg_alarm_btn_78, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_btn_78, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_btn_78, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_alarm_btn_78, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_alarm_btn_78, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_alarm_btn_78, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_btn_78, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_btn_78, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_btn_78, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_btn_78, &lv_font_HarmonyOS_Sans_Medium_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_btn_78, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_btn_78, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_label_83
    ui->screen_cfg_alarm_label_83 = lv_label_create(ui->screen_cfg_alarm_cont_56);
    lv_obj_set_pos(ui->screen_cfg_alarm_label_83, 534, 16);
    lv_obj_set_size(ui->screen_cfg_alarm_label_83, 106, 33);
    lv_label_set_text(ui->screen_cfg_alarm_label_83, "报警开关");
    lv_label_set_long_mode(ui->screen_cfg_alarm_label_83, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_alarm_label_83, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_label_83, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_label_83, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_label_83, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_label_83, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_label_83, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_alarm_label_83, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_alarm_label_83, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_label_83, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_label_83, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_label_83, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_label_83, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_label_83, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_label_83, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_label_83, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_label_82
    ui->screen_cfg_alarm_label_82 = lv_label_create(ui->screen_cfg_alarm_cont_56);
    lv_obj_set_pos(ui->screen_cfg_alarm_label_82, 313, 18);
    lv_obj_set_size(ui->screen_cfg_alarm_label_82, 104, 33);
    lv_label_set_text(ui->screen_cfg_alarm_label_82, "VOC低报");
    lv_label_set_long_mode(ui->screen_cfg_alarm_label_82, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_alarm_label_82, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_label_82, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_label_82, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_label_82, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_label_82, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_label_82, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_alarm_label_82, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_alarm_label_82, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_label_82, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_label_82, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_label_82, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_label_82, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_label_82, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_label_82, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_label_82, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_label_81
    ui->screen_cfg_alarm_label_81 = lv_label_create(ui->screen_cfg_alarm_cont_56);
    lv_obj_set_pos(ui->screen_cfg_alarm_label_81, 71, 18);
    lv_obj_set_size(ui->screen_cfg_alarm_label_81, 106, 33);
    lv_label_set_text(ui->screen_cfg_alarm_label_81, "VOC高报");
    lv_label_set_long_mode(ui->screen_cfg_alarm_label_81, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_alarm_label_81, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_label_81, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_label_81, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_label_81, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_label_81, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_label_81, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_alarm_label_81, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_alarm_label_81, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_label_81, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_label_81, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_label_81, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_label_81, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_label_81, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_label_81, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_label_81, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_line_12
    ui->screen_cfg_alarm_line_12 = lv_line_create(ui->screen_cfg_alarm_cont_56);
    lv_obj_set_pos(ui->screen_cfg_alarm_line_12, 30, 122);
    lv_obj_set_size(ui->screen_cfg_alarm_line_12, 637, 2);
    static lv_point_precise_t screen_cfg_alarm_line_12[] = {{0, 0},{637, 0}};
    lv_line_set_points(ui->screen_cfg_alarm_line_12, screen_cfg_alarm_line_12, 2);

    //Write style for screen_cfg_alarm_line_12, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_cfg_alarm_line_12, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_cfg_alarm_line_12, lv_color_hex(0x758AA6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_cfg_alarm_line_12, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_cfg_alarm_line_12, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_cont_62
    ui->screen_cfg_alarm_cont_62 = lv_obj_create(ui->screen_cfg_alarm);
    lv_obj_set_pos(ui->screen_cfg_alarm_cont_62, 37, 810);
    lv_obj_set_size(ui->screen_cfg_alarm_cont_62, 705, 140);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_alarm_cont_62, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_alarm_cont_62, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_cont_62, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_cont_62, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_cont_62, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_cont_62, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_cont_62, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_cont_62, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_cont_62, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_cont_62, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_sw_27
    ui->screen_cfg_alarm_sw_27 = lv_switch_create(ui->screen_cfg_alarm_cont_62);
    lv_obj_set_pos(ui->screen_cfg_alarm_sw_27, 549, 68);
    lv_obj_set_size(ui->screen_cfg_alarm_sw_27, 77, 30);

    //Write style for screen_cfg_alarm_sw_27, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_27, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_27, lv_color_hex(0xe6e2e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_27, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_27, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_sw_27, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_sw_27, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_alarm_sw_27, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_27, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_27, lv_color_hex(0x44D7B6), LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_27, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_27, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

    //Write style for screen_cfg_alarm_sw_27, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_27, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_27, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_27, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_27, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_sw_27, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write style for screen_cfg_alarm_sw_27, Part: LV_PART_KNOB, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_27, 255, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_27, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_27, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_27, 0, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_sw_27, 10, LV_PART_KNOB|LV_STATE_FOCUSED);

    //Write codes screen_cfg_alarm_cont_64
    ui->screen_cfg_alarm_cont_64 = lv_obj_create(ui->screen_cfg_alarm_cont_62);
    lv_obj_set_pos(ui->screen_cfg_alarm_cont_64, 46, 68);
    lv_obj_set_size(ui->screen_cfg_alarm_cont_64, 159, 36);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_alarm_cont_64, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_alarm_cont_64, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_cont_64, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_alarm_cont_64, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_alarm_cont_64, lv_color_hex(0x4D7AB0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_alarm_cont_64, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_cont_64, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_cont_64, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_cont_64, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_cont_64, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_cont_64, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_cont_64, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_cont_64, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_label_95
    ui->screen_cfg_alarm_label_95 = lv_label_create(ui->screen_cfg_alarm_cont_64);
    lv_obj_set_pos(ui->screen_cfg_alarm_label_95, 54, 1);
    lv_obj_set_size(ui->screen_cfg_alarm_label_95, 47, 30);
    lv_label_set_text(ui->screen_cfg_alarm_label_95, "300");
    lv_label_set_long_mode(ui->screen_cfg_alarm_label_95, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_alarm_label_95, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_label_95, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_label_95, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_label_95, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_label_95, &lv_font_HarmonyOS_Sans_Medium_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_label_95, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_alarm_label_95, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_alarm_label_95, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_label_95, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_label_95, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_label_95, lv_color_hex(0x44D7B6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_label_95, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_label_95, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_label_95, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_label_95, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_label_95, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_label_95, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_btn_89
    ui->screen_cfg_alarm_btn_89 = lv_button_create(ui->screen_cfg_alarm_cont_64);
    lv_obj_set_pos(ui->screen_cfg_alarm_btn_89, 2, 1);
    lv_obj_set_size(ui->screen_cfg_alarm_btn_89, 47, 30);
    ui->screen_cfg_alarm_btn_89_label = lv_label_create(ui->screen_cfg_alarm_btn_89);
    lv_label_set_text(ui->screen_cfg_alarm_btn_89_label, "-");
    lv_label_set_long_mode(ui->screen_cfg_alarm_btn_89_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_alarm_btn_89_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_alarm_btn_89, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_alarm_btn_89_label, LV_PCT(100));

    //Write style for screen_cfg_alarm_btn_89, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_btn_89, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_btn_89, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_alarm_btn_89, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_alarm_btn_89, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_alarm_btn_89, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_btn_89, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_btn_89, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_btn_89, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_btn_89, &lv_font_HarmonyOS_Sans_Medium_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_btn_89, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_btn_89, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_btn_88
    ui->screen_cfg_alarm_btn_88 = lv_button_create(ui->screen_cfg_alarm_cont_64);
    lv_obj_set_pos(ui->screen_cfg_alarm_btn_88, 106, 1);
    lv_obj_set_size(ui->screen_cfg_alarm_btn_88, 47, 30);
    ui->screen_cfg_alarm_btn_88_label = lv_label_create(ui->screen_cfg_alarm_btn_88);
    lv_label_set_text(ui->screen_cfg_alarm_btn_88_label, "+");
    lv_label_set_long_mode(ui->screen_cfg_alarm_btn_88_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_alarm_btn_88_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_alarm_btn_88, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_alarm_btn_88_label, LV_PCT(100));

    //Write style for screen_cfg_alarm_btn_88, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_btn_88, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_btn_88, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_alarm_btn_88, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_alarm_btn_88, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_alarm_btn_88, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_btn_88, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_btn_88, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_btn_88, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_btn_88, &lv_font_HarmonyOS_Sans_Medium_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_btn_88, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_btn_88, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_cont_63
    ui->screen_cfg_alarm_cont_63 = lv_obj_create(ui->screen_cfg_alarm_cont_62);
    lv_obj_set_pos(ui->screen_cfg_alarm_cont_63, 290, 68);
    lv_obj_set_size(ui->screen_cfg_alarm_cont_63, 159, 36);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_alarm_cont_63, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_alarm_cont_63, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_cont_63, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_alarm_cont_63, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_alarm_cont_63, lv_color_hex(0x4D7AB0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_alarm_cont_63, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_cont_63, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_cont_63, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_cont_63, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_cont_63, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_cont_63, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_cont_63, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_cont_63, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_label_94
    ui->screen_cfg_alarm_label_94 = lv_label_create(ui->screen_cfg_alarm_cont_63);
    lv_obj_set_pos(ui->screen_cfg_alarm_label_94, 54, 1);
    lv_obj_set_size(ui->screen_cfg_alarm_label_94, 47, 30);
    lv_label_set_text(ui->screen_cfg_alarm_label_94, "300");
    lv_label_set_long_mode(ui->screen_cfg_alarm_label_94, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_alarm_label_94, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_label_94, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_label_94, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_label_94, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_label_94, &lv_font_HarmonyOS_Sans_Medium_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_label_94, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_alarm_label_94, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_alarm_label_94, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_label_94, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_label_94, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_label_94, lv_color_hex(0x44D7B6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_label_94, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_label_94, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_label_94, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_label_94, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_label_94, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_label_94, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_btn_87
    ui->screen_cfg_alarm_btn_87 = lv_button_create(ui->screen_cfg_alarm_cont_63);
    lv_obj_set_pos(ui->screen_cfg_alarm_btn_87, 1, 0);
    lv_obj_set_size(ui->screen_cfg_alarm_btn_87, 47, 30);
    ui->screen_cfg_alarm_btn_87_label = lv_label_create(ui->screen_cfg_alarm_btn_87);
    lv_label_set_text(ui->screen_cfg_alarm_btn_87_label, "-");
    lv_label_set_long_mode(ui->screen_cfg_alarm_btn_87_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_alarm_btn_87_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_alarm_btn_87, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_alarm_btn_87_label, LV_PCT(100));

    //Write style for screen_cfg_alarm_btn_87, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_btn_87, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_btn_87, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_alarm_btn_87, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_alarm_btn_87, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_alarm_btn_87, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_btn_87, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_btn_87, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_btn_87, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_btn_87, &lv_font_HarmonyOS_Sans_Medium_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_btn_87, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_btn_87, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_btn_86
    ui->screen_cfg_alarm_btn_86 = lv_button_create(ui->screen_cfg_alarm_cont_63);
    lv_obj_set_pos(ui->screen_cfg_alarm_btn_86, 106, 1);
    lv_obj_set_size(ui->screen_cfg_alarm_btn_86, 47, 30);
    ui->screen_cfg_alarm_btn_86_label = lv_label_create(ui->screen_cfg_alarm_btn_86);
    lv_label_set_text(ui->screen_cfg_alarm_btn_86_label, "+");
    lv_label_set_long_mode(ui->screen_cfg_alarm_btn_86_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_alarm_btn_86_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_alarm_btn_86, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_alarm_btn_86_label, LV_PCT(100));

    //Write style for screen_cfg_alarm_btn_86, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_btn_86, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_btn_86, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_alarm_btn_86, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_alarm_btn_86, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_alarm_btn_86, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_btn_86, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_btn_86, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_btn_86, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_btn_86, &lv_font_HarmonyOS_Sans_Medium_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_btn_86, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_btn_86, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_label_93
    ui->screen_cfg_alarm_label_93 = lv_label_create(ui->screen_cfg_alarm_cont_62);
    lv_obj_set_pos(ui->screen_cfg_alarm_label_93, 534, 16);
    lv_obj_set_size(ui->screen_cfg_alarm_label_93, 106, 33);
    lv_label_set_text(ui->screen_cfg_alarm_label_93, "报警开关");
    lv_label_set_long_mode(ui->screen_cfg_alarm_label_93, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_alarm_label_93, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_label_93, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_label_93, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_label_93, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_label_93, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_label_93, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_alarm_label_93, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_alarm_label_93, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_label_93, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_label_93, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_label_93, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_label_93, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_label_93, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_label_93, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_label_93, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_label_92
    ui->screen_cfg_alarm_label_92 = lv_label_create(ui->screen_cfg_alarm_cont_62);
    lv_obj_set_pos(ui->screen_cfg_alarm_label_92, 313, 18);
    lv_obj_set_size(ui->screen_cfg_alarm_label_92, 159, 33);
    lv_label_set_text(ui->screen_cfg_alarm_label_92, "可燃气体低报");
    lv_label_set_long_mode(ui->screen_cfg_alarm_label_92, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_alarm_label_92, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_label_92, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_label_92, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_label_92, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_label_92, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_label_92, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_alarm_label_92, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_alarm_label_92, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_label_92, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_label_92, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_label_92, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_label_92, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_label_92, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_label_92, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_label_92, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_label_91
    ui->screen_cfg_alarm_label_91 = lv_label_create(ui->screen_cfg_alarm_cont_62);
    lv_obj_set_pos(ui->screen_cfg_alarm_label_91, 71, 18);
    lv_obj_set_size(ui->screen_cfg_alarm_label_91, 171, 33);
    lv_label_set_text(ui->screen_cfg_alarm_label_91, "可燃气体高报");
    lv_label_set_long_mode(ui->screen_cfg_alarm_label_91, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_alarm_label_91, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_label_91, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_label_91, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_label_91, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_label_91, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_label_91, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_alarm_label_91, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_alarm_label_91, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_label_91, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_label_91, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_label_91, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_label_91, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_label_91, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_label_91, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_label_91, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_line_14
    ui->screen_cfg_alarm_line_14 = lv_line_create(ui->screen_cfg_alarm_cont_62);
    lv_obj_set_pos(ui->screen_cfg_alarm_line_14, 30, 122);
    lv_obj_set_size(ui->screen_cfg_alarm_line_14, 637, 2);
    static lv_point_precise_t screen_cfg_alarm_line_14[] = {{0, 0},{637, 0}};
    lv_line_set_points(ui->screen_cfg_alarm_line_14, screen_cfg_alarm_line_14, 2);

    //Write style for screen_cfg_alarm_line_14, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_cfg_alarm_line_14, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_cfg_alarm_line_14, lv_color_hex(0x758AA6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_cfg_alarm_line_14, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_cfg_alarm_line_14, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_cont_65
    ui->screen_cfg_alarm_cont_65 = lv_obj_create(ui->screen_cfg_alarm);
    lv_obj_set_pos(ui->screen_cfg_alarm_cont_65, 37, 943);
    lv_obj_set_size(ui->screen_cfg_alarm_cont_65, 705, 140);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_alarm_cont_65, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_alarm_cont_65, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_cont_65, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_cont_65, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_cont_65, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_cont_65, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_cont_65, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_cont_65, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_cont_65, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_cont_65, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_sw_28
    ui->screen_cfg_alarm_sw_28 = lv_switch_create(ui->screen_cfg_alarm_cont_65);
    lv_obj_set_pos(ui->screen_cfg_alarm_sw_28, 549, 68);
    lv_obj_set_size(ui->screen_cfg_alarm_sw_28, 77, 30);

    //Write style for screen_cfg_alarm_sw_28, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_28, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_28, lv_color_hex(0xe6e2e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_28, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_28, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_sw_28, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_sw_28, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_alarm_sw_28, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_28, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_28, lv_color_hex(0x44D7B6), LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_28, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_28, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

    //Write style for screen_cfg_alarm_sw_28, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_28, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_28, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_28, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_28, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_sw_28, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write style for screen_cfg_alarm_sw_28, Part: LV_PART_KNOB, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_28, 255, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_28, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_28, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_28, 0, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_sw_28, 10, LV_PART_KNOB|LV_STATE_FOCUSED);

    //Write codes screen_cfg_alarm_cont_67
    ui->screen_cfg_alarm_cont_67 = lv_obj_create(ui->screen_cfg_alarm_cont_65);
    lv_obj_set_pos(ui->screen_cfg_alarm_cont_67, 46, 68);
    lv_obj_set_size(ui->screen_cfg_alarm_cont_67, 159, 36);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_alarm_cont_67, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_alarm_cont_67, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_cont_67, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_alarm_cont_67, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_alarm_cont_67, lv_color_hex(0x4D7AB0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_alarm_cont_67, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_cont_67, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_cont_67, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_cont_67, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_cont_67, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_cont_67, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_cont_67, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_cont_67, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_label_100
    ui->screen_cfg_alarm_label_100 = lv_label_create(ui->screen_cfg_alarm_cont_67);
    lv_obj_set_pos(ui->screen_cfg_alarm_label_100, 54, 1);
    lv_obj_set_size(ui->screen_cfg_alarm_label_100, 47, 30);
    lv_label_set_text(ui->screen_cfg_alarm_label_100, "300");
    lv_label_set_long_mode(ui->screen_cfg_alarm_label_100, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_alarm_label_100, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_label_100, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_label_100, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_label_100, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_label_100, &lv_font_HarmonyOS_Sans_Medium_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_label_100, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_alarm_label_100, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_alarm_label_100, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_label_100, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_label_100, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_label_100, lv_color_hex(0x44D7B6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_label_100, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_label_100, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_label_100, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_label_100, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_label_100, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_label_100, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_btn_93
    ui->screen_cfg_alarm_btn_93 = lv_button_create(ui->screen_cfg_alarm_cont_67);
    lv_obj_set_pos(ui->screen_cfg_alarm_btn_93, 2, 1);
    lv_obj_set_size(ui->screen_cfg_alarm_btn_93, 47, 30);
    ui->screen_cfg_alarm_btn_93_label = lv_label_create(ui->screen_cfg_alarm_btn_93);
    lv_label_set_text(ui->screen_cfg_alarm_btn_93_label, "-");
    lv_label_set_long_mode(ui->screen_cfg_alarm_btn_93_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_alarm_btn_93_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_alarm_btn_93, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_alarm_btn_93_label, LV_PCT(100));

    //Write style for screen_cfg_alarm_btn_93, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_btn_93, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_btn_93, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_alarm_btn_93, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_alarm_btn_93, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_alarm_btn_93, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_btn_93, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_btn_93, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_btn_93, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_btn_93, &lv_font_HarmonyOS_Sans_Medium_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_btn_93, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_btn_93, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_btn_92
    ui->screen_cfg_alarm_btn_92 = lv_button_create(ui->screen_cfg_alarm_cont_67);
    lv_obj_set_pos(ui->screen_cfg_alarm_btn_92, 106, 1);
    lv_obj_set_size(ui->screen_cfg_alarm_btn_92, 47, 30);
    ui->screen_cfg_alarm_btn_92_label = lv_label_create(ui->screen_cfg_alarm_btn_92);
    lv_label_set_text(ui->screen_cfg_alarm_btn_92_label, "+");
    lv_label_set_long_mode(ui->screen_cfg_alarm_btn_92_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_alarm_btn_92_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_alarm_btn_92, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_alarm_btn_92_label, LV_PCT(100));

    //Write style for screen_cfg_alarm_btn_92, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_btn_92, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_btn_92, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_alarm_btn_92, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_alarm_btn_92, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_alarm_btn_92, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_btn_92, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_btn_92, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_btn_92, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_btn_92, &lv_font_HarmonyOS_Sans_Medium_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_btn_92, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_btn_92, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_cont_66
    ui->screen_cfg_alarm_cont_66 = lv_obj_create(ui->screen_cfg_alarm_cont_65);
    lv_obj_set_pos(ui->screen_cfg_alarm_cont_66, 290, 68);
    lv_obj_set_size(ui->screen_cfg_alarm_cont_66, 159, 36);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_alarm_cont_66, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_alarm_cont_66, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_cont_66, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_alarm_cont_66, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_alarm_cont_66, lv_color_hex(0x4D7AB0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_alarm_cont_66, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_cont_66, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_cont_66, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_cont_66, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_cont_66, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_cont_66, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_cont_66, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_cont_66, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_label_99
    ui->screen_cfg_alarm_label_99 = lv_label_create(ui->screen_cfg_alarm_cont_66);
    lv_obj_set_pos(ui->screen_cfg_alarm_label_99, 54, 1);
    lv_obj_set_size(ui->screen_cfg_alarm_label_99, 47, 30);
    lv_label_set_text(ui->screen_cfg_alarm_label_99, "300");
    lv_label_set_long_mode(ui->screen_cfg_alarm_label_99, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_alarm_label_99, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_label_99, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_label_99, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_label_99, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_label_99, &lv_font_HarmonyOS_Sans_Medium_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_label_99, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_alarm_label_99, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_alarm_label_99, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_label_99, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_label_99, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_label_99, lv_color_hex(0x44D7B6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_label_99, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_label_99, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_label_99, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_label_99, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_label_99, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_label_99, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_btn_91
    ui->screen_cfg_alarm_btn_91 = lv_button_create(ui->screen_cfg_alarm_cont_66);
    lv_obj_set_pos(ui->screen_cfg_alarm_btn_91, 1, 0);
    lv_obj_set_size(ui->screen_cfg_alarm_btn_91, 47, 30);
    ui->screen_cfg_alarm_btn_91_label = lv_label_create(ui->screen_cfg_alarm_btn_91);
    lv_label_set_text(ui->screen_cfg_alarm_btn_91_label, "-");
    lv_label_set_long_mode(ui->screen_cfg_alarm_btn_91_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_alarm_btn_91_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_alarm_btn_91, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_alarm_btn_91_label, LV_PCT(100));

    //Write style for screen_cfg_alarm_btn_91, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_btn_91, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_btn_91, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_alarm_btn_91, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_alarm_btn_91, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_alarm_btn_91, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_btn_91, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_btn_91, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_btn_91, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_btn_91, &lv_font_HarmonyOS_Sans_Medium_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_btn_91, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_btn_91, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_btn_90
    ui->screen_cfg_alarm_btn_90 = lv_button_create(ui->screen_cfg_alarm_cont_66);
    lv_obj_set_pos(ui->screen_cfg_alarm_btn_90, 106, 1);
    lv_obj_set_size(ui->screen_cfg_alarm_btn_90, 47, 30);
    ui->screen_cfg_alarm_btn_90_label = lv_label_create(ui->screen_cfg_alarm_btn_90);
    lv_label_set_text(ui->screen_cfg_alarm_btn_90_label, "+");
    lv_label_set_long_mode(ui->screen_cfg_alarm_btn_90_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_alarm_btn_90_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_alarm_btn_90, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_alarm_btn_90_label, LV_PCT(100));

    //Write style for screen_cfg_alarm_btn_90, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_btn_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_btn_90, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_alarm_btn_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_alarm_btn_90, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_alarm_btn_90, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_btn_90, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_btn_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_btn_90, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_btn_90, &lv_font_HarmonyOS_Sans_Medium_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_btn_90, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_btn_90, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_label_98
    ui->screen_cfg_alarm_label_98 = lv_label_create(ui->screen_cfg_alarm_cont_65);
    lv_obj_set_pos(ui->screen_cfg_alarm_label_98, 534, 16);
    lv_obj_set_size(ui->screen_cfg_alarm_label_98, 106, 33);
    lv_label_set_text(ui->screen_cfg_alarm_label_98, "报警开关");
    lv_label_set_long_mode(ui->screen_cfg_alarm_label_98, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_alarm_label_98, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_label_98, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_label_98, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_label_98, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_label_98, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_label_98, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_alarm_label_98, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_alarm_label_98, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_label_98, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_label_98, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_label_98, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_label_98, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_label_98, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_label_98, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_label_98, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_label_97
    ui->screen_cfg_alarm_label_97 = lv_label_create(ui->screen_cfg_alarm_cont_65);
    lv_obj_set_pos(ui->screen_cfg_alarm_label_97, 312, 18);
    lv_obj_set_size(ui->screen_cfg_alarm_label_97, 159, 33);
    lv_label_set_text(ui->screen_cfg_alarm_label_97, "氢气低报");
    lv_label_set_long_mode(ui->screen_cfg_alarm_label_97, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_alarm_label_97, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_label_97, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_label_97, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_label_97, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_label_97, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_label_97, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_alarm_label_97, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_alarm_label_97, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_label_97, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_label_97, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_label_97, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_label_97, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_label_97, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_label_97, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_label_97, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_label_96
    ui->screen_cfg_alarm_label_96 = lv_label_create(ui->screen_cfg_alarm_cont_65);
    lv_obj_set_pos(ui->screen_cfg_alarm_label_96, 71, 18);
    lv_obj_set_size(ui->screen_cfg_alarm_label_96, 171, 33);
    lv_label_set_text(ui->screen_cfg_alarm_label_96, "氢气高报");
    lv_label_set_long_mode(ui->screen_cfg_alarm_label_96, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_alarm_label_96, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_label_96, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_label_96, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_label_96, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_label_96, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_label_96, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_alarm_label_96, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_alarm_label_96, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_label_96, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_label_96, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_label_96, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_label_96, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_label_96, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_label_96, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_label_96, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_line_15
    ui->screen_cfg_alarm_line_15 = lv_line_create(ui->screen_cfg_alarm_cont_65);
    lv_obj_set_pos(ui->screen_cfg_alarm_line_15, 30, 122);
    lv_obj_set_size(ui->screen_cfg_alarm_line_15, 637, 2);
    static lv_point_precise_t screen_cfg_alarm_line_15[] = {{0, 0},{637, 0}};
    lv_line_set_points(ui->screen_cfg_alarm_line_15, screen_cfg_alarm_line_15, 2);

    //Write style for screen_cfg_alarm_line_15, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_cfg_alarm_line_15, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_cfg_alarm_line_15, lv_color_hex(0x758AA6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_cfg_alarm_line_15, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_cfg_alarm_line_15, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_cont_68
    ui->screen_cfg_alarm_cont_68 = lv_obj_create(ui->screen_cfg_alarm);
    lv_obj_set_pos(ui->screen_cfg_alarm_cont_68, 37, 1076);
    lv_obj_set_size(ui->screen_cfg_alarm_cont_68, 705, 140);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_alarm_cont_68, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_alarm_cont_68, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_cont_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_cont_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_cont_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_cont_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_cont_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_cont_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_cont_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_cont_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_sw_29
    ui->screen_cfg_alarm_sw_29 = lv_switch_create(ui->screen_cfg_alarm_cont_68);
    lv_obj_set_pos(ui->screen_cfg_alarm_sw_29, 549, 18);
    lv_obj_set_size(ui->screen_cfg_alarm_sw_29, 77, 30);

    //Write style for screen_cfg_alarm_sw_29, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_29, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_29, lv_color_hex(0xe6e2e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_29, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_29, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_sw_29, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_sw_29, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_alarm_sw_29, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_29, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_29, lv_color_hex(0x44D7B6), LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_29, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_29, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

    //Write style for screen_cfg_alarm_sw_29, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_29, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_29, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_29, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_29, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_sw_29, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write style for screen_cfg_alarm_sw_29, Part: LV_PART_KNOB, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_29, 255, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_29, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_29, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_29, 0, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_sw_29, 10, LV_PART_KNOB|LV_STATE_FOCUSED);

    //Write codes screen_cfg_alarm_cont_70
    ui->screen_cfg_alarm_cont_70 = lv_obj_create(ui->screen_cfg_alarm_cont_68);
    lv_obj_set_pos(ui->screen_cfg_alarm_cont_70, 187, 63);
    lv_obj_set_size(ui->screen_cfg_alarm_cont_70, 159, 36);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_alarm_cont_70, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_alarm_cont_70, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_cont_70, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_alarm_cont_70, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_alarm_cont_70, lv_color_hex(0x4D7AB0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_alarm_cont_70, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_cont_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_cont_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_cont_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_cont_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_cont_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_cont_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_cont_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_label_105
    ui->screen_cfg_alarm_label_105 = lv_label_create(ui->screen_cfg_alarm_cont_70);
    lv_obj_set_pos(ui->screen_cfg_alarm_label_105, 54, 1);
    lv_obj_set_size(ui->screen_cfg_alarm_label_105, 47, 30);
    lv_label_set_text(ui->screen_cfg_alarm_label_105, "300");
    lv_label_set_long_mode(ui->screen_cfg_alarm_label_105, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_alarm_label_105, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_label_105, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_label_105, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_label_105, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_label_105, &lv_font_HarmonyOS_Sans_Medium_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_label_105, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_alarm_label_105, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_alarm_label_105, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_label_105, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_label_105, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_label_105, lv_color_hex(0x44D7B6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_label_105, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_label_105, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_label_105, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_label_105, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_label_105, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_label_105, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_btn_97
    ui->screen_cfg_alarm_btn_97 = lv_button_create(ui->screen_cfg_alarm_cont_70);
    lv_obj_set_pos(ui->screen_cfg_alarm_btn_97, 2, 1);
    lv_obj_set_size(ui->screen_cfg_alarm_btn_97, 47, 30);
    ui->screen_cfg_alarm_btn_97_label = lv_label_create(ui->screen_cfg_alarm_btn_97);
    lv_label_set_text(ui->screen_cfg_alarm_btn_97_label, "-");
    lv_label_set_long_mode(ui->screen_cfg_alarm_btn_97_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_alarm_btn_97_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_alarm_btn_97, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_alarm_btn_97_label, LV_PCT(100));

    //Write style for screen_cfg_alarm_btn_97, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_btn_97, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_btn_97, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_alarm_btn_97, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_alarm_btn_97, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_alarm_btn_97, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_btn_97, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_btn_97, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_btn_97, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_btn_97, &lv_font_HarmonyOS_Sans_Medium_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_btn_97, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_btn_97, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_btn_96
    ui->screen_cfg_alarm_btn_96 = lv_button_create(ui->screen_cfg_alarm_cont_70);
    lv_obj_set_pos(ui->screen_cfg_alarm_btn_96, 106, 1);
    lv_obj_set_size(ui->screen_cfg_alarm_btn_96, 47, 30);
    ui->screen_cfg_alarm_btn_96_label = lv_label_create(ui->screen_cfg_alarm_btn_96);
    lv_label_set_text(ui->screen_cfg_alarm_btn_96_label, "+");
    lv_label_set_long_mode(ui->screen_cfg_alarm_btn_96_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_alarm_btn_96_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_alarm_btn_96, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_alarm_btn_96_label, LV_PCT(100));

    //Write style for screen_cfg_alarm_btn_96, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_btn_96, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_btn_96, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_alarm_btn_96, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_alarm_btn_96, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_alarm_btn_96, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_btn_96, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_btn_96, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_btn_96, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_btn_96, &lv_font_HarmonyOS_Sans_Medium_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_btn_96, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_btn_96, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_label_101
    ui->screen_cfg_alarm_label_101 = lv_label_create(ui->screen_cfg_alarm_cont_68);
    lv_obj_set_pos(ui->screen_cfg_alarm_label_101, 71, 18);
    lv_obj_set_size(ui->screen_cfg_alarm_label_101, 171, 33);
    lv_label_set_text(ui->screen_cfg_alarm_label_101, "电流过载报警");
    lv_label_set_long_mode(ui->screen_cfg_alarm_label_101, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_alarm_label_101, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_label_101, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_label_101, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_label_101, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_label_101, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_label_101, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_alarm_label_101, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_alarm_label_101, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_label_101, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_label_101, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_label_101, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_label_101, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_label_101, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_label_101, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_label_101, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_line_16
    ui->screen_cfg_alarm_line_16 = lv_line_create(ui->screen_cfg_alarm_cont_68);
    lv_obj_set_pos(ui->screen_cfg_alarm_line_16, 30, 122);
    lv_obj_set_size(ui->screen_cfg_alarm_line_16, 637, 2);
    static lv_point_precise_t screen_cfg_alarm_line_16[] = {{0, 0},{637, 0}};
    lv_line_set_points(ui->screen_cfg_alarm_line_16, screen_cfg_alarm_line_16, 2);

    //Write style for screen_cfg_alarm_line_16, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_cfg_alarm_line_16, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_cfg_alarm_line_16, lv_color_hex(0x758AA6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_cfg_alarm_line_16, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_cfg_alarm_line_16, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_cont_71
    ui->screen_cfg_alarm_cont_71 = lv_obj_create(ui->screen_cfg_alarm_cont_68);
    lv_obj_set_pos(ui->screen_cfg_alarm_cont_71, 481, 63);
    lv_obj_set_size(ui->screen_cfg_alarm_cont_71, 159, 36);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_alarm_cont_71, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_alarm_cont_71, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_cont_71, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_alarm_cont_71, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_alarm_cont_71, lv_color_hex(0x4D7AB0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_alarm_cont_71, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_cont_71, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_cont_71, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_cont_71, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_cont_71, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_cont_71, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_cont_71, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_cont_71, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_label_106
    ui->screen_cfg_alarm_label_106 = lv_label_create(ui->screen_cfg_alarm_cont_71);
    lv_obj_set_pos(ui->screen_cfg_alarm_label_106, 54, 1);
    lv_obj_set_size(ui->screen_cfg_alarm_label_106, 47, 30);
    lv_label_set_text(ui->screen_cfg_alarm_label_106, "300");
    lv_label_set_long_mode(ui->screen_cfg_alarm_label_106, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_alarm_label_106, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_label_106, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_label_106, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_label_106, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_label_106, &lv_font_HarmonyOS_Sans_Medium_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_label_106, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_alarm_label_106, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_alarm_label_106, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_label_106, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_label_106, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_label_106, lv_color_hex(0x44D7B6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_label_106, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_label_106, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_label_106, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_label_106, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_label_106, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_label_106, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_btn_99
    ui->screen_cfg_alarm_btn_99 = lv_button_create(ui->screen_cfg_alarm_cont_71);
    lv_obj_set_pos(ui->screen_cfg_alarm_btn_99, 2, 1);
    lv_obj_set_size(ui->screen_cfg_alarm_btn_99, 47, 30);
    ui->screen_cfg_alarm_btn_99_label = lv_label_create(ui->screen_cfg_alarm_btn_99);
    lv_label_set_text(ui->screen_cfg_alarm_btn_99_label, "-");
    lv_label_set_long_mode(ui->screen_cfg_alarm_btn_99_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_alarm_btn_99_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_alarm_btn_99, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_alarm_btn_99_label, LV_PCT(100));

    //Write style for screen_cfg_alarm_btn_99, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_btn_99, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_btn_99, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_alarm_btn_99, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_alarm_btn_99, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_alarm_btn_99, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_btn_99, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_btn_99, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_btn_99, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_btn_99, &lv_font_HarmonyOS_Sans_Medium_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_btn_99, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_btn_99, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_btn_98
    ui->screen_cfg_alarm_btn_98 = lv_button_create(ui->screen_cfg_alarm_cont_71);
    lv_obj_set_pos(ui->screen_cfg_alarm_btn_98, 106, 1);
    lv_obj_set_size(ui->screen_cfg_alarm_btn_98, 47, 30);
    ui->screen_cfg_alarm_btn_98_label = lv_label_create(ui->screen_cfg_alarm_btn_98);
    lv_label_set_text(ui->screen_cfg_alarm_btn_98_label, "+");
    lv_label_set_long_mode(ui->screen_cfg_alarm_btn_98_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_alarm_btn_98_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_alarm_btn_98, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_alarm_btn_98_label, LV_PCT(100));

    //Write style for screen_cfg_alarm_btn_98, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_btn_98, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_btn_98, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_alarm_btn_98, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_alarm_btn_98, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_alarm_btn_98, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_btn_98, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_btn_98, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_btn_98, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_btn_98, &lv_font_HarmonyOS_Sans_Medium_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_btn_98, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_btn_98, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_label_107
    ui->screen_cfg_alarm_label_107 = lv_label_create(ui->screen_cfg_alarm_cont_68);
    lv_obj_set_pos(ui->screen_cfg_alarm_label_107, 75, 64);
    lv_obj_set_size(ui->screen_cfg_alarm_label_107, 110, 33);
    lv_label_set_text(ui->screen_cfg_alarm_label_107, "最大电流");
    lv_label_set_long_mode(ui->screen_cfg_alarm_label_107, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_alarm_label_107, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_label_107, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_label_107, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_label_107, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_label_107, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_label_107, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_alarm_label_107, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_alarm_label_107, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_label_107, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_label_107, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_label_107, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_label_107, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_label_107, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_label_107, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_label_107, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_label_108
    ui->screen_cfg_alarm_label_108 = lv_label_create(ui->screen_cfg_alarm_cont_68);
    lv_obj_set_pos(ui->screen_cfg_alarm_label_108, 369, 63);
    lv_obj_set_size(ui->screen_cfg_alarm_label_108, 110, 33);
    lv_label_set_text(ui->screen_cfg_alarm_label_108, "过载延迟");
    lv_label_set_long_mode(ui->screen_cfg_alarm_label_108, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_alarm_label_108, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_label_108, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_label_108, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_label_108, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_label_108, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_label_108, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_alarm_label_108, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_alarm_label_108, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_label_108, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_label_108, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_label_108, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_label_108, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_label_108, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_label_108, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_label_108, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_cont_72
    ui->screen_cfg_alarm_cont_72 = lv_obj_create(ui->screen_cfg_alarm);
    lv_obj_set_pos(ui->screen_cfg_alarm_cont_72, 37, 1209);
    lv_obj_set_size(ui->screen_cfg_alarm_cont_72, 705, 140);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_alarm_cont_72, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_alarm_cont_72, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_cont_72, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_cont_72, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_cont_72, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_cont_72, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_cont_72, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_cont_72, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_cont_72, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_cont_72, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_sw_30
    ui->screen_cfg_alarm_sw_30 = lv_switch_create(ui->screen_cfg_alarm_cont_72);
    lv_obj_set_pos(ui->screen_cfg_alarm_sw_30, 549, 18);
    lv_obj_set_size(ui->screen_cfg_alarm_sw_30, 77, 30);

    //Write style for screen_cfg_alarm_sw_30, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_30, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_30, lv_color_hex(0xe6e2e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_30, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_sw_30, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_sw_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_alarm_sw_30, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_30, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_30, lv_color_hex(0x44D7B6), LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_30, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_30, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

    //Write style for screen_cfg_alarm_sw_30, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_30, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_30, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_30, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_30, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_sw_30, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write style for screen_cfg_alarm_sw_30, Part: LV_PART_KNOB, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_sw_30, 255, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_sw_30, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_sw_30, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_sw_30, 0, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_sw_30, 10, LV_PART_KNOB|LV_STATE_FOCUSED);

    //Write codes screen_cfg_alarm_cont_74
    ui->screen_cfg_alarm_cont_74 = lv_obj_create(ui->screen_cfg_alarm_cont_72);
    lv_obj_set_pos(ui->screen_cfg_alarm_cont_74, 187, 63);
    lv_obj_set_size(ui->screen_cfg_alarm_cont_74, 159, 36);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_alarm_cont_74, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_alarm_cont_74, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_cont_74, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_alarm_cont_74, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_alarm_cont_74, lv_color_hex(0x4D7AB0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_alarm_cont_74, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_cont_74, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_cont_74, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_cont_74, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_cont_74, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_cont_74, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_cont_74, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_cont_74, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_label_113
    ui->screen_cfg_alarm_label_113 = lv_label_create(ui->screen_cfg_alarm_cont_74);
    lv_obj_set_pos(ui->screen_cfg_alarm_label_113, 54, 1);
    lv_obj_set_size(ui->screen_cfg_alarm_label_113, 47, 30);
    lv_label_set_text(ui->screen_cfg_alarm_label_113, "300");
    lv_label_set_long_mode(ui->screen_cfg_alarm_label_113, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_alarm_label_113, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_label_113, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_label_113, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_label_113, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_label_113, &lv_font_HarmonyOS_Sans_Medium_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_label_113, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_alarm_label_113, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_alarm_label_113, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_label_113, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_label_113, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_label_113, lv_color_hex(0x44D7B6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_label_113, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_label_113, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_label_113, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_label_113, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_label_113, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_label_113, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_btn_103
    ui->screen_cfg_alarm_btn_103 = lv_button_create(ui->screen_cfg_alarm_cont_74);
    lv_obj_set_pos(ui->screen_cfg_alarm_btn_103, 2, 1);
    lv_obj_set_size(ui->screen_cfg_alarm_btn_103, 47, 30);
    ui->screen_cfg_alarm_btn_103_label = lv_label_create(ui->screen_cfg_alarm_btn_103);
    lv_label_set_text(ui->screen_cfg_alarm_btn_103_label, "-");
    lv_label_set_long_mode(ui->screen_cfg_alarm_btn_103_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_alarm_btn_103_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_alarm_btn_103, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_alarm_btn_103_label, LV_PCT(100));

    //Write style for screen_cfg_alarm_btn_103, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_btn_103, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_btn_103, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_alarm_btn_103, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_alarm_btn_103, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_alarm_btn_103, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_btn_103, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_btn_103, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_btn_103, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_btn_103, &lv_font_HarmonyOS_Sans_Medium_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_btn_103, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_btn_103, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_btn_102
    ui->screen_cfg_alarm_btn_102 = lv_button_create(ui->screen_cfg_alarm_cont_74);
    lv_obj_set_pos(ui->screen_cfg_alarm_btn_102, 106, 1);
    lv_obj_set_size(ui->screen_cfg_alarm_btn_102, 47, 30);
    ui->screen_cfg_alarm_btn_102_label = lv_label_create(ui->screen_cfg_alarm_btn_102);
    lv_label_set_text(ui->screen_cfg_alarm_btn_102_label, "+");
    lv_label_set_long_mode(ui->screen_cfg_alarm_btn_102_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_alarm_btn_102_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_alarm_btn_102, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_alarm_btn_102_label, LV_PCT(100));

    //Write style for screen_cfg_alarm_btn_102, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_btn_102, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_btn_102, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_alarm_btn_102, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_alarm_btn_102, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_alarm_btn_102, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_btn_102, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_btn_102, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_btn_102, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_btn_102, &lv_font_HarmonyOS_Sans_Medium_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_btn_102, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_btn_102, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_label_112
    ui->screen_cfg_alarm_label_112 = lv_label_create(ui->screen_cfg_alarm_cont_72);
    lv_obj_set_pos(ui->screen_cfg_alarm_label_112, 71, 18);
    lv_obj_set_size(ui->screen_cfg_alarm_label_112, 171, 33);
    lv_label_set_text(ui->screen_cfg_alarm_label_112, "功率过载报警");
    lv_label_set_long_mode(ui->screen_cfg_alarm_label_112, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_alarm_label_112, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_label_112, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_label_112, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_label_112, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_label_112, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_label_112, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_alarm_label_112, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_alarm_label_112, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_label_112, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_label_112, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_label_112, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_label_112, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_label_112, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_label_112, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_label_112, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_line_17
    ui->screen_cfg_alarm_line_17 = lv_line_create(ui->screen_cfg_alarm_cont_72);
    lv_obj_set_pos(ui->screen_cfg_alarm_line_17, 30, 122);
    lv_obj_set_size(ui->screen_cfg_alarm_line_17, 637, 2);
    static lv_point_precise_t screen_cfg_alarm_line_17[] = {{0, 0},{637, 0}};
    lv_line_set_points(ui->screen_cfg_alarm_line_17, screen_cfg_alarm_line_17, 2);

    //Write style for screen_cfg_alarm_line_17, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_cfg_alarm_line_17, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_cfg_alarm_line_17, lv_color_hex(0x758AA6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_cfg_alarm_line_17, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_cfg_alarm_line_17, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_cont_73
    ui->screen_cfg_alarm_cont_73 = lv_obj_create(ui->screen_cfg_alarm_cont_72);
    lv_obj_set_pos(ui->screen_cfg_alarm_cont_73, 481, 63);
    lv_obj_set_size(ui->screen_cfg_alarm_cont_73, 159, 36);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_alarm_cont_73, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_alarm_cont_73, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_cont_73, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_alarm_cont_73, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_alarm_cont_73, lv_color_hex(0x4D7AB0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_alarm_cont_73, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_cont_73, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_cont_73, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_cont_73, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_cont_73, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_cont_73, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_cont_73, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_cont_73, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_label_111
    ui->screen_cfg_alarm_label_111 = lv_label_create(ui->screen_cfg_alarm_cont_73);
    lv_obj_set_pos(ui->screen_cfg_alarm_label_111, 54, 1);
    lv_obj_set_size(ui->screen_cfg_alarm_label_111, 47, 30);
    lv_label_set_text(ui->screen_cfg_alarm_label_111, "300");
    lv_label_set_long_mode(ui->screen_cfg_alarm_label_111, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_alarm_label_111, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_label_111, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_label_111, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_label_111, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_label_111, &lv_font_HarmonyOS_Sans_Medium_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_label_111, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_alarm_label_111, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_alarm_label_111, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_label_111, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_label_111, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_alarm_label_111, lv_color_hex(0x44D7B6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_alarm_label_111, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_label_111, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_label_111, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_label_111, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_label_111, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_label_111, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_btn_101
    ui->screen_cfg_alarm_btn_101 = lv_button_create(ui->screen_cfg_alarm_cont_73);
    lv_obj_set_pos(ui->screen_cfg_alarm_btn_101, 2, 1);
    lv_obj_set_size(ui->screen_cfg_alarm_btn_101, 47, 30);
    ui->screen_cfg_alarm_btn_101_label = lv_label_create(ui->screen_cfg_alarm_btn_101);
    lv_label_set_text(ui->screen_cfg_alarm_btn_101_label, "-");
    lv_label_set_long_mode(ui->screen_cfg_alarm_btn_101_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_alarm_btn_101_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_alarm_btn_101, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_alarm_btn_101_label, LV_PCT(100));

    //Write style for screen_cfg_alarm_btn_101, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_btn_101, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_btn_101, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_alarm_btn_101, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_alarm_btn_101, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_alarm_btn_101, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_btn_101, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_btn_101, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_btn_101, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_btn_101, &lv_font_HarmonyOS_Sans_Medium_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_btn_101, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_btn_101, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_btn_100
    ui->screen_cfg_alarm_btn_100 = lv_button_create(ui->screen_cfg_alarm_cont_73);
    lv_obj_set_pos(ui->screen_cfg_alarm_btn_100, 106, 1);
    lv_obj_set_size(ui->screen_cfg_alarm_btn_100, 47, 30);
    ui->screen_cfg_alarm_btn_100_label = lv_label_create(ui->screen_cfg_alarm_btn_100);
    lv_label_set_text(ui->screen_cfg_alarm_btn_100_label, "+");
    lv_label_set_long_mode(ui->screen_cfg_alarm_btn_100_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_alarm_btn_100_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_alarm_btn_100, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_alarm_btn_100_label, LV_PCT(100));

    //Write style for screen_cfg_alarm_btn_100, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_btn_100, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_btn_100, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_alarm_btn_100, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_alarm_btn_100, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_alarm_btn_100, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_btn_100, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_btn_100, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_btn_100, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_btn_100, &lv_font_HarmonyOS_Sans_Medium_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_btn_100, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_btn_100, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_label_110
    ui->screen_cfg_alarm_label_110 = lv_label_create(ui->screen_cfg_alarm_cont_72);
    lv_obj_set_pos(ui->screen_cfg_alarm_label_110, 75, 64);
    lv_obj_set_size(ui->screen_cfg_alarm_label_110, 110, 33);
    lv_label_set_text(ui->screen_cfg_alarm_label_110, "最大功率");
    lv_label_set_long_mode(ui->screen_cfg_alarm_label_110, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_alarm_label_110, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_label_110, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_label_110, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_label_110, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_label_110, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_label_110, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_alarm_label_110, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_alarm_label_110, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_label_110, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_label_110, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_label_110, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_label_110, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_label_110, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_label_110, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_label_110, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_alarm_label_109
    ui->screen_cfg_alarm_label_109 = lv_label_create(ui->screen_cfg_alarm_cont_72);
    lv_obj_set_pos(ui->screen_cfg_alarm_label_109, 369, 63);
    lv_obj_set_size(ui->screen_cfg_alarm_label_109, 110, 33);
    lv_label_set_text(ui->screen_cfg_alarm_label_109, "过载延迟");
    lv_label_set_long_mode(ui->screen_cfg_alarm_label_109, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_alarm_label_109, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_alarm_label_109, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_alarm_label_109, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_alarm_label_109, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_alarm_label_109, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_alarm_label_109, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_alarm_label_109, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_alarm_label_109, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_alarm_label_109, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_alarm_label_109, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_alarm_label_109, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_alarm_label_109, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_alarm_label_109, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_alarm_label_109, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_alarm_label_109, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of screen_cfg_alarm.


    //Update current screen layout.
    lv_obj_update_layout(ui->screen_cfg_alarm);

    //Init events for screen.
    events_init_screen_cfg_alarm(ui);
}
