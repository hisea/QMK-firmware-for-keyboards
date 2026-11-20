/* Copyright 2020 Josef Adamcik
 * Modification for VIA support and RGB underglow by Jens Bonk-Wiltfang
 * Modification for Vial support by Drew Petersen
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

// clang-format off

#include QMK_KEYBOARD_H

#ifdef OLED_ENABLE
#include "oled.c" 
#endif

#define _______ KC_NO

// Default keymap. This can be changed in Vial. Use oled.c to change beavior that Vial cannot change.

// Generated from ~/Documents/lily58.vil (Vial export).
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[0] = LAYOUT(
  KC_MINS        , KC_1           , KC_2           , KC_3           , KC_4           , KC_5           ,  KC_6           , KC_7           , KC_8           , KC_9           , KC_0           , KC_EQL         ,
  QK_GESC        , KC_Q           , KC_W           , KC_E           , KC_R           , KC_T           ,  KC_Y           , KC_U           , KC_I           , KC_O           , KC_P           , KC_BSPC        ,
  LCTL_T(KC_TAB) , KC_A           , KC_S           , KC_D           , KC_F           , KC_G           ,  KC_H           , KC_J           , KC_K           , KC_L           , KC_SCLN        , KC_QUOT        ,
  KC_LSFT        , KC_Z           , KC_X           , KC_C           , KC_V           , KC_B           , KC_LBRC        , KC_RBRC        , KC_N           , KC_M           , KC_COMM        , KC_DOT         , KC_SLSH        , KC_RSFT        ,
                                                     KC_LALT        , KC_LGUI        , MO(1)          , RGUI_T(KC_SPC) , KC_ENT         , MO(2)          , RALT_T(KC_BSLS), KC_GRV         
),
[1] = LAYOUT(
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  ,  KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12 ,
  KC_GRV , KC_EXLM, KC_AT  , KC_HASH, KC_DLR , KC_PERC,  KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_TILD,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_VOLD, KC_VOLU, XXXXXXX, XXXXXXX, XXXXXXX, KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE,
                             XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, MO(3)  , XXXXXXX, XXXXXXX
),
[2] = LAYOUT(
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  KC_GRV , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,  KC_PGUP, KC_HOME, KC_UP  , KC_END , KC_0   , XXXXXXX,
  KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_MINS, KC_EQL ,  KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_RGHT, XXXXXXX,
  KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_UNDS, KC_PLUS, XXXXXXX, XXXXXXX, KC_PLUS, KC_MINS, KC_EQL , KC_LBRC, KC_RBRC, KC_BSLS,
                             XXXXXXX, XXXXXXX, MO(3)  , XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
),
[3] = LAYOUT(
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD,
                             XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
)
};

const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_A, KC_B), ENCODER_CCW_CW(KC_C, KC_D) },
    [1] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [2] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [3] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
};

#if 0
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
#ifdef OLED_ENABLE
    set_keylog(keycode, record);
#endif
    // set_timelog();
  }
  return true;
}
#endif
