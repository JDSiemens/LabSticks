#pragma once


/* USB Device descriptor parameter */
/* #define usb.vid       0xEEEE
 #define usb.pid      0x2019
 #define usb.device_version		0x0001
 #define manufacturer    JDSiemens
 #define keyboard_name         labsticks

 key matrix size */
#define MATRIX_ROWS 1
#define MATRIX_COLS 8

/* key matrix pins  for labsticks*/
#define DIRECT_PINS { {D1, D0, C6, D4, F6, F7, F5, F4} }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5
#define VIAL_KEYBOARD_UID {0x6F, 0xD2, 0x03, 0xC4, 0x16, 0xAF, 0x61, 0x27}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 2 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 1 }
