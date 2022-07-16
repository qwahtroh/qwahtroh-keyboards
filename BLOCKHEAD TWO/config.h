/*
Copyright %YEAR% %YOUR_NAME%

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "config_common.h"
#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID       0x7134 // qwahtroh 4 = "Q4"
#define PRODUCT_ID      0x0001
#define MANUFACTURER    qwahtroh
#define PRODUCT         BLOCKHEAD
#define DESCRIPTION     a 5x11 keyboard with a function forehead

// #define USB_POLLING_INTERVAL_MS 1

/* key matrix size */
#define MATRIX_ROWS 7
#define MATRIX_COLS 11

#define MATRIX_ROW_PINS { B0, F7, B7, D5, C7, F1, F0 }
#define MATRIX_COL_PINS { B1, B3, B2, B6, B5, B4, E6, D7, C6, D4, D2 }

#define DIODE_DIRECTION COL2ROW

/* encoder pins */
#define ENCODERS_PAD_A { F5 }
#define ENCODERS_PAD_B { F6 }
#define ENCODER_RESOLUTION 4

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE    5

#define OLED_DISPLAY_128X64
#define OLED_TIMEOUT 120000
#define OLED_BRIGHTNESS 120

#define RGB_DI_PIN D3
#define RGBLED_NUM 8 