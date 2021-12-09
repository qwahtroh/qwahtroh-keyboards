/* Copyright 2020 Armand G (qwahtroh)
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

#include "DTM.h"

// Layer Declarations
#define _QWERTY 0
#define _DVORAK 1
#define _LEFT 2
#define _RIGHT 3
#define _SETTINGS 4

// Tap Dance Declarations
enum {
  ESC_CAPS = 0,
  MEDIA = 0
};

enum my_keycodes {
  FOO = SAFE_RANGE,
  BAR
};


//#define LOWER MO(_LEFT)/
//#define RAISE MO(_RIGHT)/
//#define ADJUST MO(_SETTINGS)/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* QWERTY

  ESC   PRV   NXT   VOLD  VOLU  MEDIA   RAISE   CLICK
   Q     W     E     R     T    DEL      Y       U     I     O     P  
   A     S     D     F     G    TAB      H       J     K     L     ;  
   Z     X     C     V     B    ENT      N       M     ,     .     /  
 LEAD   ALT   GUI   CTRL  BSPC  RAISE   SPC     SFT   UP   DOWN  RIGHT 

*/
  	[_QWERTY] = LAYOUT (
    RGB_TOG,  RGB_MOD,  RGB_HUI,   RGB_HUD,          RGB_SAI,   RGB_SAD,     DF(_DVORAK),  CK_TOGG,
    KC_Q,     KC_W,     KC_E,      KC_R,             KC_T,      RGB_M_R,     KC_Y,         KC_U,               KC_I,    KC_O,    KC_P,
    KC_A,     KC_S,     KC_D,      LT(_LEFT, KC_F),  KC_G,      RGB_M_SN,    KC_H,         LT(_RIGHT, KC_J),   KC_K,    KC_L,    KC_SCLN,
    KC_Z,     KC_X,     KC_C,      KC_V,             KC_B,      KC_ENT,      KC_N,         KC_M,               KC_COMM, KC_DOT,  KC_SLSH,
    KC_LEAD,  C_LALT,   KC_LGUI,   KC_LCTRL,         KC_BSPC,   TT(_RIGHT),  KC_SPC,       KC_LSFT,            KC_UP,   KC_DOWN, KC_RIGHT
    ),

/* DVORAK

  ESC   PRV   NXT   VOLD  VOLU  MEDIA   RAISE   CLICK
   '     ,     .     P     Y    DEL      F       G     C     R     L  
   A     O     E     U     I    TAB      D       H     T     N     S  
   ;     Q     J     K     X    ENT      B       M     W     V     Z  
 LEAD   ALT   GUI   CTRL  BSPC  RAISE   SPC     SFT   UP   DOWN  RIGHT 

*/
  	[_DVORAK] = LAYOUT (
    RGB_TOG,    RGB_MOD,  RGB_HUI,   RGB_HUD,          RGB_SAI,   RGB_SAD,     DF(_QWERTY),  CK_TOGG,
    KC_QUOT,      KC_COMM,        KC_DOT,   KC_P,              KC_Y,     KC_DEL,      KC_F,         KC_G,                KC_C,    KC_R,    KC_L,
    KC_A,         KC_O,           KC_E,     LT(_LEFT, KC_U),   KC_I,     KC_TAB,      KC_D,         LT(_RIGHT, KC_H),     KC_T,    KC_N,    KC_S,
    KC_SCLN,      KC_Q,           KC_J,     KC_K,              KC_X,     KC_ENT,      KC_B,         KC_M,                KC_W,    KC_V,    KC_Z,
    KC_LEAD,      KC_LALT,        KC_LGUI,  KC_LCTRL,          KC_BSPC,  TT(_RIGHT),  KC_SPC,       KC_LSFT,             KC_UP,   KC_DOWN, KC_RIGHT
    ),

/* _RIGHT

  ESC    _     _     _     _     _    EEP   RST
   _     7     8     9     _     _     _     [     ]     (     )  
   _     4     5     6     _    TAB    H     J     "     '     ;  
   _     1     2     3     _    ENT    N     M     ,     .     /  
   _    ALT    0    TAB  BSPC   SFT   SPC  LEFT   UP   DOWN  RIGHT 

*/  
    [_RIGHT] = LAYOUT (
    KC_GESC,  KC_LBRC,  KC_RBRC, KC_EQL,   KC_BSLS,   KC_TRNS,  DF(_DVORAK),   RESET,
    _______,  KC_7,     KC_8,    KC_9,     _______,   _______,  _______,       _______,   _______,  _______,   _______,
    _______,  KC_4,     KC_5,    KC_6,     _______,   _______,  _______,       KC_LEFT,   KC_UP,    KC_DOWN,   KC_RIGHT,
    _______,  KC_1,     KC_2,    KC_3,     _______,   _______,  _______,       _______,   _______,  _______,   _______,
    KC_LSFT,  KC_DOT,   KC_0,    KC_TAB,   KC_BSPC,   KC_TRNS,  KC_SPC,        _______,   _______,  _______,   _______
    ),
  

  /* _RIGHT

  ESC    _     _     _     _     _    EEP   RST
   _     7     8     9     _     _     _     [     ]     (     )  
   _     4     5     6     _    TAB    H     J     "     '     ;  
   _     1     2     3     _    ENT    N     M     ,     .     /  
   _    ALT    0    TAB  BSPC   SFT   SPC  LEFT   UP   DOWN  RIGHT 

*/  
    [_RIGHT] = LAYOUT (
    KC_GESC,  KC_LBRC,  KC_RBRC, KC_EQL,   KC_BSLS,   KC_TRNS,  DF(_DVORAK),   RESET,
    _______,  KC_7,     KC_8,    KC_9,     _______,   _______,  _______,       _______,   _______,  _______,   _______,
    _______,  KC_4,     KC_5,    KC_6,     _______,   _______,  _______,       KC_LEFT,   KC_UP,    KC_DOWN,   KC_RIGHT,
    _______,  KC_1,     KC_2,    KC_3,     _______,   _______,  _______,       _______,   _______,  _______,   _______,
    KC_LSFT,  KC_DOT,   KC_0,    KC_TAB,   KC_BSPC,   KC_TRNS,  KC_SPC,        _______,   _______,  _______,   _______
    ),
  

  /* _SETTINGS

  ESC    _     _     _     _     _    EEP   RST
   _     7     8     9     _     _     _     [     ]     (     )  
   _     4     5     6     _    TAB    H     J     "     '     ;  
   _     1     2     3     _    ENT    N     M     ,     .     /  
   _    ALT    0    TAB  BSPC   SFT   SPC  LEFT   UP   DOWN  RIGHT 

*/  
    [_SETTINGS] = LAYOUT (
    KC_GESC,  KC_LBRC,  KC_RBRC, KC_EQL,   KC_BSLS,   KC_TRNS,  DF(_DVORAK),   RESET,
    _______,  KC_7,     KC_8,    KC_9,     _______,   _______,  _______,       _______,   _______,  _______,   _______,
    _______,  KC_4,     KC_5,    KC_6,     _______,   _______,  _______,       KC_LEFT,   KC_UP,    KC_DOWN,   KC_RIGHT,
    _______,  KC_1,     KC_2,    KC_3,     _______,   _______,  _______,       _______,   _______,  _______,   _______,
    KC_LSFT,  KC_DOT,   KC_0,    KC_TAB,   KC_BSPC,   KC_TRNS,  KC_SPC,        _______,   _______,  _______,   _______
    )
  };


void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder */
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    } else if (index == 1) { /* Second encoder */
        if (clockwise) {
            tap_code(KC_UP);
        } else {
            tap_code(KC_DOWN);
        }
    }
}


//Tap Dance Definitions
qk_tap_dance_action_t tap_dance_actions[] = {
  //Tap once for Esc, twice for Caps Lock
  [ESC_CAPS]  = ACTION_TAP_DANCE_DOUBLE(KC_ESC, KC_CAPS),
  //Tap once for Play/Pause, twice for Next Track
  [MEDIA] = ACTION_TAP_DANCE_DOUBLE(KC_MPLY, KC_MNXT)
};

//Tri-Layer
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case _LEFT:
      if (record->event.pressed) {
        layer_on(_LEFT);
        update_tri_layer(_LEFT, _RIGHT, _SETTINGS);
      } else {
        layer_off(_LEFT);
        update_tri_layer(_LEFT, _RIGHT, _SETTINGS);
      }
      return false;
      break;
    case _RIGHT:
      if (record->event.pressed) {
        layer_on(_RIGHT);
        update_tri_layer(_LEFT, _RIGHT, _SETTINGS);
      } else {
        layer_off(_RIGHT);
        update_tri_layer(_LEFT, _RIGHT, _SETTINGS);
      }
      return false;
      break;
    }
  return true;
}

#ifdef OLED_DRIVER_ENABLE
void oled_task_user(void) {
    // Host Keyboard Layer Status
    oled_write_P(PSTR("Layer: "), false);

    switch (get_highest_layer(layer_state)) {
        case _QWERTY:
            oled_write_P(PSTR("QWERTY\n"), false);
            break;
        case _DVORAK:
            oled_write_P(PSTR("DVORAK\n"), false);
            break;
        case _LEFT:
            oled_write_P(PSTR("LEFT\n"), false);
            break;
        case _RIGHT:
            oled_write_P(PSTR("RIGHT\n"), false);
            break;
        case _SETTINGS:
            oled_write_P(PSTR("SETTINGS\n"), false);
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