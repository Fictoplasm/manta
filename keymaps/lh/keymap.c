#include "manta.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	KEYMAP(
		KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P,
		KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_ENT,
		CTL_T(KC_Z), ALT_T(KC_X), GUI_T(KC_C), KC_V, LT(1, KC_B), KC_LSFT, KC_SPC, LT(2, KC_N), CTL_T(KC_M), KC_COMM, KC_DOT, KC_BSPC),

	KEYMAP(
		KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0,
		KC_ESC, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_MINS, KC_EQL, KC_QUOT, KC_SCLN, KC_TRNS,
		KC_TAB, KC_LBRC, KC_RBRC, KC_BSLS, KC_TRNS, KC_TRNS, KC_TRNS, MO(2), KC_SLSH, KC_TRNS, KC_TRNS, KC_TRNS),

	KEYMAP(
		KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,
		KC_TRNS, RGB_MOD, RGB_HUI, RGB_HUD, RGB_TOG, KC_UNDS, KC_PLUS, KC_DQUO, KC_COLN, KC_TRNS,
		KC_TRNS, KC_LCBR, KC_RCBR, KC_PIPE, MO(3), KC_TRNS, KC_TRNS, KC_TRNS, KC_QUES, KC_LABK, KC_RABK, KC_TRNS),

	KEYMAP(
		KC_F1, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

};

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}
