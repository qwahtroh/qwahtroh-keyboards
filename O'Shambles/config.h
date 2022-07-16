#pragma once

#include "config_common.h"

/* USB Devic descriptor parameter */
#define VENDOR_ID     0xFEED
#define PRODUCT_ID    0x7777
#define DEVICE_VER    0x0001
#define MANUFACTURER  qwahtroh
#define PRODUCT       OShambles
#define DESCRIPTION   a 5x12 keyboard


/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 8

 /* key matrix pins */
#define MATRIX_ROW_PINS { C6, D7, B5, D4, D0, D1, D2, D3 }
#define MATRIX_COL_PINS { B2, B6, B3, F6, F5, F7, F4, B1 }

#define UNUSED_PINS //{ B8, B9, A9, A10, B7, B6, A4, A5 }

 /* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

#define FORCE_NKRO

 /* encoder pins */ 
#define ENCODERS_PAD_A { B4 }
#define ENCODERS_PAD_B { E6 }
#define ENCODER_RESOLUTION 4

#define TAP_CODE_DELAY 10
#define TAPPING_TERM 150

 /* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

 /* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
//#define LOCKING_SUPPORT_ENABLE

/* maximum power consumption */
#define USB_MAX_POWER_CONSUMPTION 500