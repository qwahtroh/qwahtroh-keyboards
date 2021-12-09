//REPLACE THIS WITH YOUR KEYBOARD.h 
#include "keyboard.h"

//MAKE SURE THESE ARE INCLUDED
#include "artsey.h"
#include "keymap_combo.h"
#include "artsey.c"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  A_BASE_S,   A_BASE_T,   A_BASE_R,  A_BASE_A,   KC_MUTE,  
  A_BASE_O,   A_BASE_I,   A_BASE_Y,  A_BASE_E,   KC_MS_BTN1,
         KC_MS_BTN2,   KC_MS_BTN3,   KC_BSPC,  KC_SPACE),


[_A_NUM] = LAYOUT(
  
  A_NUM_S,   A_NUM_T,   A_NUM_R,  A_NUM_A,   KC_MUTE,  
  A_NUM_O,   A_NUM_I,   A_NUM_Y,  A_NUM_E,   KC_MS_BTN1,
         KC_MS_BTN2,   KC_MS_BTN3,   KC_BSPC,  KC_SPACE),

[_A_NAV] = LAYOUT(
  
  A_NAV_S,   A_NAV_T,   A_NAV_R,  A_NAV_A,   KC_MUTE,  
  A_NAV_O,   A_NAV_I,   A_NAV_Y,  A_NAV_E,   KC_MS_BTN1,
         KC_MS_BTN2,   KC_MS_BTN3,   KC_BSPC,  KC_SPACE),

[_A_SYM] = LAYOUT(
  
  A_SYM_S,   A_SYM_T,   A_SYM_R,  A_SYM_A,   KC_MUTE,  
  A_SYM_O,   A_SYM_I,   A_SYM_Y,  A_SYM_E,   KC_MS_BTN1,
         KC_MS_BTN2,   KC_MS_BTN3,   KC_BSPC,  KC_SPACE),

[_A_BRAC] = LAYOUT(
  
  A_BRAC_S,   A_BRAC_T,   A_BRAC_R,  A_BRAC_A,   KC_MUTE,  
  A_BRAC_O,   A_BRAC_I,   A_BRAC_Y,  A_BRAC_E,   KC_MS_BTN1,
         KC_MS_BTN2,   KC_MS_BTN3,   KC_BSPC,  KC_SPACE),

[_A_MOU] = LAYOUT(
  
  A_MOU_S,   A_MOU_T,   A_MOU_R,  A_MOU_A,   KC_MUTE,  
  A_MOU_O,   A_MOU_I,   A_MOU_Y,  A_MOU_E,   KC_MS_BTN1,
         KC_MS_BTN2,   KC_MS_BTN3,   KC_BSPC,  KC_SPACE),

[_A_CUSTOM] = LAYOUT(
  
  A_CUSTOM_S,   A_CUSTOM_T,   A_CUSTOM_R,  A_CUSTOM_A,   KC_MUTE,  
  A_CUSTOM_O,   A_CUSTOM_I,   A_CUSTOM_Y,  A_CUSTOM_E,   KC_MS_BTN1,
         KC_MS_BTN2,   KC_MS_BTN3,   KC_BSPC,  KC_SPACE),

};

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_WH_U);
        } else {
            tap_code(KC_WH_D);
        }
    }
    return true;
}