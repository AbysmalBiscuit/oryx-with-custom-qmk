#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
};



enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
  DANCE_4,
  DANCE_5,
  DANCE_6,
};

#define DUAL_FUNC_0 LT(12, KC_Q)
#define DUAL_FUNC_1 LT(15, KC_T)
#define DUAL_FUNC_2 LT(1, KC_F6)
#define DUAL_FUNC_3 LT(14, KC_F14)
#define DUAL_FUNC_4 LT(15, KC_R)
#define DUAL_FUNC_5 LT(14, KC_H)
#define DUAL_FUNC_6 LT(6, KC_4)
#define DUAL_FUNC_7 LT(14, KC_F15)
#define DUAL_FUNC_8 LT(11, KC_F24)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           TD(DANCE_0),                                    DUAL_FUNC_2,    KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,
    KC_DELETE,      KC_Q,           KC_W,           KC_F,           KC_P,           KC_G,           DUAL_FUNC_0,                                    KC_BSLS,        KC_J,           KC_L,           KC_U,           KC_Y,           KC_SCLN,        KC_BSLS,
    KC_BSPC,        KC_A,           KC_R,           KC_S,           KC_T,           KC_D,           DUAL_FUNC_1,                                                                    KC_EQUAL,       KC_H,           KC_N,           KC_E,           KC_I,           KC_O,           DUAL_FUNC_3,    
    MT(MOD_LSFT, KC_LBRC),KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_K,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       MT(MOD_RSFT, KC_RBRC),
    SC_LCPO,        MO(5),          MO(6),          KC_LEFT,        KC_RIGHT,       SC_LCPO,                                                                                                        SC_RCPC,        KC_UP,          KC_DOWN,        KC_NO,          KC_NO,          SC_RCPC,
    KC_SPACE,       TD(DANCE_1),    KC_LEFT_GUI,                    MT(MOD_LSFT, KC_BSPC),MT(MOD_RALT, KC_ESCAPE),LT(7, KC_ENTER)
  ),
  [1] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_HOME,                                        KC_PAGE_UP,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_END,                                                                         KC_PGDN,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_LEFT_GUI,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TD(DANCE_2),                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT,        KC_RIGHT,       KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_UP,          KC_DOWN,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          TO(10),                                         KC_NO,          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         
    KC_TRANSPARENT, KC_EXLM,        KC_AT,          KC_HASH,        KC_LCBR,        KC_RCBR,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_7,           KC_8,           KC_9,           KC_MINUS,       KC_DELETE,      KC_F12,         
    KC_TRANSPARENT, KC_DLR,         KC_PERC,        DUAL_FUNC_3,    KC_LPRN,        KC_RPRN,        KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_4,           KC_5,           KC_6,           KC_PLUS,        KC_BSPC,        KC_ENTER,       
    KC_TRANSPARENT, KC_CIRC,        KC_AMPR,        KC_ASTR,        KC_LBRC,        KC_RBRC,                                        KC_1,           KC_2,           KC_3,           KC_ASTR,        KC_SLASH,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_0,           KC_SCLN,        KC_DOT,         KC_COMMA,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          TD(DANCE_3),                                    KC_TRANSPARENT, KC_NUM,         KC_KP_SLASH,    KC_KP_ASTERISK, KC_KP_MINUS,    KC_PSCR,        KC_NO,          
    KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_HOME,                                        KC_PAGE_UP,     KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_KP_PLUS,     KC_NO,          KC_NO,          
    KC_TRANSPARENT, KC_F11,         KC_F12,         KC_NO,          KC_NO,          KC_NO,          KC_END,                                                                         KC_PGDN,        KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_KP_PLUS,     KC_NO,          KC_NO,          
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_UP,          KC_NO,          KC_NO,                                          KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_KP_ENTER,    KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_KP_0,        KC_KP_DOT,      KC_KP_ENTER,    KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_moonlander(
    AU_TOGG,        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          TD(DANCE_4),                                    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_MS_BTN3,     KC_NO,          KC_NO,          QK_BOOT,        
    MU_TOGG,        KC_NO,          KC_NO,          KC_MS_WH_UP,    KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_MS_BTN1,     KC_MS_UP,       KC_MS_BTN2,     KC_NO,          KC_NO,          
    MU_NEXT,        KC_NO,          KC_MS_WH_LEFT,  KC_MS_WH_DOWN,  KC_MS_WH_RIGHT, KC_NO,          KC_NO,                                                                          KC_NO,          KC_NO,          KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_NO,          KC_MEDIA_PLAY_PAUSE,
    KC_MS_ACCEL1,   KC_MS_ACCEL2,   KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_NO,          KC_MEDIA_STOP,  
    KC_MS_ACCEL0,   KC_NO,          KC_TRANSPARENT, KC_NO,          MOON_LED_LEVEL, RGB_TOG,                                                                                                        RGB_MODE_FORWARD,KC_AUDIO_VOL_UP,KC_AUDIO_VOL_DOWN,KC_AUDIO_MUTE,  KC_NO,          KC_NO,          
    RGB_VAD,        RGB_VAI,        TOGGLE_LAYER_COLOR,                RGB_SLD,        RGB_SPD,        RGB_SPI
  ),
  [7] = LAYOUT_moonlander(
    KC_GRAVE,       KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          TO(2),                                          KC_NO,          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         
    KC_TRANSPARENT, KC_ESCAPE,      DUAL_FUNC_4,    LCTL(KC_F),     LCTL(KC_P),     KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_PAGE_UP,     KC_HOME,        KC_UP,          KC_END,         KC_DELETE,      KC_F12,         
    KC_TRANSPARENT, DUAL_FUNC_5,    DUAL_FUNC_6,    DUAL_FUNC_7,    DUAL_FUNC_8,    KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_PGDN,        KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_BSPC,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_PC_UNDO,     KC_PC_CUT,      KC_PC_COPY,     KC_PC_PASTE,    KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_LEFT,        KC_RIGHT,       KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_UP,          KC_DOWN,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [8] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           TD(DANCE_5),                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_Y,                                           KC_TRANSPARENT, KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLS,        
    KC_LEFT_CTRL,   KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_H,                                                                           KC_TRANSPARENT, KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOTE,       
    KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_TRANSPARENT, 
    KC_7,           KC_8,           KC_9,           KC_LEFT,        KC_RIGHT,       KC_LEFT_ALT,                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_SPACE,       KC_BSPC,        KC_ENTER,                       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [9] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           TD(DANCE_6),                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_Y,           KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_H,           KC_LEFT_CTRL,   KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_B,           KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_C,           KC_V,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_7,           KC_8,           KC_9,           KC_LEFT,        KC_RIGHT,       KC_LEFT_ALT,                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_SPACE,       KC_BSPC,        KC_ENTER,                       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [10] = LAYOUT_moonlander(
    KC_NO,          TO(1),          TO(2),          TO(3),          TO(4),          TO(5),          KC_NO,                                          KC_NO,          TO(6),          KC_NO,          TO(8),          TO(9),          TO(0),          KC_NO,          
    KC_NO,          TO(3),          KC_NO,          KC_NO,          KC_NO,          TO(8),          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          TO(4),          KC_NO,          KC_NO,          KC_NO,                                                                          KC_NO,          KC_NO,          TO(1),          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          TO(0),          KC_NO,          KC_NO,                                          KC_NO,          TO(2),          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                                                          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,                          KC_NO,          KC_NO,          KC_NO
  ),
};

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT(
  'L', 'L', 'L', 'L', 'L', 'L', 'L',    'R', 'R', 'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L', 'L', 'L',    'R', 'R', 'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L', 'L', 'L',    'R', 'R', 'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L', 'L',                      'R', 'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L',          '*',    '*',          'R', 'R', 'R', 'R', 'R',
                                      '*', '*', '*',    '*', '*', '*'
);

bool get_chordal_hold(uint16_t tap_hold_keycode, keyrecord_t* tap_hold_record,
                      uint16_t other_keycode, keyrecord_t* other_record) {
  // Exceptionally allow some one-handed chords for hotkeys.
  // Firs all allowed keys, then non-allowed keys.
  switch (tap_hold_keycode) {
    // Left hand shift [ space-cadet, always allow chord
    case MT(MOD_LSFT, KC_LBRC):
    // Right hand shift ] space-cadet, always allow chord
    case MT(MOD_RSFT, KC_RBRC):
      return true;

    // Left hand dual `~ button, never allow chord
    case DUAL_FUNC_0:
    // Left hand dual _- button, never allow chord
    case DUAL_FUNC_1:
    // Right hand dual '" button, never allow chord
    case DUAL_FUNC_3:
      return false;
  }
  // Otherwise defer to the opposite hands rule.
  return get_chordal_hold_default(tap_hold_record, other_record);
}


const uint16_t PROGMEM combo0[] = { KC_H, KC_N, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_F, KC_P, COMBO_END};
const uint16_t PROGMEM combo2[] = { KC_C, KC_V, COMBO_END};
const uint16_t PROGMEM combo3[] = { KC_ESCAPE, KC_1, COMBO_END};
const uint16_t PROGMEM combo4[] = { KC_P, KC_G, COMBO_END};
const uint16_t PROGMEM combo5[] = { KC_V, KC_B, COMBO_END};
const uint16_t PROGMEM combo6[] = { KC_T, KC_D, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, KC_ESCAPE),
    COMBO(combo1, KC_LCBR),
    COMBO(combo2, KC_LBRC),
    COMBO(combo3, KC_GRAVE),
    COMBO(combo4, KC_RCBR),
    COMBO(combo5, KC_RBRC),
    COMBO(combo6, KC_MINUS),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_1:
            return TAPPING_TERM -25;
        case KC_2:
            return TAPPING_TERM -25;
        case KC_3:
            return TAPPING_TERM -25;
        case KC_4:
            return TAPPING_TERM -25;
        case KC_5:
            return TAPPING_TERM -25;
        case KC_X:
            return TAPPING_TERM + 25;
        case KC_V:
            return TAPPING_TERM + 25;
        case TD(DANCE_1):
            return TAPPING_TERM + 50;
        case KC_6:
            return TAPPING_TERM -25;
        case KC_7:
            return TAPPING_TERM -25;
        case KC_8:
            return TAPPING_TERM -25;
        case KC_9:
            return TAPPING_TERM -25;
        case KC_0:
            return TAPPING_TERM -25;
        case KC_M:
            return TAPPING_TERM + 25;
        case KC_COMMA:
            return TAPPING_TERM + 25;
        case KC_DOT:
            return TAPPING_TERM + 25;
        case KC_SLASH:
            return TAPPING_TERM + 25;
        case MT(MOD_RALT, KC_ESCAPE):
            return TAPPING_TERM + 50;
        case DUAL_FUNC_3:
            return TAPPING_TERM + 50;
        case DUAL_FUNC_5:
            return TAPPING_TERM -25;
        case DUAL_FUNC_7:
            return TAPPING_TERM -25;
        case DUAL_FUNC_8:
            return TAPPING_TERM -25;
        default:
            return TAPPING_TERM;
    }
}


extern rgb_config_t rgb_matrix_config;

RGB hsv_to_rgb_with_value(HSV hsv) {
  RGB rgb = hsv_to_rgb( hsv );
  float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
  return (RGB){ f * rgb.r, f * rgb.g, f * rgb.b };
}

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {157,170,255}, {113,242,230}, {113,242,230}, {200,255,122}, {200,255,122}, {20,255,230}, {137,255,230}, {137,255,230}, {137,255,230}, {242,229,230}, {20,255,230}, {137,255,230}, {137,255,230}, {137,255,230}, {242,229,230}, {20,255,230}, {137,255,230}, {137,255,230}, {137,255,230}, {39,229,230}, {20,255,230}, {137,255,230}, {137,255,230}, {137,255,230}, {39,229,230}, {20,255,230}, {137,255,230}, {137,255,230}, {137,255,230}, {242,229,230}, {160,242,242}, {160,242,242}, {6,171,255}, {6,171,255}, {200,255,122}, {200,255,122}, {160,242,242}, {160,242,242}, {160,242,242}, {200,255,122}, {200,255,122}, {20,255,230}, {160,242,242}, {137,255,230}, {160,242,242}, {137,255,230}, {20,255,230}, {137,255,230}, {137,255,230}, {160,242,242}, {137,255,230}, {20,255,230}, {137,255,230}, {137,255,230}, {160,242,242}, {39,229,230}, {20,255,230}, {137,255,230}, {137,255,230}, {137,255,230}, {39,229,230}, {20,255,230}, {137,255,230}, {137,255,230}, {137,255,230}, {242,229,230}, {160,242,242}, {160,242,242}, {6,171,255}, {157,170,255}, {113,242,230}, {200,255,122} },

    [1] = { {157,170,255}, {113,242,230}, {113,242,230}, {200,255,122}, {200,255,122}, {8,229,230}, {137,255,230}, {137,255,230}, {137,255,230}, {242,229,230}, {8,229,230}, {137,255,230}, {137,255,230}, {137,255,230}, {242,229,230}, {8,229,230}, {137,255,230}, {137,255,230}, {137,255,230}, {39,229,230}, {8,229,230}, {137,255,230}, {137,255,230}, {137,255,230}, {39,229,230}, {8,229,230}, {137,255,230}, {137,255,230}, {137,255,230}, {242,229,230}, {39,229,230}, {39,229,230}, {6,171,255}, {6,171,255}, {200,255,122}, {200,255,122}, {160,242,242}, {160,242,242}, {160,242,242}, {200,255,122}, {200,255,122}, {8,229,230}, {160,242,242}, {137,255,230}, {160,242,242}, {0,0,0}, {8,229,230}, {137,255,230}, {137,255,230}, {160,242,242}, {0,0,0}, {8,229,230}, {137,255,230}, {137,255,230}, {160,242,242}, {39,229,230}, {8,229,230}, {137,255,230}, {137,255,230}, {137,255,230}, {39,229,230}, {8,229,230}, {137,255,230}, {137,255,230}, {137,255,230}, {242,229,230}, {39,229,230}, {39,229,230}, {6,171,255}, {157,170,255}, {113,242,230}, {200,255,122} },

    [2] = { {157,170,255}, {113,242,230}, {113,242,230}, {200,255,122}, {200,255,122}, {8,229,230}, {147,81,193}, {147,81,193}, {147,81,193}, {242,229,230}, {8,229,230}, {147,81,193}, {147,81,193}, {147,81,193}, {242,229,230}, {8,229,230}, {147,81,193}, {147,81,193}, {147,81,193}, {39,229,230}, {8,229,230}, {147,81,193}, {147,81,193}, {147,81,193}, {39,229,230}, {8,229,230}, {147,81,193}, {147,81,193}, {147,81,193}, {242,229,230}, {160,242,242}, {160,242,242}, {6,171,255}, {6,171,255}, {200,255,122}, {200,255,122}, {160,242,242}, {160,242,242}, {160,242,242}, {200,255,122}, {200,255,122}, {8,229,230}, {160,242,242}, {147,81,193}, {160,242,242}, {147,81,193}, {8,229,230}, {147,81,193}, {147,81,193}, {160,242,242}, {147,81,193}, {8,229,230}, {147,81,193}, {147,81,193}, {160,242,242}, {39,229,230}, {8,229,230}, {147,81,193}, {147,81,193}, {147,81,193}, {39,229,230}, {8,229,230}, {147,81,193}, {147,81,193}, {147,81,193}, {242,229,230}, {160,242,242}, {160,242,242}, {6,171,255}, {157,170,255}, {113,242,230}, {200,255,122} },

    [3] = { {157,170,255}, {113,242,230}, {113,242,230}, {200,255,122}, {200,255,122}, {20,255,230}, {200,255,122}, {200,255,122}, {200,255,122}, {242,229,230}, {20,255,230}, {200,255,122}, {200,255,122}, {200,255,122}, {242,229,230}, {20,255,230}, {200,255,122}, {200,255,122}, {200,255,122}, {39,229,230}, {20,255,230}, {200,255,122}, {200,255,122}, {200,255,122}, {39,229,230}, {20,255,230}, {200,255,122}, {200,255,122}, {200,255,122}, {242,229,230}, {160,242,242}, {160,242,242}, {6,171,255}, {6,171,255}, {200,255,122}, {200,255,122}, {160,242,242}, {160,242,242}, {160,242,242}, {200,255,122}, {200,255,122}, {20,255,230}, {200,255,122}, {160,242,242}, {160,242,242}, {200,255,122}, {20,255,230}, {200,255,122}, {200,255,122}, {160,242,242}, {200,255,122}, {20,255,230}, {200,255,122}, {200,255,122}, {160,242,242}, {39,229,230}, {20,255,230}, {200,255,122}, {200,255,122}, {200,255,122}, {39,229,230}, {20,255,230}, {200,255,122}, {200,255,122}, {200,255,122}, {242,229,230}, {160,242,242}, {160,242,242}, {6,171,255}, {157,170,255}, {113,242,230}, {200,255,122} },

    [4] = { {157,170,255}, {113,242,230}, {113,242,230}, {200,255,122}, {200,255,122}, {157,170,255}, {160,242,242}, {160,242,242}, {160,242,242}, {0,0,0}, {157,170,255}, {160,242,242}, {160,242,242}, {160,242,242}, {0,0,0}, {157,170,255}, {160,242,242}, {160,242,242}, {160,242,242}, {39,229,230}, {157,170,255}, {160,242,242}, {160,242,242}, {160,242,242}, {39,229,230}, {157,170,255}, {160,242,242}, {160,242,242}, {160,242,242}, {242,229,230}, {160,242,242}, {160,242,242}, {242,229,230}, {147,81,193}, {200,255,122}, {200,255,122}, {157,170,255}, {157,170,255}, {147,81,193}, {200,255,122}, {200,255,122}, {157,170,255}, {113,242,230}, {113,242,230}, {160,242,242}, {160,242,242}, {157,170,255}, {160,242,242}, {160,242,242}, {160,242,242}, {160,242,242}, {157,170,255}, {20,255,230}, {20,255,230}, {20,255,230}, {160,242,242}, {157,170,255}, {20,255,230}, {20,255,230}, {20,255,230}, {20,255,230}, {157,170,255}, {20,255,230}, {20,255,230}, {20,255,230}, {0,0,0}, {160,242,242}, {160,242,242}, {6,171,255}, {0,0,0}, {113,242,230}, {200,255,122} },

    [5] = { {157,170,255}, {113,242,230}, {113,242,230}, {200,255,122}, {200,255,122}, {157,170,255}, {157,170,255}, {157,170,255}, {0,0,0}, {0,0,0}, {157,170,255}, {157,170,255}, {157,170,255}, {0,0,0}, {39,229,230}, {157,170,255}, {157,170,255}, {0,0,0}, {39,229,230}, {39,229,230}, {157,170,255}, {157,170,255}, {0,0,0}, {0,0,0}, {39,229,230}, {157,170,255}, {157,170,255}, {0,0,0}, {0,0,0}, {242,229,230}, {39,229,230}, {39,229,230}, {242,229,230}, {6,171,255}, {200,255,122}, {200,255,122}, {0,0,0}, {0,0,0}, {0,0,0}, {200,255,122}, {200,255,122}, {157,170,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {160,242,242}, {160,242,242}, {160,242,242}, {147,81,193}, {147,81,193}, {160,242,242}, {20,255,230}, {20,255,230}, {20,255,230}, {160,242,242}, {160,242,242}, {20,255,230}, {20,255,230}, {20,255,230}, {20,255,230}, {157,170,255}, {20,255,230}, {20,255,230}, {20,255,230}, {242,229,230}, {39,229,230}, {39,229,230}, {6,171,255}, {157,170,255}, {113,242,230}, {200,255,122} },

    [6] = { {113,242,230}, {113,242,230}, {113,242,230}, {200,255,122}, {200,255,122}, {0,0,0}, {0,0,0}, {0,0,0}, {200,255,122}, {0,0,0}, {0,0,0}, {0,0,0}, {39,229,230}, {0,0,0}, {0,0,0}, {0,0,0}, {39,229,230}, {39,229,230}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {39,229,230}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {242,229,230}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {157,170,255}, {157,170,255}, {0,241,255}, {0,0,0}, {113,242,230}, {113,242,230}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {160,242,242}, {39,229,230}, {113,242,230}, {113,242,230}, {160,242,242}, {39,229,230}, {39,229,230}, {113,242,230}, {113,242,230}, {0,0,0}, {160,242,242}, {30,229,230}, {0,0,0}, {113,242,230}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {8,229,230}, {0,0,0}, {0,0,0}, {157,170,255}, {242,229,230}, {0,0,255}, {6,171,255} },

    [7] = { {160,242,242}, {113,242,230}, {242,229,230}, {200,255,122}, {200,255,122}, {157,170,255}, {157,170,255}, {200,255,122}, {157,170,255}, {6,171,255}, {157,170,255}, {39,229,230}, {39,229,230}, {157,170,255}, {6,171,255}, {157,170,255}, {157,170,255}, {200,255,122}, {157,170,255}, {39,229,230}, {157,170,255}, {157,170,255}, {200,255,122}, {157,170,255}, {39,229,230}, {157,170,255}, {137,255,230}, {137,255,230}, {137,255,230}, {242,229,230}, {160,242,242}, {160,242,242}, {147,81,193}, {147,81,193}, {200,255,122}, {200,255,122}, {157,170,255}, {157,170,255}, {160,242,242}, {200,255,122}, {200,255,122}, {157,170,255}, {113,242,230}, {113,242,230}, {160,242,242}, {6,171,255}, {157,170,255}, {39,229,230}, {8,229,230}, {160,242,242}, {6,171,255}, {157,170,255}, {8,229,230}, {8,229,230}, {160,242,242}, {39,229,230}, {157,170,255}, {39,229,230}, {8,229,230}, {137,255,230}, {39,229,230}, {157,170,255}, {39,229,230}, {39,229,230}, {137,255,230}, {0,0,0}, {160,242,242}, {160,242,242}, {147,81,193}, {147,81,193}, {113,242,230}, {200,255,122} },

    [8] = { {157,170,255}, {200,255,122}, {200,255,122}, {200,255,122}, {20,255,230}, {20,255,230}, {137,255,230}, {160,242,230}, {137,255,230}, {20,255,230}, {20,255,230}, {160,242,230}, {160,242,230}, {137,255,230}, {20,255,230}, {20,255,230}, {137,255,230}, {160,242,230}, {137,255,230}, {39,229,230}, {20,255,230}, {137,255,230}, {137,255,230}, {137,255,230}, {39,229,230}, {20,255,230}, {137,255,230}, {137,255,230}, {137,255,230}, {242,229,230}, {137,255,230}, {137,255,230}, {147,81,193}, {113,242,230}, {147,81,193}, {200,255,122}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [9] = { {157,170,255}, {137,255,230}, {137,255,230}, {137,255,230}, {20,255,230}, {20,255,230}, {200,255,122}, {200,255,122}, {200,255,122}, {20,255,230}, {20,255,230}, {137,255,230}, {160,242,230}, {137,255,230}, {20,255,230}, {20,255,230}, {160,242,230}, {160,242,230}, {137,255,230}, {39,229,230}, {20,255,230}, {137,255,230}, {160,242,230}, {137,255,230}, {39,229,230}, {20,255,230}, {137,255,230}, {137,255,230}, {137,255,230}, {242,229,230}, {137,255,230}, {137,255,230}, {147,81,193}, {113,242,230}, {147,81,193}, {200,255,122}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [10] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {39,229,230}, {200,255,122}, {0,0,0}, {0,0,0}, {0,0,0}, {147,81,193}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {200,255,122}, {0,0,0}, {160,242,242}, {137,255,230}, {0,0,0}, {160,242,242}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {8,229,230}, {157,170,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {137,255,230}, {0,0,0}, {0,0,0}, {0,0,0}, {242,229,230}, {157,170,255}, {0,0,0}, {0,0,0}, {0,0,0}, {242,229,230}, {157,170,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {39,229,230}, {147,81,193}, {0,0,0}, {113,242,230}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb_with_value(hsv);
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (!keyboard_config.disable_layer_led) {
    switch (biton32(layer_state)) {
      case 0:
        set_layer_color(0);
        break;
      case 1:
        set_layer_color(1);
        break;
      case 2:
        set_layer_color(2);
        break;
      case 3:
        set_layer_color(3);
        break;
      case 4:
        set_layer_color(4);
        break;
      case 5:
        set_layer_color(5);
        break;
      case 6:
        set_layer_color(6);
        break;
      case 7:
        set_layer_color(7);
        break;
      case 8:
        set_layer_color(8);
        break;
      case 9:
        set_layer_color(9);
        break;
      case 10:
        set_layer_color(10);
        break;
     default:
        if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
          rgb_matrix_set_color_all(0, 0, 0);
        }
    }
  } else {
    if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
      rgb_matrix_set_color_all(0, 0, 0);
    }
  }

  return true;
}



typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[7];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: layer_move(2); break;
        case SINGLE_HOLD: layer_move(10); break;
        case DOUBLE_TAP: layer_move(6); break;
        case DOUBLE_HOLD: layer_move(8); break;
        case DOUBLE_SINGLE_TAP: layer_move(2); break;
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
    }
    dance_state[0].step = 0;
}
void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_TAB);
        tap_code16(KC_TAB);
        tap_code16(KC_TAB);
    }
    if(state->count > 3) {
        tap_code16(KC_TAB);
    }
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(KC_TAB); break;
        case SINGLE_HOLD: register_code16(KC_LEFT_ALT); break;
        case DOUBLE_TAP: register_code16(KC_TAB); register_code16(KC_TAB); break;
        case DOUBLE_HOLD: layer_on(4); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_TAB); register_code16(KC_TAB);
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(KC_TAB); break;
        case SINGLE_HOLD: unregister_code16(KC_LEFT_ALT); break;
        case DOUBLE_TAP: unregister_code16(KC_TAB); break;
              case DOUBLE_HOLD: 
                layer_off(4);
                break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_TAB); break;
    }
    dance_state[1].step = 0;
}
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: layer_move(2); break;
        case SINGLE_HOLD: layer_move(10); break;
        case DOUBLE_TAP: layer_move(2); break;
        case DOUBLE_HOLD: layer_move(8); break;
        case DOUBLE_SINGLE_TAP: layer_move(2); break;
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
    }
    dance_state[2].step = 0;
}
void dance_3_finished(tap_dance_state_t *state, void *user_data);
void dance_3_reset(tap_dance_state_t *state, void *user_data);

void dance_3_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: layer_move(0); break;
        case SINGLE_HOLD: layer_move(10); break;
        case DOUBLE_TAP: layer_move(6); break;
        case DOUBLE_HOLD: layer_move(8); break;
        case DOUBLE_SINGLE_TAP: layer_move(0); break;
    }
}

void dance_3_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
    }
    dance_state[3].step = 0;
}
void dance_4_finished(tap_dance_state_t *state, void *user_data);
void dance_4_reset(tap_dance_state_t *state, void *user_data);

void dance_4_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case SINGLE_TAP: layer_move(0); break;
        case SINGLE_HOLD: layer_move(10); break;
        case DOUBLE_TAP: layer_move(4); break;
        case DOUBLE_HOLD: layer_move(8); break;
        case DOUBLE_SINGLE_TAP: layer_move(0); break;
    }
}

void dance_4_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {
    }
    dance_state[4].step = 0;
}
void on_dance_5(tap_dance_state_t *state, void *user_data);
void dance_5_finished(tap_dance_state_t *state, void *user_data);
void dance_5_reset(tap_dance_state_t *state, void *user_data);

void on_dance_5(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_6);
        tap_code16(KC_6);
        tap_code16(KC_6);
    }
    if(state->count > 3) {
        tap_code16(KC_6);
    }
}

void dance_5_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[5].step = dance_step(state);
    switch (dance_state[5].step) {
        case SINGLE_TAP: register_code16(KC_6); break;
        case DOUBLE_TAP: register_code16(KC_6); register_code16(KC_6); break;
        case DOUBLE_HOLD: layer_move(0); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_6); register_code16(KC_6);
    }
}

void dance_5_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[5].step) {
        case SINGLE_TAP: unregister_code16(KC_6); break;
        case DOUBLE_TAP: unregister_code16(KC_6); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_6); break;
    }
    dance_state[5].step = 0;
}
void on_dance_6(tap_dance_state_t *state, void *user_data);
void dance_6_finished(tap_dance_state_t *state, void *user_data);
void dance_6_reset(tap_dance_state_t *state, void *user_data);

void on_dance_6(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_6);
        tap_code16(KC_6);
        tap_code16(KC_6);
    }
    if(state->count > 3) {
        tap_code16(KC_6);
    }
}

void dance_6_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[6].step = dance_step(state);
    switch (dance_state[6].step) {
        case SINGLE_TAP: register_code16(KC_6); break;
        case DOUBLE_TAP: register_code16(KC_6); register_code16(KC_6); break;
        case DOUBLE_HOLD: layer_move(0); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_6); register_code16(KC_6);
    }
}

void dance_6_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[6].step) {
        case SINGLE_TAP: unregister_code16(KC_6); break;
        case DOUBLE_TAP: unregister_code16(KC_6); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_6); break;
    }
    dance_state[6].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_3_finished, dance_3_reset),
        [DANCE_4] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_4_finished, dance_4_reset),
        [DANCE_5] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_5, dance_5_finished, dance_5_reset),
        [DANCE_6] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_6, dance_6_finished, dance_6_reset),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case QK_MODS ... QK_MODS_MAX:
    // Mouse keys with modifiers work inconsistently across operating systems, this makes sure that modifiers are always
    // applied to the mouse key that was pressed.
    if (IS_MOUSE_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode))) {
    if (record->event.pressed) {
        add_mods(QK_MODS_GET_MODS(keycode));
        send_keyboard_report();
        wait_ms(2);
        register_code(QK_MODS_GET_BASIC_KEYCODE(keycode));
        return false;
      } else {
        wait_ms(2);
        del_mods(QK_MODS_GET_MODS(keycode));
      }
    }
    break;

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_GRAVE);
        } else {
          unregister_code16(KC_GRAVE);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_TILD);
        } else {
          unregister_code16(KC_TILD);
        }
      }
      return false;
    case DUAL_FUNC_1:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_UNDS);
        } else {
          unregister_code16(KC_UNDS);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_MINUS);
        } else {
          unregister_code16(KC_MINUS);
        }
      }
      return false;
    case DUAL_FUNC_2:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code(KC_LCTL);
          register_code(KC_LSFT);
          if (IS_LAYER_ON(0)) {
            register_code(KC_3);
            layer_move(3);
          } else {
            register_code(KC_1);
            layer_move(0);
          }
        } else {
            if (IS_LAYER_ON(0)) {
              unregister_code(KC_1);
            } else {
              unregister_code(KC_3);
            }
            unregister_code(KC_LSFT);
            unregister_code(KC_LCTL);
        }
      } else {
        if (record->event.pressed) {
          layer_move(1);
        } else {
          layer_move(1);
        }
      }
      return false;
    case DUAL_FUNC_3:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_QUOTE);
        } else {
          unregister_code16(KC_QUOTE);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_DQUO);
        } else {
          unregister_code16(KC_DQUO);
        }
      }
      return false;
    case DUAL_FUNC_4:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LCTL(KC_W));
        } else {
          unregister_code16(LCTL(KC_W));
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_MS_WH_UP);
        } else {
          unregister_code16(KC_MS_WH_UP);
        }
      }
      return false;
    case DUAL_FUNC_5:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LCTL(KC_A));
        } else {
          unregister_code16(LCTL(KC_A));
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_ALT);
        } else {
          unregister_code16(KC_LEFT_ALT);
        }
      }
      return false;
    case DUAL_FUNC_6:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LCTL(KC_R));
        } else {
          unregister_code16(LCTL(KC_R));
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_MS_WH_DOWN);
        } else {
          unregister_code16(KC_MS_WH_DOWN);
        }
      }
      return false;
    case DUAL_FUNC_7:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LCTL(KC_S));
        } else {
          unregister_code16(LCTL(KC_S));
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_SHIFT);
        } else {
          unregister_code16(KC_LEFT_SHIFT);
        }
      }
      return false;
    case DUAL_FUNC_8:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LCTL(KC_T));
        } else {
          unregister_code16(LCTL(KC_T));
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_CTRL);
        } else {
          unregister_code16(KC_LEFT_CTRL);
        }
      }
      return false;
    case RGB_SLD:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
  }
  return true;
}

