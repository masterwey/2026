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



int screen_smart_cabinet_digital_clock_1_min_value = 25;
int screen_smart_cabinet_digital_clock_1_hour_value = 11;
int screen_smart_cabinet_digital_clock_1_sec_value = 50;
void setup_scr_screen_smart_cabinet(lv_ui *ui)
{
    //Write codes screen_smart_cabinet
    ui->screen_smart_cabinet = lv_obj_create(NULL);
    lv_obj_set_size(ui->screen_smart_cabinet, 1280, 800);
    lv_obj_set_scrollbar_mode(ui->screen_smart_cabinet, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_smart_cabinet, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_smart_cabinet, lv_color_hex(0x1B2C42), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_smart_cabinet, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_cont_screen_smart_cab
    ui->screen_smart_cabinet_cont_screen_smart_cab = lv_obj_create(ui->screen_smart_cabinet);
    lv_obj_set_pos(ui->screen_smart_cabinet_cont_screen_smart_cab, 0, 0);
    lv_obj_set_size(ui->screen_smart_cabinet_cont_screen_smart_cab, 1280, 800);
    lv_obj_set_scrollbar_mode(ui->screen_smart_cabinet_cont_screen_smart_cab, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_smart_cabinet_cont_screen_smart_cab, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_cont_screen_smart_cab, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_cont_screen_smart_cab, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_cont_screen_smart_cab, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_smart_cabinet_cont_screen_smart_cab, lv_color_hex(0x1B2C42), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_smart_cabinet_cont_screen_smart_cab, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_cont_screen_smart_cab, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_cont_screen_smart_cab, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_cont_screen_smart_cab, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_cont_screen_smart_cab, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_cont_screen_smart_cab, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_img_63
    ui->screen_smart_cabinet_img_63 = lv_image_create(ui->screen_smart_cabinet_cont_screen_smart_cab);
    lv_obj_set_pos(ui->screen_smart_cabinet_img_63, 48, 13);
    lv_obj_set_size(ui->screen_smart_cabinet_img_63, 184, 56);
    lv_obj_add_flag(ui->screen_smart_cabinet_img_63, LV_OBJ_FLAG_CLICKABLE);
#if LV_USE_GUIDER_SIMULATOR
    lv_image_set_src(ui->screen_smart_cabinet_img_63, "D:\\A\\xw_smart_screen");
#else
    lv_image_set_src(ui->screen_smart_cabinet_img_63, "F:/.bin");
#endif
    lv_image_set_pivot(ui->screen_smart_cabinet_img_63, 50,50);
    lv_image_set_rotation(ui->screen_smart_cabinet_img_63, 0);

    //Write style for screen_smart_cabinet_img_63, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_smart_cabinet_img_63, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_smart_cabinet_img_63, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_cont_cab_fan
    ui->screen_smart_cabinet_cont_cab_fan = lv_obj_create(ui->screen_smart_cabinet_cont_screen_smart_cab);
    lv_obj_set_pos(ui->screen_smart_cabinet_cont_cab_fan, 654, 77);
    lv_obj_set_size(ui->screen_smart_cabinet_cont_cab_fan, 286, 329);
    lv_obj_set_scrollbar_mode(ui->screen_smart_cabinet_cont_cab_fan, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_smart_cabinet_cont_cab_fan, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_cont_cab_fan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_cont_cab_fan, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_cont_cab_fan, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_smart_cabinet_cont_cab_fan, lv_color_hex(0x2A405C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_smart_cabinet_cont_cab_fan, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_cont_cab_fan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_cont_cab_fan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_cont_cab_fan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_cont_cab_fan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_cont_cab_fan, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_img_56
    ui->screen_smart_cabinet_img_56 = lv_image_create(ui->screen_smart_cabinet_cont_cab_fan);
    lv_obj_set_pos(ui->screen_smart_cabinet_img_56, 27, 30);
    lv_obj_set_size(ui->screen_smart_cabinet_img_56, 52, 52);
    lv_obj_add_flag(ui->screen_smart_cabinet_img_56, LV_OBJ_FLAG_CLICKABLE);
#if LV_USE_GUIDER_SIMULATOR
    lv_image_set_src(ui->screen_smart_cabinet_img_56, "D:\\A\\xw_smart_screen\\import\\image\\icon_fengji.png");
#else
    lv_image_set_src(ui->screen_smart_cabinet_img_56, "F:/icon_fengji.bin");
#endif
    lv_image_set_pivot(ui->screen_smart_cabinet_img_56, 50,50);
    lv_image_set_rotation(ui->screen_smart_cabinet_img_56, 0);

    //Write style for screen_smart_cabinet_img_56, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_smart_cabinet_img_56, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_smart_cabinet_img_56, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_101
    ui->screen_smart_cabinet_label_101 = lv_label_create(ui->screen_smart_cabinet_cont_cab_fan);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_101, 80, 43);
    lv_obj_set_size(ui->screen_smart_cabinet_label_101, 130, 33);
    lv_label_set_text(ui->screen_smart_cabinet_label_101, "风机");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_101, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_101, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_101, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_101, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_101, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_101, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_101, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_101, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_101, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_101, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_101, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_101, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_101, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_101, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_101, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_101, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_100
    ui->screen_smart_cabinet_label_100 = lv_label_create(ui->screen_smart_cabinet_cont_cab_fan);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_100, 202, 281);
    lv_obj_set_size(ui->screen_smart_cabinet_label_100, 61, 30);
    lv_label_set_text(ui->screen_smart_cabinet_label_100, "RPM");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_100, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_100, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_100, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_100, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_100, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_100, &lv_font_AlibabaPuHuiTiRegular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_100, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_100, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_100, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_100, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_100, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_100, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_100, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_100, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_100, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_100, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_img_55
    ui->screen_smart_cabinet_img_55 = lv_image_create(ui->screen_smart_cabinet_cont_cab_fan);
    lv_obj_set_pos(ui->screen_smart_cabinet_img_55, 49, 89);
    lv_obj_set_size(ui->screen_smart_cabinet_img_55, 200, 200);
    lv_obj_add_flag(ui->screen_smart_cabinet_img_55, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_smart_cabinet_img_55, &_0_RGB565A8_200x200);
    lv_image_set_pivot(ui->screen_smart_cabinet_img_55, 50,50);
    lv_image_set_rotation(ui->screen_smart_cabinet_img_55, 0);

    //Write style for screen_smart_cabinet_img_55, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_smart_cabinet_img_55, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_smart_cabinet_img_55, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_99
    ui->screen_smart_cabinet_label_99 = lv_label_create(ui->screen_smart_cabinet_cont_cab_fan);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_99, 65, 281);
    lv_obj_set_size(ui->screen_smart_cabinet_label_99, 130, 33);
    lv_label_set_text(ui->screen_smart_cabinet_label_99, "1000");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_99, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_99, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_99, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_99, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_99, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_99, &lv_font_DINCondBlack_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_99, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_99, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_99, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_99, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_99, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_99, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_99, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_99, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_99, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_99, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_cont_cab_filter
    ui->screen_smart_cabinet_cont_cab_filter = lv_obj_create(ui->screen_smart_cabinet_cont_screen_smart_cab);
    lv_obj_set_pos(ui->screen_smart_cabinet_cont_cab_filter, 972, 77);
    lv_obj_set_size(ui->screen_smart_cabinet_cont_cab_filter, 286, 329);
    lv_obj_set_scrollbar_mode(ui->screen_smart_cabinet_cont_cab_filter, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_smart_cabinet_cont_cab_filter, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_cont_cab_filter, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_cont_cab_filter, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_cont_cab_filter, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_smart_cabinet_cont_cab_filter, lv_color_hex(0x2A405C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_smart_cabinet_cont_cab_filter, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_cont_cab_filter, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_cont_cab_filter, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_cont_cab_filter, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_cont_cab_filter, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_cont_cab_filter, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_img_54
    ui->screen_smart_cabinet_img_54 = lv_image_create(ui->screen_smart_cabinet_cont_cab_filter);
    lv_obj_set_pos(ui->screen_smart_cabinet_img_54, 27, 29);
    lv_obj_set_size(ui->screen_smart_cabinet_img_54, 52, 52);
    lv_obj_add_flag(ui->screen_smart_cabinet_img_54, LV_OBJ_FLAG_CLICKABLE);
#if LV_USE_GUIDER_SIMULATOR
    lv_image_set_src(ui->screen_smart_cabinet_img_54, "D:\\A\\xw_smart_screen\\import\\image\\icon_gonglv.png");
#else
    lv_image_set_src(ui->screen_smart_cabinet_img_54, "F:/icon_gonglv.bin");
#endif
    lv_image_set_pivot(ui->screen_smart_cabinet_img_54, 50,50);
    lv_image_set_rotation(ui->screen_smart_cabinet_img_54, 0);

    //Write style for screen_smart_cabinet_img_54, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_smart_cabinet_img_54, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_smart_cabinet_img_54, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_98
    ui->screen_smart_cabinet_label_98 = lv_label_create(ui->screen_smart_cabinet_cont_cab_filter);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_98, 79, 43);
    lv_obj_set_size(ui->screen_smart_cabinet_label_98, 130, 33);
    lv_label_set_text(ui->screen_smart_cabinet_label_98, "滤芯");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_98, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_98, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_98, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_98, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_98, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_98, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_98, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_98, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_98, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_98, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_98, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_98, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_98, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_98, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_98, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_98, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_114
    ui->screen_smart_cabinet_label_114 = lv_label_create(ui->screen_smart_cabinet_cont_cab_filter);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_114, 83, 145);
    lv_obj_set_size(ui->screen_smart_cabinet_label_114, 132, 75);
    lv_label_set_text(ui->screen_smart_cabinet_label_114, "有效");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_114, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_114, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_114, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_114, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_114, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_114, &lv_font_AlibabaPuHuiTiRegular_60, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_114, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_114, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_114, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_114, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_114, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_114, 9, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_114, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_114, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_114, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_114, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_cont_cab_alarm
    ui->screen_smart_cabinet_cont_cab_alarm = lv_obj_create(ui->screen_smart_cabinet_cont_screen_smart_cab);
    lv_obj_set_pos(ui->screen_smart_cabinet_cont_cab_alarm, 654, 445);
    lv_obj_set_size(ui->screen_smart_cabinet_cont_cab_alarm, 183, 329);
    lv_obj_set_scrollbar_mode(ui->screen_smart_cabinet_cont_cab_alarm, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_smart_cabinet_cont_cab_alarm, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_cont_cab_alarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_cont_cab_alarm, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_cont_cab_alarm, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_smart_cabinet_cont_cab_alarm, lv_color_hex(0x2A405C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_smart_cabinet_cont_cab_alarm, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_cont_cab_alarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_cont_cab_alarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_cont_cab_alarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_cont_cab_alarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_cont_cab_alarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_img_52
    ui->screen_smart_cabinet_img_52 = lv_image_create(ui->screen_smart_cabinet_cont_cab_alarm);
    lv_obj_set_pos(ui->screen_smart_cabinet_img_52, 26, 29);
    lv_obj_set_size(ui->screen_smart_cabinet_img_52, 52, 52);
    lv_obj_add_flag(ui->screen_smart_cabinet_img_52, LV_OBJ_FLAG_CLICKABLE);
#if LV_USE_GUIDER_SIMULATOR
    lv_image_set_src(ui->screen_smart_cabinet_img_52, "D:\\A\\xw_smart_screen\\import\\image\\icon_alarm.png");
#else
    lv_image_set_src(ui->screen_smart_cabinet_img_52, "F:/icon_alarm.bin");
#endif
    lv_image_set_pivot(ui->screen_smart_cabinet_img_52, 50,50);
    lv_image_set_rotation(ui->screen_smart_cabinet_img_52, 0);

    //Write style for screen_smart_cabinet_img_52, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_smart_cabinet_img_52, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_smart_cabinet_img_52, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_90
    ui->screen_smart_cabinet_label_90 = lv_label_create(ui->screen_smart_cabinet_cont_cab_alarm);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_90, 80, 42);
    lv_obj_set_size(ui->screen_smart_cabinet_label_90, 130, 33);
    lv_label_set_text(ui->screen_smart_cabinet_label_90, "报警");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_90, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_90, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_90, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_90, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_90, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_90, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_90, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_img_l_icon_off
    ui->screen_smart_cabinet_img_l_icon_off = lv_image_create(ui->screen_smart_cabinet_cont_cab_alarm);
    lv_obj_set_pos(ui->screen_smart_cabinet_img_l_icon_off, 44, 123);
    lv_obj_set_size(ui->screen_smart_cabinet_img_l_icon_off, 83, 83);
    lv_obj_add_flag(ui->screen_smart_cabinet_img_l_icon_off, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_smart_cabinet_img_l_icon_off, &_img_alarmlamp_close_RGB565A8_83x83);
    lv_image_set_pivot(ui->screen_smart_cabinet_img_l_icon_off, 50,50);
    lv_image_set_rotation(ui->screen_smart_cabinet_img_l_icon_off, 0);

    //Write style for screen_smart_cabinet_img_l_icon_off, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_smart_cabinet_img_l_icon_off, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_smart_cabinet_img_l_icon_off, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_img_s_icon_off
    ui->screen_smart_cabinet_img_s_icon_off = lv_image_create(ui->screen_smart_cabinet_cont_cab_alarm);
    lv_obj_set_pos(ui->screen_smart_cabinet_img_s_icon_off, 55, 254);
    lv_obj_set_size(ui->screen_smart_cabinet_img_s_icon_off, 23, 23);
    lv_obj_add_flag(ui->screen_smart_cabinet_img_s_icon_off, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_smart_cabinet_img_s_icon_off, &_icon_crectangle_close_RGB565A8_23x23);
    lv_image_set_pivot(ui->screen_smart_cabinet_img_s_icon_off, 50,50);
    lv_image_set_rotation(ui->screen_smart_cabinet_img_s_icon_off, 0);

    //Write style for screen_smart_cabinet_img_s_icon_off, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_smart_cabinet_img_s_icon_off, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_smart_cabinet_img_s_icon_off, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_on_off
    ui->screen_smart_cabinet_label_on_off = lv_label_create(ui->screen_smart_cabinet_cont_cab_alarm);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_on_off, 93, 249);
    lv_obj_set_size(ui->screen_smart_cabinet_label_on_off, 60, 33);
    lv_label_set_text(ui->screen_smart_cabinet_label_on_off, "开启");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_on_off, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_on_off, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_on_off, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_on_off, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_on_off, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_on_off, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_on_off, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_on_off, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_on_off, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_on_off, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_on_off, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_on_off, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_on_off, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_on_off, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_on_off, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_on_off, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_img_l_icon_on
    ui->screen_smart_cabinet_img_l_icon_on = lv_image_create(ui->screen_smart_cabinet_cont_cab_alarm);
    lv_obj_set_pos(ui->screen_smart_cabinet_img_l_icon_on, 44, 123);
    lv_obj_set_size(ui->screen_smart_cabinet_img_l_icon_on, 83, 83);
    lv_obj_add_flag(ui->screen_smart_cabinet_img_l_icon_on, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_smart_cabinet_img_l_icon_on, &_img_alarmlamp_open_RGB565A8_83x83);
    lv_image_set_pivot(ui->screen_smart_cabinet_img_l_icon_on, 50,50);
    lv_image_set_rotation(ui->screen_smart_cabinet_img_l_icon_on, 0);

    //Write style for screen_smart_cabinet_img_l_icon_on, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_smart_cabinet_img_l_icon_on, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_smart_cabinet_img_l_icon_on, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_img_s_icon_on
    ui->screen_smart_cabinet_img_s_icon_on = lv_image_create(ui->screen_smart_cabinet_cont_cab_alarm);
    lv_obj_set_pos(ui->screen_smart_cabinet_img_s_icon_on, 55, 254);
    lv_obj_set_size(ui->screen_smart_cabinet_img_s_icon_on, 23, 23);
    lv_obj_add_flag(ui->screen_smart_cabinet_img_s_icon_on, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui->screen_smart_cabinet_img_s_icon_on, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_smart_cabinet_img_s_icon_on, &_icon_crectangle_open_RGB565A8_23x23);
    lv_image_set_pivot(ui->screen_smart_cabinet_img_s_icon_on, 50,50);
    lv_image_set_rotation(ui->screen_smart_cabinet_img_s_icon_on, 0);

    //Write style for screen_smart_cabinet_img_s_icon_on, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_smart_cabinet_img_s_icon_on, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_smart_cabinet_img_s_icon_on, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_cont_cab_light
    ui->screen_smart_cabinet_cont_cab_light = lv_obj_create(ui->screen_smart_cabinet_cont_screen_smart_cab);
    lv_obj_set_pos(ui->screen_smart_cabinet_cont_cab_light, 860, 441);
    lv_obj_set_size(ui->screen_smart_cabinet_cont_cab_light, 183, 329);
    lv_obj_set_scrollbar_mode(ui->screen_smart_cabinet_cont_cab_light, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_smart_cabinet_cont_cab_light, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_cont_cab_light, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_cont_cab_light, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_cont_cab_light, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_smart_cabinet_cont_cab_light, lv_color_hex(0x2A405C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_smart_cabinet_cont_cab_light, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_cont_cab_light, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_cont_cab_light, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_cont_cab_light, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_cont_cab_light, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_cont_cab_light, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_img_68
    ui->screen_smart_cabinet_img_68 = lv_image_create(ui->screen_smart_cabinet_cont_cab_light);
    lv_obj_set_pos(ui->screen_smart_cabinet_img_68, 26, 29);
    lv_obj_set_size(ui->screen_smart_cabinet_img_68, 52, 52);
    lv_obj_add_flag(ui->screen_smart_cabinet_img_68, LV_OBJ_FLAG_CLICKABLE);
#if LV_USE_GUIDER_SIMULATOR
    lv_image_set_src(ui->screen_smart_cabinet_img_68, "D:\\A\\xw_smart_screen\\import\\image\\icon_zhaoming.png");
#else
    lv_image_set_src(ui->screen_smart_cabinet_img_68, "F:/icon_zhaoming.bin");
#endif
    lv_image_set_pivot(ui->screen_smart_cabinet_img_68, 50,50);
    lv_image_set_rotation(ui->screen_smart_cabinet_img_68, 0);

    //Write style for screen_smart_cabinet_img_68, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_smart_cabinet_img_68, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_smart_cabinet_img_68, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_116
    ui->screen_smart_cabinet_label_116 = lv_label_create(ui->screen_smart_cabinet_cont_cab_light);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_116, 80, 42);
    lv_obj_set_size(ui->screen_smart_cabinet_label_116, 130, 33);
    lv_label_set_text(ui->screen_smart_cabinet_label_116, "照明");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_116, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_116, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_116, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_116, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_116, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_116, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_116, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_116, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_116, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_116, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_116, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_116, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_116, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_116, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_116, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_116, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_img_light_l_icon_off
    ui->screen_smart_cabinet_img_light_l_icon_off = lv_image_create(ui->screen_smart_cabinet_cont_cab_light);
    lv_obj_set_pos(ui->screen_smart_cabinet_img_light_l_icon_off, 44, 123);
    lv_obj_set_size(ui->screen_smart_cabinet_img_light_l_icon_off, 83, 83);
    lv_obj_add_flag(ui->screen_smart_cabinet_img_light_l_icon_off, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_smart_cabinet_img_light_l_icon_off, &_img_zhaoming_close_RGB565A8_83x83);
    lv_image_set_pivot(ui->screen_smart_cabinet_img_light_l_icon_off, 50,50);
    lv_image_set_rotation(ui->screen_smart_cabinet_img_light_l_icon_off, 0);

    //Write style for screen_smart_cabinet_img_light_l_icon_off, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_smart_cabinet_img_light_l_icon_off, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_smart_cabinet_img_light_l_icon_off, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_img_light_s_icon_off
    ui->screen_smart_cabinet_img_light_s_icon_off = lv_image_create(ui->screen_smart_cabinet_cont_cab_light);
    lv_obj_set_pos(ui->screen_smart_cabinet_img_light_s_icon_off, 55, 254);
    lv_obj_set_size(ui->screen_smart_cabinet_img_light_s_icon_off, 23, 23);
    lv_obj_add_flag(ui->screen_smart_cabinet_img_light_s_icon_off, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_smart_cabinet_img_light_s_icon_off, &_icon_crectangle_close_RGB565A8_23x23);
    lv_image_set_pivot(ui->screen_smart_cabinet_img_light_s_icon_off, 50,50);
    lv_image_set_rotation(ui->screen_smart_cabinet_img_light_s_icon_off, 0);

    //Write style for screen_smart_cabinet_img_light_s_icon_off, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_smart_cabinet_img_light_s_icon_off, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_smart_cabinet_img_light_s_icon_off, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_light_on_off
    ui->screen_smart_cabinet_label_light_on_off = lv_label_create(ui->screen_smart_cabinet_cont_cab_light);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_light_on_off, 93, 250);
    lv_obj_set_size(ui->screen_smart_cabinet_label_light_on_off, 60, 33);
    lv_label_set_text(ui->screen_smart_cabinet_label_light_on_off, "开启");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_light_on_off, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_light_on_off, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_light_on_off, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_light_on_off, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_light_on_off, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_light_on_off, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_light_on_off, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_light_on_off, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_light_on_off, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_light_on_off, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_light_on_off, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_light_on_off, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_light_on_off, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_light_on_off, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_light_on_off, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_light_on_off, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_img_light_l_icon_on
    ui->screen_smart_cabinet_img_light_l_icon_on = lv_image_create(ui->screen_smart_cabinet_cont_cab_light);
    lv_obj_set_pos(ui->screen_smart_cabinet_img_light_l_icon_on, 44, 123);
    lv_obj_set_size(ui->screen_smart_cabinet_img_light_l_icon_on, 83, 83);
    lv_obj_add_flag(ui->screen_smart_cabinet_img_light_l_icon_on, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_smart_cabinet_img_light_l_icon_on, &_img_zhaoming_open_RGB565A8_83x83);
    lv_image_set_pivot(ui->screen_smart_cabinet_img_light_l_icon_on, 50,50);
    lv_image_set_rotation(ui->screen_smart_cabinet_img_light_l_icon_on, 0);

    //Write style for screen_smart_cabinet_img_light_l_icon_on, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_smart_cabinet_img_light_l_icon_on, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_smart_cabinet_img_light_l_icon_on, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_img_light_s_icon_on
    ui->screen_smart_cabinet_img_light_s_icon_on = lv_image_create(ui->screen_smart_cabinet_cont_cab_light);
    lv_obj_set_pos(ui->screen_smart_cabinet_img_light_s_icon_on, 55, 254);
    lv_obj_set_size(ui->screen_smart_cabinet_img_light_s_icon_on, 23, 23);
    lv_obj_add_flag(ui->screen_smart_cabinet_img_light_s_icon_on, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_smart_cabinet_img_light_s_icon_on, &_icon_crectangle_open_RGB565A8_23x23);
    lv_image_set_pivot(ui->screen_smart_cabinet_img_light_s_icon_on, 50,50);
    lv_image_set_rotation(ui->screen_smart_cabinet_img_light_s_icon_on, 0);

    //Write style for screen_smart_cabinet_img_light_s_icon_on, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_smart_cabinet_img_light_s_icon_on, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_smart_cabinet_img_light_s_icon_on, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_cont_cab_door
    ui->screen_smart_cabinet_cont_cab_door = lv_obj_create(ui->screen_smart_cabinet_cont_screen_smart_cab);
    lv_obj_set_pos(ui->screen_smart_cabinet_cont_cab_door, 1067, 441);
    lv_obj_set_size(ui->screen_smart_cabinet_cont_cab_door, 183, 329);
    lv_obj_set_scrollbar_mode(ui->screen_smart_cabinet_cont_cab_door, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_smart_cabinet_cont_cab_door, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_cont_cab_door, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_cont_cab_door, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_cont_cab_door, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_smart_cabinet_cont_cab_door, lv_color_hex(0x2A405C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_smart_cabinet_cont_cab_door, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_cont_cab_door, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_cont_cab_door, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_cont_cab_door, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_cont_cab_door, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_cont_cab_door, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_img_73
    ui->screen_smart_cabinet_img_73 = lv_image_create(ui->screen_smart_cabinet_cont_cab_door);
    lv_obj_set_pos(ui->screen_smart_cabinet_img_73, 26, 29);
    lv_obj_set_size(ui->screen_smart_cabinet_img_73, 52, 52);
    lv_obj_add_flag(ui->screen_smart_cabinet_img_73, LV_OBJ_FLAG_CLICKABLE);
#if LV_USE_GUIDER_SIMULATOR
    lv_image_set_src(ui->screen_smart_cabinet_img_73, "D:\\A\\xw_smart_screen\\import\\image\\icon_kaimen.png");
#else
    lv_image_set_src(ui->screen_smart_cabinet_img_73, "F:/icon_kaimen.bin");
#endif
    lv_image_set_pivot(ui->screen_smart_cabinet_img_73, 50,50);
    lv_image_set_rotation(ui->screen_smart_cabinet_img_73, 0);

    //Write style for screen_smart_cabinet_img_73, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_smart_cabinet_img_73, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_smart_cabinet_img_73, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_118
    ui->screen_smart_cabinet_label_118 = lv_label_create(ui->screen_smart_cabinet_cont_cab_door);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_118, 80, 42);
    lv_obj_set_size(ui->screen_smart_cabinet_label_118, 130, 33);
    lv_label_set_text(ui->screen_smart_cabinet_label_118, "开门");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_118, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_118, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_118, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_118, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_118, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_118, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_118, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_118, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_118, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_118, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_118, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_118, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_118, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_118, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_118, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_118, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_img_72
    ui->screen_smart_cabinet_img_72 = lv_image_create(ui->screen_smart_cabinet_cont_cab_door);
    lv_obj_set_pos(ui->screen_smart_cabinet_img_72, 44, 123);
    lv_obj_set_size(ui->screen_smart_cabinet_img_72, 83, 83);
    lv_obj_add_flag(ui->screen_smart_cabinet_img_72, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_smart_cabinet_img_72, &_img_doorlight_close_RGB565A8_83x83);
    lv_image_set_pivot(ui->screen_smart_cabinet_img_72, 50,50);
    lv_image_set_rotation(ui->screen_smart_cabinet_img_72, 0);

    //Write style for screen_smart_cabinet_img_72, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_smart_cabinet_img_72, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_smart_cabinet_img_72, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_img_71
    ui->screen_smart_cabinet_img_71 = lv_image_create(ui->screen_smart_cabinet_cont_cab_door);
    lv_obj_set_pos(ui->screen_smart_cabinet_img_71, 55, 254);
    lv_obj_set_size(ui->screen_smart_cabinet_img_71, 23, 23);
    lv_obj_add_flag(ui->screen_smart_cabinet_img_71, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_smart_cabinet_img_71, &_icon_crectangle_close_RGB565A8_23x23);
    lv_image_set_pivot(ui->screen_smart_cabinet_img_71, 50,50);
    lv_image_set_rotation(ui->screen_smart_cabinet_img_71, 0);

    //Write style for screen_smart_cabinet_img_71, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_smart_cabinet_img_71, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_smart_cabinet_img_71, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_117
    ui->screen_smart_cabinet_label_117 = lv_label_create(ui->screen_smart_cabinet_cont_cab_door);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_117, 93, 251);
    lv_obj_set_size(ui->screen_smart_cabinet_label_117, 60, 33);
    lv_label_set_text(ui->screen_smart_cabinet_label_117, "开启");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_117, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_117, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_117, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_117, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_117, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_117, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_117, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_117, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_117, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_117, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_117, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_117, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_117, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_117, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_117, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_117, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_img_70
    ui->screen_smart_cabinet_img_70 = lv_image_create(ui->screen_smart_cabinet_cont_cab_door);
    lv_obj_set_pos(ui->screen_smart_cabinet_img_70, 44, 123);
    lv_obj_set_size(ui->screen_smart_cabinet_img_70, 83, 83);
    lv_obj_add_flag(ui->screen_smart_cabinet_img_70, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_smart_cabinet_img_70, &_img_doorlight_open_RGB565A8_83x83);
    lv_image_set_pivot(ui->screen_smart_cabinet_img_70, 50,50);
    lv_image_set_rotation(ui->screen_smart_cabinet_img_70, 0);

    //Write style for screen_smart_cabinet_img_70, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_smart_cabinet_img_70, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_smart_cabinet_img_70, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_img_door_s_icon_on
    ui->screen_smart_cabinet_img_door_s_icon_on = lv_image_create(ui->screen_smart_cabinet_cont_cab_door);
    lv_obj_set_pos(ui->screen_smart_cabinet_img_door_s_icon_on, 55, 254);
    lv_obj_set_size(ui->screen_smart_cabinet_img_door_s_icon_on, 23, 23);
    lv_obj_add_flag(ui->screen_smart_cabinet_img_door_s_icon_on, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_smart_cabinet_img_door_s_icon_on, &_icon_crectangle_open_RGB565A8_23x23);
    lv_image_set_pivot(ui->screen_smart_cabinet_img_door_s_icon_on, 50,50);
    lv_image_set_rotation(ui->screen_smart_cabinet_img_door_s_icon_on, 0);

    //Write style for screen_smart_cabinet_img_door_s_icon_on, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_smart_cabinet_img_door_s_icon_on, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_smart_cabinet_img_door_s_icon_on, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_cont_11
    ui->screen_smart_cabinet_cont_11 = lv_obj_create(ui->screen_smart_cabinet_cont_screen_smart_cab);
    lv_obj_set_pos(ui->screen_smart_cabinet_cont_11, 336, 77);
    lv_obj_set_size(ui->screen_smart_cabinet_cont_11, 286, 329);
    lv_obj_set_scrollbar_mode(ui->screen_smart_cabinet_cont_11, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_smart_cabinet_cont_11, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_cont_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_cont_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_cont_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_cont_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_cont_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_cont_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_cont_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_cont_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_cont_12
    ui->screen_smart_cabinet_cont_12 = lv_obj_create(ui->screen_smart_cabinet_cont_11);
    lv_obj_set_pos(ui->screen_smart_cabinet_cont_12, 0, 0);
    lv_obj_set_size(ui->screen_smart_cabinet_cont_12, 286, 329);
    lv_obj_set_scrollbar_mode(ui->screen_smart_cabinet_cont_12, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_smart_cabinet_cont_12, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_smart_cabinet_cont_12, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_cont_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_cont_12, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_cont_12, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_smart_cabinet_cont_12, lv_color_hex(0x2A405C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_smart_cabinet_cont_12, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_cont_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_cont_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_cont_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_cont_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_cont_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_img_83
    ui->screen_smart_cabinet_img_83 = lv_image_create(ui->screen_smart_cabinet_cont_12);
    lv_obj_set_pos(ui->screen_smart_cabinet_img_83, 26, 29);
    lv_obj_set_size(ui->screen_smart_cabinet_img_83, 52, 52);
    lv_obj_add_flag(ui->screen_smart_cabinet_img_83, LV_OBJ_FLAG_CLICKABLE);
#if LV_USE_GUIDER_SIMULATOR
    lv_image_set_src(ui->screen_smart_cabinet_img_83, "D:\\A\\xw_smart_screen\\import\\image\\icon_shidu.png");
#else
    lv_image_set_src(ui->screen_smart_cabinet_img_83, "F:/icon_shidu.bin");
#endif
    lv_image_set_pivot(ui->screen_smart_cabinet_img_83, 50,50);
    lv_image_set_rotation(ui->screen_smart_cabinet_img_83, 0);

    //Write style for screen_smart_cabinet_img_83, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_smart_cabinet_img_83, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_smart_cabinet_img_83, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_149
    ui->screen_smart_cabinet_label_149 = lv_label_create(ui->screen_smart_cabinet_cont_12);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_149, 81, 43);
    lv_obj_set_size(ui->screen_smart_cabinet_label_149, 130, 33);
    lv_label_set_text(ui->screen_smart_cabinet_label_149, "湿度");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_149, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_149, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_149, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_149, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_149, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_149, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_149, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_149, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_149, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_149, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_149, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_149, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_149, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_149, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_149, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_149, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_148
    ui->screen_smart_cabinet_label_148 = lv_label_create(ui->screen_smart_cabinet_cont_12);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_148, 84, 143);
    lv_obj_set_size(ui->screen_smart_cabinet_label_148, 120, 83);
    lv_label_set_text(ui->screen_smart_cabinet_label_148, "33.4");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_148, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_148, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_148, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_148, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_148, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_148, &lv_font_DINCondBlack_70, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_148, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_148, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_148, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_148, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_148, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_148, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_148, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_148, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_148, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_148, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_147
    ui->screen_smart_cabinet_label_147 = lv_label_create(ui->screen_smart_cabinet_cont_12);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_147, 202, 281);
    lv_obj_set_size(ui->screen_smart_cabinet_label_147, 61, 30);
    lv_label_set_text(ui->screen_smart_cabinet_label_147, "%RH");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_147, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_147, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_147, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_147, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_147, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_147, &lv_font_AlibabaPuHuiTiRegular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_147, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_147, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_147, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_147, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_147, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_147, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_147, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_147, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_147, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_147, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_img_82
    ui->screen_smart_cabinet_img_82 = lv_image_create(ui->screen_smart_cabinet_cont_12);
    lv_obj_set_pos(ui->screen_smart_cabinet_img_82, 201, 80);
    lv_obj_set_size(ui->screen_smart_cabinet_img_82, 50, 50);
    lv_obj_add_flag(ui->screen_smart_cabinet_img_82, LV_OBJ_FLAG_CLICKABLE);
#if LV_USE_GUIDER_SIMULATOR
    lv_image_set_src(ui->screen_smart_cabinet_img_82, "D:\\A\\xw_smart_screen\\import\\image\\img_label.png");
#else
    lv_image_set_src(ui->screen_smart_cabinet_img_82, "F:/img_label.bin");
#endif
    lv_image_set_pivot(ui->screen_smart_cabinet_img_82, 50,50);
    lv_image_set_rotation(ui->screen_smart_cabinet_img_82, 0);

    //Write style for screen_smart_cabinet_img_82, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_smart_cabinet_img_82, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_smart_cabinet_img_82, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_146
    ui->screen_smart_cabinet_label_146 = lv_label_create(ui->screen_smart_cabinet_cont_12);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_146, 211, 91);
    lv_obj_set_size(ui->screen_smart_cabinet_label_146, 32, 26);
    lv_label_set_text(ui->screen_smart_cabinet_label_146, "1-1");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_146, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_146, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_146, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_146, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_146, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_146, &lv_font_AlibabaPuHuiTiRegular_19, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_146, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_146, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_146, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_146, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_146, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_146, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_146, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_146, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_146, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_146, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_cont_13
    ui->screen_smart_cabinet_cont_13 = lv_obj_create(ui->screen_smart_cabinet_cont_12);
    lv_obj_set_pos(ui->screen_smart_cabinet_cont_13, 97, 291);
    lv_obj_set_size(ui->screen_smart_cabinet_cont_13, 90, 18);
    lv_obj_set_scrollbar_mode(ui->screen_smart_cabinet_cont_13, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_smart_cabinet_cont_13, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_cont_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_cont_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_cont_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_cont_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_cont_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_cont_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_cont_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_cont_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_line_21
    ui->screen_smart_cabinet_line_21 = lv_line_create(ui->screen_smart_cabinet_cont_13);
    lv_obj_set_pos(ui->screen_smart_cabinet_line_21, 5, 6);
    lv_obj_set_size(ui->screen_smart_cabinet_line_21, 8, 8);
    static lv_point_precise_t screen_smart_cabinet_line_21[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_smart_cabinet_line_21, screen_smart_cabinet_line_21, 2);

    //Write style for screen_smart_cabinet_line_21, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_smart_cabinet_line_21, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_smart_cabinet_line_21, lv_color_hex(0x44D7B6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_smart_cabinet_line_21, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_smart_cabinet_line_21, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_line_20
    ui->screen_smart_cabinet_line_20 = lv_line_create(ui->screen_smart_cabinet_cont_13);
    lv_obj_set_pos(ui->screen_smart_cabinet_line_20, 30, 6);
    lv_obj_set_size(ui->screen_smart_cabinet_line_20, 8, 8);
    static lv_point_precise_t screen_smart_cabinet_line_20[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_smart_cabinet_line_20, screen_smart_cabinet_line_20, 2);

    //Write style for screen_smart_cabinet_line_20, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_smart_cabinet_line_20, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_smart_cabinet_line_20, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_smart_cabinet_line_20, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_smart_cabinet_line_20, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_line_19
    ui->screen_smart_cabinet_line_19 = lv_line_create(ui->screen_smart_cabinet_cont_13);
    lv_obj_set_pos(ui->screen_smart_cabinet_line_19, 55, 6);
    lv_obj_set_size(ui->screen_smart_cabinet_line_19, 8, 8);
    static lv_point_precise_t screen_smart_cabinet_line_19[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_smart_cabinet_line_19, screen_smart_cabinet_line_19, 2);

    //Write style for screen_smart_cabinet_line_19, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_smart_cabinet_line_19, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_smart_cabinet_line_19, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_smart_cabinet_line_19, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_smart_cabinet_line_19, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_line_18
    ui->screen_smart_cabinet_line_18 = lv_line_create(ui->screen_smart_cabinet_cont_13);
    lv_obj_set_pos(ui->screen_smart_cabinet_line_18, 80, 6);
    lv_obj_set_size(ui->screen_smart_cabinet_line_18, 8, 8);
    static lv_point_precise_t screen_smart_cabinet_line_18[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_smart_cabinet_line_18, screen_smart_cabinet_line_18, 2);

    //Write style for screen_smart_cabinet_line_18, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_smart_cabinet_line_18, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_smart_cabinet_line_18, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_smart_cabinet_line_18, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_smart_cabinet_line_18, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_cont_14
    ui->screen_smart_cabinet_cont_14 = lv_obj_create(ui->screen_smart_cabinet_cont_11);
    lv_obj_set_pos(ui->screen_smart_cabinet_cont_14, 0, 0);
    lv_obj_set_size(ui->screen_smart_cabinet_cont_14, 286, 329);
    lv_obj_set_scrollbar_mode(ui->screen_smart_cabinet_cont_14, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_smart_cabinet_cont_14, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_smart_cabinet_cont_14, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_cont_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_cont_14, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_cont_14, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_smart_cabinet_cont_14, lv_color_hex(0x2A405C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_smart_cabinet_cont_14, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_cont_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_cont_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_cont_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_cont_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_cont_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_img_85
    ui->screen_smart_cabinet_img_85 = lv_image_create(ui->screen_smart_cabinet_cont_14);
    lv_obj_set_pos(ui->screen_smart_cabinet_img_85, 26, 29);
    lv_obj_set_size(ui->screen_smart_cabinet_img_85, 52, 52);
    lv_obj_add_flag(ui->screen_smart_cabinet_img_85, LV_OBJ_FLAG_CLICKABLE);
#if LV_USE_GUIDER_SIMULATOR
    lv_image_set_src(ui->screen_smart_cabinet_img_85, "D:\\A\\xw_smart_screen\\import\\image\\icon_shidu.png");
#else
    lv_image_set_src(ui->screen_smart_cabinet_img_85, "F:/icon_shidu.bin");
#endif
    lv_image_set_pivot(ui->screen_smart_cabinet_img_85, 50,50);
    lv_image_set_rotation(ui->screen_smart_cabinet_img_85, 0);

    //Write style for screen_smart_cabinet_img_85, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_smart_cabinet_img_85, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_smart_cabinet_img_85, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_153
    ui->screen_smart_cabinet_label_153 = lv_label_create(ui->screen_smart_cabinet_cont_14);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_153, 81, 43);
    lv_obj_set_size(ui->screen_smart_cabinet_label_153, 130, 33);
    lv_label_set_text(ui->screen_smart_cabinet_label_153, "湿度");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_153, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_153, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_153, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_153, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_153, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_153, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_153, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_153, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_153, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_153, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_153, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_153, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_153, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_153, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_153, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_153, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_152
    ui->screen_smart_cabinet_label_152 = lv_label_create(ui->screen_smart_cabinet_cont_14);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_152, 84, 143);
    lv_obj_set_size(ui->screen_smart_cabinet_label_152, 120, 83);
    lv_label_set_text(ui->screen_smart_cabinet_label_152, "33.4");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_152, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_152, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_152, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_152, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_152, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_152, &lv_font_DINCondBlack_70, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_152, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_152, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_152, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_152, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_152, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_152, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_152, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_152, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_152, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_152, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_151
    ui->screen_smart_cabinet_label_151 = lv_label_create(ui->screen_smart_cabinet_cont_14);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_151, 202, 281);
    lv_obj_set_size(ui->screen_smart_cabinet_label_151, 61, 30);
    lv_label_set_text(ui->screen_smart_cabinet_label_151, "%RH");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_151, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_151, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_151, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_151, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_151, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_151, &lv_font_AlibabaPuHuiTiRegular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_151, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_151, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_151, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_151, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_151, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_151, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_151, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_151, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_151, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_151, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_img_84
    ui->screen_smart_cabinet_img_84 = lv_image_create(ui->screen_smart_cabinet_cont_14);
    lv_obj_set_pos(ui->screen_smart_cabinet_img_84, 201, 80);
    lv_obj_set_size(ui->screen_smart_cabinet_img_84, 50, 50);
    lv_obj_add_flag(ui->screen_smart_cabinet_img_84, LV_OBJ_FLAG_CLICKABLE);
#if LV_USE_GUIDER_SIMULATOR
    lv_image_set_src(ui->screen_smart_cabinet_img_84, "D:\\A\\xw_smart_screen\\import\\image\\img_label.png");
#else
    lv_image_set_src(ui->screen_smart_cabinet_img_84, "F:/img_label.bin");
#endif
    lv_image_set_pivot(ui->screen_smart_cabinet_img_84, 50,50);
    lv_image_set_rotation(ui->screen_smart_cabinet_img_84, 0);

    //Write style for screen_smart_cabinet_img_84, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_smart_cabinet_img_84, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_smart_cabinet_img_84, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_150
    ui->screen_smart_cabinet_label_150 = lv_label_create(ui->screen_smart_cabinet_cont_14);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_150, 211, 91);
    lv_obj_set_size(ui->screen_smart_cabinet_label_150, 32, 26);
    lv_label_set_text(ui->screen_smart_cabinet_label_150, "1-2");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_150, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_150, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_150, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_150, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_150, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_150, &lv_font_AlibabaPuHuiTiRegular_19, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_150, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_150, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_150, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_150, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_150, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_150, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_150, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_150, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_150, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_150, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_cont_15
    ui->screen_smart_cabinet_cont_15 = lv_obj_create(ui->screen_smart_cabinet_cont_14);
    lv_obj_set_pos(ui->screen_smart_cabinet_cont_15, 97, 291);
    lv_obj_set_size(ui->screen_smart_cabinet_cont_15, 90, 18);
    lv_obj_set_scrollbar_mode(ui->screen_smart_cabinet_cont_15, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_smart_cabinet_cont_15, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_cont_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_cont_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_cont_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_cont_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_cont_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_cont_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_cont_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_cont_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_line_25
    ui->screen_smart_cabinet_line_25 = lv_line_create(ui->screen_smart_cabinet_cont_15);
    lv_obj_set_pos(ui->screen_smart_cabinet_line_25, 5, 6);
    lv_obj_set_size(ui->screen_smart_cabinet_line_25, 8, 8);
    static lv_point_precise_t screen_smart_cabinet_line_25[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_smart_cabinet_line_25, screen_smart_cabinet_line_25, 2);

    //Write style for screen_smart_cabinet_line_25, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_smart_cabinet_line_25, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_smart_cabinet_line_25, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_smart_cabinet_line_25, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_smart_cabinet_line_25, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_line_24
    ui->screen_smart_cabinet_line_24 = lv_line_create(ui->screen_smart_cabinet_cont_15);
    lv_obj_set_pos(ui->screen_smart_cabinet_line_24, 30, 6);
    lv_obj_set_size(ui->screen_smart_cabinet_line_24, 8, 8);
    static lv_point_precise_t screen_smart_cabinet_line_24[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_smart_cabinet_line_24, screen_smart_cabinet_line_24, 2);

    //Write style for screen_smart_cabinet_line_24, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_smart_cabinet_line_24, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_smart_cabinet_line_24, lv_color_hex(0x44D7B6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_smart_cabinet_line_24, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_smart_cabinet_line_24, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_line_23
    ui->screen_smart_cabinet_line_23 = lv_line_create(ui->screen_smart_cabinet_cont_15);
    lv_obj_set_pos(ui->screen_smart_cabinet_line_23, 55, 6);
    lv_obj_set_size(ui->screen_smart_cabinet_line_23, 8, 8);
    static lv_point_precise_t screen_smart_cabinet_line_23[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_smart_cabinet_line_23, screen_smart_cabinet_line_23, 2);

    //Write style for screen_smart_cabinet_line_23, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_smart_cabinet_line_23, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_smart_cabinet_line_23, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_smart_cabinet_line_23, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_smart_cabinet_line_23, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_line_22
    ui->screen_smart_cabinet_line_22 = lv_line_create(ui->screen_smart_cabinet_cont_15);
    lv_obj_set_pos(ui->screen_smart_cabinet_line_22, 80, 6);
    lv_obj_set_size(ui->screen_smart_cabinet_line_22, 8, 8);
    static lv_point_precise_t screen_smart_cabinet_line_22[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_smart_cabinet_line_22, screen_smart_cabinet_line_22, 2);

    //Write style for screen_smart_cabinet_line_22, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_smart_cabinet_line_22, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_smart_cabinet_line_22, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_smart_cabinet_line_22, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_smart_cabinet_line_22, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_cont_16
    ui->screen_smart_cabinet_cont_16 = lv_obj_create(ui->screen_smart_cabinet_cont_11);
    lv_obj_set_pos(ui->screen_smart_cabinet_cont_16, 0, 0);
    lv_obj_set_size(ui->screen_smart_cabinet_cont_16, 286, 329);
    lv_obj_set_scrollbar_mode(ui->screen_smart_cabinet_cont_16, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_smart_cabinet_cont_16, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_smart_cabinet_cont_16, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_cont_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_cont_16, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_cont_16, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_smart_cabinet_cont_16, lv_color_hex(0x2A405C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_smart_cabinet_cont_16, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_cont_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_cont_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_cont_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_cont_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_cont_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_img_87
    ui->screen_smart_cabinet_img_87 = lv_image_create(ui->screen_smart_cabinet_cont_16);
    lv_obj_set_pos(ui->screen_smart_cabinet_img_87, 26, 29);
    lv_obj_set_size(ui->screen_smart_cabinet_img_87, 52, 52);
    lv_obj_add_flag(ui->screen_smart_cabinet_img_87, LV_OBJ_FLAG_CLICKABLE);
#if LV_USE_GUIDER_SIMULATOR
    lv_image_set_src(ui->screen_smart_cabinet_img_87, "D:\\A\\xw_smart_screen\\import\\image\\icon_shidu.png");
#else
    lv_image_set_src(ui->screen_smart_cabinet_img_87, "F:/icon_shidu.bin");
#endif
    lv_image_set_pivot(ui->screen_smart_cabinet_img_87, 50,50);
    lv_image_set_rotation(ui->screen_smart_cabinet_img_87, 0);

    //Write style for screen_smart_cabinet_img_87, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_smart_cabinet_img_87, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_smart_cabinet_img_87, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_157
    ui->screen_smart_cabinet_label_157 = lv_label_create(ui->screen_smart_cabinet_cont_16);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_157, 81, 43);
    lv_obj_set_size(ui->screen_smart_cabinet_label_157, 130, 33);
    lv_label_set_text(ui->screen_smart_cabinet_label_157, "湿度");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_157, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_157, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_157, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_157, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_157, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_157, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_157, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_157, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_157, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_157, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_157, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_157, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_157, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_157, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_157, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_157, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_156
    ui->screen_smart_cabinet_label_156 = lv_label_create(ui->screen_smart_cabinet_cont_16);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_156, 84, 143);
    lv_obj_set_size(ui->screen_smart_cabinet_label_156, 120, 83);
    lv_label_set_text(ui->screen_smart_cabinet_label_156, "33.4");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_156, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_156, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_156, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_156, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_156, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_156, &lv_font_DINCondBlack_70, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_156, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_156, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_156, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_156, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_156, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_156, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_156, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_156, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_156, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_156, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_155
    ui->screen_smart_cabinet_label_155 = lv_label_create(ui->screen_smart_cabinet_cont_16);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_155, 202, 281);
    lv_obj_set_size(ui->screen_smart_cabinet_label_155, 61, 30);
    lv_label_set_text(ui->screen_smart_cabinet_label_155, "%RH");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_155, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_155, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_155, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_155, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_155, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_155, &lv_font_AlibabaPuHuiTiRegular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_155, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_155, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_155, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_155, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_155, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_155, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_155, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_155, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_155, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_155, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_img_86
    ui->screen_smart_cabinet_img_86 = lv_image_create(ui->screen_smart_cabinet_cont_16);
    lv_obj_set_pos(ui->screen_smart_cabinet_img_86, 201, 80);
    lv_obj_set_size(ui->screen_smart_cabinet_img_86, 50, 50);
    lv_obj_add_flag(ui->screen_smart_cabinet_img_86, LV_OBJ_FLAG_CLICKABLE);
#if LV_USE_GUIDER_SIMULATOR
    lv_image_set_src(ui->screen_smart_cabinet_img_86, "D:\\A\\xw_smart_screen\\import\\image\\img_label.png");
#else
    lv_image_set_src(ui->screen_smart_cabinet_img_86, "F:/img_label.bin");
#endif
    lv_image_set_pivot(ui->screen_smart_cabinet_img_86, 50,50);
    lv_image_set_rotation(ui->screen_smart_cabinet_img_86, 0);

    //Write style for screen_smart_cabinet_img_86, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_smart_cabinet_img_86, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_smart_cabinet_img_86, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_154
    ui->screen_smart_cabinet_label_154 = lv_label_create(ui->screen_smart_cabinet_cont_16);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_154, 211, 91);
    lv_obj_set_size(ui->screen_smart_cabinet_label_154, 32, 26);
    lv_label_set_text(ui->screen_smart_cabinet_label_154, "1-3");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_154, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_154, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_154, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_154, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_154, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_154, &lv_font_AlibabaPuHuiTiRegular_19, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_154, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_154, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_154, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_154, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_154, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_154, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_154, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_154, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_154, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_154, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_cont_17
    ui->screen_smart_cabinet_cont_17 = lv_obj_create(ui->screen_smart_cabinet_cont_16);
    lv_obj_set_pos(ui->screen_smart_cabinet_cont_17, 97, 291);
    lv_obj_set_size(ui->screen_smart_cabinet_cont_17, 90, 18);
    lv_obj_set_scrollbar_mode(ui->screen_smart_cabinet_cont_17, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_smart_cabinet_cont_17, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_cont_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_cont_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_cont_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_cont_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_cont_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_cont_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_cont_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_cont_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_line_29
    ui->screen_smart_cabinet_line_29 = lv_line_create(ui->screen_smart_cabinet_cont_17);
    lv_obj_set_pos(ui->screen_smart_cabinet_line_29, 5, 6);
    lv_obj_set_size(ui->screen_smart_cabinet_line_29, 8, 8);
    static lv_point_precise_t screen_smart_cabinet_line_29[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_smart_cabinet_line_29, screen_smart_cabinet_line_29, 2);

    //Write style for screen_smart_cabinet_line_29, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_smart_cabinet_line_29, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_smart_cabinet_line_29, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_smart_cabinet_line_29, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_smart_cabinet_line_29, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_line_28
    ui->screen_smart_cabinet_line_28 = lv_line_create(ui->screen_smart_cabinet_cont_17);
    lv_obj_set_pos(ui->screen_smart_cabinet_line_28, 30, 6);
    lv_obj_set_size(ui->screen_smart_cabinet_line_28, 8, 8);
    static lv_point_precise_t screen_smart_cabinet_line_28[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_smart_cabinet_line_28, screen_smart_cabinet_line_28, 2);

    //Write style for screen_smart_cabinet_line_28, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_smart_cabinet_line_28, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_smart_cabinet_line_28, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_smart_cabinet_line_28, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_smart_cabinet_line_28, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_line_27
    ui->screen_smart_cabinet_line_27 = lv_line_create(ui->screen_smart_cabinet_cont_17);
    lv_obj_set_pos(ui->screen_smart_cabinet_line_27, 55, 6);
    lv_obj_set_size(ui->screen_smart_cabinet_line_27, 8, 8);
    static lv_point_precise_t screen_smart_cabinet_line_27[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_smart_cabinet_line_27, screen_smart_cabinet_line_27, 2);

    //Write style for screen_smart_cabinet_line_27, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_smart_cabinet_line_27, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_smart_cabinet_line_27, lv_color_hex(0x44D7B6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_smart_cabinet_line_27, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_smart_cabinet_line_27, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_line_26
    ui->screen_smart_cabinet_line_26 = lv_line_create(ui->screen_smart_cabinet_cont_17);
    lv_obj_set_pos(ui->screen_smart_cabinet_line_26, 80, 6);
    lv_obj_set_size(ui->screen_smart_cabinet_line_26, 8, 8);
    static lv_point_precise_t screen_smart_cabinet_line_26[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_smart_cabinet_line_26, screen_smart_cabinet_line_26, 2);

    //Write style for screen_smart_cabinet_line_26, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_smart_cabinet_line_26, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_smart_cabinet_line_26, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_smart_cabinet_line_26, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_smart_cabinet_line_26, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_cont_18
    ui->screen_smart_cabinet_cont_18 = lv_obj_create(ui->screen_smart_cabinet_cont_11);
    lv_obj_set_pos(ui->screen_smart_cabinet_cont_18, 0, 0);
    lv_obj_set_size(ui->screen_smart_cabinet_cont_18, 286, 329);
    lv_obj_set_scrollbar_mode(ui->screen_smart_cabinet_cont_18, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_smart_cabinet_cont_18, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_cont_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_cont_18, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_cont_18, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_smart_cabinet_cont_18, lv_color_hex(0x2A405C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_smart_cabinet_cont_18, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_cont_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_cont_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_cont_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_cont_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_cont_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_img_89
    ui->screen_smart_cabinet_img_89 = lv_image_create(ui->screen_smart_cabinet_cont_18);
    lv_obj_set_pos(ui->screen_smart_cabinet_img_89, 26, 29);
    lv_obj_set_size(ui->screen_smart_cabinet_img_89, 52, 52);
    lv_obj_add_flag(ui->screen_smart_cabinet_img_89, LV_OBJ_FLAG_CLICKABLE);
#if LV_USE_GUIDER_SIMULATOR
    lv_image_set_src(ui->screen_smart_cabinet_img_89, "D:\\A\\xw_smart_screen\\import\\image\\icon_shidu.png");
#else
    lv_image_set_src(ui->screen_smart_cabinet_img_89, "F:/icon_shidu.bin");
#endif
    lv_image_set_pivot(ui->screen_smart_cabinet_img_89, 50,50);
    lv_image_set_rotation(ui->screen_smart_cabinet_img_89, 0);

    //Write style for screen_smart_cabinet_img_89, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_smart_cabinet_img_89, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_smart_cabinet_img_89, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_161
    ui->screen_smart_cabinet_label_161 = lv_label_create(ui->screen_smart_cabinet_cont_18);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_161, 81, 43);
    lv_obj_set_size(ui->screen_smart_cabinet_label_161, 130, 33);
    lv_label_set_text(ui->screen_smart_cabinet_label_161, "湿度");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_161, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_161, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_161, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_161, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_161, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_161, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_161, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_161, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_161, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_161, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_161, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_161, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_161, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_161, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_161, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_161, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_160
    ui->screen_smart_cabinet_label_160 = lv_label_create(ui->screen_smart_cabinet_cont_18);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_160, 84, 143);
    lv_obj_set_size(ui->screen_smart_cabinet_label_160, 120, 83);
    lv_label_set_text(ui->screen_smart_cabinet_label_160, "33.4");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_160, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_160, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_160, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_160, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_160, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_160, &lv_font_DINCondBlack_70, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_160, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_160, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_160, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_160, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_160, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_160, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_160, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_160, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_160, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_160, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_159
    ui->screen_smart_cabinet_label_159 = lv_label_create(ui->screen_smart_cabinet_cont_18);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_159, 202, 281);
    lv_obj_set_size(ui->screen_smart_cabinet_label_159, 61, 30);
    lv_label_set_text(ui->screen_smart_cabinet_label_159, "%RH");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_159, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_159, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_159, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_159, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_159, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_159, &lv_font_AlibabaPuHuiTiRegular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_159, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_159, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_159, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_159, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_159, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_159, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_159, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_159, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_159, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_159, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_img_88
    ui->screen_smart_cabinet_img_88 = lv_image_create(ui->screen_smart_cabinet_cont_18);
    lv_obj_set_pos(ui->screen_smart_cabinet_img_88, 201, 80);
    lv_obj_set_size(ui->screen_smart_cabinet_img_88, 50, 50);
    lv_obj_add_flag(ui->screen_smart_cabinet_img_88, LV_OBJ_FLAG_CLICKABLE);
#if LV_USE_GUIDER_SIMULATOR
    lv_image_set_src(ui->screen_smart_cabinet_img_88, "D:\\A\\xw_smart_screen\\import\\image\\img_label.png");
#else
    lv_image_set_src(ui->screen_smart_cabinet_img_88, "F:/img_label.bin");
#endif
    lv_image_set_pivot(ui->screen_smart_cabinet_img_88, 50,50);
    lv_image_set_rotation(ui->screen_smart_cabinet_img_88, 0);

    //Write style for screen_smart_cabinet_img_88, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_smart_cabinet_img_88, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_smart_cabinet_img_88, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_158
    ui->screen_smart_cabinet_label_158 = lv_label_create(ui->screen_smart_cabinet_cont_18);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_158, 211, 91);
    lv_obj_set_size(ui->screen_smart_cabinet_label_158, 32, 26);
    lv_label_set_text(ui->screen_smart_cabinet_label_158, "1-4");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_158, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_158, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_158, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_158, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_158, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_158, &lv_font_AlibabaPuHuiTiRegular_19, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_158, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_158, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_158, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_158, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_158, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_158, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_158, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_158, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_158, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_158, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_cont_19
    ui->screen_smart_cabinet_cont_19 = lv_obj_create(ui->screen_smart_cabinet_cont_18);
    lv_obj_set_pos(ui->screen_smart_cabinet_cont_19, 97, 291);
    lv_obj_set_size(ui->screen_smart_cabinet_cont_19, 90, 18);
    lv_obj_set_scrollbar_mode(ui->screen_smart_cabinet_cont_19, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_smart_cabinet_cont_19, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_cont_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_cont_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_cont_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_cont_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_cont_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_cont_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_cont_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_cont_19, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_line_33
    ui->screen_smart_cabinet_line_33 = lv_line_create(ui->screen_smart_cabinet_cont_19);
    lv_obj_set_pos(ui->screen_smart_cabinet_line_33, 5, 6);
    lv_obj_set_size(ui->screen_smart_cabinet_line_33, 8, 8);
    static lv_point_precise_t screen_smart_cabinet_line_33[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_smart_cabinet_line_33, screen_smart_cabinet_line_33, 2);

    //Write style for screen_smart_cabinet_line_33, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_smart_cabinet_line_33, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_smart_cabinet_line_33, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_smart_cabinet_line_33, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_smart_cabinet_line_33, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_line_32
    ui->screen_smart_cabinet_line_32 = lv_line_create(ui->screen_smart_cabinet_cont_19);
    lv_obj_set_pos(ui->screen_smart_cabinet_line_32, 30, 6);
    lv_obj_set_size(ui->screen_smart_cabinet_line_32, 8, 8);
    static lv_point_precise_t screen_smart_cabinet_line_32[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_smart_cabinet_line_32, screen_smart_cabinet_line_32, 2);

    //Write style for screen_smart_cabinet_line_32, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_smart_cabinet_line_32, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_smart_cabinet_line_32, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_smart_cabinet_line_32, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_smart_cabinet_line_32, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_line_31
    ui->screen_smart_cabinet_line_31 = lv_line_create(ui->screen_smart_cabinet_cont_19);
    lv_obj_set_pos(ui->screen_smart_cabinet_line_31, 55, 6);
    lv_obj_set_size(ui->screen_smart_cabinet_line_31, 8, 8);
    static lv_point_precise_t screen_smart_cabinet_line_31[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_smart_cabinet_line_31, screen_smart_cabinet_line_31, 2);

    //Write style for screen_smart_cabinet_line_31, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_smart_cabinet_line_31, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_smart_cabinet_line_31, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_smart_cabinet_line_31, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_smart_cabinet_line_31, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_line_30
    ui->screen_smart_cabinet_line_30 = lv_line_create(ui->screen_smart_cabinet_cont_19);
    lv_obj_set_pos(ui->screen_smart_cabinet_line_30, 80, 6);
    lv_obj_set_size(ui->screen_smart_cabinet_line_30, 8, 8);
    static lv_point_precise_t screen_smart_cabinet_line_30[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_smart_cabinet_line_30, screen_smart_cabinet_line_30, 2);

    //Write style for screen_smart_cabinet_line_30, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_smart_cabinet_line_30, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_smart_cabinet_line_30, lv_color_hex(0x44D7B6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_smart_cabinet_line_30, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_smart_cabinet_line_30, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_cont_2
    ui->screen_smart_cabinet_cont_2 = lv_obj_create(ui->screen_smart_cabinet_cont_screen_smart_cab);
    lv_obj_set_pos(ui->screen_smart_cabinet_cont_2, 18, 77);
    lv_obj_set_size(ui->screen_smart_cabinet_cont_2, 286, 329);
    lv_obj_set_scrollbar_mode(ui->screen_smart_cabinet_cont_2, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_smart_cabinet_cont_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_cont_3
    ui->screen_smart_cabinet_cont_3 = lv_obj_create(ui->screen_smart_cabinet_cont_2);
    lv_obj_set_pos(ui->screen_smart_cabinet_cont_3, 0, 0);
    lv_obj_set_size(ui->screen_smart_cabinet_cont_3, 286, 329);
    lv_obj_set_scrollbar_mode(ui->screen_smart_cabinet_cont_3, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_smart_cabinet_cont_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_cont_3, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_cont_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_smart_cabinet_cont_3, lv_color_hex(0x2A405C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_smart_cabinet_cont_3, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_img_75
    ui->screen_smart_cabinet_img_75 = lv_image_create(ui->screen_smart_cabinet_cont_3);
    lv_obj_set_pos(ui->screen_smart_cabinet_img_75, 27, 30);
    lv_obj_set_size(ui->screen_smart_cabinet_img_75, 52, 52);
    lv_obj_add_flag(ui->screen_smart_cabinet_img_75, LV_OBJ_FLAG_CLICKABLE);
#if LV_USE_GUIDER_SIMULATOR
    lv_image_set_src(ui->screen_smart_cabinet_img_75, "D:\\A\\xw_smart_screen\\import\\image\\icon_wendu.png");
#else
    lv_image_set_src(ui->screen_smart_cabinet_img_75, "F:/icon_wendu.bin");
#endif
    lv_image_set_pivot(ui->screen_smart_cabinet_img_75, 50,50);
    lv_image_set_rotation(ui->screen_smart_cabinet_img_75, 0);

    //Write style for screen_smart_cabinet_img_75, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_smart_cabinet_img_75, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_smart_cabinet_img_75, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_133
    ui->screen_smart_cabinet_label_133 = lv_label_create(ui->screen_smart_cabinet_cont_3);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_133, 80, 43);
    lv_obj_set_size(ui->screen_smart_cabinet_label_133, 130, 33);
    lv_label_set_text(ui->screen_smart_cabinet_label_133, "温度");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_133, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_133, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_133, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_133, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_133, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_133, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_133, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_133, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_133, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_133, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_133, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_133, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_133, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_133, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_133, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_133, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_132
    ui->screen_smart_cabinet_label_132 = lv_label_create(ui->screen_smart_cabinet_cont_3);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_132, 84, 143);
    lv_obj_set_size(ui->screen_smart_cabinet_label_132, 120, 83);
    lv_label_set_text(ui->screen_smart_cabinet_label_132, "33.4");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_132, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_132, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_132, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_132, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_132, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_132, &lv_font_DINCondBlack_70, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_132, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_132, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_132, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_132, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_132, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_132, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_132, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_132, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_132, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_132, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_131
    ui->screen_smart_cabinet_label_131 = lv_label_create(ui->screen_smart_cabinet_cont_3);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_131, 202, 281);
    lv_obj_set_size(ui->screen_smart_cabinet_label_131, 61, 30);
    lv_label_set_text(ui->screen_smart_cabinet_label_131, "℃");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_131, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_131, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_131, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_131, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_131, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_131, &lv_font_AlibabaPuHuiTiRegular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_131, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_131, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_131, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_131, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_131, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_131, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_131, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_131, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_131, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_131, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_img_74
    ui->screen_smart_cabinet_img_74 = lv_image_create(ui->screen_smart_cabinet_cont_3);
    lv_obj_set_pos(ui->screen_smart_cabinet_img_74, 201, 80);
    lv_obj_set_size(ui->screen_smart_cabinet_img_74, 50, 50);
    lv_obj_add_flag(ui->screen_smart_cabinet_img_74, LV_OBJ_FLAG_CLICKABLE);
#if LV_USE_GUIDER_SIMULATOR
    lv_image_set_src(ui->screen_smart_cabinet_img_74, "D:\\A\\xw_smart_screen\\import\\image\\img_label.png");
#else
    lv_image_set_src(ui->screen_smart_cabinet_img_74, "F:/img_label.bin");
#endif
    lv_image_set_pivot(ui->screen_smart_cabinet_img_74, 50,50);
    lv_image_set_rotation(ui->screen_smart_cabinet_img_74, 0);

    //Write style for screen_smart_cabinet_img_74, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_smart_cabinet_img_74, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_smart_cabinet_img_74, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_130
    ui->screen_smart_cabinet_label_130 = lv_label_create(ui->screen_smart_cabinet_cont_3);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_130, 211, 91);
    lv_obj_set_size(ui->screen_smart_cabinet_label_130, 32, 26);
    lv_label_set_text(ui->screen_smart_cabinet_label_130, "1-1");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_130, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_130, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_130, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_130, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_130, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_130, &lv_font_AlibabaPuHuiTiRegular_19, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_130, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_130, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_130, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_130, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_130, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_130, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_130, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_130, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_130, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_130, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_cont_4
    ui->screen_smart_cabinet_cont_4 = lv_obj_create(ui->screen_smart_cabinet_cont_3);
    lv_obj_set_pos(ui->screen_smart_cabinet_cont_4, 97, 291);
    lv_obj_set_size(ui->screen_smart_cabinet_cont_4, 90, 18);
    lv_obj_set_scrollbar_mode(ui->screen_smart_cabinet_cont_4, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_smart_cabinet_cont_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_cont_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_cont_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_cont_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_cont_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_cont_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_cont_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_cont_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_cont_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_line_5
    ui->screen_smart_cabinet_line_5 = lv_line_create(ui->screen_smart_cabinet_cont_4);
    lv_obj_set_pos(ui->screen_smart_cabinet_line_5, 5, 6);
    lv_obj_set_size(ui->screen_smart_cabinet_line_5, 8, 8);
    static lv_point_precise_t screen_smart_cabinet_line_5[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_smart_cabinet_line_5, screen_smart_cabinet_line_5, 2);

    //Write style for screen_smart_cabinet_line_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_smart_cabinet_line_5, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_smart_cabinet_line_5, lv_color_hex(0x44D7B6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_smart_cabinet_line_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_smart_cabinet_line_5, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_line_4
    ui->screen_smart_cabinet_line_4 = lv_line_create(ui->screen_smart_cabinet_cont_4);
    lv_obj_set_pos(ui->screen_smart_cabinet_line_4, 30, 6);
    lv_obj_set_size(ui->screen_smart_cabinet_line_4, 8, 8);
    static lv_point_precise_t screen_smart_cabinet_line_4[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_smart_cabinet_line_4, screen_smart_cabinet_line_4, 2);

    //Write style for screen_smart_cabinet_line_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_smart_cabinet_line_4, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_smart_cabinet_line_4, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_smart_cabinet_line_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_smart_cabinet_line_4, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_line_3
    ui->screen_smart_cabinet_line_3 = lv_line_create(ui->screen_smart_cabinet_cont_4);
    lv_obj_set_pos(ui->screen_smart_cabinet_line_3, 55, 6);
    lv_obj_set_size(ui->screen_smart_cabinet_line_3, 8, 8);
    static lv_point_precise_t screen_smart_cabinet_line_3[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_smart_cabinet_line_3, screen_smart_cabinet_line_3, 2);

    //Write style for screen_smart_cabinet_line_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_smart_cabinet_line_3, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_smart_cabinet_line_3, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_smart_cabinet_line_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_smart_cabinet_line_3, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_line_2
    ui->screen_smart_cabinet_line_2 = lv_line_create(ui->screen_smart_cabinet_cont_4);
    lv_obj_set_pos(ui->screen_smart_cabinet_line_2, 80, 6);
    lv_obj_set_size(ui->screen_smart_cabinet_line_2, 8, 8);
    static lv_point_precise_t screen_smart_cabinet_line_2[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_smart_cabinet_line_2, screen_smart_cabinet_line_2, 2);

    //Write style for screen_smart_cabinet_line_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_smart_cabinet_line_2, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_smart_cabinet_line_2, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_smart_cabinet_line_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_smart_cabinet_line_2, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_cont_5
    ui->screen_smart_cabinet_cont_5 = lv_obj_create(ui->screen_smart_cabinet_cont_2);
    lv_obj_set_pos(ui->screen_smart_cabinet_cont_5, 0, 0);
    lv_obj_set_size(ui->screen_smart_cabinet_cont_5, 286, 329);
    lv_obj_set_scrollbar_mode(ui->screen_smart_cabinet_cont_5, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_smart_cabinet_cont_5, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_smart_cabinet_cont_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_cont_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_cont_5, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_cont_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_smart_cabinet_cont_5, lv_color_hex(0x2A405C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_smart_cabinet_cont_5, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_cont_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_cont_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_cont_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_cont_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_cont_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_img_77
    ui->screen_smart_cabinet_img_77 = lv_image_create(ui->screen_smart_cabinet_cont_5);
    lv_obj_set_pos(ui->screen_smart_cabinet_img_77, 27, 30);
    lv_obj_set_size(ui->screen_smart_cabinet_img_77, 52, 52);
    lv_obj_add_flag(ui->screen_smart_cabinet_img_77, LV_OBJ_FLAG_CLICKABLE);
#if LV_USE_GUIDER_SIMULATOR
    lv_image_set_src(ui->screen_smart_cabinet_img_77, "D:\\A\\xw_smart_screen\\import\\image\\icon_wendu.png");
#else
    lv_image_set_src(ui->screen_smart_cabinet_img_77, "F:/icon_wendu.bin");
#endif
    lv_image_set_pivot(ui->screen_smart_cabinet_img_77, 50,50);
    lv_image_set_rotation(ui->screen_smart_cabinet_img_77, 0);

    //Write style for screen_smart_cabinet_img_77, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_smart_cabinet_img_77, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_smart_cabinet_img_77, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_137
    ui->screen_smart_cabinet_label_137 = lv_label_create(ui->screen_smart_cabinet_cont_5);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_137, 80, 43);
    lv_obj_set_size(ui->screen_smart_cabinet_label_137, 130, 33);
    lv_label_set_text(ui->screen_smart_cabinet_label_137, "温度");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_137, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_137, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_137, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_137, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_137, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_137, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_137, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_137, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_137, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_137, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_137, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_137, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_137, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_137, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_137, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_137, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_136
    ui->screen_smart_cabinet_label_136 = lv_label_create(ui->screen_smart_cabinet_cont_5);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_136, 84, 143);
    lv_obj_set_size(ui->screen_smart_cabinet_label_136, 120, 83);
    lv_label_set_text(ui->screen_smart_cabinet_label_136, "33.4");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_136, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_136, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_136, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_136, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_136, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_136, &lv_font_DINCondBlack_70, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_136, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_136, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_136, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_136, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_136, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_136, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_136, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_136, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_136, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_136, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_135
    ui->screen_smart_cabinet_label_135 = lv_label_create(ui->screen_smart_cabinet_cont_5);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_135, 202, 281);
    lv_obj_set_size(ui->screen_smart_cabinet_label_135, 61, 30);
    lv_label_set_text(ui->screen_smart_cabinet_label_135, "℃");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_135, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_135, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_135, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_135, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_135, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_135, &lv_font_AlibabaPuHuiTiRegular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_135, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_135, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_135, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_135, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_135, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_135, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_135, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_135, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_135, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_135, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_img_76
    ui->screen_smart_cabinet_img_76 = lv_image_create(ui->screen_smart_cabinet_cont_5);
    lv_obj_set_pos(ui->screen_smart_cabinet_img_76, 201, 80);
    lv_obj_set_size(ui->screen_smart_cabinet_img_76, 50, 50);
    lv_obj_add_flag(ui->screen_smart_cabinet_img_76, LV_OBJ_FLAG_CLICKABLE);
#if LV_USE_GUIDER_SIMULATOR
    lv_image_set_src(ui->screen_smart_cabinet_img_76, "D:\\A\\xw_smart_screen\\import\\image\\img_label.png");
#else
    lv_image_set_src(ui->screen_smart_cabinet_img_76, "F:/img_label.bin");
#endif
    lv_image_set_pivot(ui->screen_smart_cabinet_img_76, 50,50);
    lv_image_set_rotation(ui->screen_smart_cabinet_img_76, 0);

    //Write style for screen_smart_cabinet_img_76, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_smart_cabinet_img_76, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_smart_cabinet_img_76, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_134
    ui->screen_smart_cabinet_label_134 = lv_label_create(ui->screen_smart_cabinet_cont_5);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_134, 211, 91);
    lv_obj_set_size(ui->screen_smart_cabinet_label_134, 32, 26);
    lv_label_set_text(ui->screen_smart_cabinet_label_134, "1-2");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_134, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_134, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_134, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_134, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_134, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_134, &lv_font_AlibabaPuHuiTiRegular_19, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_134, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_134, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_134, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_134, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_134, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_134, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_134, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_134, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_134, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_134, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_cont_6
    ui->screen_smart_cabinet_cont_6 = lv_obj_create(ui->screen_smart_cabinet_cont_5);
    lv_obj_set_pos(ui->screen_smart_cabinet_cont_6, 97, 291);
    lv_obj_set_size(ui->screen_smart_cabinet_cont_6, 90, 18);
    lv_obj_set_scrollbar_mode(ui->screen_smart_cabinet_cont_6, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_smart_cabinet_cont_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_cont_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_cont_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_cont_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_cont_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_cont_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_cont_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_cont_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_cont_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_line_9
    ui->screen_smart_cabinet_line_9 = lv_line_create(ui->screen_smart_cabinet_cont_6);
    lv_obj_set_pos(ui->screen_smart_cabinet_line_9, 5, 6);
    lv_obj_set_size(ui->screen_smart_cabinet_line_9, 8, 8);
    static lv_point_precise_t screen_smart_cabinet_line_9[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_smart_cabinet_line_9, screen_smart_cabinet_line_9, 2);

    //Write style for screen_smart_cabinet_line_9, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_smart_cabinet_line_9, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_smart_cabinet_line_9, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_smart_cabinet_line_9, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_smart_cabinet_line_9, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_line_8
    ui->screen_smart_cabinet_line_8 = lv_line_create(ui->screen_smart_cabinet_cont_6);
    lv_obj_set_pos(ui->screen_smart_cabinet_line_8, 30, 6);
    lv_obj_set_size(ui->screen_smart_cabinet_line_8, 8, 8);
    static lv_point_precise_t screen_smart_cabinet_line_8[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_smart_cabinet_line_8, screen_smart_cabinet_line_8, 2);

    //Write style for screen_smart_cabinet_line_8, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_smart_cabinet_line_8, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_smart_cabinet_line_8, lv_color_hex(0x44D7B6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_smart_cabinet_line_8, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_smart_cabinet_line_8, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_line_7
    ui->screen_smart_cabinet_line_7 = lv_line_create(ui->screen_smart_cabinet_cont_6);
    lv_obj_set_pos(ui->screen_smart_cabinet_line_7, 55, 6);
    lv_obj_set_size(ui->screen_smart_cabinet_line_7, 8, 8);
    static lv_point_precise_t screen_smart_cabinet_line_7[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_smart_cabinet_line_7, screen_smart_cabinet_line_7, 2);

    //Write style for screen_smart_cabinet_line_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_smart_cabinet_line_7, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_smart_cabinet_line_7, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_smart_cabinet_line_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_smart_cabinet_line_7, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_line_6
    ui->screen_smart_cabinet_line_6 = lv_line_create(ui->screen_smart_cabinet_cont_6);
    lv_obj_set_pos(ui->screen_smart_cabinet_line_6, 80, 6);
    lv_obj_set_size(ui->screen_smart_cabinet_line_6, 8, 8);
    static lv_point_precise_t screen_smart_cabinet_line_6[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_smart_cabinet_line_6, screen_smart_cabinet_line_6, 2);

    //Write style for screen_smart_cabinet_line_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_smart_cabinet_line_6, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_smart_cabinet_line_6, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_smart_cabinet_line_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_smart_cabinet_line_6, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_cont_7
    ui->screen_smart_cabinet_cont_7 = lv_obj_create(ui->screen_smart_cabinet_cont_2);
    lv_obj_set_pos(ui->screen_smart_cabinet_cont_7, 0, 0);
    lv_obj_set_size(ui->screen_smart_cabinet_cont_7, 286, 329);
    lv_obj_set_scrollbar_mode(ui->screen_smart_cabinet_cont_7, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_smart_cabinet_cont_7, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_smart_cabinet_cont_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_cont_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_cont_7, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_cont_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_smart_cabinet_cont_7, lv_color_hex(0x2A405C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_smart_cabinet_cont_7, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_cont_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_cont_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_cont_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_cont_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_cont_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_img_79
    ui->screen_smart_cabinet_img_79 = lv_image_create(ui->screen_smart_cabinet_cont_7);
    lv_obj_set_pos(ui->screen_smart_cabinet_img_79, 27, 30);
    lv_obj_set_size(ui->screen_smart_cabinet_img_79, 52, 52);
    lv_obj_add_flag(ui->screen_smart_cabinet_img_79, LV_OBJ_FLAG_CLICKABLE);
#if LV_USE_GUIDER_SIMULATOR
    lv_image_set_src(ui->screen_smart_cabinet_img_79, "D:\\A\\xw_smart_screen\\import\\image\\icon_wendu.png");
#else
    lv_image_set_src(ui->screen_smart_cabinet_img_79, "F:/icon_wendu.bin");
#endif
    lv_image_set_pivot(ui->screen_smart_cabinet_img_79, 50,50);
    lv_image_set_rotation(ui->screen_smart_cabinet_img_79, 0);

    //Write style for screen_smart_cabinet_img_79, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_smart_cabinet_img_79, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_smart_cabinet_img_79, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_141
    ui->screen_smart_cabinet_label_141 = lv_label_create(ui->screen_smart_cabinet_cont_7);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_141, 80, 43);
    lv_obj_set_size(ui->screen_smart_cabinet_label_141, 130, 33);
    lv_label_set_text(ui->screen_smart_cabinet_label_141, "温度");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_141, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_141, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_141, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_141, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_141, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_141, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_141, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_141, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_141, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_141, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_141, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_141, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_141, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_141, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_141, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_141, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_140
    ui->screen_smart_cabinet_label_140 = lv_label_create(ui->screen_smart_cabinet_cont_7);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_140, 84, 143);
    lv_obj_set_size(ui->screen_smart_cabinet_label_140, 120, 83);
    lv_label_set_text(ui->screen_smart_cabinet_label_140, "33.4");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_140, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_140, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_140, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_140, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_140, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_140, &lv_font_DINCondBlack_70, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_140, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_140, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_140, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_140, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_140, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_140, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_140, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_140, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_140, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_140, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_139
    ui->screen_smart_cabinet_label_139 = lv_label_create(ui->screen_smart_cabinet_cont_7);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_139, 202, 281);
    lv_obj_set_size(ui->screen_smart_cabinet_label_139, 61, 30);
    lv_label_set_text(ui->screen_smart_cabinet_label_139, "℃");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_139, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_139, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_139, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_139, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_139, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_139, &lv_font_AlibabaPuHuiTiRegular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_139, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_139, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_139, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_139, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_139, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_139, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_139, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_139, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_139, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_139, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_img_78
    ui->screen_smart_cabinet_img_78 = lv_image_create(ui->screen_smart_cabinet_cont_7);
    lv_obj_set_pos(ui->screen_smart_cabinet_img_78, 201, 80);
    lv_obj_set_size(ui->screen_smart_cabinet_img_78, 50, 50);
    lv_obj_add_flag(ui->screen_smart_cabinet_img_78, LV_OBJ_FLAG_CLICKABLE);
#if LV_USE_GUIDER_SIMULATOR
    lv_image_set_src(ui->screen_smart_cabinet_img_78, "D:\\A\\xw_smart_screen\\import\\image\\img_label.png");
#else
    lv_image_set_src(ui->screen_smart_cabinet_img_78, "F:/img_label.bin");
#endif
    lv_image_set_pivot(ui->screen_smart_cabinet_img_78, 50,50);
    lv_image_set_rotation(ui->screen_smart_cabinet_img_78, 0);

    //Write style for screen_smart_cabinet_img_78, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_smart_cabinet_img_78, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_smart_cabinet_img_78, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_138
    ui->screen_smart_cabinet_label_138 = lv_label_create(ui->screen_smart_cabinet_cont_7);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_138, 211, 91);
    lv_obj_set_size(ui->screen_smart_cabinet_label_138, 32, 26);
    lv_label_set_text(ui->screen_smart_cabinet_label_138, "1-3");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_138, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_138, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_138, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_138, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_138, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_138, &lv_font_AlibabaPuHuiTiRegular_19, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_138, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_138, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_138, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_138, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_138, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_138, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_138, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_138, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_138, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_138, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_cont_8
    ui->screen_smart_cabinet_cont_8 = lv_obj_create(ui->screen_smart_cabinet_cont_7);
    lv_obj_set_pos(ui->screen_smart_cabinet_cont_8, 97, 291);
    lv_obj_set_size(ui->screen_smart_cabinet_cont_8, 90, 18);
    lv_obj_set_scrollbar_mode(ui->screen_smart_cabinet_cont_8, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_smart_cabinet_cont_8, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_cont_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_cont_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_cont_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_cont_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_cont_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_cont_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_cont_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_cont_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_line_13
    ui->screen_smart_cabinet_line_13 = lv_line_create(ui->screen_smart_cabinet_cont_8);
    lv_obj_set_pos(ui->screen_smart_cabinet_line_13, 5, 6);
    lv_obj_set_size(ui->screen_smart_cabinet_line_13, 8, 8);
    static lv_point_precise_t screen_smart_cabinet_line_13[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_smart_cabinet_line_13, screen_smart_cabinet_line_13, 2);

    //Write style for screen_smart_cabinet_line_13, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_smart_cabinet_line_13, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_smart_cabinet_line_13, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_smart_cabinet_line_13, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_smart_cabinet_line_13, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_line_12
    ui->screen_smart_cabinet_line_12 = lv_line_create(ui->screen_smart_cabinet_cont_8);
    lv_obj_set_pos(ui->screen_smart_cabinet_line_12, 30, 6);
    lv_obj_set_size(ui->screen_smart_cabinet_line_12, 8, 8);
    static lv_point_precise_t screen_smart_cabinet_line_12[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_smart_cabinet_line_12, screen_smart_cabinet_line_12, 2);

    //Write style for screen_smart_cabinet_line_12, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_smart_cabinet_line_12, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_smart_cabinet_line_12, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_smart_cabinet_line_12, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_smart_cabinet_line_12, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_line_11
    ui->screen_smart_cabinet_line_11 = lv_line_create(ui->screen_smart_cabinet_cont_8);
    lv_obj_set_pos(ui->screen_smart_cabinet_line_11, 55, 6);
    lv_obj_set_size(ui->screen_smart_cabinet_line_11, 8, 8);
    static lv_point_precise_t screen_smart_cabinet_line_11[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_smart_cabinet_line_11, screen_smart_cabinet_line_11, 2);

    //Write style for screen_smart_cabinet_line_11, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_smart_cabinet_line_11, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_smart_cabinet_line_11, lv_color_hex(0x44D7B6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_smart_cabinet_line_11, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_smart_cabinet_line_11, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_line_10
    ui->screen_smart_cabinet_line_10 = lv_line_create(ui->screen_smart_cabinet_cont_8);
    lv_obj_set_pos(ui->screen_smart_cabinet_line_10, 80, 6);
    lv_obj_set_size(ui->screen_smart_cabinet_line_10, 8, 8);
    static lv_point_precise_t screen_smart_cabinet_line_10[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_smart_cabinet_line_10, screen_smart_cabinet_line_10, 2);

    //Write style for screen_smart_cabinet_line_10, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_smart_cabinet_line_10, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_smart_cabinet_line_10, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_smart_cabinet_line_10, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_smart_cabinet_line_10, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_cont_9
    ui->screen_smart_cabinet_cont_9 = lv_obj_create(ui->screen_smart_cabinet_cont_2);
    lv_obj_set_pos(ui->screen_smart_cabinet_cont_9, 0, 0);
    lv_obj_set_size(ui->screen_smart_cabinet_cont_9, 286, 329);
    lv_obj_set_scrollbar_mode(ui->screen_smart_cabinet_cont_9, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_smart_cabinet_cont_9, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_cont_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_cont_9, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_cont_9, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_smart_cabinet_cont_9, lv_color_hex(0x2A405C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_smart_cabinet_cont_9, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_cont_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_cont_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_cont_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_cont_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_cont_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_img_81
    ui->screen_smart_cabinet_img_81 = lv_image_create(ui->screen_smart_cabinet_cont_9);
    lv_obj_set_pos(ui->screen_smart_cabinet_img_81, 27, 30);
    lv_obj_set_size(ui->screen_smart_cabinet_img_81, 52, 52);
    lv_obj_add_flag(ui->screen_smart_cabinet_img_81, LV_OBJ_FLAG_CLICKABLE);
#if LV_USE_GUIDER_SIMULATOR
    lv_image_set_src(ui->screen_smart_cabinet_img_81, "D:\\A\\xw_smart_screen\\import\\image\\icon_wendu.png");
#else
    lv_image_set_src(ui->screen_smart_cabinet_img_81, "F:/icon_wendu.bin");
#endif
    lv_image_set_pivot(ui->screen_smart_cabinet_img_81, 50,50);
    lv_image_set_rotation(ui->screen_smart_cabinet_img_81, 0);

    //Write style for screen_smart_cabinet_img_81, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_smart_cabinet_img_81, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_smart_cabinet_img_81, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_145
    ui->screen_smart_cabinet_label_145 = lv_label_create(ui->screen_smart_cabinet_cont_9);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_145, 80, 43);
    lv_obj_set_size(ui->screen_smart_cabinet_label_145, 130, 33);
    lv_label_set_text(ui->screen_smart_cabinet_label_145, "温度");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_145, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_145, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_145, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_145, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_145, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_145, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_145, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_145, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_145, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_145, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_145, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_145, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_145, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_145, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_145, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_145, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_144
    ui->screen_smart_cabinet_label_144 = lv_label_create(ui->screen_smart_cabinet_cont_9);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_144, 84, 143);
    lv_obj_set_size(ui->screen_smart_cabinet_label_144, 120, 83);
    lv_label_set_text(ui->screen_smart_cabinet_label_144, "33.4");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_144, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_144, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_144, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_144, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_144, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_144, &lv_font_DINCondBlack_70, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_144, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_144, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_144, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_144, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_144, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_144, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_144, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_144, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_144, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_144, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_143
    ui->screen_smart_cabinet_label_143 = lv_label_create(ui->screen_smart_cabinet_cont_9);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_143, 202, 281);
    lv_obj_set_size(ui->screen_smart_cabinet_label_143, 61, 30);
    lv_label_set_text(ui->screen_smart_cabinet_label_143, "℃");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_143, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_143, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_143, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_143, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_143, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_143, &lv_font_AlibabaPuHuiTiRegular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_143, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_143, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_143, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_143, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_143, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_143, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_143, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_143, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_143, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_143, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_img_80
    ui->screen_smart_cabinet_img_80 = lv_image_create(ui->screen_smart_cabinet_cont_9);
    lv_obj_set_pos(ui->screen_smart_cabinet_img_80, 201, 80);
    lv_obj_set_size(ui->screen_smart_cabinet_img_80, 50, 50);
    lv_obj_add_flag(ui->screen_smart_cabinet_img_80, LV_OBJ_FLAG_CLICKABLE);
#if LV_USE_GUIDER_SIMULATOR
    lv_image_set_src(ui->screen_smart_cabinet_img_80, "D:\\A\\xw_smart_screen\\import\\image\\img_label.png");
#else
    lv_image_set_src(ui->screen_smart_cabinet_img_80, "F:/img_label.bin");
#endif
    lv_image_set_pivot(ui->screen_smart_cabinet_img_80, 50,50);
    lv_image_set_rotation(ui->screen_smart_cabinet_img_80, 0);

    //Write style for screen_smart_cabinet_img_80, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_smart_cabinet_img_80, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_smart_cabinet_img_80, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_142
    ui->screen_smart_cabinet_label_142 = lv_label_create(ui->screen_smart_cabinet_cont_9);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_142, 211, 91);
    lv_obj_set_size(ui->screen_smart_cabinet_label_142, 32, 26);
    lv_label_set_text(ui->screen_smart_cabinet_label_142, "1-4");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_142, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_142, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_142, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_142, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_142, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_142, &lv_font_AlibabaPuHuiTiRegular_19, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_142, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_142, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_142, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_142, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_142, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_142, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_142, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_142, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_142, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_142, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_cont_10
    ui->screen_smart_cabinet_cont_10 = lv_obj_create(ui->screen_smart_cabinet_cont_9);
    lv_obj_set_pos(ui->screen_smart_cabinet_cont_10, 97, 291);
    lv_obj_set_size(ui->screen_smart_cabinet_cont_10, 90, 18);
    lv_obj_set_scrollbar_mode(ui->screen_smart_cabinet_cont_10, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_smart_cabinet_cont_10, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_cont_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_cont_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_cont_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_cont_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_cont_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_cont_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_cont_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_cont_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_line_17
    ui->screen_smart_cabinet_line_17 = lv_line_create(ui->screen_smart_cabinet_cont_10);
    lv_obj_set_pos(ui->screen_smart_cabinet_line_17, 5, 6);
    lv_obj_set_size(ui->screen_smart_cabinet_line_17, 8, 8);
    static lv_point_precise_t screen_smart_cabinet_line_17[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_smart_cabinet_line_17, screen_smart_cabinet_line_17, 2);

    //Write style for screen_smart_cabinet_line_17, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_smart_cabinet_line_17, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_smart_cabinet_line_17, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_smart_cabinet_line_17, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_smart_cabinet_line_17, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_line_16
    ui->screen_smart_cabinet_line_16 = lv_line_create(ui->screen_smart_cabinet_cont_10);
    lv_obj_set_pos(ui->screen_smart_cabinet_line_16, 30, 6);
    lv_obj_set_size(ui->screen_smart_cabinet_line_16, 8, 8);
    static lv_point_precise_t screen_smart_cabinet_line_16[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_smart_cabinet_line_16, screen_smart_cabinet_line_16, 2);

    //Write style for screen_smart_cabinet_line_16, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_smart_cabinet_line_16, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_smart_cabinet_line_16, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_smart_cabinet_line_16, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_smart_cabinet_line_16, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_line_15
    ui->screen_smart_cabinet_line_15 = lv_line_create(ui->screen_smart_cabinet_cont_10);
    lv_obj_set_pos(ui->screen_smart_cabinet_line_15, 55, 6);
    lv_obj_set_size(ui->screen_smart_cabinet_line_15, 8, 8);
    static lv_point_precise_t screen_smart_cabinet_line_15[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_smart_cabinet_line_15, screen_smart_cabinet_line_15, 2);

    //Write style for screen_smart_cabinet_line_15, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_smart_cabinet_line_15, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_smart_cabinet_line_15, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_smart_cabinet_line_15, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_smart_cabinet_line_15, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_line_14
    ui->screen_smart_cabinet_line_14 = lv_line_create(ui->screen_smart_cabinet_cont_10);
    lv_obj_set_pos(ui->screen_smart_cabinet_line_14, 80, 6);
    lv_obj_set_size(ui->screen_smart_cabinet_line_14, 8, 8);
    static lv_point_precise_t screen_smart_cabinet_line_14[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_smart_cabinet_line_14, screen_smart_cabinet_line_14, 2);

    //Write style for screen_smart_cabinet_line_14, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_smart_cabinet_line_14, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_smart_cabinet_line_14, lv_color_hex(0x44D7B6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_smart_cabinet_line_14, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_smart_cabinet_line_14, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_cont_20
    ui->screen_smart_cabinet_cont_20 = lv_obj_create(ui->screen_smart_cabinet_cont_screen_smart_cab);
    lv_obj_set_pos(ui->screen_smart_cabinet_cont_20, 18, 447);
    lv_obj_set_size(ui->screen_smart_cabinet_cont_20, 286, 329);
    lv_obj_set_scrollbar_mode(ui->screen_smart_cabinet_cont_20, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_smart_cabinet_cont_20, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_cont_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_cont_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_cont_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_cont_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_cont_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_cont_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_cont_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_cont_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_cont_21
    ui->screen_smart_cabinet_cont_21 = lv_obj_create(ui->screen_smart_cabinet_cont_20);
    lv_obj_set_pos(ui->screen_smart_cabinet_cont_21, 0, 0);
    lv_obj_set_size(ui->screen_smart_cabinet_cont_21, 286, 329);
    lv_obj_set_scrollbar_mode(ui->screen_smart_cabinet_cont_21, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_smart_cabinet_cont_21, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_cont_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_cont_21, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_cont_21, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_smart_cabinet_cont_21, lv_color_hex(0x2A405C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_smart_cabinet_cont_21, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_cont_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_cont_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_cont_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_cont_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_cont_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_img_91
    ui->screen_smart_cabinet_img_91 = lv_image_create(ui->screen_smart_cabinet_cont_21);
    lv_obj_set_pos(ui->screen_smart_cabinet_img_91, 27, 30);
    lv_obj_set_size(ui->screen_smart_cabinet_img_91, 52, 52);
    lv_obj_add_flag(ui->screen_smart_cabinet_img_91, LV_OBJ_FLAG_CLICKABLE);
#if LV_USE_GUIDER_SIMULATOR
    lv_image_set_src(ui->screen_smart_cabinet_img_91, "D:\\A\\xw_smart_screen\\import\\image\\icon_voc.png");
#else
    lv_image_set_src(ui->screen_smart_cabinet_img_91, "F:/icon_voc.bin");
#endif
    lv_image_set_pivot(ui->screen_smart_cabinet_img_91, 50,50);
    lv_image_set_rotation(ui->screen_smart_cabinet_img_91, 0);

    //Write style for screen_smart_cabinet_img_91, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_smart_cabinet_img_91, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_smart_cabinet_img_91, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_165
    ui->screen_smart_cabinet_label_165 = lv_label_create(ui->screen_smart_cabinet_cont_21);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_165, 78, 43);
    lv_obj_set_size(ui->screen_smart_cabinet_label_165, 130, 33);
    lv_label_set_text(ui->screen_smart_cabinet_label_165, "VOC");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_165, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_165, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_165, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_165, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_165, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_165, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_165, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_165, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_165, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_165, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_165, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_165, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_165, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_165, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_165, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_165, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_164
    ui->screen_smart_cabinet_label_164 = lv_label_create(ui->screen_smart_cabinet_cont_21);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_164, 84, 145);
    lv_obj_set_size(ui->screen_smart_cabinet_label_164, 120, 83);
    lv_label_set_text(ui->screen_smart_cabinet_label_164, "33.4");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_164, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_164, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_164, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_164, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_164, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_164, &lv_font_DINCondBlack_70, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_164, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_164, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_164, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_164, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_164, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_164, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_164, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_164, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_164, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_164, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_163
    ui->screen_smart_cabinet_label_163 = lv_label_create(ui->screen_smart_cabinet_cont_21);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_163, 202, 281);
    lv_obj_set_size(ui->screen_smart_cabinet_label_163, 61, 30);
    lv_label_set_text(ui->screen_smart_cabinet_label_163, "PPM");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_163, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_163, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_163, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_163, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_163, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_163, &lv_font_AlibabaPuHuiTiRegular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_163, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_163, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_163, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_163, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_163, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_163, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_163, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_163, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_163, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_163, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_img_90
    ui->screen_smart_cabinet_img_90 = lv_image_create(ui->screen_smart_cabinet_cont_21);
    lv_obj_set_pos(ui->screen_smart_cabinet_img_90, 201, 80);
    lv_obj_set_size(ui->screen_smart_cabinet_img_90, 50, 50);
    lv_obj_add_flag(ui->screen_smart_cabinet_img_90, LV_OBJ_FLAG_CLICKABLE);
#if LV_USE_GUIDER_SIMULATOR
    lv_image_set_src(ui->screen_smart_cabinet_img_90, "D:\\A\\xw_smart_screen\\import\\image\\img_label.png");
#else
    lv_image_set_src(ui->screen_smart_cabinet_img_90, "F:/img_label.bin");
#endif
    lv_image_set_pivot(ui->screen_smart_cabinet_img_90, 50,50);
    lv_image_set_rotation(ui->screen_smart_cabinet_img_90, 0);

    //Write style for screen_smart_cabinet_img_90, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_smart_cabinet_img_90, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_smart_cabinet_img_90, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_162
    ui->screen_smart_cabinet_label_162 = lv_label_create(ui->screen_smart_cabinet_cont_21);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_162, 211, 91);
    lv_obj_set_size(ui->screen_smart_cabinet_label_162, 32, 26);
    lv_label_set_text(ui->screen_smart_cabinet_label_162, "1-1");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_162, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_162, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_162, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_162, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_162, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_162, &lv_font_AlibabaPuHuiTiRegular_19, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_162, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_162, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_162, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_162, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_162, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_162, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_162, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_162, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_162, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_162, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_cont_22
    ui->screen_smart_cabinet_cont_22 = lv_obj_create(ui->screen_smart_cabinet_cont_21);
    lv_obj_set_pos(ui->screen_smart_cabinet_cont_22, 97, 291);
    lv_obj_set_size(ui->screen_smart_cabinet_cont_22, 90, 18);
    lv_obj_set_scrollbar_mode(ui->screen_smart_cabinet_cont_22, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_smart_cabinet_cont_22, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_cont_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_cont_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_cont_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_cont_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_cont_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_cont_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_cont_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_cont_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_line_37
    ui->screen_smart_cabinet_line_37 = lv_line_create(ui->screen_smart_cabinet_cont_22);
    lv_obj_set_pos(ui->screen_smart_cabinet_line_37, 5, 6);
    lv_obj_set_size(ui->screen_smart_cabinet_line_37, 8, 8);
    static lv_point_precise_t screen_smart_cabinet_line_37[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_smart_cabinet_line_37, screen_smart_cabinet_line_37, 2);

    //Write style for screen_smart_cabinet_line_37, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_smart_cabinet_line_37, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_smart_cabinet_line_37, lv_color_hex(0x44D7B6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_smart_cabinet_line_37, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_smart_cabinet_line_37, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_line_36
    ui->screen_smart_cabinet_line_36 = lv_line_create(ui->screen_smart_cabinet_cont_22);
    lv_obj_set_pos(ui->screen_smart_cabinet_line_36, 30, 6);
    lv_obj_set_size(ui->screen_smart_cabinet_line_36, 8, 8);
    static lv_point_precise_t screen_smart_cabinet_line_36[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_smart_cabinet_line_36, screen_smart_cabinet_line_36, 2);

    //Write style for screen_smart_cabinet_line_36, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_smart_cabinet_line_36, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_smart_cabinet_line_36, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_smart_cabinet_line_36, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_smart_cabinet_line_36, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_line_35
    ui->screen_smart_cabinet_line_35 = lv_line_create(ui->screen_smart_cabinet_cont_22);
    lv_obj_set_pos(ui->screen_smart_cabinet_line_35, 55, 6);
    lv_obj_set_size(ui->screen_smart_cabinet_line_35, 8, 8);
    static lv_point_precise_t screen_smart_cabinet_line_35[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_smart_cabinet_line_35, screen_smart_cabinet_line_35, 2);

    //Write style for screen_smart_cabinet_line_35, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_smart_cabinet_line_35, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_smart_cabinet_line_35, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_smart_cabinet_line_35, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_smart_cabinet_line_35, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_line_34
    ui->screen_smart_cabinet_line_34 = lv_line_create(ui->screen_smart_cabinet_cont_22);
    lv_obj_set_pos(ui->screen_smart_cabinet_line_34, 80, 6);
    lv_obj_set_size(ui->screen_smart_cabinet_line_34, 8, 8);
    static lv_point_precise_t screen_smart_cabinet_line_34[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_smart_cabinet_line_34, screen_smart_cabinet_line_34, 2);

    //Write style for screen_smart_cabinet_line_34, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_smart_cabinet_line_34, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_smart_cabinet_line_34, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_smart_cabinet_line_34, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_smart_cabinet_line_34, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_cont_23
    ui->screen_smart_cabinet_cont_23 = lv_obj_create(ui->screen_smart_cabinet_cont_20);
    lv_obj_set_pos(ui->screen_smart_cabinet_cont_23, 0, 0);
    lv_obj_set_size(ui->screen_smart_cabinet_cont_23, 286, 329);
    lv_obj_set_scrollbar_mode(ui->screen_smart_cabinet_cont_23, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_smart_cabinet_cont_23, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_smart_cabinet_cont_23, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_cont_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_cont_23, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_cont_23, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_smart_cabinet_cont_23, lv_color_hex(0x2A405C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_smart_cabinet_cont_23, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_cont_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_cont_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_cont_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_cont_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_cont_23, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_img_93
    ui->screen_smart_cabinet_img_93 = lv_image_create(ui->screen_smart_cabinet_cont_23);
    lv_obj_set_pos(ui->screen_smart_cabinet_img_93, 27, 30);
    lv_obj_set_size(ui->screen_smart_cabinet_img_93, 52, 52);
    lv_obj_add_flag(ui->screen_smart_cabinet_img_93, LV_OBJ_FLAG_CLICKABLE);
#if LV_USE_GUIDER_SIMULATOR
    lv_image_set_src(ui->screen_smart_cabinet_img_93, "D:\\A\\xw_smart_screen\\import\\image\\icon_voc.png");
#else
    lv_image_set_src(ui->screen_smart_cabinet_img_93, "F:/icon_voc.bin");
#endif
    lv_image_set_pivot(ui->screen_smart_cabinet_img_93, 50,50);
    lv_image_set_rotation(ui->screen_smart_cabinet_img_93, 0);

    //Write style for screen_smart_cabinet_img_93, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_smart_cabinet_img_93, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_smart_cabinet_img_93, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_169
    ui->screen_smart_cabinet_label_169 = lv_label_create(ui->screen_smart_cabinet_cont_23);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_169, 78, 43);
    lv_obj_set_size(ui->screen_smart_cabinet_label_169, 130, 33);
    lv_label_set_text(ui->screen_smart_cabinet_label_169, "VOC");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_169, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_169, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_169, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_169, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_169, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_169, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_169, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_169, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_169, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_169, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_169, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_169, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_169, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_169, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_169, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_169, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_168
    ui->screen_smart_cabinet_label_168 = lv_label_create(ui->screen_smart_cabinet_cont_23);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_168, 84, 145);
    lv_obj_set_size(ui->screen_smart_cabinet_label_168, 120, 83);
    lv_label_set_text(ui->screen_smart_cabinet_label_168, "33.4");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_168, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_168, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_168, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_168, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_168, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_168, &lv_font_DINCondBlack_70, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_168, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_168, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_168, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_168, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_168, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_168, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_168, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_168, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_168, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_168, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_167
    ui->screen_smart_cabinet_label_167 = lv_label_create(ui->screen_smart_cabinet_cont_23);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_167, 202, 281);
    lv_obj_set_size(ui->screen_smart_cabinet_label_167, 61, 30);
    lv_label_set_text(ui->screen_smart_cabinet_label_167, "PPM");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_167, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_167, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_167, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_167, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_167, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_167, &lv_font_AlibabaPuHuiTiRegular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_167, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_167, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_167, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_167, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_167, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_167, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_167, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_167, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_167, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_167, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_img_92
    ui->screen_smart_cabinet_img_92 = lv_image_create(ui->screen_smart_cabinet_cont_23);
    lv_obj_set_pos(ui->screen_smart_cabinet_img_92, 201, 80);
    lv_obj_set_size(ui->screen_smart_cabinet_img_92, 50, 50);
    lv_obj_add_flag(ui->screen_smart_cabinet_img_92, LV_OBJ_FLAG_CLICKABLE);
#if LV_USE_GUIDER_SIMULATOR
    lv_image_set_src(ui->screen_smart_cabinet_img_92, "D:\\A\\xw_smart_screen\\import\\image\\img_label.png");
#else
    lv_image_set_src(ui->screen_smart_cabinet_img_92, "F:/img_label.bin");
#endif
    lv_image_set_pivot(ui->screen_smart_cabinet_img_92, 50,50);
    lv_image_set_rotation(ui->screen_smart_cabinet_img_92, 0);

    //Write style for screen_smart_cabinet_img_92, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_smart_cabinet_img_92, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_smart_cabinet_img_92, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_166
    ui->screen_smart_cabinet_label_166 = lv_label_create(ui->screen_smart_cabinet_cont_23);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_166, 211, 91);
    lv_obj_set_size(ui->screen_smart_cabinet_label_166, 32, 26);
    lv_label_set_text(ui->screen_smart_cabinet_label_166, "1-2");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_166, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_166, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_166, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_166, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_166, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_166, &lv_font_AlibabaPuHuiTiRegular_19, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_166, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_166, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_166, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_166, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_166, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_166, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_166, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_166, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_166, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_166, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_cont_24
    ui->screen_smart_cabinet_cont_24 = lv_obj_create(ui->screen_smart_cabinet_cont_23);
    lv_obj_set_pos(ui->screen_smart_cabinet_cont_24, 97, 291);
    lv_obj_set_size(ui->screen_smart_cabinet_cont_24, 90, 18);
    lv_obj_set_scrollbar_mode(ui->screen_smart_cabinet_cont_24, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_smart_cabinet_cont_24, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_cont_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_cont_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_cont_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_cont_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_cont_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_cont_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_cont_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_cont_24, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_line_41
    ui->screen_smart_cabinet_line_41 = lv_line_create(ui->screen_smart_cabinet_cont_24);
    lv_obj_set_pos(ui->screen_smart_cabinet_line_41, 5, 6);
    lv_obj_set_size(ui->screen_smart_cabinet_line_41, 8, 8);
    static lv_point_precise_t screen_smart_cabinet_line_41[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_smart_cabinet_line_41, screen_smart_cabinet_line_41, 2);

    //Write style for screen_smart_cabinet_line_41, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_smart_cabinet_line_41, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_smart_cabinet_line_41, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_smart_cabinet_line_41, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_smart_cabinet_line_41, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_line_40
    ui->screen_smart_cabinet_line_40 = lv_line_create(ui->screen_smart_cabinet_cont_24);
    lv_obj_set_pos(ui->screen_smart_cabinet_line_40, 30, 6);
    lv_obj_set_size(ui->screen_smart_cabinet_line_40, 8, 8);
    static lv_point_precise_t screen_smart_cabinet_line_40[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_smart_cabinet_line_40, screen_smart_cabinet_line_40, 2);

    //Write style for screen_smart_cabinet_line_40, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_smart_cabinet_line_40, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_smart_cabinet_line_40, lv_color_hex(0x44D7B6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_smart_cabinet_line_40, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_smart_cabinet_line_40, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_line_39
    ui->screen_smart_cabinet_line_39 = lv_line_create(ui->screen_smart_cabinet_cont_24);
    lv_obj_set_pos(ui->screen_smart_cabinet_line_39, 55, 6);
    lv_obj_set_size(ui->screen_smart_cabinet_line_39, 8, 8);
    static lv_point_precise_t screen_smart_cabinet_line_39[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_smart_cabinet_line_39, screen_smart_cabinet_line_39, 2);

    //Write style for screen_smart_cabinet_line_39, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_smart_cabinet_line_39, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_smart_cabinet_line_39, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_smart_cabinet_line_39, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_smart_cabinet_line_39, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_line_38
    ui->screen_smart_cabinet_line_38 = lv_line_create(ui->screen_smart_cabinet_cont_24);
    lv_obj_set_pos(ui->screen_smart_cabinet_line_38, 80, 6);
    lv_obj_set_size(ui->screen_smart_cabinet_line_38, 8, 8);
    static lv_point_precise_t screen_smart_cabinet_line_38[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_smart_cabinet_line_38, screen_smart_cabinet_line_38, 2);

    //Write style for screen_smart_cabinet_line_38, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_smart_cabinet_line_38, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_smart_cabinet_line_38, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_smart_cabinet_line_38, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_smart_cabinet_line_38, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_cont_25
    ui->screen_smart_cabinet_cont_25 = lv_obj_create(ui->screen_smart_cabinet_cont_20);
    lv_obj_set_pos(ui->screen_smart_cabinet_cont_25, 0, 0);
    lv_obj_set_size(ui->screen_smart_cabinet_cont_25, 286, 329);
    lv_obj_set_scrollbar_mode(ui->screen_smart_cabinet_cont_25, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_smart_cabinet_cont_25, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_smart_cabinet_cont_25, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_cont_25, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_cont_25, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_cont_25, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_smart_cabinet_cont_25, lv_color_hex(0x2A405C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_smart_cabinet_cont_25, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_cont_25, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_cont_25, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_cont_25, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_cont_25, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_cont_25, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_img_95
    ui->screen_smart_cabinet_img_95 = lv_image_create(ui->screen_smart_cabinet_cont_25);
    lv_obj_set_pos(ui->screen_smart_cabinet_img_95, 27, 30);
    lv_obj_set_size(ui->screen_smart_cabinet_img_95, 52, 52);
    lv_obj_add_flag(ui->screen_smart_cabinet_img_95, LV_OBJ_FLAG_CLICKABLE);
#if LV_USE_GUIDER_SIMULATOR
    lv_image_set_src(ui->screen_smart_cabinet_img_95, "D:\\A\\xw_smart_screen\\import\\image\\icon_voc.png");
#else
    lv_image_set_src(ui->screen_smart_cabinet_img_95, "F:/icon_voc.bin");
#endif
    lv_image_set_pivot(ui->screen_smart_cabinet_img_95, 50,50);
    lv_image_set_rotation(ui->screen_smart_cabinet_img_95, 0);

    //Write style for screen_smart_cabinet_img_95, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_smart_cabinet_img_95, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_smart_cabinet_img_95, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_173
    ui->screen_smart_cabinet_label_173 = lv_label_create(ui->screen_smart_cabinet_cont_25);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_173, 78, 43);
    lv_obj_set_size(ui->screen_smart_cabinet_label_173, 130, 33);
    lv_label_set_text(ui->screen_smart_cabinet_label_173, "VOC");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_173, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_173, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_173, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_173, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_173, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_173, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_173, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_173, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_173, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_173, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_173, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_173, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_173, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_173, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_173, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_173, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_172
    ui->screen_smart_cabinet_label_172 = lv_label_create(ui->screen_smart_cabinet_cont_25);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_172, 84, 145);
    lv_obj_set_size(ui->screen_smart_cabinet_label_172, 120, 83);
    lv_label_set_text(ui->screen_smart_cabinet_label_172, "33.4");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_172, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_172, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_172, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_172, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_172, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_172, &lv_font_DINCondBlack_70, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_172, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_172, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_172, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_172, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_172, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_172, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_172, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_172, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_172, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_172, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_171
    ui->screen_smart_cabinet_label_171 = lv_label_create(ui->screen_smart_cabinet_cont_25);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_171, 202, 281);
    lv_obj_set_size(ui->screen_smart_cabinet_label_171, 61, 30);
    lv_label_set_text(ui->screen_smart_cabinet_label_171, "PPM");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_171, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_171, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_171, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_171, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_171, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_171, &lv_font_AlibabaPuHuiTiRegular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_171, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_171, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_171, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_171, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_171, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_171, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_171, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_171, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_171, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_171, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_img_94
    ui->screen_smart_cabinet_img_94 = lv_image_create(ui->screen_smart_cabinet_cont_25);
    lv_obj_set_pos(ui->screen_smart_cabinet_img_94, 201, 80);
    lv_obj_set_size(ui->screen_smart_cabinet_img_94, 50, 50);
    lv_obj_add_flag(ui->screen_smart_cabinet_img_94, LV_OBJ_FLAG_CLICKABLE);
#if LV_USE_GUIDER_SIMULATOR
    lv_image_set_src(ui->screen_smart_cabinet_img_94, "D:\\A\\xw_smart_screen\\import\\image\\img_label.png");
#else
    lv_image_set_src(ui->screen_smart_cabinet_img_94, "F:/img_label.bin");
#endif
    lv_image_set_pivot(ui->screen_smart_cabinet_img_94, 50,50);
    lv_image_set_rotation(ui->screen_smart_cabinet_img_94, 0);

    //Write style for screen_smart_cabinet_img_94, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_smart_cabinet_img_94, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_smart_cabinet_img_94, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_170
    ui->screen_smart_cabinet_label_170 = lv_label_create(ui->screen_smart_cabinet_cont_25);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_170, 211, 91);
    lv_obj_set_size(ui->screen_smart_cabinet_label_170, 32, 26);
    lv_label_set_text(ui->screen_smart_cabinet_label_170, "1-3");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_170, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_170, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_170, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_170, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_170, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_170, &lv_font_AlibabaPuHuiTiRegular_19, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_170, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_170, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_170, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_170, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_170, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_170, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_170, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_170, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_170, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_170, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_cont_26
    ui->screen_smart_cabinet_cont_26 = lv_obj_create(ui->screen_smart_cabinet_cont_25);
    lv_obj_set_pos(ui->screen_smart_cabinet_cont_26, 97, 291);
    lv_obj_set_size(ui->screen_smart_cabinet_cont_26, 90, 18);
    lv_obj_set_scrollbar_mode(ui->screen_smart_cabinet_cont_26, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_smart_cabinet_cont_26, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_cont_26, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_cont_26, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_cont_26, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_cont_26, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_cont_26, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_cont_26, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_cont_26, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_cont_26, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_line_45
    ui->screen_smart_cabinet_line_45 = lv_line_create(ui->screen_smart_cabinet_cont_26);
    lv_obj_set_pos(ui->screen_smart_cabinet_line_45, 5, 6);
    lv_obj_set_size(ui->screen_smart_cabinet_line_45, 8, 8);
    static lv_point_precise_t screen_smart_cabinet_line_45[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_smart_cabinet_line_45, screen_smart_cabinet_line_45, 2);

    //Write style for screen_smart_cabinet_line_45, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_smart_cabinet_line_45, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_smart_cabinet_line_45, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_smart_cabinet_line_45, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_smart_cabinet_line_45, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_line_44
    ui->screen_smart_cabinet_line_44 = lv_line_create(ui->screen_smart_cabinet_cont_26);
    lv_obj_set_pos(ui->screen_smart_cabinet_line_44, 30, 6);
    lv_obj_set_size(ui->screen_smart_cabinet_line_44, 8, 8);
    static lv_point_precise_t screen_smart_cabinet_line_44[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_smart_cabinet_line_44, screen_smart_cabinet_line_44, 2);

    //Write style for screen_smart_cabinet_line_44, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_smart_cabinet_line_44, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_smart_cabinet_line_44, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_smart_cabinet_line_44, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_smart_cabinet_line_44, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_line_43
    ui->screen_smart_cabinet_line_43 = lv_line_create(ui->screen_smart_cabinet_cont_26);
    lv_obj_set_pos(ui->screen_smart_cabinet_line_43, 55, 6);
    lv_obj_set_size(ui->screen_smart_cabinet_line_43, 8, 8);
    static lv_point_precise_t screen_smart_cabinet_line_43[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_smart_cabinet_line_43, screen_smart_cabinet_line_43, 2);

    //Write style for screen_smart_cabinet_line_43, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_smart_cabinet_line_43, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_smart_cabinet_line_43, lv_color_hex(0x44D7B6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_smart_cabinet_line_43, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_smart_cabinet_line_43, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_line_42
    ui->screen_smart_cabinet_line_42 = lv_line_create(ui->screen_smart_cabinet_cont_26);
    lv_obj_set_pos(ui->screen_smart_cabinet_line_42, 80, 6);
    lv_obj_set_size(ui->screen_smart_cabinet_line_42, 8, 8);
    static lv_point_precise_t screen_smart_cabinet_line_42[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_smart_cabinet_line_42, screen_smart_cabinet_line_42, 2);

    //Write style for screen_smart_cabinet_line_42, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_smart_cabinet_line_42, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_smart_cabinet_line_42, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_smart_cabinet_line_42, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_smart_cabinet_line_42, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_cont_27
    ui->screen_smart_cabinet_cont_27 = lv_obj_create(ui->screen_smart_cabinet_cont_20);
    lv_obj_set_pos(ui->screen_smart_cabinet_cont_27, 0, 0);
    lv_obj_set_size(ui->screen_smart_cabinet_cont_27, 286, 329);
    lv_obj_set_scrollbar_mode(ui->screen_smart_cabinet_cont_27, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_smart_cabinet_cont_27, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_smart_cabinet_cont_27, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_cont_27, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_cont_27, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_cont_27, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_smart_cabinet_cont_27, lv_color_hex(0x2A405C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_smart_cabinet_cont_27, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_cont_27, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_cont_27, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_cont_27, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_cont_27, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_cont_27, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_img_97
    ui->screen_smart_cabinet_img_97 = lv_image_create(ui->screen_smart_cabinet_cont_27);
    lv_obj_set_pos(ui->screen_smart_cabinet_img_97, 27, 30);
    lv_obj_set_size(ui->screen_smart_cabinet_img_97, 52, 52);
    lv_obj_add_flag(ui->screen_smart_cabinet_img_97, LV_OBJ_FLAG_CLICKABLE);
#if LV_USE_GUIDER_SIMULATOR
    lv_image_set_src(ui->screen_smart_cabinet_img_97, "D:\\A\\xw_smart_screen\\import\\image\\icon_voc.png");
#else
    lv_image_set_src(ui->screen_smart_cabinet_img_97, "F:/icon_voc.bin");
#endif
    lv_image_set_pivot(ui->screen_smart_cabinet_img_97, 50,50);
    lv_image_set_rotation(ui->screen_smart_cabinet_img_97, 0);

    //Write style for screen_smart_cabinet_img_97, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_smart_cabinet_img_97, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_smart_cabinet_img_97, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_177
    ui->screen_smart_cabinet_label_177 = lv_label_create(ui->screen_smart_cabinet_cont_27);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_177, 78, 43);
    lv_obj_set_size(ui->screen_smart_cabinet_label_177, 130, 33);
    lv_label_set_text(ui->screen_smart_cabinet_label_177, "VOC");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_177, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_177, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_177, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_177, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_177, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_177, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_177, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_177, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_177, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_177, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_177, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_177, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_177, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_177, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_177, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_177, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_176
    ui->screen_smart_cabinet_label_176 = lv_label_create(ui->screen_smart_cabinet_cont_27);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_176, 84, 145);
    lv_obj_set_size(ui->screen_smart_cabinet_label_176, 120, 83);
    lv_label_set_text(ui->screen_smart_cabinet_label_176, "33.4");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_176, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_176, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_176, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_176, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_176, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_176, &lv_font_DINCondBlack_70, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_176, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_176, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_176, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_176, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_176, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_176, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_176, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_176, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_176, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_176, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_175
    ui->screen_smart_cabinet_label_175 = lv_label_create(ui->screen_smart_cabinet_cont_27);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_175, 202, 281);
    lv_obj_set_size(ui->screen_smart_cabinet_label_175, 61, 30);
    lv_label_set_text(ui->screen_smart_cabinet_label_175, "PPM");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_175, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_175, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_175, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_175, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_175, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_175, &lv_font_AlibabaPuHuiTiRegular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_175, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_175, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_175, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_175, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_175, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_175, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_175, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_175, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_175, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_175, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_img_96
    ui->screen_smart_cabinet_img_96 = lv_image_create(ui->screen_smart_cabinet_cont_27);
    lv_obj_set_pos(ui->screen_smart_cabinet_img_96, 201, 80);
    lv_obj_set_size(ui->screen_smart_cabinet_img_96, 50, 50);
    lv_obj_add_flag(ui->screen_smart_cabinet_img_96, LV_OBJ_FLAG_CLICKABLE);
#if LV_USE_GUIDER_SIMULATOR
    lv_image_set_src(ui->screen_smart_cabinet_img_96, "D:\\A\\xw_smart_screen\\import\\image\\img_label.png");
#else
    lv_image_set_src(ui->screen_smart_cabinet_img_96, "F:/img_label.bin");
#endif
    lv_image_set_pivot(ui->screen_smart_cabinet_img_96, 50,50);
    lv_image_set_rotation(ui->screen_smart_cabinet_img_96, 0);

    //Write style for screen_smart_cabinet_img_96, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_smart_cabinet_img_96, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_smart_cabinet_img_96, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_174
    ui->screen_smart_cabinet_label_174 = lv_label_create(ui->screen_smart_cabinet_cont_27);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_174, 211, 91);
    lv_obj_set_size(ui->screen_smart_cabinet_label_174, 32, 26);
    lv_label_set_text(ui->screen_smart_cabinet_label_174, "1-4");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_174, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_174, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_174, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_174, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_174, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_174, &lv_font_AlibabaPuHuiTiRegular_19, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_174, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_174, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_174, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_174, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_174, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_174, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_174, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_174, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_174, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_174, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_cont_28
    ui->screen_smart_cabinet_cont_28 = lv_obj_create(ui->screen_smart_cabinet_cont_27);
    lv_obj_set_pos(ui->screen_smart_cabinet_cont_28, 97, 291);
    lv_obj_set_size(ui->screen_smart_cabinet_cont_28, 90, 18);
    lv_obj_set_scrollbar_mode(ui->screen_smart_cabinet_cont_28, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_smart_cabinet_cont_28, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_cont_28, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_cont_28, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_cont_28, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_cont_28, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_cont_28, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_cont_28, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_cont_28, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_cont_28, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_line_49
    ui->screen_smart_cabinet_line_49 = lv_line_create(ui->screen_smart_cabinet_cont_28);
    lv_obj_set_pos(ui->screen_smart_cabinet_line_49, 5, 6);
    lv_obj_set_size(ui->screen_smart_cabinet_line_49, 8, 8);
    static lv_point_precise_t screen_smart_cabinet_line_49[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_smart_cabinet_line_49, screen_smart_cabinet_line_49, 2);

    //Write style for screen_smart_cabinet_line_49, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_smart_cabinet_line_49, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_smart_cabinet_line_49, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_smart_cabinet_line_49, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_smart_cabinet_line_49, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_line_48
    ui->screen_smart_cabinet_line_48 = lv_line_create(ui->screen_smart_cabinet_cont_28);
    lv_obj_set_pos(ui->screen_smart_cabinet_line_48, 30, 6);
    lv_obj_set_size(ui->screen_smart_cabinet_line_48, 8, 8);
    static lv_point_precise_t screen_smart_cabinet_line_48[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_smart_cabinet_line_48, screen_smart_cabinet_line_48, 2);

    //Write style for screen_smart_cabinet_line_48, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_smart_cabinet_line_48, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_smart_cabinet_line_48, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_smart_cabinet_line_48, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_smart_cabinet_line_48, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_line_47
    ui->screen_smart_cabinet_line_47 = lv_line_create(ui->screen_smart_cabinet_cont_28);
    lv_obj_set_pos(ui->screen_smart_cabinet_line_47, 55, 6);
    lv_obj_set_size(ui->screen_smart_cabinet_line_47, 8, 8);
    static lv_point_precise_t screen_smart_cabinet_line_47[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_smart_cabinet_line_47, screen_smart_cabinet_line_47, 2);

    //Write style for screen_smart_cabinet_line_47, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_smart_cabinet_line_47, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_smart_cabinet_line_47, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_smart_cabinet_line_47, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_smart_cabinet_line_47, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_line_46
    ui->screen_smart_cabinet_line_46 = lv_line_create(ui->screen_smart_cabinet_cont_28);
    lv_obj_set_pos(ui->screen_smart_cabinet_line_46, 80, 6);
    lv_obj_set_size(ui->screen_smart_cabinet_line_46, 8, 8);
    static lv_point_precise_t screen_smart_cabinet_line_46[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_smart_cabinet_line_46, screen_smart_cabinet_line_46, 2);

    //Write style for screen_smart_cabinet_line_46, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_smart_cabinet_line_46, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_smart_cabinet_line_46, lv_color_hex(0x44D7B6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_smart_cabinet_line_46, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_smart_cabinet_line_46, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_cont_29
    ui->screen_smart_cabinet_cont_29 = lv_obj_create(ui->screen_smart_cabinet_cont_screen_smart_cab);
    lv_obj_set_pos(ui->screen_smart_cabinet_cont_29, 335, 446);
    lv_obj_set_size(ui->screen_smart_cabinet_cont_29, 286, 329);
    lv_obj_set_scrollbar_mode(ui->screen_smart_cabinet_cont_29, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_smart_cabinet_cont_29, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_cont_29, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_cont_29, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_cont_29, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_cont_29, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_cont_29, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_cont_29, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_cont_29, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_cont_29, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_cont_30
    ui->screen_smart_cabinet_cont_30 = lv_obj_create(ui->screen_smart_cabinet_cont_29);
    lv_obj_set_pos(ui->screen_smart_cabinet_cont_30, 0, 0);
    lv_obj_set_size(ui->screen_smart_cabinet_cont_30, 286, 329);
    lv_obj_set_scrollbar_mode(ui->screen_smart_cabinet_cont_30, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_smart_cabinet_cont_30, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_cont_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_cont_30, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_cont_30, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_smart_cabinet_cont_30, lv_color_hex(0x2A405C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_smart_cabinet_cont_30, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_cont_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_cont_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_cont_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_cont_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_cont_30, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_img_99
    ui->screen_smart_cabinet_img_99 = lv_image_create(ui->screen_smart_cabinet_cont_30);
    lv_obj_set_pos(ui->screen_smart_cabinet_img_99, 27, 30);
    lv_obj_set_size(ui->screen_smart_cabinet_img_99, 52, 52);
    lv_obj_add_flag(ui->screen_smart_cabinet_img_99, LV_OBJ_FLAG_CLICKABLE);
#if LV_USE_GUIDER_SIMULATOR
    lv_image_set_src(ui->screen_smart_cabinet_img_99, "D:\\A\\xw_smart_screen\\import\\image\\icon_combustible_gas.png");
#else
    lv_image_set_src(ui->screen_smart_cabinet_img_99, "F:/icon_combustible_gas.bin");
#endif
    lv_image_set_pivot(ui->screen_smart_cabinet_img_99, 50,50);
    lv_image_set_rotation(ui->screen_smart_cabinet_img_99, 0);

    //Write style for screen_smart_cabinet_img_99, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_smart_cabinet_img_99, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_smart_cabinet_img_99, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_181
    ui->screen_smart_cabinet_label_181 = lv_label_create(ui->screen_smart_cabinet_cont_30);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_181, 80, 43);
    lv_obj_set_size(ui->screen_smart_cabinet_label_181, 130, 33);
    lv_label_set_text(ui->screen_smart_cabinet_label_181, "可燃气体");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_181, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_181, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_181, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_181, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_181, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_181, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_181, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_181, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_181, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_181, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_181, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_181, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_181, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_181, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_181, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_181, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_180
    ui->screen_smart_cabinet_label_180 = lv_label_create(ui->screen_smart_cabinet_cont_30);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_180, 84, 145);
    lv_obj_set_size(ui->screen_smart_cabinet_label_180, 120, 83);
    lv_label_set_text(ui->screen_smart_cabinet_label_180, "33.4");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_180, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_180, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_180, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_180, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_180, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_180, &lv_font_DINCondBlack_70, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_180, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_180, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_180, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_180, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_180, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_180, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_180, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_180, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_180, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_180, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_179
    ui->screen_smart_cabinet_label_179 = lv_label_create(ui->screen_smart_cabinet_cont_30);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_179, 202, 281);
    lv_obj_set_size(ui->screen_smart_cabinet_label_179, 61, 30);
    lv_label_set_text(ui->screen_smart_cabinet_label_179, "%LEL");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_179, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_179, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_179, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_179, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_179, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_179, &lv_font_AlibabaPuHuiTiRegular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_179, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_179, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_179, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_179, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_179, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_179, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_179, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_179, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_179, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_179, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_img_98
    ui->screen_smart_cabinet_img_98 = lv_image_create(ui->screen_smart_cabinet_cont_30);
    lv_obj_set_pos(ui->screen_smart_cabinet_img_98, 201, 80);
    lv_obj_set_size(ui->screen_smart_cabinet_img_98, 50, 50);
    lv_obj_add_flag(ui->screen_smart_cabinet_img_98, LV_OBJ_FLAG_CLICKABLE);
#if LV_USE_GUIDER_SIMULATOR
    lv_image_set_src(ui->screen_smart_cabinet_img_98, "D:\\A\\xw_smart_screen\\import\\image\\img_label.png");
#else
    lv_image_set_src(ui->screen_smart_cabinet_img_98, "F:/img_label.bin");
#endif
    lv_image_set_pivot(ui->screen_smart_cabinet_img_98, 50,50);
    lv_image_set_rotation(ui->screen_smart_cabinet_img_98, 0);

    //Write style for screen_smart_cabinet_img_98, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_smart_cabinet_img_98, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_smart_cabinet_img_98, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_178
    ui->screen_smart_cabinet_label_178 = lv_label_create(ui->screen_smart_cabinet_cont_30);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_178, 211, 91);
    lv_obj_set_size(ui->screen_smart_cabinet_label_178, 32, 26);
    lv_label_set_text(ui->screen_smart_cabinet_label_178, "1-1");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_178, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_178, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_178, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_178, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_178, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_178, &lv_font_AlibabaPuHuiTiRegular_19, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_178, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_178, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_178, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_178, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_178, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_178, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_178, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_178, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_178, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_178, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_cont_31
    ui->screen_smart_cabinet_cont_31 = lv_obj_create(ui->screen_smart_cabinet_cont_30);
    lv_obj_set_pos(ui->screen_smart_cabinet_cont_31, 97, 291);
    lv_obj_set_size(ui->screen_smart_cabinet_cont_31, 90, 18);
    lv_obj_set_scrollbar_mode(ui->screen_smart_cabinet_cont_31, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_smart_cabinet_cont_31, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_cont_31, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_cont_31, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_cont_31, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_cont_31, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_cont_31, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_cont_31, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_cont_31, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_cont_31, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_line_53
    ui->screen_smart_cabinet_line_53 = lv_line_create(ui->screen_smart_cabinet_cont_31);
    lv_obj_set_pos(ui->screen_smart_cabinet_line_53, 5, 6);
    lv_obj_set_size(ui->screen_smart_cabinet_line_53, 8, 8);
    static lv_point_precise_t screen_smart_cabinet_line_53[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_smart_cabinet_line_53, screen_smart_cabinet_line_53, 2);

    //Write style for screen_smart_cabinet_line_53, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_smart_cabinet_line_53, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_smart_cabinet_line_53, lv_color_hex(0x44D7B6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_smart_cabinet_line_53, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_smart_cabinet_line_53, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_line_52
    ui->screen_smart_cabinet_line_52 = lv_line_create(ui->screen_smart_cabinet_cont_31);
    lv_obj_set_pos(ui->screen_smart_cabinet_line_52, 30, 6);
    lv_obj_set_size(ui->screen_smart_cabinet_line_52, 8, 8);
    static lv_point_precise_t screen_smart_cabinet_line_52[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_smart_cabinet_line_52, screen_smart_cabinet_line_52, 2);

    //Write style for screen_smart_cabinet_line_52, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_smart_cabinet_line_52, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_smart_cabinet_line_52, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_smart_cabinet_line_52, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_smart_cabinet_line_52, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_line_51
    ui->screen_smart_cabinet_line_51 = lv_line_create(ui->screen_smart_cabinet_cont_31);
    lv_obj_set_pos(ui->screen_smart_cabinet_line_51, 55, 6);
    lv_obj_set_size(ui->screen_smart_cabinet_line_51, 8, 8);
    static lv_point_precise_t screen_smart_cabinet_line_51[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_smart_cabinet_line_51, screen_smart_cabinet_line_51, 2);

    //Write style for screen_smart_cabinet_line_51, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_smart_cabinet_line_51, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_smart_cabinet_line_51, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_smart_cabinet_line_51, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_smart_cabinet_line_51, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_line_50
    ui->screen_smart_cabinet_line_50 = lv_line_create(ui->screen_smart_cabinet_cont_31);
    lv_obj_set_pos(ui->screen_smart_cabinet_line_50, 80, 6);
    lv_obj_set_size(ui->screen_smart_cabinet_line_50, 8, 8);
    static lv_point_precise_t screen_smart_cabinet_line_50[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_smart_cabinet_line_50, screen_smart_cabinet_line_50, 2);

    //Write style for screen_smart_cabinet_line_50, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_smart_cabinet_line_50, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_smart_cabinet_line_50, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_smart_cabinet_line_50, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_smart_cabinet_line_50, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_cont_32
    ui->screen_smart_cabinet_cont_32 = lv_obj_create(ui->screen_smart_cabinet_cont_29);
    lv_obj_set_pos(ui->screen_smart_cabinet_cont_32, 0, 0);
    lv_obj_set_size(ui->screen_smart_cabinet_cont_32, 286, 329);
    lv_obj_set_scrollbar_mode(ui->screen_smart_cabinet_cont_32, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_smart_cabinet_cont_32, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_cont_32, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_cont_32, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_cont_32, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_smart_cabinet_cont_32, lv_color_hex(0x2A405C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_smart_cabinet_cont_32, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_cont_32, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_cont_32, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_cont_32, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_cont_32, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_cont_32, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_img_101
    ui->screen_smart_cabinet_img_101 = lv_image_create(ui->screen_smart_cabinet_cont_32);
    lv_obj_set_pos(ui->screen_smart_cabinet_img_101, 27, 30);
    lv_obj_set_size(ui->screen_smart_cabinet_img_101, 52, 52);
    lv_obj_add_flag(ui->screen_smart_cabinet_img_101, LV_OBJ_FLAG_CLICKABLE);
#if LV_USE_GUIDER_SIMULATOR
    lv_image_set_src(ui->screen_smart_cabinet_img_101, "D:\\A\\xw_smart_screen\\import\\image\\icon_combustible_gas.png");
#else
    lv_image_set_src(ui->screen_smart_cabinet_img_101, "F:/icon_combustible_gas.bin");
#endif
    lv_image_set_pivot(ui->screen_smart_cabinet_img_101, 50,50);
    lv_image_set_rotation(ui->screen_smart_cabinet_img_101, 0);

    //Write style for screen_smart_cabinet_img_101, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_smart_cabinet_img_101, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_smart_cabinet_img_101, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_185
    ui->screen_smart_cabinet_label_185 = lv_label_create(ui->screen_smart_cabinet_cont_32);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_185, 80, 43);
    lv_obj_set_size(ui->screen_smart_cabinet_label_185, 130, 33);
    lv_label_set_text(ui->screen_smart_cabinet_label_185, "可燃气体");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_185, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_185, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_185, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_185, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_185, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_185, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_185, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_185, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_185, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_185, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_185, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_185, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_185, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_185, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_185, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_185, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_184
    ui->screen_smart_cabinet_label_184 = lv_label_create(ui->screen_smart_cabinet_cont_32);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_184, 84, 145);
    lv_obj_set_size(ui->screen_smart_cabinet_label_184, 120, 83);
    lv_label_set_text(ui->screen_smart_cabinet_label_184, "33.4");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_184, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_184, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_184, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_184, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_184, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_184, &lv_font_DINCondBlack_70, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_184, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_184, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_184, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_184, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_184, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_184, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_184, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_184, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_184, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_184, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_183
    ui->screen_smart_cabinet_label_183 = lv_label_create(ui->screen_smart_cabinet_cont_32);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_183, 202, 281);
    lv_obj_set_size(ui->screen_smart_cabinet_label_183, 61, 30);
    lv_label_set_text(ui->screen_smart_cabinet_label_183, "%LEL");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_183, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_183, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_183, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_183, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_183, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_183, &lv_font_AlibabaPuHuiTiRegular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_183, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_183, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_183, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_183, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_183, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_183, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_183, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_183, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_183, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_183, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_img_100
    ui->screen_smart_cabinet_img_100 = lv_image_create(ui->screen_smart_cabinet_cont_32);
    lv_obj_set_pos(ui->screen_smart_cabinet_img_100, 201, 80);
    lv_obj_set_size(ui->screen_smart_cabinet_img_100, 50, 50);
    lv_obj_add_flag(ui->screen_smart_cabinet_img_100, LV_OBJ_FLAG_CLICKABLE);
#if LV_USE_GUIDER_SIMULATOR
    lv_image_set_src(ui->screen_smart_cabinet_img_100, "D:\\A\\xw_smart_screen\\import\\image\\img_label.png");
#else
    lv_image_set_src(ui->screen_smart_cabinet_img_100, "F:/img_label.bin");
#endif
    lv_image_set_pivot(ui->screen_smart_cabinet_img_100, 50,50);
    lv_image_set_rotation(ui->screen_smart_cabinet_img_100, 0);

    //Write style for screen_smart_cabinet_img_100, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_smart_cabinet_img_100, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_smart_cabinet_img_100, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_182
    ui->screen_smart_cabinet_label_182 = lv_label_create(ui->screen_smart_cabinet_cont_32);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_182, 211, 91);
    lv_obj_set_size(ui->screen_smart_cabinet_label_182, 32, 26);
    lv_label_set_text(ui->screen_smart_cabinet_label_182, "1-2");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_182, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_182, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_182, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_182, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_182, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_182, &lv_font_AlibabaPuHuiTiRegular_19, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_182, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_182, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_182, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_182, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_182, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_182, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_182, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_182, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_182, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_182, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_cont_33
    ui->screen_smart_cabinet_cont_33 = lv_obj_create(ui->screen_smart_cabinet_cont_32);
    lv_obj_set_pos(ui->screen_smart_cabinet_cont_33, 97, 291);
    lv_obj_set_size(ui->screen_smart_cabinet_cont_33, 90, 18);
    lv_obj_set_scrollbar_mode(ui->screen_smart_cabinet_cont_33, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_smart_cabinet_cont_33, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_cont_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_cont_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_cont_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_cont_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_cont_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_cont_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_cont_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_cont_33, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_line_57
    ui->screen_smart_cabinet_line_57 = lv_line_create(ui->screen_smart_cabinet_cont_33);
    lv_obj_set_pos(ui->screen_smart_cabinet_line_57, 5, 6);
    lv_obj_set_size(ui->screen_smart_cabinet_line_57, 8, 8);
    static lv_point_precise_t screen_smart_cabinet_line_57[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_smart_cabinet_line_57, screen_smart_cabinet_line_57, 2);

    //Write style for screen_smart_cabinet_line_57, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_smart_cabinet_line_57, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_smart_cabinet_line_57, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_smart_cabinet_line_57, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_smart_cabinet_line_57, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_line_56
    ui->screen_smart_cabinet_line_56 = lv_line_create(ui->screen_smart_cabinet_cont_33);
    lv_obj_set_pos(ui->screen_smart_cabinet_line_56, 30, 6);
    lv_obj_set_size(ui->screen_smart_cabinet_line_56, 8, 8);
    static lv_point_precise_t screen_smart_cabinet_line_56[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_smart_cabinet_line_56, screen_smart_cabinet_line_56, 2);

    //Write style for screen_smart_cabinet_line_56, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_smart_cabinet_line_56, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_smart_cabinet_line_56, lv_color_hex(0x44D7B6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_smart_cabinet_line_56, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_smart_cabinet_line_56, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_line_55
    ui->screen_smart_cabinet_line_55 = lv_line_create(ui->screen_smart_cabinet_cont_33);
    lv_obj_set_pos(ui->screen_smart_cabinet_line_55, 55, 6);
    lv_obj_set_size(ui->screen_smart_cabinet_line_55, 8, 8);
    static lv_point_precise_t screen_smart_cabinet_line_55[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_smart_cabinet_line_55, screen_smart_cabinet_line_55, 2);

    //Write style for screen_smart_cabinet_line_55, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_smart_cabinet_line_55, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_smart_cabinet_line_55, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_smart_cabinet_line_55, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_smart_cabinet_line_55, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_line_54
    ui->screen_smart_cabinet_line_54 = lv_line_create(ui->screen_smart_cabinet_cont_33);
    lv_obj_set_pos(ui->screen_smart_cabinet_line_54, 80, 6);
    lv_obj_set_size(ui->screen_smart_cabinet_line_54, 8, 8);
    static lv_point_precise_t screen_smart_cabinet_line_54[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_smart_cabinet_line_54, screen_smart_cabinet_line_54, 2);

    //Write style for screen_smart_cabinet_line_54, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_smart_cabinet_line_54, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_smart_cabinet_line_54, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_smart_cabinet_line_54, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_smart_cabinet_line_54, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_cont_34
    ui->screen_smart_cabinet_cont_34 = lv_obj_create(ui->screen_smart_cabinet_cont_29);
    lv_obj_set_pos(ui->screen_smart_cabinet_cont_34, 0, 0);
    lv_obj_set_size(ui->screen_smart_cabinet_cont_34, 286, 329);
    lv_obj_set_scrollbar_mode(ui->screen_smart_cabinet_cont_34, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_smart_cabinet_cont_34, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_cont_34, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_cont_34, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_cont_34, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_smart_cabinet_cont_34, lv_color_hex(0x2A405C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_smart_cabinet_cont_34, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_cont_34, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_cont_34, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_cont_34, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_cont_34, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_cont_34, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_img_103
    ui->screen_smart_cabinet_img_103 = lv_image_create(ui->screen_smart_cabinet_cont_34);
    lv_obj_set_pos(ui->screen_smart_cabinet_img_103, 27, 30);
    lv_obj_set_size(ui->screen_smart_cabinet_img_103, 52, 52);
    lv_obj_add_flag(ui->screen_smart_cabinet_img_103, LV_OBJ_FLAG_CLICKABLE);
#if LV_USE_GUIDER_SIMULATOR
    lv_image_set_src(ui->screen_smart_cabinet_img_103, "D:\\A\\xw_smart_screen\\import\\image\\icon_combustible_gas.png");
#else
    lv_image_set_src(ui->screen_smart_cabinet_img_103, "F:/icon_combustible_gas.bin");
#endif
    lv_image_set_pivot(ui->screen_smart_cabinet_img_103, 50,50);
    lv_image_set_rotation(ui->screen_smart_cabinet_img_103, 0);

    //Write style for screen_smart_cabinet_img_103, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_smart_cabinet_img_103, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_smart_cabinet_img_103, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_189
    ui->screen_smart_cabinet_label_189 = lv_label_create(ui->screen_smart_cabinet_cont_34);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_189, 80, 43);
    lv_obj_set_size(ui->screen_smart_cabinet_label_189, 130, 33);
    lv_label_set_text(ui->screen_smart_cabinet_label_189, "可燃气体");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_189, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_189, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_189, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_189, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_189, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_189, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_189, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_189, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_189, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_189, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_189, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_189, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_189, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_189, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_189, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_189, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_188
    ui->screen_smart_cabinet_label_188 = lv_label_create(ui->screen_smart_cabinet_cont_34);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_188, 84, 145);
    lv_obj_set_size(ui->screen_smart_cabinet_label_188, 120, 83);
    lv_label_set_text(ui->screen_smart_cabinet_label_188, "33.4");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_188, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_188, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_188, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_188, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_188, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_188, &lv_font_DINCondBlack_70, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_188, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_188, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_188, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_188, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_188, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_188, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_188, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_188, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_188, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_188, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_187
    ui->screen_smart_cabinet_label_187 = lv_label_create(ui->screen_smart_cabinet_cont_34);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_187, 202, 281);
    lv_obj_set_size(ui->screen_smart_cabinet_label_187, 61, 30);
    lv_label_set_text(ui->screen_smart_cabinet_label_187, "%LEL");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_187, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_187, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_187, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_187, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_187, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_187, &lv_font_AlibabaPuHuiTiRegular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_187, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_187, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_187, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_187, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_187, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_187, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_187, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_187, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_187, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_187, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_img_102
    ui->screen_smart_cabinet_img_102 = lv_image_create(ui->screen_smart_cabinet_cont_34);
    lv_obj_set_pos(ui->screen_smart_cabinet_img_102, 201, 80);
    lv_obj_set_size(ui->screen_smart_cabinet_img_102, 50, 50);
    lv_obj_add_flag(ui->screen_smart_cabinet_img_102, LV_OBJ_FLAG_CLICKABLE);
#if LV_USE_GUIDER_SIMULATOR
    lv_image_set_src(ui->screen_smart_cabinet_img_102, "D:\\A\\xw_smart_screen\\import\\image\\img_label.png");
#else
    lv_image_set_src(ui->screen_smart_cabinet_img_102, "F:/img_label.bin");
#endif
    lv_image_set_pivot(ui->screen_smart_cabinet_img_102, 50,50);
    lv_image_set_rotation(ui->screen_smart_cabinet_img_102, 0);

    //Write style for screen_smart_cabinet_img_102, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_smart_cabinet_img_102, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_smart_cabinet_img_102, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_186
    ui->screen_smart_cabinet_label_186 = lv_label_create(ui->screen_smart_cabinet_cont_34);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_186, 211, 91);
    lv_obj_set_size(ui->screen_smart_cabinet_label_186, 32, 26);
    lv_label_set_text(ui->screen_smart_cabinet_label_186, "1-3");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_186, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_186, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_186, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_186, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_186, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_186, &lv_font_AlibabaPuHuiTiRegular_19, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_186, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_186, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_186, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_186, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_186, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_186, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_186, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_186, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_186, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_186, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_cont_35
    ui->screen_smart_cabinet_cont_35 = lv_obj_create(ui->screen_smart_cabinet_cont_34);
    lv_obj_set_pos(ui->screen_smart_cabinet_cont_35, 97, 291);
    lv_obj_set_size(ui->screen_smart_cabinet_cont_35, 90, 18);
    lv_obj_set_scrollbar_mode(ui->screen_smart_cabinet_cont_35, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_smart_cabinet_cont_35, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_cont_35, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_cont_35, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_cont_35, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_cont_35, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_cont_35, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_cont_35, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_cont_35, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_cont_35, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_line_61
    ui->screen_smart_cabinet_line_61 = lv_line_create(ui->screen_smart_cabinet_cont_35);
    lv_obj_set_pos(ui->screen_smart_cabinet_line_61, 5, 6);
    lv_obj_set_size(ui->screen_smart_cabinet_line_61, 8, 8);
    static lv_point_precise_t screen_smart_cabinet_line_61[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_smart_cabinet_line_61, screen_smart_cabinet_line_61, 2);

    //Write style for screen_smart_cabinet_line_61, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_smart_cabinet_line_61, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_smart_cabinet_line_61, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_smart_cabinet_line_61, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_smart_cabinet_line_61, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_line_60
    ui->screen_smart_cabinet_line_60 = lv_line_create(ui->screen_smart_cabinet_cont_35);
    lv_obj_set_pos(ui->screen_smart_cabinet_line_60, 30, 6);
    lv_obj_set_size(ui->screen_smart_cabinet_line_60, 8, 8);
    static lv_point_precise_t screen_smart_cabinet_line_60[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_smart_cabinet_line_60, screen_smart_cabinet_line_60, 2);

    //Write style for screen_smart_cabinet_line_60, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_smart_cabinet_line_60, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_smart_cabinet_line_60, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_smart_cabinet_line_60, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_smart_cabinet_line_60, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_line_59
    ui->screen_smart_cabinet_line_59 = lv_line_create(ui->screen_smart_cabinet_cont_35);
    lv_obj_set_pos(ui->screen_smart_cabinet_line_59, 55, 6);
    lv_obj_set_size(ui->screen_smart_cabinet_line_59, 8, 8);
    static lv_point_precise_t screen_smart_cabinet_line_59[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_smart_cabinet_line_59, screen_smart_cabinet_line_59, 2);

    //Write style for screen_smart_cabinet_line_59, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_smart_cabinet_line_59, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_smart_cabinet_line_59, lv_color_hex(0x44D7B6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_smart_cabinet_line_59, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_smart_cabinet_line_59, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_line_58
    ui->screen_smart_cabinet_line_58 = lv_line_create(ui->screen_smart_cabinet_cont_35);
    lv_obj_set_pos(ui->screen_smart_cabinet_line_58, 80, 6);
    lv_obj_set_size(ui->screen_smart_cabinet_line_58, 8, 8);
    static lv_point_precise_t screen_smart_cabinet_line_58[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_smart_cabinet_line_58, screen_smart_cabinet_line_58, 2);

    //Write style for screen_smart_cabinet_line_58, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_smart_cabinet_line_58, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_smart_cabinet_line_58, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_smart_cabinet_line_58, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_smart_cabinet_line_58, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_cont_36
    ui->screen_smart_cabinet_cont_36 = lv_obj_create(ui->screen_smart_cabinet_cont_29);
    lv_obj_set_pos(ui->screen_smart_cabinet_cont_36, 0, 0);
    lv_obj_set_size(ui->screen_smart_cabinet_cont_36, 286, 329);
    lv_obj_set_scrollbar_mode(ui->screen_smart_cabinet_cont_36, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_smart_cabinet_cont_36, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_cont_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_cont_36, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_cont_36, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_smart_cabinet_cont_36, lv_color_hex(0x2A405C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_smart_cabinet_cont_36, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_cont_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_cont_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_cont_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_cont_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_cont_36, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_img_105
    ui->screen_smart_cabinet_img_105 = lv_image_create(ui->screen_smart_cabinet_cont_36);
    lv_obj_set_pos(ui->screen_smart_cabinet_img_105, 27, 30);
    lv_obj_set_size(ui->screen_smart_cabinet_img_105, 52, 52);
    lv_obj_add_flag(ui->screen_smart_cabinet_img_105, LV_OBJ_FLAG_CLICKABLE);
#if LV_USE_GUIDER_SIMULATOR
    lv_image_set_src(ui->screen_smart_cabinet_img_105, "D:\\A\\xw_smart_screen\\import\\image\\icon_combustible_gas.png");
#else
    lv_image_set_src(ui->screen_smart_cabinet_img_105, "F:/icon_combustible_gas.bin");
#endif
    lv_image_set_pivot(ui->screen_smart_cabinet_img_105, 50,50);
    lv_image_set_rotation(ui->screen_smart_cabinet_img_105, 0);

    //Write style for screen_smart_cabinet_img_105, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_smart_cabinet_img_105, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_smart_cabinet_img_105, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_193
    ui->screen_smart_cabinet_label_193 = lv_label_create(ui->screen_smart_cabinet_cont_36);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_193, 80, 43);
    lv_obj_set_size(ui->screen_smart_cabinet_label_193, 130, 33);
    lv_label_set_text(ui->screen_smart_cabinet_label_193, "可燃气体");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_193, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_193, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_193, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_193, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_193, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_193, &lv_font_AlibabaPuHuiTiRegular_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_193, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_193, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_193, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_193, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_193, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_193, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_193, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_193, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_193, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_193, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_192
    ui->screen_smart_cabinet_label_192 = lv_label_create(ui->screen_smart_cabinet_cont_36);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_192, 84, 145);
    lv_obj_set_size(ui->screen_smart_cabinet_label_192, 120, 83);
    lv_label_set_text(ui->screen_smart_cabinet_label_192, "33.4");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_192, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_192, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_192, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_192, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_192, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_192, &lv_font_DINCondBlack_70, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_192, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_192, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_192, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_192, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_192, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_192, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_192, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_192, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_192, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_192, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_191
    ui->screen_smart_cabinet_label_191 = lv_label_create(ui->screen_smart_cabinet_cont_36);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_191, 202, 281);
    lv_obj_set_size(ui->screen_smart_cabinet_label_191, 61, 30);
    lv_label_set_text(ui->screen_smart_cabinet_label_191, "%LEL");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_191, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_191, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_191, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_191, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_191, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_191, &lv_font_AlibabaPuHuiTiRegular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_191, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_191, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_191, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_191, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_191, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_191, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_191, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_191, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_191, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_191, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_img_104
    ui->screen_smart_cabinet_img_104 = lv_image_create(ui->screen_smart_cabinet_cont_36);
    lv_obj_set_pos(ui->screen_smart_cabinet_img_104, 201, 80);
    lv_obj_set_size(ui->screen_smart_cabinet_img_104, 50, 50);
    lv_obj_add_flag(ui->screen_smart_cabinet_img_104, LV_OBJ_FLAG_CLICKABLE);
#if LV_USE_GUIDER_SIMULATOR
    lv_image_set_src(ui->screen_smart_cabinet_img_104, "D:\\A\\xw_smart_screen\\import\\image\\img_label.png");
#else
    lv_image_set_src(ui->screen_smart_cabinet_img_104, "F:/img_label.bin");
#endif
    lv_image_set_pivot(ui->screen_smart_cabinet_img_104, 50,50);
    lv_image_set_rotation(ui->screen_smart_cabinet_img_104, 0);

    //Write style for screen_smart_cabinet_img_104, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_smart_cabinet_img_104, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_smart_cabinet_img_104, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_190
    ui->screen_smart_cabinet_label_190 = lv_label_create(ui->screen_smart_cabinet_cont_36);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_190, 211, 91);
    lv_obj_set_size(ui->screen_smart_cabinet_label_190, 32, 26);
    lv_label_set_text(ui->screen_smart_cabinet_label_190, "1-4");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_190, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_190, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_190, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_190, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_190, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_190, &lv_font_AlibabaPuHuiTiRegular_19, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_190, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_190, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_190, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_190, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_190, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_190, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_190, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_190, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_190, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_190, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_cont_37
    ui->screen_smart_cabinet_cont_37 = lv_obj_create(ui->screen_smart_cabinet_cont_36);
    lv_obj_set_pos(ui->screen_smart_cabinet_cont_37, 97, 291);
    lv_obj_set_size(ui->screen_smart_cabinet_cont_37, 90, 18);
    lv_obj_set_scrollbar_mode(ui->screen_smart_cabinet_cont_37, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_smart_cabinet_cont_37, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_cont_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_cont_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_cont_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_cont_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_cont_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_cont_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_cont_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_cont_37, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_line_65
    ui->screen_smart_cabinet_line_65 = lv_line_create(ui->screen_smart_cabinet_cont_37);
    lv_obj_set_pos(ui->screen_smart_cabinet_line_65, 5, 6);
    lv_obj_set_size(ui->screen_smart_cabinet_line_65, 8, 8);
    static lv_point_precise_t screen_smart_cabinet_line_65[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_smart_cabinet_line_65, screen_smart_cabinet_line_65, 2);

    //Write style for screen_smart_cabinet_line_65, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_smart_cabinet_line_65, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_smart_cabinet_line_65, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_smart_cabinet_line_65, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_smart_cabinet_line_65, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_line_64
    ui->screen_smart_cabinet_line_64 = lv_line_create(ui->screen_smart_cabinet_cont_37);
    lv_obj_set_pos(ui->screen_smart_cabinet_line_64, 30, 6);
    lv_obj_set_size(ui->screen_smart_cabinet_line_64, 8, 8);
    static lv_point_precise_t screen_smart_cabinet_line_64[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_smart_cabinet_line_64, screen_smart_cabinet_line_64, 2);

    //Write style for screen_smart_cabinet_line_64, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_smart_cabinet_line_64, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_smart_cabinet_line_64, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_smart_cabinet_line_64, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_smart_cabinet_line_64, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_line_63
    ui->screen_smart_cabinet_line_63 = lv_line_create(ui->screen_smart_cabinet_cont_37);
    lv_obj_set_pos(ui->screen_smart_cabinet_line_63, 55, 6);
    lv_obj_set_size(ui->screen_smart_cabinet_line_63, 8, 8);
    static lv_point_precise_t screen_smart_cabinet_line_63[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_smart_cabinet_line_63, screen_smart_cabinet_line_63, 2);

    //Write style for screen_smart_cabinet_line_63, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_smart_cabinet_line_63, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_smart_cabinet_line_63, lv_color_hex(0x757575), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_smart_cabinet_line_63, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_smart_cabinet_line_63, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_line_62
    ui->screen_smart_cabinet_line_62 = lv_line_create(ui->screen_smart_cabinet_cont_37);
    lv_obj_set_pos(ui->screen_smart_cabinet_line_62, 80, 6);
    lv_obj_set_size(ui->screen_smart_cabinet_line_62, 8, 8);
    static lv_point_precise_t screen_smart_cabinet_line_62[] = {{0, 0},{0, 0}};
    lv_line_set_points(ui->screen_smart_cabinet_line_62, screen_smart_cabinet_line_62, 2);

    //Write style for screen_smart_cabinet_line_62, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_smart_cabinet_line_62, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_smart_cabinet_line_62, lv_color_hex(0x44D7B6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_smart_cabinet_line_62, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_smart_cabinet_line_62, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_cont_38
    ui->screen_smart_cabinet_cont_38 = lv_obj_create(ui->screen_smart_cabinet_cont_screen_smart_cab);
    lv_obj_set_pos(ui->screen_smart_cabinet_cont_38, 325, 204);
    lv_obj_set_size(ui->screen_smart_cabinet_cont_38, 629, 391);
    lv_obj_set_scrollbar_mode(ui->screen_smart_cabinet_cont_38, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_smart_cabinet_cont_38, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_smart_cabinet_cont_38, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_cont_38, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_smart_cabinet_cont_38, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_smart_cabinet_cont_38, lv_color_hex(0x2A405C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_smart_cabinet_cont_38, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_cont_38, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_cont_38, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_smart_cabinet_cont_38, lv_color_hex(0x2A405C), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_smart_cabinet_cont_38, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_cont_38, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_cont_38, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_cont_38, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_cont_38, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_cont_38, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_line_66
    ui->screen_smart_cabinet_line_66 = lv_line_create(ui->screen_smart_cabinet_cont_38);
    lv_obj_set_pos(ui->screen_smart_cabinet_line_66, 50, 46);
    lv_obj_set_size(ui->screen_smart_cabinet_line_66, 5, 23);
    static lv_point_precise_t screen_smart_cabinet_line_66[] = {{0, 0},{0, 23}};
    lv_line_set_points(ui->screen_smart_cabinet_line_66, screen_smart_cabinet_line_66, 2);

    //Write style for screen_smart_cabinet_line_66, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_line_width(ui->screen_smart_cabinet_line_66, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui->screen_smart_cabinet_line_66, lv_color_hex(0x01D270), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui->screen_smart_cabinet_line_66, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_line_rounded(ui->screen_smart_cabinet_line_66, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_qrcode_1
    ui->screen_smart_cabinet_qrcode_1 = lv_qrcode_create(ui->screen_smart_cabinet_cont_38);
    lv_obj_set_pos(ui->screen_smart_cabinet_qrcode_1, 60, 128);
    lv_obj_set_size(ui->screen_smart_cabinet_qrcode_1, 123, 123);
    lv_qrcode_set_size(ui->screen_smart_cabinet_qrcode_1, 123);
    lv_qrcode_set_dark_color(ui->screen_smart_cabinet_qrcode_1, lv_color_hex(0x2C3224));
    lv_qrcode_set_light_color(ui->screen_smart_cabinet_qrcode_1, lv_color_hex(0xffffff));
    const char * screen_smart_cabinet_qrcode_1_data = "https://www.nxp.com/";
    lv_qrcode_update(ui->screen_smart_cabinet_qrcode_1, screen_smart_cabinet_qrcode_1_data, 20);

    //Write codes screen_smart_cabinet_label_204
    ui->screen_smart_cabinet_label_204 = lv_label_create(ui->screen_smart_cabinet_cont_38);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_204, 61, 44);
    lv_obj_set_size(ui->screen_smart_cabinet_label_204, 110, 30);
    lv_label_set_text(ui->screen_smart_cabinet_label_204, "设备信息");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_204, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_204, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_204, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_204, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_204, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_204, &lv_font_AlibabaPuHuiTiRegular_26, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_204, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_204, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_204, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_204, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_204, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_204, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_204, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_204, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_204, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_204, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_203
    ui->screen_smart_cabinet_label_203 = lv_label_create(ui->screen_smart_cabinet_cont_38);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_203, 239, 131);
    lv_obj_set_size(ui->screen_smart_cabinet_label_203, 100, 32);
    lv_label_set_text(ui->screen_smart_cabinet_label_203, "设备型号：");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_203, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_203, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_203, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_203, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_203, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_203, &lv_font_AlibabaPuHuiTiRegular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_203, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_203, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_203, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_203, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_203, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_203, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_203, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_203, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_203, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_203, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_202
    ui->screen_smart_cabinet_label_202 = lv_label_create(ui->screen_smart_cabinet_cont_38);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_202, 350, 130);
    lv_obj_set_size(ui->screen_smart_cabinet_label_202, 234, 32);
    lv_label_set_text(ui->screen_smart_cabinet_label_202, "钻石型V1");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_202, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_202, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_202, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_202, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_202, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_202, &lv_font_AlibabaPuHuiTiRegular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_202, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_202, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_202, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_202, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_202, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_202, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_202, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_202, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_202, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_202, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_201
    ui->screen_smart_cabinet_label_201 = lv_label_create(ui->screen_smart_cabinet_cont_38);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_201, 239, 176);
    lv_obj_set_size(ui->screen_smart_cabinet_label_201, 126, 32);
    lv_label_set_text(ui->screen_smart_cabinet_label_201, "系统版本号：");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_201, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_201, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_201, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_201, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_201, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_201, &lv_font_AlibabaPuHuiTiRegular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_201, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_201, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_201, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_201, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_201, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_201, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_201, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_201, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_201, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_201, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_200
    ui->screen_smart_cabinet_label_200 = lv_label_create(ui->screen_smart_cabinet_cont_38);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_200, 350, 175);
    lv_obj_set_size(ui->screen_smart_cabinet_label_200, 234, 32);
    lv_label_set_text(ui->screen_smart_cabinet_label_200, "V1.2.1");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_200, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_200, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_200, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_200, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_200, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_200, &lv_font_AlibabaPuHuiTiRegular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_200, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_200, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_200, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_200, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_200, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_200, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_200, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_200, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_200, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_200, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_199
    ui->screen_smart_cabinet_label_199 = lv_label_create(ui->screen_smart_cabinet_cont_38);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_199, 239, 221);
    lv_obj_set_size(ui->screen_smart_cabinet_label_199, 100, 32);
    lv_label_set_text(ui->screen_smart_cabinet_label_199, "所属机构：");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_199, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_199, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_199, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_199, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_199, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_199, &lv_font_AlibabaPuHuiTiRegular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_199, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_199, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_199, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_199, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_199, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_199, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_199, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_199, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_199, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_199, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_198
    ui->screen_smart_cabinet_label_198 = lv_label_create(ui->screen_smart_cabinet_cont_38);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_198, 350, 220);
    lv_obj_set_size(ui->screen_smart_cabinet_label_198, 234, 32);
    lv_label_set_text(ui->screen_smart_cabinet_label_198, "上海交通大学");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_198, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_198, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_198, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_198, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_198, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_198, &lv_font_AlibabaPuHuiTiRegular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_198, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_198, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_198, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_198, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_198, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_198, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_198, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_198, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_198, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_198, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_197
    ui->screen_smart_cabinet_label_197 = lv_label_create(ui->screen_smart_cabinet_cont_38);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_197, 239, 266);
    lv_obj_set_size(ui->screen_smart_cabinet_label_197, 100, 32);
    lv_label_set_text(ui->screen_smart_cabinet_label_197, "设备编号");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_197, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_197, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_197, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_197, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_197, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_197, &lv_font_AlibabaPuHuiTiRegular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_197, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_197, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_197, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_197, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_197, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_197, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_197, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_197, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_197, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_197, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_196
    ui->screen_smart_cabinet_label_196 = lv_label_create(ui->screen_smart_cabinet_cont_38);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_196, 350, 265);
    lv_obj_set_size(ui->screen_smart_cabinet_label_196, 233, 32);
    lv_label_set_text(ui->screen_smart_cabinet_label_196, "123456789101112");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_196, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_196, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_196, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_196, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_196, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_196, &lv_font_AlibabaPuHuiTiRegular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_196, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_196, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_196, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_196, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_196, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_196, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_196, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_196, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_196, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_196, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_195
    ui->screen_smart_cabinet_label_195 = lv_label_create(ui->screen_smart_cabinet_cont_38);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_195, 239, 311);
    lv_obj_set_size(ui->screen_smart_cabinet_label_195, 100, 32);
    lv_label_set_text(ui->screen_smart_cabinet_label_195, "版权：");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_195, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_195, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_195, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_195, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_195, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_195, &lv_font_AlibabaPuHuiTiRegular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_195, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_195, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_195, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_195, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_195, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_195, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_195, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_195, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_195, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_195, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_label_194
    ui->screen_smart_cabinet_label_194 = lv_label_create(ui->screen_smart_cabinet_cont_38);
    lv_obj_set_pos(ui->screen_smart_cabinet_label_194, 350, 310);
    lv_obj_set_size(ui->screen_smart_cabinet_label_194, 255, 32);
    lv_label_set_text(ui->screen_smart_cabinet_label_194, "上海XXXX科技有限公司");
    lv_label_set_long_mode(ui->screen_smart_cabinet_label_194, LV_LABEL_LONG_WRAP);

    //Write style for screen_smart_cabinet_label_194, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_label_194, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_label_194, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_label_194, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_label_194, &lv_font_AlibabaPuHuiTiRegular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_label_194, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_label_194, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_smart_cabinet_label_194, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_label_194, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_label_194, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_label_194, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_label_194, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_label_194, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_label_194, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_label_194, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_btn_2
    ui->screen_smart_cabinet_btn_2 = lv_button_create(ui->screen_smart_cabinet_cont_38);
    lv_obj_set_pos(ui->screen_smart_cabinet_btn_2, 500, 25);
    lv_obj_set_size(ui->screen_smart_cabinet_btn_2, 100, 50);
    ui->screen_smart_cabinet_btn_2_label = lv_label_create(ui->screen_smart_cabinet_btn_2);
    lv_label_set_text(ui->screen_smart_cabinet_btn_2_label, "" LV_SYMBOL_CLOSE " ");
    lv_label_set_long_mode(ui->screen_smart_cabinet_btn_2_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_smart_cabinet_btn_2_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_smart_cabinet_btn_2, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_smart_cabinet_btn_2_label, LV_PCT(100));

    //Write style for screen_smart_cabinet_btn_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_btn_2, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_btn_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_btn_2, &lv_font_AlibabaPuHuiTiRegular_40, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_btn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_btn_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_datetext_1
    ui->screen_smart_cabinet_datetext_1 = lv_label_create(ui->screen_smart_cabinet);
    lv_obj_set_pos(ui->screen_smart_cabinet_datetext_1, 912, 16);
    lv_obj_set_size(ui->screen_smart_cabinet_datetext_1, 130, 36);
    lv_label_set_text(ui->screen_smart_cabinet_datetext_1, "2024/04/22");
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_datetext_1, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_add_flag(ui->screen_smart_cabinet_datetext_1, LV_OBJ_FLAG_CLICKABLE);
    lv_obj_add_event_cb(ui->screen_smart_cabinet_datetext_1, screen_smart_cabinet_datetext_1_event_handler, LV_EVENT_ALL, NULL);

    //Write style for screen_smart_cabinet_datetext_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_datetext_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_datetext_1, &lv_font_AlibabaPuHuiTiRegular_18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_datetext_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_datetext_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_datetext_1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_datetext_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_datetext_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_datetext_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_datetext_1, 9, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_datetext_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_datetext_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_datetext_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_digital_clock_1
    static bool screen_smart_cabinet_digital_clock_1_timer_enabled = false;
    ui->screen_smart_cabinet_digital_clock_1 = lv_label_create(ui->screen_smart_cabinet);
    lv_obj_set_pos(ui->screen_smart_cabinet_digital_clock_1, 1042, 16);
    lv_obj_set_size(ui->screen_smart_cabinet_digital_clock_1, 130, 36);
    lv_label_set_text(ui->screen_smart_cabinet_digital_clock_1, "11:25");
    if (!screen_smart_cabinet_digital_clock_1_timer_enabled) {
        lv_timer_create(screen_smart_cabinet_digital_clock_1_timer, 1000, NULL);
        screen_smart_cabinet_digital_clock_1_timer_enabled = true;
    }

    //Write style for screen_smart_cabinet_digital_clock_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_radius(ui->screen_smart_cabinet_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_digital_clock_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_digital_clock_1, &lv_font_AlibabaPuHuiTiRegular_18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_digital_clock_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_smart_cabinet_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_digital_clock_1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_smart_cabinet_digital_clock_1, 9, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_smart_cabinet_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_smart_cabinet_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_smart_cabinet_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_btn_1
    ui->screen_smart_cabinet_btn_1 = lv_button_create(ui->screen_smart_cabinet);
    lv_obj_set_pos(ui->screen_smart_cabinet_btn_1, 1098, 14);
    lv_obj_set_size(ui->screen_smart_cabinet_btn_1, 44, 44);
    ui->screen_smart_cabinet_btn_1_label = lv_label_create(ui->screen_smart_cabinet_btn_1);
    lv_label_set_text(ui->screen_smart_cabinet_btn_1_label, "");
    lv_label_set_long_mode(ui->screen_smart_cabinet_btn_1_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_smart_cabinet_btn_1_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_smart_cabinet_btn_1, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_smart_cabinet_btn_1_label, LV_PCT(100));

    //Write style for screen_smart_cabinet_btn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_smart_cabinet_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_smart_cabinet_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_smart_cabinet_btn_1, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_smart_cabinet_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_src(ui->screen_smart_cabinet_btn_1, &_icon_setup_RGB565A8_44x44, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_opa(ui->screen_smart_cabinet_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_image_recolor_opa(ui->screen_smart_cabinet_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_smart_cabinet_btn_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_smart_cabinet_btn_1, &lv_font_AlibabaPuHuiTiRegular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_smart_cabinet_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_smart_cabinet_btn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_img_13
    ui->screen_smart_cabinet_img_13 = lv_image_create(ui->screen_smart_cabinet);
    lv_obj_set_pos(ui->screen_smart_cabinet_img_13, 1157, 14);
    lv_obj_set_size(ui->screen_smart_cabinet_img_13, 44, 44);
    lv_obj_add_flag(ui->screen_smart_cabinet_img_13, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_smart_cabinet_img_13, &_icon_device_RGB565A8_44x44);
    lv_image_set_pivot(ui->screen_smart_cabinet_img_13, 50,50);
    lv_image_set_rotation(ui->screen_smart_cabinet_img_13, 0);

    //Write style for screen_smart_cabinet_img_13, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_smart_cabinet_img_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_smart_cabinet_img_13, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_img_14
    ui->screen_smart_cabinet_img_14 = lv_image_create(ui->screen_smart_cabinet);
    lv_obj_set_pos(ui->screen_smart_cabinet_img_14, 1215, 14);
    lv_obj_set_size(ui->screen_smart_cabinet_img_14, 44, 44);
    lv_obj_add_flag(ui->screen_smart_cabinet_img_14, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_smart_cabinet_img_14, &_icon_signal_RGB565A8_44x44);
    lv_image_set_pivot(ui->screen_smart_cabinet_img_14, 50,50);
    lv_image_set_rotation(ui->screen_smart_cabinet_img_14, 0);

    //Write style for screen_smart_cabinet_img_14, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_smart_cabinet_img_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_smart_cabinet_img_14, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_smart_cabinet_img_15
    ui->screen_smart_cabinet_img_15 = lv_image_create(ui->screen_smart_cabinet);
    lv_obj_set_pos(ui->screen_smart_cabinet_img_15, 1215, 14);
    lv_obj_set_size(ui->screen_smart_cabinet_img_15, 44, 44);
    lv_obj_add_flag(ui->screen_smart_cabinet_img_15, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui->screen_smart_cabinet_img_15, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->screen_smart_cabinet_img_15, &_icon_signal_n_RGB565A8_44x44);
    lv_image_set_pivot(ui->screen_smart_cabinet_img_15, 50,50);
    lv_image_set_rotation(ui->screen_smart_cabinet_img_15, 0);

    //Write style for screen_smart_cabinet_img_15, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->screen_smart_cabinet_img_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->screen_smart_cabinet_img_15, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of screen_smart_cabinet.


    //Update current screen layout.
    lv_obj_update_layout(ui->screen_smart_cabinet);

}
