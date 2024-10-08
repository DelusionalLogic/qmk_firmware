/*
Copyright 2021 CapsUnlocked

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
             MO(1),
    KC_MEDIA_PREV_TRACK,   KC_MEDIA_PLAY_PAUSE,   KC_MEDIA_NEXT_TRACK,
    MO(1),   KC_F7,   KC_F8
  ),
  [1] = LAYOUT(
             _______,
    RGB_MOD, KC_UP,   QK_BOOT,
    _______, KC_DOWN, KC_RGHT
  ),
};

// Volume up/down on the encoder
bool encoder_update_user(uint8_t index, bool clockwise) {
	switch(get_highest_layer(layer_state|default_layer_state)) {
		case 0:
			if (clockwise) {
				tap_code_delay(KC_VOLU, 10);
			}
			else {
				tap_code_delay(KC_VOLD, 10);
			}
			break;
		case 1:
			if (clockwise) {
				tap_code_delay(KC_MFFD, 10);
			}
			else {
				tap_code_delay(KC_MRWD, 10);
			}
			break;
	}

  return true;
}
