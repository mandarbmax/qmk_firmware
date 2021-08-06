
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/*
 *  +-----+-----+-----+-----+           +-----+-----+-----+-----+     +---+---+---+---+
 *  |f1   |f2   |f3   |f4   |           |f5   |f6   |f7   |f8   |     |INL|DLL|BRK|RST|
 *  +-----------------------+           +-----------------------+     +---------------+
 *  |AID|MOD|UKY|NPG|PPG|HOM|           |UP |LFT|RGT|DWN|RDN|RUP|     |INC|DLC|CLL|CLD|
 *  +---+---+---+---+---+---+           +---+---+---+---+---+---+     +---+---+---+---+
 *  +---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+     +---+---+---+---+
 *  |ESC| 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0 | - | = |BS | ` |     | 7 | 8 | 9 | - |
 *  +-------------------------------------------------------------+   +---------------+
 *  | TAB | Q | W | E | R | T | Y | U | I | O | P | [ | ] | \ |DEL|   | 4 | 5 | 6 |TBL|
 * +-------------------------------------------------------------+    +---------------+
 * |CAP|CTL| A | S | D | F | G | H | J | K | L | ; | ' |RETURN |      | 1 | 2 | 3 |TBR|
 * +-----------------------------------------------------------+      +-----------|   |
 *     |SHIFT| Z | X | C | V | B | N | M | , | . | / |SHIFT|ENT|      |   0   | . |   |
 *     +-----+---------------------------------------+-----+---+      +--- ---+---+---+
 *               |             SPACE             |    
 *               +-------------------------------+     
 */

  [0] = LAYOUT_EXTENDED(
    KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_NUMLOCK, KC_SCROLLLOCK, KC_PAUSE, KC_SYSREQ, \
    KC_HELP, KC_MENU, KC_NO, KC_PGDOWN, KC_PGUP, KC_HOME, KC_UP, KC_LEFT, KC_RIGHT, KC_DOWN, KC_END, KC_NO, KC_INS, KC_DEL, KC_NO, KC_PSCREEN, \
    KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINUS, KC_EQUAL, KC_BSPACE, KC_GRAVE, KC_KP_7, KC_KP_8, KC_KP_9, KC_KP_MINUS, \
    KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRACKET, KC_RBRACKET, KC_BSLASH, KC_DEL, KC_KP_4, KC_KP_5, KC_KP_6, KC_KP_PLUS, \
    KC_CAPS, KC_LCTRL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCOLON, KC_QUOTE, KC_ENTER, KC_KP_1, KC_KP_2, KC_KP_3, KC_KP_PLUS, \
    KC_LSHIFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLASH, KC_RSHIFT, KC_RGUI, KC_KP_0, KC_KP_DOT,  \
    KC_SPACE \
  )
} ;
