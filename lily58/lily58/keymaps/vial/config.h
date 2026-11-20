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

#pragma once

#define EE_HANDS
#define USE_SERIAL_PD2

// Sync WPM from master to slave so Luna + the WPM counter on the right OLED work
#define SPLIT_WPM_ENABLE
// Sync last-activity time so the right OLED can sleep like the left one
#define SPLIT_ACTIVITY_ENABLE
// Luna on the right OLED: LOWER/Shift (sneak), RAISE/ADJUST/Caps Lock (bark)
#define SPLIT_LAYER_STATE_ENABLE
#define SPLIT_MODS_ENABLE
#define SPLIT_LED_STATE_ENABLE
// Master -> slave message so Luna jumps when Space is pressed
#define SPLIT_TRANSACTION_IDS_USER USER_SYNC_LUNA_JUMP

// Sleep both OLEDs and RGB after 60s without input; any key press wakes them
#define OLED_TIMEOUT 60000
#define RGB_MATRIX_TIMEOUT 60000

// Vial Support
#define VIAL_KEYBOARD_UID { 0x8F, 0xB8, 0x47, 0xEA, 0xA3, 0x5A, 0x5B, 0xDB }
#define DYNAMIC_KEYMAP_LAYER_COUNT 8
#define VIAL_COMBO_ENTRIES 64
#define VIAL_KEY_OVERRIDE_ENTRIES 64
#define VIAL_TAP_DANCE_ENTRIES 64
#define DYNAMIC_KEYMAP_MACRO_COUNT 32

#define DYNAMIC_KEYMAP_MACRO_EEPROM_SIZE 20480

// #define VIALRGB_NO_DIRECT