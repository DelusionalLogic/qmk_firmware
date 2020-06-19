#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
    RESET,             KC_A , KC_A   , KC_A   ,        KC_A   , \
                       KC_A , KC_A   , KC_A   ,                 \
     KC_B,             KC_A , KC_A   , KC_A   ,        KC_B   , \
     KC_VOLU, KC_VOLD, KC_P7, KC_P8  , KC_P9  , KC_A,  KC_A   , \
     KC_MNXT, KC_MPRV, KC_P4, KC_P5  , KC_P6  , KC_A,  KC_NLCK, \
     KC_B,             KC_P1, KC_P2  , KC_P3  , KC_B,  KC_A   , \
     KC_B,             KC_P0, KC_PDOT, KC_BSPC,        KC_B     \
  )
};
