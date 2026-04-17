/*
* Copyright 2025 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "events_init.h"
#include <stdio.h>
#include "lvgl.h"

#if LV_USE_GUIDER_SIMULATOR && LV_USE_FREEMASTER
#include "freemaster_client.h"
#endif


static void screen_samrt_lab_btn_2_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_PRESSED:
    {
        lv_obj_add_flag(guider_ui.screen_samrt_lab_cont_59, LV_OBJ_FLAG_HIDDEN);
        break;
    }
    default:
        break;
    }
}

static void screen_samrt_lab_btn_1_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_PRESSED:
    {
        lv_obj_remove_flag(guider_ui.screen_samrt_lab_cont_60, LV_OBJ_FLAG_HIDDEN);
        break;
    }
    default:
        break;
    }
}

static void screen_samrt_lab_btn_3_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_PRESSED:
    {
        lv_obj_remove_flag(guider_ui.screen_samrt_lab_cont_59, LV_OBJ_FLAG_HIDDEN);
        break;
    }
    default:
        break;
    }
}

static void screen_samrt_lab_btn_4_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_PRESSED:
    {
        lv_obj_add_flag(guider_ui.screen_samrt_lab_cont_60, LV_OBJ_FLAG_HIDDEN);
        break;
    }
    default:
        break;
    }
}

static void screen_samrt_lab_btn_5_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_PRESSED:
    {
        lv_obj_add_flag(guider_ui.screen_samrt_lab_btn_5, LV_OBJ_FLAG_HIDDEN);
        break;
    }
    default:
        break;
    }
}

void events_init_screen_samrt_lab (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->screen_samrt_lab_btn_2, screen_samrt_lab_btn_2_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_samrt_lab_btn_1, screen_samrt_lab_btn_1_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_samrt_lab_btn_3, screen_samrt_lab_btn_3_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_samrt_lab_btn_4, screen_samrt_lab_btn_4_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_samrt_lab_btn_5, screen_samrt_lab_btn_5_event_handler, LV_EVENT_ALL, ui);
}

static void screen_cfg_dev_btn_6_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_PRESSED:
    {
        break;
    }
    default:
        break;
    }
}

static void screen_cfg_dev_btn_4_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_PRESSED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.screen_cfg_door, guider_ui.screen_cfg_door_del, &guider_ui.screen_cfg_dev_del, setup_scr_screen_cfg_door, LV_SCR_LOAD_ANIM_NONE, 20, 2, true, true);
        break;
    }
    default:
        break;
    }
}

static void screen_cfg_dev_btn_2_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_PRESSED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.screen_cfg_alarm, guider_ui.screen_cfg_alarm_del, &guider_ui.screen_cfg_dev_del, setup_scr_screen_cfg_alarm, LV_SCR_LOAD_ANIM_NONE, 20, 2, true, true);
        break;
    }
    default:
        break;
    }
}

static void screen_cfg_dev_btn_5_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_PRESSED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.screen_samrt_lab, guider_ui.screen_samrt_lab_del, &guider_ui.screen_cfg_dev_del, setup_scr_screen_samrt_lab, LV_SCR_LOAD_ANIM_NONE, 20, 2, true, true);
        break;
    }
    default:
        break;
    }
}

void events_init_screen_cfg_dev (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->screen_cfg_dev_btn_6, screen_cfg_dev_btn_6_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_cfg_dev_btn_4, screen_cfg_dev_btn_4_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_cfg_dev_btn_2, screen_cfg_dev_btn_2_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_cfg_dev_btn_5, screen_cfg_dev_btn_5_event_handler, LV_EVENT_ALL, ui);
}

static void screen_cfg_alarm_btn_7_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_PRESSED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.screen_cfg_dev, guider_ui.screen_cfg_dev_del, &guider_ui.screen_cfg_alarm_del, setup_scr_screen_cfg_dev, LV_SCR_LOAD_ANIM_NONE, 20, 2, true, true);
        break;
    }
    default:
        break;
    }
}

static void screen_cfg_alarm_btn_4_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_PRESSED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.screen_cfg_door, guider_ui.screen_cfg_door_del, &guider_ui.screen_cfg_alarm_del, setup_scr_screen_cfg_door, LV_SCR_LOAD_ANIM_NONE, 20, 2, false, true);
        break;
    }
    default:
        break;
    }
}

static void screen_cfg_alarm_btn_5_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_PRESSED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.screen_samrt_lab, guider_ui.screen_samrt_lab_del, &guider_ui.screen_cfg_alarm_del, setup_scr_screen_samrt_lab, LV_SCR_LOAD_ANIM_NONE, 20, 2, true, true);
        break;
    }
    default:
        break;
    }
}

void events_init_screen_cfg_alarm (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->screen_cfg_alarm_btn_7, screen_cfg_alarm_btn_7_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_cfg_alarm_btn_4, screen_cfg_alarm_btn_4_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_cfg_alarm_btn_5, screen_cfg_alarm_btn_5_event_handler, LV_EVENT_ALL, ui);
}

static void screen_cfg_door_btn_67_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_PRESSED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.screen_cfg_dev, guider_ui.screen_cfg_dev_del, &guider_ui.screen_cfg_door_del, setup_scr_screen_cfg_dev, LV_SCR_LOAD_ANIM_NONE, 20, 2, true, true);
        break;
    }
    default:
        break;
    }
}

static void screen_cfg_door_btn_2_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_PRESSED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.screen_cfg_alarm, guider_ui.screen_cfg_alarm_del, &guider_ui.screen_cfg_door_del, setup_scr_screen_cfg_alarm, LV_SCR_LOAD_ANIM_NONE, 20, 2, true, true);
        break;
    }
    default:
        break;
    }
}

static void screen_cfg_door_btn_5_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_PRESSED:
    {
        ui_load_scr_animation(&guider_ui, &guider_ui.screen_samrt_lab, guider_ui.screen_samrt_lab_del, &guider_ui.screen_cfg_door_del, setup_scr_screen_samrt_lab, LV_SCR_LOAD_ANIM_NONE, 20, 2, true, true);
        break;
    }
    default:
        break;
    }
}

void events_init_screen_cfg_door (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->screen_cfg_door_btn_67, screen_cfg_door_btn_67_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_cfg_door_btn_2, screen_cfg_door_btn_2_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_cfg_door_btn_5, screen_cfg_door_btn_5_event_handler, LV_EVENT_ALL, ui);
}


void events_init(lv_ui *ui)
{

}
