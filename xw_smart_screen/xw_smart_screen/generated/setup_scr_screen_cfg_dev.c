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



int screen_cfg_dev_digital_clock_1_min_value = 25;
int screen_cfg_dev_digital_clock_1_hour_value = 11;
int screen_cfg_dev_digital_clock_1_sec_value = 50;
void setup_scr_screen_cfg_dev(lv_ui *ui)
{
    //Write codes screen_cfg_dev
    ui->screen_cfg_dev = lv_obj_create(NULL);
    lv_obj_set_size(ui->screen_cfg_dev, 1280, 800);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_dev, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_dev, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_cont_1
    ui->screen_cfg_dev_cont_1 = lv_obj_create(ui->screen_cfg_dev);
    lv_obj_set_pos(ui->screen_cfg_dev_cont_1, 0, 0);
    lv_obj_set_size(ui->screen_cfg_dev_cont_1, 1280, 960);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_dev_cont_1, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_dev_cont_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_dev_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_dev_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_cont_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_dev_cont_1, lv_color_hex(0x1B2C42), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_dev_cont_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_dev_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_dev_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_dev_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_dev_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_dev_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_cont_2
    ui->screen_cfg_dev_cont_2 = lv_obj_create(ui->screen_cfg_dev_cont_1);
    lv_obj_set_pos(ui->screen_cfg_dev_cont_2, 30, 165);
    lv_obj_set_size(ui->screen_cfg_dev_cont_2, 597, 310);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_dev_cont_2, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_dev_cont_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_dev_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_dev_cont_2, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_cont_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_dev_cont_2, lv_color_hex(0x2A405C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_dev_cont_2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_dev_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_dev_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_dev_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_dev_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_dev_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_label_7
    ui->screen_cfg_dev_label_7 = lv_label_create(ui->screen_cfg_dev_cont_2);
    lv_obj_set_pos(ui->screen_cfg_dev_label_7, 41, 32);
    lv_obj_set_size(ui->screen_cfg_dev_label_7, 136, 42);
    lv_label_set_text(ui->screen_cfg_dev_label_7, "联网模式");
    lv_label_set_long_mode(ui->screen_cfg_dev_label_7, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_dev_label_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_dev_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_dev_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_dev_label_7, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_dev_label_7, &lv_font_AlibabaPuHuiTiRegular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_dev_label_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_dev_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_dev_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_dev_label_7, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_dev_label_7, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_dev_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_dev_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_dev_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_dev_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_label_6
    ui->screen_cfg_dev_label_6 = lv_label_create(ui->screen_cfg_dev_cont_2);
    lv_obj_set_pos(ui->screen_cfg_dev_label_6, 32, 224);
    lv_obj_set_size(ui->screen_cfg_dev_label_6, 88, 27);
    lv_label_set_text(ui->screen_cfg_dev_label_6, "上传频次");
    lv_label_set_long_mode(ui->screen_cfg_dev_label_6, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_dev_label_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_dev_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_dev_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_dev_label_6, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_dev_label_6, &lv_font_AlibabaPuHuiTiRegular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_dev_label_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_dev_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_dev_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_dev_label_6, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_dev_label_6, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_dev_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_dev_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_dev_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_dev_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_label_5
    ui->screen_cfg_dev_label_5 = lv_label_create(ui->screen_cfg_dev_cont_2);
    lv_obj_set_pos(ui->screen_cfg_dev_label_5, 32, 123);
    lv_obj_set_size(ui->screen_cfg_dev_label_5, 96, 27);
    lv_label_set_text(ui->screen_cfg_dev_label_5, "监测频次");
    lv_label_set_long_mode(ui->screen_cfg_dev_label_5, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_dev_label_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_dev_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_dev_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_dev_label_5, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_dev_label_5, &lv_font_AlibabaPuHuiTiRegular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_dev_label_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_dev_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_dev_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_dev_label_5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_dev_label_5, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_dev_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_dev_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_dev_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_dev_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_slider_1
    ui->screen_cfg_dev_slider_1 = lv_slider_create(ui->screen_cfg_dev_cont_2);
    lv_obj_set_pos(ui->screen_cfg_dev_slider_1, 133, 123);
    lv_obj_set_size(ui->screen_cfg_dev_slider_1, 417, 25);
    lv_slider_set_range(ui->screen_cfg_dev_slider_1, 0, 100);
    lv_slider_set_mode(ui->screen_cfg_dev_slider_1, LV_SLIDER_MODE_NORMAL);
    lv_slider_set_value(ui->screen_cfg_dev_slider_1, 50, LV_ANIM_OFF);

    //Write style for screen_cfg_dev_slider_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_slider_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_dev_slider_1, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui->screen_cfg_dev_slider_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_cfg_dev_slider_1, &_img_kedu_RGB565A8_417x25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_cfg_dev_slider_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_cfg_dev_slider_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_dev_slider_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_dev_slider_1, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_slider_1, 0, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_dev_slider_1, 15, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write style for screen_cfg_dev_slider_1, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_slider_1, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_dev_slider_1, lv_color_hex(0x44D7B6), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_dev_slider_1, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_dev_slider_1, 5, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_label_11
    ui->screen_cfg_dev_label_11 = lv_label_create(ui->screen_cfg_dev_cont_2);
    lv_obj_set_pos(ui->screen_cfg_dev_label_11, 282, 78);
    lv_obj_set_size(ui->screen_cfg_dev_label_11, 100, 32);
    lv_label_set_text(ui->screen_cfg_dev_label_11, "5分钟");
    lv_label_set_long_mode(ui->screen_cfg_dev_label_11, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_dev_label_11, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_dev_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_dev_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_dev_label_11, lv_color_hex(0x44D7B6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_dev_label_11, &lv_font_AlibabaPuHuiTiRegular_18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_dev_label_11, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_dev_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_dev_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_dev_label_11, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_dev_label_11, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_dev_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_dev_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_dev_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_dev_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_slider_2
    ui->screen_cfg_dev_slider_2 = lv_slider_create(ui->screen_cfg_dev_cont_2);
    lv_obj_set_pos(ui->screen_cfg_dev_slider_2, 134, 236);
    lv_obj_set_size(ui->screen_cfg_dev_slider_2, 417, 25);
    lv_slider_set_range(ui->screen_cfg_dev_slider_2, 0, 100);
    lv_slider_set_mode(ui->screen_cfg_dev_slider_2, LV_SLIDER_MODE_NORMAL);
    lv_slider_set_value(ui->screen_cfg_dev_slider_2, 50, LV_ANIM_OFF);

    //Write style for screen_cfg_dev_slider_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_slider_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_dev_slider_2, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui->screen_cfg_dev_slider_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_cfg_dev_slider_2, &_img_kedu_RGB565A8_417x25, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_cfg_dev_slider_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_cfg_dev_slider_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_dev_slider_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_dev_slider_2, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_slider_2, 0, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_dev_slider_2, 15, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write style for screen_cfg_dev_slider_2, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_slider_2, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_dev_slider_2, lv_color_hex(0x44D7B6), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_dev_slider_2, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_dev_slider_2, 5, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_label_12
    ui->screen_cfg_dev_label_12 = lv_label_create(ui->screen_cfg_dev_cont_2);
    lv_obj_set_pos(ui->screen_cfg_dev_label_12, 281, 192);
    lv_obj_set_size(ui->screen_cfg_dev_label_12, 100, 32);
    lv_label_set_text(ui->screen_cfg_dev_label_12, "5分钟");
    lv_label_set_long_mode(ui->screen_cfg_dev_label_12, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_dev_label_12, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_dev_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_dev_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_dev_label_12, lv_color_hex(0x44D7B6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_dev_label_12, &lv_font_AlibabaPuHuiTiRegular_18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_dev_label_12, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_dev_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_dev_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_dev_label_12, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_dev_label_12, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_dev_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_dev_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_dev_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_dev_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_imgbtn_1
    ui->screen_cfg_dev_imgbtn_1 = lv_imagebutton_create(ui->screen_cfg_dev_cont_2);
    lv_obj_set_pos(ui->screen_cfg_dev_imgbtn_1, 444, 31);
    lv_obj_set_size(ui->screen_cfg_dev_imgbtn_1, 130, 40);
    lv_obj_add_flag(ui->screen_cfg_dev_imgbtn_1, LV_OBJ_FLAG_CHECKABLE);
    lv_imagebutton_set_src(ui->screen_cfg_dev_imgbtn_1, LV_IMAGEBUTTON_STATE_RELEASED, &_img_setup_danji_RGB565A8_130x40, NULL, NULL);
    lv_imagebutton_set_src(ui->screen_cfg_dev_imgbtn_1, LV_IMAGEBUTTON_STATE_PRESSED, &_img_setup_danji_RGB565A8_130x40, NULL, NULL);
    lv_imagebutton_set_src(ui->screen_cfg_dev_imgbtn_1, LV_IMAGEBUTTON_STATE_CHECKED_RELEASED, &_img_setup_lianwang_RGB565A8_130x40, NULL, NULL);
    lv_imagebutton_set_src(ui->screen_cfg_dev_imgbtn_1, LV_IMAGEBUTTON_STATE_CHECKED_PRESSED, &_img_setup_lianwang_RGB565A8_130x40, NULL, NULL);
    ui->screen_cfg_dev_imgbtn_1_label = lv_label_create(ui->screen_cfg_dev_imgbtn_1);
    lv_label_set_text(ui->screen_cfg_dev_imgbtn_1_label, "");
    lv_label_set_long_mode(ui->screen_cfg_dev_imgbtn_1_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_dev_imgbtn_1_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_dev_imgbtn_1, 0, LV_STATE_DEFAULT);

    //Write style for screen_cfg_dev_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_dev_imgbtn_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_dev_imgbtn_1, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_dev_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_dev_imgbtn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_dev_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_dev_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_image_recolor_opa(ui->screen_cfg_dev_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_image_opa(ui->screen_cfg_dev_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_cfg_dev_imgbtn_1, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_cfg_dev_imgbtn_1, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_cfg_dev_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_cfg_dev_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write style for screen_cfg_dev_imgbtn_1, Part: LV_PART_MAIN, State: LV_STATE_CHECKED.
    lv_obj_set_style_image_recolor_opa(ui->screen_cfg_dev_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_image_opa(ui->screen_cfg_dev_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui->screen_cfg_dev_imgbtn_1, lv_color_hex(0xFF33FF), LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui->screen_cfg_dev_imgbtn_1, &lv_font_HarmonyOS_Sans_Medium_12, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui->screen_cfg_dev_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui->screen_cfg_dev_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style for screen_cfg_dev_imgbtn_1, Part: LV_PART_MAIN, State: LV_IMAGEBUTTON_STATE_RELEASED.
    lv_obj_set_style_image_recolor_opa(ui->screen_cfg_dev_imgbtn_1, 0, LV_PART_MAIN|LV_IMAGEBUTTON_STATE_RELEASED);
    lv_obj_set_style_image_opa(ui->screen_cfg_dev_imgbtn_1, 255, LV_PART_MAIN|LV_IMAGEBUTTON_STATE_RELEASED);

    //Write codes screen_cfg_dev_btn_3
    ui->screen_cfg_dev_btn_3 = lv_button_create(ui->screen_cfg_dev_cont_1);
    lv_obj_set_pos(ui->screen_cfg_dev_btn_3, 699, 89);
    lv_obj_set_size(ui->screen_cfg_dev_btn_3, 143, 47);
    ui->screen_cfg_dev_btn_3_label = lv_label_create(ui->screen_cfg_dev_btn_3);
    lv_label_set_text(ui->screen_cfg_dev_btn_3_label, "设备控制");
    lv_label_set_long_mode(ui->screen_cfg_dev_btn_3_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_dev_btn_3_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_dev_btn_3, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_dev_btn_3_label, LV_PCT(100));

    //Write style for screen_cfg_dev_btn_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_btn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_dev_btn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_dev_btn_3, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_dev_btn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_dev_btn_3, lv_color_hex(0x44D7B6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_dev_btn_3, &lv_font_AlibabaPuHuiTiRegular_34, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_dev_btn_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_dev_btn_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_cont_3
    ui->screen_cfg_dev_cont_3 = lv_obj_create(ui->screen_cfg_dev_cont_1);
    lv_obj_set_pos(ui->screen_cfg_dev_cont_3, 652, 165);
    lv_obj_set_size(ui->screen_cfg_dev_cont_3, 597, 310);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_dev_cont_3, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_dev_cont_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_dev_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_dev_cont_3, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_cont_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_dev_cont_3, lv_color_hex(0x2A405C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_dev_cont_3, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_dev_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_dev_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_dev_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_dev_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_dev_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_label_10
    ui->screen_cfg_dev_label_10 = lv_label_create(ui->screen_cfg_dev_cont_3);
    lv_obj_set_pos(ui->screen_cfg_dev_label_10, 40, 32);
    lv_obj_set_size(ui->screen_cfg_dev_label_10, 138, 42);
    lv_label_set_text(ui->screen_cfg_dev_label_10, "灯光控制");
    lv_label_set_long_mode(ui->screen_cfg_dev_label_10, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_dev_label_10, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_dev_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_dev_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_dev_label_10, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_dev_label_10, &lv_font_AlibabaPuHuiTiRegular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_dev_label_10, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_dev_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_dev_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_dev_label_10, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_dev_label_10, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_dev_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_dev_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_dev_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_dev_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_label_13
    ui->screen_cfg_dev_label_13 = lv_label_create(ui->screen_cfg_dev_cont_3);
    lv_obj_set_pos(ui->screen_cfg_dev_label_13, 129, 102);
    lv_obj_set_size(ui->screen_cfg_dev_label_13, 79, 27);
    lv_label_set_text(ui->screen_cfg_dev_label_13, "报警灯");
    lv_label_set_long_mode(ui->screen_cfg_dev_label_13, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_dev_label_13, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_dev_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_dev_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_dev_label_13, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_dev_label_13, &lv_font_AlibabaPuHuiTiRegular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_dev_label_13, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_dev_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_dev_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_dev_label_13, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_dev_label_13, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_dev_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_dev_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_dev_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_dev_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_img_64
    ui->screen_cfg_dev_img_64 = lv_image_create(ui->screen_cfg_dev_cont_3);
    lv_obj_set_pos(ui->screen_cfg_dev_img_64, 83, 93);
    lv_obj_set_size(ui->screen_cfg_dev_img_64, 36, 36);
    lv_obj_add_flag(ui->screen_cfg_dev_img_64, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_cfg_dev_img_64, &_icon_device_baojing_RGB565A8_36x36);
    lv_image_set_pivot(ui->screen_cfg_dev_img_64, 50,50);
    lv_image_set_rotation(ui->screen_cfg_dev_img_64, 0);

    //Write style for screen_cfg_dev_img_64, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_cfg_dev_img_64, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_cfg_dev_img_64, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_label_14
    ui->screen_cfg_dev_label_14 = lv_label_create(ui->screen_cfg_dev_cont_3);
    lv_obj_set_pos(ui->screen_cfg_dev_label_14, 383, 102);
    lv_obj_set_size(ui->screen_cfg_dev_label_14, 79, 27);
    lv_label_set_text(ui->screen_cfg_dev_label_14, "照明灯");
    lv_label_set_long_mode(ui->screen_cfg_dev_label_14, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_dev_label_14, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_dev_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_dev_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_dev_label_14, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_dev_label_14, &lv_font_AlibabaPuHuiTiRegular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_dev_label_14, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_dev_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_dev_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_dev_label_14, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_dev_label_14, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_dev_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_dev_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_dev_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_dev_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_img_65
    ui->screen_cfg_dev_img_65 = lv_image_create(ui->screen_cfg_dev_cont_3);
    lv_obj_set_pos(ui->screen_cfg_dev_img_65, 335, 95);
    lv_obj_set_size(ui->screen_cfg_dev_img_65, 35, 34);
    lv_obj_add_flag(ui->screen_cfg_dev_img_65, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_cfg_dev_img_65, &_icon_device_zhaoming_RGB565A8_35x34);
    lv_image_set_pivot(ui->screen_cfg_dev_img_65, 50,50);
    lv_image_set_rotation(ui->screen_cfg_dev_img_65, 0);

    //Write style for screen_cfg_dev_img_65, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_cfg_dev_img_65, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_cfg_dev_img_65, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_sw_1
    ui->screen_cfg_dev_sw_1 = lv_switch_create(ui->screen_cfg_dev_cont_3);
    lv_obj_set_pos(ui->screen_cfg_dev_sw_1, 96, 248);
    lv_obj_set_size(ui->screen_cfg_dev_sw_1, 77, 30);

    //Write style for screen_cfg_dev_sw_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_sw_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_dev_sw_1, lv_color_hex(0xe6e2e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_dev_sw_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_dev_sw_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_dev_sw_1, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_dev_sw_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_dev_sw_1, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_sw_1, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_cfg_dev_sw_1, lv_color_hex(0x44D7B6), LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_dev_sw_1, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_cfg_dev_sw_1, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

    //Write style for screen_cfg_dev_sw_1, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_sw_1, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_dev_sw_1, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_dev_sw_1, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_dev_sw_1, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_dev_sw_1, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write style for screen_cfg_dev_sw_1, Part: LV_PART_KNOB, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_sw_1, 255, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_cfg_dev_sw_1, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_dev_sw_1, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_cfg_dev_sw_1, 0, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_cfg_dev_sw_1, 10, LV_PART_KNOB|LV_STATE_FOCUSED);

    //Write codes screen_cfg_dev_sw_2
    ui->screen_cfg_dev_sw_2 = lv_switch_create(ui->screen_cfg_dev_cont_3);
    lv_obj_set_pos(ui->screen_cfg_dev_sw_2, 357, 248);
    lv_obj_set_size(ui->screen_cfg_dev_sw_2, 77, 30);

    //Write style for screen_cfg_dev_sw_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_sw_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_dev_sw_2, lv_color_hex(0xe6e2e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_dev_sw_2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_dev_sw_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_dev_sw_2, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_dev_sw_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_dev_sw_2, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_sw_2, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui->screen_cfg_dev_sw_2, lv_color_hex(0x44D7B6), LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_dev_sw_2, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui->screen_cfg_dev_sw_2, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

    //Write style for screen_cfg_dev_sw_2, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_sw_2, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_dev_sw_2, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_dev_sw_2, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_dev_sw_2, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_dev_sw_2, 10, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write style for screen_cfg_dev_sw_2, Part: LV_PART_KNOB, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_sw_2, 255, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_cfg_dev_sw_2, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_dev_sw_2, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_cfg_dev_sw_2, 0, LV_PART_KNOB|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_cfg_dev_sw_2, 10, LV_PART_KNOB|LV_STATE_FOCUSED);

    //Write codes screen_cfg_dev_img_66
    ui->screen_cfg_dev_img_66 = lv_image_create(ui->screen_cfg_dev_cont_3);
    lv_obj_set_pos(ui->screen_cfg_dev_img_66, 107, 163);
    lv_obj_set_size(ui->screen_cfg_dev_img_66, 51, 51);
    lv_obj_add_flag(ui->screen_cfg_dev_img_66, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_cfg_dev_img_66, &_img_alarm_open_RGB565A8_51x51);
    lv_image_set_pivot(ui->screen_cfg_dev_img_66, 50,50);
    lv_image_set_rotation(ui->screen_cfg_dev_img_66, 0);

    //Write style for screen_cfg_dev_img_66, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_cfg_dev_img_66, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_cfg_dev_img_66, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_img_67
    ui->screen_cfg_dev_img_67 = lv_image_create(ui->screen_cfg_dev_cont_3);
    lv_obj_set_pos(ui->screen_cfg_dev_img_67, 108, 163);
    lv_obj_set_size(ui->screen_cfg_dev_img_67, 50, 50);
    lv_obj_add_flag(ui->screen_cfg_dev_img_67, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui->screen_cfg_dev_img_67, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_cfg_dev_img_67, &_img_alarm_close_RGB565A8_50x50);
    lv_image_set_pivot(ui->screen_cfg_dev_img_67, 50,50);
    lv_image_set_rotation(ui->screen_cfg_dev_img_67, 0);

    //Write style for screen_cfg_dev_img_67, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_cfg_dev_img_67, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_cfg_dev_img_67, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_img_68
    ui->screen_cfg_dev_img_68 = lv_image_create(ui->screen_cfg_dev_cont_3);
    lv_obj_set_pos(ui->screen_cfg_dev_img_68, 366, 165);
    lv_obj_set_size(ui->screen_cfg_dev_img_68, 50, 50);
    lv_obj_add_flag(ui->screen_cfg_dev_img_68, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_cfg_dev_img_68, &_img_light_open_RGB565A8_50x50);
    lv_image_set_pivot(ui->screen_cfg_dev_img_68, 50,50);
    lv_image_set_rotation(ui->screen_cfg_dev_img_68, 0);

    //Write style for screen_cfg_dev_img_68, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_cfg_dev_img_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_cfg_dev_img_68, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_img_69
    ui->screen_cfg_dev_img_69 = lv_image_create(ui->screen_cfg_dev_cont_3);
    lv_obj_set_pos(ui->screen_cfg_dev_img_69, 366, 165);
    lv_obj_set_size(ui->screen_cfg_dev_img_69, 50, 50);
    lv_obj_add_flag(ui->screen_cfg_dev_img_69, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_cfg_dev_img_69, &_img_light_close_RGB565A8_50x50);
    lv_image_set_pivot(ui->screen_cfg_dev_img_69, 50,50);
    lv_image_set_rotation(ui->screen_cfg_dev_img_69, 0);

    //Write style for screen_cfg_dev_img_69, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_cfg_dev_img_69, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_cfg_dev_img_69, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_cont_4
    ui->screen_cfg_dev_cont_4 = lv_obj_create(ui->screen_cfg_dev_cont_1);
    lv_obj_set_pos(ui->screen_cfg_dev_cont_4, 30, 499);
    lv_obj_set_size(ui->screen_cfg_dev_cont_4, 597, 427);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_dev_cont_4, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_dev_cont_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_dev_cont_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_dev_cont_4, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_cont_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_dev_cont_4, lv_color_hex(0x2A405C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_dev_cont_4, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_dev_cont_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_dev_cont_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_dev_cont_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_dev_cont_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_dev_cont_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_label_19
    ui->screen_cfg_dev_label_19 = lv_label_create(ui->screen_cfg_dev_cont_4);
    lv_obj_set_pos(ui->screen_cfg_dev_label_19, 41, 32);
    lv_obj_set_size(ui->screen_cfg_dev_label_19, 136, 42);
    lv_label_set_text(ui->screen_cfg_dev_label_19, "风机设置");
    lv_label_set_long_mode(ui->screen_cfg_dev_label_19, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_dev_label_19, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_dev_label_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_dev_label_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_dev_label_19, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_dev_label_19, &lv_font_AlibabaPuHuiTiRegular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_dev_label_19, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_dev_label_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_dev_label_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_dev_label_19, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_label_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_dev_label_19, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_dev_label_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_dev_label_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_dev_label_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_dev_label_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_label_26
    ui->screen_cfg_dev_label_26 = lv_label_create(ui->screen_cfg_dev_cont_4);
    lv_obj_set_pos(ui->screen_cfg_dev_label_26, 47, 86);
    lv_obj_set_size(ui->screen_cfg_dev_label_26, 79, 27);
    lv_label_set_text(ui->screen_cfg_dev_label_26, "每隔:");
    lv_label_set_long_mode(ui->screen_cfg_dev_label_26, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_dev_label_26, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_dev_label_26, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_dev_label_26, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_dev_label_26, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_dev_label_26, &lv_font_AlibabaPuHuiTiRegular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_dev_label_26, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_dev_label_26, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_dev_label_26, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_dev_label_26, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_label_26, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_dev_label_26, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_dev_label_26, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_dev_label_26, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_dev_label_26, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_dev_label_26, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_label_27
    ui->screen_cfg_dev_label_27 = lv_label_create(ui->screen_cfg_dev_cont_4);
    lv_obj_set_pos(ui->screen_cfg_dev_label_27, 331, 90);
    lv_obj_set_size(ui->screen_cfg_dev_label_27, 79, 27);
    lv_label_set_text(ui->screen_cfg_dev_label_27, "运行:");
    lv_label_set_long_mode(ui->screen_cfg_dev_label_27, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_dev_label_27, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_dev_label_27, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_dev_label_27, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_dev_label_27, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_dev_label_27, &lv_font_AlibabaPuHuiTiRegular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_dev_label_27, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_dev_label_27, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_dev_label_27, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_dev_label_27, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_label_27, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_dev_label_27, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_dev_label_27, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_dev_label_27, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_dev_label_27, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_dev_label_27, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_cont_7
    ui->screen_cfg_dev_cont_7 = lv_obj_create(ui->screen_cfg_dev_cont_4);
    lv_obj_set_pos(ui->screen_cfg_dev_cont_7, 52, 134);
    lv_obj_set_size(ui->screen_cfg_dev_cont_7, 159, 36);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_dev_cont_7, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_dev_cont_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_dev_cont_7, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_dev_cont_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_dev_cont_7, lv_color_hex(0x4D7AB0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_dev_cont_7, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_dev_cont_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_cont_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_dev_cont_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_dev_cont_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_dev_cont_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_dev_cont_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_dev_cont_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_label_28
    ui->screen_cfg_dev_label_28 = lv_label_create(ui->screen_cfg_dev_cont_7);
    lv_obj_set_pos(ui->screen_cfg_dev_label_28, 54, 1);
    lv_obj_set_size(ui->screen_cfg_dev_label_28, 47, 30);
    lv_label_set_text(ui->screen_cfg_dev_label_28, "300");
    lv_label_set_long_mode(ui->screen_cfg_dev_label_28, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_dev_label_28, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_dev_label_28, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_dev_label_28, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_dev_label_28, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_dev_label_28, &lv_font_HarmonyOS_Sans_Medium_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_dev_label_28, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_dev_label_28, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_dev_label_28, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_dev_label_28, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_label_28, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_dev_label_28, lv_color_hex(0x44D7B6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_dev_label_28, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_dev_label_28, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_dev_label_28, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_dev_label_28, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_dev_label_28, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_dev_label_28, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_btn_7
    ui->screen_cfg_dev_btn_7 = lv_button_create(ui->screen_cfg_dev_cont_7);
    lv_obj_set_pos(ui->screen_cfg_dev_btn_7, 1, 0);
    lv_obj_set_size(ui->screen_cfg_dev_btn_7, 47, 30);
    ui->screen_cfg_dev_btn_7_label = lv_label_create(ui->screen_cfg_dev_btn_7);
    lv_label_set_text(ui->screen_cfg_dev_btn_7_label, "-");
    lv_label_set_long_mode(ui->screen_cfg_dev_btn_7_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_dev_btn_7_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_dev_btn_7, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_dev_btn_7_label, LV_PCT(100));

    //Write style for screen_cfg_dev_btn_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_btn_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_dev_btn_7, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_dev_btn_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_dev_btn_7, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_dev_btn_7, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_dev_btn_7, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_dev_btn_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_dev_btn_7, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_dev_btn_7, &lv_font_HarmonyOS_Sans_Medium_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_dev_btn_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_dev_btn_7, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_btn_6
    ui->screen_cfg_dev_btn_6 = lv_button_create(ui->screen_cfg_dev_cont_7);
    lv_obj_set_pos(ui->screen_cfg_dev_btn_6, 106, 1);
    lv_obj_set_size(ui->screen_cfg_dev_btn_6, 47, 30);
    ui->screen_cfg_dev_btn_6_label = lv_label_create(ui->screen_cfg_dev_btn_6);
    lv_label_set_text(ui->screen_cfg_dev_btn_6_label, "+");
    lv_label_set_long_mode(ui->screen_cfg_dev_btn_6_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_dev_btn_6_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_dev_btn_6, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_dev_btn_6_label, LV_PCT(100));

    //Write style for screen_cfg_dev_btn_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_btn_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_dev_btn_6, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_dev_btn_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_dev_btn_6, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_dev_btn_6, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_dev_btn_6, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_dev_btn_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_dev_btn_6, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_dev_btn_6, &lv_font_HarmonyOS_Sans_Medium_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_dev_btn_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_dev_btn_6, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_cont_8
    ui->screen_cfg_dev_cont_8 = lv_obj_create(ui->screen_cfg_dev_cont_4);
    lv_obj_set_pos(ui->screen_cfg_dev_cont_8, 331, 135);
    lv_obj_set_size(ui->screen_cfg_dev_cont_8, 159, 36);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_dev_cont_8, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_dev_cont_8, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_dev_cont_8, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_dev_cont_8, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_dev_cont_8, lv_color_hex(0x4D7AB0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_dev_cont_8, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_dev_cont_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_cont_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_dev_cont_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_dev_cont_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_dev_cont_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_dev_cont_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_dev_cont_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_label_29
    ui->screen_cfg_dev_label_29 = lv_label_create(ui->screen_cfg_dev_cont_8);
    lv_obj_set_pos(ui->screen_cfg_dev_label_29, 54, 1);
    lv_obj_set_size(ui->screen_cfg_dev_label_29, 47, 30);
    lv_label_set_text(ui->screen_cfg_dev_label_29, "300");
    lv_label_set_long_mode(ui->screen_cfg_dev_label_29, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_dev_label_29, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_dev_label_29, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_dev_label_29, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_dev_label_29, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_dev_label_29, &lv_font_HarmonyOS_Sans_Medium_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_dev_label_29, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_dev_label_29, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_dev_label_29, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_dev_label_29, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_label_29, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_dev_label_29, lv_color_hex(0x44D7B6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_dev_label_29, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_dev_label_29, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_dev_label_29, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_dev_label_29, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_dev_label_29, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_dev_label_29, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_btn_9
    ui->screen_cfg_dev_btn_9 = lv_button_create(ui->screen_cfg_dev_cont_8);
    lv_obj_set_pos(ui->screen_cfg_dev_btn_9, 2, 1);
    lv_obj_set_size(ui->screen_cfg_dev_btn_9, 47, 30);
    ui->screen_cfg_dev_btn_9_label = lv_label_create(ui->screen_cfg_dev_btn_9);
    lv_label_set_text(ui->screen_cfg_dev_btn_9_label, "-");
    lv_label_set_long_mode(ui->screen_cfg_dev_btn_9_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_dev_btn_9_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_dev_btn_9, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_dev_btn_9_label, LV_PCT(100));

    //Write style for screen_cfg_dev_btn_9, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_btn_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_dev_btn_9, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_dev_btn_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_dev_btn_9, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_dev_btn_9, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_dev_btn_9, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_dev_btn_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_dev_btn_9, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_dev_btn_9, &lv_font_HarmonyOS_Sans_Medium_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_dev_btn_9, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_dev_btn_9, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_btn_8
    ui->screen_cfg_dev_btn_8 = lv_button_create(ui->screen_cfg_dev_cont_8);
    lv_obj_set_pos(ui->screen_cfg_dev_btn_8, 106, 1);
    lv_obj_set_size(ui->screen_cfg_dev_btn_8, 47, 30);
    ui->screen_cfg_dev_btn_8_label = lv_label_create(ui->screen_cfg_dev_btn_8);
    lv_label_set_text(ui->screen_cfg_dev_btn_8_label, "+");
    lv_label_set_long_mode(ui->screen_cfg_dev_btn_8_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_dev_btn_8_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_dev_btn_8, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_dev_btn_8_label, LV_PCT(100));

    //Write style for screen_cfg_dev_btn_8, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_btn_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_dev_btn_8, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_dev_btn_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_dev_btn_8, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_dev_btn_8, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_dev_btn_8, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_dev_btn_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_dev_btn_8, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_dev_btn_8, &lv_font_HarmonyOS_Sans_Medium_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_dev_btn_8, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_dev_btn_8, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_label_30
    ui->screen_cfg_dev_label_30 = lv_label_create(ui->screen_cfg_dev_cont_4);
    lv_obj_set_pos(ui->screen_cfg_dev_label_30, 75, 193);
    lv_obj_set_size(ui->screen_cfg_dev_label_30, 110, 27);
    lv_label_set_text(ui->screen_cfg_dev_label_30, "风机转速设置");
    lv_label_set_long_mode(ui->screen_cfg_dev_label_30, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_dev_label_30, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_dev_label_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_dev_label_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_dev_label_30, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_dev_label_30, &lv_font_AlibabaPuHuiTiRegular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_dev_label_30, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_dev_label_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_dev_label_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_dev_label_30, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_label_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_dev_label_30, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_dev_label_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_dev_label_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_dev_label_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_dev_label_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_label_31
    ui->screen_cfg_dev_label_31 = lv_label_create(ui->screen_cfg_dev_cont_4);
    lv_obj_set_pos(ui->screen_cfg_dev_label_31, 223, 137);
    lv_obj_set_size(ui->screen_cfg_dev_label_31, 62, 32);
    lv_label_set_text(ui->screen_cfg_dev_label_31, "分钟");
    lv_label_set_long_mode(ui->screen_cfg_dev_label_31, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_dev_label_31, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_dev_label_31, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_dev_label_31, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_dev_label_31, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_dev_label_31, &lv_font_AlibabaPuHuiTiRegular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_dev_label_31, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_dev_label_31, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_dev_label_31, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_dev_label_31, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_label_31, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_dev_label_31, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_dev_label_31, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_dev_label_31, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_dev_label_31, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_dev_label_31, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_label_32
    ui->screen_cfg_dev_label_32 = lv_label_create(ui->screen_cfg_dev_cont_4);
    lv_obj_set_pos(ui->screen_cfg_dev_label_32, 506, 136);
    lv_obj_set_size(ui->screen_cfg_dev_label_32, 62, 32);
    lv_label_set_text(ui->screen_cfg_dev_label_32, "分钟");
    lv_label_set_long_mode(ui->screen_cfg_dev_label_32, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_dev_label_32, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_dev_label_32, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_dev_label_32, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_dev_label_32, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_dev_label_32, &lv_font_AlibabaPuHuiTiRegular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_dev_label_32, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_dev_label_32, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_dev_label_32, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_dev_label_32, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_label_32, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_dev_label_32, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_dev_label_32, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_dev_label_32, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_dev_label_32, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_dev_label_32, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_line_2
    ui->screen_cfg_dev_line_2 = lv_line_create(ui->screen_cfg_dev_cont_4);
    lv_obj_set_pos(ui->screen_cfg_dev_line_2, 50, 303);
    lv_obj_set_size(ui->screen_cfg_dev_line_2, 515, 2);
    static lv_point_precise_t screen_cfg_dev_line_2[] = {{0, 0},{515, 0}};
    lv_line_set_points(ui->screen_cfg_dev_line_2, screen_cfg_dev_line_2, 2);

    //Write style for screen_cfg_dev_line_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_cfg_dev_line_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_cfg_dev_line_2, lv_color_hex(0x758AA6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_cfg_dev_line_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_cfg_dev_line_2, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_label_33
    ui->screen_cfg_dev_label_33 = lv_label_create(ui->screen_cfg_dev_cont_4);
    lv_obj_set_pos(ui->screen_cfg_dev_label_33, 61, 316);
    lv_obj_set_size(ui->screen_cfg_dev_label_33, 104, 27);
    lv_label_set_text(ui->screen_cfg_dev_label_33, "紧急通风");
    lv_label_set_long_mode(ui->screen_cfg_dev_label_33, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_dev_label_33, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_dev_label_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_dev_label_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_dev_label_33, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_dev_label_33, &lv_font_AlibabaPuHuiTiRegular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_dev_label_33, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_dev_label_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_dev_label_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_dev_label_33, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_label_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_dev_label_33, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_dev_label_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_dev_label_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_dev_label_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_dev_label_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_label_34
    ui->screen_cfg_dev_label_34 = lv_label_create(ui->screen_cfg_dev_cont_4);
    lv_obj_set_pos(ui->screen_cfg_dev_label_34, 57, 352);
    lv_obj_set_size(ui->screen_cfg_dev_label_34, 75, 27);
    lv_label_set_text(ui->screen_cfg_dev_label_34, "倒计时:");
    lv_label_set_long_mode(ui->screen_cfg_dev_label_34, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_dev_label_34, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_dev_label_34, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_dev_label_34, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_dev_label_34, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_dev_label_34, &lv_font_AlibabaPuHuiTiRegular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_dev_label_34, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_dev_label_34, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_dev_label_34, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_dev_label_34, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_label_34, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_dev_label_34, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_dev_label_34, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_dev_label_34, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_dev_label_34, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_dev_label_34, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_cont_9
    ui->screen_cfg_dev_cont_9 = lv_obj_create(ui->screen_cfg_dev_cont_4);
    lv_obj_set_pos(ui->screen_cfg_dev_cont_9, 139, 349);
    lv_obj_set_size(ui->screen_cfg_dev_cont_9, 159, 36);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_dev_cont_9, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_dev_cont_9, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_dev_cont_9, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_dev_cont_9, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_dev_cont_9, lv_color_hex(0x4D7AB0), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_dev_cont_9, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_dev_cont_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_cont_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_dev_cont_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_dev_cont_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_dev_cont_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_dev_cont_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_dev_cont_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_label_35
    ui->screen_cfg_dev_label_35 = lv_label_create(ui->screen_cfg_dev_cont_9);
    lv_obj_set_pos(ui->screen_cfg_dev_label_35, 54, 1);
    lv_obj_set_size(ui->screen_cfg_dev_label_35, 47, 30);
    lv_label_set_text(ui->screen_cfg_dev_label_35, "300");
    lv_label_set_long_mode(ui->screen_cfg_dev_label_35, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_dev_label_35, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_dev_label_35, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_dev_label_35, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_dev_label_35, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_dev_label_35, &lv_font_HarmonyOS_Sans_Medium_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_dev_label_35, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_dev_label_35, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_dev_label_35, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_dev_label_35, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_label_35, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_dev_label_35, lv_color_hex(0x44D7B6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_dev_label_35, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_dev_label_35, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_dev_label_35, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_dev_label_35, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_dev_label_35, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_dev_label_35, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_btn_11
    ui->screen_cfg_dev_btn_11 = lv_button_create(ui->screen_cfg_dev_cont_9);
    lv_obj_set_pos(ui->screen_cfg_dev_btn_11, 2, 1);
    lv_obj_set_size(ui->screen_cfg_dev_btn_11, 47, 30);
    ui->screen_cfg_dev_btn_11_label = lv_label_create(ui->screen_cfg_dev_btn_11);
    lv_label_set_text(ui->screen_cfg_dev_btn_11_label, "-");
    lv_label_set_long_mode(ui->screen_cfg_dev_btn_11_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_dev_btn_11_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_dev_btn_11, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_dev_btn_11_label, LV_PCT(100));

    //Write style for screen_cfg_dev_btn_11, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_btn_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_dev_btn_11, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_dev_btn_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_dev_btn_11, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_dev_btn_11, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_dev_btn_11, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_dev_btn_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_dev_btn_11, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_dev_btn_11, &lv_font_HarmonyOS_Sans_Medium_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_dev_btn_11, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_dev_btn_11, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_btn_10
    ui->screen_cfg_dev_btn_10 = lv_button_create(ui->screen_cfg_dev_cont_9);
    lv_obj_set_pos(ui->screen_cfg_dev_btn_10, 106, 1);
    lv_obj_set_size(ui->screen_cfg_dev_btn_10, 47, 30);
    ui->screen_cfg_dev_btn_10_label = lv_label_create(ui->screen_cfg_dev_btn_10);
    lv_label_set_text(ui->screen_cfg_dev_btn_10_label, "+");
    lv_label_set_long_mode(ui->screen_cfg_dev_btn_10_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_dev_btn_10_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_dev_btn_10, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_dev_btn_10_label, LV_PCT(100));

    //Write style for screen_cfg_dev_btn_10, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_btn_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_dev_btn_10, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_dev_btn_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_dev_btn_10, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_dev_btn_10, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_dev_btn_10, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_dev_btn_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_dev_btn_10, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_dev_btn_10, &lv_font_HarmonyOS_Sans_Medium_28, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_dev_btn_10, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_dev_btn_10, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_label_36
    ui->screen_cfg_dev_label_36 = lv_label_create(ui->screen_cfg_dev_cont_4);
    lv_obj_set_pos(ui->screen_cfg_dev_label_36, 304, 352);
    lv_obj_set_size(ui->screen_cfg_dev_label_36, 62, 32);
    lv_label_set_text(ui->screen_cfg_dev_label_36, "分钟");
    lv_label_set_long_mode(ui->screen_cfg_dev_label_36, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_dev_label_36, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_dev_label_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_dev_label_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_dev_label_36, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_dev_label_36, &lv_font_AlibabaPuHuiTiRegular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_dev_label_36, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_dev_label_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_dev_label_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_dev_label_36, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_label_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_dev_label_36, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_dev_label_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_dev_label_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_dev_label_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_dev_label_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_img_75
    ui->screen_cfg_dev_img_75 = lv_image_create(ui->screen_cfg_dev_cont_4);
    lv_obj_set_pos(ui->screen_cfg_dev_img_75, 379, 225);
    lv_obj_set_size(ui->screen_cfg_dev_img_75, 20, 20);
    lv_obj_add_flag(ui->screen_cfg_dev_img_75, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_cfg_dev_img_75, &_icon_revolution_fengshan_f_RGB565A8_20x20);
    lv_image_set_pivot(ui->screen_cfg_dev_img_75, 50,50);
    lv_image_set_rotation(ui->screen_cfg_dev_img_75, 0);

    //Write style for screen_cfg_dev_img_75, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_cfg_dev_img_75, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_cfg_dev_img_75, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_img_76
    ui->screen_cfg_dev_img_76 = lv_image_create(ui->screen_cfg_dev_cont_4);
    lv_obj_set_pos(ui->screen_cfg_dev_img_76, 528, 225);
    lv_obj_set_size(ui->screen_cfg_dev_img_76, 18, 18);
    lv_obj_add_flag(ui->screen_cfg_dev_img_76, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_cfg_dev_img_76, &_icon_revolution_fengshan_s_RGB565A8_18x18);
    lv_image_set_pivot(ui->screen_cfg_dev_img_76, 50,50);
    lv_image_set_rotation(ui->screen_cfg_dev_img_76, 0);

    //Write style for screen_cfg_dev_img_76, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_cfg_dev_img_76, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_cfg_dev_img_76, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_img_77
    ui->screen_cfg_dev_img_77 = lv_image_create(ui->screen_cfg_dev_cont_4);
    lv_obj_set_pos(ui->screen_cfg_dev_img_77, 232, 225);
    lv_obj_set_size(ui->screen_cfg_dev_img_77, 18, 18);
    lv_obj_add_flag(ui->screen_cfg_dev_img_77, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_cfg_dev_img_77, &_icon_revolution_fengshan_s_RGB565A8_18x18);
    lv_image_set_pivot(ui->screen_cfg_dev_img_77, 50,50);
    lv_image_set_rotation(ui->screen_cfg_dev_img_77, 0);

    //Write style for screen_cfg_dev_img_77, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_cfg_dev_img_77, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_cfg_dev_img_77, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_img_78
    ui->screen_cfg_dev_img_78 = lv_image_create(ui->screen_cfg_dev_cont_4);
    lv_obj_set_pos(ui->screen_cfg_dev_img_78, 85, 225);
    lv_obj_set_size(ui->screen_cfg_dev_img_78, 18, 18);
    lv_obj_add_flag(ui->screen_cfg_dev_img_78, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_cfg_dev_img_78, &_icon_revolution_fengshan_s_RGB565A8_18x18);
    lv_image_set_pivot(ui->screen_cfg_dev_img_78, 50,50);
    lv_image_set_rotation(ui->screen_cfg_dev_img_78, 0);

    //Write style for screen_cfg_dev_img_78, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_cfg_dev_img_78, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_cfg_dev_img_78, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_label_37
    ui->screen_cfg_dev_label_37 = lv_label_create(ui->screen_cfg_dev_cont_4);
    lv_obj_set_pos(ui->screen_cfg_dev_label_37, 83, 271);
    lv_obj_set_size(ui->screen_cfg_dev_label_37, 14, 20);
    lv_label_set_text(ui->screen_cfg_dev_label_37, "低");
    lv_label_set_long_mode(ui->screen_cfg_dev_label_37, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_dev_label_37, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_dev_label_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_dev_label_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_dev_label_37, lv_color_hex(0x758AA6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_dev_label_37, &lv_font_AlibabaPuHuiTiRegular_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_dev_label_37, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_dev_label_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_dev_label_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_dev_label_37, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_label_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_dev_label_37, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_dev_label_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_dev_label_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_dev_label_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_dev_label_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_label_38
    ui->screen_cfg_dev_label_38 = lv_label_create(ui->screen_cfg_dev_cont_4);
    lv_obj_set_pos(ui->screen_cfg_dev_label_38, 232, 272);
    lv_obj_set_size(ui->screen_cfg_dev_label_38, 14, 20);
    lv_label_set_text(ui->screen_cfg_dev_label_38, "中");
    lv_label_set_long_mode(ui->screen_cfg_dev_label_38, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_dev_label_38, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_dev_label_38, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_dev_label_38, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_dev_label_38, lv_color_hex(0x758AA6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_dev_label_38, &lv_font_AlibabaPuHuiTiRegular_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_dev_label_38, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_dev_label_38, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_dev_label_38, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_dev_label_38, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_label_38, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_dev_label_38, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_dev_label_38, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_dev_label_38, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_dev_label_38, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_dev_label_38, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_label_39
    ui->screen_cfg_dev_label_39 = lv_label_create(ui->screen_cfg_dev_cont_4);
    lv_obj_set_pos(ui->screen_cfg_dev_label_39, 382, 272);
    lv_obj_set_size(ui->screen_cfg_dev_label_39, 14, 20);
    lv_label_set_text(ui->screen_cfg_dev_label_39, "高");
    lv_label_set_long_mode(ui->screen_cfg_dev_label_39, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_dev_label_39, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_dev_label_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_dev_label_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_dev_label_39, lv_color_hex(0x758AA6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_dev_label_39, &lv_font_AlibabaPuHuiTiRegular_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_dev_label_39, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_dev_label_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_dev_label_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_dev_label_39, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_label_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_dev_label_39, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_dev_label_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_dev_label_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_dev_label_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_dev_label_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_label_40
    ui->screen_cfg_dev_label_40 = lv_label_create(ui->screen_cfg_dev_cont_4);
    lv_obj_set_pos(ui->screen_cfg_dev_label_40, 513, 271);
    lv_obj_set_size(ui->screen_cfg_dev_label_40, 38, 20);
    lv_label_set_text(ui->screen_cfg_dev_label_40, "最大");
    lv_label_set_long_mode(ui->screen_cfg_dev_label_40, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_dev_label_40, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_dev_label_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_dev_label_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_dev_label_40, lv_color_hex(0x758AA6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_dev_label_40, &lv_font_AlibabaPuHuiTiRegular_14, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_dev_label_40, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_dev_label_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_dev_label_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_dev_label_40, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_label_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_dev_label_40, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_dev_label_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_dev_label_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_dev_label_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_dev_label_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_cont_5
    ui->screen_cfg_dev_cont_5 = lv_obj_create(ui->screen_cfg_dev_cont_1);
    lv_obj_set_pos(ui->screen_cfg_dev_cont_5, 651, 502);
    lv_obj_set_size(ui->screen_cfg_dev_cont_5, 597, 175);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_dev_cont_5, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_dev_cont_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_dev_cont_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_dev_cont_5, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_cont_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_dev_cont_5, lv_color_hex(0x2A405C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_dev_cont_5, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_dev_cont_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_dev_cont_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_dev_cont_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_dev_cont_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_dev_cont_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_label_24
    ui->screen_cfg_dev_label_24 = lv_label_create(ui->screen_cfg_dev_cont_5);
    lv_obj_set_pos(ui->screen_cfg_dev_label_24, 41, 32);
    lv_obj_set_size(ui->screen_cfg_dev_label_24, 136, 42);
    lv_label_set_text(ui->screen_cfg_dev_label_24, "屏幕亮度");
    lv_label_set_long_mode(ui->screen_cfg_dev_label_24, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_dev_label_24, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_dev_label_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_dev_label_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_dev_label_24, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_dev_label_24, &lv_font_AlibabaPuHuiTiRegular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_dev_label_24, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_dev_label_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_dev_label_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_dev_label_24, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_label_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_dev_label_24, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_dev_label_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_dev_label_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_dev_label_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_dev_label_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_slider_3
    ui->screen_cfg_dev_slider_3 = lv_slider_create(ui->screen_cfg_dev_cont_5);
    lv_obj_set_pos(ui->screen_cfg_dev_slider_3, 93, 113);
    lv_obj_set_size(ui->screen_cfg_dev_slider_3, 431, 16);
    lv_slider_set_range(ui->screen_cfg_dev_slider_3, 0, 100);
    lv_slider_set_mode(ui->screen_cfg_dev_slider_3, LV_SLIDER_MODE_NORMAL);
    lv_slider_set_value(ui->screen_cfg_dev_slider_3, 50, LV_ANIM_OFF);

    //Write style for screen_cfg_dev_slider_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_slider_3, 60, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_dev_slider_3, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_dev_slider_3, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_dev_slider_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui->screen_cfg_dev_slider_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_dev_slider_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_dev_slider_3, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_slider_3, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_dev_slider_3, lv_color_hex(0x0EC3A4), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_dev_slider_3, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_dev_slider_3, 8, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write style for screen_cfg_dev_slider_3, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_slider_3, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_dev_slider_3, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_dev_slider_3, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_dev_slider_3, 8, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_img_72
    ui->screen_cfg_dev_img_72 = lv_image_create(ui->screen_cfg_dev_cont_5);
    lv_obj_set_pos(ui->screen_cfg_dev_img_72, 53, 107);
    lv_obj_set_size(ui->screen_cfg_dev_img_72, 32, 32);
    lv_obj_add_flag(ui->screen_cfg_dev_img_72, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_cfg_dev_img_72, &_icon_brightness_weak_RGB565A8_32x32);
    lv_image_set_pivot(ui->screen_cfg_dev_img_72, 50,50);
    lv_image_set_rotation(ui->screen_cfg_dev_img_72, 0);

    //Write style for screen_cfg_dev_img_72, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_cfg_dev_img_72, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_cfg_dev_img_72, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_img_73
    ui->screen_cfg_dev_img_73 = lv_image_create(ui->screen_cfg_dev_cont_5);
    lv_obj_set_pos(ui->screen_cfg_dev_img_73, 534, 107);
    lv_obj_set_size(ui->screen_cfg_dev_img_73, 32, 32);
    lv_obj_add_flag(ui->screen_cfg_dev_img_73, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_cfg_dev_img_73, &_icon_brightness_strong_RGB565A8_32x32);
    lv_image_set_pivot(ui->screen_cfg_dev_img_73, 50,50);
    lv_image_set_rotation(ui->screen_cfg_dev_img_73, 0);

    //Write style for screen_cfg_dev_img_73, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_cfg_dev_img_73, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_cfg_dev_img_73, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_cont_6
    ui->screen_cfg_dev_cont_6 = lv_obj_create(ui->screen_cfg_dev_cont_1);
    lv_obj_set_pos(ui->screen_cfg_dev_cont_6, 652, 700);
    lv_obj_set_size(ui->screen_cfg_dev_cont_6, 597, 227);
    lv_obj_set_scrollbar_mode(ui->screen_cfg_dev_cont_6, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_cfg_dev_cont_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_dev_cont_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_dev_cont_6, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_cont_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_dev_cont_6, lv_color_hex(0x2A405C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_dev_cont_6, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_dev_cont_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_dev_cont_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_dev_cont_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_dev_cont_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_dev_cont_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_label_25
    ui->screen_cfg_dev_label_25 = lv_label_create(ui->screen_cfg_dev_cont_6);
    lv_obj_set_pos(ui->screen_cfg_dev_label_25, 41, 32);
    lv_obj_set_size(ui->screen_cfg_dev_label_25, 136, 42);
    lv_label_set_text(ui->screen_cfg_dev_label_25, "滤芯控制");
    lv_label_set_long_mode(ui->screen_cfg_dev_label_25, LV_LABEL_LONG_WRAP);

    //Write style for screen_cfg_dev_label_25, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_cfg_dev_label_25, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_dev_label_25, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_dev_label_25, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_dev_label_25, &lv_font_AlibabaPuHuiTiRegular_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_dev_label_25, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_dev_label_25, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_cfg_dev_label_25, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_dev_label_25, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_label_25, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_dev_label_25, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_dev_label_25, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_dev_label_25, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_dev_label_25, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_dev_label_25, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_cb_1
    ui->screen_cfg_dev_cb_1 = lv_checkbox_create(ui->screen_cfg_dev_cont_6);
    lv_obj_set_pos(ui->screen_cfg_dev_cb_1, 49, 106);
    lv_checkbox_set_text(ui->screen_cfg_dev_cb_1, "倒计时模式");

    //Write style for screen_cfg_dev_cb_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_top(ui->screen_cfg_dev_cb_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_dev_cb_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_dev_cb_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_dev_cb_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_dev_cb_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_dev_cb_1, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_dev_cb_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_dev_cb_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_dev_cb_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_dev_cb_1, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_cb_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_dev_cb_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_dev_cb_1, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_all(ui->screen_cfg_dev_cb_1, 3, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_dev_cb_1, 5, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_dev_cb_1, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_dev_cb_1, lv_color_hex(0x44D7B6), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_dev_cb_1, LV_BORDER_SIDE_FULL, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_dev_cb_1, 25, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_cb_1, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_dev_cb_1, lv_color_hex(0xffffff), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_dev_cb_1, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_cb_2
    ui->screen_cfg_dev_cb_2 = lv_checkbox_create(ui->screen_cfg_dev_cont_6);
    lv_obj_set_pos(ui->screen_cfg_dev_cb_2, 250, 105);
    lv_checkbox_set_text(ui->screen_cfg_dev_cb_2, "传感器监测(默认不启用)");

    //Write style for screen_cfg_dev_cb_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_top(ui->screen_cfg_dev_cb_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_dev_cb_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_dev_cb_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_dev_cb_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_dev_cb_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_dev_cb_2, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_dev_cb_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_dev_cb_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_dev_cb_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_dev_cb_2, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_cb_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_dev_cb_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_dev_cb_2, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_pad_all(ui->screen_cfg_dev_cb_2, 3, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_dev_cb_2, 5, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_cfg_dev_cb_2, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_cfg_dev_cb_2, lv_color_hex(0x44D7B6), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_cfg_dev_cb_2, LV_BORDER_SIDE_FULL, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_dev_cb_2, 25, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_cb_2, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_dev_cb_2, lv_color_hex(0xffffff), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_dev_cb_2, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_datetext_1
    ui->screen_cfg_dev_datetext_1 = lv_label_create(ui->screen_cfg_dev);
    lv_obj_set_pos(ui->screen_cfg_dev_datetext_1, 912, 16);
    lv_obj_set_size(ui->screen_cfg_dev_datetext_1, 130, 36);
    lv_label_set_text(ui->screen_cfg_dev_datetext_1, "2024/04/22");
    lv_obj_set_style_text_align(ui->screen_cfg_dev_datetext_1, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_add_flag(ui->screen_cfg_dev_datetext_1, LV_OBJ_FLAG_CLICKABLE);
    lv_obj_add_event_cb(ui->screen_cfg_dev_datetext_1, screen_cfg_dev_datetext_1_event_handler, LV_EVENT_ALL, NULL);

    //Write style for screen_cfg_dev_datetext_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_cfg_dev_datetext_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_dev_datetext_1, &lv_font_AlibabaPuHuiTiRegular_18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_dev_datetext_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_dev_datetext_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_dev_datetext_1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_datetext_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_dev_datetext_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_dev_datetext_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_dev_datetext_1, 9, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_dev_datetext_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_dev_datetext_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_dev_datetext_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_img_63
    ui->screen_cfg_dev_img_63 = lv_image_create(ui->screen_cfg_dev);
    lv_obj_set_pos(ui->screen_cfg_dev_img_63, 43, 13);
    lv_obj_set_size(ui->screen_cfg_dev_img_63, 184, 56);
    lv_obj_add_flag(ui->screen_cfg_dev_img_63, LV_OBJ_FLAG_CLICKABLE);
#if LV_USE_GUIDER_SIMULATOR
    lv_image_set_src(ui->screen_cfg_dev_img_63, "D:\\A\\xw_smart_screen");
#else
    lv_image_set_src(ui->screen_cfg_dev_img_63, "F:/.bin");
#endif
    lv_image_set_pivot(ui->screen_cfg_dev_img_63, 50,50);
    lv_image_set_rotation(ui->screen_cfg_dev_img_63, 0);

    //Write style for screen_cfg_dev_img_63, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_cfg_dev_img_63, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_cfg_dev_img_63, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_digital_clock_1
    static bool screen_cfg_dev_digital_clock_1_timer_enabled = false;
    ui->screen_cfg_dev_digital_clock_1 = lv_label_create(ui->screen_cfg_dev);
    lv_obj_set_pos(ui->screen_cfg_dev_digital_clock_1, 1042, 16);
    lv_obj_set_size(ui->screen_cfg_dev_digital_clock_1, 130, 36);
    lv_label_set_text(ui->screen_cfg_dev_digital_clock_1, "11:25");
    if (!screen_cfg_dev_digital_clock_1_timer_enabled) {
        lv_timer_create(screen_cfg_dev_digital_clock_1_timer, 1000, NULL);
        screen_cfg_dev_digital_clock_1_timer_enabled = true;
    }

    //Write style for screen_cfg_dev_digital_clock_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_radius(ui->screen_cfg_dev_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_dev_digital_clock_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_dev_digital_clock_1, &lv_font_AlibabaPuHuiTiRegular_18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_dev_digital_clock_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_cfg_dev_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_dev_digital_clock_1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_cfg_dev_digital_clock_1, 9, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_cfg_dev_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_cfg_dev_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_cfg_dev_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_dev_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_btn_1
    ui->screen_cfg_dev_btn_1 = lv_button_create(ui->screen_cfg_dev);
    lv_obj_set_pos(ui->screen_cfg_dev_btn_1, 1098, 14);
    lv_obj_set_size(ui->screen_cfg_dev_btn_1, 44, 44);
    ui->screen_cfg_dev_btn_1_label = lv_label_create(ui->screen_cfg_dev_btn_1);
    lv_label_set_text(ui->screen_cfg_dev_btn_1_label, "");
    lv_label_set_long_mode(ui->screen_cfg_dev_btn_1_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_dev_btn_1_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_dev_btn_1, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_dev_btn_1_label, LV_PCT(100));

    //Write style for screen_cfg_dev_btn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_dev_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_dev_btn_1, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_dev_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_cfg_dev_btn_1, &_icon_setup_RGB565A8_44x44, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_cfg_dev_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_cfg_dev_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_dev_btn_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_dev_btn_1, &lv_font_AlibabaPuHuiTiRegular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_dev_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_dev_btn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_img_13
    ui->screen_cfg_dev_img_13 = lv_image_create(ui->screen_cfg_dev);
    lv_obj_set_pos(ui->screen_cfg_dev_img_13, 1157, 14);
    lv_obj_set_size(ui->screen_cfg_dev_img_13, 44, 44);
    lv_obj_add_flag(ui->screen_cfg_dev_img_13, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_cfg_dev_img_13, &_icon_device_RGB565A8_44x44);
    lv_image_set_pivot(ui->screen_cfg_dev_img_13, 50,50);
    lv_image_set_rotation(ui->screen_cfg_dev_img_13, 0);

    //Write style for screen_cfg_dev_img_13, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_cfg_dev_img_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_cfg_dev_img_13, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_btn_4
    ui->screen_cfg_dev_btn_4 = lv_button_create(ui->screen_cfg_dev);
    lv_obj_set_pos(ui->screen_cfg_dev_btn_4, 1070, 91);
    lv_obj_set_size(ui->screen_cfg_dev_btn_4, 150, 42);
    ui->screen_cfg_dev_btn_4_label = lv_label_create(ui->screen_cfg_dev_btn_4);
    lv_label_set_text(ui->screen_cfg_dev_btn_4_label, "门锁控制");
    lv_label_set_long_mode(ui->screen_cfg_dev_btn_4_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_dev_btn_4_label, LV_ALIGN_LEFT_MID, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_dev_btn_4, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_dev_btn_4_label, LV_PCT(100));

    //Write style for screen_cfg_dev_btn_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_btn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_dev_btn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_dev_btn_4, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_dev_btn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_dev_btn_4, lv_color_hex(0x758AA6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_dev_btn_4, &lv_font_AlibabaPuHuiTiRegular_34, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_dev_btn_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_dev_btn_4, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_img_14
    ui->screen_cfg_dev_img_14 = lv_image_create(ui->screen_cfg_dev);
    lv_obj_set_pos(ui->screen_cfg_dev_img_14, 1215, 14);
    lv_obj_set_size(ui->screen_cfg_dev_img_14, 44, 44);
    lv_obj_add_flag(ui->screen_cfg_dev_img_14, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_cfg_dev_img_14, &_icon_signal_RGB565A8_44x44);
    lv_image_set_pivot(ui->screen_cfg_dev_img_14, 50,50);
    lv_image_set_rotation(ui->screen_cfg_dev_img_14, 0);

    //Write style for screen_cfg_dev_img_14, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_cfg_dev_img_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_cfg_dev_img_14, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_img_15
    ui->screen_cfg_dev_img_15 = lv_image_create(ui->screen_cfg_dev);
    lv_obj_set_pos(ui->screen_cfg_dev_img_15, 1215, 14);
    lv_obj_set_size(ui->screen_cfg_dev_img_15, 44, 44);
    lv_obj_add_flag(ui->screen_cfg_dev_img_15, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_cfg_dev_img_15, &_icon_signal_n_RGB565A8_44x44);
    lv_image_set_pivot(ui->screen_cfg_dev_img_15, 50,50);
    lv_image_set_rotation(ui->screen_cfg_dev_img_15, 0);

    //Write style for screen_cfg_dev_img_15, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_cfg_dev_img_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_cfg_dev_img_15, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_btn_2
    ui->screen_cfg_dev_btn_2 = lv_button_create(ui->screen_cfg_dev);
    lv_obj_set_pos(ui->screen_cfg_dev_btn_2, 891, 91);
    lv_obj_set_size(ui->screen_cfg_dev_btn_2, 147, 42);
    ui->screen_cfg_dev_btn_2_label = lv_label_create(ui->screen_cfg_dev_btn_2);
    lv_label_set_text(ui->screen_cfg_dev_btn_2_label, "报警设置");
    lv_label_set_long_mode(ui->screen_cfg_dev_btn_2_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_dev_btn_2_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_dev_btn_2, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_dev_btn_2_label, LV_PCT(100));

    //Write style for screen_cfg_dev_btn_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_dev_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_dev_btn_2, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_dev_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_dev_btn_2, lv_color_hex(0x758AA6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_dev_btn_2, &lv_font_AlibabaPuHuiTiRegular_34, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_dev_btn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_dev_btn_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_btn_5
    ui->screen_cfg_dev_btn_5 = lv_button_create(ui->screen_cfg_dev);
    lv_obj_set_pos(ui->screen_cfg_dev_btn_5, 48, 100);
    lv_obj_set_size(ui->screen_cfg_dev_btn_5, 44, 44);
    ui->screen_cfg_dev_btn_5_label = lv_label_create(ui->screen_cfg_dev_btn_5);
    lv_label_set_text(ui->screen_cfg_dev_btn_5_label, "");
    lv_label_set_long_mode(ui->screen_cfg_dev_btn_5_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_cfg_dev_btn_5_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_cfg_dev_btn_5, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_cfg_dev_btn_5_label, LV_PCT(100));

    //Write style for screen_cfg_dev_btn_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_btn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_cfg_dev_btn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_dev_btn_5, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_dev_btn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_cfg_dev_btn_5, &_icon_reture_RGB565A8_44x44, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_cfg_dev_btn_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_cfg_dev_btn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_cfg_dev_btn_5, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_cfg_dev_btn_5, &lv_font_AlibabaPuHuiTiRegular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_cfg_dev_btn_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_cfg_dev_btn_5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_line_1
    ui->screen_cfg_dev_line_1 = lv_line_create(ui->screen_cfg_dev);
    lv_obj_set_pos(ui->screen_cfg_dev_line_1, 751, 143);
    lv_obj_set_size(ui->screen_cfg_dev_line_1, 40, 7);
    static lv_point_precise_t screen_cfg_dev_line_1[] = {{0, 0},{40, 0}};
    lv_line_set_points(ui->screen_cfg_dev_line_1, screen_cfg_dev_line_1, 2);

    //Write style for screen_cfg_dev_line_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_cfg_dev_line_1, 7, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_cfg_dev_line_1, lv_color_hex(0x44D7B6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_cfg_dev_line_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_cfg_dev_line_1, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_img_74
    ui->screen_cfg_dev_img_74 = lv_image_create(ui->screen_cfg_dev);
    lv_obj_set_pos(ui->screen_cfg_dev_img_74, 82, 696);
    lv_obj_set_size(ui->screen_cfg_dev_img_74, 20, 20);
    lv_obj_add_flag(ui->screen_cfg_dev_img_74, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_cfg_dev_img_74, &_icon_litle_fengshan_RGB565A8_20x20);
    lv_image_set_pivot(ui->screen_cfg_dev_img_74, 50,50);
    lv_image_set_rotation(ui->screen_cfg_dev_img_74, 0);

    //Write style for screen_cfg_dev_img_74, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_cfg_dev_img_74, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_cfg_dev_img_74, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_cfg_dev_slider_4
    ui->screen_cfg_dev_slider_4 = lv_slider_create(ui->screen_cfg_dev);
    lv_obj_set_pos(ui->screen_cfg_dev_slider_4, 82, 756);
    lv_obj_set_size(ui->screen_cfg_dev_slider_4, 514, 8);
    lv_slider_set_range(ui->screen_cfg_dev_slider_4, 0, 100);
    lv_slider_set_mode(ui->screen_cfg_dev_slider_4, LV_SLIDER_MODE_NORMAL);
    lv_slider_set_value(ui->screen_cfg_dev_slider_4, 50, LV_ANIM_OFF);

    //Write style for screen_cfg_dev_slider_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_slider_4, 60, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_dev_slider_4, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_dev_slider_4, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_dev_slider_4, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui->screen_cfg_dev_slider_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_cfg_dev_slider_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_cfg_dev_slider_4, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_slider_4, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_dev_slider_4, lv_color_hex(0x44D7B6), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_dev_slider_4, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_dev_slider_4, 8, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write style for screen_cfg_dev_slider_4, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_cfg_dev_slider_4, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_cfg_dev_slider_4, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_cfg_dev_slider_4, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_cfg_dev_slider_4, 4, LV_PART_KNOB|LV_STATE_DEFAULT);

    //The custom code of screen_cfg_dev.


    //Update current screen layout.
    lv_obj_update_layout(ui->screen_cfg_dev);

    //Init events for screen.
    events_init_screen_cfg_dev(ui);
}
