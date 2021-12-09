#include "BLOCKHEAD.h"

#define ____ KC_TRNS

// Layers
enum layer_names {
  _BASE,
  _FUNCTION,
  _GAME
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* BASE
  .----------------------------------------------------------------------------.
  |      |  UP  |  FN  |             |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |
  |------+------+------|             |------+------+------+------+------+------|
  | LEFT | DOWN | RIGHT|             |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |
  `----------------------------------------------------------------------------`
  .----------------------------------------------------------------------------.
  |  ESC |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |
  |------+------+------+------+------+------+------+------+------+------+------|
  |  TAB |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  |
  |------+------+------+------+------+------+------+------+------+------+------|
  |  CTL |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |      |
  |------+------+------+------+------+------+------+------+------+------+------|
  |  SFT |   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |
  |------+------+------+------+------+------+------+------+------+------+------|
  |      |  WIN |  ALT |  CTL |  FN  |  SPdC | BSCP |  SFT |      |      |  ENT |
  `----------------------------------------------------------------------------`
*/
  	[_BASE] = LAYOUT (
    RESET,      KC_UP,     TG(_FUNCTION),                     RESET,     KC_F2,    KC_F3,     KC_F4,     KC_F5,      KC_F6,
    KC_LEFT,    KC_DOWN,   KC_RIGHT,                          KC_F7,     KC_F8,    KC_F9,     KC_F10,    KC_F11,     KC_F12,

    KC_ESC,      KC_1,      KC_2,        KC_3,      KC_4,      KC_5,      KC_6,     KC_7,      KC_8,      KC_9,       KC_0,
    KC_TAB,      KC_Q,      KC_W,        KC_E,      KC_R,      KC_T,      KC_Y,     KC_U,      KC_I,      KC_O,       KC_P,
    KC_LCTL,     KC_A,      KC_S,        KC_D,      KC_F,      KC_G,      KC_H,     KC_J,      KC_K,      KC_L,       KC_SCLN,
    KC_LSHIFT,   KC_Z,      KC_X,        KC_C,      KC_V,      KC_B,      KC_N,     KC_M,      KC_COMM,   KC_DOT,     KC_SLSH,
    KC_ENT,      KC_DEL,    KC_LGUI,     KC_LALT,   KC_LCTL,   KC_BSPC,   KC_SPC,   KC_LCTL,   KC_LALT,   KC_LGUI,    KC_ENT
    ),

/* FUNCTION (NAVIGATION, FUNCTIONS, AND SETTINGS)
  .----------------------------------------------------------------------------.
  |      |      | GAME |             |      |      |      |      |      |      |
  |------+------+------|             |------+------+------+------+------+------|
  |      |      |      |             |      |      |      |      |      |      |
  `----------------------------------------------------------------------------`
  .----------------------------------------------------------------------------.
  |      |      |      |      |      |      |      |      |      |      |      |
  |------+------+------+------+------+------+------+------+------+------+------|
  |      |      |      |      |      |      |      |      |      |      |      |
  |------+------+------+------+------+------+------+------+------+------+------|
  |      |      |      |      |      |      |      |      |      |      |      |
  |------+------+------+------+------+------+------+------+------+------+------|
  |      |      |      |      |      |      |      |      |      |      |      |
  |------+------+------+------+------+------+------+------+------+------+------|
  |      |      |      |      |      |      |      |      |      |      |      |
  `----------------------------------------------------------------------------`
*/  
    [_FUNCTION] = LAYOUT (
    KC_ESC,      KC_UP,     TG(_GAME),                         KC_F1,     KC_F2,    KC_F3,     KC_F4,     KC_F5,      KC_F6,
    KC_LEFT,     KC_DOWN,   KC_RIGHT,                          KC_F7,     KC_F8,    KC_F9,     KC_F10,    KC_F11,     KC_F12,

    KC_ESC,      KC_1,      KC_2,        KC_3,      KC_4,      KC_5,      KC_6,     KC_7,      KC_8,      KC_9,       KC_0,
    KC_TAB,      KC_Q,      KC_W,        KC_E,      KC_R,      KC_T,      KC_Y,     KC_U,      KC_I,      KC_O,       KC_P,
    KC_LCTL,     KC_A,      KC_S,        KC_D,      KC_F,      KC_G,      KC_H,     KC_J,      KC_K,      KC_L,       KC_SCLN,
    KC_LSHIFT,   KC_Z,      KC_X,        KC_C,      KC_V,      KC_B,      KC_N,     KC_M,      KC_COMM,   KC_DOT,     KC_SLSH,
    KC_ENT,      KC_DEL,    KC_LGUI,     KC_LALT,   KC_LCTL,   KC_BSPC,   KC_SPC,   KC_LEFT,   KC_UP,     KC_DOWN,    KC_RIGHT
    ),
  
  /* GAME (NUMBERS AND SYMBOLS)
  .----------------------------------------------------------------------------.
  |      |      | BASE |             |      |      |      |      |      |      |
  |------+------+------|             |------+------+------+------+------+------|
  |      |      |      |             |      |      |      |      |      |      |
  `----------------------------------------------------------------------------`
  .----------------------------------------------------------------------------.
  |      |      |      |      |      |      |      |      |      |      |      |
  |------+------+------+------+------+------+------+------+------+------+------|
  |      |      |      |      |      |      |      |      |      |      |      |
  |------+------+------+------+------+------+------+------+------+------+------|
  |      |      |      |      |      |      |      |      |      |      |      |
  |------+------+------+------+------+------+------+------+------+------+------|
  |      |      |      |      |      |      |      |      |      |      |      |
  |------+------+------+------+------+------+------+------+------+------+------|
  |      |      |      |      |      |      |      |      |      |      |      |
  `----------------------------------------------------------------------------`
*/  
    [_GAME] = LAYOUT (
    KC_ESC,      KC_UP,     TG(_BASE),                         KC_F1,     KC_F2,    KC_F3,     KC_F4,     KC_F5,      KC_F6,
    KC_LEFT,     KC_DOWN,   KC_RIGHT,                          KC_F7,     KC_F8,    KC_F9,     KC_F10,    KC_F11,     KC_F12,

    KC_ESC,      KC_1,      KC_2,        KC_3,      KC_4,      KC_5,      KC_6,     KC_7,      KC_8,      KC_9,       KC_0,
    KC_TAB,      KC_Q,      KC_W,        KC_E,      KC_R,      KC_T,      KC_Y,     KC_U,      KC_I,      KC_O,       KC_P,
    KC_LCTL,     KC_A,      KC_S,        KC_D,      KC_F,      KC_G,      KC_H,     KC_J,      KC_K,      KC_L,       KC_SCLN,
    KC_LSHIFT,   KC_Z,      KC_X,        KC_C,      KC_V,      KC_B,      KC_N,     KC_M,      KC_COMM,   KC_DOT,     KC_SLSH,
    KC_ENT,      KC_DEL,    KC_LGUI,     KC_LALT,   KC_LCTL,   KC_BSPC,   KC_SPC,   KC_LEFT,   KC_UP,     KC_DOWN,    KC_RIGHT
    )
  };

#ifdef OLED_DRIVER_ENABLE
void oled_task_user(void) {
    // Host Keyboard Layer Status
    oled_write_P(PSTR("Layer: "), false);

    switch (get_highest_layer(layer_state)) {
        case _BASE:
            oled_write_P(PSTR("QWERTY\n"), false);
            break;
        case _FUNCTION:
            oled_write_P(PSTR("FUNCTION\n"), false);
            break;
        case _GAME:
            oled_write_P(PSTR("GAME\n"), false);
            break;
        default:
            // Or use the write_ln shortcut over adding '\n' to the end of your string
            oled_write_ln_P(PSTR("Undefined"), false);
    }

    // Host Keyboard LED Status
    led_t led_state = host_keyboard_led_state();
    oled_write_P(led_state.num_lock ? PSTR("NUM ") : PSTR("    "), false);
    oled_write_P(led_state.caps_lock ? PSTR("CAP ") : PSTR("    "), false);
    oled_write_P(led_state.scroll_lock ? PSTR("SCR ") : PSTR("    "), false);
}
#endif

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder */
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    }
    return true;
}