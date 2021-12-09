#pragma once

#include "config_common.h"

/* USB Devic descriptor parameter */
#define VENDOR_ID     0xFEED
#define PRODUCT_ID    0x4444
#define DEVICE_VER    0x0001
#define MANUFACTURER  qwahtroh
#define PRODUCT       DTM
#define DESCRIPTION   a 4x11(+6) keyboard


/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 11

 /* key matrix pins */
#define MATRIX_ROW_PINS { A6, B0, B1, B2, B3 }
#define MATRIX_COL_PINS { A13, A14, B12, B11, B10, B15, A15, A8, A7, B4, B5 }

#define UNUSED_PINS //{ B8, B9, A9, A10, B7, B6, A4, A5 }

 /* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

#define FORCE_NKRO

/* ws2812 RGB LED */
#define RGB_DI_PIN A9
#define RGBLED_NUM 18    // Number of LEDs
#define RGBLIGHT_ANIMATIONS

 /* encoder pins */ 
#define ENCODERS_PAD_A { A0, B14 }
#define ENCODERS_PAD_B { B8, B13 }
#define ENCODER_RESOLUTION 4

 /* audio pins */
#define A4_AUDIO
#define A5_AUDIO

#define TAP_CODE_DELAY 10

//#ifdef AUDIO_ENABLE
    #define AUDIO_CLICKY

//#endif

 /* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

 /* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
//#define LOCKING_SUPPORT_ENABLE

/* maximum power consumption */
#define USB_MAX_POWER_CONSUMPTION 500

#define TAPPING_TERM 150

