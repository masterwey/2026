/*
* Copyright 2024 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#ifndef __CUSTOM_H_
#define __CUSTOM_H_
#ifdef __cplusplus
extern "C" {
#endif

#include "gui_guider.h"

void custom_init(lv_ui *ui);
void home_timer_cb(lv_timer_t * timer);

// ==================== 动画回调函数声明 ====================
// 温度传感器动画回调
void tem_1_2_fadeout_cb(lv_anim_t * a);
void tem_1_1_fadeout_cb(lv_anim_t * a);

// 湿度传感器动画回调
void hum_1_2_fadeout_cb(lv_anim_t * a);
void hum_1_1_fadeout_cb(lv_anim_t * a);

// 氧气传感器动画回调
void oxy_1_2_fadeout_cb(lv_anim_t * a);
void oxy_1_1_fadeout_cb(lv_anim_t * a);

// VOC传感器动画回调
void voc_1_2_fadeout_cb(lv_anim_t * a);
void voc_1_1_fadeout_cb(lv_anim_t * a);

// 可燃气体传感器动画回调
void gas_1_2_fadeout_cb(lv_anim_t * a);
void gas_1_1_fadeout_cb(lv_anim_t * a);

#ifdef __cplusplus
}
#endif
#endif /* EVENT_CB_H_ */
