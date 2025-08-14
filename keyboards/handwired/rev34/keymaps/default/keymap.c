// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layer_number {
    _COLEMAK,
    _LOWER,
    _RAISE,
    _ADJUST,
    _HYPRLAND,
};

enum custom_keycodes { COLEMAK = SAFE_RANGE, LOWER, RAISE, ADJUST, HYPRLAND };

// Combos
enum combo_events {
    C_HYPR1,
    C_HYPR2,

    C_TAB,
    C_BSPC,
    C_ENT,

    C_CTL,
    C_SFT,
    C_ALT,
    C_GUI,

    C_CTL_SFT,
    C_CTL_ALT,
    C_CTL_GUI,
    C_CTL_SFT_ALT,
    C_CTL_SFT_GUI,
    C_CTL_SFT_ALT_GUI,

    C_SFT_ALT,
    C_SFT_GUI,
    C_SFT_ALT_GUI,

    C_ALT_GUI,
};

const uint16_t PROGMEM hypr1_combo[] = {LOWER, KC_Z, COMBO_END};
const uint16_t PROGMEM hypr2_combo[] = {LOWER, KC_X, COMBO_END};
const uint16_t PROGMEM tab_combo[]   = {KC_W, KC_F, COMBO_END};
const uint16_t PROGMEM bspc_combo[]  = {KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM ent_combo[]   = {KC_COMM, KC_DOT, COMBO_END};

const uint16_t PROGMEM ctl_combo[] = {LOWER, KC_T, COMBO_END};
const uint16_t PROGMEM sft_combo[] = {LOWER, KC_S, COMBO_END};
const uint16_t PROGMEM alt_combo[] = {LOWER, KC_R, COMBO_END};
const uint16_t PROGMEM gui_combo[] = {LOWER, KC_A, COMBO_END};

const uint16_t PROGMEM ctl_sft_combo[]         = {LOWER, KC_S, KC_T, COMBO_END};
const uint16_t PROGMEM ctl_alt_combo[]         = {LOWER, KC_R, KC_T, COMBO_END};
const uint16_t PROGMEM ctl_gui_combo[]         = {LOWER, KC_A, KC_T, COMBO_END};
const uint16_t PROGMEM ctl_sft_alt_combo[]     = {LOWER, KC_R, KC_S, KC_T, COMBO_END};
const uint16_t PROGMEM ctl_sft_gui_combo[]     = {LOWER, KC_A, KC_S, KC_T, COMBO_END};
const uint16_t PROGMEM ctl_sft_alt_gui_combo[] = {LOWER, KC_A, KC_R, KC_S, KC_T, COMBO_END};

const uint16_t PROGMEM sft_alt_combo[]     = {LOWER, KC_R, KC_S, COMBO_END};
const uint16_t PROGMEM sft_gui_combo[]     = {LOWER, KC_A, KC_S, COMBO_END};
const uint16_t PROGMEM sft_alt_gui_combo[] = {LOWER, KC_A, KC_R, KC_S, COMBO_END};

const uint16_t PROGMEM alt_gui_combo[] = {LOWER, KC_A, KC_R, COMBO_END};

combo_t key_combos[] = {
    // clang-format off
    [C_HYPR1] = COMBO_ACTION(hypr1_combo),
    [C_HYPR2] = COMBO_ACTION(hypr2_combo),
    [C_TAB] = COMBO(tab_combo, KC_TAB),
    [C_BSPC] = COMBO(bspc_combo, KC_BSPC),
    [C_ENT] = COMBO(ent_combo, KC_ENT),

    [C_CTL] = COMBO(ctl_combo, KC_LCTL),
    [C_SFT] = COMBO(sft_combo, KC_LSFT),
    [C_ALT] = COMBO(alt_combo, KC_LALT),
    [C_GUI] = COMBO(gui_combo, KC_LGUI),

    [C_CTL_SFT] = COMBO_ACTION(ctl_sft_combo),
    [C_CTL_ALT] = COMBO_ACTION(ctl_alt_combo),
    [C_CTL_GUI] = COMBO_ACTION(ctl_gui_combo),
    [C_CTL_SFT_ALT] = COMBO_ACTION(ctl_sft_alt_combo),
    [C_CTL_SFT_GUI] = COMBO_ACTION(ctl_sft_gui_combo),
    [C_CTL_SFT_ALT_GUI] = COMBO_ACTION(ctl_sft_alt_gui_combo),

    [C_SFT_ALT] = COMBO_ACTION(sft_alt_combo),
    [C_SFT_GUI] = COMBO_ACTION(sft_gui_combo),
    [C_SFT_ALT_GUI] = COMBO_ACTION(sft_alt_gui_combo),

    [C_ALT_GUI] = COMBO_ACTION(alt_gui_combo),
    // clang-format on
};

void process_combo_event(uint16_t combo_index, bool pressed) {
    switch (combo_index) {
    case C_HYPR1:
        if (pressed) {
            layer_on(_HYPRLAND);
            register_code16(KC_LGUI);
        } else {
            layer_off(_HYPRLAND);
            unregister_code16(KC_LGUI);
        }
        break;
    case C_HYPR2:
        if (pressed) {
            layer_on(_HYPRLAND);
            register_code16(KC_LGUI);
            register_code16(KC_LSFT);
        } else {
            layer_off(_HYPRLAND);
            unregister_code16(KC_LGUI);
            unregister_code16(KC_LSFT);
        }
        break;
    case C_CTL_SFT:
        if (pressed) {
            register_code16(KC_LCTL);
            register_code16(KC_LSFT);
        } else {
            unregister_code16(KC_LCTL);
            unregister_code16(KC_LSFT);
        }
        break;
    case C_CTL_ALT:
        if (pressed) {
            register_code16(KC_LCTL);
            register_code16(KC_LALT);
        } else {
            unregister_code16(KC_LCTL);
            unregister_code16(KC_LALT);
        }
        break;
    case C_CTL_GUI:
        if (pressed) {
            register_code16(KC_LCTL);
            register_code16(KC_LGUI);
        } else {
            unregister_code16(KC_LCTL);
            unregister_code16(KC_LGUI);
        }
        break;
    case C_CTL_SFT_ALT:
        if (pressed) {
            register_code16(KC_LCTL);
            register_code16(KC_LSFT);
            register_code16(KC_LALT);
        } else {
            unregister_code16(KC_LCTL);
            unregister_code16(KC_LSFT);
            unregister_code16(KC_LALT);
        }
        break;
    case C_CTL_SFT_GUI:
        if (pressed) {
            register_code16(KC_LCTL);
            register_code16(KC_LSFT);
            register_code16(KC_LGUI);
        } else {
            unregister_code16(KC_LCTL);
            unregister_code16(KC_LSFT);
            unregister_code16(KC_LGUI);
        }
        break;
    case C_CTL_SFT_ALT_GUI:
        if (pressed) {
            register_code16(KC_LCTL);
            register_code16(KC_LSFT);
            register_code16(KC_LALT);
            register_code16(KC_LGUI);
        } else {
            unregister_code16(KC_LCTL);
            unregister_code16(KC_LSFT);
            unregister_code16(KC_LALT);
            unregister_code16(KC_LGUI);
        }
        break;
    case C_SFT_ALT:
        if (pressed) {
            register_code16(KC_LSFT);
            register_code16(KC_LALT);
        } else {
            unregister_code16(KC_LSFT);
            unregister_code16(KC_LALT);
        }
        break;
    case C_SFT_GUI:
        if (pressed) {
            register_code16(KC_LSFT);
            register_code16(KC_LGUI);
        } else {
            unregister_code16(KC_LSFT);
            unregister_code16(KC_LGUI);
        }
        break;
    case C_SFT_ALT_GUI:
        if (pressed) {
            register_code16(KC_LSFT);
            register_code16(KC_LALT);
            register_code16(KC_LGUI);
        } else {
            unregister_code16(KC_LSFT);
            unregister_code16(KC_LALT);
            unregister_code16(KC_LGUI);
        }
        break;
    case C_ALT_GUI:
        if (pressed) {
            register_code16(KC_LALT);
            register_code16(KC_LGUI);
        } else {
            unregister_code16(KC_LALT);
            unregister_code16(KC_LGUI);
        }
        break;
    }
}

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_COLEMAK] = LAYOUT_ortho_4x10(
        KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,    KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN,
        KC_A,    KC_R,    KC_S,    KC_T,    KC_D,    KC_H,    KC_N,    KC_E,    KC_I,    KC_O,
        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,
        XXXXXXX, XXXXXXX, XXXXXXX, LOWER,   KC_SPC,  OSM(MOD_LSFT), RAISE,   XXXXXXX, XXXXXXX, XXXXXXX
    ),

    [_LOWER] = LAYOUT_ortho_4x10(
        KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
        KC_LGUI, KC_LALT, KC_LSFT, KC_LCTL, KC_GRV,  XXXXXXX, KC_MINS, KC_EQL,  KC_LPRN, KC_RPRN,
        KC_ESC,  KC_DEL,  KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, KC_BSLS, KC_QUOT, KC_LBRC, KC_RBRC,
        XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX
    ),

    [_RAISE] = LAYOUT_ortho_4x10(
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        KC_LGUI, KC_LALT, KC_LSFT, KC_LCTL, XXXXXXX, KC_CAPS, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_HOME, KC_PGDN, KC_PGUP, KC_END,
        XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX
    ),

    [_ADJUST] = LAYOUT_ortho_4x10(
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_INS,  XXXXXXX, KC_VOLD, KC_VOLU, XXXXXXX, XXXXXXX,
        KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_PSCR, XXXXXXX, KC_LCTL, KC_LSFT, KC_LALT, KC_LGUI,
        KC_F9,   KC_F10,  KC_F11,  KC_F12,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX
    ),

    [_HYPRLAND] = LAYOUT_ortho_4x10(
        KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX
    ),
};
// clang-format on

void update_tri_layer_RGB(uint8_t layer1, uint8_t layer2, uint8_t layer3) {
    if (IS_LAYER_ON(layer1) && IS_LAYER_ON(layer2)) {
        layer_on(layer3);
    } else {
        layer_off(layer3);
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t* record) {
    switch (keycode) {
    case COLEMAK:
        if (record->event.pressed) {
            eeconfig_update_default_layer(1UL << _COLEMAK);
            default_layer_set(1UL << _COLEMAK);
        }
        return false;
    case LOWER:
        if (record->event.pressed) {
            layer_on(_LOWER);
            update_tri_layer_RGB(_LOWER, _RAISE, _ADJUST);
        } else {
            layer_off(_LOWER);
            update_tri_layer_RGB(_LOWER, _RAISE, _ADJUST);
        }
        return false;
    case RAISE:
        if (record->event.pressed) {
            layer_on(_RAISE);
            update_tri_layer_RGB(_LOWER, _RAISE, _ADJUST);
        } else {
            layer_off(_RAISE);
            update_tri_layer_RGB(_LOWER, _RAISE, _ADJUST);
        }
        return false;
    case ADJUST:
        if (record->event.pressed) {
            layer_on(_ADJUST);
        } else {
            layer_off(_ADJUST);
        }
        return false;
    case HYPRLAND:
        if (record->event.pressed) {
            layer_on(_HYPRLAND);
        } else {
            layer_off(_HYPRLAND);
        }
        return false;
    }
    return true;
}