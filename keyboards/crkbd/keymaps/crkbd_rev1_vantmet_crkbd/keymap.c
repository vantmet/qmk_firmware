#include QMK_KEYBOARD_H
#include "keymap_uk.h"


#define _BASE 0
#define _NUM 1
#define _SYM 2
#define _FUNC 3

// Left-hand home row mods
#define HOME_S LGUI_T(KC_S)
#define HOME_D LALT_T(KC_D)
#define HOME_F LCTL_T(KC_F)

// Right-hand home row mods
#define HOME_J RCTL_T(KC_J)
#define HOME_K LALT_T(KC_K)
#define HOME_L LGUI_T(KC_L)

enum custom_keycodes {
    LAYER0 = SAFE_RANGE,
    LAYER1,
    LAYER2,
    LAYER3,
};

 const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

 [_BASE] = LAYOUT(
    //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        KC_ESC,   KC_Q,   KC_W,     KC_E,   KC_R,    KC_T,                          KC_Y,   KC_U,   KC_I,    KC_O,     KC_P,   KC_BSPC,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        LSFT_T(KC_TAB), KC_A,  HOME_S,   HOME_D,  HOME_F,  KC_G,                    KC_H, HOME_J, HOME_K, HOME_L,   KC_SCLN, UK_QUOT,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
         KC_LCTL, KC_Z,   KC_X,   KC_C,     KC_V,    KC_B,                         KC_N,    KC_M,   KC_COMM,  KC_DOT, KC_SLSH, KC_LSFT,
    //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                                 KC_LSFT, MO(_NUM), KC_ENT,    KC_SPC, MO(_SYM), KC_RSFT
                                          //`--------------------------'  `--------------------------'
    ),

[_NUM] = LAYOUT(
    //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        KC_TAB,   KC_1,  KC_2,      KC_3,   KC_4,   KC_5,                         KC_6,     KC_7,   KC_8,     KC_9,   KC_0,   KC_DEL,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_LSFT, KC_NO,   KC_HOME, KC_PGDN,  KC_PGUP, KC_END,                      KC_LEFT, KC_DOWN, KC_UP,  KC_RGHT,  KC_NUBS, UK_HASH,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
         KC_LCTL, KC_NO,   KC_NO,  DT_UP,   DT_PRNT,  DT_DOWN,                      KC_MINS, KC_PLUS, KC_COMM,  KC_DOT, UK_PIPE, UK_TILD,
    //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                                 KC_LSFT, KC_TRNS, KC_ENT,    KC_SPC, MO(_FUNC), KC_RSFT
                                          //`--------------------------'  `--------------------------'
),

[_SYM] = LAYOUT(
    //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        KC_TAB, KC_EXLM, UK_DQUO,   KC_HASH, KC_DLR, KC_PERC,                     KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_LSFT,  KC_NO,   KC_NO,  KC_NO,   KC_NO,   KC_NO,                          KC_MINS, KC_EQL, KC_LBRC, KC_RBRC, KC_NUBS, KC_GRV,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
         KC_LCTL, KC_NO,   KC_NO,  KC_NO,   KC_NO,   KC_NO,                       KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, UK_PIPE, UK_TILD,
    //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                                 KC_LSFT, MO(_FUNC), KC_ENT,    KC_SPC, KC_TRNS, KC_RSFT
                                          //`--------------------------'  `--------------------------'
),

[_FUNC] = LAYOUT(
    //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        QK_BOOT, KC_F1,   KC_F2,   KC_F3,   KC_F4,    KC_F5,                          KC_F6,   KC_F7,   KC_F8,   KC_F9, KC_F10, KC_BSPC,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       KC_LSFT,  KC_F11,   KC_F12,  KC_NO,   KC_NO,   KC_NO,                          KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO, KC_NO,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_LCTL, KC_NO,   KC_NO,  KC_NO,   KC_NO,   KC_NO,                       KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,    KC_ESC,
    //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                                 KC_LSFT, KC_TRNS, KC_ENT,    KC_SPC, KC_TRNS, KC_RSFT
                                          //`--------------------------'  `--------------------------'
)

};
