#pragma once
// clang-format off

// Combos
enum combo_events {
    C_ENT,
};

const uint16_t PROGMEM ent_combo[]   = {KC_COMM, KC_DOT, COMBO_END};

combo_t key_combos[] = {
    [C_ENT] = COMBO(ent_combo, KC_ENT),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    XXXXXXX,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
        KC_BSPC, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                      KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    XXXXXXX, XXXXXXX, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
        KC_LCTL, LOWER,   KC_LGUI, KC_LALT, RAISE,   KC_SPC,  SH_MON,  LOWER,   KC_LGUI, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_LALT
    ),

    [_COLEMAK] = LAYOUT(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    XXXXXXX,
        KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,                      KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_BSLS,
        KC_BSPC, KC_A,    KC_R,    KC_S,    KC_T,    KC_D,                      KC_H,    KC_N,    KC_E,    KC_I,    KC_O,    KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    XXXXXXX, XXXXXXX, KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
        KC_LCTL, LOWER,   KC_LGUI, KC_LALT, RAISE,   KC_SPC,  SH_MON,  LOWER,   KC_LGUI, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_LALT
    ),

    [_LOWER] = LAYOUT(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    XXXXXXX,
        KC_TAB,  XXXXXXX, KC_F1,   KC_F2,   KC_F3,   KC_F4,                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        KC_BSPC, XXXXXXX, KC_F5,   KC_F6,   KC_F7,   KC_F8,                     KC_CAPS, MS_BTN1, MS_BTN2, XXXXXXX, XXXXXXX, XXXXXXX,
        KC_LSFT, XXXXXXX, KC_F9,   KC_F10,  KC_F11,  KC_F12,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        KC_LCTL, LOWER,   KC_LGUI, KC_LALT, RAISE,   KC_SPC,  SH_MON,  LOWER,   KC_LGUI, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LALT
    ),

    [_RAISE] = LAYOUT(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    XXXXXXX,
        KC_TAB,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSLS,
        KC_DEL,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                   KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_QUOT,
        KC_LSFT, KC_LBRC, KC_RBRC, KC_LCBR, KC_RCBR, KC_GRV,  XXXXXXX, XXXXXXX, KC_PIPE, KC_MINUS,KC_PLUS, KC_UNDS, KC_EQL,  KC_RSFT,
        KC_LCTL, LOWER,   KC_LGUI, KC_LALT, RAISE,   KC_SPC,  SH_MON,  LOWER,   KC_LGUI, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_LALT
    ),

    [_ADJUST] = LAYOUT(
        KC_ESC,  XXXXXXX, RGB_HUD, RGB_HUI, XXXXXXX, XXXXXXX,                   XXXXXXX, QWERTY,  COLEMAK, XXXXXXX, XXXXXXX, QK_LOCK,
        KC_TAB,  XXXXXXX, RGB_SAD, RGB_SAI, XXXXXXX, XXXXXXX,                   XXXXXXX, KC_VOLD, KC_VOLU, XXXXXXX, XXXXXXX, XXXXXXX,
        KC_BSPC, XXXXXXX, RGB_VAD, RGB_VAI, RGB_TOG, XXXXXXX,                   KC_PSCR, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        KC_LSFT, XXXXXXX, RGB_MOD, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        KC_LCTL, LOWER,   KC_LGUI, KC_LALT, RAISE,   KC_SPC,  SH_MON,  LOWER,   KC_LGUI, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_LALT
    ),
};
