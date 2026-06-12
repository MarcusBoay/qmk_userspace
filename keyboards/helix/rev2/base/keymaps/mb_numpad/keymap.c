/* Copyright 2020 yushakobo
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

bool is_space_toggle_active = false;
uint16_t space_toggle_timer = 0;

bool is_m1_toggle_active = false;

bool is_buff_toggle_active = false;
uint16_t buff_toggle_timer = 0;

bool is_p_spam_active = false;

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
enum layer_number {
    _ONE,
    // _NUMPAD = 0,
    // _LOWER,
};

enum custom_keycodes {
    ONE = SAFE_RANGE,
    SPCTOG,
    M1TOG,
    BUFF,
    P_SPAM,
    // LOWER,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_ONE] = LAYOUT(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    XXXXXXX,
        KC_TAB,  KC_Q,    KC_W,    KC_F,    P_SPAM,  KC_G,                      KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_BSLS,
        KC_BSPC, KC_A,    BUFF,    SPCTOG,  M1TOG,   KC_D,                      KC_H,    KC_N,    KC_E,    KC_I,    KC_O,    KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    XXXXXXX, XXXXXXX, KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
        KC_LCTL, XXXXXXX, KC_LGUI, KC_LALT, XXXXXXX, KC_SPC,  XXXXXXX, XXXXXXX, KC_LGUI, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_LALT
    )
  // [_NUMPAD] = LAYOUT(
  //     KC_ESC,  XXXXXXX, KC_NUM,  KC_PSLS, KC_PAST, KC_PMNS,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //     XXXXXXX, XXXXXXX, KC_KP_7, KC_KP_8, KC_KP_9, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //     KC_BSPC, XXXXXXX, KC_KP_4, KC_KP_5, KC_KP_6, KC_PPLS,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //     KC_LSFT, XXXXXXX, KC_KP_1, KC_KP_2, KC_KP_3, XXXXXXX, RGB_TOG, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //     KC_LSFT, XXXXXXX, KC_KP_0, KC_PCMM, KC_PDOT, KC_ENT,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
  //     ),

  // [_LOWER] = LAYOUT(
  //     KC_ESC,  XXXXXXX, KC_NUM,  KC_PSLS, KC_PAST, KC_PMNS,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //     XXXXXXX, XXXXXXX, KC_KP_7, KC_KP_8, KC_KP_9, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //     KC_BSPC, XXXXXXX, KC_KP_4, KC_KP_5, KC_KP_6, KC_PPLS,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //     KC_LSFT, XXXXXXX, KC_KP_1, KC_KP_2, KC_KP_3, XXXXXXX, RGB_TOG, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //     XXXXXXX, XXXXXXX, KC_KP_0, KC_PCMM, KC_PDOT, KC_ENT,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
  //     ),

};


// define variables for reactive RGB
bool TOG_STATUS = false;
int RGB_current_mode;

// Setting ADJUST layer RGB back to default
void update_tri_layer_RGB(uint8_t layer1, uint8_t layer2, uint8_t layer3) {
  // if (IS_LAYER_ON(layer1) && IS_LAYER_ON(layer2)) {
  //   #ifdef RGBLIGHT_ENABLE
  //     //rgblight_mode(RGB_current_mode);
  //   #endif
  //   layer_on(layer3);
  // } else {
  //   layer_off(layer3);
  // }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case ONE:
        if (record->event.pressed) {
            #ifdef AUDIO_ENABLE
                PLAY_SONG(tone_qwerty);
            #endif
            set_single_persistent_default_layer(_ONE);
        }
        return false;
        break;
    case M1TOG:
        if (record->event.pressed) {
            is_m1_toggle_active = !is_m1_toggle_active;
            if (is_m1_toggle_active) {
                register_code(MS_BTN1);
            } else {
                unregister_code(MS_BTN1);
            }
        }
        return false;
        break;
    case SPCTOG:
        if (record->event.pressed) {
            is_space_toggle_active = !is_space_toggle_active;
            if (is_space_toggle_active) {
                space_toggle_timer = 1001;
            }
        }
        return false;
        break;
    case BUFF:
        if (record->event.pressed) {
            is_buff_toggle_active = !is_buff_toggle_active;
            if (is_buff_toggle_active) {
                buff_toggle_timer = 1000*10 + 1;
            }
        }
        return false;
        break;
    case P_SPAM:
        if (record->event.pressed) {
            is_p_spam_active = !is_p_spam_active;
        }
        return false;
        break;

    // case NUMPAD:
    //   if (record->event.pressed) {
    //     #ifdef AUDIO_ENABLE
    //       PLAY_SONG(tone_qwerty);
    //     #endif
    //     set_single_persistent_default_layer(_NUMPAD);
    //   }
    //   return false;
    //   break;
    // case LOWER:
    //   if (record->event.pressed) {
    //       //not sure how to have keyboard check mode and set it to a variable, so my work around
    //       //uses another variable that would be set to true after the first time a reactive key is pressed.
    //     if (TOG_STATUS) { //TOG_STATUS checks is another reactive key currently pressed, only changes RGB mode if returns false
    //     } else {
    //       TOG_STATUS = !TOG_STATUS;
    //       #ifdef RGBLIGHT_ENABLE
    //         //rgblight_mode(RGBLIGHT_MODE_SNAKE + 1);
    //       #endif
    //     }
    //     layer_on(_LOWER);
    //   } else {
    //     #ifdef RGBLIGHT_ENABLE
    //       //rgblight_mode(RGB_current_mode);   // revert RGB to initial mode prior to RGB mode change
    //     #endif
    //     TOG_STATUS = false;
    //     layer_off(_LOWER);
    //   }
    //   return false;
    //   break;
  }
  return true;
}

void matrix_init_user(void) {
    #ifdef RGBLIGHT_ENABLE
      RGB_current_mode = rgblight_get_mode();
    #endif
}

void matrix_scan_user(void) { // The very important timer.
    if (is_space_toggle_active) {
        if (timer_elapsed(space_toggle_timer) > 1000) {
            tap_code_delay(KC_SPC, 100);
            space_toggle_timer = timer_read();
        }
    }
    if (is_buff_toggle_active) {
        if (timer_elapsed(buff_toggle_timer) > 1000*10) {
            tap_code_delay(KC_G, 100);
            buff_toggle_timer = timer_read();
        }
    }
    if (is_p_spam_active) {
        tap_code_delay(KC_P, 20);
    }
}
