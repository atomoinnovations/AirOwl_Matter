// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.2
// LVGL version: 8.3.6
// Project name: example_project

#include "../ui.h"

void ui_qrcode_screen_init(void)
{
ui_qrcode = lv_obj_create(NULL);
lv_obj_clear_flag( ui_qrcode, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_qrcode, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_qrcode, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_qrcode_obj = lv_qrcode_create(ui_qrcode, 150, lv_color_hex3(0x000), lv_color_hex3(0xeef));

ui_qrcodename = lv_label_create(ui_qrcode);
lv_obj_set_width( ui_qrcodename, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_qrcodename, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_qrcodename, 0 );
lv_obj_set_y( ui_qrcodename, 99 );
lv_obj_set_align( ui_qrcodename, LV_ALIGN_CENTER );
lv_label_set_text(ui_qrcodename,"OIZOM AIROWL");
lv_obj_set_style_text_font(ui_qrcodename, &lv_font_montserrat_20, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_add_event_cb(ui_qrcode, ui_event_qrcode, LV_EVENT_ALL, NULL);

}
