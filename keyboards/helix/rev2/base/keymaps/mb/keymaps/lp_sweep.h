#pragma once
// clang-format off

// Combos
const uint16_t PROGMEM tab_combo[] = {KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM bspc_combo[] = {KC_C, KC_V, COMBO_END};
const uint16_t PROGMEM del_combo[] = {KC_M, KC_COMM, COMBO_END};
const uint16_t PROGMEM ent_combo[] = {KC_COMM, KC_DOT, COMBO_END};

const uint16_t PROGMEM gui_combo[] = {LOWER, KC_A, COMBO_END};
const uint16_t PROGMEM alt_combo[] = {LOWER, KC_R, COMBO_END};
const uint16_t PROGMEM ctl_combo[] = {LOWER, KC_T, COMBO_END};

combo_t key_combos[] = {
    COMBO(tab_combo, KC_TAB),
    COMBO(bspc_combo, KC_BSPC),
    COMBO(del_combo, KC_DEL),
    COMBO(ent_combo, KC_ENT),

    COMBO(gui_combo, KC_LGUI),
    COMBO(alt_combo, KC_LALT),
    COMBO(ctl_combo, KC_LCTL),
};

/*
TODO:
Ctrl + ` (...? is this needed? ctrl + j is better...)
Alt + Tab (not optimal)
Ctrl + shift + Tab (not optimal, need both hands, ...is this really needed???)
Ctrl + numbers(4,5) (two ctrl??)
oneshot shift (oneshot functionality doesn't seem to be working...)
shift for function keys (... just have callum style mod??)

change "toggle maximize panel" to a different keybind?

other notes:
Win + shift + S (need both hands)
Ctrl + shift + Q (need both hands)
combo for bcpc feels like a lot of effort compared to just pinky
needing to access a different layer just for ' seems troublesome. words like
"doesn't" aren't as easy to type anymore.

is it possible to activate multiple combos at the same time??
what if i press LOWER, S, T? does it activate ctrl and shift??
*/


/*

Test area for typing :)




*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_COLEMAK] = LAYOUT(
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
      XXXXXXX, KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,                      KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, XXXXXXX,
      XXXXXXX, KC_A,    KC_R,    KC_S,    KC_T,    KC_D,                      KC_H,    KC_N,    KC_E,    KC_I,    KC_O,    XXXXXXX,
      XXXXXXX, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    XXXXXXX, XXXXXXX, KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, XXXXXXX,
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, LOWER,   KC_SPC,  XXXXXXX, XXXXXXX, OSM(MOD_LSFT), RAISE,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
      ),

  [_LOWER] = LAYOUT(
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
      XXXXXXX, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    XXXXXXX,
      XXXXXXX, KC_LGUI, KC_LALT, KC_LSFT, KC_LCTL, XXXXXXX,                   KC_GRV,  KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, XXXXXXX,
      XXXXXXX, KC_ESC,  XXXXXXX, KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_BSLS, KC_QUOT, XXXXXXX, XXXXXXX, XXXXXXX,
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, XXXXXXX, XXXXXXX, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
      ),

  [_RAISE] = LAYOUT(
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
      XXXXXXX, KC_LGUI, KC_LALT, KC_LSFT, KC_LCTL, XXXXXXX,                   KC_CAPS, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, XXXXXXX,
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  XXXXXXX,
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, XXXXXXX, XXXXXXX, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
      ),

  [_ADJUST] = LAYOUT(
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
      XXXXXXX, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_INS,                    XXXXXXX, KC_VOLD, KC_VOLU, XXXXXXX, XXXXXXX, XXXXXXX,
      XXXXXXX, KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_PSCR,                   XXXXXXX, KC_LCTL, KC_LSFT, KC_LALT, KC_LGUI, XXXXXXX,
      XXXXXXX, KC_F9,   KC_F10,  KC_F11,  KC_F12,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, XXXXXXX, XXXXXXX, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
  ),
};


// const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
//   [_COLEMAK] = LAYOUT(
//       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//       XXXXXXX, KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,                      KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, XXXXXXX,
//       XXXXXXX, KC_A,    KC_R,    KC_S,    KC_T,    KC_D,                      KC_H,    KC_N,    KC_E,    KC_I,    KC_O,    XXXXXXX,
//       XXXXXXX, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,  XXXXXXX,  XXXXXXX,  KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, XXXXXXX,
//       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, LOWER,  KC_SPC, XXXXXXX,  XXXXXXX,  RAISE,   KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
//       ),

//   [_LOWER] = LAYOUT(
//       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//       XXXXXXX, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    XXXXXXX,
//       XXXXXXX, KC_LALT, KC_LGUI, KC_LSFT, KC_LCTL, XXXXXXX,                   KC_GRV,  KC_MINS, KC_EQL,  KC_LPRN, KC_RPRN, XXXXXXX,
//       XXXXXXX, KC_TAB,  KC_TAB,  KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_BSLS, KC_QUOT, KC_LBRC, KC_RBRC, XXXXXXX,
//       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, KC_ENT,  XXXXXXX, XXXXXXX, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
//       ),

//   [_RAISE] = LAYOUT(
//       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//       XXXXXXX, XXXXXXX, XXXXXXX, KC_BSPC, KC_DEL,  KC_ESC,                    KC_VOLU, KC_BTN1, KC_BTN2, KC_WH_U, KC_WH_D, XXXXXXX,
//       XXXXXXX, KC_LALT, KC_LGUI, KC_LSFT, KC_LCTL, XXXXXXX,                   KC_VOLD, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, XXXXXXX,
//       XXXXXXX, KC_TAB,  KC_TAB,  KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  XXXXXXX,
//       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, KC_ENT,  XXXXXXX, XXXXXXX, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
//       ),

//   [_ADJUST] = LAYOUT(
//       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//       XXXXXXX, KC_F1,   KC_F2,   KC_F3,   KC_F4,  KC_INS,                     XXXXXXX, RGB_HUD, RGB_HUI, RGBRST,  XXXXXXX, XXXXXXX,
//       XXXXXXX, KC_F5,   KC_F6,   KC_F7,   KC_F8,  KC_PSCR,                    XXXXXXX, RGB_SAD, RGB_SAI, RGB_MOD, XXXXXXX, XXXXXXX,
//       XXXXXXX, KC_F9,   KC_F10,  KC_F11,  KC_F12, KC_CAPS, XXXXXXX, XXXXXXX,  XXXXXXX, RGB_VAD, RGB_VAI, RGB_TOG, XXXXXXX, XXXXXXX,
//       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, KC_ENT, XXXXXXX, XXXXXXX,  _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
//   ),

// };