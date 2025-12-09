#pragma once
// clang-format off

// Combos
enum combo_events {
    // C_CTL,
    // C_GUI,
    // C_HYPR1,
    // C_HYPR2,
    C_ENT,
};

// const uint16_t PROGMEM ctl_combo[] = {RAISE, KC_T, COMBO_END};
// const uint16_t PROGMEM gui_combo[] = {RAISE, KC_Z, COMBO_END};
// const uint16_t PROGMEM hypr1_combo[] = {RAISE, KC_X, COMBO_END};
// const uint16_t PROGMEM hypr2_combo[] = {RAISE, KC_C, COMBO_END};
const uint16_t PROGMEM ent_combo[]   = {KC_COMM, KC_DOT, COMBO_END};

combo_t key_combos[] = {
    // [C_CTL] = COMBO(ctl_combo, KC_LCTL),
    // [C_GUI] = COMBO(gui_combo, KC_LGUI),
    // [C_HYPR1] = COMBO_ACTION(hypr1_combo),
    // [C_HYPR2] = COMBO_ACTION(hypr2_combo),
    [C_ENT] = COMBO(ent_combo, KC_ENT),
};

// void process_combo_event(uint16_t combo_index, bool pressed) {
//   switch(combo_index) {
//     case C_HYPR1:
//       if (pressed) {
//         layer_on(_HYPRLAND);
//         register_code16(KC_LGUI);
//       } else {
//         layer_off(_HYPRLAND);
//         unregister_code16(KC_LGUI);
//       }
//       break;
//     case C_HYPR2:
//       if (pressed) {
//         layer_on(_HYPRLAND);
//         register_code16(KC_LGUI);
//         register_code16(KC_LSFT);
//       } else {
//         layer_off(_HYPRLAND);
//         unregister_code16(KC_LGUI);
//         unregister_code16(KC_LSFT);
//       }
//       break;
//   }
// }

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    XXXXXXX,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
        KC_BSPC, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                      KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    XXXXXXX, XXXXXXX, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
        KC_LCTL, LOWER,   KC_LGUI, KC_LALT, RAISE,   KC_SPC,  SH_MON,  LOWER,   KC_LGUI, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, LOWER
    ),

    [_COLEMAK] = LAYOUT(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    XXXXXXX,
        KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,                      KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_BSLS,
        KC_BSPC, KC_A,    KC_R,    KC_S,    KC_T,    KC_D,                      KC_H,    KC_N,    KC_E,    KC_I,    KC_O,    KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    XXXXXXX, XXXXXXX, KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
        KC_LCTL, LOWER,   KC_LGUI, KC_LALT, RAISE,   KC_SPC,  SH_MON,  LOWER,   KC_LGUI, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, LOWER
    ),

    [_LOWER] = LAYOUT(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    XXXXXXX,
        KC_TAB,  XXXXXXX, KC_F1,   KC_F2,   KC_F3,   KC_F4,                     XXXXXXX, KC_UNDS, KC_PLUS, XXXXXXX, XXXXXXX, XXXXXXX,
        KC_BSPC, XXXXXXX, KC_F5,   KC_F6,   KC_F7,   KC_F8,                     XXXXXXX, KC_MINUS,KC_EQL,  XXXXXXX, XXXXXXX, XXXXXXX,
        KC_LSFT, XXXXXXX, KC_F9,   KC_F10,  KC_F11,  KC_F12,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        KC_LCTL, LOWER,   KC_LGUI, KC_LALT, RAISE,   KC_SPC,  SH_MON,  LOWER,   KC_LGUI, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, LOWER
    ),

    [_RAISE] = LAYOUT(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    XXXXXXX,
        KC_TAB,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    XXXXXXX,
        KC_DEL,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                   KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_CAPS,
        KC_LSFT, KC_LBRC, KC_RBRC, KC_LCBR, KC_RCBR, KC_GRV,  XXXXXXX, XXXXXXX, KC_PIPE, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_RSFT,
        KC_LCTL, LOWER,   KC_LGUI, KC_LALT, RAISE,   KC_SPC,  SH_MON,  LOWER,   KC_LGUI, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, LOWER
    ),

    [_ADJUST] = LAYOUT(
        KC_ESC,  XXXXXXX, RGB_HUD, RGB_HUI, XXXXXXX, XXXXXXX,                   XXXXXXX, QWERTY,  COLEMAK, XXXXXXX, XXXXXXX, CG_TOGG,
        KC_TAB,  XXXXXXX, RGB_SAD, RGB_SAI, XXXXXXX, XXXXXXX,                   XXXXXXX, KC_VOLD, KC_VOLU, XXXXXXX, XXXXXXX, XXXXXXX,
        KC_BSPC, XXXXXXX, RGB_VAD, RGB_VAI, RGB_TOG, XXXXXXX,                   KC_PSCR, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        KC_LSFT, XXXXXXX, RGB_MOD, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        KC_LCTL, LOWER,   KC_LGUI, KC_LALT, RAISE,   KC_SPC,  SH_MON,  LOWER,   KC_LGUI, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, LOWER
    ),

    // [_HYPRLAND] = LAYOUT(
    //     KC_ESC,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    //     KC_TAB,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    //     KC_BSPC, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    //     KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    //     KC_LCTL, LOWER,   KC_LGUI, KC_LALT, RAISE,   KC_SPC,  SH_MON,  XXXXXXX, KC_ENT,  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, RAISE
    // ),

    // [_MAPLE] = LAYOUT(
    //     KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    XXXXXXX,
    //     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                      KC_Y,    KC_LSFT, KC_INS,  KC_HOME, KC_PGUP, KC_BSLS,
    //     KC_BSPC, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                      KC_H,    KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_QUOT,
    //     KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    XXXXXXX, XXXXXXX, KC_N,    KC_LCTL, KC_DEL,  KC_END,  KC_PGDN, KC_RSFT,
    //     KC_LCTL, LOWER,   KC_LGUI, KC_LALT, RAISE,   KC_SPC,  SH_MON,  XXXXXXX, KC_ENT,  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, RAISE
    // ),
};
