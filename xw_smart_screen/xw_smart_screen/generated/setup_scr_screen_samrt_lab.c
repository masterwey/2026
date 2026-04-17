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



int screen_samrt_lab_digital_clock_1_min_value = 25;
int screen_samrt_lab_digital_clock_1_hour_value = 11;
int screen_samrt_lab_digital_clock_1_sec_value = 50;
void setup_scr_screen_samrt_lab(lv_ui *ui)
{
    //Write codes screen_samrt_lab
    ui->screen_samrt_lab = lv_obj_create(NULL);
    lv_obj_set_size(ui->screen_samrt_lab, 1280, 800);
    lv_obj_set_scrollbar_mode(ui->screen_samrt_lab, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_samrt_lab, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_samrt_lab, lv_color_hex(0x1B2C42), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_samrt_lab, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_cont_screen_smart_lab
    ui->screen_samrt_lab_cont_screen_smart_lab = lv_obj_create(ui->screen_samrt_lab);
    lv_obj_set_pos(ui->screen_samrt_lab_cont_screen_smart_lab, 0, 0);
    lv_obj_set_size(ui->screen_samrt_lab_cont_screen_smart_lab, 1280, 800);
    lv_obj_set_scrollbar_mode(ui->screen_samrt_lab_cont_screen_smart_lab, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_samrt_lab_cont_screen_smart_lab, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_cont_screen_smart_lab, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_cont_screen_smart_lab, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_cont_screen_smart_lab, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_samrt_lab_cont_screen_smart_lab, lv_color_hex(0x1B2C42), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_samrt_lab_cont_screen_smart_lab, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_cont_screen_smart_lab, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_cont_screen_smart_lab, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_cont_screen_smart_lab, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_cont_screen_smart_lab, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_cont_screen_smart_lab, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_img_63
    ui->screen_samrt_lab_img_63 = lv_image_create(ui->screen_samrt_lab_cont_screen_smart_lab);
    lv_obj_set_pos(ui->screen_samrt_lab_img_63, 48, 13);
    lv_obj_set_size(ui->screen_samrt_lab_img_63, 184, 56);
    lv_obj_add_flag(ui->screen_samrt_lab_img_63, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_pivot(ui->screen_samrt_lab_img_63, 50,50);
    lv_image_set_rotation(ui->screen_samrt_lab_img_63, 0);

    //Write style for screen_samrt_lab_img_63, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_samrt_lab_img_63, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_samrt_lab_img_63, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_cont_5
    ui->screen_samrt_lab_cont_5 = lv_obj_create(ui->screen_samrt_lab_cont_screen_smart_lab);
    lv_obj_set_pos(ui->screen_samrt_lab_cont_5, 972, 77);
    lv_obj_set_size(ui->screen_samrt_lab_cont_5, 286, 329);
    lv_obj_set_scrollbar_mode(ui->screen_samrt_lab_cont_5, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_samrt_lab_cont_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_cont_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_cont_5, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_cont_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_samrt_lab_cont_5, lv_color_hex(0x2A405C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_samrt_lab_cont_5, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_cont_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_cont_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_cont_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_cont_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_cont_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_img_46
    ui->screen_samrt_lab_img_46 = lv_image_create(ui->screen_samrt_lab_cont_5);
    lv_obj_set_pos(ui->screen_samrt_lab_img_46, 27, 30);
    lv_obj_set_size(ui->screen_samrt_lab_img_46, 52, 52);
    lv_obj_add_flag(ui->screen_samrt_lab_img_46, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_samrt_lab_img_46, &_icon_fengji_RGB565A8_52x52);
    lv_image_set_pivot(ui->screen_samrt_lab_img_46, 50,50);
    lv_image_set_rotation(ui->screen_samrt_lab_img_46, 0);

    //Write style for screen_samrt_lab_img_46, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_samrt_lab_img_46, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_samrt_lab_img_46, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_80
    ui->screen_samrt_lab_label_80 = lv_label_create(ui->screen_samrt_lab_cont_5);
    lv_obj_set_pos(ui->screen_samrt_lab_label_80, 80, 43);
    lv_obj_set_size(ui->screen_samrt_lab_label_80, 130, 33);
    lv_label_set_text(ui->screen_samrt_lab_label_80, "风机");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_80, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_80, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_80, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_80, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_80, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_80, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_80, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_80, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_80, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_80, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_80, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_80, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_80, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_80, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_80, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_80, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_79
    ui->screen_samrt_lab_label_79 = lv_label_create(ui->screen_samrt_lab_cont_5);
    lv_obj_set_pos(ui->screen_samrt_lab_label_79, 201, 294);
    lv_obj_set_size(ui->screen_samrt_lab_label_79, 61, 30);
    lv_label_set_text(ui->screen_samrt_lab_label_79, "RPM");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_79, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_79, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_79, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_79, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_79, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_79, &lv_font_AlibabaPuHuiTiRegular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_79, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_79, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_79, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_79, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_79, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_79, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_79, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_79, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_79, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_79, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_img_45
    ui->screen_samrt_lab_img_45 = lv_image_create(ui->screen_samrt_lab_cont_5);
    lv_obj_set_pos(ui->screen_samrt_lab_img_45, 49, 89);
    lv_obj_set_size(ui->screen_samrt_lab_img_45, 200, 200);
    lv_obj_add_flag(ui->screen_samrt_lab_img_45, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_samrt_lab_img_45, &_0_RGB565A8_200x200);
    lv_image_set_pivot(ui->screen_samrt_lab_img_45, 100,100);
    lv_image_set_rotation(ui->screen_samrt_lab_img_45, 0);

    //Write style for screen_samrt_lab_img_45, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_samrt_lab_img_45, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_samrt_lab_img_45, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_78
    ui->screen_samrt_lab_label_78 = lv_label_create(ui->screen_samrt_lab_cont_5);
    lv_obj_set_pos(ui->screen_samrt_lab_label_78, 81, 291);
    lv_obj_set_size(ui->screen_samrt_lab_label_78, 130, 33);
    lv_label_set_text(ui->screen_samrt_lab_label_78, "1000");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_78, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_78, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_78, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_78, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_78, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_78, &lv_font_DINCondBlack_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_78, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_78, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_78, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_78, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_78, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_78, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_78, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_78, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_78, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_78, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_spangroup_2
    ui->screen_samrt_lab_spangroup_2 = lv_spangroup_create(ui->screen_samrt_lab_cont_5);
    lv_obj_set_pos(ui->screen_samrt_lab_spangroup_2, 89, 258);
    lv_obj_set_size(ui->screen_samrt_lab_spangroup_2, 200, 100);
    lv_spangroup_set_align(ui->screen_samrt_lab_spangroup_2, LV_TEXT_ALIGN_LEFT);
    lv_spangroup_set_overflow(ui->screen_samrt_lab_spangroup_2, LV_SPAN_OVERFLOW_CLIP);
    lv_spangroup_set_mode(ui->screen_samrt_lab_spangroup_2, LV_SPAN_MODE_BREAK);
    //create span
    ui->screen_samrt_lab_spangroup_2_span = lv_spangroup_new_span(ui->screen_samrt_lab_spangroup_2);
    lv_span_set_text(ui->screen_samrt_lab_spangroup_2_span, "hello");
    lv_style_set_text_color(lv_span_get_style(ui->screen_samrt_lab_spangroup_2_span), lv_color_hex(0x000000));
    lv_style_set_text_decor(lv_span_get_style(ui->screen_samrt_lab_spangroup_2_span), LV_TEXT_DECOR_NONE);
    lv_style_set_text_font(lv_span_get_style(ui->screen_samrt_lab_spangroup_2_span), &lv_font_montserratMedium_12);

    //Write style state: LV_STATE_DEFAULT for &style_screen_samrt_lab_spangroup_2_main_main_default
    static lv_style_t style_screen_samrt_lab_spangroup_2_main_main_default;
    ui_init_style(&style_screen_samrt_lab_spangroup_2_main_main_default);

    lv_style_set_border_width(&style_screen_samrt_lab_spangroup_2_main_main_default, 0);
    lv_style_set_radius(&style_screen_samrt_lab_spangroup_2_main_main_default, 0);
    lv_style_set_bg_opa(&style_screen_samrt_lab_spangroup_2_main_main_default, 0);
    lv_style_set_pad_top(&style_screen_samrt_lab_spangroup_2_main_main_default, 0);
    lv_style_set_pad_right(&style_screen_samrt_lab_spangroup_2_main_main_default, 0);
    lv_style_set_pad_bottom(&style_screen_samrt_lab_spangroup_2_main_main_default, 0);
    lv_style_set_pad_left(&style_screen_samrt_lab_spangroup_2_main_main_default, 0);
    lv_style_set_shadow_width(&style_screen_samrt_lab_spangroup_2_main_main_default, 0);
    lv_obj_add_style(ui->screen_samrt_lab_spangroup_2, &style_screen_samrt_lab_spangroup_2_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_spangroup_refr_mode(ui->screen_samrt_lab_spangroup_2);

    //Write codes screen_samrt_lab_cont_3
    ui->screen_samrt_lab_cont_3 = lv_obj_create(ui->screen_samrt_lab_cont_screen_smart_lab);
    lv_obj_set_pos(ui->screen_samrt_lab_cont_3, 654, 447);
    lv_obj_set_size(ui->screen_samrt_lab_cont_3, 286, 329);
    lv_obj_set_scrollbar_mode(ui->screen_samrt_lab_cont_3, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_samrt_lab_cont_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_cont_3, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_cont_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_samrt_lab_cont_3, lv_color_hex(0x2A405C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_samrt_lab_cont_3, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_img_42
    ui->screen_samrt_lab_img_42 = lv_image_create(ui->screen_samrt_lab_cont_3);
    lv_obj_set_pos(ui->screen_samrt_lab_img_42, 26, 29);
    lv_obj_set_size(ui->screen_samrt_lab_img_42, 52, 52);
    lv_obj_add_flag(ui->screen_samrt_lab_img_42, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_samrt_lab_img_42, &_icon_alarm_RGB565A8_52x52);
    lv_image_set_pivot(ui->screen_samrt_lab_img_42, 50,50);
    lv_image_set_rotation(ui->screen_samrt_lab_img_42, 0);

    //Write style for screen_samrt_lab_img_42, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_samrt_lab_img_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_samrt_lab_img_42, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_69
    ui->screen_samrt_lab_label_69 = lv_label_create(ui->screen_samrt_lab_cont_3);
    lv_obj_set_pos(ui->screen_samrt_lab_label_69, 80, 43);
    lv_obj_set_size(ui->screen_samrt_lab_label_69, 130, 33);
    lv_label_set_text(ui->screen_samrt_lab_label_69, "声光报警器");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_69, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_69, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_69, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_69, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_69, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_69, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_69, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_69, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_69, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_69, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_69, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_69, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_69, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_69, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_69, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_69, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_img_41
    ui->screen_samrt_lab_img_41 = lv_image_create(ui->screen_samrt_lab_cont_3);
    lv_obj_set_pos(ui->screen_samrt_lab_img_41, 98, 121);
    lv_obj_set_size(ui->screen_samrt_lab_img_41, 100, 100);
    lv_obj_add_flag(ui->screen_samrt_lab_img_41, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_samrt_lab_img_41, &_img_alarmlamp_close_RGB565A8_100x100);
    lv_image_set_pivot(ui->screen_samrt_lab_img_41, 50,50);
    lv_image_set_rotation(ui->screen_samrt_lab_img_41, 0);

    //Write style for screen_samrt_lab_img_41, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_samrt_lab_img_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_samrt_lab_img_41, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_img_40
    ui->screen_samrt_lab_img_40 = lv_image_create(ui->screen_samrt_lab_cont_3);
    lv_obj_set_pos(ui->screen_samrt_lab_img_40, 97, 256);
    lv_obj_set_size(ui->screen_samrt_lab_img_40, 23, 23);
    lv_obj_add_flag(ui->screen_samrt_lab_img_40, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_samrt_lab_img_40, &_icon_crectangle_close_RGB565A8_23x23);
    lv_image_set_pivot(ui->screen_samrt_lab_img_40, 50,50);
    lv_image_set_rotation(ui->screen_samrt_lab_img_40, 0);

    //Write style for screen_samrt_lab_img_40, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_samrt_lab_img_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_samrt_lab_img_40, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_68
    ui->screen_samrt_lab_label_68 = lv_label_create(ui->screen_samrt_lab_cont_3);
    lv_obj_set_pos(ui->screen_samrt_lab_label_68, 135, 251);
    lv_obj_set_size(ui->screen_samrt_lab_label_68, 60, 33);
    lv_label_set_text(ui->screen_samrt_lab_label_68, "开启");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_68, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_68, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_68, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_68, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_68, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_68, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_68, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_img_39
    ui->screen_samrt_lab_img_39 = lv_image_create(ui->screen_samrt_lab_cont_3);
    lv_obj_set_pos(ui->screen_samrt_lab_img_39, 98, 121);
    lv_obj_set_size(ui->screen_samrt_lab_img_39, 100, 100);
    lv_obj_add_flag(ui->screen_samrt_lab_img_39, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui->screen_samrt_lab_img_39, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_samrt_lab_img_39, &_img_alarmlamp_open_RGB565A8_100x100);
    lv_image_set_pivot(ui->screen_samrt_lab_img_39, 50,50);
    lv_image_set_rotation(ui->screen_samrt_lab_img_39, 0);

    //Write style for screen_samrt_lab_img_39, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_samrt_lab_img_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_samrt_lab_img_39, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_img_38
    ui->screen_samrt_lab_img_38 = lv_image_create(ui->screen_samrt_lab_cont_3);
    lv_obj_set_pos(ui->screen_samrt_lab_img_38, 97, 256);
    lv_obj_set_size(ui->screen_samrt_lab_img_38, 23, 23);
    lv_obj_add_flag(ui->screen_samrt_lab_img_38, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui->screen_samrt_lab_img_38, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_samrt_lab_img_38, &_icon_crectangle_open_RGB565A8_23x23);
    lv_image_set_pivot(ui->screen_samrt_lab_img_38, 50,50);
    lv_image_set_rotation(ui->screen_samrt_lab_img_38, 0);

    //Write style for screen_samrt_lab_img_38, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_samrt_lab_img_38, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_samrt_lab_img_38, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_cont_temo_hum_sum
    ui->screen_samrt_lab_cont_temo_hum_sum = lv_obj_create(ui->screen_samrt_lab_cont_screen_smart_lab);
    lv_obj_set_pos(ui->screen_samrt_lab_cont_temo_hum_sum, 654, 77);
    lv_obj_set_size(ui->screen_samrt_lab_cont_temo_hum_sum, 286, 152);
    lv_obj_set_scrollbar_mode(ui->screen_samrt_lab_cont_temo_hum_sum, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_samrt_lab_cont_temo_hum_sum, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_cont_temo_hum_sum, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_cont_temo_hum_sum, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_cont_temo_hum_sum, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_cont_temo_hum_sum, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_cont_temo_hum_sum, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_cont_temo_hum_sum, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_cont_temo_hum_sum, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_cont_temo_hum_sum, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_cont_15
    ui->screen_samrt_lab_cont_15 = lv_obj_create(ui->screen_samrt_lab_cont_temo_hum_sum);
    lv_obj_set_pos(ui->screen_samrt_lab_cont_15, 0, 0);
    lv_obj_set_size(ui->screen_samrt_lab_cont_15, 286, 152);
    lv_obj_set_scrollbar_mode(ui->screen_samrt_lab_cont_15, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_samrt_lab_cont_15, LV_OBJ_FLAG_HIDDEN);
    lv_obj_remove_flag(ui->screen_samrt_lab_cont_15, LV_OBJ_FLAG_GESTURE_BUBBLE);

    //Write style for screen_samrt_lab_cont_15, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_cont_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_cont_15, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_cont_15, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_samrt_lab_cont_15, lv_color_hex(0x2A405C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_samrt_lab_cont_15, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_cont_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_cont_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_cont_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_cont_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_cont_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_img_65
    ui->screen_samrt_lab_img_65 = lv_image_create(ui->screen_samrt_lab_cont_15);
    lv_obj_set_pos(ui->screen_samrt_lab_img_65, 27, 23);
    lv_obj_set_size(ui->screen_samrt_lab_img_65, 52, 52);
    lv_obj_add_flag(ui->screen_samrt_lab_img_65, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_samrt_lab_img_65, &_icon_wenshidu_RGB565A8_52x52);
    lv_image_set_pivot(ui->screen_samrt_lab_img_65, 50,50);
    lv_image_set_rotation(ui->screen_samrt_lab_img_65, 0);

    //Write style for screen_samrt_lab_img_65, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_samrt_lab_img_65, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_samrt_lab_img_65, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_117
    ui->screen_samrt_lab_label_117 = lv_label_create(ui->screen_samrt_lab_cont_15);
    lv_obj_set_pos(ui->screen_samrt_lab_label_117, 87, 32);
    lv_obj_set_size(ui->screen_samrt_lab_label_117, 130, 33);
    lv_label_set_text(ui->screen_samrt_lab_label_117, "温湿度");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_117, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_117, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_117, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_117, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_117, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_117, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_117, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_117, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_117, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_117, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_117, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_117, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_117, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_117, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_117, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_117, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_116
    ui->screen_samrt_lab_label_116 = lv_label_create(ui->screen_samrt_lab_cont_15);
    lv_obj_set_pos(ui->screen_samrt_lab_label_116, 53, 96);
    lv_obj_set_size(ui->screen_samrt_lab_label_116, 60, 35);
    lv_label_set_text(ui->screen_samrt_lab_label_116, "33.4");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_116, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_116, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_116, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_116, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_116, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_116, &lv_font_DINCondBlack_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_116, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_116, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_116, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_116, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_116, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_116, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_116, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_116, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_116, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_116, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_115
    ui->screen_samrt_lab_label_115 = lv_label_create(ui->screen_samrt_lab_cont_15);
    lv_obj_set_pos(ui->screen_samrt_lab_label_115, 102, 102);
    lv_obj_set_size(ui->screen_samrt_lab_label_115, 16, 22);
    lv_label_set_text(ui->screen_samrt_lab_label_115, "℃");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_115, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_115, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_115, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_115, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_115, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_115, &lv_font_AlibabaPuHuiTiRegular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_115, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_115, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_115, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_115, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_115, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_115, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_115, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_115, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_115, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_115, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_img_64
    ui->screen_samrt_lab_img_64 = lv_image_create(ui->screen_samrt_lab_cont_15);
    lv_obj_set_pos(ui->screen_samrt_lab_img_64, 216, 27);
    lv_obj_set_size(ui->screen_samrt_lab_img_64, 50, 50);
    lv_obj_add_flag(ui->screen_samrt_lab_img_64, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_samrt_lab_img_64, &_img_label_RGB565A8_50x50);
    lv_image_set_pivot(ui->screen_samrt_lab_img_64, 50,50);
    lv_image_set_rotation(ui->screen_samrt_lab_img_64, 0);

    //Write style for screen_samrt_lab_img_64, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_samrt_lab_img_64, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_samrt_lab_img_64, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_114
    ui->screen_samrt_lab_label_114 = lv_label_create(ui->screen_samrt_lab_cont_15);
    lv_obj_set_pos(ui->screen_samrt_lab_label_114, 225, 41);
    lv_obj_set_size(ui->screen_samrt_lab_label_114, 32, 26);
    lv_label_set_text(ui->screen_samrt_lab_label_114, "1-1");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_114, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_114, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_114, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_114, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_114, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_114, &lv_font_AlibabaPuHuiTiRegular_19, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_114, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_114, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_114, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_114, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_114, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_114, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_114, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_114, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_114, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_114, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_113
    ui->screen_samrt_lab_label_113 = lv_label_create(ui->screen_samrt_lab_cont_15);
    lv_obj_set_pos(ui->screen_samrt_lab_label_113, 64, 73);
    lv_obj_set_size(ui->screen_samrt_lab_label_113, 32, 22);
    lv_label_set_text(ui->screen_samrt_lab_label_113, "温度");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_113, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_113, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_113, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_113, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_113, lv_color_hex(0x8199B9), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_113, &lv_font_DINCondBlack_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_113, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_113, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_113, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_113, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_113, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_113, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_113, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_113, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_113, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_113, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_112
    ui->screen_samrt_lab_label_112 = lv_label_create(ui->screen_samrt_lab_cont_15);
    lv_obj_set_pos(ui->screen_samrt_lab_label_112, 177, 73);
    lv_obj_set_size(ui->screen_samrt_lab_label_112, 32, 22);
    lv_label_set_text(ui->screen_samrt_lab_label_112, "湿度");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_112, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_112, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_112, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_112, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_112, lv_color_hex(0x8199B9), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_112, &lv_font_DINCondBlack_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_112, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_112, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_112, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_112, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_112, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_112, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_112, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_112, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_112, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_112, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_111
    ui->screen_samrt_lab_label_111 = lv_label_create(ui->screen_samrt_lab_cont_15);
    lv_obj_set_pos(ui->screen_samrt_lab_label_111, 168, 96);
    lv_obj_set_size(ui->screen_samrt_lab_label_111, 60, 35);
    lv_label_set_text(ui->screen_samrt_lab_label_111, "33.4");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_111, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_111, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_111, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_111, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_111, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_111, &lv_font_DINCondBlack_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_111, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_111, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_111, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_111, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_111, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_111, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_111, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_111, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_111, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_111, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_110
    ui->screen_samrt_lab_label_110 = lv_label_create(ui->screen_samrt_lab_cont_15);
    lv_obj_set_pos(ui->screen_samrt_lab_label_110, 214, 102);
    lv_obj_set_size(ui->screen_samrt_lab_label_110, 38, 22);
    lv_label_set_text(ui->screen_samrt_lab_label_110, "%RH");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_110, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_110, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_110, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_110, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_110, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_110, &lv_font_AlibabaPuHuiTiRegular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_110, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_110, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_110, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_110, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_110, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_110, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_110, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_110, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_110, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_110, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_cont_16
    ui->screen_samrt_lab_cont_16 = lv_obj_create(ui->screen_samrt_lab_cont_15);
    lv_obj_set_pos(ui->screen_samrt_lab_cont_16, 101, 133);
    lv_obj_set_size(ui->screen_samrt_lab_cont_16, 90, 18);
    lv_obj_set_scrollbar_mode(ui->screen_samrt_lab_cont_16, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_samrt_lab_cont_16, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_cont_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_cont_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_cont_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_cont_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_cont_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_cont_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_cont_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_cont_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_4
    ui->screen_samrt_lab_line_4 = lv_line_create(ui->screen_samrt_lab_cont_16);
    lv_obj_set_pos(ui->screen_samrt_lab_line_4, 5, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_4, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_4[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_4, screen_samrt_lab_line_4, 2);

    //Write style for screen_samrt_lab_line_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_4, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_4, lv_color_hex(0x44D7B6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_4, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_3
    ui->screen_samrt_lab_line_3 = lv_line_create(ui->screen_samrt_lab_cont_16);
    lv_obj_set_pos(ui->screen_samrt_lab_line_3, 30, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_3, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_3[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_3, screen_samrt_lab_line_3, 2);

    //Write style for screen_samrt_lab_line_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_3, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_3, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_3, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_2
    ui->screen_samrt_lab_line_2 = lv_line_create(ui->screen_samrt_lab_cont_16);
    lv_obj_set_pos(ui->screen_samrt_lab_line_2, 55, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_2, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_2[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_2, screen_samrt_lab_line_2, 2);

    //Write style for screen_samrt_lab_line_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_2, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_2, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_2, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_1
    ui->screen_samrt_lab_line_1 = lv_line_create(ui->screen_samrt_lab_cont_16);
    lv_obj_set_pos(ui->screen_samrt_lab_line_1, 80, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_1, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_1[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_1, screen_samrt_lab_line_1, 2);

    //Write style for screen_samrt_lab_line_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_1, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_1, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_1, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_cont_17
    ui->screen_samrt_lab_cont_17 = lv_obj_create(ui->screen_samrt_lab_cont_temo_hum_sum);
    lv_obj_set_pos(ui->screen_samrt_lab_cont_17, 0, 0);
    lv_obj_set_size(ui->screen_samrt_lab_cont_17, 286, 152);
    lv_obj_set_scrollbar_mode(ui->screen_samrt_lab_cont_17, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_samrt_lab_cont_17, LV_OBJ_FLAG_HIDDEN);
    lv_obj_remove_flag(ui->screen_samrt_lab_cont_17, LV_OBJ_FLAG_GESTURE_BUBBLE);

    //Write style for screen_samrt_lab_cont_17, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_cont_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_cont_17, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_cont_17, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_samrt_lab_cont_17, lv_color_hex(0x2A405C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_samrt_lab_cont_17, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_cont_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_cont_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_cont_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_cont_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_cont_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_img_67
    ui->screen_samrt_lab_img_67 = lv_image_create(ui->screen_samrt_lab_cont_17);
    lv_obj_set_pos(ui->screen_samrt_lab_img_67, 27, 23);
    lv_obj_set_size(ui->screen_samrt_lab_img_67, 52, 52);
    lv_obj_add_flag(ui->screen_samrt_lab_img_67, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_samrt_lab_img_67, &_icon_wenshidu_RGB565A8_52x52);
    lv_image_set_pivot(ui->screen_samrt_lab_img_67, 50,50);
    lv_image_set_rotation(ui->screen_samrt_lab_img_67, 0);

    //Write style for screen_samrt_lab_img_67, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_samrt_lab_img_67, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_samrt_lab_img_67, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_125
    ui->screen_samrt_lab_label_125 = lv_label_create(ui->screen_samrt_lab_cont_17);
    lv_obj_set_pos(ui->screen_samrt_lab_label_125, 87, 32);
    lv_obj_set_size(ui->screen_samrt_lab_label_125, 130, 33);
    lv_label_set_text(ui->screen_samrt_lab_label_125, "温湿度");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_125, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_125, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_125, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_125, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_125, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_125, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_125, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_125, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_125, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_125, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_125, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_125, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_125, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_125, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_125, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_125, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_124
    ui->screen_samrt_lab_label_124 = lv_label_create(ui->screen_samrt_lab_cont_17);
    lv_obj_set_pos(ui->screen_samrt_lab_label_124, 53, 96);
    lv_obj_set_size(ui->screen_samrt_lab_label_124, 60, 35);
    lv_label_set_text(ui->screen_samrt_lab_label_124, "33.4");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_124, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_124, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_124, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_124, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_124, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_124, &lv_font_DINCondBlack_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_124, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_124, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_124, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_124, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_124, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_124, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_124, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_124, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_124, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_124, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_123
    ui->screen_samrt_lab_label_123 = lv_label_create(ui->screen_samrt_lab_cont_17);
    lv_obj_set_pos(ui->screen_samrt_lab_label_123, 102, 102);
    lv_obj_set_size(ui->screen_samrt_lab_label_123, 16, 22);
    lv_label_set_text(ui->screen_samrt_lab_label_123, "℃");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_123, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_123, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_123, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_123, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_123, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_123, &lv_font_AlibabaPuHuiTiRegular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_123, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_123, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_123, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_123, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_123, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_123, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_123, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_123, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_123, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_123, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_img_66
    ui->screen_samrt_lab_img_66 = lv_image_create(ui->screen_samrt_lab_cont_17);
    lv_obj_set_pos(ui->screen_samrt_lab_img_66, 216, 27);
    lv_obj_set_size(ui->screen_samrt_lab_img_66, 50, 50);
    lv_obj_add_flag(ui->screen_samrt_lab_img_66, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_samrt_lab_img_66, &_img_label_RGB565A8_50x50);
    lv_image_set_pivot(ui->screen_samrt_lab_img_66, 50,50);
    lv_image_set_rotation(ui->screen_samrt_lab_img_66, 0);

    //Write style for screen_samrt_lab_img_66, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_samrt_lab_img_66, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_samrt_lab_img_66, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_122
    ui->screen_samrt_lab_label_122 = lv_label_create(ui->screen_samrt_lab_cont_17);
    lv_obj_set_pos(ui->screen_samrt_lab_label_122, 225, 41);
    lv_obj_set_size(ui->screen_samrt_lab_label_122, 32, 26);
    lv_label_set_text(ui->screen_samrt_lab_label_122, "1-2");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_122, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_122, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_122, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_122, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_122, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_122, &lv_font_AlibabaPuHuiTiRegular_19, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_122, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_122, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_122, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_122, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_122, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_122, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_122, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_122, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_122, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_122, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_121
    ui->screen_samrt_lab_label_121 = lv_label_create(ui->screen_samrt_lab_cont_17);
    lv_obj_set_pos(ui->screen_samrt_lab_label_121, 64, 73);
    lv_obj_set_size(ui->screen_samrt_lab_label_121, 32, 22);
    lv_label_set_text(ui->screen_samrt_lab_label_121, "温度");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_121, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_121, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_121, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_121, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_121, lv_color_hex(0x8199B9), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_121, &lv_font_DINCondBlack_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_121, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_121, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_121, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_121, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_121, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_121, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_121, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_121, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_121, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_121, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_120
    ui->screen_samrt_lab_label_120 = lv_label_create(ui->screen_samrt_lab_cont_17);
    lv_obj_set_pos(ui->screen_samrt_lab_label_120, 177, 73);
    lv_obj_set_size(ui->screen_samrt_lab_label_120, 32, 22);
    lv_label_set_text(ui->screen_samrt_lab_label_120, "湿度");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_120, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_120, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_120, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_120, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_120, lv_color_hex(0x8199B9), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_120, &lv_font_DINCondBlack_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_120, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_120, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_120, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_120, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_120, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_120, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_120, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_120, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_120, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_120, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_119
    ui->screen_samrt_lab_label_119 = lv_label_create(ui->screen_samrt_lab_cont_17);
    lv_obj_set_pos(ui->screen_samrt_lab_label_119, 168, 96);
    lv_obj_set_size(ui->screen_samrt_lab_label_119, 60, 35);
    lv_label_set_text(ui->screen_samrt_lab_label_119, "33.4");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_119, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_119, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_119, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_119, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_119, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_119, &lv_font_DINCondBlack_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_119, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_119, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_119, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_119, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_119, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_119, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_119, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_119, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_119, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_119, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_118
    ui->screen_samrt_lab_label_118 = lv_label_create(ui->screen_samrt_lab_cont_17);
    lv_obj_set_pos(ui->screen_samrt_lab_label_118, 214, 102);
    lv_obj_set_size(ui->screen_samrt_lab_label_118, 38, 22);
    lv_label_set_text(ui->screen_samrt_lab_label_118, "%RH");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_118, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_118, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_118, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_118, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_118, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_118, &lv_font_AlibabaPuHuiTiRegular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_118, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_118, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_118, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_118, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_118, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_118, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_118, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_118, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_118, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_118, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_cont_18
    ui->screen_samrt_lab_cont_18 = lv_obj_create(ui->screen_samrt_lab_cont_17);
    lv_obj_set_pos(ui->screen_samrt_lab_cont_18, 101, 133);
    lv_obj_set_size(ui->screen_samrt_lab_cont_18, 90, 18);
    lv_obj_set_scrollbar_mode(ui->screen_samrt_lab_cont_18, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_samrt_lab_cont_18, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_cont_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_cont_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_cont_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_cont_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_cont_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_cont_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_cont_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_cont_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_8
    ui->screen_samrt_lab_line_8 = lv_line_create(ui->screen_samrt_lab_cont_18);
    lv_obj_set_pos(ui->screen_samrt_lab_line_8, 5, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_8, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_8[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_8, screen_samrt_lab_line_8, 2);

    //Write style for screen_samrt_lab_line_8, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_8, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_8, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_8, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_8, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_7
    ui->screen_samrt_lab_line_7 = lv_line_create(ui->screen_samrt_lab_cont_18);
    lv_obj_set_pos(ui->screen_samrt_lab_line_7, 30, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_7, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_7[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_7, screen_samrt_lab_line_7, 2);

    //Write style for screen_samrt_lab_line_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_7, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_7, lv_color_hex(0x44D7B6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_7, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_6
    ui->screen_samrt_lab_line_6 = lv_line_create(ui->screen_samrt_lab_cont_18);
    lv_obj_set_pos(ui->screen_samrt_lab_line_6, 55, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_6, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_6[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_6, screen_samrt_lab_line_6, 2);

    //Write style for screen_samrt_lab_line_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_6, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_6, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_6, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_5
    ui->screen_samrt_lab_line_5 = lv_line_create(ui->screen_samrt_lab_cont_18);
    lv_obj_set_pos(ui->screen_samrt_lab_line_5, 80, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_5, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_5[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_5, screen_samrt_lab_line_5, 2);

    //Write style for screen_samrt_lab_line_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_5, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_5, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_5, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_cont_19
    ui->screen_samrt_lab_cont_19 = lv_obj_create(ui->screen_samrt_lab_cont_temo_hum_sum);
    lv_obj_set_pos(ui->screen_samrt_lab_cont_19, 0, 0);
    lv_obj_set_size(ui->screen_samrt_lab_cont_19, 286, 152);
    lv_obj_set_scrollbar_mode(ui->screen_samrt_lab_cont_19, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_samrt_lab_cont_19, LV_OBJ_FLAG_HIDDEN);
    lv_obj_remove_flag(ui->screen_samrt_lab_cont_19, LV_OBJ_FLAG_GESTURE_BUBBLE);

    //Write style for screen_samrt_lab_cont_19, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_cont_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_cont_19, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_cont_19, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_samrt_lab_cont_19, lv_color_hex(0x2A405C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_samrt_lab_cont_19, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_cont_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_cont_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_cont_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_cont_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_cont_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_img_69
    ui->screen_samrt_lab_img_69 = lv_image_create(ui->screen_samrt_lab_cont_19);
    lv_obj_set_pos(ui->screen_samrt_lab_img_69, 27, 23);
    lv_obj_set_size(ui->screen_samrt_lab_img_69, 52, 52);
    lv_obj_add_flag(ui->screen_samrt_lab_img_69, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_samrt_lab_img_69, &_icon_wenshidu_RGB565A8_52x52);
    lv_image_set_pivot(ui->screen_samrt_lab_img_69, 50,50);
    lv_image_set_rotation(ui->screen_samrt_lab_img_69, 0);

    //Write style for screen_samrt_lab_img_69, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_samrt_lab_img_69, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_samrt_lab_img_69, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_133
    ui->screen_samrt_lab_label_133 = lv_label_create(ui->screen_samrt_lab_cont_19);
    lv_obj_set_pos(ui->screen_samrt_lab_label_133, 87, 32);
    lv_obj_set_size(ui->screen_samrt_lab_label_133, 130, 33);
    lv_label_set_text(ui->screen_samrt_lab_label_133, "温湿度");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_133, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_133, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_133, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_133, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_133, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_133, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_133, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_133, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_133, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_133, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_133, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_133, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_133, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_133, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_133, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_133, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_132
    ui->screen_samrt_lab_label_132 = lv_label_create(ui->screen_samrt_lab_cont_19);
    lv_obj_set_pos(ui->screen_samrt_lab_label_132, 53, 96);
    lv_obj_set_size(ui->screen_samrt_lab_label_132, 60, 35);
    lv_label_set_text(ui->screen_samrt_lab_label_132, "33.4");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_132, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_132, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_132, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_132, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_132, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_132, &lv_font_DINCondBlack_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_132, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_132, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_132, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_132, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_132, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_132, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_132, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_132, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_132, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_132, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_131
    ui->screen_samrt_lab_label_131 = lv_label_create(ui->screen_samrt_lab_cont_19);
    lv_obj_set_pos(ui->screen_samrt_lab_label_131, 102, 102);
    lv_obj_set_size(ui->screen_samrt_lab_label_131, 16, 22);
    lv_label_set_text(ui->screen_samrt_lab_label_131, "℃");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_131, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_131, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_131, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_131, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_131, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_131, &lv_font_AlibabaPuHuiTiRegular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_131, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_131, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_131, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_131, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_131, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_131, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_131, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_131, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_131, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_131, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_img_68
    ui->screen_samrt_lab_img_68 = lv_image_create(ui->screen_samrt_lab_cont_19);
    lv_obj_set_pos(ui->screen_samrt_lab_img_68, 216, 27);
    lv_obj_set_size(ui->screen_samrt_lab_img_68, 50, 50);
    lv_obj_add_flag(ui->screen_samrt_lab_img_68, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_samrt_lab_img_68, &_img_label_RGB565A8_50x50);
    lv_image_set_pivot(ui->screen_samrt_lab_img_68, 50,50);
    lv_image_set_rotation(ui->screen_samrt_lab_img_68, 0);

    //Write style for screen_samrt_lab_img_68, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_samrt_lab_img_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_samrt_lab_img_68, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_130
    ui->screen_samrt_lab_label_130 = lv_label_create(ui->screen_samrt_lab_cont_19);
    lv_obj_set_pos(ui->screen_samrt_lab_label_130, 225, 41);
    lv_obj_set_size(ui->screen_samrt_lab_label_130, 32, 26);
    lv_label_set_text(ui->screen_samrt_lab_label_130, "1-3");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_130, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_130, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_130, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_130, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_130, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_130, &lv_font_AlibabaPuHuiTiRegular_19, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_130, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_130, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_130, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_130, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_130, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_130, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_130, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_130, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_130, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_130, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_129
    ui->screen_samrt_lab_label_129 = lv_label_create(ui->screen_samrt_lab_cont_19);
    lv_obj_set_pos(ui->screen_samrt_lab_label_129, 64, 73);
    lv_obj_set_size(ui->screen_samrt_lab_label_129, 32, 22);
    lv_label_set_text(ui->screen_samrt_lab_label_129, "温度");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_129, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_129, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_129, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_129, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_129, lv_color_hex(0x8199B9), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_129, &lv_font_DINCondBlack_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_129, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_129, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_129, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_129, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_129, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_129, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_129, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_129, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_129, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_129, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_128
    ui->screen_samrt_lab_label_128 = lv_label_create(ui->screen_samrt_lab_cont_19);
    lv_obj_set_pos(ui->screen_samrt_lab_label_128, 177, 73);
    lv_obj_set_size(ui->screen_samrt_lab_label_128, 32, 22);
    lv_label_set_text(ui->screen_samrt_lab_label_128, "湿度");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_128, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_128, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_128, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_128, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_128, lv_color_hex(0x8199B9), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_128, &lv_font_DINCondBlack_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_128, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_128, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_128, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_128, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_128, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_128, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_128, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_128, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_128, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_128, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_127
    ui->screen_samrt_lab_label_127 = lv_label_create(ui->screen_samrt_lab_cont_19);
    lv_obj_set_pos(ui->screen_samrt_lab_label_127, 168, 96);
    lv_obj_set_size(ui->screen_samrt_lab_label_127, 60, 35);
    lv_label_set_text(ui->screen_samrt_lab_label_127, "33.4");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_127, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_127, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_127, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_127, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_127, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_127, &lv_font_DINCondBlack_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_127, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_127, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_127, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_127, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_127, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_127, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_127, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_127, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_127, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_127, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_126
    ui->screen_samrt_lab_label_126 = lv_label_create(ui->screen_samrt_lab_cont_19);
    lv_obj_set_pos(ui->screen_samrt_lab_label_126, 214, 102);
    lv_obj_set_size(ui->screen_samrt_lab_label_126, 38, 22);
    lv_label_set_text(ui->screen_samrt_lab_label_126, "%RH");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_126, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_126, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_126, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_126, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_126, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_126, &lv_font_AlibabaPuHuiTiRegular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_126, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_126, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_126, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_126, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_126, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_126, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_126, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_126, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_126, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_126, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_cont_20
    ui->screen_samrt_lab_cont_20 = lv_obj_create(ui->screen_samrt_lab_cont_19);
    lv_obj_set_pos(ui->screen_samrt_lab_cont_20, 101, 133);
    lv_obj_set_size(ui->screen_samrt_lab_cont_20, 90, 18);
    lv_obj_set_scrollbar_mode(ui->screen_samrt_lab_cont_20, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_samrt_lab_cont_20, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_cont_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_cont_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_cont_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_cont_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_cont_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_cont_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_cont_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_cont_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_12
    ui->screen_samrt_lab_line_12 = lv_line_create(ui->screen_samrt_lab_cont_20);
    lv_obj_set_pos(ui->screen_samrt_lab_line_12, 5, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_12, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_12[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_12, screen_samrt_lab_line_12, 2);

    //Write style for screen_samrt_lab_line_12, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_12, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_12, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_12, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_12, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_11
    ui->screen_samrt_lab_line_11 = lv_line_create(ui->screen_samrt_lab_cont_20);
    lv_obj_set_pos(ui->screen_samrt_lab_line_11, 30, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_11, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_11[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_11, screen_samrt_lab_line_11, 2);

    //Write style for screen_samrt_lab_line_11, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_11, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_11, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_11, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_11, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_10
    ui->screen_samrt_lab_line_10 = lv_line_create(ui->screen_samrt_lab_cont_20);
    lv_obj_set_pos(ui->screen_samrt_lab_line_10, 55, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_10, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_10[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_10, screen_samrt_lab_line_10, 2);

    //Write style for screen_samrt_lab_line_10, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_10, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_10, lv_color_hex(0x44D7B6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_10, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_10, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_9
    ui->screen_samrt_lab_line_9 = lv_line_create(ui->screen_samrt_lab_cont_20);
    lv_obj_set_pos(ui->screen_samrt_lab_line_9, 80, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_9, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_9[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_9, screen_samrt_lab_line_9, 2);

    //Write style for screen_samrt_lab_line_9, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_9, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_9, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_9, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_9, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_cont_21
    ui->screen_samrt_lab_cont_21 = lv_obj_create(ui->screen_samrt_lab_cont_temo_hum_sum);
    lv_obj_set_pos(ui->screen_samrt_lab_cont_21, 0, 0);
    lv_obj_set_size(ui->screen_samrt_lab_cont_21, 286, 152);
    lv_obj_set_scrollbar_mode(ui->screen_samrt_lab_cont_21, LV_SCROLLBAR_MODE_OFF);
    lv_obj_remove_flag(ui->screen_samrt_lab_cont_21, LV_OBJ_FLAG_GESTURE_BUBBLE);

    //Write style for screen_samrt_lab_cont_21, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_cont_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_cont_21, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_cont_21, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_samrt_lab_cont_21, lv_color_hex(0x2A405C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_samrt_lab_cont_21, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_cont_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_cont_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_cont_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_cont_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_cont_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_img_71
    ui->screen_samrt_lab_img_71 = lv_image_create(ui->screen_samrt_lab_cont_21);
    lv_obj_set_pos(ui->screen_samrt_lab_img_71, 27, 23);
    lv_obj_set_size(ui->screen_samrt_lab_img_71, 52, 52);
    lv_obj_add_flag(ui->screen_samrt_lab_img_71, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_samrt_lab_img_71, &_icon_wenshidu_RGB565A8_52x52);
    lv_image_set_pivot(ui->screen_samrt_lab_img_71, 50,50);
    lv_image_set_rotation(ui->screen_samrt_lab_img_71, 0);

    //Write style for screen_samrt_lab_img_71, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_samrt_lab_img_71, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_samrt_lab_img_71, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_141
    ui->screen_samrt_lab_label_141 = lv_label_create(ui->screen_samrt_lab_cont_21);
    lv_obj_set_pos(ui->screen_samrt_lab_label_141, 87, 32);
    lv_obj_set_size(ui->screen_samrt_lab_label_141, 130, 33);
    lv_label_set_text(ui->screen_samrt_lab_label_141, "温湿度");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_141, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_141, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_141, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_141, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_141, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_141, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_141, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_141, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_141, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_141, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_141, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_141, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_141, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_141, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_141, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_141, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_140
    ui->screen_samrt_lab_label_140 = lv_label_create(ui->screen_samrt_lab_cont_21);
    lv_obj_set_pos(ui->screen_samrt_lab_label_140, 53, 96);
    lv_obj_set_size(ui->screen_samrt_lab_label_140, 60, 35);
    lv_label_set_text(ui->screen_samrt_lab_label_140, "33.4");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_140, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_140, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_140, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_140, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_140, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_140, &lv_font_DINCondBlack_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_140, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_140, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_140, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_140, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_140, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_140, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_140, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_140, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_140, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_140, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_139
    ui->screen_samrt_lab_label_139 = lv_label_create(ui->screen_samrt_lab_cont_21);
    lv_obj_set_pos(ui->screen_samrt_lab_label_139, 102, 102);
    lv_obj_set_size(ui->screen_samrt_lab_label_139, 16, 22);
    lv_label_set_text(ui->screen_samrt_lab_label_139, "℃");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_139, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_139, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_139, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_139, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_139, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_139, &lv_font_AlibabaPuHuiTiRegular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_139, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_139, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_139, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_139, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_139, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_139, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_139, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_139, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_139, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_139, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_img_70
    ui->screen_samrt_lab_img_70 = lv_image_create(ui->screen_samrt_lab_cont_21);
    lv_obj_set_pos(ui->screen_samrt_lab_img_70, 216, 27);
    lv_obj_set_size(ui->screen_samrt_lab_img_70, 50, 50);
    lv_obj_add_flag(ui->screen_samrt_lab_img_70, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_samrt_lab_img_70, &_img_label_RGB565A8_50x50);
    lv_image_set_pivot(ui->screen_samrt_lab_img_70, 50,50);
    lv_image_set_rotation(ui->screen_samrt_lab_img_70, 0);

    //Write style for screen_samrt_lab_img_70, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_samrt_lab_img_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_samrt_lab_img_70, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_138
    ui->screen_samrt_lab_label_138 = lv_label_create(ui->screen_samrt_lab_cont_21);
    lv_obj_set_pos(ui->screen_samrt_lab_label_138, 225, 41);
    lv_obj_set_size(ui->screen_samrt_lab_label_138, 32, 26);
    lv_label_set_text(ui->screen_samrt_lab_label_138, "1-4");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_138, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_138, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_138, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_138, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_138, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_138, &lv_font_AlibabaPuHuiTiRegular_19, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_138, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_138, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_138, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_138, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_138, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_138, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_138, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_138, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_138, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_138, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_137
    ui->screen_samrt_lab_label_137 = lv_label_create(ui->screen_samrt_lab_cont_21);
    lv_obj_set_pos(ui->screen_samrt_lab_label_137, 64, 73);
    lv_obj_set_size(ui->screen_samrt_lab_label_137, 32, 22);
    lv_label_set_text(ui->screen_samrt_lab_label_137, "温度");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_137, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_137, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_137, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_137, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_137, lv_color_hex(0x8199B9), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_137, &lv_font_AlibabaPuHuiTiRegular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_137, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_137, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_137, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_137, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_137, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_137, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_137, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_137, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_137, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_137, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_136
    ui->screen_samrt_lab_label_136 = lv_label_create(ui->screen_samrt_lab_cont_21);
    lv_obj_set_pos(ui->screen_samrt_lab_label_136, 177, 73);
    lv_obj_set_size(ui->screen_samrt_lab_label_136, 32, 22);
    lv_label_set_text(ui->screen_samrt_lab_label_136, "湿度");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_136, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_136, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_136, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_136, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_136, lv_color_hex(0x8199B9), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_136, &lv_font_AlibabaPuHuiTiRegular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_136, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_136, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_136, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_136, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_136, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_136, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_136, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_136, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_136, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_136, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_135
    ui->screen_samrt_lab_label_135 = lv_label_create(ui->screen_samrt_lab_cont_21);
    lv_obj_set_pos(ui->screen_samrt_lab_label_135, 168, 96);
    lv_obj_set_size(ui->screen_samrt_lab_label_135, 60, 35);
    lv_label_set_text(ui->screen_samrt_lab_label_135, "33.4");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_135, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_135, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_135, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_135, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_135, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_135, &lv_font_DINCondBlack_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_135, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_135, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_135, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_135, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_135, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_135, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_135, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_135, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_135, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_135, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_134
    ui->screen_samrt_lab_label_134 = lv_label_create(ui->screen_samrt_lab_cont_21);
    lv_obj_set_pos(ui->screen_samrt_lab_label_134, 214, 102);
    lv_obj_set_size(ui->screen_samrt_lab_label_134, 38, 22);
    lv_label_set_text(ui->screen_samrt_lab_label_134, "%RH");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_134, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_134, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_134, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_134, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_134, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_134, &lv_font_AlibabaPuHuiTiRegular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_134, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_134, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_134, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_134, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_134, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_134, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_134, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_134, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_134, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_134, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_cont_22
    ui->screen_samrt_lab_cont_22 = lv_obj_create(ui->screen_samrt_lab_cont_21);
    lv_obj_set_pos(ui->screen_samrt_lab_cont_22, 101, 133);
    lv_obj_set_size(ui->screen_samrt_lab_cont_22, 90, 18);
    lv_obj_set_scrollbar_mode(ui->screen_samrt_lab_cont_22, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_samrt_lab_cont_22, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_cont_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_cont_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_cont_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_cont_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_cont_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_cont_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_cont_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_cont_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_16
    ui->screen_samrt_lab_line_16 = lv_line_create(ui->screen_samrt_lab_cont_22);
    lv_obj_set_pos(ui->screen_samrt_lab_line_16, 5, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_16, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_16[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_16, screen_samrt_lab_line_16, 2);

    //Write style for screen_samrt_lab_line_16, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_16, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_16, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_16, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_16, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_15
    ui->screen_samrt_lab_line_15 = lv_line_create(ui->screen_samrt_lab_cont_22);
    lv_obj_set_pos(ui->screen_samrt_lab_line_15, 30, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_15, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_15[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_15, screen_samrt_lab_line_15, 2);

    //Write style for screen_samrt_lab_line_15, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_15, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_15, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_15, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_15, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_14
    ui->screen_samrt_lab_line_14 = lv_line_create(ui->screen_samrt_lab_cont_22);
    lv_obj_set_pos(ui->screen_samrt_lab_line_14, 55, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_14, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_14[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_14, screen_samrt_lab_line_14, 2);

    //Write style for screen_samrt_lab_line_14, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_14, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_14, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_14, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_14, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_13
    ui->screen_samrt_lab_line_13 = lv_line_create(ui->screen_samrt_lab_cont_22);
    lv_obj_set_pos(ui->screen_samrt_lab_line_13, 80, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_13, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_13[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_13, screen_samrt_lab_line_13, 2);

    //Write style for screen_samrt_lab_line_13, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_13, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_13, lv_color_hex(0x44D7B6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_13, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_13, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_cont_lable_name
    ui->screen_samrt_lab_cont_lable_name = lv_obj_create(ui->screen_samrt_lab_cont_screen_smart_lab);
    lv_obj_set_pos(ui->screen_samrt_lab_cont_lable_name, 15, 75);
    lv_obj_set_size(ui->screen_samrt_lab_cont_lable_name, 597, 329);
    lv_obj_set_scrollbar_mode(ui->screen_samrt_lab_cont_lable_name, LV_SCROLLBAR_MODE_OFF);
    lv_obj_remove_flag(ui->screen_samrt_lab_cont_lable_name, LV_OBJ_FLAG_GESTURE_BUBBLE);

    //Write style for screen_samrt_lab_cont_lable_name, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_cont_lable_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_cont_lable_name, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_cont_lable_name, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_samrt_lab_cont_lable_name, lv_color_hex(0x2A405C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_samrt_lab_cont_lable_name, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_cont_lable_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_cont_lable_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_cont_lable_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_cont_lable_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_cont_lable_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_img_institution_log
    ui->screen_samrt_lab_img_institution_log = lv_image_create(ui->screen_samrt_lab_cont_lable_name);
    lv_obj_set_pos(ui->screen_samrt_lab_img_institution_log, 19, 19);
    lv_obj_set_size(ui->screen_samrt_lab_img_institution_log, 80, 80);
    lv_obj_add_flag(ui->screen_samrt_lab_img_institution_log, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_samrt_lab_img_institution_log, &_icon_schoolbadge_RGB565A8_80x80);
    lv_image_set_pivot(ui->screen_samrt_lab_img_institution_log, 50,50);
    lv_image_set_rotation(ui->screen_samrt_lab_img_institution_log, 0);

    //Write style for screen_samrt_lab_img_institution_log, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_samrt_lab_img_institution_log, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_samrt_lab_img_institution_log, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_img_lab_icon
    ui->screen_samrt_lab_img_lab_icon = lv_image_create(ui->screen_samrt_lab_cont_lable_name);
    lv_obj_set_pos(ui->screen_samrt_lab_img_lab_icon, 350, 39);
    lv_obj_set_size(ui->screen_samrt_lab_img_lab_icon, 34, 34);
    lv_obj_add_flag(ui->screen_samrt_lab_img_lab_icon, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_samrt_lab_img_lab_icon, &_icon_shiyanshi_RGB565A8_34x34);
    lv_image_set_pivot(ui->screen_samrt_lab_img_lab_icon, 50,50);
    lv_image_set_rotation(ui->screen_samrt_lab_img_lab_icon, 0);

    //Write style for screen_samrt_lab_img_lab_icon, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_samrt_lab_img_lab_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_samrt_lab_img_lab_icon, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_lable_name
    ui->screen_samrt_lab_label_lable_name = lv_label_create(ui->screen_samrt_lab_cont_lable_name);
    lv_obj_set_pos(ui->screen_samrt_lab_label_lable_name, 393, 42);
    lv_obj_set_size(ui->screen_samrt_lab_label_lable_name, 200, 33);
    lv_label_set_text(ui->screen_samrt_lab_label_lable_name, "仪器分析实验室");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_lable_name, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_lable_name, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_lable_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_lable_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_lable_name, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_lable_name, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_lable_name, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_lable_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_lable_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_lable_name, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_lable_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_lable_name, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_lable_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_lable_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_lable_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_lable_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_lable_num
    ui->screen_samrt_lab_label_lable_num = lv_label_create(ui->screen_samrt_lab_cont_lable_name);
    lv_obj_set_pos(ui->screen_samrt_lab_label_lable_num, 196, 128);
    lv_obj_set_size(ui->screen_samrt_lab_label_lable_num, 150, 119);
    lv_label_set_text(ui->screen_samrt_lab_label_lable_num, "206");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_lable_num, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_lable_num, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_lable_num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_lable_num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_lable_num, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_lable_num, &lv_font_DINCondBlack_100, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_lable_num, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_lable_num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_lable_num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_lable_num, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_lable_num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_lable_num, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_lable_num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_lable_num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_lable_num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_lable_num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_img_lable_num_icon
    ui->screen_samrt_lab_img_lable_num_icon = lv_image_create(ui->screen_samrt_lab_cont_lable_name);
    lv_obj_set_pos(ui->screen_samrt_lab_img_lable_num_icon, 332, 125);
    lv_obj_set_size(ui->screen_samrt_lab_img_lable_num_icon, 70, 70);
    lv_obj_add_flag(ui->screen_samrt_lab_img_lable_num_icon, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_samrt_lab_img_lable_num_icon, &_icon_fangjianhao_RGB565A8_70x70);
    lv_image_set_pivot(ui->screen_samrt_lab_img_lable_num_icon, 50,50);
    lv_image_set_rotation(ui->screen_samrt_lab_img_lable_num_icon, 0);

    //Write style for screen_samrt_lab_img_lable_num_icon, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_samrt_lab_img_lable_num_icon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_samrt_lab_img_lable_num_icon, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_device_num
    ui->screen_samrt_lab_label_device_num = lv_label_create(ui->screen_samrt_lab_cont_lable_name);
    lv_obj_set_pos(ui->screen_samrt_lab_label_device_num, 31, 271);
    lv_obj_set_size(ui->screen_samrt_lab_label_device_num, 198, 22);
    lv_label_set_text(ui->screen_samrt_lab_label_device_num, "设备编号：07022405006");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_device_num, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_device_num, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_device_num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_device_num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_device_num, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_device_num, &lv_font_AlibabaPuHuiTiRegular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_device_num, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_device_num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_device_num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_device_num, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_device_num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_device_num, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_device_num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_device_num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_device_num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_device_num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_109
    ui->screen_samrt_lab_label_109 = lv_label_create(ui->screen_samrt_lab_cont_lable_name);
    lv_obj_set_pos(ui->screen_samrt_lab_label_109, 243, 271);
    lv_obj_set_size(ui->screen_samrt_lab_label_109, 198, 22);
    lv_label_set_text(ui->screen_samrt_lab_label_109, "版  本  号：2.4.2.0/2.0");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_109, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_109, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_109, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_109, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_109, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_109, &lv_font_AlibabaPuHuiTiRegular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_109, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_109, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_109, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_109, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_109, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_109, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_109, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_109, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_109, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_109, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_cont_oxygen_sum
    ui->screen_samrt_lab_cont_oxygen_sum = lv_obj_create(ui->screen_samrt_lab_cont_screen_smart_lab);
    lv_obj_set_pos(ui->screen_samrt_lab_cont_oxygen_sum, 652, 264);
    lv_obj_set_size(ui->screen_samrt_lab_cont_oxygen_sum, 286, 152);
    lv_obj_set_scrollbar_mode(ui->screen_samrt_lab_cont_oxygen_sum, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_samrt_lab_cont_oxygen_sum, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_cont_oxygen_sum, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_cont_oxygen_sum, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_cont_oxygen_sum, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_cont_oxygen_sum, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_cont_oxygen_sum, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_cont_oxygen_sum, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_cont_oxygen_sum, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_cont_oxygen_sum, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_cont_24
    ui->screen_samrt_lab_cont_24 = lv_obj_create(ui->screen_samrt_lab_cont_oxygen_sum);
    lv_obj_set_pos(ui->screen_samrt_lab_cont_24, 0, 0);
    lv_obj_set_size(ui->screen_samrt_lab_cont_24, 286, 152);
    lv_obj_set_scrollbar_mode(ui->screen_samrt_lab_cont_24, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_samrt_lab_cont_24, LV_OBJ_FLAG_HIDDEN);
    lv_obj_remove_flag(ui->screen_samrt_lab_cont_24, LV_OBJ_FLAG_GESTURE_BUBBLE);

    //Write style for screen_samrt_lab_cont_24, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_cont_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_cont_24, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_cont_24, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_samrt_lab_cont_24, lv_color_hex(0x2A405C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_samrt_lab_cont_24, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_cont_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_cont_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_cont_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_cont_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_cont_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_img_73
    ui->screen_samrt_lab_img_73 = lv_image_create(ui->screen_samrt_lab_cont_24);
    lv_obj_set_pos(ui->screen_samrt_lab_img_73, 27, 23);
    lv_obj_set_size(ui->screen_samrt_lab_img_73, 52, 52);
    lv_obj_add_flag(ui->screen_samrt_lab_img_73, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_samrt_lab_img_73, &_icon_oxygen_RGB565A8_52x52);
    lv_image_set_pivot(ui->screen_samrt_lab_img_73, 50,50);
    lv_image_set_rotation(ui->screen_samrt_lab_img_73, 0);

    //Write style for screen_samrt_lab_img_73, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_samrt_lab_img_73, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_samrt_lab_img_73, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_149
    ui->screen_samrt_lab_label_149 = lv_label_create(ui->screen_samrt_lab_cont_24);
    lv_obj_set_pos(ui->screen_samrt_lab_label_149, 87, 32);
    lv_obj_set_size(ui->screen_samrt_lab_label_149, 130, 33);
    lv_label_set_text(ui->screen_samrt_lab_label_149, "氧气");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_149, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_149, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_149, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_149, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_149, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_149, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_149, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_149, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_149, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_149, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_149, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_149, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_149, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_149, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_149, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_149, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_img_72
    ui->screen_samrt_lab_img_72 = lv_image_create(ui->screen_samrt_lab_cont_24);
    lv_obj_set_pos(ui->screen_samrt_lab_img_72, 216, 27);
    lv_obj_set_size(ui->screen_samrt_lab_img_72, 50, 50);
    lv_obj_add_flag(ui->screen_samrt_lab_img_72, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_samrt_lab_img_72, &_img_label_RGB565A8_50x50);
    lv_image_set_pivot(ui->screen_samrt_lab_img_72, 50,50);
    lv_image_set_rotation(ui->screen_samrt_lab_img_72, 0);

    //Write style for screen_samrt_lab_img_72, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_samrt_lab_img_72, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_samrt_lab_img_72, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_146
    ui->screen_samrt_lab_label_146 = lv_label_create(ui->screen_samrt_lab_cont_24);
    lv_obj_set_pos(ui->screen_samrt_lab_label_146, 225, 41);
    lv_obj_set_size(ui->screen_samrt_lab_label_146, 32, 26);
    lv_label_set_text(ui->screen_samrt_lab_label_146, "1-4");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_146, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_146, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_146, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_146, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_146, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_146, &lv_font_AlibabaPuHuiTiRegular_19, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_146, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_146, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_146, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_146, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_146, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_146, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_146, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_146, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_146, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_146, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_cont_25
    ui->screen_samrt_lab_cont_25 = lv_obj_create(ui->screen_samrt_lab_cont_24);
    lv_obj_set_pos(ui->screen_samrt_lab_cont_25, 101, 133);
    lv_obj_set_size(ui->screen_samrt_lab_cont_25, 90, 18);
    lv_obj_set_scrollbar_mode(ui->screen_samrt_lab_cont_25, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_samrt_lab_cont_25, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_cont_25, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_cont_25, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_cont_25, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_cont_25, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_cont_25, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_cont_25, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_cont_25, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_cont_25, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_20
    ui->screen_samrt_lab_line_20 = lv_line_create(ui->screen_samrt_lab_cont_25);
    lv_obj_set_pos(ui->screen_samrt_lab_line_20, 5, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_20, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_20[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_20, screen_samrt_lab_line_20, 2);

    //Write style for screen_samrt_lab_line_20, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_20, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_20, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_20, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_20, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_19
    ui->screen_samrt_lab_line_19 = lv_line_create(ui->screen_samrt_lab_cont_25);
    lv_obj_set_pos(ui->screen_samrt_lab_line_19, 30, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_19, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_19[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_19, screen_samrt_lab_line_19, 2);

    //Write style for screen_samrt_lab_line_19, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_19, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_19, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_19, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_19, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_18
    ui->screen_samrt_lab_line_18 = lv_line_create(ui->screen_samrt_lab_cont_25);
    lv_obj_set_pos(ui->screen_samrt_lab_line_18, 55, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_18, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_18[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_18, screen_samrt_lab_line_18, 2);

    //Write style for screen_samrt_lab_line_18, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_18, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_18, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_18, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_18, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_17
    ui->screen_samrt_lab_line_17 = lv_line_create(ui->screen_samrt_lab_cont_25);
    lv_obj_set_pos(ui->screen_samrt_lab_line_17, 80, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_17, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_17[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_17, screen_samrt_lab_line_17, 2);

    //Write style for screen_samrt_lab_line_17, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_17, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_17, lv_color_hex(0x44D7B6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_17, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_17, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_174
    ui->screen_samrt_lab_label_174 = lv_label_create(ui->screen_samrt_lab_cont_24);
    lv_obj_set_pos(ui->screen_samrt_lab_label_174, 88, 69);
    lv_obj_set_size(ui->screen_samrt_lab_label_174, 80, 35);
    lv_label_set_text(ui->screen_samrt_lab_label_174, "33.4");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_174, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_174, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_174, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_174, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_174, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_174, &lv_font_DINCondBlack_40, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_174, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_174, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_174, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_174, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_174, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_174, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_174, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_174, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_174, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_174, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_175
    ui->screen_samrt_lab_label_175 = lv_label_create(ui->screen_samrt_lab_cont_24);
    lv_obj_set_pos(ui->screen_samrt_lab_label_175, 157, 91);
    lv_obj_set_size(ui->screen_samrt_lab_label_175, 44, 22);
    lv_label_set_text(ui->screen_samrt_lab_label_175, "%VOL");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_175, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_175, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_175, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_175, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_175, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_175, &lv_font_AlibabaPuHuiTiRegular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_175, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_175, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_175, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_175, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_175, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_175, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_175, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_175, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_175, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_175, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_cont_26
    ui->screen_samrt_lab_cont_26 = lv_obj_create(ui->screen_samrt_lab_cont_oxygen_sum);
    lv_obj_set_pos(ui->screen_samrt_lab_cont_26, 0, 0);
    lv_obj_set_size(ui->screen_samrt_lab_cont_26, 286, 152);
    lv_obj_set_scrollbar_mode(ui->screen_samrt_lab_cont_26, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_samrt_lab_cont_26, LV_OBJ_FLAG_HIDDEN);
    lv_obj_remove_flag(ui->screen_samrt_lab_cont_26, LV_OBJ_FLAG_GESTURE_BUBBLE);

    //Write style for screen_samrt_lab_cont_26, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_cont_26, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_cont_26, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_cont_26, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_samrt_lab_cont_26, lv_color_hex(0x2A405C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_samrt_lab_cont_26, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_cont_26, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_cont_26, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_cont_26, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_cont_26, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_cont_26, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_img_75
    ui->screen_samrt_lab_img_75 = lv_image_create(ui->screen_samrt_lab_cont_26);
    lv_obj_set_pos(ui->screen_samrt_lab_img_75, 27, 23);
    lv_obj_set_size(ui->screen_samrt_lab_img_75, 52, 52);
    lv_obj_add_flag(ui->screen_samrt_lab_img_75, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_samrt_lab_img_75, &_icon_oxygen_RGB565A8_52x52);
    lv_image_set_pivot(ui->screen_samrt_lab_img_75, 50,50);
    lv_image_set_rotation(ui->screen_samrt_lab_img_75, 0);

    //Write style for screen_samrt_lab_img_75, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_samrt_lab_img_75, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_samrt_lab_img_75, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_179
    ui->screen_samrt_lab_label_179 = lv_label_create(ui->screen_samrt_lab_cont_26);
    lv_obj_set_pos(ui->screen_samrt_lab_label_179, 87, 32);
    lv_obj_set_size(ui->screen_samrt_lab_label_179, 130, 33);
    lv_label_set_text(ui->screen_samrt_lab_label_179, "氧气");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_179, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_179, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_179, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_179, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_179, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_179, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_179, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_179, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_179, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_179, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_179, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_179, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_179, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_179, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_179, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_179, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_img_74
    ui->screen_samrt_lab_img_74 = lv_image_create(ui->screen_samrt_lab_cont_26);
    lv_obj_set_pos(ui->screen_samrt_lab_img_74, 216, 27);
    lv_obj_set_size(ui->screen_samrt_lab_img_74, 50, 50);
    lv_obj_add_flag(ui->screen_samrt_lab_img_74, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_samrt_lab_img_74, &_img_label_RGB565A8_50x50);
    lv_image_set_pivot(ui->screen_samrt_lab_img_74, 50,50);
    lv_image_set_rotation(ui->screen_samrt_lab_img_74, 0);

    //Write style for screen_samrt_lab_img_74, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_samrt_lab_img_74, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_samrt_lab_img_74, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_178
    ui->screen_samrt_lab_label_178 = lv_label_create(ui->screen_samrt_lab_cont_26);
    lv_obj_set_pos(ui->screen_samrt_lab_label_178, 225, 41);
    lv_obj_set_size(ui->screen_samrt_lab_label_178, 32, 26);
    lv_label_set_text(ui->screen_samrt_lab_label_178, "1-3");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_178, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_178, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_178, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_178, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_178, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_178, &lv_font_AlibabaPuHuiTiRegular_19, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_178, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_178, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_178, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_178, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_178, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_178, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_178, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_178, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_178, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_178, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_cont_27
    ui->screen_samrt_lab_cont_27 = lv_obj_create(ui->screen_samrt_lab_cont_26);
    lv_obj_set_pos(ui->screen_samrt_lab_cont_27, 101, 133);
    lv_obj_set_size(ui->screen_samrt_lab_cont_27, 90, 18);
    lv_obj_set_scrollbar_mode(ui->screen_samrt_lab_cont_27, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_samrt_lab_cont_27, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_cont_27, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_cont_27, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_cont_27, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_cont_27, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_cont_27, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_cont_27, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_cont_27, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_cont_27, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_24
    ui->screen_samrt_lab_line_24 = lv_line_create(ui->screen_samrt_lab_cont_27);
    lv_obj_set_pos(ui->screen_samrt_lab_line_24, 5, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_24, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_24[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_24, screen_samrt_lab_line_24, 2);

    //Write style for screen_samrt_lab_line_24, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_24, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_24, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_24, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_24, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_23
    ui->screen_samrt_lab_line_23 = lv_line_create(ui->screen_samrt_lab_cont_27);
    lv_obj_set_pos(ui->screen_samrt_lab_line_23, 30, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_23, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_23[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_23, screen_samrt_lab_line_23, 2);

    //Write style for screen_samrt_lab_line_23, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_23, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_23, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_23, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_23, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_22
    ui->screen_samrt_lab_line_22 = lv_line_create(ui->screen_samrt_lab_cont_27);
    lv_obj_set_pos(ui->screen_samrt_lab_line_22, 55, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_22, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_22[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_22, screen_samrt_lab_line_22, 2);

    //Write style for screen_samrt_lab_line_22, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_22, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_22, lv_color_hex(0x44D7B6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_22, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_22, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_21
    ui->screen_samrt_lab_line_21 = lv_line_create(ui->screen_samrt_lab_cont_27);
    lv_obj_set_pos(ui->screen_samrt_lab_line_21, 80, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_21, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_21[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_21, screen_samrt_lab_line_21, 2);

    //Write style for screen_samrt_lab_line_21, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_21, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_21, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_21, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_21, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_177
    ui->screen_samrt_lab_label_177 = lv_label_create(ui->screen_samrt_lab_cont_26);
    lv_obj_set_pos(ui->screen_samrt_lab_label_177, 88, 69);
    lv_obj_set_size(ui->screen_samrt_lab_label_177, 80, 35);
    lv_label_set_text(ui->screen_samrt_lab_label_177, "33.4");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_177, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_177, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_177, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_177, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_177, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_177, &lv_font_DINCondBlack_40, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_177, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_177, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_177, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_177, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_177, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_177, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_177, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_177, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_177, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_177, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_176
    ui->screen_samrt_lab_label_176 = lv_label_create(ui->screen_samrt_lab_cont_26);
    lv_obj_set_pos(ui->screen_samrt_lab_label_176, 157, 91);
    lv_obj_set_size(ui->screen_samrt_lab_label_176, 44, 22);
    lv_label_set_text(ui->screen_samrt_lab_label_176, "%VOL");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_176, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_176, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_176, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_176, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_176, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_176, &lv_font_AlibabaPuHuiTiRegular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_176, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_176, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_176, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_176, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_176, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_176, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_176, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_176, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_176, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_176, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_cont_28
    ui->screen_samrt_lab_cont_28 = lv_obj_create(ui->screen_samrt_lab_cont_oxygen_sum);
    lv_obj_set_pos(ui->screen_samrt_lab_cont_28, 0, 0);
    lv_obj_set_size(ui->screen_samrt_lab_cont_28, 286, 152);
    lv_obj_set_scrollbar_mode(ui->screen_samrt_lab_cont_28, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_samrt_lab_cont_28, LV_OBJ_FLAG_HIDDEN);
    lv_obj_remove_flag(ui->screen_samrt_lab_cont_28, LV_OBJ_FLAG_GESTURE_BUBBLE);

    //Write style for screen_samrt_lab_cont_28, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_cont_28, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_cont_28, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_cont_28, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_samrt_lab_cont_28, lv_color_hex(0x2A405C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_samrt_lab_cont_28, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_cont_28, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_cont_28, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_cont_28, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_cont_28, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_cont_28, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_img_77
    ui->screen_samrt_lab_img_77 = lv_image_create(ui->screen_samrt_lab_cont_28);
    lv_obj_set_pos(ui->screen_samrt_lab_img_77, 27, 23);
    lv_obj_set_size(ui->screen_samrt_lab_img_77, 52, 52);
    lv_obj_add_flag(ui->screen_samrt_lab_img_77, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_samrt_lab_img_77, &_icon_oxygen_RGB565A8_52x52);
    lv_image_set_pivot(ui->screen_samrt_lab_img_77, 50,50);
    lv_image_set_rotation(ui->screen_samrt_lab_img_77, 0);

    //Write style for screen_samrt_lab_img_77, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_samrt_lab_img_77, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_samrt_lab_img_77, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_183
    ui->screen_samrt_lab_label_183 = lv_label_create(ui->screen_samrt_lab_cont_28);
    lv_obj_set_pos(ui->screen_samrt_lab_label_183, 87, 32);
    lv_obj_set_size(ui->screen_samrt_lab_label_183, 130, 33);
    lv_label_set_text(ui->screen_samrt_lab_label_183, "氧气");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_183, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_183, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_183, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_183, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_183, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_183, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_183, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_183, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_183, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_183, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_183, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_183, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_183, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_183, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_183, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_183, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_img_76
    ui->screen_samrt_lab_img_76 = lv_image_create(ui->screen_samrt_lab_cont_28);
    lv_obj_set_pos(ui->screen_samrt_lab_img_76, 216, 27);
    lv_obj_set_size(ui->screen_samrt_lab_img_76, 50, 50);
    lv_obj_add_flag(ui->screen_samrt_lab_img_76, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_samrt_lab_img_76, &_img_label_RGB565A8_50x50);
    lv_image_set_pivot(ui->screen_samrt_lab_img_76, 50,50);
    lv_image_set_rotation(ui->screen_samrt_lab_img_76, 0);

    //Write style for screen_samrt_lab_img_76, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_samrt_lab_img_76, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_samrt_lab_img_76, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_182
    ui->screen_samrt_lab_label_182 = lv_label_create(ui->screen_samrt_lab_cont_28);
    lv_obj_set_pos(ui->screen_samrt_lab_label_182, 225, 41);
    lv_obj_set_size(ui->screen_samrt_lab_label_182, 32, 26);
    lv_label_set_text(ui->screen_samrt_lab_label_182, "1-2");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_182, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_182, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_182, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_182, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_182, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_182, &lv_font_AlibabaPuHuiTiRegular_19, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_182, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_182, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_182, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_182, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_182, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_182, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_182, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_182, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_182, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_182, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_cont_29
    ui->screen_samrt_lab_cont_29 = lv_obj_create(ui->screen_samrt_lab_cont_28);
    lv_obj_set_pos(ui->screen_samrt_lab_cont_29, 101, 133);
    lv_obj_set_size(ui->screen_samrt_lab_cont_29, 90, 18);
    lv_obj_set_scrollbar_mode(ui->screen_samrt_lab_cont_29, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_samrt_lab_cont_29, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_cont_29, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_cont_29, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_cont_29, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_cont_29, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_cont_29, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_cont_29, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_cont_29, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_cont_29, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_28
    ui->screen_samrt_lab_line_28 = lv_line_create(ui->screen_samrt_lab_cont_29);
    lv_obj_set_pos(ui->screen_samrt_lab_line_28, 5, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_28, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_28[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_28, screen_samrt_lab_line_28, 2);

    //Write style for screen_samrt_lab_line_28, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_28, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_28, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_28, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_28, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_27
    ui->screen_samrt_lab_line_27 = lv_line_create(ui->screen_samrt_lab_cont_29);
    lv_obj_set_pos(ui->screen_samrt_lab_line_27, 30, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_27, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_27[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_27, screen_samrt_lab_line_27, 2);

    //Write style for screen_samrt_lab_line_27, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_27, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_27, lv_color_hex(0x44D7B6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_27, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_27, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_26
    ui->screen_samrt_lab_line_26 = lv_line_create(ui->screen_samrt_lab_cont_29);
    lv_obj_set_pos(ui->screen_samrt_lab_line_26, 55, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_26, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_26[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_26, screen_samrt_lab_line_26, 2);

    //Write style for screen_samrt_lab_line_26, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_26, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_26, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_26, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_26, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_25
    ui->screen_samrt_lab_line_25 = lv_line_create(ui->screen_samrt_lab_cont_29);
    lv_obj_set_pos(ui->screen_samrt_lab_line_25, 80, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_25, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_25[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_25, screen_samrt_lab_line_25, 2);

    //Write style for screen_samrt_lab_line_25, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_25, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_25, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_25, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_25, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_181
    ui->screen_samrt_lab_label_181 = lv_label_create(ui->screen_samrt_lab_cont_28);
    lv_obj_set_pos(ui->screen_samrt_lab_label_181, 88, 69);
    lv_obj_set_size(ui->screen_samrt_lab_label_181, 80, 35);
    lv_label_set_text(ui->screen_samrt_lab_label_181, "33.4");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_181, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_181, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_181, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_181, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_181, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_181, &lv_font_DINCondBlack_40, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_181, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_181, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_181, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_181, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_181, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_181, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_181, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_181, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_181, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_181, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_180
    ui->screen_samrt_lab_label_180 = lv_label_create(ui->screen_samrt_lab_cont_28);
    lv_obj_set_pos(ui->screen_samrt_lab_label_180, 157, 91);
    lv_obj_set_size(ui->screen_samrt_lab_label_180, 44, 22);
    lv_label_set_text(ui->screen_samrt_lab_label_180, "%VOL");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_180, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_180, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_180, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_180, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_180, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_180, &lv_font_AlibabaPuHuiTiRegular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_180, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_180, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_180, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_180, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_180, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_180, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_180, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_180, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_180, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_180, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_cont_30
    ui->screen_samrt_lab_cont_30 = lv_obj_create(ui->screen_samrt_lab_cont_oxygen_sum);
    lv_obj_set_pos(ui->screen_samrt_lab_cont_30, 0, 0);
    lv_obj_set_size(ui->screen_samrt_lab_cont_30, 286, 152);
    lv_obj_set_scrollbar_mode(ui->screen_samrt_lab_cont_30, LV_SCROLLBAR_MODE_OFF);
    lv_obj_remove_flag(ui->screen_samrt_lab_cont_30, LV_OBJ_FLAG_GESTURE_BUBBLE);

    //Write style for screen_samrt_lab_cont_30, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_cont_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_cont_30, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_cont_30, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_samrt_lab_cont_30, lv_color_hex(0x2A405C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_samrt_lab_cont_30, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_cont_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_cont_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_cont_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_cont_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_cont_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_img_79
    ui->screen_samrt_lab_img_79 = lv_image_create(ui->screen_samrt_lab_cont_30);
    lv_obj_set_pos(ui->screen_samrt_lab_img_79, 27, 23);
    lv_obj_set_size(ui->screen_samrt_lab_img_79, 52, 52);
    lv_obj_add_flag(ui->screen_samrt_lab_img_79, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_samrt_lab_img_79, &_icon_oxygen_RGB565A8_52x52);
    lv_image_set_pivot(ui->screen_samrt_lab_img_79, 50,50);
    lv_image_set_rotation(ui->screen_samrt_lab_img_79, 0);

    //Write style for screen_samrt_lab_img_79, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_samrt_lab_img_79, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_samrt_lab_img_79, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_187
    ui->screen_samrt_lab_label_187 = lv_label_create(ui->screen_samrt_lab_cont_30);
    lv_obj_set_pos(ui->screen_samrt_lab_label_187, 87, 32);
    lv_obj_set_size(ui->screen_samrt_lab_label_187, 130, 33);
    lv_label_set_text(ui->screen_samrt_lab_label_187, "氧气");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_187, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_187, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_187, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_187, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_187, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_187, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_187, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_187, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_187, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_187, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_187, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_187, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_187, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_187, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_187, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_187, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_img_78
    ui->screen_samrt_lab_img_78 = lv_image_create(ui->screen_samrt_lab_cont_30);
    lv_obj_set_pos(ui->screen_samrt_lab_img_78, 216, 27);
    lv_obj_set_size(ui->screen_samrt_lab_img_78, 50, 50);
    lv_obj_add_flag(ui->screen_samrt_lab_img_78, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_samrt_lab_img_78, &_img_label_RGB565A8_50x50);
    lv_image_set_pivot(ui->screen_samrt_lab_img_78, 50,50);
    lv_image_set_rotation(ui->screen_samrt_lab_img_78, 0);

    //Write style for screen_samrt_lab_img_78, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_samrt_lab_img_78, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_samrt_lab_img_78, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_186
    ui->screen_samrt_lab_label_186 = lv_label_create(ui->screen_samrt_lab_cont_30);
    lv_obj_set_pos(ui->screen_samrt_lab_label_186, 225, 41);
    lv_obj_set_size(ui->screen_samrt_lab_label_186, 32, 26);
    lv_label_set_text(ui->screen_samrt_lab_label_186, "1-1");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_186, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_186, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_186, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_186, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_186, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_186, &lv_font_AlibabaPuHuiTiRegular_19, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_186, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_186, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_186, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_186, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_186, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_186, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_186, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_186, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_186, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_186, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_cont_31
    ui->screen_samrt_lab_cont_31 = lv_obj_create(ui->screen_samrt_lab_cont_30);
    lv_obj_set_pos(ui->screen_samrt_lab_cont_31, 101, 133);
    lv_obj_set_size(ui->screen_samrt_lab_cont_31, 90, 18);
    lv_obj_set_scrollbar_mode(ui->screen_samrt_lab_cont_31, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_samrt_lab_cont_31, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_cont_31, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_cont_31, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_cont_31, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_cont_31, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_cont_31, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_cont_31, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_cont_31, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_cont_31, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_32
    ui->screen_samrt_lab_line_32 = lv_line_create(ui->screen_samrt_lab_cont_31);
    lv_obj_set_pos(ui->screen_samrt_lab_line_32, 5, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_32, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_32[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_32, screen_samrt_lab_line_32, 2);

    //Write style for screen_samrt_lab_line_32, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_32, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_32, lv_color_hex(0x44D7B6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_32, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_32, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_31
    ui->screen_samrt_lab_line_31 = lv_line_create(ui->screen_samrt_lab_cont_31);
    lv_obj_set_pos(ui->screen_samrt_lab_line_31, 30, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_31, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_31[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_31, screen_samrt_lab_line_31, 2);

    //Write style for screen_samrt_lab_line_31, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_31, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_31, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_31, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_31, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_30
    ui->screen_samrt_lab_line_30 = lv_line_create(ui->screen_samrt_lab_cont_31);
    lv_obj_set_pos(ui->screen_samrt_lab_line_30, 55, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_30, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_30[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_30, screen_samrt_lab_line_30, 2);

    //Write style for screen_samrt_lab_line_30, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_30, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_30, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_30, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_30, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_29
    ui->screen_samrt_lab_line_29 = lv_line_create(ui->screen_samrt_lab_cont_31);
    lv_obj_set_pos(ui->screen_samrt_lab_line_29, 80, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_29, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_29[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_29, screen_samrt_lab_line_29, 2);

    //Write style for screen_samrt_lab_line_29, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_29, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_29, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_29, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_29, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_185
    ui->screen_samrt_lab_label_185 = lv_label_create(ui->screen_samrt_lab_cont_30);
    lv_obj_set_pos(ui->screen_samrt_lab_label_185, 88, 69);
    lv_obj_set_size(ui->screen_samrt_lab_label_185, 80, 35);
    lv_label_set_text(ui->screen_samrt_lab_label_185, "33.4");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_185, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_185, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_185, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_185, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_185, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_185, &lv_font_DINCondBlack_40, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_185, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_185, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_185, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_185, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_185, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_185, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_185, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_185, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_185, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_185, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_184
    ui->screen_samrt_lab_label_184 = lv_label_create(ui->screen_samrt_lab_cont_30);
    lv_obj_set_pos(ui->screen_samrt_lab_label_184, 157, 91);
    lv_obj_set_size(ui->screen_samrt_lab_label_184, 44, 22);
    lv_label_set_text(ui->screen_samrt_lab_label_184, "%VOL");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_184, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_184, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_184, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_184, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_184, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_184, &lv_font_AlibabaPuHuiTiRegular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_184, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_184, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_184, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_184, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_184, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_184, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_184, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_184, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_184, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_184, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_cont_voc_sum
    ui->screen_samrt_lab_cont_voc_sum = lv_obj_create(ui->screen_samrt_lab_cont_screen_smart_lab);
    lv_obj_set_pos(ui->screen_samrt_lab_cont_voc_sum, 18, 447);
    lv_obj_set_size(ui->screen_samrt_lab_cont_voc_sum, 286, 329);
    lv_obj_set_scrollbar_mode(ui->screen_samrt_lab_cont_voc_sum, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_samrt_lab_cont_voc_sum, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_cont_voc_sum, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_cont_voc_sum, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_cont_voc_sum, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_cont_voc_sum, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_cont_voc_sum, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_cont_voc_sum, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_cont_voc_sum, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_cont_voc_sum, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_cont_33
    ui->screen_samrt_lab_cont_33 = lv_obj_create(ui->screen_samrt_lab_cont_voc_sum);
    lv_obj_set_pos(ui->screen_samrt_lab_cont_33, 0, 0);
    lv_obj_set_size(ui->screen_samrt_lab_cont_33, 286, 329);
    lv_obj_set_scrollbar_mode(ui->screen_samrt_lab_cont_33, LV_SCROLLBAR_MODE_OFF);
    lv_obj_remove_flag(ui->screen_samrt_lab_cont_33, LV_OBJ_FLAG_GESTURE_BUBBLE);

    //Write style for screen_samrt_lab_cont_33, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_cont_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_cont_33, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_cont_33, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_samrt_lab_cont_33, lv_color_hex(0x2A405C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_samrt_lab_cont_33, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_cont_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_cont_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_cont_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_cont_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_cont_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_img_81
    ui->screen_samrt_lab_img_81 = lv_image_create(ui->screen_samrt_lab_cont_33);
    lv_obj_set_pos(ui->screen_samrt_lab_img_81, 27, 30);
    lv_obj_set_size(ui->screen_samrt_lab_img_81, 52, 52);
    lv_obj_add_flag(ui->screen_samrt_lab_img_81, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_samrt_lab_img_81, &_icon_voc_RGB565A8_52x52);
    lv_image_set_pivot(ui->screen_samrt_lab_img_81, 50,50);
    lv_image_set_rotation(ui->screen_samrt_lab_img_81, 0);

    //Write style for screen_samrt_lab_img_81, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_samrt_lab_img_81, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_samrt_lab_img_81, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_191
    ui->screen_samrt_lab_label_191 = lv_label_create(ui->screen_samrt_lab_cont_33);
    lv_obj_set_pos(ui->screen_samrt_lab_label_191, 78, 43);
    lv_obj_set_size(ui->screen_samrt_lab_label_191, 130, 33);
    lv_label_set_text(ui->screen_samrt_lab_label_191, "VOC");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_191, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_191, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_191, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_191, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_191, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_191, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_191, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_191, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_191, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_191, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_191, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_191, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_191, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_191, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_191, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_191, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_190
    ui->screen_samrt_lab_label_190 = lv_label_create(ui->screen_samrt_lab_cont_33);
    lv_obj_set_pos(ui->screen_samrt_lab_label_190, 84, 145);
    lv_obj_set_size(ui->screen_samrt_lab_label_190, 120, 83);
    lv_label_set_text(ui->screen_samrt_lab_label_190, "33.4");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_190, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_190, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_190, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_190, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_190, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_190, &lv_font_DINCondBlack_70, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_190, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_190, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_190, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_190, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_190, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_190, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_190, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_190, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_190, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_190, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_189
    ui->screen_samrt_lab_label_189 = lv_label_create(ui->screen_samrt_lab_cont_33);
    lv_obj_set_pos(ui->screen_samrt_lab_label_189, 202, 281);
    lv_obj_set_size(ui->screen_samrt_lab_label_189, 61, 30);
    lv_label_set_text(ui->screen_samrt_lab_label_189, "PPM");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_189, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_189, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_189, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_189, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_189, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_189, &lv_font_AlibabaPuHuiTiRegular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_189, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_189, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_189, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_189, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_189, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_189, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_189, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_189, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_189, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_189, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_img_80
    ui->screen_samrt_lab_img_80 = lv_image_create(ui->screen_samrt_lab_cont_33);
    lv_obj_set_pos(ui->screen_samrt_lab_img_80, 201, 80);
    lv_obj_set_size(ui->screen_samrt_lab_img_80, 50, 50);
    lv_obj_add_flag(ui->screen_samrt_lab_img_80, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_samrt_lab_img_80, &_img_label_RGB565A8_50x50);
    lv_image_set_pivot(ui->screen_samrt_lab_img_80, 50,50);
    lv_image_set_rotation(ui->screen_samrt_lab_img_80, 0);

    //Write style for screen_samrt_lab_img_80, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_samrt_lab_img_80, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_samrt_lab_img_80, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_188
    ui->screen_samrt_lab_label_188 = lv_label_create(ui->screen_samrt_lab_cont_33);
    lv_obj_set_pos(ui->screen_samrt_lab_label_188, 211, 91);
    lv_obj_set_size(ui->screen_samrt_lab_label_188, 32, 26);
    lv_label_set_text(ui->screen_samrt_lab_label_188, "1-1");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_188, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_188, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_188, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_188, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_188, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_188, &lv_font_AlibabaPuHuiTiRegular_19, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_188, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_188, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_188, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_188, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_188, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_188, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_188, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_188, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_188, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_188, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_cont_34
    ui->screen_samrt_lab_cont_34 = lv_obj_create(ui->screen_samrt_lab_cont_33);
    lv_obj_set_pos(ui->screen_samrt_lab_cont_34, 97, 291);
    lv_obj_set_size(ui->screen_samrt_lab_cont_34, 90, 18);
    lv_obj_set_scrollbar_mode(ui->screen_samrt_lab_cont_34, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_samrt_lab_cont_34, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_cont_34, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_cont_34, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_cont_34, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_cont_34, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_cont_34, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_cont_34, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_cont_34, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_cont_34, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_36
    ui->screen_samrt_lab_line_36 = lv_line_create(ui->screen_samrt_lab_cont_34);
    lv_obj_set_pos(ui->screen_samrt_lab_line_36, 5, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_36, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_36[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_36, screen_samrt_lab_line_36, 2);

    //Write style for screen_samrt_lab_line_36, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_36, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_36, lv_color_hex(0x44D7B6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_36, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_36, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_35
    ui->screen_samrt_lab_line_35 = lv_line_create(ui->screen_samrt_lab_cont_34);
    lv_obj_set_pos(ui->screen_samrt_lab_line_35, 30, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_35, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_35[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_35, screen_samrt_lab_line_35, 2);

    //Write style for screen_samrt_lab_line_35, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_35, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_35, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_35, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_35, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_34
    ui->screen_samrt_lab_line_34 = lv_line_create(ui->screen_samrt_lab_cont_34);
    lv_obj_set_pos(ui->screen_samrt_lab_line_34, 55, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_34, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_34[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_34, screen_samrt_lab_line_34, 2);

    //Write style for screen_samrt_lab_line_34, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_34, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_34, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_34, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_34, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_33
    ui->screen_samrt_lab_line_33 = lv_line_create(ui->screen_samrt_lab_cont_34);
    lv_obj_set_pos(ui->screen_samrt_lab_line_33, 80, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_33, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_33[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_33, screen_samrt_lab_line_33, 2);

    //Write style for screen_samrt_lab_line_33, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_33, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_33, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_33, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_33, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_cont_35
    ui->screen_samrt_lab_cont_35 = lv_obj_create(ui->screen_samrt_lab_cont_voc_sum);
    lv_obj_set_pos(ui->screen_samrt_lab_cont_35, 0, 0);
    lv_obj_set_size(ui->screen_samrt_lab_cont_35, 286, 329);
    lv_obj_set_scrollbar_mode(ui->screen_samrt_lab_cont_35, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_samrt_lab_cont_35, LV_OBJ_FLAG_HIDDEN);
    lv_obj_remove_flag(ui->screen_samrt_lab_cont_35, LV_OBJ_FLAG_GESTURE_BUBBLE);

    //Write style for screen_samrt_lab_cont_35, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_cont_35, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_cont_35, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_cont_35, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_samrt_lab_cont_35, lv_color_hex(0x2A405C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_samrt_lab_cont_35, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_cont_35, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_cont_35, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_cont_35, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_cont_35, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_cont_35, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_img_83
    ui->screen_samrt_lab_img_83 = lv_image_create(ui->screen_samrt_lab_cont_35);
    lv_obj_set_pos(ui->screen_samrt_lab_img_83, 27, 30);
    lv_obj_set_size(ui->screen_samrt_lab_img_83, 52, 52);
    lv_obj_add_flag(ui->screen_samrt_lab_img_83, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_samrt_lab_img_83, &_icon_voc_RGB565A8_52x52);
    lv_image_set_pivot(ui->screen_samrt_lab_img_83, 50,50);
    lv_image_set_rotation(ui->screen_samrt_lab_img_83, 0);

    //Write style for screen_samrt_lab_img_83, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_samrt_lab_img_83, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_samrt_lab_img_83, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_195
    ui->screen_samrt_lab_label_195 = lv_label_create(ui->screen_samrt_lab_cont_35);
    lv_obj_set_pos(ui->screen_samrt_lab_label_195, 78, 43);
    lv_obj_set_size(ui->screen_samrt_lab_label_195, 130, 33);
    lv_label_set_text(ui->screen_samrt_lab_label_195, "VOC");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_195, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_195, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_195, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_195, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_195, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_195, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_195, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_195, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_195, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_195, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_195, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_195, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_195, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_195, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_195, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_195, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_194
    ui->screen_samrt_lab_label_194 = lv_label_create(ui->screen_samrt_lab_cont_35);
    lv_obj_set_pos(ui->screen_samrt_lab_label_194, 84, 145);
    lv_obj_set_size(ui->screen_samrt_lab_label_194, 120, 83);
    lv_label_set_text(ui->screen_samrt_lab_label_194, "33.4");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_194, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_194, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_194, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_194, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_194, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_194, &lv_font_DINCondBlack_70, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_194, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_194, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_194, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_194, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_194, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_194, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_194, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_194, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_194, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_194, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_193
    ui->screen_samrt_lab_label_193 = lv_label_create(ui->screen_samrt_lab_cont_35);
    lv_obj_set_pos(ui->screen_samrt_lab_label_193, 202, 281);
    lv_obj_set_size(ui->screen_samrt_lab_label_193, 61, 30);
    lv_label_set_text(ui->screen_samrt_lab_label_193, "PPM");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_193, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_193, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_193, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_193, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_193, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_193, &lv_font_AlibabaPuHuiTiRegular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_193, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_193, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_193, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_193, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_193, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_193, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_193, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_193, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_193, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_193, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_img_82
    ui->screen_samrt_lab_img_82 = lv_image_create(ui->screen_samrt_lab_cont_35);
    lv_obj_set_pos(ui->screen_samrt_lab_img_82, 201, 80);
    lv_obj_set_size(ui->screen_samrt_lab_img_82, 50, 50);
    lv_obj_add_flag(ui->screen_samrt_lab_img_82, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_samrt_lab_img_82, &_img_label_RGB565A8_50x50);
    lv_image_set_pivot(ui->screen_samrt_lab_img_82, 50,50);
    lv_image_set_rotation(ui->screen_samrt_lab_img_82, 0);

    //Write style for screen_samrt_lab_img_82, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_samrt_lab_img_82, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_samrt_lab_img_82, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_192
    ui->screen_samrt_lab_label_192 = lv_label_create(ui->screen_samrt_lab_cont_35);
    lv_obj_set_pos(ui->screen_samrt_lab_label_192, 211, 91);
    lv_obj_set_size(ui->screen_samrt_lab_label_192, 32, 26);
    lv_label_set_text(ui->screen_samrt_lab_label_192, "1-2\n");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_192, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_192, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_192, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_192, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_192, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_192, &lv_font_AlibabaPuHuiTiRegular_19, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_192, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_192, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_192, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_192, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_192, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_192, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_192, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_192, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_192, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_192, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_cont_36
    ui->screen_samrt_lab_cont_36 = lv_obj_create(ui->screen_samrt_lab_cont_35);
    lv_obj_set_pos(ui->screen_samrt_lab_cont_36, 97, 291);
    lv_obj_set_size(ui->screen_samrt_lab_cont_36, 90, 18);
    lv_obj_set_scrollbar_mode(ui->screen_samrt_lab_cont_36, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_samrt_lab_cont_36, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_cont_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_cont_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_cont_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_cont_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_cont_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_cont_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_cont_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_cont_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_40
    ui->screen_samrt_lab_line_40 = lv_line_create(ui->screen_samrt_lab_cont_36);
    lv_obj_set_pos(ui->screen_samrt_lab_line_40, 5, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_40, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_40[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_40, screen_samrt_lab_line_40, 2);

    //Write style for screen_samrt_lab_line_40, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_40, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_40, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_40, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_40, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_39
    ui->screen_samrt_lab_line_39 = lv_line_create(ui->screen_samrt_lab_cont_36);
    lv_obj_set_pos(ui->screen_samrt_lab_line_39, 30, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_39, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_39[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_39, screen_samrt_lab_line_39, 2);

    //Write style for screen_samrt_lab_line_39, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_39, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_39, lv_color_hex(0x44D7B6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_39, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_39, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_38
    ui->screen_samrt_lab_line_38 = lv_line_create(ui->screen_samrt_lab_cont_36);
    lv_obj_set_pos(ui->screen_samrt_lab_line_38, 55, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_38, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_38[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_38, screen_samrt_lab_line_38, 2);

    //Write style for screen_samrt_lab_line_38, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_38, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_38, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_38, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_38, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_37
    ui->screen_samrt_lab_line_37 = lv_line_create(ui->screen_samrt_lab_cont_36);
    lv_obj_set_pos(ui->screen_samrt_lab_line_37, 80, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_37, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_37[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_37, screen_samrt_lab_line_37, 2);

    //Write style for screen_samrt_lab_line_37, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_37, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_37, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_37, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_37, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_cont_37
    ui->screen_samrt_lab_cont_37 = lv_obj_create(ui->screen_samrt_lab_cont_voc_sum);
    lv_obj_set_pos(ui->screen_samrt_lab_cont_37, 0, 0);
    lv_obj_set_size(ui->screen_samrt_lab_cont_37, 286, 329);
    lv_obj_set_scrollbar_mode(ui->screen_samrt_lab_cont_37, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_samrt_lab_cont_37, LV_OBJ_FLAG_HIDDEN);
    lv_obj_remove_flag(ui->screen_samrt_lab_cont_37, LV_OBJ_FLAG_GESTURE_BUBBLE);

    //Write style for screen_samrt_lab_cont_37, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_cont_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_cont_37, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_cont_37, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_samrt_lab_cont_37, lv_color_hex(0x2A405C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_samrt_lab_cont_37, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_cont_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_cont_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_cont_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_cont_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_cont_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_img_85
    ui->screen_samrt_lab_img_85 = lv_image_create(ui->screen_samrt_lab_cont_37);
    lv_obj_set_pos(ui->screen_samrt_lab_img_85, 27, 30);
    lv_obj_set_size(ui->screen_samrt_lab_img_85, 52, 52);
    lv_obj_add_flag(ui->screen_samrt_lab_img_85, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_samrt_lab_img_85, &_icon_voc_RGB565A8_52x52);
    lv_image_set_pivot(ui->screen_samrt_lab_img_85, 50,50);
    lv_image_set_rotation(ui->screen_samrt_lab_img_85, 0);

    //Write style for screen_samrt_lab_img_85, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_samrt_lab_img_85, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_samrt_lab_img_85, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_199
    ui->screen_samrt_lab_label_199 = lv_label_create(ui->screen_samrt_lab_cont_37);
    lv_obj_set_pos(ui->screen_samrt_lab_label_199, 78, 43);
    lv_obj_set_size(ui->screen_samrt_lab_label_199, 130, 33);
    lv_label_set_text(ui->screen_samrt_lab_label_199, "VOC");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_199, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_199, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_199, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_199, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_199, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_199, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_199, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_199, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_199, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_199, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_199, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_199, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_199, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_199, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_199, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_199, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_198
    ui->screen_samrt_lab_label_198 = lv_label_create(ui->screen_samrt_lab_cont_37);
    lv_obj_set_pos(ui->screen_samrt_lab_label_198, 84, 145);
    lv_obj_set_size(ui->screen_samrt_lab_label_198, 120, 83);
    lv_label_set_text(ui->screen_samrt_lab_label_198, "33.4");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_198, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_198, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_198, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_198, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_198, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_198, &lv_font_DINCondBlack_70, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_198, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_198, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_198, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_198, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_198, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_198, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_198, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_198, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_198, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_198, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_197
    ui->screen_samrt_lab_label_197 = lv_label_create(ui->screen_samrt_lab_cont_37);
    lv_obj_set_pos(ui->screen_samrt_lab_label_197, 202, 281);
    lv_obj_set_size(ui->screen_samrt_lab_label_197, 61, 30);
    lv_label_set_text(ui->screen_samrt_lab_label_197, "PPM");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_197, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_197, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_197, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_197, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_197, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_197, &lv_font_AlibabaPuHuiTiRegular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_197, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_197, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_197, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_197, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_197, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_197, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_197, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_197, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_197, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_197, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_img_84
    ui->screen_samrt_lab_img_84 = lv_image_create(ui->screen_samrt_lab_cont_37);
    lv_obj_set_pos(ui->screen_samrt_lab_img_84, 201, 80);
    lv_obj_set_size(ui->screen_samrt_lab_img_84, 50, 50);
    lv_obj_add_flag(ui->screen_samrt_lab_img_84, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_samrt_lab_img_84, &_img_label_RGB565A8_50x50);
    lv_image_set_pivot(ui->screen_samrt_lab_img_84, 50,50);
    lv_image_set_rotation(ui->screen_samrt_lab_img_84, 0);

    //Write style for screen_samrt_lab_img_84, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_samrt_lab_img_84, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_samrt_lab_img_84, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_196
    ui->screen_samrt_lab_label_196 = lv_label_create(ui->screen_samrt_lab_cont_37);
    lv_obj_set_pos(ui->screen_samrt_lab_label_196, 211, 91);
    lv_obj_set_size(ui->screen_samrt_lab_label_196, 32, 26);
    lv_label_set_text(ui->screen_samrt_lab_label_196, "1-3");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_196, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_196, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_196, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_196, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_196, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_196, &lv_font_AlibabaPuHuiTiRegular_19, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_196, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_196, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_196, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_196, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_196, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_196, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_196, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_196, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_196, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_196, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_cont_38
    ui->screen_samrt_lab_cont_38 = lv_obj_create(ui->screen_samrt_lab_cont_37);
    lv_obj_set_pos(ui->screen_samrt_lab_cont_38, 97, 291);
    lv_obj_set_size(ui->screen_samrt_lab_cont_38, 90, 18);
    lv_obj_set_scrollbar_mode(ui->screen_samrt_lab_cont_38, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_samrt_lab_cont_38, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_cont_38, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_cont_38, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_cont_38, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_cont_38, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_cont_38, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_cont_38, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_cont_38, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_cont_38, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_44
    ui->screen_samrt_lab_line_44 = lv_line_create(ui->screen_samrt_lab_cont_38);
    lv_obj_set_pos(ui->screen_samrt_lab_line_44, 5, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_44, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_44[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_44, screen_samrt_lab_line_44, 2);

    //Write style for screen_samrt_lab_line_44, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_44, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_44, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_44, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_44, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_43
    ui->screen_samrt_lab_line_43 = lv_line_create(ui->screen_samrt_lab_cont_38);
    lv_obj_set_pos(ui->screen_samrt_lab_line_43, 30, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_43, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_43[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_43, screen_samrt_lab_line_43, 2);

    //Write style for screen_samrt_lab_line_43, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_43, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_43, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_43, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_43, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_42
    ui->screen_samrt_lab_line_42 = lv_line_create(ui->screen_samrt_lab_cont_38);
    lv_obj_set_pos(ui->screen_samrt_lab_line_42, 55, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_42, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_42[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_42, screen_samrt_lab_line_42, 2);

    //Write style for screen_samrt_lab_line_42, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_42, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_42, lv_color_hex(0x44D7B6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_42, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_42, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_41
    ui->screen_samrt_lab_line_41 = lv_line_create(ui->screen_samrt_lab_cont_38);
    lv_obj_set_pos(ui->screen_samrt_lab_line_41, 80, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_41, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_41[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_41, screen_samrt_lab_line_41, 2);

    //Write style for screen_samrt_lab_line_41, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_41, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_41, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_41, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_41, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_cont_39
    ui->screen_samrt_lab_cont_39 = lv_obj_create(ui->screen_samrt_lab_cont_voc_sum);
    lv_obj_set_pos(ui->screen_samrt_lab_cont_39, 0, 0);
    lv_obj_set_size(ui->screen_samrt_lab_cont_39, 286, 329);
    lv_obj_set_scrollbar_mode(ui->screen_samrt_lab_cont_39, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_samrt_lab_cont_39, LV_OBJ_FLAG_HIDDEN);
    lv_obj_remove_flag(ui->screen_samrt_lab_cont_39, LV_OBJ_FLAG_GESTURE_BUBBLE);

    //Write style for screen_samrt_lab_cont_39, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_cont_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_cont_39, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_cont_39, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_samrt_lab_cont_39, lv_color_hex(0x2A405C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_samrt_lab_cont_39, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_cont_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_cont_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_cont_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_cont_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_cont_39, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_img_87
    ui->screen_samrt_lab_img_87 = lv_image_create(ui->screen_samrt_lab_cont_39);
    lv_obj_set_pos(ui->screen_samrt_lab_img_87, 27, 30);
    lv_obj_set_size(ui->screen_samrt_lab_img_87, 52, 52);
    lv_obj_add_flag(ui->screen_samrt_lab_img_87, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_samrt_lab_img_87, &_icon_voc_RGB565A8_52x52);
    lv_image_set_pivot(ui->screen_samrt_lab_img_87, 50,50);
    lv_image_set_rotation(ui->screen_samrt_lab_img_87, 0);

    //Write style for screen_samrt_lab_img_87, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_samrt_lab_img_87, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_samrt_lab_img_87, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_203
    ui->screen_samrt_lab_label_203 = lv_label_create(ui->screen_samrt_lab_cont_39);
    lv_obj_set_pos(ui->screen_samrt_lab_label_203, 78, 43);
    lv_obj_set_size(ui->screen_samrt_lab_label_203, 130, 33);
    lv_label_set_text(ui->screen_samrt_lab_label_203, "VOC");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_203, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_203, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_203, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_203, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_203, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_203, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_203, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_203, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_203, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_203, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_203, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_203, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_203, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_203, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_203, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_203, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_202
    ui->screen_samrt_lab_label_202 = lv_label_create(ui->screen_samrt_lab_cont_39);
    lv_obj_set_pos(ui->screen_samrt_lab_label_202, 84, 145);
    lv_obj_set_size(ui->screen_samrt_lab_label_202, 120, 83);
    lv_label_set_text(ui->screen_samrt_lab_label_202, "33.4");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_202, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_202, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_202, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_202, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_202, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_202, &lv_font_DINCondBlack_70, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_202, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_202, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_202, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_202, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_202, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_202, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_202, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_202, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_202, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_202, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_201
    ui->screen_samrt_lab_label_201 = lv_label_create(ui->screen_samrt_lab_cont_39);
    lv_obj_set_pos(ui->screen_samrt_lab_label_201, 202, 281);
    lv_obj_set_size(ui->screen_samrt_lab_label_201, 61, 30);
    lv_label_set_text(ui->screen_samrt_lab_label_201, "PPM");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_201, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_201, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_201, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_201, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_201, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_201, &lv_font_AlibabaPuHuiTiRegular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_201, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_201, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_201, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_201, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_201, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_201, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_201, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_201, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_201, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_201, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_img_86
    ui->screen_samrt_lab_img_86 = lv_image_create(ui->screen_samrt_lab_cont_39);
    lv_obj_set_pos(ui->screen_samrt_lab_img_86, 201, 80);
    lv_obj_set_size(ui->screen_samrt_lab_img_86, 50, 50);
    lv_obj_add_flag(ui->screen_samrt_lab_img_86, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_samrt_lab_img_86, &_img_label_RGB565A8_50x50);
    lv_image_set_pivot(ui->screen_samrt_lab_img_86, 50,50);
    lv_image_set_rotation(ui->screen_samrt_lab_img_86, 0);

    //Write style for screen_samrt_lab_img_86, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_samrt_lab_img_86, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_samrt_lab_img_86, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_200
    ui->screen_samrt_lab_label_200 = lv_label_create(ui->screen_samrt_lab_cont_39);
    lv_obj_set_pos(ui->screen_samrt_lab_label_200, 211, 91);
    lv_obj_set_size(ui->screen_samrt_lab_label_200, 32, 26);
    lv_label_set_text(ui->screen_samrt_lab_label_200, "1-4");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_200, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_200, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_200, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_200, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_200, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_200, &lv_font_AlibabaPuHuiTiRegular_19, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_200, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_200, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_200, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_200, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_200, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_200, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_200, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_200, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_200, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_200, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_cont_40
    ui->screen_samrt_lab_cont_40 = lv_obj_create(ui->screen_samrt_lab_cont_39);
    lv_obj_set_pos(ui->screen_samrt_lab_cont_40, 97, 291);
    lv_obj_set_size(ui->screen_samrt_lab_cont_40, 90, 18);
    lv_obj_set_scrollbar_mode(ui->screen_samrt_lab_cont_40, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_samrt_lab_cont_40, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_cont_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_cont_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_cont_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_cont_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_cont_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_cont_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_cont_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_cont_40, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_48
    ui->screen_samrt_lab_line_48 = lv_line_create(ui->screen_samrt_lab_cont_40);
    lv_obj_set_pos(ui->screen_samrt_lab_line_48, 5, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_48, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_48[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_48, screen_samrt_lab_line_48, 2);

    //Write style for screen_samrt_lab_line_48, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_48, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_48, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_48, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_48, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_47
    ui->screen_samrt_lab_line_47 = lv_line_create(ui->screen_samrt_lab_cont_40);
    lv_obj_set_pos(ui->screen_samrt_lab_line_47, 30, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_47, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_47[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_47, screen_samrt_lab_line_47, 2);

    //Write style for screen_samrt_lab_line_47, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_47, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_47, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_47, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_47, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_46
    ui->screen_samrt_lab_line_46 = lv_line_create(ui->screen_samrt_lab_cont_40);
    lv_obj_set_pos(ui->screen_samrt_lab_line_46, 55, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_46, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_46[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_46, screen_samrt_lab_line_46, 2);

    //Write style for screen_samrt_lab_line_46, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_46, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_46, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_46, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_46, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_45
    ui->screen_samrt_lab_line_45 = lv_line_create(ui->screen_samrt_lab_cont_40);
    lv_obj_set_pos(ui->screen_samrt_lab_line_45, 80, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_45, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_45[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_45, screen_samrt_lab_line_45, 2);

    //Write style for screen_samrt_lab_line_45, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_45, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_45, lv_color_hex(0x44D7B6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_45, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_45, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_cont_41
    ui->screen_samrt_lab_cont_41 = lv_obj_create(ui->screen_samrt_lab_cont_screen_smart_lab);
    lv_obj_set_pos(ui->screen_samrt_lab_cont_41, 335, 446);
    lv_obj_set_size(ui->screen_samrt_lab_cont_41, 286, 329);
    lv_obj_set_scrollbar_mode(ui->screen_samrt_lab_cont_41, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_samrt_lab_cont_41, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_cont_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_cont_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_cont_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_cont_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_cont_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_cont_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_cont_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_cont_41, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_cont_42
    ui->screen_samrt_lab_cont_42 = lv_obj_create(ui->screen_samrt_lab_cont_41);
    lv_obj_set_pos(ui->screen_samrt_lab_cont_42, 0, 0);
    lv_obj_set_size(ui->screen_samrt_lab_cont_42, 286, 329);
    lv_obj_set_scrollbar_mode(ui->screen_samrt_lab_cont_42, LV_SCROLLBAR_MODE_OFF);
    lv_obj_remove_flag(ui->screen_samrt_lab_cont_42, LV_OBJ_FLAG_GESTURE_BUBBLE);

    //Write style for screen_samrt_lab_cont_42, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_cont_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_cont_42, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_cont_42, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_samrt_lab_cont_42, lv_color_hex(0x2A405C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_samrt_lab_cont_42, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_cont_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_cont_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_cont_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_cont_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_cont_42, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_img_89
    ui->screen_samrt_lab_img_89 = lv_image_create(ui->screen_samrt_lab_cont_42);
    lv_obj_set_pos(ui->screen_samrt_lab_img_89, 27, 30);
    lv_obj_set_size(ui->screen_samrt_lab_img_89, 52, 52);
    lv_obj_add_flag(ui->screen_samrt_lab_img_89, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_samrt_lab_img_89, &_icon_combustible_gas_RGB565A8_52x52);
    lv_image_set_pivot(ui->screen_samrt_lab_img_89, 50,50);
    lv_image_set_rotation(ui->screen_samrt_lab_img_89, 0);

    //Write style for screen_samrt_lab_img_89, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_samrt_lab_img_89, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_samrt_lab_img_89, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_207
    ui->screen_samrt_lab_label_207 = lv_label_create(ui->screen_samrt_lab_cont_42);
    lv_obj_set_pos(ui->screen_samrt_lab_label_207, 80, 43);
    lv_obj_set_size(ui->screen_samrt_lab_label_207, 130, 33);
    lv_label_set_text(ui->screen_samrt_lab_label_207, "可燃气体");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_207, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_207, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_207, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_207, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_207, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_207, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_207, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_207, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_207, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_207, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_207, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_207, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_207, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_207, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_207, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_207, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_206
    ui->screen_samrt_lab_label_206 = lv_label_create(ui->screen_samrt_lab_cont_42);
    lv_obj_set_pos(ui->screen_samrt_lab_label_206, 84, 145);
    lv_obj_set_size(ui->screen_samrt_lab_label_206, 120, 83);
    lv_label_set_text(ui->screen_samrt_lab_label_206, "33.4");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_206, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_206, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_206, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_206, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_206, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_206, &lv_font_DINCondBlack_70, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_206, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_206, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_206, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_206, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_206, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_206, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_206, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_206, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_206, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_206, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_205
    ui->screen_samrt_lab_label_205 = lv_label_create(ui->screen_samrt_lab_cont_42);
    lv_obj_set_pos(ui->screen_samrt_lab_label_205, 202, 281);
    lv_obj_set_size(ui->screen_samrt_lab_label_205, 61, 30);
    lv_label_set_text(ui->screen_samrt_lab_label_205, "%LEL");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_205, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_205, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_205, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_205, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_205, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_205, &lv_font_AlibabaPuHuiTiRegular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_205, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_205, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_205, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_205, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_205, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_205, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_205, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_205, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_205, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_205, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_img_88
    ui->screen_samrt_lab_img_88 = lv_image_create(ui->screen_samrt_lab_cont_42);
    lv_obj_set_pos(ui->screen_samrt_lab_img_88, 201, 80);
    lv_obj_set_size(ui->screen_samrt_lab_img_88, 50, 50);
    lv_obj_add_flag(ui->screen_samrt_lab_img_88, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_samrt_lab_img_88, &_img_label_RGB565A8_50x50);
    lv_image_set_pivot(ui->screen_samrt_lab_img_88, 50,50);
    lv_image_set_rotation(ui->screen_samrt_lab_img_88, 0);

    //Write style for screen_samrt_lab_img_88, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_samrt_lab_img_88, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_samrt_lab_img_88, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_204
    ui->screen_samrt_lab_label_204 = lv_label_create(ui->screen_samrt_lab_cont_42);
    lv_obj_set_pos(ui->screen_samrt_lab_label_204, 211, 91);
    lv_obj_set_size(ui->screen_samrt_lab_label_204, 32, 26);
    lv_label_set_text(ui->screen_samrt_lab_label_204, "1-1");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_204, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_204, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_204, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_204, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_204, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_204, &lv_font_AlibabaPuHuiTiRegular_19, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_204, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_204, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_204, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_204, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_204, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_204, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_204, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_204, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_204, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_204, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_cont_43
    ui->screen_samrt_lab_cont_43 = lv_obj_create(ui->screen_samrt_lab_cont_42);
    lv_obj_set_pos(ui->screen_samrt_lab_cont_43, 97, 291);
    lv_obj_set_size(ui->screen_samrt_lab_cont_43, 90, 18);
    lv_obj_set_scrollbar_mode(ui->screen_samrt_lab_cont_43, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_samrt_lab_cont_43, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_cont_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_cont_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_cont_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_cont_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_cont_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_cont_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_cont_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_cont_43, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_52
    ui->screen_samrt_lab_line_52 = lv_line_create(ui->screen_samrt_lab_cont_43);
    lv_obj_set_pos(ui->screen_samrt_lab_line_52, 5, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_52, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_52[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_52, screen_samrt_lab_line_52, 2);

    //Write style for screen_samrt_lab_line_52, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_52, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_52, lv_color_hex(0x44D7B6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_52, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_52, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_51
    ui->screen_samrt_lab_line_51 = lv_line_create(ui->screen_samrt_lab_cont_43);
    lv_obj_set_pos(ui->screen_samrt_lab_line_51, 30, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_51, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_51[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_51, screen_samrt_lab_line_51, 2);

    //Write style for screen_samrt_lab_line_51, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_51, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_51, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_51, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_51, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_50
    ui->screen_samrt_lab_line_50 = lv_line_create(ui->screen_samrt_lab_cont_43);
    lv_obj_set_pos(ui->screen_samrt_lab_line_50, 55, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_50, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_50[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_50, screen_samrt_lab_line_50, 2);

    //Write style for screen_samrt_lab_line_50, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_50, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_50, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_50, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_50, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_49
    ui->screen_samrt_lab_line_49 = lv_line_create(ui->screen_samrt_lab_cont_43);
    lv_obj_set_pos(ui->screen_samrt_lab_line_49, 80, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_49, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_49[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_49, screen_samrt_lab_line_49, 2);

    //Write style for screen_samrt_lab_line_49, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_49, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_49, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_49, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_49, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_cont_44
    ui->screen_samrt_lab_cont_44 = lv_obj_create(ui->screen_samrt_lab_cont_41);
    lv_obj_set_pos(ui->screen_samrt_lab_cont_44, 0, 0);
    lv_obj_set_size(ui->screen_samrt_lab_cont_44, 286, 329);
    lv_obj_set_scrollbar_mode(ui->screen_samrt_lab_cont_44, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_samrt_lab_cont_44, LV_OBJ_FLAG_HIDDEN);
    lv_obj_remove_flag(ui->screen_samrt_lab_cont_44, LV_OBJ_FLAG_GESTURE_BUBBLE);

    //Write style for screen_samrt_lab_cont_44, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_cont_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_cont_44, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_cont_44, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_samrt_lab_cont_44, lv_color_hex(0x2A405C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_samrt_lab_cont_44, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_cont_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_cont_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_cont_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_cont_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_cont_44, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_img_91
    ui->screen_samrt_lab_img_91 = lv_image_create(ui->screen_samrt_lab_cont_44);
    lv_obj_set_pos(ui->screen_samrt_lab_img_91, 27, 30);
    lv_obj_set_size(ui->screen_samrt_lab_img_91, 52, 52);
    lv_obj_add_flag(ui->screen_samrt_lab_img_91, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_samrt_lab_img_91, &_icon_combustible_gas_RGB565A8_52x52);
    lv_image_set_pivot(ui->screen_samrt_lab_img_91, 50,50);
    lv_image_set_rotation(ui->screen_samrt_lab_img_91, 0);

    //Write style for screen_samrt_lab_img_91, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_samrt_lab_img_91, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_samrt_lab_img_91, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_211
    ui->screen_samrt_lab_label_211 = lv_label_create(ui->screen_samrt_lab_cont_44);
    lv_obj_set_pos(ui->screen_samrt_lab_label_211, 80, 43);
    lv_obj_set_size(ui->screen_samrt_lab_label_211, 130, 33);
    lv_label_set_text(ui->screen_samrt_lab_label_211, "可燃气体");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_211, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_211, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_211, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_211, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_211, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_211, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_211, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_211, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_211, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_211, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_211, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_211, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_211, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_211, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_211, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_211, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_210
    ui->screen_samrt_lab_label_210 = lv_label_create(ui->screen_samrt_lab_cont_44);
    lv_obj_set_pos(ui->screen_samrt_lab_label_210, 84, 145);
    lv_obj_set_size(ui->screen_samrt_lab_label_210, 120, 83);
    lv_label_set_text(ui->screen_samrt_lab_label_210, "33.4");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_210, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_210, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_210, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_210, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_210, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_210, &lv_font_DINCondBlack_70, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_210, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_210, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_210, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_210, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_210, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_210, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_210, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_210, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_210, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_210, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_209
    ui->screen_samrt_lab_label_209 = lv_label_create(ui->screen_samrt_lab_cont_44);
    lv_obj_set_pos(ui->screen_samrt_lab_label_209, 202, 281);
    lv_obj_set_size(ui->screen_samrt_lab_label_209, 61, 30);
    lv_label_set_text(ui->screen_samrt_lab_label_209, "%LEL");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_209, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_209, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_209, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_209, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_209, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_209, &lv_font_AlibabaPuHuiTiRegular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_209, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_209, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_209, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_209, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_209, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_209, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_209, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_209, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_209, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_209, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_img_90
    ui->screen_samrt_lab_img_90 = lv_image_create(ui->screen_samrt_lab_cont_44);
    lv_obj_set_pos(ui->screen_samrt_lab_img_90, 201, 80);
    lv_obj_set_size(ui->screen_samrt_lab_img_90, 50, 50);
    lv_obj_add_flag(ui->screen_samrt_lab_img_90, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_samrt_lab_img_90, &_img_label_RGB565A8_50x50);
    lv_image_set_pivot(ui->screen_samrt_lab_img_90, 50,50);
    lv_image_set_rotation(ui->screen_samrt_lab_img_90, 0);

    //Write style for screen_samrt_lab_img_90, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_samrt_lab_img_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_samrt_lab_img_90, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_208
    ui->screen_samrt_lab_label_208 = lv_label_create(ui->screen_samrt_lab_cont_44);
    lv_obj_set_pos(ui->screen_samrt_lab_label_208, 211, 91);
    lv_obj_set_size(ui->screen_samrt_lab_label_208, 32, 26);
    lv_label_set_text(ui->screen_samrt_lab_label_208, "1-2");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_208, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_208, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_208, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_208, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_208, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_208, &lv_font_AlibabaPuHuiTiRegular_19, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_208, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_208, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_208, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_208, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_208, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_208, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_208, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_208, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_208, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_208, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_cont_45
    ui->screen_samrt_lab_cont_45 = lv_obj_create(ui->screen_samrt_lab_cont_44);
    lv_obj_set_pos(ui->screen_samrt_lab_cont_45, 97, 291);
    lv_obj_set_size(ui->screen_samrt_lab_cont_45, 90, 18);
    lv_obj_set_scrollbar_mode(ui->screen_samrt_lab_cont_45, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_samrt_lab_cont_45, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_cont_45, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_cont_45, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_cont_45, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_cont_45, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_cont_45, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_cont_45, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_cont_45, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_cont_45, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_56
    ui->screen_samrt_lab_line_56 = lv_line_create(ui->screen_samrt_lab_cont_45);
    lv_obj_set_pos(ui->screen_samrt_lab_line_56, 5, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_56, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_56[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_56, screen_samrt_lab_line_56, 2);

    //Write style for screen_samrt_lab_line_56, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_56, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_56, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_56, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_56, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_55
    ui->screen_samrt_lab_line_55 = lv_line_create(ui->screen_samrt_lab_cont_45);
    lv_obj_set_pos(ui->screen_samrt_lab_line_55, 30, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_55, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_55[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_55, screen_samrt_lab_line_55, 2);

    //Write style for screen_samrt_lab_line_55, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_55, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_55, lv_color_hex(0x44D7B6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_55, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_55, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_54
    ui->screen_samrt_lab_line_54 = lv_line_create(ui->screen_samrt_lab_cont_45);
    lv_obj_set_pos(ui->screen_samrt_lab_line_54, 55, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_54, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_54[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_54, screen_samrt_lab_line_54, 2);

    //Write style for screen_samrt_lab_line_54, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_54, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_54, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_54, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_54, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_53
    ui->screen_samrt_lab_line_53 = lv_line_create(ui->screen_samrt_lab_cont_45);
    lv_obj_set_pos(ui->screen_samrt_lab_line_53, 80, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_53, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_53[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_53, screen_samrt_lab_line_53, 2);

    //Write style for screen_samrt_lab_line_53, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_53, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_53, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_53, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_53, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_cont_46
    ui->screen_samrt_lab_cont_46 = lv_obj_create(ui->screen_samrt_lab_cont_41);
    lv_obj_set_pos(ui->screen_samrt_lab_cont_46, 0, 0);
    lv_obj_set_size(ui->screen_samrt_lab_cont_46, 286, 329);
    lv_obj_set_scrollbar_mode(ui->screen_samrt_lab_cont_46, LV_SCROLLBAR_MODE_OFF);
    lv_obj_remove_flag(ui->screen_samrt_lab_cont_46, LV_OBJ_FLAG_GESTURE_BUBBLE);

    //Write style for screen_samrt_lab_cont_46, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_cont_46, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_cont_46, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_cont_46, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_samrt_lab_cont_46, lv_color_hex(0x2A405C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_samrt_lab_cont_46, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_cont_46, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_cont_46, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_cont_46, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_cont_46, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_cont_46, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_img_93
    ui->screen_samrt_lab_img_93 = lv_image_create(ui->screen_samrt_lab_cont_46);
    lv_obj_set_pos(ui->screen_samrt_lab_img_93, 27, 30);
    lv_obj_set_size(ui->screen_samrt_lab_img_93, 52, 52);
    lv_obj_add_flag(ui->screen_samrt_lab_img_93, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_samrt_lab_img_93, &_icon_combustible_gas_RGB565A8_52x52);
    lv_image_set_pivot(ui->screen_samrt_lab_img_93, 50,50);
    lv_image_set_rotation(ui->screen_samrt_lab_img_93, 0);

    //Write style for screen_samrt_lab_img_93, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_samrt_lab_img_93, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_samrt_lab_img_93, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_215
    ui->screen_samrt_lab_label_215 = lv_label_create(ui->screen_samrt_lab_cont_46);
    lv_obj_set_pos(ui->screen_samrt_lab_label_215, 80, 43);
    lv_obj_set_size(ui->screen_samrt_lab_label_215, 130, 33);
    lv_label_set_text(ui->screen_samrt_lab_label_215, "可燃气体");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_215, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_215, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_215, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_215, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_215, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_215, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_215, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_215, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_215, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_215, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_215, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_215, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_215, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_215, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_215, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_215, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_214
    ui->screen_samrt_lab_label_214 = lv_label_create(ui->screen_samrt_lab_cont_46);
    lv_obj_set_pos(ui->screen_samrt_lab_label_214, 84, 145);
    lv_obj_set_size(ui->screen_samrt_lab_label_214, 120, 83);
    lv_label_set_text(ui->screen_samrt_lab_label_214, "33.4");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_214, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_214, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_214, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_214, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_214, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_214, &lv_font_DINCondBlack_70, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_214, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_214, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_214, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_214, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_214, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_214, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_214, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_214, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_214, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_214, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_213
    ui->screen_samrt_lab_label_213 = lv_label_create(ui->screen_samrt_lab_cont_46);
    lv_obj_set_pos(ui->screen_samrt_lab_label_213, 202, 281);
    lv_obj_set_size(ui->screen_samrt_lab_label_213, 61, 30);
    lv_label_set_text(ui->screen_samrt_lab_label_213, "%LEL");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_213, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_213, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_213, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_213, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_213, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_213, &lv_font_AlibabaPuHuiTiRegular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_213, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_213, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_213, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_213, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_213, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_213, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_213, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_213, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_213, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_213, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_img_92
    ui->screen_samrt_lab_img_92 = lv_image_create(ui->screen_samrt_lab_cont_46);
    lv_obj_set_pos(ui->screen_samrt_lab_img_92, 201, 80);
    lv_obj_set_size(ui->screen_samrt_lab_img_92, 50, 50);
    lv_obj_add_flag(ui->screen_samrt_lab_img_92, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_samrt_lab_img_92, &_img_label_RGB565A8_50x50);
    lv_image_set_pivot(ui->screen_samrt_lab_img_92, 50,50);
    lv_image_set_rotation(ui->screen_samrt_lab_img_92, 0);

    //Write style for screen_samrt_lab_img_92, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_samrt_lab_img_92, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_samrt_lab_img_92, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_212
    ui->screen_samrt_lab_label_212 = lv_label_create(ui->screen_samrt_lab_cont_46);
    lv_obj_set_pos(ui->screen_samrt_lab_label_212, 211, 91);
    lv_obj_set_size(ui->screen_samrt_lab_label_212, 32, 26);
    lv_label_set_text(ui->screen_samrt_lab_label_212, "1-3");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_212, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_212, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_212, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_212, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_212, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_212, &lv_font_AlibabaPuHuiTiRegular_19, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_212, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_212, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_212, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_212, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_212, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_212, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_212, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_212, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_212, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_212, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_cont_47
    ui->screen_samrt_lab_cont_47 = lv_obj_create(ui->screen_samrt_lab_cont_46);
    lv_obj_set_pos(ui->screen_samrt_lab_cont_47, 97, 291);
    lv_obj_set_size(ui->screen_samrt_lab_cont_47, 90, 18);
    lv_obj_set_scrollbar_mode(ui->screen_samrt_lab_cont_47, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_samrt_lab_cont_47, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_cont_47, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_cont_47, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_cont_47, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_cont_47, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_cont_47, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_cont_47, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_cont_47, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_cont_47, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_60
    ui->screen_samrt_lab_line_60 = lv_line_create(ui->screen_samrt_lab_cont_47);
    lv_obj_set_pos(ui->screen_samrt_lab_line_60, 5, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_60, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_60[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_60, screen_samrt_lab_line_60, 2);

    //Write style for screen_samrt_lab_line_60, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_60, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_60, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_60, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_60, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_59
    ui->screen_samrt_lab_line_59 = lv_line_create(ui->screen_samrt_lab_cont_47);
    lv_obj_set_pos(ui->screen_samrt_lab_line_59, 30, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_59, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_59[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_59, screen_samrt_lab_line_59, 2);

    //Write style for screen_samrt_lab_line_59, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_59, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_59, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_59, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_59, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_58
    ui->screen_samrt_lab_line_58 = lv_line_create(ui->screen_samrt_lab_cont_47);
    lv_obj_set_pos(ui->screen_samrt_lab_line_58, 55, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_58, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_58[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_58, screen_samrt_lab_line_58, 2);

    //Write style for screen_samrt_lab_line_58, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_58, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_58, lv_color_hex(0x44D7B6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_58, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_58, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_57
    ui->screen_samrt_lab_line_57 = lv_line_create(ui->screen_samrt_lab_cont_47);
    lv_obj_set_pos(ui->screen_samrt_lab_line_57, 80, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_57, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_57[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_57, screen_samrt_lab_line_57, 2);

    //Write style for screen_samrt_lab_line_57, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_57, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_57, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_57, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_57, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_cont_48
    ui->screen_samrt_lab_cont_48 = lv_obj_create(ui->screen_samrt_lab_cont_41);
    lv_obj_set_pos(ui->screen_samrt_lab_cont_48, 0, 0);
    lv_obj_set_size(ui->screen_samrt_lab_cont_48, 286, 329);
    lv_obj_set_scrollbar_mode(ui->screen_samrt_lab_cont_48, LV_SCROLLBAR_MODE_OFF);
    lv_obj_remove_flag(ui->screen_samrt_lab_cont_48, LV_OBJ_FLAG_GESTURE_BUBBLE);

    //Write style for screen_samrt_lab_cont_48, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_cont_48, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_cont_48, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_cont_48, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_samrt_lab_cont_48, lv_color_hex(0x2A405C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_samrt_lab_cont_48, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_cont_48, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_cont_48, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_cont_48, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_cont_48, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_cont_48, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_img_95
    ui->screen_samrt_lab_img_95 = lv_image_create(ui->screen_samrt_lab_cont_48);
    lv_obj_set_pos(ui->screen_samrt_lab_img_95, 27, 30);
    lv_obj_set_size(ui->screen_samrt_lab_img_95, 52, 52);
    lv_obj_add_flag(ui->screen_samrt_lab_img_95, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_samrt_lab_img_95, &_icon_combustible_gas_RGB565A8_52x52);
    lv_image_set_pivot(ui->screen_samrt_lab_img_95, 50,50);
    lv_image_set_rotation(ui->screen_samrt_lab_img_95, 0);

    //Write style for screen_samrt_lab_img_95, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_samrt_lab_img_95, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_samrt_lab_img_95, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_219
    ui->screen_samrt_lab_label_219 = lv_label_create(ui->screen_samrt_lab_cont_48);
    lv_obj_set_pos(ui->screen_samrt_lab_label_219, 80, 43);
    lv_obj_set_size(ui->screen_samrt_lab_label_219, 130, 33);
    lv_label_set_text(ui->screen_samrt_lab_label_219, "可燃气体");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_219, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_219, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_219, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_219, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_219, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_219, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_219, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_219, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_219, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_219, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_219, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_219, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_219, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_219, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_219, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_219, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_218
    ui->screen_samrt_lab_label_218 = lv_label_create(ui->screen_samrt_lab_cont_48);
    lv_obj_set_pos(ui->screen_samrt_lab_label_218, 84, 145);
    lv_obj_set_size(ui->screen_samrt_lab_label_218, 120, 83);
    lv_label_set_text(ui->screen_samrt_lab_label_218, "33.4");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_218, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_218, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_218, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_218, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_218, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_218, &lv_font_DINCondBlack_70, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_218, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_218, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_218, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_218, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_218, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_218, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_218, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_218, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_218, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_218, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_217
    ui->screen_samrt_lab_label_217 = lv_label_create(ui->screen_samrt_lab_cont_48);
    lv_obj_set_pos(ui->screen_samrt_lab_label_217, 202, 281);
    lv_obj_set_size(ui->screen_samrt_lab_label_217, 61, 30);
    lv_label_set_text(ui->screen_samrt_lab_label_217, "%LEL");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_217, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_217, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_217, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_217, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_217, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_217, &lv_font_AlibabaPuHuiTiRegular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_217, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_217, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_217, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_217, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_217, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_217, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_217, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_217, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_217, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_217, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_img_94
    ui->screen_samrt_lab_img_94 = lv_image_create(ui->screen_samrt_lab_cont_48);
    lv_obj_set_pos(ui->screen_samrt_lab_img_94, 201, 80);
    lv_obj_set_size(ui->screen_samrt_lab_img_94, 50, 50);
    lv_obj_add_flag(ui->screen_samrt_lab_img_94, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_samrt_lab_img_94, &_img_label_RGB565A8_50x50);
    lv_image_set_pivot(ui->screen_samrt_lab_img_94, 50,50);
    lv_image_set_rotation(ui->screen_samrt_lab_img_94, 0);

    //Write style for screen_samrt_lab_img_94, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_samrt_lab_img_94, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_samrt_lab_img_94, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_216
    ui->screen_samrt_lab_label_216 = lv_label_create(ui->screen_samrt_lab_cont_48);
    lv_obj_set_pos(ui->screen_samrt_lab_label_216, 211, 91);
    lv_obj_set_size(ui->screen_samrt_lab_label_216, 32, 26);
    lv_label_set_text(ui->screen_samrt_lab_label_216, "1-4");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_216, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_216, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_216, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_216, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_216, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_216, &lv_font_AlibabaPuHuiTiRegular_19, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_216, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_216, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_216, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_216, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_216, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_216, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_216, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_216, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_216, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_216, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_cont_49
    ui->screen_samrt_lab_cont_49 = lv_obj_create(ui->screen_samrt_lab_cont_48);
    lv_obj_set_pos(ui->screen_samrt_lab_cont_49, 97, 291);
    lv_obj_set_size(ui->screen_samrt_lab_cont_49, 90, 18);
    lv_obj_set_scrollbar_mode(ui->screen_samrt_lab_cont_49, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_samrt_lab_cont_49, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_cont_49, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_cont_49, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_cont_49, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_cont_49, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_cont_49, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_cont_49, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_cont_49, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_cont_49, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_64
    ui->screen_samrt_lab_line_64 = lv_line_create(ui->screen_samrt_lab_cont_49);
    lv_obj_set_pos(ui->screen_samrt_lab_line_64, 5, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_64, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_64[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_64, screen_samrt_lab_line_64, 2);

    //Write style for screen_samrt_lab_line_64, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_64, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_64, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_64, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_64, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_63
    ui->screen_samrt_lab_line_63 = lv_line_create(ui->screen_samrt_lab_cont_49);
    lv_obj_set_pos(ui->screen_samrt_lab_line_63, 30, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_63, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_63[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_63, screen_samrt_lab_line_63, 2);

    //Write style for screen_samrt_lab_line_63, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_63, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_63, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_63, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_63, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_62
    ui->screen_samrt_lab_line_62 = lv_line_create(ui->screen_samrt_lab_cont_49);
    lv_obj_set_pos(ui->screen_samrt_lab_line_62, 55, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_62, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_62[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_62, screen_samrt_lab_line_62, 2);

    //Write style for screen_samrt_lab_line_62, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_62, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_62, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_62, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_62, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_61
    ui->screen_samrt_lab_line_61 = lv_line_create(ui->screen_samrt_lab_cont_49);
    lv_obj_set_pos(ui->screen_samrt_lab_line_61, 80, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_61, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_61[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_61, screen_samrt_lab_line_61, 2);

    //Write style for screen_samrt_lab_line_61, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_61, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_61, lv_color_hex(0x44D7B6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_61, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_61, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_cont_50
    ui->screen_samrt_lab_cont_50 = lv_obj_create(ui->screen_samrt_lab_cont_screen_smart_lab);
    lv_obj_set_pos(ui->screen_samrt_lab_cont_50, 972, 451);
    lv_obj_set_size(ui->screen_samrt_lab_cont_50, 286, 329);
    lv_obj_set_scrollbar_mode(ui->screen_samrt_lab_cont_50, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_samrt_lab_cont_50, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_cont_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_cont_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_cont_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_cont_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_cont_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_cont_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_cont_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_cont_50, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_cont_51
    ui->screen_samrt_lab_cont_51 = lv_obj_create(ui->screen_samrt_lab_cont_50);
    lv_obj_set_pos(ui->screen_samrt_lab_cont_51, 0, 0);
    lv_obj_set_size(ui->screen_samrt_lab_cont_51, 286, 329);
    lv_obj_set_scrollbar_mode(ui->screen_samrt_lab_cont_51, LV_SCROLLBAR_MODE_OFF);
    lv_obj_remove_flag(ui->screen_samrt_lab_cont_51, LV_OBJ_FLAG_GESTURE_BUBBLE);

    //Write style for screen_samrt_lab_cont_51, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_cont_51, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_cont_51, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_cont_51, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_samrt_lab_cont_51, lv_color_hex(0x2A405C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_samrt_lab_cont_51, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_cont_51, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_cont_51, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_cont_51, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_cont_51, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_cont_51, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_img_97
    ui->screen_samrt_lab_img_97 = lv_image_create(ui->screen_samrt_lab_cont_51);
    lv_obj_set_pos(ui->screen_samrt_lab_img_97, 27, 29);
    lv_obj_set_size(ui->screen_samrt_lab_img_97, 52, 52);
    lv_obj_add_flag(ui->screen_samrt_lab_img_97, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_samrt_lab_img_97, &_icon_gonglv_RGB565A8_52x52);
    lv_image_set_pivot(ui->screen_samrt_lab_img_97, 50,50);
    lv_image_set_rotation(ui->screen_samrt_lab_img_97, 0);

    //Write style for screen_samrt_lab_img_97, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_samrt_lab_img_97, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_samrt_lab_img_97, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_227
    ui->screen_samrt_lab_label_227 = lv_label_create(ui->screen_samrt_lab_cont_51);
    lv_obj_set_pos(ui->screen_samrt_lab_label_227, 79, 43);
    lv_obj_set_size(ui->screen_samrt_lab_label_227, 130, 33);
    lv_label_set_text(ui->screen_samrt_lab_label_227, "功耗监测");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_227, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_227, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_227, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_227, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_227, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_227, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_227, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_227, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_227, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_227, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_227, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_227, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_227, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_227, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_227, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_227, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_226
    ui->screen_samrt_lab_label_226 = lv_label_create(ui->screen_samrt_lab_cont_51);
    lv_obj_set_pos(ui->screen_samrt_lab_label_226, 52, 110);
    lv_obj_set_size(ui->screen_samrt_lab_label_226, 45, 47);
    lv_label_set_text(ui->screen_samrt_lab_label_226, "1.2");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_226, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_226, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_226, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_226, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_226, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_226, &lv_font_DINCondBlack_40, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_226, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_226, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_226, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_226, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_226, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_226, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_226, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_226, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_226, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_226, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_225
    ui->screen_samrt_lab_label_225 = lv_label_create(ui->screen_samrt_lab_cont_51);
    lv_obj_set_pos(ui->screen_samrt_lab_label_225, 158, 118);
    lv_obj_set_size(ui->screen_samrt_lab_label_225, 100, 32);
    lv_label_set_text(ui->screen_samrt_lab_label_225, "电流(A)");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_225, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_225, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_225, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_225, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_225, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_225, &lv_font_AlibabaPuHuiTiRegular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_225, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_225, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_225, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_225, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_225, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_225, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_225, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_225, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_225, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_225, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_224
    ui->screen_samrt_lab_label_224 = lv_label_create(ui->screen_samrt_lab_cont_51);
    lv_obj_set_pos(ui->screen_samrt_lab_label_224, 53, 164);
    lv_obj_set_size(ui->screen_samrt_lab_label_224, 92, 47);
    lv_label_set_text(ui->screen_samrt_lab_label_224, "396.3");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_224, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_224, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_224, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_224, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_224, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_224, &lv_font_DINCondBlack_40, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_224, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_224, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_224, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_224, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_224, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_224, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_224, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_224, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_224, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_224, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_223
    ui->screen_samrt_lab_label_223 = lv_label_create(ui->screen_samrt_lab_cont_51);
    lv_obj_set_pos(ui->screen_samrt_lab_label_223, 159, 172);
    lv_obj_set_size(ui->screen_samrt_lab_label_223, 100, 32);
    lv_label_set_text(ui->screen_samrt_lab_label_223, "电压(V)");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_223, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_223, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_223, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_223, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_223, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_223, &lv_font_AlibabaPuHuiTiRegular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_223, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_223, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_223, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_223, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_223, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_223, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_223, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_223, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_223, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_223, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_222
    ui->screen_samrt_lab_label_222 = lv_label_create(ui->screen_samrt_lab_cont_51);
    lv_obj_set_pos(ui->screen_samrt_lab_label_222, 54, 217);
    lv_obj_set_size(ui->screen_samrt_lab_label_222, 130, 47);
    lv_label_set_text(ui->screen_samrt_lab_label_222, "320.4");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_222, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_222, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_222, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_222, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_222, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_222, &lv_font_DINCondBlack_40, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_222, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_222, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_222, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_222, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_222, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_222, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_222, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_222, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_222, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_222, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_221
    ui->screen_samrt_lab_label_221 = lv_label_create(ui->screen_samrt_lab_cont_51);
    lv_obj_set_pos(ui->screen_samrt_lab_label_221, 159, 224);
    lv_obj_set_size(ui->screen_samrt_lab_label_221, 100, 32);
    lv_label_set_text(ui->screen_samrt_lab_label_221, "功率(w)");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_221, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_221, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_221, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_221, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_221, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_221, &lv_font_AlibabaPuHuiTiRegular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_221, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_221, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_221, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_221, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_221, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_221, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_221, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_221, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_221, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_221, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_img_96
    ui->screen_samrt_lab_img_96 = lv_image_create(ui->screen_samrt_lab_cont_51);
    lv_obj_set_pos(ui->screen_samrt_lab_img_96, 215, 60);
    lv_obj_set_size(ui->screen_samrt_lab_img_96, 50, 50);
    lv_obj_add_flag(ui->screen_samrt_lab_img_96, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_samrt_lab_img_96, &_img_label_RGB565A8_50x50);
    lv_image_set_pivot(ui->screen_samrt_lab_img_96, 50,50);
    lv_image_set_rotation(ui->screen_samrt_lab_img_96, 0);

    //Write style for screen_samrt_lab_img_96, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_samrt_lab_img_96, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_samrt_lab_img_96, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_220
    ui->screen_samrt_lab_label_220 = lv_label_create(ui->screen_samrt_lab_cont_51);
    lv_obj_set_pos(ui->screen_samrt_lab_label_220, 224, 70);
    lv_obj_set_size(ui->screen_samrt_lab_label_220, 32, 26);
    lv_label_set_text(ui->screen_samrt_lab_label_220, "1-1");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_220, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_220, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_220, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_220, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_220, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_220, &lv_font_AlibabaPuHuiTiRegular_19, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_220, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_220, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_220, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_220, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_220, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_220, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_220, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_220, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_220, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_220, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_cont_52
    ui->screen_samrt_lab_cont_52 = lv_obj_create(ui->screen_samrt_lab_cont_51);
    lv_obj_set_pos(ui->screen_samrt_lab_cont_52, 100, 291);
    lv_obj_set_size(ui->screen_samrt_lab_cont_52, 90, 18);
    lv_obj_set_scrollbar_mode(ui->screen_samrt_lab_cont_52, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_samrt_lab_cont_52, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_cont_52, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_cont_52, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_cont_52, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_cont_52, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_cont_52, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_cont_52, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_cont_52, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_cont_52, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_68
    ui->screen_samrt_lab_line_68 = lv_line_create(ui->screen_samrt_lab_cont_52);
    lv_obj_set_pos(ui->screen_samrt_lab_line_68, 5, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_68, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_68[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_68, screen_samrt_lab_line_68, 2);

    //Write style for screen_samrt_lab_line_68, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_68, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_68, lv_color_hex(0x44D7B6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_68, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_68, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_67
    ui->screen_samrt_lab_line_67 = lv_line_create(ui->screen_samrt_lab_cont_52);
    lv_obj_set_pos(ui->screen_samrt_lab_line_67, 30, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_67, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_67[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_67, screen_samrt_lab_line_67, 2);

    //Write style for screen_samrt_lab_line_67, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_67, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_67, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_67, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_67, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_66
    ui->screen_samrt_lab_line_66 = lv_line_create(ui->screen_samrt_lab_cont_52);
    lv_obj_set_pos(ui->screen_samrt_lab_line_66, 55, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_66, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_66[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_66, screen_samrt_lab_line_66, 2);

    //Write style for screen_samrt_lab_line_66, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_66, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_66, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_66, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_66, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_65
    ui->screen_samrt_lab_line_65 = lv_line_create(ui->screen_samrt_lab_cont_52);
    lv_obj_set_pos(ui->screen_samrt_lab_line_65, 80, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_65, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_65[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_65, screen_samrt_lab_line_65, 2);

    //Write style for screen_samrt_lab_line_65, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_65, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_65, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_65, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_65, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_cont_53
    ui->screen_samrt_lab_cont_53 = lv_obj_create(ui->screen_samrt_lab_cont_50);
    lv_obj_set_pos(ui->screen_samrt_lab_cont_53, 0, 0);
    lv_obj_set_size(ui->screen_samrt_lab_cont_53, 286, 329);
    lv_obj_set_scrollbar_mode(ui->screen_samrt_lab_cont_53, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_samrt_lab_cont_53, LV_OBJ_FLAG_HIDDEN);
    lv_obj_remove_flag(ui->screen_samrt_lab_cont_53, LV_OBJ_FLAG_GESTURE_BUBBLE);

    //Write style for screen_samrt_lab_cont_53, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_cont_53, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_cont_53, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_cont_53, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_samrt_lab_cont_53, lv_color_hex(0x2A405C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_samrt_lab_cont_53, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_cont_53, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_cont_53, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_cont_53, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_cont_53, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_cont_53, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_img_99
    ui->screen_samrt_lab_img_99 = lv_image_create(ui->screen_samrt_lab_cont_53);
    lv_obj_set_pos(ui->screen_samrt_lab_img_99, 27, 29);
    lv_obj_set_size(ui->screen_samrt_lab_img_99, 52, 52);
    lv_obj_add_flag(ui->screen_samrt_lab_img_99, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_samrt_lab_img_99, &_icon_gonglv_RGB565A8_52x52);
    lv_image_set_pivot(ui->screen_samrt_lab_img_99, 50,50);
    lv_image_set_rotation(ui->screen_samrt_lab_img_99, 0);

    //Write style for screen_samrt_lab_img_99, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_samrt_lab_img_99, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_samrt_lab_img_99, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_235
    ui->screen_samrt_lab_label_235 = lv_label_create(ui->screen_samrt_lab_cont_53);
    lv_obj_set_pos(ui->screen_samrt_lab_label_235, 79, 43);
    lv_obj_set_size(ui->screen_samrt_lab_label_235, 130, 33);
    lv_label_set_text(ui->screen_samrt_lab_label_235, "功耗监测");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_235, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_235, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_235, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_235, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_235, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_235, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_235, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_235, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_235, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_235, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_235, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_235, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_235, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_235, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_235, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_235, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_234
    ui->screen_samrt_lab_label_234 = lv_label_create(ui->screen_samrt_lab_cont_53);
    lv_obj_set_pos(ui->screen_samrt_lab_label_234, 52, 110);
    lv_obj_set_size(ui->screen_samrt_lab_label_234, 45, 47);
    lv_label_set_text(ui->screen_samrt_lab_label_234, "1.2");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_234, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_234, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_234, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_234, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_234, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_234, &lv_font_DINCondBlack_40, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_234, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_234, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_234, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_234, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_234, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_234, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_234, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_234, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_234, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_234, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_233
    ui->screen_samrt_lab_label_233 = lv_label_create(ui->screen_samrt_lab_cont_53);
    lv_obj_set_pos(ui->screen_samrt_lab_label_233, 158, 118);
    lv_obj_set_size(ui->screen_samrt_lab_label_233, 100, 32);
    lv_label_set_text(ui->screen_samrt_lab_label_233, "电流(A)");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_233, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_233, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_233, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_233, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_233, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_233, &lv_font_AlibabaPuHuiTiRegular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_233, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_233, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_233, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_233, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_233, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_233, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_233, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_233, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_233, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_233, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_232
    ui->screen_samrt_lab_label_232 = lv_label_create(ui->screen_samrt_lab_cont_53);
    lv_obj_set_pos(ui->screen_samrt_lab_label_232, 53, 164);
    lv_obj_set_size(ui->screen_samrt_lab_label_232, 92, 47);
    lv_label_set_text(ui->screen_samrt_lab_label_232, "396.3");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_232, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_232, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_232, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_232, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_232, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_232, &lv_font_DINCondBlack_40, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_232, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_232, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_232, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_232, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_232, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_232, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_232, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_232, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_232, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_232, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_231
    ui->screen_samrt_lab_label_231 = lv_label_create(ui->screen_samrt_lab_cont_53);
    lv_obj_set_pos(ui->screen_samrt_lab_label_231, 159, 172);
    lv_obj_set_size(ui->screen_samrt_lab_label_231, 100, 32);
    lv_label_set_text(ui->screen_samrt_lab_label_231, "电压(V)");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_231, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_231, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_231, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_231, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_231, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_231, &lv_font_AlibabaPuHuiTiRegular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_231, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_231, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_231, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_231, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_231, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_231, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_231, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_231, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_231, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_231, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_230
    ui->screen_samrt_lab_label_230 = lv_label_create(ui->screen_samrt_lab_cont_53);
    lv_obj_set_pos(ui->screen_samrt_lab_label_230, 54, 217);
    lv_obj_set_size(ui->screen_samrt_lab_label_230, 130, 47);
    lv_label_set_text(ui->screen_samrt_lab_label_230, "320.4");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_230, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_230, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_230, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_230, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_230, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_230, &lv_font_DINCondBlack_40, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_230, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_230, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_230, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_230, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_230, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_230, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_230, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_230, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_230, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_230, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_229
    ui->screen_samrt_lab_label_229 = lv_label_create(ui->screen_samrt_lab_cont_53);
    lv_obj_set_pos(ui->screen_samrt_lab_label_229, 159, 224);
    lv_obj_set_size(ui->screen_samrt_lab_label_229, 100, 32);
    lv_label_set_text(ui->screen_samrt_lab_label_229, "功率(w)");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_229, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_229, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_229, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_229, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_229, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_229, &lv_font_AlibabaPuHuiTiRegular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_229, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_229, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_229, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_229, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_229, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_229, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_229, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_229, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_229, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_229, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_img_98
    ui->screen_samrt_lab_img_98 = lv_image_create(ui->screen_samrt_lab_cont_53);
    lv_obj_set_pos(ui->screen_samrt_lab_img_98, 215, 60);
    lv_obj_set_size(ui->screen_samrt_lab_img_98, 50, 50);
    lv_obj_add_flag(ui->screen_samrt_lab_img_98, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_samrt_lab_img_98, &_img_label_RGB565A8_50x50);
    lv_image_set_pivot(ui->screen_samrt_lab_img_98, 50,50);
    lv_image_set_rotation(ui->screen_samrt_lab_img_98, 0);

    //Write style for screen_samrt_lab_img_98, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_samrt_lab_img_98, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_samrt_lab_img_98, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_228
    ui->screen_samrt_lab_label_228 = lv_label_create(ui->screen_samrt_lab_cont_53);
    lv_obj_set_pos(ui->screen_samrt_lab_label_228, 224, 70);
    lv_obj_set_size(ui->screen_samrt_lab_label_228, 32, 26);
    lv_label_set_text(ui->screen_samrt_lab_label_228, "1-2");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_228, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_228, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_228, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_228, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_228, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_228, &lv_font_AlibabaPuHuiTiRegular_19, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_228, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_228, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_228, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_228, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_228, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_228, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_228, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_228, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_228, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_228, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_cont_54
    ui->screen_samrt_lab_cont_54 = lv_obj_create(ui->screen_samrt_lab_cont_53);
    lv_obj_set_pos(ui->screen_samrt_lab_cont_54, 100, 291);
    lv_obj_set_size(ui->screen_samrt_lab_cont_54, 90, 18);
    lv_obj_set_scrollbar_mode(ui->screen_samrt_lab_cont_54, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_samrt_lab_cont_54, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_cont_54, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_cont_54, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_cont_54, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_cont_54, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_cont_54, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_cont_54, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_cont_54, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_cont_54, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_72
    ui->screen_samrt_lab_line_72 = lv_line_create(ui->screen_samrt_lab_cont_54);
    lv_obj_set_pos(ui->screen_samrt_lab_line_72, 5, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_72, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_72[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_72, screen_samrt_lab_line_72, 2);

    //Write style for screen_samrt_lab_line_72, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_72, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_72, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_72, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_72, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_71
    ui->screen_samrt_lab_line_71 = lv_line_create(ui->screen_samrt_lab_cont_54);
    lv_obj_set_pos(ui->screen_samrt_lab_line_71, 30, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_71, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_71[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_71, screen_samrt_lab_line_71, 2);

    //Write style for screen_samrt_lab_line_71, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_71, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_71, lv_color_hex(0x44D7B6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_71, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_71, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_70
    ui->screen_samrt_lab_line_70 = lv_line_create(ui->screen_samrt_lab_cont_54);
    lv_obj_set_pos(ui->screen_samrt_lab_line_70, 55, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_70, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_70[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_70, screen_samrt_lab_line_70, 2);

    //Write style for screen_samrt_lab_line_70, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_70, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_70, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_70, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_70, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_69
    ui->screen_samrt_lab_line_69 = lv_line_create(ui->screen_samrt_lab_cont_54);
    lv_obj_set_pos(ui->screen_samrt_lab_line_69, 80, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_69, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_69[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_69, screen_samrt_lab_line_69, 2);

    //Write style for screen_samrt_lab_line_69, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_69, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_69, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_69, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_69, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_cont_55
    ui->screen_samrt_lab_cont_55 = lv_obj_create(ui->screen_samrt_lab_cont_50);
    lv_obj_set_pos(ui->screen_samrt_lab_cont_55, 0, 0);
    lv_obj_set_size(ui->screen_samrt_lab_cont_55, 286, 329);
    lv_obj_set_scrollbar_mode(ui->screen_samrt_lab_cont_55, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_samrt_lab_cont_55, LV_OBJ_FLAG_HIDDEN);
    lv_obj_remove_flag(ui->screen_samrt_lab_cont_55, LV_OBJ_FLAG_GESTURE_BUBBLE);

    //Write style for screen_samrt_lab_cont_55, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_cont_55, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_cont_55, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_cont_55, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_samrt_lab_cont_55, lv_color_hex(0x2A405C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_samrt_lab_cont_55, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_cont_55, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_cont_55, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_cont_55, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_cont_55, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_cont_55, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_img_101
    ui->screen_samrt_lab_img_101 = lv_image_create(ui->screen_samrt_lab_cont_55);
    lv_obj_set_pos(ui->screen_samrt_lab_img_101, 27, 29);
    lv_obj_set_size(ui->screen_samrt_lab_img_101, 52, 52);
    lv_obj_add_flag(ui->screen_samrt_lab_img_101, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_samrt_lab_img_101, &_icon_gonglv_RGB565A8_52x52);
    lv_image_set_pivot(ui->screen_samrt_lab_img_101, 50,50);
    lv_image_set_rotation(ui->screen_samrt_lab_img_101, 0);

    //Write style for screen_samrt_lab_img_101, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_samrt_lab_img_101, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_samrt_lab_img_101, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_243
    ui->screen_samrt_lab_label_243 = lv_label_create(ui->screen_samrt_lab_cont_55);
    lv_obj_set_pos(ui->screen_samrt_lab_label_243, 79, 43);
    lv_obj_set_size(ui->screen_samrt_lab_label_243, 130, 33);
    lv_label_set_text(ui->screen_samrt_lab_label_243, "功耗监测");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_243, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_243, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_243, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_243, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_243, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_243, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_243, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_243, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_243, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_243, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_243, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_243, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_243, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_243, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_243, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_243, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_242
    ui->screen_samrt_lab_label_242 = lv_label_create(ui->screen_samrt_lab_cont_55);
    lv_obj_set_pos(ui->screen_samrt_lab_label_242, 52, 110);
    lv_obj_set_size(ui->screen_samrt_lab_label_242, 45, 47);
    lv_label_set_text(ui->screen_samrt_lab_label_242, "1.2");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_242, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_242, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_242, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_242, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_242, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_242, &lv_font_DINCondBlack_40, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_242, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_242, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_242, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_242, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_242, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_242, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_242, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_242, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_242, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_242, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_241
    ui->screen_samrt_lab_label_241 = lv_label_create(ui->screen_samrt_lab_cont_55);
    lv_obj_set_pos(ui->screen_samrt_lab_label_241, 158, 118);
    lv_obj_set_size(ui->screen_samrt_lab_label_241, 100, 32);
    lv_label_set_text(ui->screen_samrt_lab_label_241, "电流(A)");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_241, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_241, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_241, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_241, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_241, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_241, &lv_font_AlibabaPuHuiTiRegular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_241, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_241, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_241, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_241, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_241, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_241, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_241, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_241, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_241, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_241, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_240
    ui->screen_samrt_lab_label_240 = lv_label_create(ui->screen_samrt_lab_cont_55);
    lv_obj_set_pos(ui->screen_samrt_lab_label_240, 53, 164);
    lv_obj_set_size(ui->screen_samrt_lab_label_240, 92, 47);
    lv_label_set_text(ui->screen_samrt_lab_label_240, "396.3");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_240, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_240, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_240, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_240, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_240, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_240, &lv_font_DINCondBlack_40, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_240, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_240, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_240, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_240, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_240, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_240, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_240, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_240, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_240, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_240, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_239
    ui->screen_samrt_lab_label_239 = lv_label_create(ui->screen_samrt_lab_cont_55);
    lv_obj_set_pos(ui->screen_samrt_lab_label_239, 159, 172);
    lv_obj_set_size(ui->screen_samrt_lab_label_239, 100, 32);
    lv_label_set_text(ui->screen_samrt_lab_label_239, "电压(V)");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_239, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_239, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_239, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_239, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_239, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_239, &lv_font_AlibabaPuHuiTiRegular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_239, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_239, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_239, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_239, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_239, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_239, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_239, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_239, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_239, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_239, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_238
    ui->screen_samrt_lab_label_238 = lv_label_create(ui->screen_samrt_lab_cont_55);
    lv_obj_set_pos(ui->screen_samrt_lab_label_238, 54, 217);
    lv_obj_set_size(ui->screen_samrt_lab_label_238, 130, 47);
    lv_label_set_text(ui->screen_samrt_lab_label_238, "320.4");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_238, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_238, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_238, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_238, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_238, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_238, &lv_font_DINCondBlack_40, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_238, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_238, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_238, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_238, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_238, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_238, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_238, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_238, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_238, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_238, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_237
    ui->screen_samrt_lab_label_237 = lv_label_create(ui->screen_samrt_lab_cont_55);
    lv_obj_set_pos(ui->screen_samrt_lab_label_237, 159, 224);
    lv_obj_set_size(ui->screen_samrt_lab_label_237, 100, 32);
    lv_label_set_text(ui->screen_samrt_lab_label_237, "功率(w)");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_237, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_237, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_237, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_237, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_237, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_237, &lv_font_AlibabaPuHuiTiRegular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_237, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_237, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_237, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_237, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_237, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_237, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_237, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_237, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_237, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_237, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_img_100
    ui->screen_samrt_lab_img_100 = lv_image_create(ui->screen_samrt_lab_cont_55);
    lv_obj_set_pos(ui->screen_samrt_lab_img_100, 215, 60);
    lv_obj_set_size(ui->screen_samrt_lab_img_100, 50, 50);
    lv_obj_add_flag(ui->screen_samrt_lab_img_100, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_samrt_lab_img_100, &_img_label_RGB565A8_50x50);
    lv_image_set_pivot(ui->screen_samrt_lab_img_100, 50,50);
    lv_image_set_rotation(ui->screen_samrt_lab_img_100, 0);

    //Write style for screen_samrt_lab_img_100, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_samrt_lab_img_100, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_samrt_lab_img_100, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_236
    ui->screen_samrt_lab_label_236 = lv_label_create(ui->screen_samrt_lab_cont_55);
    lv_obj_set_pos(ui->screen_samrt_lab_label_236, 224, 70);
    lv_obj_set_size(ui->screen_samrt_lab_label_236, 32, 26);
    lv_label_set_text(ui->screen_samrt_lab_label_236, "1-3");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_236, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_236, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_236, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_236, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_236, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_236, &lv_font_AlibabaPuHuiTiRegular_19, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_236, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_236, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_236, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_236, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_236, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_236, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_236, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_236, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_236, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_236, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_cont_56
    ui->screen_samrt_lab_cont_56 = lv_obj_create(ui->screen_samrt_lab_cont_55);
    lv_obj_set_pos(ui->screen_samrt_lab_cont_56, 100, 291);
    lv_obj_set_size(ui->screen_samrt_lab_cont_56, 90, 18);
    lv_obj_set_scrollbar_mode(ui->screen_samrt_lab_cont_56, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_samrt_lab_cont_56, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_cont_56, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_cont_56, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_cont_56, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_cont_56, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_cont_56, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_cont_56, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_cont_56, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_cont_56, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_76
    ui->screen_samrt_lab_line_76 = lv_line_create(ui->screen_samrt_lab_cont_56);
    lv_obj_set_pos(ui->screen_samrt_lab_line_76, 5, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_76, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_76[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_76, screen_samrt_lab_line_76, 2);

    //Write style for screen_samrt_lab_line_76, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_76, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_76, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_76, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_76, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_75
    ui->screen_samrt_lab_line_75 = lv_line_create(ui->screen_samrt_lab_cont_56);
    lv_obj_set_pos(ui->screen_samrt_lab_line_75, 30, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_75, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_75[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_75, screen_samrt_lab_line_75, 2);

    //Write style for screen_samrt_lab_line_75, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_75, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_75, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_75, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_75, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_74
    ui->screen_samrt_lab_line_74 = lv_line_create(ui->screen_samrt_lab_cont_56);
    lv_obj_set_pos(ui->screen_samrt_lab_line_74, 55, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_74, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_74[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_74, screen_samrt_lab_line_74, 2);

    //Write style for screen_samrt_lab_line_74, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_74, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_74, lv_color_hex(0x44D7B6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_74, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_74, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_73
    ui->screen_samrt_lab_line_73 = lv_line_create(ui->screen_samrt_lab_cont_56);
    lv_obj_set_pos(ui->screen_samrt_lab_line_73, 80, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_73, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_73[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_73, screen_samrt_lab_line_73, 2);

    //Write style for screen_samrt_lab_line_73, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_73, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_73, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_73, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_73, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_cont_57
    ui->screen_samrt_lab_cont_57 = lv_obj_create(ui->screen_samrt_lab_cont_50);
    lv_obj_set_pos(ui->screen_samrt_lab_cont_57, 0, 0);
    lv_obj_set_size(ui->screen_samrt_lab_cont_57, 286, 329);
    lv_obj_set_scrollbar_mode(ui->screen_samrt_lab_cont_57, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_samrt_lab_cont_57, LV_OBJ_FLAG_HIDDEN);
    lv_obj_remove_flag(ui->screen_samrt_lab_cont_57, LV_OBJ_FLAG_GESTURE_BUBBLE);

    //Write style for screen_samrt_lab_cont_57, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_cont_57, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_cont_57, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_cont_57, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_samrt_lab_cont_57, lv_color_hex(0x2A405C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_samrt_lab_cont_57, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_cont_57, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_cont_57, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_cont_57, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_cont_57, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_cont_57, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_img_103
    ui->screen_samrt_lab_img_103 = lv_image_create(ui->screen_samrt_lab_cont_57);
    lv_obj_set_pos(ui->screen_samrt_lab_img_103, 27, 29);
    lv_obj_set_size(ui->screen_samrt_lab_img_103, 52, 52);
    lv_obj_add_flag(ui->screen_samrt_lab_img_103, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_samrt_lab_img_103, &_icon_gonglv_RGB565A8_52x52);
    lv_image_set_pivot(ui->screen_samrt_lab_img_103, 50,50);
    lv_image_set_rotation(ui->screen_samrt_lab_img_103, 0);

    //Write style for screen_samrt_lab_img_103, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_samrt_lab_img_103, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_samrt_lab_img_103, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_251
    ui->screen_samrt_lab_label_251 = lv_label_create(ui->screen_samrt_lab_cont_57);
    lv_obj_set_pos(ui->screen_samrt_lab_label_251, 79, 43);
    lv_obj_set_size(ui->screen_samrt_lab_label_251, 130, 33);
    lv_label_set_text(ui->screen_samrt_lab_label_251, "功耗监测");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_251, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_251, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_251, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_251, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_251, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_251, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_251, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_251, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_251, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_251, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_251, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_251, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_251, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_251, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_251, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_251, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_250
    ui->screen_samrt_lab_label_250 = lv_label_create(ui->screen_samrt_lab_cont_57);
    lv_obj_set_pos(ui->screen_samrt_lab_label_250, 52, 110);
    lv_obj_set_size(ui->screen_samrt_lab_label_250, 45, 47);
    lv_label_set_text(ui->screen_samrt_lab_label_250, "1.2");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_250, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_250, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_250, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_250, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_250, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_250, &lv_font_DINCondBlack_40, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_250, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_250, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_250, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_250, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_250, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_250, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_250, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_250, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_250, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_250, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_249
    ui->screen_samrt_lab_label_249 = lv_label_create(ui->screen_samrt_lab_cont_57);
    lv_obj_set_pos(ui->screen_samrt_lab_label_249, 158, 118);
    lv_obj_set_size(ui->screen_samrt_lab_label_249, 100, 32);
    lv_label_set_text(ui->screen_samrt_lab_label_249, "电流(A)");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_249, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_249, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_249, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_249, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_249, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_249, &lv_font_AlibabaPuHuiTiRegular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_249, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_249, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_249, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_249, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_249, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_249, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_249, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_249, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_249, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_249, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_248
    ui->screen_samrt_lab_label_248 = lv_label_create(ui->screen_samrt_lab_cont_57);
    lv_obj_set_pos(ui->screen_samrt_lab_label_248, 53, 164);
    lv_obj_set_size(ui->screen_samrt_lab_label_248, 92, 47);
    lv_label_set_text(ui->screen_samrt_lab_label_248, "396.3");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_248, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_248, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_248, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_248, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_248, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_248, &lv_font_DINCondBlack_40, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_248, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_248, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_248, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_248, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_248, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_248, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_248, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_248, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_248, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_248, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_247
    ui->screen_samrt_lab_label_247 = lv_label_create(ui->screen_samrt_lab_cont_57);
    lv_obj_set_pos(ui->screen_samrt_lab_label_247, 159, 172);
    lv_obj_set_size(ui->screen_samrt_lab_label_247, 100, 32);
    lv_label_set_text(ui->screen_samrt_lab_label_247, "电压(V)");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_247, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_247, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_247, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_247, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_247, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_247, &lv_font_AlibabaPuHuiTiRegular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_247, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_247, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_247, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_247, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_247, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_247, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_247, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_247, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_247, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_247, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_246
    ui->screen_samrt_lab_label_246 = lv_label_create(ui->screen_samrt_lab_cont_57);
    lv_obj_set_pos(ui->screen_samrt_lab_label_246, 54, 217);
    lv_obj_set_size(ui->screen_samrt_lab_label_246, 130, 47);
    lv_label_set_text(ui->screen_samrt_lab_label_246, "320.4");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_246, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_246, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_246, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_246, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_246, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_246, &lv_font_DINCondBlack_40, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_246, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_246, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_246, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_246, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_246, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_246, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_246, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_246, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_246, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_246, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_245
    ui->screen_samrt_lab_label_245 = lv_label_create(ui->screen_samrt_lab_cont_57);
    lv_obj_set_pos(ui->screen_samrt_lab_label_245, 159, 224);
    lv_obj_set_size(ui->screen_samrt_lab_label_245, 100, 32);
    lv_label_set_text(ui->screen_samrt_lab_label_245, "功率(w)");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_245, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_245, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_245, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_245, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_245, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_245, &lv_font_AlibabaPuHuiTiRegular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_245, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_245, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_245, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_245, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_245, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_245, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_245, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_245, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_245, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_245, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_img_102
    ui->screen_samrt_lab_img_102 = lv_image_create(ui->screen_samrt_lab_cont_57);
    lv_obj_set_pos(ui->screen_samrt_lab_img_102, 215, 60);
    lv_obj_set_size(ui->screen_samrt_lab_img_102, 50, 50);
    lv_obj_add_flag(ui->screen_samrt_lab_img_102, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_samrt_lab_img_102, &_img_label_RGB565A8_50x50);
    lv_image_set_pivot(ui->screen_samrt_lab_img_102, 50,50);
    lv_image_set_rotation(ui->screen_samrt_lab_img_102, 0);

    //Write style for screen_samrt_lab_img_102, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_samrt_lab_img_102, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_samrt_lab_img_102, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_244
    ui->screen_samrt_lab_label_244 = lv_label_create(ui->screen_samrt_lab_cont_57);
    lv_obj_set_pos(ui->screen_samrt_lab_label_244, 224, 70);
    lv_obj_set_size(ui->screen_samrt_lab_label_244, 32, 26);
    lv_label_set_text(ui->screen_samrt_lab_label_244, "1-4");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_244, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_244, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_244, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_244, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_244, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_244, &lv_font_AlibabaPuHuiTiRegular_19, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_244, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_244, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_244, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_244, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_244, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_244, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_244, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_244, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_244, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_244, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_cont_58
    ui->screen_samrt_lab_cont_58 = lv_obj_create(ui->screen_samrt_lab_cont_57);
    lv_obj_set_pos(ui->screen_samrt_lab_cont_58, 100, 291);
    lv_obj_set_size(ui->screen_samrt_lab_cont_58, 90, 18);
    lv_obj_set_scrollbar_mode(ui->screen_samrt_lab_cont_58, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_samrt_lab_cont_58, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_cont_58, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_cont_58, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_cont_58, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_cont_58, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_cont_58, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_cont_58, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_cont_58, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_cont_58, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_80
    ui->screen_samrt_lab_line_80 = lv_line_create(ui->screen_samrt_lab_cont_58);
    lv_obj_set_pos(ui->screen_samrt_lab_line_80, 5, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_80, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_80[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_80, screen_samrt_lab_line_80, 2);

    //Write style for screen_samrt_lab_line_80, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_80, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_80, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_80, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_80, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_79
    ui->screen_samrt_lab_line_79 = lv_line_create(ui->screen_samrt_lab_cont_58);
    lv_obj_set_pos(ui->screen_samrt_lab_line_79, 30, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_79, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_79[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_79, screen_samrt_lab_line_79, 2);

    //Write style for screen_samrt_lab_line_79, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_79, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_79, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_79, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_79, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_78
    ui->screen_samrt_lab_line_78 = lv_line_create(ui->screen_samrt_lab_cont_58);
    lv_obj_set_pos(ui->screen_samrt_lab_line_78, 55, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_78, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_78[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_78, screen_samrt_lab_line_78, 2);

    //Write style for screen_samrt_lab_line_78, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_78, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_78, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_78, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_78, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_77
    ui->screen_samrt_lab_line_77 = lv_line_create(ui->screen_samrt_lab_cont_58);
    lv_obj_set_pos(ui->screen_samrt_lab_line_77, 80, 6);
    lv_obj_set_size(ui->screen_samrt_lab_line_77, 8, 8);
    static lv_point_precise_t screen_samrt_lab_line_77[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_samrt_lab_line_77, screen_samrt_lab_line_77, 2);

    //Write style for screen_samrt_lab_line_77, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_77, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_77, lv_color_hex(0x44D7B6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_77, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_77, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_cont_59
    ui->screen_samrt_lab_cont_59 = lv_obj_create(ui->screen_samrt_lab_cont_screen_smart_lab);
    lv_obj_set_pos(ui->screen_samrt_lab_cont_59, 325, 204);
    lv_obj_set_size(ui->screen_samrt_lab_cont_59, 629, 391);
    lv_obj_set_scrollbar_mode(ui->screen_samrt_lab_cont_59, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_samrt_lab_cont_59, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_samrt_lab_cont_59, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_cont_59, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_samrt_lab_cont_59, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_samrt_lab_cont_59, lv_color_hex(0x2A405C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_samrt_lab_cont_59, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_cont_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_cont_59, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_samrt_lab_cont_59, lv_color_hex(0x2A405C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_samrt_lab_cont_59, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_cont_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_cont_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_cont_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_cont_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_cont_59, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_line_81
    ui->screen_samrt_lab_line_81 = lv_line_create(ui->screen_samrt_lab_cont_59);
    lv_obj_set_pos(ui->screen_samrt_lab_line_81, 50, 46);
    lv_obj_set_size(ui->screen_samrt_lab_line_81, 5, 23);
    static lv_point_precise_t screen_samrt_lab_line_81[] = {{0, 0},{0, 23}};
    lv_line_set_points(ui->screen_samrt_lab_line_81, screen_samrt_lab_line_81, 2);

    //Write style for screen_samrt_lab_line_81, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_samrt_lab_line_81, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_samrt_lab_line_81, lv_color_hex(0x01D270), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_samrt_lab_line_81, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_samrt_lab_line_81, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_qrcode_1
    ui->screen_samrt_lab_qrcode_1 = lv_qrcode_create(ui->screen_samrt_lab_cont_59);
    lv_obj_set_pos(ui->screen_samrt_lab_qrcode_1, 60, 128);
    lv_obj_set_size(ui->screen_samrt_lab_qrcode_1, 123, 123);
    lv_qrcode_set_size(ui->screen_samrt_lab_qrcode_1, 123);
    lv_qrcode_set_dark_color(ui->screen_samrt_lab_qrcode_1, lv_color_hex(0x2C3224));
    lv_qrcode_set_light_color(ui->screen_samrt_lab_qrcode_1, lv_color_hex(0xffffff));
    const char * screen_samrt_lab_qrcode_1_data = "https://www.nxp.com/";
    lv_qrcode_update(ui->screen_samrt_lab_qrcode_1, screen_samrt_lab_qrcode_1_data, 20);

    //Write codes screen_samrt_lab_label_262
    ui->screen_samrt_lab_label_262 = lv_label_create(ui->screen_samrt_lab_cont_59);
    lv_obj_set_pos(ui->screen_samrt_lab_label_262, 61, 44);
    lv_obj_set_size(ui->screen_samrt_lab_label_262, 110, 30);
    lv_label_set_text(ui->screen_samrt_lab_label_262, "设备信息");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_262, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_262, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_262, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_262, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_262, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_262, &lv_font_AlibabaPuHuiTiRegular_26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_262, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_262, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_262, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_262, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_262, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_262, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_262, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_262, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_262, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_262, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_261
    ui->screen_samrt_lab_label_261 = lv_label_create(ui->screen_samrt_lab_cont_59);
    lv_obj_set_pos(ui->screen_samrt_lab_label_261, 239, 131);
    lv_obj_set_size(ui->screen_samrt_lab_label_261, 100, 32);
    lv_label_set_text(ui->screen_samrt_lab_label_261, "设备型号：");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_261, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_261, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_261, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_261, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_261, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_261, &lv_font_AlibabaPuHuiTiRegular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_261, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_261, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_261, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_261, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_261, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_261, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_261, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_261, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_261, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_261, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_260
    ui->screen_samrt_lab_label_260 = lv_label_create(ui->screen_samrt_lab_cont_59);
    lv_obj_set_pos(ui->screen_samrt_lab_label_260, 350, 130);
    lv_obj_set_size(ui->screen_samrt_lab_label_260, 234, 32);
    lv_label_set_text(ui->screen_samrt_lab_label_260, "钻石型V1");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_260, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_260, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_260, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_260, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_260, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_260, &lv_font_AlibabaPuHuiTiRegular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_260, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_260, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_260, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_260, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_260, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_260, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_260, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_260, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_260, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_260, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_259
    ui->screen_samrt_lab_label_259 = lv_label_create(ui->screen_samrt_lab_cont_59);
    lv_obj_set_pos(ui->screen_samrt_lab_label_259, 239, 176);
    lv_obj_set_size(ui->screen_samrt_lab_label_259, 126, 32);
    lv_label_set_text(ui->screen_samrt_lab_label_259, "系统版本号：");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_259, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_259, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_259, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_259, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_259, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_259, &lv_font_AlibabaPuHuiTiRegular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_259, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_259, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_259, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_259, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_259, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_259, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_259, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_259, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_259, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_259, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_258
    ui->screen_samrt_lab_label_258 = lv_label_create(ui->screen_samrt_lab_cont_59);
    lv_obj_set_pos(ui->screen_samrt_lab_label_258, 350, 175);
    lv_obj_set_size(ui->screen_samrt_lab_label_258, 234, 32);
    lv_label_set_text(ui->screen_samrt_lab_label_258, "V1.2.1");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_258, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_258, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_258, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_258, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_258, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_258, &lv_font_AlibabaPuHuiTiRegular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_258, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_258, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_258, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_258, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_258, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_258, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_258, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_258, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_258, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_258, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_257
    ui->screen_samrt_lab_label_257 = lv_label_create(ui->screen_samrt_lab_cont_59);
    lv_obj_set_pos(ui->screen_samrt_lab_label_257, 239, 221);
    lv_obj_set_size(ui->screen_samrt_lab_label_257, 100, 32);
    lv_label_set_text(ui->screen_samrt_lab_label_257, "所属机构：");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_257, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_257, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_257, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_257, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_257, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_257, &lv_font_AlibabaPuHuiTiRegular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_257, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_257, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_257, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_257, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_257, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_257, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_257, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_257, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_257, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_257, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_256
    ui->screen_samrt_lab_label_256 = lv_label_create(ui->screen_samrt_lab_cont_59);
    lv_obj_set_pos(ui->screen_samrt_lab_label_256, 350, 220);
    lv_obj_set_size(ui->screen_samrt_lab_label_256, 234, 32);
    lv_label_set_text(ui->screen_samrt_lab_label_256, "上海交通大学");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_256, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_256, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_256, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_256, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_256, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_256, &lv_font_AlibabaPuHuiTiRegular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_256, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_256, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_256, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_256, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_256, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_256, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_256, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_256, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_256, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_256, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_255
    ui->screen_samrt_lab_label_255 = lv_label_create(ui->screen_samrt_lab_cont_59);
    lv_obj_set_pos(ui->screen_samrt_lab_label_255, 239, 266);
    lv_obj_set_size(ui->screen_samrt_lab_label_255, 100, 32);
    lv_label_set_text(ui->screen_samrt_lab_label_255, "设备编号");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_255, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_255, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_255, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_255, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_255, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_255, &lv_font_AlibabaPuHuiTiRegular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_255, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_255, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_255, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_255, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_255, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_255, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_255, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_255, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_255, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_255, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_254
    ui->screen_samrt_lab_label_254 = lv_label_create(ui->screen_samrt_lab_cont_59);
    lv_obj_set_pos(ui->screen_samrt_lab_label_254, 350, 265);
    lv_obj_set_size(ui->screen_samrt_lab_label_254, 233, 32);
    lv_label_set_text(ui->screen_samrt_lab_label_254, "123456789101112");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_254, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_254, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_254, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_254, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_254, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_254, &lv_font_AlibabaPuHuiTiRegular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_254, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_254, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_254, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_254, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_254, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_254, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_254, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_254, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_254, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_254, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_253
    ui->screen_samrt_lab_label_253 = lv_label_create(ui->screen_samrt_lab_cont_59);
    lv_obj_set_pos(ui->screen_samrt_lab_label_253, 239, 311);
    lv_obj_set_size(ui->screen_samrt_lab_label_253, 100, 32);
    lv_label_set_text(ui->screen_samrt_lab_label_253, "版权：");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_253, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_253, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_253, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_253, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_253, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_253, &lv_font_AlibabaPuHuiTiRegular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_253, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_253, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_253, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_253, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_253, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_253, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_253, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_253, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_253, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_253, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_252
    ui->screen_samrt_lab_label_252 = lv_label_create(ui->screen_samrt_lab_cont_59);
    lv_obj_set_pos(ui->screen_samrt_lab_label_252, 350, 310);
    lv_obj_set_size(ui->screen_samrt_lab_label_252, 255, 32);
    lv_label_set_text(ui->screen_samrt_lab_label_252, "上海XXXX科技有限公司");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_252, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_252, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_252, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_252, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_252, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_252, &lv_font_AlibabaPuHuiTiRegular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_252, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_252, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_252, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_252, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_252, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_252, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_252, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_252, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_252, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_252, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_btn_2
    ui->screen_samrt_lab_btn_2 = lv_button_create(ui->screen_samrt_lab_cont_59);
    lv_obj_set_pos(ui->screen_samrt_lab_btn_2, 500, 25);
    lv_obj_set_size(ui->screen_samrt_lab_btn_2, 100, 50);
    ui->screen_samrt_lab_btn_2_label = lv_label_create(ui->screen_samrt_lab_btn_2);
    lv_label_set_text(ui->screen_samrt_lab_btn_2_label, "" LV_SYMBOL_CLOSE " ");
    lv_label_set_long_mode(ui->screen_samrt_lab_btn_2_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_samrt_lab_btn_2_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_samrt_lab_btn_2, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_samrt_lab_btn_2_label, LV_PCT(100));

    //Write style for screen_samrt_lab_btn_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_samrt_lab_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_btn_2, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_btn_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_btn_2, &lv_font_AlibabaPuHuiTiRegular_40, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_btn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_btn_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_datetext_1
    ui->screen_samrt_lab_datetext_1 = lv_label_create(ui->screen_samrt_lab);
    lv_obj_set_pos(ui->screen_samrt_lab_datetext_1, 912, 16);
    lv_obj_set_size(ui->screen_samrt_lab_datetext_1, 130, 36);
    lv_label_set_text(ui->screen_samrt_lab_datetext_1, "2024/04/22");
    lv_obj_set_style_text_align(ui->screen_samrt_lab_datetext_1, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_add_flag(ui->screen_samrt_lab_datetext_1, LV_OBJ_FLAG_CLICKABLE);
    lv_obj_add_event_cb(ui->screen_samrt_lab_datetext_1, screen_samrt_lab_datetext_1_event_handler, LV_EVENT_ALL, NULL);

    //Write style for screen_samrt_lab_datetext_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_samrt_lab_datetext_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_datetext_1, &lv_font_AlibabaPuHuiTiRegular_18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_datetext_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_datetext_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_datetext_1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_datetext_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_samrt_lab_datetext_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_datetext_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_datetext_1, 9, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_datetext_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_datetext_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_datetext_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_digital_clock_1
    static bool screen_samrt_lab_digital_clock_1_timer_enabled = false;
    ui->screen_samrt_lab_digital_clock_1 = lv_label_create(ui->screen_samrt_lab);
    lv_obj_set_pos(ui->screen_samrt_lab_digital_clock_1, 1042, 16);
    lv_obj_set_size(ui->screen_samrt_lab_digital_clock_1, 130, 36);
    lv_label_set_text(ui->screen_samrt_lab_digital_clock_1, "11:25");
    if (!screen_samrt_lab_digital_clock_1_timer_enabled) {
        lv_timer_create(screen_samrt_lab_digital_clock_1_timer, 1000, NULL);
        screen_samrt_lab_digital_clock_1_timer_enabled = true;
    }

    //Write style for screen_samrt_lab_digital_clock_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_radius(ui->screen_samrt_lab_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_digital_clock_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_digital_clock_1, &lv_font_AlibabaPuHuiTiRegular_18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_digital_clock_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_digital_clock_1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_digital_clock_1, 9, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_btn_1
    ui->screen_samrt_lab_btn_1 = lv_button_create(ui->screen_samrt_lab);
    lv_obj_set_pos(ui->screen_samrt_lab_btn_1, 1098, 14);
    lv_obj_set_size(ui->screen_samrt_lab_btn_1, 44, 44);
    ui->screen_samrt_lab_btn_1_label = lv_label_create(ui->screen_samrt_lab_btn_1);
    lv_label_set_text(ui->screen_samrt_lab_btn_1_label, "");
    lv_label_set_long_mode(ui->screen_samrt_lab_btn_1_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_samrt_lab_btn_1_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_samrt_lab_btn_1, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_samrt_lab_btn_1_label, LV_PCT(100));

    //Write style for screen_samrt_lab_btn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_samrt_lab_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_btn_1, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_samrt_lab_btn_1, &_icon_setup_RGB565A8_44x44, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_samrt_lab_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_samrt_lab_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_btn_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_btn_1, &lv_font_AlibabaPuHuiTiRegular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_btn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_img_14
    ui->screen_samrt_lab_img_14 = lv_image_create(ui->screen_samrt_lab);
    lv_obj_set_pos(ui->screen_samrt_lab_img_14, 1215, 14);
    lv_obj_set_size(ui->screen_samrt_lab_img_14, 44, 44);
    lv_obj_add_flag(ui->screen_samrt_lab_img_14, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_samrt_lab_img_14, &_icon_signal_RGB565A8_44x44);
    lv_image_set_pivot(ui->screen_samrt_lab_img_14, 50,50);
    lv_image_set_rotation(ui->screen_samrt_lab_img_14, 0);

    //Write style for screen_samrt_lab_img_14, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_samrt_lab_img_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_samrt_lab_img_14, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_img_15
    ui->screen_samrt_lab_img_15 = lv_image_create(ui->screen_samrt_lab);
    lv_obj_set_pos(ui->screen_samrt_lab_img_15, 1215, 14);
    lv_obj_set_size(ui->screen_samrt_lab_img_15, 44, 44);
    lv_obj_add_flag(ui->screen_samrt_lab_img_15, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui->screen_samrt_lab_img_15, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_samrt_lab_img_15, &_icon_signal_n_RGB565A8_44x44);
    lv_image_set_pivot(ui->screen_samrt_lab_img_15, 50,50);
    lv_image_set_rotation(ui->screen_samrt_lab_img_15, 0);

    //Write style for screen_samrt_lab_img_15, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_samrt_lab_img_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_samrt_lab_img_15, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_btn_3
    ui->screen_samrt_lab_btn_3 = lv_button_create(ui->screen_samrt_lab);
    lv_obj_set_pos(ui->screen_samrt_lab_btn_3, 1155, 16);
    lv_obj_set_size(ui->screen_samrt_lab_btn_3, 44, 44);
    ui->screen_samrt_lab_btn_3_label = lv_label_create(ui->screen_samrt_lab_btn_3);
    lv_label_set_text(ui->screen_samrt_lab_btn_3_label, "");
    lv_label_set_long_mode(ui->screen_samrt_lab_btn_3_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_samrt_lab_btn_3_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_samrt_lab_btn_3, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_samrt_lab_btn_3_label, LV_PCT(100));

    //Write style for screen_samrt_lab_btn_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_btn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_samrt_lab_btn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_btn_3, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_btn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_samrt_lab_btn_3, &_icon_device_RGB565A8_44x44, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_samrt_lab_btn_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_samrt_lab_btn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_btn_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_btn_3, &lv_font_HarmonyOS_Sans_Medium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_btn_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_btn_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_cont_60
    ui->screen_samrt_lab_cont_60 = lv_obj_create(ui->screen_samrt_lab);
    lv_obj_set_pos(ui->screen_samrt_lab_cont_60, 374, 186);
    lv_obj_set_size(ui->screen_samrt_lab_cont_60, 530, 420);
    lv_obj_set_scrollbar_mode(ui->screen_samrt_lab_cont_60, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_samrt_lab_cont_60, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_samrt_lab_cont_60, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_cont_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_cont_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_cont_60, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_samrt_lab_cont_60, lv_color_hex(0x2A405C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_samrt_lab_cont_60, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_cont_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_cont_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_cont_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_cont_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_cont_60, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_btnm_1
    ui->screen_samrt_lab_btnm_1 = lv_buttonmatrix_create(ui->screen_samrt_lab_cont_60);
    lv_obj_set_pos(ui->screen_samrt_lab_btnm_1, 8, 119);
    lv_obj_set_size(ui->screen_samrt_lab_btnm_1, 509, 274);
    static const char *screen_samrt_lab_btnm_1_text_map[] = {"1", "2", "3", "\n", "4", "5", "6", "\n", "7", "8", "9", "\n", "清空", "0", "确定", "",};
    lv_buttonmatrix_set_map(ui->screen_samrt_lab_btnm_1, screen_samrt_lab_btnm_1_text_map);

    //Write style for screen_samrt_lab_btnm_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_btnm_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_btnm_1, 16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_btnm_1, 16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_btnm_1, 16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_btnm_1, 16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_row(ui->screen_samrt_lab_btnm_1, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_column(ui->screen_samrt_lab_btnm_1, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_btnm_1, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_btnm_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_samrt_lab_btnm_1, Part: LV_PART_ITEMS, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_btnm_1, 1, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_samrt_lab_btnm_1, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_samrt_lab_btnm_1, lv_color_hex(0xc9c9c9), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_samrt_lab_btnm_1, LV_BORDER_SIDE_FULL, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_btnm_1, lv_color_hex(0x000000), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_btnm_1, &lv_font_AlibabaPuHuiTiRegular_32, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_btnm_1, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_btnm_1, 4, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_btnm_1, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_samrt_lab_btnm_1, lv_color_hex(0xffffff), LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_samrt_lab_btnm_1, LV_GRAD_DIR_NONE, LV_PART_ITEMS|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_btnm_1, 0, LV_PART_ITEMS|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_ta_1
    ui->screen_samrt_lab_ta_1 = lv_textarea_create(ui->screen_samrt_lab_cont_60);
    lv_obj_set_pos(ui->screen_samrt_lab_ta_1, 22, 68);
    lv_obj_set_size(ui->screen_samrt_lab_ta_1, 477, 61);
    lv_textarea_set_text(ui->screen_samrt_lab_ta_1, "");
    lv_textarea_set_placeholder_text(ui->screen_samrt_lab_ta_1, "");
    lv_textarea_set_password_bullet(ui->screen_samrt_lab_ta_1, "*");
    lv_textarea_set_password_mode(ui->screen_samrt_lab_ta_1, true);
    lv_textarea_set_one_line(ui->screen_samrt_lab_ta_1, true);
    lv_textarea_set_accepted_chars(ui->screen_samrt_lab_ta_1, "");
    lv_textarea_set_max_length(ui->screen_samrt_lab_ta_1, 8);
#if LV_USE_KEYBOARD
    lv_obj_add_event_cb(ui->screen_samrt_lab_ta_1, ta_event_cb, LV_EVENT_ALL, ui->g_kb_top_layer);
#endif

    //Write style for screen_samrt_lab_ta_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_samrt_lab_ta_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_ta_1, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_ta_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_ta_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_ta_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_ta_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_samrt_lab_ta_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_samrt_lab_ta_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_samrt_lab_ta_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_samrt_lab_ta_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_samrt_lab_ta_1, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_samrt_lab_ta_1, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_ta_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_ta_1, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_ta_1, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_ta_1, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_ta_1, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_samrt_lab_ta_1, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_ta_1, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_samrt_lab_ta_1, lv_color_hex(0x2195f6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_samrt_lab_ta_1, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_ta_1, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_label_263
    ui->screen_samrt_lab_label_263 = lv_label_create(ui->screen_samrt_lab_cont_60);
    lv_obj_set_pos(ui->screen_samrt_lab_label_263, 211, 23);
    lv_obj_set_size(ui->screen_samrt_lab_label_263, 100, 32);
    lv_label_set_text(ui->screen_samrt_lab_label_263, "密码");
    lv_label_set_long_mode(ui->screen_samrt_lab_label_263, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_label_263, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_label_263, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_label_263, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_label_263, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_label_263, &lv_font_AlibabaPuHuiTiRegular_32, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_label_263, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_label_263, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_label_263, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_label_263, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_label_263, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_label_263, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_label_263, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_label_263, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_label_263, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_label_263, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_btn_4
    ui->screen_samrt_lab_btn_4 = lv_button_create(ui->screen_samrt_lab_cont_60);
    lv_obj_set_pos(ui->screen_samrt_lab_btn_4, 414, 8);
    lv_obj_set_size(ui->screen_samrt_lab_btn_4, 100, 50);
    ui->screen_samrt_lab_btn_4_label = lv_label_create(ui->screen_samrt_lab_btn_4);
    lv_label_set_text(ui->screen_samrt_lab_btn_4_label, "" LV_SYMBOL_CLOSE " ");
    lv_label_set_long_mode(ui->screen_samrt_lab_btn_4_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_samrt_lab_btn_4_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_samrt_lab_btn_4, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_samrt_lab_btn_4_label, LV_PCT(100));

    //Write style for screen_samrt_lab_btn_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_btn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_samrt_lab_btn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_btn_4, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_btn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_btn_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_btn_4, &lv_font_AlibabaPuHuiTiRegular_40, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_btn_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_btn_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_btn_5
    ui->screen_samrt_lab_btn_5 = lv_button_create(ui->screen_samrt_lab_cont_60);
    lv_obj_set_pos(ui->screen_samrt_lab_btn_5, 75, 125);
    lv_obj_set_size(ui->screen_samrt_lab_btn_5, 380, 134);
    lv_obj_add_flag(ui->screen_samrt_lab_btn_5, LV_OBJ_FLAG_HIDDEN);
    ui->screen_samrt_lab_btn_5_label = lv_label_create(ui->screen_samrt_lab_btn_5);
    lv_label_set_text(ui->screen_samrt_lab_btn_5_label, "密码错误，\n点击后重试");
    lv_label_set_long_mode(ui->screen_samrt_lab_btn_5_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_samrt_lab_btn_5_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_samrt_lab_btn_5, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_samrt_lab_btn_5_label, LV_PCT(100));

    //Write style for screen_samrt_lab_btn_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_btn_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_samrt_lab_btn_5, lv_color_hex(0x2A405C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_samrt_lab_btn_5, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_samrt_lab_btn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_btn_5, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_btn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_btn_5, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_btn_5, &lv_font_AlibabaPuHuiTiRegular_35, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_btn_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_btn_5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_bar_1
    ui->screen_samrt_lab_bar_1 = lv_bar_create(ui->screen_samrt_lab);
    lv_obj_set_pos(ui->screen_samrt_lab_bar_1, 358, 8);
    lv_obj_set_size(ui->screen_samrt_lab_bar_1, 308, 60);
    lv_obj_set_style_anim_duration(ui->screen_samrt_lab_bar_1, 2000, 0);
    lv_bar_set_mode(ui->screen_samrt_lab_bar_1, LV_BAR_MODE_SYMMETRICAL);
    lv_bar_set_range(ui->screen_samrt_lab_bar_1, 0, 100);
    lv_bar_set_value(ui->screen_samrt_lab_bar_1, 60, LV_ANIM_ON);

    //Write style for screen_samrt_lab_bar_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_bar_1, 60, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_samrt_lab_bar_1, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_samrt_lab_bar_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_bar_1, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_bar_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_samrt_lab_bar_1, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_bar_1, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_samrt_lab_bar_1, lv_color_hex(0x2195f6), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_samrt_lab_bar_1, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_bar_1, 10, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_ble_name
    ui->screen_samrt_lab_ble_name = lv_obj_create(ui->screen_samrt_lab);
    lv_obj_set_pos(ui->screen_samrt_lab_ble_name, 496, 326);
    lv_obj_set_size(ui->screen_samrt_lab_ble_name, 312, 60);
    lv_obj_set_scrollbar_mode(ui->screen_samrt_lab_ble_name, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_samrt_lab_ble_name, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_ble_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_ble_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_ble_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_ble_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_ble_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_ble_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_ble_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_ble_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_ble_bg
    ui->screen_samrt_lab_ble_bg = lv_image_create(ui->screen_samrt_lab_ble_name);
    lv_obj_set_pos(ui->screen_samrt_lab_ble_bg, 0, 0);
    lv_obj_set_size(ui->screen_samrt_lab_ble_bg, 312, 60);
    lv_obj_add_flag(ui->screen_samrt_lab_ble_bg, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_samrt_lab_ble_bg, &_Time10_RGB565A8_312x60);
    lv_image_set_pivot(ui->screen_samrt_lab_ble_bg, 50,50);
    lv_image_set_rotation(ui->screen_samrt_lab_ble_bg, 0);

    //Write style for screen_samrt_lab_ble_bg, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_samrt_lab_ble_bg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_samrt_lab_ble_bg, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_samrt_lab_ble_text
    ui->screen_samrt_lab_ble_text = lv_label_create(ui->screen_samrt_lab_ble_name);
    lv_obj_set_pos(ui->screen_samrt_lab_ble_text, 62, 12);
    lv_obj_set_size(ui->screen_samrt_lab_ble_text, 234, 36);
    lv_label_set_text(ui->screen_samrt_lab_ble_text, "Awesome Niu已断开");
    lv_label_set_long_mode(ui->screen_samrt_lab_ble_text, LV_LABEL_LONG_WRAP);

    //Write style for screen_samrt_lab_ble_text, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_samrt_lab_ble_text, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_samrt_lab_ble_text, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_samrt_lab_ble_text, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_samrt_lab_ble_text, &lv_font_SHSSC_Bold_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_samrt_lab_ble_text, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_samrt_lab_ble_text, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_samrt_lab_ble_text, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_samrt_lab_ble_text, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_samrt_lab_ble_text, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_samrt_lab_ble_text, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_samrt_lab_ble_text, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_samrt_lab_ble_text, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_samrt_lab_ble_text, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_samrt_lab_ble_text, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of screen_samrt_lab.


    //Update current screen layout.
    lv_obj_update_layout(ui->screen_samrt_lab);

    //Init events for screen.
    events_init_screen_samrt_lab(ui);
}
