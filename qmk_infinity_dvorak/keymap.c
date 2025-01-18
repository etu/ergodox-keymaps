#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_extras/keymap_dvorak.h"

#define BASE 0 // default layer
#define FN 1 // functions

enum custom_keycodes {
  PLACEHOLDER = SAFE_RANGE, // can always be here
  EPRM,
  VRSN,
  RGB_SLD
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Keymap 0: Basic layer
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |   `~   |   1  |   2  |   3  |   4  |   5  | Esc  |           | Esc  |   6  |   7  |   8  |   9  |   0  |   /?   |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |   \|   |   '  |   ,  |   .  |   P  |   Y  |  [{  |           |  ]}  |   F  |   G  |   C  |   R  |   L  |   =+   |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * | Tab    |   A  |   O  |   E  |   U  |   I  |------|           |------|   D  |   H  |   T  |   N  |   S  |   -_   |
 * |--------+------+------+------+------+------|  f1  |           | SCRL |------+------+------+------+------+--------|
 * | LShift |  ;:  |   Q  |   J  |   K  |   X  |      |           |      |   B  |   M  |   W  |   V  |   Z  | RShift |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   | LGUI | SCRL | PSCR | Left | Right|                                       | Left | Down |  Up  |Right | RGui |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        | Del  | Home |       | PgUp |Ctrl/Esc|
 *                                 ,------|------|------|       |------+--------+------.
 *                                 |      |      | End  |       | PgDn |        |      |
 *                                 | Back | Left |------|       |------| Enter  |Space |
 *                                 | Space| Ctrl | LAlt |       | RAlt |        |      |
 *                                 `--------------------'       `----------------------'
 */
[BASE] = LAYOUT_ergodox(
  // left hand
  DV_GRV,          DV_1,        DV_2,          DV_3,    DV_4,    DV_5,    KC_ESC,
  DV_BSLS,         DV_QUOT,     DV_COMM,       DV_DOT,  DV_P,    DV_Y,    DV_LBRC,
  KC_TAB,          DV_A,        DV_O,          DV_E,    DV_U,    DV_I,
  KC_LSFT,         DV_SCLN,     DV_Q,          DV_J,    DV_K,    DV_X,    MO(FN),
  KC_LGUI,         KC_SCRL,     KC_PSCR,       KC_LEFT, KC_RGHT,
                                                                 KC_DEL,  KC_HOME,
                                                                          KC_END,
                                                        KC_BSPC, KC_LCTL, KC_LALT,
  // right hand
  KC_ESC,          DV_6,        DV_7,          DV_8,    DV_9,    DV_0,    DV_SLSH,
  DV_RBRC,         DV_F,        DV_G,          DV_C,    DV_R,    DV_L,    DV_EQL,
                   DV_D,        DV_H,          DV_T,    DV_N,    DV_S,    DV_MINS,
  KC_SCRL,         DV_B,        DV_M,          DV_W,    DV_V,    DV_Z,    KC_RSFT,
                                KC_LEFT,       KC_DOWN, KC_UP,   KC_RGHT, KC_RGUI,
  KC_PGUP,         KC_RCTL,
  KC_PGDN,
  KC_RALT,         KC_ENT,      KC_SPC),

/* Keymap 1: Function layer
 *
 * ,---------------------------------------------------.           ,--------------------------------------------------.
 * | Reset   |  F1  |  F2  |  F3  |  F4  |  F5  | F11  |           | F12  |  F6  |  F7  |  F8  |  F9  |  F10 | Reset  |
 * |---------+------+------+------+------+------+------|           |------+------+------+------+------+------+--------|
 * |         |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * |---------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |         |      |      |      |      |      |------|           |------|      |      |      |      |      |        |
 * |---------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |         |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * `---------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |       |      |      |      |      |                                       |      |      |      |      |      |
 *   `-----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |      |       |      |      |      |
 *                                 |      |      |------|       |------|      |      |
 *                                 |      |      |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */
[FN] = LAYOUT_ergodox(
  // left hand
  QK_BOOT, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F11,
  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_TRNS,
  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
                                               KC_NO,   KC_NO,
                                                        KC_NO,
                                      KC_NO,   KC_NO,   KC_NO,
  // right hand
  KC_F12,  KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  QK_BOOT,
  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
           KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
                    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  KC_NO,   KC_NO,
  KC_NO,
  KC_NO,   KC_NO,   KC_NO),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    // dynamically generate these.
    case EPRM:
      if (record->event.pressed) {
        eeconfig_init();
      }
      return false;
      break;
    case VRSN:
      if (record->event.pressed) {
        SEND_STRING (QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
      }
      return false;
      break;
    case RGB_SLD:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_mode(1);
        #endif
      }
      return false;
      break;
  }
  return true;
}

// Runs just one time when the keyboard initializes.
void matrix_init_user(void) {

};


// Runs constantly in the background, in a loop.
void matrix_scan_user(void) {

    uint8_t layer = biton32(layer_state);

    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    switch (layer) {
      // TODO: Make this relevant to the ErgoDox EZ.
        case 1:
            ergodox_right_led_1_on();
            break;
        case 2:
            ergodox_right_led_2_on();
            break;
        default:
            // none
            break;
    }

};
