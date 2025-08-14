#pragma once
// clang-format off

// Combos
const uint16_t PROGMEM gui_combo[] = {LOWER, KC_R, COMBO_END};
const uint16_t PROGMEM alt_combo[] = {LOWER, KC_S, COMBO_END};
const uint16_t PROGMEM ctl_combo1[] = {LOWER, KC_T, COMBO_END};
const uint16_t PROGMEM ctl_combo2[] = {LOWER, KC_C, COMBO_END};

combo_t key_combos[] = {
    COMBO(gui_combo, KC_LGUI),
    COMBO(alt_combo, KC_LALT),
    COMBO(ctl_combo1, KC_LCTL),
    COMBO(ctl_combo2, KC_LCTL)
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_COLEMAK] = LAYOUT(
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
      KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,                      KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_BSLS,
      KC_BSPC, KC_A,    KC_R,    KC_S,    KC_T,    KC_D,                      KC_H,    KC_N,    KC_E,    KC_I,    KC_O,    KC_QUOT,
      KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,  KC_VOLD,  KC_VOLU,  KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, LOWER,  KC_SPC, KC_LCTL,  KC_LSFT,  RAISE,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
      ),

  [_LOWER] = LAYOUT(
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
      KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    XXXXXXX,
      KC_DEL,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   KC_GRV,  KC_MINS, KC_EQL,  KC_LPRN, KC_RPRN, KC_CAPS,
      _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, XXXXXXX, KC_LBRC, KC_RBRC, KC_LCBR, KC_RCBR, _______,
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, KC_SPC,  _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
      ),

  [_RAISE] = LAYOUT(
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
      KC_TAB,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   KC_VOLU, KC_BTN1, KC_BTN2, KC_WH_U, KC_WH_D, XXXXXXX,
      XXXXXXX, KC_LALT, KC_LGUI, KC_LSFT, KC_LCTL, XXXXXXX,                   KC_VOLD, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, XXXXXXX,
      _______, XXXXXXX, XXXXXXX, KC_LCTL, XXXXXXX, XXXXXXX, _______, _______, XXXXXXX, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  _______,
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, KC_ENT,  _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
      ),

  [_ADJUST] = LAYOUT(
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
      KC_TAB,  KC_F1,   KC_F2,   KC_F3,   KC_F4,  KC_INS,                     XXXXXXX, RGB_HUD, RGB_HUI, RGBRST,  XXXXXXX, XXXXXXX,
      XXXXXXX, KC_F5,   KC_F6,   KC_F7,   KC_F8,  KC_PSCR,                    XXXXXXX, RGB_SAD, RGB_SAI, RGB_MOD, XXXXXXX, XXXXXXX,
      _______, KC_F9,   KC_F10,  KC_F11,  KC_F12, XXXXXXX, _______, _______,  XXXXXXX, RGB_VAD, RGB_VAI, RGB_TOG, XXXXXXX, _______,
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, KC_ENT, _______, _______,  _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
  ),
};