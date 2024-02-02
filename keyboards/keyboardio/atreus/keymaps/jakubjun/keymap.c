#include QMK_KEYBOARD_H

enum my_layers {
    ALPHAS__ALPHAS_0,
    SYMBOLS__NUMPAD_1,
    MODS__ARROWS_2,
    WM_SPLIT__WM_NAV_3,
    BOOT__WM_MOVE_4,
    NO__F_KEYS_5,
    MOUSE__WM_GO_TO_6,
    RGB__WM_MOVE_TO_7,
    NO__VIM_8,
    NO__VIM_SIZES_9,
};

enum custom_keycodes {
    VIM_SPLIT_TO_LEFT = SAFE_RANGE,
    VIM_SPLIT_TO_DOWN,
    VIM_SPLIT_TO_UP,
    VIM_SPLIT_TO_RIGHT,
    VIM_SPLIT_H,
    VIM_SPLIT_V,
    VIM_SPLIT_CLOSE,
    VIM_INCREASE_W_5,
    VIM_DECREASE_W_5,
    VIM_INCREASE_H_5,
    VIM_DECREASE_H_5,
    VIM_ONLY,
    VIM_EQUALIZE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [ALPHAS__ALPHAS_0] = LAYOUT(
            KC_Q, KC_D, KC_R, KC_W, KC_B,      KC_J, KC_F, KC_U, KC_P, KC_SCLN,
            KC_A, KC_S, KC_H, KC_T, KC_G,      KC_Y, KC_N, KC_E, KC_O, KC_I,
            KC_Z, KC_X, KC_M, KC_C, KC_V, KC_NO, KC_NO,      KC_K, KC_L, KC_COMM, KC_DOT, KC_SLSH,
                           KC_NO,KC_NO,KC_NO , MO(MODS__ARROWS_2), MO(MOUSE__WM_GO_TO_6),KC_NO,KC_NO,      KC_SPC, MO(SYMBOLS__NUMPAD_1),KC_NO,KC_NO,KC_NO
    ),

    [SYMBOLS__NUMPAD_1] = LAYOUT(
            KC_EXLM, KC_AT, KC_EQL, KC_DLR, KC_PERC,        LGUI(KC_B), KC_7, KC_8, KC_9, KC_DOT,
            KC_LPRN, KC_ASTR, KC_CIRC, KC_AMPR, KC_RPRN,    LGUI(KC_U), KC_4, KC_5, KC_6, KC_0,
            KC_LBRC, KC_RBRC, KC_HASH, KC_LCBR, KC_RCBR, KC_NO, KC_NO,    KC_CAPS, KC_1, KC_2, KC_3, KC_PPLS,
                                KC_NO,KC_NO,KC_NO, MO(WM_SPLIT__WM_NAV_3), KC_LCTL,KC_NO,      KC_NO, KC_NO,KC_NO,KC_NO,KC_NO, KC_NO
    ),

    [MODS__ARROWS_2] = LAYOUT(
            LCTL(KC_C), LCTL(KC_V), KC_GRV, KC_BSLS, SGUI(KC_SPC),               KC_UNDS, KC_MINS, KC_QUOT, KC_DQUO, KC_PIPE,
            KC_ESC, KC_LCTL, KC_LGUI, KC_LSFT, KC_LALT,                          KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_PSCR,
            LGUI(KC_SPC), LGUI(KC_M), LGUI(KC_N), LGUI(KC_MINS), SGUI(KC_MINS),KC_NO,KC_NO,  KC_TAB, KC_PGDN, KC_PGUP, KC_ENT, KC_TILD,
                                                             KC_NO,KC_NO,KC_NO,KC_NO, KC_NO ,  KC_NO, KC_NO,  KC_LSFT, MO(WM_SPLIT__WM_NAV_3),KC_NO,KC_NO,KC_NO
    ),

    [WM_SPLIT__WM_NAV_3] = LAYOUT(
            LGUI(KC_Q), LGUI(KC_V), LGUI(KC_H), LGUI(KC_F), KC_NO,        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
            LGUI(KC_R), LGUI(KC_W), LGUI(KC_S), LGUI(KC_E), LGUI(KC_G),   LGUI(KC_J), LGUI(KC_K), LGUI(KC_L), LGUI(KC_SCLN), LGUI(KC_A),
            KC_NO, KC_NO, KC_NO, SGUI(KC_Q), SGUI(KC_R),KC_NO,              KC_NO,     LGUI(KC_D), LGUI(KC_ENT), KC_NO, KC_NO, KC_NO,
                                         KC_NO,KC_NO,KC_NO,KC_NO, MO(BOOT__WM_MOVE_4),KC_NO, KC_NO,                  MO(BOOT__WM_MOVE_4), KC_NO,KC_NO,KC_NO,KC_NO
    ),

    [BOOT__WM_MOVE_4] = LAYOUT(
            QK_BOOT, KC_NO, KC_NO, KC_NO, KC_NO,         KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,           SGUI(KC_J), SGUI(KC_K), SGUI(KC_L), SGUI(KC_SCLN), KC_NO,
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,KC_NO,           KC_NO,KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                               KC_NO,KC_NO,KC_NO, KC_NO,KC_NO, KC_NO,           KC_NO, KC_NO, KC_NO,KC_NO,KC_NO, KC_NO
    ),

    [NO__F_KEYS_5] = LAYOUT(
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,        KC_NO, KC_F7, KC_F8, KC_F9, KC_F10,
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,        KC_NO, KC_F4, KC_F5, KC_F6, KC_F11,
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,KC_NO,KC_NO,        KC_NO, KC_F1, KC_F2, KC_F3, KC_F12,
                                KC_NO,KC_NO,KC_NO, KC_NO ,KC_NO, KC_NO,        KC_NO, KC_NO,KC_NO,KC_NO,KC_NO,KC_NO
    ),

    [MOUSE__WM_GO_TO_6] = LAYOUT(
            LCTL(KC_BSPC), MO(NO__VIM_8), MO(NO__VIM_SIZES_9), KC_WH_U, KC_NO,         KC_NO, LGUI(KC_7), LGUI(KC_8), LGUI(KC_9), KC_NO,
            KC_BSPC, KC_BTN3, KC_BTN2, KC_BTN1, LGUI(KC_MINS),   KC_NO, LGUI(KC_4), LGUI(KC_5), LGUI(KC_6), LGUI(KC_0),
            TG(MOUSE__WM_GO_TO_6), KC_NO, KC_NO, KC_WH_D, KC_NO,KC_NO,                 KC_NO, KC_NO, LGUI(KC_1), LGUI(KC_2), LGUI(KC_3), KC_NO,
                           KC_NO,KC_NO,KC_NO,  KC_NO, KC_NO,KC_NO,                 KC_NO,MO(NO__F_KEYS_5), MO(RGB__WM_MOVE_TO_7),KC_NO,KC_NO,KC_NO
    ),

    [RGB__WM_MOVE_TO_7] = LAYOUT(
            RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI,          KC_NO, SGUI(KC_7), SGUI(KC_8), SGUI(KC_9), KC_NO,
            RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD,          KC_NO, SGUI(KC_4), SGUI(KC_5), SGUI(KC_6), SGUI(KC_0),
            RGB_RMOD, KC_NO, KC_NO, KC_NO, KC_NO,KC_NO,               KC_NO,  KC_NO, SGUI(KC_1), SGUI(KC_2), SGUI(KC_3), KC_NO,
                                   KC_NO,KC_NO,KC_NO, KC_NO, KC_NO,KC_NO,                 KC_NO, KC_NO,KC_NO,KC_NO,KC_NO, KC_NO
    ),
    [NO__VIM_8] = LAYOUT(
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,        VIM_SPLIT_CLOSE, VIM_SPLIT_H, VIM_SPLIT_V, KC_NO, KC_NO,
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,        VIM_SPLIT_TO_LEFT, VIM_SPLIT_TO_DOWN, VIM_SPLIT_TO_UP, VIM_SPLIT_TO_RIGHT, KC_NO,
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,KC_NO,       KC_NO, VIM_ONLY, VIM_EQUALIZE, RCS(KC_PLUS), RCS(KC_MINUS), RCS(KC_BSPC),
                                 KC_NO,KC_NO,KC_NO,KC_NO, KC_NO,       KC_NO, KC_NO, KC_NO,KC_NO,KC_NO,KC_NO,
    ),
    [NO__VIM_SIZES_9] = LAYOUT(
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,        VIM_DECREASE_W_5, VIM_INCREASE_H_5, VIM_DECREASE_H_5, VIM_INCREASE_W_5, KC_NO,
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,KC_NO,       KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                                KC_NO,KC_NO,KC_NO, KC_NO, KC_NO, KC_NO,     KC_NO,  KC_NO, KC_NO, KC_NO,KC_NO,KC_NO
    ),
    // empty for new layers
    /* [] = LAYOUT( */
    /*         KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, */
    /*         KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, */
    /*         KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, */
    /*                              KC_NO, KC_NO,        KC_NO, KC_NO */
    /* ), */
};



bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case VIM_SPLIT_H:
        if (record->event.pressed) {
            SEND_STRING(SS_LCTL("w") "s");
        }
        break;
    case VIM_SPLIT_V:
        if (record->event.pressed) {
            SEND_STRING(SS_LCTL("w") "v");
        }
        break;
    case VIM_SPLIT_TO_LEFT:
        if (record->event.pressed) {
            SEND_STRING(SS_LCTL("w") SS_TAP(X_LEFT));
        }
        break;
    case VIM_SPLIT_TO_DOWN:
        if (record->event.pressed) {
            SEND_STRING(SS_LCTL("w") SS_TAP(X_DOWN));
        }
        break;
    case VIM_SPLIT_TO_UP:
        if (record->event.pressed) {
            SEND_STRING(SS_LCTL("w") SS_TAP(X_UP));
        }
        break;
    case VIM_SPLIT_TO_RIGHT:
        if (record->event.pressed) {
            SEND_STRING(SS_LCTL("w") SS_TAP(X_RIGHT));
        }
        break;
    case VIM_SPLIT_CLOSE:
        if (record->event.pressed) {
            SEND_STRING(SS_LCTL("w") "c");
        }
        break;
    case VIM_INCREASE_H_5:
        if (record->event.pressed) {
            SEND_STRING("5" SS_LCTL("w") "+");
        }
        break;
    case VIM_DECREASE_H_5:
        if (record->event.pressed) {
            SEND_STRING("5" SS_LCTL("w") "-");
        }
        break;
    case VIM_INCREASE_W_5:
        if (record->event.pressed) {
            SEND_STRING("5" SS_LCTL("w") ">");
        }
        break;
    case VIM_DECREASE_W_5:
        if (record->event.pressed) {
            SEND_STRING("5" SS_LCTL("w") "<");
        }
        break;
    case VIM_ONLY:
        if (record->event.pressed) {
            SEND_STRING(SS_LCTL("w") "o");
        }
        break;
    case VIM_EQUALIZE:
        if (record->event.pressed) {
            SEND_STRING(SS_LCTL("w") "=");
        }
        break;

/*     case QMKURL: */
/*         if (record->event.pressed) { */
/*             // when keycode QMKURL is pressed */
/*             SEND_STRING("https://qmk.fm/\n"); */
/*         } else { */
/*             // when keycode QMKURL is released */
/*         } */
/*         break; */

/*     case MY_OTHER_MACRO: */
/*         if (record->event.pressed) { */
/*            SEND_STRING(SS_LCTL("ac")); // selects all and copies */
/*         } */
/*         break; */
    }
    return true;
};

