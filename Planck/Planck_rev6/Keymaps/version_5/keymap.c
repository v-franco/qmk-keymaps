#include QMK_KEYBOARD_H


#define _LAYER0 0
#define _LAYER1 1
#define _LAYER2 2
#define _LAYER3 3
#define _LAYER4 4
#define _LAYER5 5

enum custom_keycodes {
    LAYER0 = SAFE_RANGE,
    LAYER1,
    LAYER2,
    LAYER3,
    LAYER4,
    LAYER5,
};

 const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
                   ,-----------------------------------------------------------------------.
                   | Esc | Q   | W   | E   | R   | T   | Y   | U   | I   | O   | P   |  '  | 
                   |-----------------------------------------------------------------------|
Hold for Layer 4 - |Tab  | A   | S   | D   | F   | G   | H   | J   | K   | L   |  ;  |Enter| 
                   |-----------------------------------------------------------------------|
  Tap for ( ------ |Shift| Z   | X   | C   | V   | B   | N   | M   | ,   | .   | /   |Shift| -- Tap for )
                   |-----------------------------------------------------------------------|
  Tap for [ ------ |Ctrl |GUI  | {   |Alt  | Fn1 |Space|Bksp | Fn2 |RAlt | }   | -   |Ctrl | -- Tap for ]
                   `-----------------------------------------------------------------------'
                                                         /
  Tap for Shift -----------------------------------------

 */     

[_LAYER0] = LAYOUT(
            KC_ESC,          KC_Q,    KC_W,    KC_E,    KC_R,  KC_T,   KC_Y,            KC_U,  KC_I,    KC_O,    KC_P,    KC_QUOT,
            LT(4,KC_TAB),    KC_A,    KC_S,    KC_D,    KC_F,  KC_G,   KC_H,            KC_J,  KC_K,    KC_L,    KC_SCLN, KC_ENT, 
            KC_LSPO,         KC_Z,    KC_X,    KC_C,    KC_V,  KC_B,   KC_N,            KC_M,  KC_COMM, KC_DOT,  KC_SLSH, KC_RSPC, 
            LCTL_T(KC_LBRC), KC_LGUI, KC_LCBR, KC_LALT, TT(2), KC_SPC, LSFT_T(KC_BSPC), TT(3), KC_RALT, KC_RCBR, KC_MINS, RCTL_T(KC_RBRC)
            ),

/* Colemak
                   ,-----------------------------------------------------------------------.
                   | Esc | Q   | W   | F   | P   | G   | J   | L   | U   | V   | ;   |  '  | 
                   |-----------------------------------------------------------------------|
Hold for Layer 4 - |Tab  | A   | R   | S   | T   | D   | H   | N   | E   | I   |  O  |Enter| 
                   |-----------------------------------------------------------------------|
  Tap for ( ------ |Shift| Z   | X   | C   | V   | B   | K   | M   | ,   | .   | /   |Shift| -- Tap for )
                   |-----------------------------------------------------------------------|
  Tap for [ ------ |Ctrl |GUI  | {   |Alt  | Fn1 |Space|Bksp | Fn2 |RAlt | }   | -   |Ctrl | -- Tap for ]
                   `-----------------------------------------------------------------------'
                                                         /
  Tap for Shift -----------------------------------------

 */     

[_LAYER1] = LAYOUT(
            KC_ESC,          KC_Q,    KC_W,    KC_F,    KC_P,  KC_G,   KC_J,            KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_QUOT,
            LT(4,KC_TAB),    KC_A,    KC_R,    KC_S,    KC_T,  KC_D,   KC_H,            KC_N,    KC_E,    KC_I,    KC_O,    KC_ENT,
            KC_LSPO,         KC_Z,    KC_X,    KC_C,    KC_V,  KC_B,   KC_K,            KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSPC,
            LCTL_T(KC_LBRC), KC_LGUI, KC_LCBR, KC_LALT, TT(2), KC_SPC, LSFT_T(KC_BSPC), TO(3),   KC_RALT, KC_RCBR, KC_MINS, RCTL_T(KC_RBRC)
            ),

[_LAYER2] = LAYOUT(
            KC_TRNS, KC_1,    KC_2,    KC_3,    KC_4,   KC_5,    KC_6,    KC_7,   KC_8, KC_9,   KC_0,    KC_ENT,
            KC_TRNS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,  KC_F6,   KC_4,   KC_5, KC_6,   KC_PLUS, KC_MINS,
            KC_TRNS, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11, KC_F12,  KC_1,   KC_2, KC_3,   KC_ASTR, KC_SLSH,
            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_SPC, KC_BSPC, KC_DOT, KC_0, KC_EQL, KC_LPRN, KC_RPRN
            ),

[_LAYER3] = LAYOUT(
            KC_GRV,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_LPRN, KC_RPRN, KC_EQL,  KC_NO,
            KC_TRNS, KC_LT,   KC_GT,   KC_MINS, KC_UNDS, KC_NO,   KC_NO,   KC_ASTR, KC_LCBR, KC_RCBR, KC_BSLS, KC_NO, 
            KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_LBRC, KC_RBRC, KC_PIPE, KC_NO, 
            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO,   KC_SPC,  KC_BSPC, KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO
            ),

[_LAYER4] = LAYOUT(
            KC_TRNS, KC_CAPS, KC_UP,      KC_VOLD,    KC_VOLU,    KC_MUTE, KC_PGUP, KC_PGDN, KC_HOME, KC_END,  KC_DEL, KC_NO,
            KC_TRNS, KC_LEFT, KC_DOWN,    KC_RGHT,    LCTL(KC_S), KC_CALC, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_INS, KC_NO, 
            KC_TRNS, KC_NO,   LCTL(KC_X), LCTL(KC_C), LCTL(KC_V), KC_NO,   KC_NO,   KC_NO,   KC_BRID, KC_BRIU, KC_NO,  KC_NO,
            KC_TRNS, KC_TRNS, KC_NO,      KC_TRNS,    KC_NO,      KC_TRNS, KC_TRNS, KC_NO,   KC_TRNS, KC_APP,  KC_NO, MO(5)
            ),

[_LAYER5] = LAYOUT(
            BL_TOGG, BL_ON, BL_OFF, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, DEBUG, RESET, 
            KC_NO,   KC_NO, KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, DF(0), DF(1), 
            KC_NO,   KC_NO, KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
            KC_NO,   KC_NO, KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS
            ) 

};