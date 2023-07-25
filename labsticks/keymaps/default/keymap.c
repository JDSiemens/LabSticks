#include QMK_KEYBOARD_H

enum layer_names {
    BASE,
    BLANK_LAYER,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT(
        KC_KP_8, 
        KC_KP_6, 
        KC_KP_2, 
        KC_KP_4, 
        KC_MS_BTN1, 
        KC_MS_BTN2,
        KC_ENT, 
        TT(BLANK_LAYER)
    ),
    [BLANK_LAYER] = LAYOUT(
        KC_NO, 
        KC_NO, 
        KC_NO, 
        KC_NO, 
        KC_NO, 
        KC_NO, 
        KC_NO, 
        TT(BLANK_LAYER)
    ),
};
