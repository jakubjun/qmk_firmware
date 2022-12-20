#include QMK_KEYBOARD_H

/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(KC_NO, KC_Q, KC_D, KC_R, KC_W, KC_B, KC_J, KC_F, KC_U, KC_P, KC_SCLN, KC_NO, KC_NO, KC_A, KC_S, KC_H, KC_T, KC_G, KC_Y, KC_N, KC_E, KC_O, KC_I, KC_NO, KC_NO, KC_Z, KC_X, KC_M, KC_C, KC_V, KC_K, KC_L, KC_COMM, KC_DOT, KC_SLSH, KC_NO, LCTL(LSFT(KC_BSPC)), MO(2), MO(6), KC_SPC, MO(1), KC_NO),
    [1] = LAYOUT_split_3x6_3(KC_NO, KC_EXLM, KC_AT, KC_EQL, KC_DLR, KC_PERC, LGUI(KC_B), KC_7, KC_8, KC_9, KC_DOT, KC_NO, KC_NO, KC_LPRN, KC_ASTR, KC_CIRC, KC_AMPR, KC_RPRN, LGUI(KC_U), KC_4, KC_5, KC_6, KC_0, KC_NO, KC_NO, KC_LBRC, KC_RBRC, KC_HASH, KC_LCBR, KC_RCBR, KC_CAPS, KC_1, KC_2, KC_3, KC_PPLS, KC_NO, KC_NO, MO(3), KC_LCTL, KC_NO, KC_TRNS, KC_NO),
    [2] = LAYOUT_split_3x6_3(KC_NO, LCTL(KC_C), LCTL(KC_V), KC_GRV, KC_BSLS, SGUI(KC_SPC), KC_UNDS, KC_MINS, KC_QUOT, KC_DQUO, KC_PIPE, KC_NO, KC_NO, KC_ESC, KC_LCTL, KC_LGUI, KC_LSFT, KC_LALT, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_PSCR, KC_NO, KC_NO, LGUI(KC_SPC), LGUI(KC_M), LGUI(KC_N), LGUI(KC_MINS), SGUI(KC_MINS), KC_TAB, KC_PGDN, KC_PGUP, KC_ENT, KC_TILD, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_LSFT, MO(3), KC_NO),
    [3] = LAYOUT_split_3x6_3(KC_NO, LGUI(KC_Q), LGUI(KC_V), LGUI(KC_H), LGUI(KC_F), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, LGUI(KC_R), LGUI(KC_W), LGUI(KC_S), LGUI(KC_E), LGUI(KC_G), LGUI(KC_J), LGUI(KC_K), LGUI(KC_L), LGUI(KC_SCLN), LGUI(KC_A), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, SGUI(KC_Q), SGUI(KC_R), LGUI(KC_D), LGUI(KC_ENT), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, MO(4), MO(4), KC_TRNS, KC_NO),
    [4] = LAYOUT_split_3x6_3(KC_NO, QK_BOOT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, SGUI(KC_J), SGUI(KC_K), SGUI(KC_L), SGUI(KC_SCLN), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_NO, LCTL(KC_5)),
    [5] = LAYOUT_split_3x6_3(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F7, KC_F8, KC_F9, KC_F10, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F4, KC_F5, KC_F6, KC_F11, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F1, KC_F2, KC_F3, KC_F12, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO),
    [6] = LAYOUT_split_3x6_3(KC_NO, LCTL(KC_BSPC), KC_NO, KC_NO, KC_WH_U, KC_NO, KC_NO, LGUI(KC_7), LGUI(KC_8), LGUI(KC_9), KC_NO, KC_NO, KC_NO, KC_BSPC, KC_BTN3, KC_BTN2, KC_BTN1, KC_NO, KC_NO, LGUI(KC_4), LGUI(KC_5), LGUI(KC_6), LGUI(KC_0), KC_NO, KC_NO, TG(6), KC_NO, KC_NO, KC_WH_D, KC_NO, KC_NO, LGUI(KC_1), LGUI(KC_2), LGUI(KC_3), KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, MO(5), MO(7), KC_NO),
    [7] = LAYOUT_split_3x6_3(KC_NO, RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, KC_NO, SGUI(KC_7), SGUI(KC_8), SGUI(KC_9), KC_NO, KC_NO, KC_NO, RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, KC_NO, SGUI(KC_4), SGUI(KC_5), SGUI(KC_6), SGUI(KC_0), KC_NO, KC_NO, RGB_RMOD, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, SGUI(KC_1), SGUI(KC_2), SGUI(KC_3), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO)
    /* [0] = LAYOUT_split_3x6_3(KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_ESC, KC_LGUI, MO(1), KC_SPC, KC_ENT, MO(2), KC_RALT), */
    /* [1] = LAYOUT_split_3x6_3(KC_TAB, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC, KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, XXXXXXX, XXXXXXX, KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LGUI, _______, KC_SPC, KC_ENT, MO(3), KC_RALT), */
    /* [2] = LAYOUT_split_3x6_3(KC_TAB, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC, KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MINS, KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS, KC_GRV, KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE, KC_TILD, KC_LGUI, MO(3), KC_SPC, KC_ENT, _______, KC_RALT), */
    /* [3] = LAYOUT_split_3x6_3(QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LGUI, _______, KC_SPC, KC_ENT, _______, KC_RALT) */
};

#ifdef ENCODER_ENABLE
bool encoder_update_user(uint8_t index, bool clockwise) {
    // 0 is left-half encoder,
    // 1 is right-half encoder

    // left encoder
    if (index == 0) {
        switch (biton32(layer_state)) {
            case 1:
                if (clockwise) {
                    tap_code16(LCTL(LSFT(KC_PLUS)));
                } else {
                    tap_code16(LCTL(LSFT(KC_MINS)));
                }
                break;
            case 3:
                if (clockwise) {
                    tap_code16(LCTL(KC_R));
                } else {
                    tap_code16(KC_U);
                }
                break;
            case 4:
                if (clockwise) {
                    tap_code16(KC_BRID);
                } else {
                    tap_code16(KC_BRIU);
                }
                break;
            default:
                if (clockwise) {
                    tap_code16(KC_PGDN);
                } else {
                    tap_code16(KC_PGUP);
                }
                break;
        }
    } else { // right
        switch (biton32(layer_state)) {
            case 2:
                if (clockwise) {
                    tap_code16(LCTL(KC_A));
                } else {
                    tap_code16(LCTL(KC_X));
                }
                break;
            case 3:
                if (clockwise) {
                    tap_code16(LCTL(KC_2));
                } else {
                    tap_code16(LCTL(KC_1));
                }
                break;
            case 4:
                if (clockwise) {
                    tap_code16(LCTL(KC_3));
                } else {
                    tap_code16(LCTL(KC_4));
                }
                break;
            case 6:
                if (clockwise) {
                    tap_code16(LCTL(KC_O));
                } else {
                    tap_code16(LCTL(KC_I));
                }
                break;
            default:
                if (clockwise) {
                        tap_code16(LSFT(KC_N));
                    } else {
                        tap_code16(KC_N);
                    }
                }
        }

    return false;
}
#endif

#ifdef OLED_ENABLE
bool oled_task_user(void) {
    // A 128x32 OLED rotated 90 degrees is 5 characters wide and 16 characters tall
    // This example string should fill that neatly
    const char *text = PSTR(" e");

    if (is_keyboard_master()) {
        switch (get_highest_layer(layer_state)) {
            oled_clear();
            case 0:
                oled_write_ln_P(PSTR("0:abc\n"), false);
                oled_write_ln_P(PSTR("[pgu,rst][2][6]"), false);
                oled_write_ln_P(PSTR("[spc][1][vim search]"), false);
                break;
            case 1:
                oled_write_ln_P(PSTR("1:sym,num\n"), false);
                oled_write_ln_P(PSTR("[zoom][3][ctl]"), false);
                oled_write_ln_P(PSTR("[_][_][_]"), false);
                break;
            case 2:
                oled_write_ln_P(PSTR("2:enter,nav\n"), false);
                oled_write_ln_P(PSTR("[_][_][_]"), false);
                oled_write_ln_P(PSTR("[sft][3][incr]"), false);
                break;
            case 3:
                oled_write_ln_P(PSTR("3:wm move dir\n"), false);
                oled_write_ln_P(PSTR(""), false);
                oled_write_ln_P(PSTR(""), false);
                break;
            case 4:
                oled_write_ln_P(PSTR("4:wm shift dir\n"), false);
                oled_write_ln_P(PSTR(""), false);
                oled_write_ln_P(PSTR(""), false);
                /* oled_write_ln_P(PSTR("[_][_][_]"), false); */
                /* oled_write_ln_P(PSTR("[sft][3][incr]"), false); */
                break;
            case 5:
                oled_write_ln_P(PSTR("5:fun\n"), false);
                oled_write_ln_P(PSTR(""), false);
                oled_write_ln_P(PSTR(""), false);
                /* oled_write_ln_P(PSTR("[_][_][_]"), false); */
                /* oled_write_ln_P(PSTR("[sft][3][incr]"), false); */
                break;
            case 6:
                oled_write_ln_P(PSTR("6:wm move num\n"), false);
                oled_write_ln_P(PSTR(""), false);
                oled_write_ln_P(PSTR(""), false);
                /* oled_write_ln_P(PSTR("[_][_][_]"), false); */
                /* oled_write_ln_P(PSTR("[sft][3][incr]"), false); */
                break;
            case 7:
                oled_write_ln_P(PSTR("7:rgb, wm shift num\n"), false);
                oled_write_ln_P(PSTR(""), false);
                oled_write_ln_P(PSTR(""), false);
                /* oled_write_ln_P(PSTR("[_][_][_]"), false); */
                /* oled_write_ln_P(PSTR("[sft][3][incr]"), false); */
                break;
            case 8:
                oled_write_ln_P(PSTR("8\n"), false);
                oled_write_ln_P(PSTR(""), false);
                oled_write_ln_P(PSTR(""), false);
                /* oled_write_ln_P(PSTR("[_][_][_]"), false); */
                /* oled_write_ln_P(PSTR("[sft][3][incr]"), false); */
                break;
            default:
                // Or use the write_ln shortcut over adding '\n' to the end of your string
                oled_write_ln_P(PSTR("Undefined"), false);
        }
    } else {
        oled_write_P(text, false);
    }
    return false;
}
#endif
