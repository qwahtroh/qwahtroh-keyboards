#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x4444
#define DEVICE_VER      0x0001
#define MANUFACTURER    qwahtroh
#define PRODUCT         qwahtroh.io
#define DESCRIPTION     a 3x5 macropad made for ARTSEY.IO

/* key matrix size */
#define MATRIX_ROWS 3
#define MATRIX_COLS 5

/* key matrix pins */
#define MATRIX_ROW_PINS { D4, C6, B3 }
#define MATRIX_COL_PINS { B2, B6, B4, E6, D7 }
#define UNUSED_PINS

#define ENCODERS_PAD_A { D1 }
#define ENCODERS_PAD_B { D0 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE