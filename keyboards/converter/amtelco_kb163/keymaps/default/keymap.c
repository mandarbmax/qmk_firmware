
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/*
 * +---+---+---+  +---+---+---+---+  +---+---+---+---+  +---+---+---+---+  +---+---+---+---+  +---+---+---+---+
 * |Win|   |   |  |   |   |   |   |  |   |   |   |   |  |   |   |   |   |  |   |   |   |   |  |   |   |   |   |
 * +-----------+  +---------------+  +---------------+  +---------------+  +---------------+  +---------------+
 * |   |   |   |  |F13|F14|F15|F16|  |   |   |   |   |  |   |   |   |   |  |   |   |   |   |  |   |   |   |   |
 * +-----------+  +---------------+  +---------------+  +---------------+  +---------------+  +---------------+
 * +---+   +---+---+---+---+  +---+---+---+---+  +---+---+---+---+  +---+---+---+  +---+---+---+---+  +---+---+
 * |Esc|   |F1 |F2 |F3 |F4 |  |F5 |F6 |F7 |F8 |  |F9 |F10|F11|F12|  |Prt|Scl|Pau|  |F17|F18|F19|F20|  |   |   |
 * +---+   +---+---+---+---+  +---+---+---+---+  +---+---+---+---+  +---+---+---+  +---+---+---+---+  +---+---+
 * +---+---+---+---+---+---+---+---+---+---+---+---+---+---------+  +---+---+---+  +---+---+---+---+  +---+---+
 * | ` | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0 | - | = |Backspace|  |Ins|Hom|PUp|  |Num| / | * | - |  |   |   |
 * +-------------------------------------------------------------+  +-----------+  +---------------+  +-------+
 * | Tab | Q | W | E | R | T | Y | U | I | O | P | [ | ] |   \   |  |Del|End|PDn|  | 7 | 8 | 9 |   |  |   |F21|
 * +-------------------------------------------------------------+  +-----------+  +------------ + +  +-------+
 * | Caps | A | S | D | F | G | H | J | K | L | ; | ' |Return    |                 | 4 | 5 | 6 |   |  |   |F22|
 * +-------------------------------------------------------------+      +---+      +---------------+  +-------+
 * | Shift  | Z | X | C | V | B | N | M | , | . | / |  Shift     |      | U |      | 1 | 2 | 3 |   |  |   |F23|
 * +-------------------------------------------------------------+  +---+---+---+  +------------ E +  +-------+
 * |Ctrl |    | Alt |                           | Alt |    |Ctrl |  | L | D | R |  |   0   | . |   |  |   |F24|
 * +-----+    +---------------------------------------+    +-----+  +---+---+---+  +---------------+  +-------+
 */
     
  [0] = LAYOUT(
    KC_LGUI, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
    KC_NO, KC_NO, KC_NO, KC_F13, KC_F14, KC_F15, KC_F16, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
    KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_PSCR, KC_SLCK, KC_PAUS, KC_F17, KC_F18, KC_F19, KC_F20, KC_NO, KC_NO, \
    KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_INS, KC_HOME, KC_PGUP, KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS, KC_NO, KC_NO, \
    KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, KC_DEL, KC_END, KC_PGDN, KC_P7, KC_P8, KC_P9, KC_PPLS, KC_NO, KC_F21, \
    KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, KC_P4, KC_P5, KC_P6, KC_NO, KC_F22, \
    KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, KC_P1, KC_P2, KC_P3, KC_PENT, KC_NO, KC_F23, \
    KC_LCTL, KC_LALT, KC_SPC, KC_RALT, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT, KC_P0, KC_PDOT, KC_NO, KC_F24 \
  )
};
