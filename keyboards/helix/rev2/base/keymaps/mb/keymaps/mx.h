// TODO. combine with lp. how to switch KC_LALT and KC_LGUI??
// currently unused because helix mx is acting up...

// work layout
// const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
//   [_COLEMAK] = LAYOUT(
//       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//       KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,                      KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_BSLS,
//       KC_BSPC, KC_A,    KC_R,    KC_S,    KC_T,    KC_D,                      KC_H,    KC_N,    KC_E,    KC_I,    KC_O,    KC_QUOT,
//       KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,  KC_VOLD,  KC_VOLU,  KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
//       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, LOWER,  KC_SPC, KC_LCTL,  KC_LSFT,  RAISE,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
//       ),

//   [_LOWER] = LAYOUT(
//       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//       KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    XXXXXXX,
//       KC_DEL,  KC_LALT, KC_LGUI, KC_LSFT, KC_LCTL, XXXXXXX,                   KC_GRV,  KC_MINS, KC_EQL,  KC_LPRN, KC_RPRN, KC_CAPS,
//       _______, XXXXXXX, XXXXXXX, KC_LCTL, XXXXXXX, XXXXXXX, _______, _______, XXXXXXX, KC_LBRC, KC_RBRC, KC_LCBR, KC_RCBR, _______,
//       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, KC_SPC,  _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
//       ),

//   [_RAISE] = LAYOUT(
//       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//       KC_TAB,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   KC_VOLU, KC_BTN1, KC_BTN2, KC_WH_U, KC_WH_D, XXXXXXX,
//       XXXXXXX, KC_LALT, KC_LGUI, KC_LSFT, KC_LCTL, XXXXXXX,                   KC_VOLD, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, XXXXXXX,
//       _______, XXXXXXX, XXXXXXX, KC_LCTL, XXXXXXX, XXXXXXX, _______, _______, XXXXXXX, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  _______,
//       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, KC_ENT,  _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
//       ),

//   [_ADJUST] = LAYOUT(
//       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//       KC_TAB,  KC_F1,   KC_F2,   KC_F3,   KC_F4,  KC_INS,                     XXXXXXX, RGB_HUD, RGB_HUI, RGBRST,  XXXXXXX, XXXXXXX,
//       XXXXXXX, KC_F5,   KC_F6,   KC_F7,   KC_F8,  KC_PSCR,                    XXXXXXX, RGB_SAD, RGB_SAI, RGB_MOD, XXXXXXX, XXXXXXX,
//       _______, KC_F9,   KC_F10,  KC_F11,  KC_F12, XXXXXXX, _______, _______,  XXXXXXX, RGB_VAD, RGB_VAI, RGB_TOG, XXXXXXX, _______,
//       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, KC_ENT, _______, _______,  _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
//   ),
// };

// gaming layout
// const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

//   [_QWERTY] = LAYOUT(
//       KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    XXXXXXX,
//       KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_BSLS,
//       KC_BSPC, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                      KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,    KC_QUOT,
//       KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    XXXXXXX, XXXXXXX, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
//       KC_LCTL, LOWER,   KC_LALT, KC_LGUI, RAISE,   KC_SPC,  XXXXXXX,  XXXXXXX,  KC_ENT,  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, RAISE
//       ),

//   [_COLEMAK] = LAYOUT(
//       KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    XXXXXXX,
//       KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,                      KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_BSLS,
//       KC_BSPC, KC_A,    KC_R,    KC_S,    KC_T,    KC_D,                      KC_H,    KC_N,    KC_E,    KC_I,    KC_O,    KC_QUOT,
//       KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    XXXXXXX,  KC_VOLU,  KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
//       KC_LCTL, LOWER,   KC_LALT, KC_LGUI, RAISE,   KC_SPC,  XXXXXXX,  KC_VOLD,  KC_ENT,  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, RAISE
//       ),

//   [_DVORAK] = LAYOUT(
//       KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
//       KC_TAB,  KC_QUOT, KC_COMM, KC_DOT,  KC_P,    KC_Y,                      KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    KC_DEL,
//       KC_LCTL, KC_A,    KC_O,    KC_E,    KC_U,    KC_I,                      KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    KC_SLSH,
//       KC_LSFT, KC_SCLN, KC_Q,    KC_J,    KC_K,    KC_X,    KC_LBRC, KC_RBRC, KC_B,    KC_M,    KC_W,    KC_V,    KC_Z,    KC_ENT ,
//       ADJUST,  KC_ESC,  KC_LALT, KC_LGUI, EISU,    LOWER,   KC_SPC,  KC_SPC,  RAISE,   KANA,    KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
//       ),

//   [_LOWER] = LAYOUT(
//       KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    XXXXXXX,
//       KC_TAB,  XXXXXXX, KC_F1,   KC_F2,   KC_F3,   KC_F4,                     XXXXXXX, KC_7,    KC_8,    KC_9,    XXXXXXX, XXXXXXX,
//       KC_BSPC, XXXXXXX, KC_F5,   KC_F6,   KC_F7,   KC_F8,                     XXXXXXX, KC_4,    KC_5,    KC_6,    XXXXXXX, XXXXXXX,
//       KC_LSFT, XXXXXXX, KC_F9,   KC_F10,  KC_F11,  KC_F12,  XXXXXXX, XXXXXXX, XXXXXXX, KC_1,    KC_2,    KC_3,    XXXXXXX, XXXXXXX,
//       KC_LCTL, LOWER,   KC_LALT, KC_LGUI, RAISE,   KC_SPC,  XXXXXXX, XXXXXXX, KC_ENT,  KC_0,    KC_DOT,  XXXXXXX, XXXXXXX, RAISE
//       ),

//   [_RAISE] = LAYOUT(
//       KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    XXXXXXX,
//       KC_TAB,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    XXXXXXX,
//       KC_DEL,  KC_GRV,  XXXXXXX, KC_LPRN, KC_RPRN, XXXXXXX,                   KC_RIGHT_ANGLE_BRACKET, KC_MINS, KC_EQL, KC_AMPERSAND, KC_PIPE, KC_CAPS,
//       KC_LSFT, KC_LBRC, KC_RBRC, KC_LEFT_CURLY_BRACE, KC_RIGHT_CURLY_BRACE,  XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX,  KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_RSFT,
//       KC_RCTL, LOWER,   KC_LALT, KC_LGUI, RAISE,   KC_SPC, XXXXXXX, XXXXXXX, KC_ENT,  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, RAISE
//       ),

//   [_ADJUST] = LAYOUT(
//       KC_ESC,  XXXXXXX, RGB_HUD, RGB_HUI, RGBRST,  XXXXXXX,                   XXXXXXX, QWERTY, COLEMAK, XXXXXXX, XXXXXXX, XXXXXXX,
//       KC_TAB,  XXXXXXX, RGB_SAD, RGB_SAI, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//       KC_BSPC, XXXXXXX, RGB_VAD, RGB_VAI, RGB_TOG, XXXXXXX,                   KC_PSCR, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//       KC_LSFT, XXXXXXX, RGB_MOD, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//       KC_LCTL, LOWER,   KC_LALT, KC_LGUI, RAISE,   KC_SPC,  XXXXXXX,  XXXXXXX,  KC_ENT,  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, RAISE
//       ),

// };