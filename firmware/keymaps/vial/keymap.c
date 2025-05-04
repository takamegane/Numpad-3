// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

    const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
                                KC_NUM,         KC_PSLS,        KC_PAST,        KC_BSPC,
                                KC_P7,          KC_P8,          KC_P9,          KC_PMNS,
                KC_B,           KC_P4,          KC_P5,          KC_P6,          KC_PPLS,      
                KC_C,           KC_P1,          KC_P2,          KC_P3,          KC_PENT,
                KC_A,           KC_P0,          KC_P0,          KC_PDOT
    ),
    [1] = LAYOUT(
                                KC_NUM,         KC_PSLS,        KC_PAST,        KC_BSPC,
                                KC_P7,          KC_P8,          KC_P9,          KC_PMNS,
                KC_B,           KC_P4,          KC_P5,          KC_P6,          KC_PPLS,      
                KC_C,           KC_P1,          KC_P2,          KC_P3,          KC_PENT,
                KC_A,           KC_P0,          KC_P0,          KC_PDOT  
    ),
    [2] = LAYOUT(
                                KC_NUM,         KC_PSLS,        KC_PAST,        KC_BSPC,
                                KC_P7,          KC_P8,          KC_P9,          KC_PMNS,
                KC_B,           KC_P4,          KC_P5,          KC_P6,          KC_PPLS,      
                KC_C,           KC_P1,          KC_P2,          KC_P3,          KC_PENT,
                KC_A,           KC_P0,          KC_P0,          KC_PDOT
    ),
    [3] = LAYOUT(
                                KC_NUM,         KC_PSLS,        KC_PAST,        KC_BSPC,
                                KC_P7,          KC_P8,          KC_P9,          KC_PMNS,
                KC_B,           KC_P4,          KC_P5,          KC_P6,          KC_PPLS,      
                KC_C,           KC_P1,          KC_P2,          KC_P3,          KC_PENT,
                KC_A,           KC_P0,          KC_P0,          KC_PDOT
    )
};


const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_G, KC_H), 
            ENCODER_CCW_CW(KC_I, KC_J),
            ENCODER_CCW_CW(KC_G, KC_H) },
    [1] = { ENCODER_CCW_CW(KC_G, KC_H), 
            ENCODER_CCW_CW(KC_I, KC_J),
            ENCODER_CCW_CW(KC_G, KC_H) },
    [2] = { ENCODER_CCW_CW(KC_G, KC_H), 
            ENCODER_CCW_CW(KC_I, KC_J),
            ENCODER_CCW_CW(KC_G, KC_H) },
    [3] = { ENCODER_CCW_CW(KC_G, KC_H), 
            ENCODER_CCW_CW(KC_I, KC_J),
            ENCODER_CCW_CW(KC_G, KC_H) },
};
