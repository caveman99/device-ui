// this file is not fully generated
// it is partly created with Squareline Studio (tabview) and the tabview buttons are manually fixed for lvgl v9

#include "ui.h"

lv_obj_t * ui_NodesOptionsPanel;
lv_obj_t * ui_NodesOptionsTabView;
lv_obj_t * ui_TabPageFilter;
lv_obj_t * ui_NodesFilterUnknownLabel;
lv_obj_t * ui_NodesFilterUnknownSwitch;
lv_obj_t * ui_NodesFilterOfflineLabel;
lv_obj_t * ui_NodesFilterOfflineSwitch;
lv_obj_t * ui_NodesFilterMQTTLabel;
lv_obj_t * ui_NodesFilterMQTTSwitch;
lv_obj_t * ui_NodesFilterPositionLabel;
lv_obj_t * ui_NodesFilterPositionSwitch;
lv_obj_t * ui_NodesFilterNameLabel;
lv_obj_t * ui_NodesFilterNameArea;
lv_obj_t * ui_TabPageHighlight;
lv_obj_t * ui_NodesHLActiveChatLabel;
lv_obj_t * ui_NodesHLActiveChatSwitch;
lv_obj_t * ui_NodesHLPositionLabel;
lv_obj_t * ui_NodesHLPositionSwitch;
lv_obj_t * ui_NodesHLTelemetryLabel;
lv_obj_t * ui_NodesHLTelemetrySwitch;
lv_obj_t * ui_NodesHLIAQLabel;
lv_obj_t * ui_NodesHLIAQSwitch;
lv_obj_t * ui_NodesHLNameLabel;
lv_obj_t * ui_NodesHLNameArea;

lv_obj_t *ui_KeyboardButton5;
lv_obj_t *ui_KeyboardButton6;

extern const lv_img_dsc_t img_keyboard_image;


void create_tabview_nodes_options()
{
    ui_NodesOptionsPanel = lv_obj_create(objects.main_screen);
    lv_obj_set_pos(ui_NodesOptionsPanel, 39, 25);
    lv_obj_set_size(ui_NodesOptionsPanel, LV_PCT(88), 215);
    lv_obj_add_flag(ui_NodesOptionsPanel, LV_OBJ_FLAG_HIDDEN);
    lv_obj_clear_flag(ui_NodesOptionsPanel,
                      LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_radius(ui_NodesOptionsPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_NodesOptionsPanel, lv_color_hex(0x303030), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_NodesOptionsPanel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_NodesOptionsPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_NodesOptionsTabView = lv_tabview_create(ui_NodesOptionsPanel);
    lv_tabview_set_tab_bar_position(ui_NodesOptionsTabView, LV_DIR_TOP);
    lv_tabview_set_tab_bar_size(ui_NodesOptionsTabView, 25);
    lv_obj_set_width(ui_NodesOptionsTabView, lv_pct(110));
    lv_obj_set_height(ui_NodesOptionsTabView, lv_pct(114));
    lv_obj_set_align(ui_NodesOptionsTabView, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_NodesOptionsTabView, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_NodesOptionsTabView, lv_color_hex(0x303030), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_NodesOptionsTabView, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_NodesOptionsTabView, lv_color_hex(0xAAFBFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_NodesOptionsTabView, 255, LV_PART_MAIN | LV_STATE_DEFAULT);


    ui_TabPageFilter = lv_tabview_add_tab(ui_NodesOptionsTabView, "Filter");
    lv_obj_set_flex_flow(ui_TabPageFilter, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_TabPageFilter, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
    lv_obj_clear_flag(ui_TabPageFilter, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLL_ELASTIC);     /// Flags
    lv_obj_set_scroll_dir(ui_TabPageFilter, LV_DIR_VER);
    lv_obj_set_style_pad_row(ui_TabPageFilter, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_column(ui_TabPageFilter, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_NodesFilterUnknownLabel = lv_label_create(ui_TabPageFilter);
    lv_obj_set_height(ui_NodesFilterUnknownLabel, 30);
    lv_obj_set_width(ui_NodesFilterUnknownLabel, lv_pct(98));
    lv_obj_set_align(ui_NodesFilterUnknownLabel, LV_ALIGN_LEFT_MID);
    lv_label_set_long_mode(ui_NodesFilterUnknownLabel, LV_LABEL_LONG_DOT);
    lv_label_set_text(ui_NodesFilterUnknownLabel, "Unknown");
    lv_obj_set_style_radius(ui_NodesFilterUnknownLabel, 4, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_NodesFilterUnknownLabel, lv_color_hex(0x404040), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_NodesFilterUnknownLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_NodesFilterUnknownLabel, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_NodesFilterUnknownLabel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_NodesFilterUnknownLabel, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_NodesFilterUnknownLabel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_NodesFilterUnknownSwitch = lv_switch_create(ui_NodesFilterUnknownLabel);
    lv_obj_set_width(ui_NodesFilterUnknownSwitch, 50);
    lv_obj_set_height(ui_NodesFilterUnknownSwitch, 20);
    lv_obj_set_x(ui_NodesFilterUnknownSwitch, -10);
    lv_obj_set_y(ui_NodesFilterUnknownSwitch, -3);
    lv_obj_set_align(ui_NodesFilterUnknownSwitch, LV_ALIGN_RIGHT_MID);

    lv_obj_set_style_bg_color(ui_NodesFilterUnknownSwitch, lv_color_hex(0xB4B4B4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_NodesFilterUnknownSwitch, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_NodesFilterUnknownSwitch, lv_color_hex(0x606060), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_NodesFilterUnknownSwitch, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_NodesFilterUnknownSwitch, lv_color_hex(0x8FF498), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_NodesFilterUnknownSwitch, 255, LV_PART_MAIN | LV_STATE_CHECKED);

    lv_obj_set_style_bg_color(ui_NodesFilterUnknownSwitch, lv_color_hex(0x606060), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_NodesFilterUnknownSwitch, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_NodesFilterUnknownSwitch, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_NodesFilterUnknownSwitch, 255, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_NodesFilterUnknownSwitch, lv_color_hex(0x67EA94), LV_PART_INDICATOR | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_NodesFilterUnknownSwitch, 255, LV_PART_INDICATOR | LV_STATE_CHECKED);


    ui_NodesFilterOfflineLabel = lv_label_create(ui_TabPageFilter);
    lv_obj_set_height(ui_NodesFilterOfflineLabel, 30);
    lv_obj_set_width(ui_NodesFilterOfflineLabel, lv_pct(98));
    lv_obj_set_align(ui_NodesFilterOfflineLabel, LV_ALIGN_LEFT_MID);
    lv_label_set_long_mode(ui_NodesFilterOfflineLabel, LV_LABEL_LONG_DOT);
    lv_label_set_text(ui_NodesFilterOfflineLabel, "Offline");
    lv_obj_set_style_radius(ui_NodesFilterOfflineLabel, 4, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_NodesFilterOfflineLabel, lv_color_hex(0x404040), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_NodesFilterOfflineLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_NodesFilterOfflineLabel, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_NodesFilterOfflineLabel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_NodesFilterOfflineLabel, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_NodesFilterOfflineLabel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_NodesFilterOfflineSwitch = lv_switch_create(ui_NodesFilterOfflineLabel);
    lv_obj_set_width(ui_NodesFilterOfflineSwitch, 50);
    lv_obj_set_height(ui_NodesFilterOfflineSwitch, 20);
    lv_obj_set_x(ui_NodesFilterOfflineSwitch, -10);
    lv_obj_set_y(ui_NodesFilterOfflineSwitch, -3);
    lv_obj_set_align(ui_NodesFilterOfflineSwitch, LV_ALIGN_RIGHT_MID);
    lv_obj_set_style_border_color(ui_NodesFilterOfflineSwitch, lv_color_hex(0x606060), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_NodesFilterOfflineSwitch, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_NodesFilterOfflineSwitch, lv_color_hex(0x606060), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_NodesFilterOfflineSwitch, 255, LV_PART_MAIN | LV_STATE_CHECKED);

    lv_obj_set_style_bg_color(ui_NodesFilterOfflineSwitch, lv_color_hex(0x606060), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_NodesFilterOfflineSwitch, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_NodesFilterOfflineSwitch, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_NodesFilterOfflineSwitch, 255, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_NodesFilterOfflineSwitch, lv_color_hex(0x67EA94), LV_PART_INDICATOR | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_NodesFilterOfflineSwitch, 255, LV_PART_INDICATOR | LV_STATE_CHECKED);


    ui_NodesFilterMQTTLabel = lv_label_create(ui_TabPageFilter);
    lv_obj_set_height(ui_NodesFilterMQTTLabel, 30);
    lv_obj_set_width(ui_NodesFilterMQTTLabel, lv_pct(98));
    lv_obj_set_align(ui_NodesFilterMQTTLabel, LV_ALIGN_LEFT_MID);
    lv_label_set_long_mode(ui_NodesFilterMQTTLabel, LV_LABEL_LONG_DOT);
    lv_label_set_text(ui_NodesFilterMQTTLabel, "MQTT");
    lv_obj_set_style_radius(ui_NodesFilterMQTTLabel, 4, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_NodesFilterMQTTLabel, lv_color_hex(0x404040), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_NodesFilterMQTTLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_NodesFilterMQTTLabel, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_NodesFilterMQTTLabel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_NodesFilterMQTTLabel, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_NodesFilterMQTTLabel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_NodesFilterMQTTSwitch = lv_switch_create(ui_NodesFilterMQTTLabel);
    lv_obj_set_width(ui_NodesFilterMQTTSwitch, 50);
    lv_obj_set_height(ui_NodesFilterMQTTSwitch, 20);
    lv_obj_set_x(ui_NodesFilterMQTTSwitch, -10);
    lv_obj_set_y(ui_NodesFilterMQTTSwitch, -3);
    lv_obj_set_align(ui_NodesFilterMQTTSwitch, LV_ALIGN_RIGHT_MID);
    lv_obj_set_style_border_color(ui_NodesFilterMQTTSwitch, lv_color_hex(0x606060), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_NodesFilterMQTTSwitch, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_NodesFilterMQTTSwitch, lv_color_hex(0x8FF498), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_NodesFilterMQTTSwitch, 255, LV_PART_MAIN | LV_STATE_CHECKED);

    lv_obj_set_style_bg_color(ui_NodesFilterMQTTSwitch, lv_color_hex(0x606060), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_NodesFilterMQTTSwitch, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_NodesFilterMQTTSwitch, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_NodesFilterMQTTSwitch, 255, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_NodesFilterMQTTSwitch, lv_color_hex(0x67EA94), LV_PART_INDICATOR | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_NodesFilterMQTTSwitch, 255, LV_PART_INDICATOR | LV_STATE_CHECKED);


    ui_NodesFilterPositionLabel = lv_label_create(ui_TabPageFilter);
    lv_obj_set_height(ui_NodesFilterPositionLabel, 30);
    lv_obj_set_width(ui_NodesFilterPositionLabel, lv_pct(98));
    lv_obj_set_align(ui_NodesFilterPositionLabel, LV_ALIGN_LEFT_MID);
    lv_label_set_long_mode(ui_NodesFilterPositionLabel, LV_LABEL_LONG_DOT);
    lv_label_set_text(ui_NodesFilterPositionLabel, "Position");
    lv_obj_set_style_radius(ui_NodesFilterPositionLabel, 4, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_NodesFilterPositionLabel, lv_color_hex(0x404040), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_NodesFilterPositionLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_NodesFilterPositionLabel, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_NodesFilterPositionLabel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_NodesFilterPositionLabel, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_NodesFilterPositionLabel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_NodesFilterPositionSwitch = lv_switch_create(ui_NodesFilterPositionLabel);
    lv_obj_set_width(ui_NodesFilterPositionSwitch, 50);
    lv_obj_set_height(ui_NodesFilterPositionSwitch, 20);
    lv_obj_set_x(ui_NodesFilterPositionSwitch, -10);
    lv_obj_set_y(ui_NodesFilterPositionSwitch, -3);
    lv_obj_set_align(ui_NodesFilterPositionSwitch, LV_ALIGN_RIGHT_MID);
    lv_obj_set_style_border_color(ui_NodesFilterPositionSwitch, lv_color_hex(0x606060), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_NodesFilterPositionSwitch, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_NodesFilterPositionSwitch, lv_color_hex(0x8FF498), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_NodesFilterPositionSwitch, 255, LV_PART_MAIN | LV_STATE_CHECKED);

    lv_obj_set_style_bg_color(ui_NodesFilterPositionSwitch, lv_color_hex(0x606060), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_NodesFilterPositionSwitch, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_NodesFilterPositionSwitch, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_NodesFilterPositionSwitch, 255, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_NodesFilterPositionSwitch, lv_color_hex(0x67EA94), LV_PART_INDICATOR | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_NodesFilterPositionSwitch, 255, LV_PART_INDICATOR | LV_STATE_CHECKED);


    ui_NodesFilterNameLabel = lv_label_create(ui_TabPageFilter);
    lv_obj_set_height(ui_NodesFilterNameLabel, 30);
    lv_obj_set_width(ui_NodesFilterNameLabel, lv_pct(98));
    lv_obj_set_align(ui_NodesFilterNameLabel, LV_ALIGN_LEFT_MID);
    lv_label_set_long_mode(ui_NodesFilterNameLabel, LV_LABEL_LONG_DOT);
    lv_label_set_text(ui_NodesFilterNameLabel, "Name");
    lv_obj_set_style_radius(ui_NodesFilterNameLabel, 4, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_NodesFilterNameLabel, lv_color_hex(0x404040), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_NodesFilterNameLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_NodesFilterNameLabel, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_NodesFilterNameLabel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_NodesFilterNameLabel, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_NodesFilterNameLabel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_NodesFilterNameArea = lv_textarea_create(ui_NodesFilterNameLabel);
    lv_obj_set_width(ui_NodesFilterNameArea, lv_pct(60));
    lv_obj_set_height(ui_NodesFilterNameArea, LV_SIZE_CONTENT);    /// 24
    lv_obj_set_x(ui_NodesFilterNameArea, -40);
    lv_obj_set_y(ui_NodesFilterNameArea, -3);
    lv_obj_set_align(ui_NodesFilterNameArea, LV_ALIGN_BOTTOM_RIGHT);
    lv_textarea_set_max_length(ui_NodesFilterNameArea, 237);
    lv_textarea_set_placeholder_text(ui_NodesFilterNameArea, "!Enter filter ...");
    lv_textarea_set_one_line(ui_NodesFilterNameArea, true);
    lv_obj_add_state(ui_NodesFilterNameArea, LV_STATE_FOCUSED);       /// States
    lv_obj_add_flag(ui_NodesFilterNameArea, LV_OBJ_FLAG_SCROLL_ONE);     /// Flags
    lv_obj_set_scrollbar_mode(ui_NodesFilterNameArea, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_pad_left(ui_NodesFilterNameArea, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_NodesFilterNameArea, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_NodesFilterNameArea, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_NodesFilterNameArea, 1, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_KeyboardButton5 = lv_btn_create(ui_NodesFilterNameLabel);
    lv_obj_set_pos(ui_KeyboardButton5, -10, -3);
    lv_obj_set_size(ui_KeyboardButton5, 25, 24);
    lv_obj_set_align(ui_KeyboardButton5, LV_ALIGN_BOTTOM_RIGHT);
    lv_obj_add_flag(ui_KeyboardButton5, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_KeyboardButton5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_KeyboardButton5, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_KeyboardButton5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_KeyboardButton5, &img_keyboard_image, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_recolor(ui_KeyboardButton5, lv_color_hex(0x373737), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_recolor_opa(ui_KeyboardButton5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_KeyboardButton5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_KeyboardButton5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);


    ui_TabPageHighlight = lv_tabview_add_tab(ui_NodesOptionsTabView, "HighLight");
    lv_obj_set_flex_flow(ui_TabPageHighlight, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_TabPageHighlight, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
    lv_obj_clear_flag(ui_TabPageHighlight,
                      LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                      LV_OBJ_FLAG_SCROLL_ELASTIC);     /// Flags
    lv_obj_set_scroll_dir(ui_TabPageHighlight, LV_DIR_VER);
    lv_obj_set_style_pad_row(ui_TabPageHighlight, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_column(ui_TabPageHighlight, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_NodesHLActiveChatLabel = lv_label_create(ui_TabPageHighlight);
    lv_obj_set_height(ui_NodesHLActiveChatLabel, 30);
    lv_obj_set_width(ui_NodesHLActiveChatLabel, lv_pct(98));
    lv_obj_set_align(ui_NodesHLActiveChatLabel, LV_ALIGN_LEFT_MID);
    lv_label_set_long_mode(ui_NodesHLActiveChatLabel, LV_LABEL_LONG_DOT);
    lv_label_set_text(ui_NodesHLActiveChatLabel, "Active Chat");
    lv_obj_set_style_radius(ui_NodesHLActiveChatLabel, 4, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_NodesHLActiveChatLabel, lv_color_hex(0x404040), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_NodesHLActiveChatLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_NodesHLActiveChatLabel, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_NodesHLActiveChatLabel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_NodesHLActiveChatLabel, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_NodesHLActiveChatLabel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_NodesHLActiveChatSwitch = lv_switch_create(ui_NodesHLActiveChatLabel);
    lv_obj_set_width(ui_NodesHLActiveChatSwitch, 50);
    lv_obj_set_height(ui_NodesHLActiveChatSwitch, 20);
    lv_obj_set_x(ui_NodesHLActiveChatSwitch, -10);
    lv_obj_set_y(ui_NodesHLActiveChatSwitch, -3);
    lv_obj_set_align(ui_NodesHLActiveChatSwitch, LV_ALIGN_RIGHT_MID);
    lv_obj_set_style_border_color(ui_NodesHLActiveChatSwitch, lv_color_hex(0x606060), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_NodesHLActiveChatSwitch, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_NodesHLActiveChatSwitch, lv_color_hex(0x8FF498), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_NodesHLActiveChatSwitch, 255, LV_PART_MAIN | LV_STATE_CHECKED);

    lv_obj_set_style_bg_color(ui_NodesHLActiveChatSwitch, lv_color_hex(0x606060), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_NodesHLActiveChatSwitch, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_NodesHLActiveChatSwitch, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_NodesHLActiveChatSwitch, 255, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_NodesHLActiveChatSwitch, lv_color_hex(0x67EA94), LV_PART_INDICATOR | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_NodesHLActiveChatSwitch, 255, LV_PART_INDICATOR | LV_STATE_CHECKED);


    ui_NodesHLPositionLabel = lv_label_create(ui_TabPageHighlight);
    lv_obj_set_height(ui_NodesHLPositionLabel, 30);
    lv_obj_set_width(ui_NodesHLPositionLabel, lv_pct(98));
    lv_obj_set_align(ui_NodesHLPositionLabel, LV_ALIGN_LEFT_MID);
    lv_label_set_long_mode(ui_NodesHLPositionLabel, LV_LABEL_LONG_DOT);
    lv_label_set_text(ui_NodesHLPositionLabel, "Position");
    lv_obj_set_style_radius(ui_NodesHLPositionLabel, 4, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_NodesHLPositionLabel, lv_color_hex(0x404040), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_NodesHLPositionLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_NodesHLPositionLabel, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_NodesHLPositionLabel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_NodesHLPositionLabel, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_NodesHLPositionLabel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_NodesHLPositionSwitch = lv_switch_create(ui_NodesHLPositionLabel);
    lv_obj_set_width(ui_NodesHLPositionSwitch, 50);
    lv_obj_set_height(ui_NodesHLPositionSwitch, 20);
    lv_obj_set_x(ui_NodesHLPositionSwitch, -10);
    lv_obj_set_y(ui_NodesHLPositionSwitch, -3);
    lv_obj_set_align(ui_NodesHLPositionSwitch, LV_ALIGN_RIGHT_MID);
    lv_obj_set_style_border_color(ui_NodesHLPositionSwitch, lv_color_hex(0x606060), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_NodesHLPositionSwitch, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_NodesHLPositionSwitch, lv_color_hex(0x8FF498), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_NodesHLPositionSwitch, 255, LV_PART_MAIN | LV_STATE_CHECKED);

    lv_obj_set_style_bg_color(ui_NodesHLPositionSwitch, lv_color_hex(0x606060), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_NodesHLPositionSwitch, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_NodesHLPositionSwitch, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_NodesHLPositionSwitch, 255, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_NodesHLPositionSwitch, lv_color_hex(0x67EA94), LV_PART_INDICATOR | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_NodesHLPositionSwitch, 255, LV_PART_INDICATOR | LV_STATE_CHECKED);


    ui_NodesHLTelemetryLabel = lv_label_create(ui_TabPageHighlight);
    lv_obj_set_height(ui_NodesHLTelemetryLabel, 30);
    lv_obj_set_width(ui_NodesHLTelemetryLabel, lv_pct(98));
    lv_obj_set_align(ui_NodesHLTelemetryLabel, LV_ALIGN_LEFT_MID);
    lv_label_set_long_mode(ui_NodesHLTelemetryLabel, LV_LABEL_LONG_DOT);
    lv_label_set_text(ui_NodesHLTelemetryLabel, "Telemetry");
    lv_obj_set_style_radius(ui_NodesHLTelemetryLabel, 4, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_NodesHLTelemetryLabel, lv_color_hex(0x404040), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_NodesHLTelemetryLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_NodesHLTelemetryLabel, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_NodesHLTelemetryLabel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_NodesHLTelemetryLabel, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_NodesHLTelemetryLabel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_NodesHLTelemetrySwitch = lv_switch_create(ui_NodesHLTelemetryLabel);
    lv_obj_set_width(ui_NodesHLTelemetrySwitch, 50);
    lv_obj_set_height(ui_NodesHLTelemetrySwitch, 20);
    lv_obj_set_x(ui_NodesHLTelemetrySwitch, -10);
    lv_obj_set_y(ui_NodesHLTelemetrySwitch, -3);
    lv_obj_set_align(ui_NodesHLTelemetrySwitch, LV_ALIGN_RIGHT_MID);
    lv_obj_set_style_border_color(ui_NodesHLTelemetrySwitch, lv_color_hex(0x606060), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_NodesHLTelemetrySwitch, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_NodesHLTelemetrySwitch, lv_color_hex(0x8FF498), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_NodesHLTelemetrySwitch, 255, LV_PART_MAIN | LV_STATE_CHECKED);

    lv_obj_set_style_bg_color(ui_NodesHLTelemetrySwitch, lv_color_hex(0x606060), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_NodesHLTelemetrySwitch, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_NodesHLTelemetrySwitch, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_NodesHLTelemetrySwitch, 255, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_NodesHLTelemetrySwitch, lv_color_hex(0x67EA94), LV_PART_INDICATOR | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_NodesHLTelemetrySwitch, 255, LV_PART_INDICATOR | LV_STATE_CHECKED);


    ui_NodesHLIAQLabel = lv_label_create(ui_TabPageHighlight);
    lv_obj_set_height(ui_NodesHLIAQLabel, 30);
    lv_obj_set_width(ui_NodesHLIAQLabel, lv_pct(98));
    lv_obj_set_align(ui_NodesHLIAQLabel, LV_ALIGN_LEFT_MID);
    lv_label_set_long_mode(ui_NodesHLIAQLabel, LV_LABEL_LONG_DOT);
    lv_label_set_text(ui_NodesHLIAQLabel, "IAQ");
    lv_obj_set_style_radius(ui_NodesHLIAQLabel, 4, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_NodesHLIAQLabel, lv_color_hex(0x404040), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_NodesHLIAQLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_NodesHLIAQLabel, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_NodesHLIAQLabel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_NodesHLIAQLabel, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_NodesHLIAQLabel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_NodesHLIAQSwitch = lv_switch_create(ui_NodesHLIAQLabel);
    lv_obj_set_width(ui_NodesHLIAQSwitch, 50);
    lv_obj_set_height(ui_NodesHLIAQSwitch, 20);
    lv_obj_set_x(ui_NodesHLIAQSwitch, -10);
    lv_obj_set_y(ui_NodesHLIAQSwitch, -3);
    lv_obj_set_align(ui_NodesHLIAQSwitch, LV_ALIGN_RIGHT_MID);
    lv_obj_set_style_border_color(ui_NodesHLIAQSwitch, lv_color_hex(0x606060), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_NodesHLIAQSwitch, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_NodesHLIAQSwitch, lv_color_hex(0x8FF498), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_NodesHLIAQSwitch, 255, LV_PART_MAIN | LV_STATE_CHECKED);

    lv_obj_set_style_bg_color(ui_NodesHLIAQSwitch, lv_color_hex(0x606060), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_NodesHLIAQSwitch, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_NodesHLIAQSwitch, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_NodesHLIAQSwitch, 255, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_NodesHLIAQSwitch, lv_color_hex(0x67EA94), LV_PART_INDICATOR | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_NodesHLIAQSwitch, 255, LV_PART_INDICATOR | LV_STATE_CHECKED);


    ui_NodesHLNameLabel = lv_label_create(ui_TabPageHighlight);
    lv_obj_set_height(ui_NodesHLNameLabel, 30);
    lv_obj_set_width(ui_NodesHLNameLabel, lv_pct(98));
    lv_obj_set_align(ui_NodesHLNameLabel, LV_ALIGN_LEFT_MID);
    lv_label_set_long_mode(ui_NodesHLNameLabel, LV_LABEL_LONG_DOT);
    lv_label_set_text(ui_NodesHLNameLabel, "Name");
    lv_obj_set_style_radius(ui_NodesHLNameLabel, 4, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_NodesHLNameLabel, lv_color_hex(0x404040), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_NodesHLNameLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_NodesHLNameLabel, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_NodesHLNameLabel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_NodesHLNameLabel, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_NodesHLNameLabel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_NodesHLNameArea = lv_textarea_create(ui_NodesHLNameLabel);
    lv_obj_set_width(ui_NodesHLNameArea, lv_pct(60));
    lv_obj_set_height(ui_NodesHLNameArea, LV_SIZE_CONTENT);    /// 24
    lv_obj_set_x(ui_NodesHLNameArea, -40);
    lv_obj_set_y(ui_NodesHLNameArea, -3);
    lv_obj_set_align(ui_NodesHLNameArea, LV_ALIGN_BOTTOM_RIGHT);
    lv_textarea_set_max_length(ui_NodesHLNameArea, 237);
    lv_textarea_set_placeholder_text(ui_NodesHLNameArea, "Enter filter ...");
    lv_textarea_set_one_line(ui_NodesHLNameArea, true);
    lv_obj_add_state(ui_NodesHLNameArea, LV_STATE_FOCUSED);       /// States
    lv_obj_add_flag(ui_NodesHLNameArea, LV_OBJ_FLAG_SCROLL_ONE);     /// Flags
    lv_obj_set_scrollbar_mode(ui_NodesHLNameArea, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_pad_left(ui_NodesHLNameArea, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_NodesHLNameArea, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_NodesHLNameArea, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_NodesHLNameArea, 1, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_KeyboardButton6 = lv_btn_create(ui_NodesHLNameLabel);
    lv_obj_set_pos(ui_KeyboardButton6, -10, -3);
    lv_obj_set_size(ui_KeyboardButton6, 25, 24);
    lv_obj_set_align(ui_KeyboardButton6, LV_ALIGN_BOTTOM_RIGHT);
    lv_obj_add_flag(ui_KeyboardButton6, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_KeyboardButton6, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_KeyboardButton6, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_KeyboardButton6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_KeyboardButton6, &img_keyboard_image, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_recolor(ui_KeyboardButton6, lv_color_hex(0x373737), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_recolor_opa(ui_KeyboardButton6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_KeyboardButton6, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_KeyboardButton6, 0, LV_PART_MAIN | LV_STATE_DEFAULT);


    // lvgl v9 tabview buttons are not btn-matrix anymore but array of buttons
    // see https://forum.lvgl.io/t/style-a-tabview-widget-in-v9-0-0/14747

    lv_obj_t* tab_buttons = lv_tabview_get_tab_bar(ui_NodesOptionsTabView);

    static lv_style_t style_btn_default;
    lv_style_init(&style_btn_default);
    lv_style_set_text_color(&style_btn_default, lv_color_hex(0xA0A0A0));
    lv_style_set_bg_color(&style_btn_default, lv_color_hex(0x303030));
    lv_style_set_bg_opa(&style_btn_default, LV_OPA_COVER);
    lv_style_set_border_color(&style_btn_default, lv_color_hex(0x505050));
    lv_style_set_border_opa(&style_btn_default, LV_OPA_COVER);
    lv_style_set_border_width(&style_btn_default, 1);
    lv_style_set_border_side(&style_btn_default, LV_BORDER_SIDE_FULL);

    static lv_style_t style_btn_active;
    lv_style_init(&style_btn_active);
    lv_style_set_text_color(&style_btn_active, lv_color_hex(0xFFFFFF));
    lv_style_set_bg_color(&style_btn_active, lv_color_hex(0x303030));
    lv_style_set_bg_opa(&style_btn_active, LV_OPA_COVER);
    lv_style_set_border_color(&style_btn_active, lv_color_hex(0xff67ea94));
    lv_style_set_border_opa(&style_btn_active, LV_OPA_COVER);
    lv_style_set_border_width(&style_btn_active, 3);
    lv_style_set_border_side(&style_btn_active, LV_BORDER_SIDE_BOTTOM);

    static lv_style_t style_btn_pressed;
    lv_style_init(&style_btn_pressed);
    lv_style_set_text_color(&style_btn_pressed, lv_color_hex(0xFFFFFF));
    lv_style_set_bg_color(&style_btn_pressed, lv_color_hex(0xff67ea94));
    lv_style_set_bg_opa(&style_btn_pressed, LV_OPA_COVER);
    lv_style_set_border_color(&style_btn_pressed, lv_color_hex(0xff67ea94));
    lv_style_set_border_opa(&style_btn_pressed, LV_OPA_COVER);
    lv_style_set_border_width(&style_btn_pressed, 3);
    lv_style_set_border_side(&style_btn_pressed, LV_BORDER_SIDE_BOTTOM);

    for(int i = 0; i < tab_buttons->spec_attr->child_cnt; i++) {
        if (tab_buttons->spec_attr->children[i]->class_p == &lv_button_class) {
            lv_obj_add_style(tab_buttons->spec_attr->children[i], &style_btn_default, LV_STATE_DEFAULT);
            lv_obj_add_style(tab_buttons->spec_attr->children[i], &style_btn_active, LV_STATE_CHECKED);
            lv_obj_add_style(tab_buttons->spec_attr->children[i], &style_btn_pressed, LV_STATE_PRESSED);
        }
    }
}