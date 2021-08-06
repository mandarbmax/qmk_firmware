#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

#define _BASE 0

/*
|-------+-------+----+----+---+---+-----+-----+-------+-------+--------|
| BOT   | EOT   | \/ | /\ | < | > | BOL | EOL | DEL C | DEL W | SEARCH |
| 1     | 2     | 3  | 4  | 5 | 6 | 7   | 8   | 9     | 0     | -      |
| Q     | W     | E  | R  | T | Y | U   | I   | O     | P     | ENTER  |
| A     | S     | D  | F  | G | H | J   | K   | L     | /     |
| CLOCK | Z     | X  | C  | V | B | N   | M   | ,     | .     | ?      |
| ZERO  |                        SPACE                        | EXIT   |
|-------+-------+----+----+---+---+-----+-----+-------+-------+--------|
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_BASE] = LAYOUT(
    KC_TAB,    KC_ESC,    KC_DOWN, KC_UP, KC_LEFT, KC_RIGHT, KC_HOME, KC_END, KC_DELETE, KC_INSERT, KC_BSPACE,
    KC_1,      KC_2,      KC_3,    KC_4,  KC_5,    KC_6,     KC_7,    KC_8,   KC_9,      KC_0,      KC_MINUS,
    KC_Q,      KC_W,      KC_E,    KC_R,  KC_T,    KC_Y,     KC_U,    KC_I,   KC_O,      KC_P,      KC_ENTER,
    KC_A,      KC_S,      KC_D,    KC_F,  KC_G,    KC_H,     KC_J,    KC_K,   KC_L,      KC_SLASH,
    KC_LSHIFT, KC_Z,      KC_X,    KC_C,  KC_V,    KC_B,     KC_N,    KC_M,   KC_COMM,   KC_DOT,    KC_QUESTION,
    KC_LCTRL,  KC_SPACE,  KC_RALT
  )

};
