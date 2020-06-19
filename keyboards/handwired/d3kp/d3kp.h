#ifndef D3KP_H
#define D3KP_H

#include "quantum.h"

#define LAYOUT( \
    K00,      K02, K03, K04,      K06, \
              K12, K13, K14,           \
    K20,      K22, K23, K24,      K26, \
    K30, K31, K32, K33, K34, K35, K36, \
    K40, K41, K42, K43, K44, K45, K46, \
         K51, K52, K53, K54, K55, K56, \
         K61, K62, K63, K64, K65      \
    ) { \
  { K00,   KC_NO, K02, K03, K04, KC_NO, K06   },  \
  { KC_NO, KC_NO, K12, K13, K14, KC_NO, KC_NO },  \
  { K20,   KC_NO, K22, K23, K24, KC_NO, K26   },  \
  { K30,   K31,   K32, K33, K34, K35,   K36   },  \
  { K40,   K41,   K42, K43, K44, K45,   K46   },  \
  { KC_NO, K51,   K52, K53, K54, K55,   K56   },  \
  { KC_NO, K61,   K62, K63, K64, K65,   KC_NO },  \
}

#endif
