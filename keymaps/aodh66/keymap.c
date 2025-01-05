
#include QMK_KEYBOARD_H
#include "env.h"
// ? Achordion
#include "features/achordion.h"

// * -----------------------------
// * -- Home row mods (Recurva) --
// * -----------------------------
// ? Achordion
// Left-hand
    // Default Home Row
// #define HOME_S LGUI_T(KC_S)
// #define HOME_N LALT_T(KC_N)
// #define HOME_T LSFT_T(KC_T)
// #define HOME_C LCTL_T(KC_C)

    // Bottom Home Row
#define HOME_Z LGUI_T(KC_Z)
#define HOME_X LALT_T(KC_X)
#define HOME_K LSFT_T(KC_K)
#define HOME_G LCTL_T(KC_G)

// Right-hand
    // Default Home Row
// #define HOME_H RCTL_T(KC_H)
// #define HOME_E RSFT_T(KC_E)
// #define HOME_A LALT_T(KC_A)
// #define HOME_I RGUI_T(KC_I)

    // Bottom Home Row
#define HOME_L RCTL_T(KC_L)
#define HOME_CN RSFT_T(KC_SCLN)
#define HOME_QT LALT_T(KC_QUOT)
#define HOME_CM RGUI_T(KC_COMM)

// Layers
#define UNDO LCTL(KC_Z)
#define COPY LCTL(KC_C)
#define CUT LCTL(KC_X)
#define PASTE LCTL(KC_V)

#define NXT_TAB LCTL(KC_TAB)

#define ALT_F4 LALT(KC_F4)
#define OS_SFT OSM(MOD_LSFT)
#define CTL_BSPC LCTL(KC_BSPC)
#define CTL_DEL LCTL(KC_DEL)
#define DRP_MENU LSFT(KC_F10)
#define KC_MWUP KC_MS_WH_UP
#define KC_MWDN KC_MS_WH_DOWN

// * ------------------------
// * -- Macro Declarations --
// * ------------------------
enum custom_keycodes {
    SS_QU = SAFE_RANGE,
    LINE_SEL,
    LINE_COPY,
    BRACES,
    RESIZE,
    LARCANE,
    RARCANE,
    EMAIL,
    COMMENT,
};

// * -------------------------------------------
// * -- Combos (Currently set up for Recurva) --
// * -------------------------------------------
#include "g/keymap_combo.h"

// * -----------------------
// * -- Layer Definitions --
// * -----------------------
#define _ALPHA 0
#define _AKL 5
#define _NAV 1
#define _SYM 2
#define _NUM 3
#define _FN 4


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // * Base (Recurva Colstag)
    [_ALPHA] = LAYOUT(
        //┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐                         ┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐
            KC_ESC,    KC_F,     KC_R,     KC_D,     KC_P,     KC_V,                               SS_QU,    KC_M,     KC_U,     KC_O,     KC_Y,    KC_NO,
        //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                         ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            KC_TAB,    KC_S,     KC_N,     KC_T,     KC_C,     KC_B,                              KC_DOT,    KC_H,     KC_E,     KC_A,     KC_I,    KC_ENT,
        //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                         ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            MO(_FN),  HOME_Z,   HOME_X,   HOME_K,   HOME_G,    KC_W,                               KC_J,    HOME_L,   HOME_CN,  HOME_QT,  HOME_CM, LINE_SEL,
        //└─────────┴─────────┴─────────┴─────────┴─────────┴─────────┘                         └─────────┴─────────┴─────────┴─────────┴─────────┴─────────┘
        //                    ┌─────────┬─────────┐┌─────────┬─────────┬─────────┐   ┌─────────┬─────────┬─────────┐┌─────────┬─────────┐
                                 KC_NO,    KC_NO,   MO(_NAV),   KC_SPC,  LARCANE,     RARCANE,  OS_SFT,   MO(_SYM),    KC_F6,  DRP_MENU, 
        //                    └─────────┴─────────┘└─────────┴─────────┴─────────┘   └─────────┴─────────┴─────────┘└─────────┴─────────┘ 
        //                                         ┌─────────┬─────────┐                       ┌─────────┬─────────┐
                                                    DRP_MENU, CTL_BSPC,                          CTL_DEL,  KC_F6
        //                                         └─────────┴─────────┘                       └─────────┴─────────┘
        ),

    // * Test Gallium Practice Layer
    [_AKL] = LAYOUT(
        //┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐                         ┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐
            KC_ESC,    KC_B,     KC_L,     KC_D,     KC_C,     KC_V,                               KC_J,     KC_Y,     KC_O,     KC_U,    KC_COMM,   KC_NO,
        //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                         ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            KC_TAB,    KC_N,     KC_R,     KC_T,     KC_S,     KC_G,                               KC_P,     KC_H,     KC_A,     KC_E,     KC_I,    KC_ENT,
        //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                         ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            MO(_FN),   KC_X,     SS_QU,    KC_M,     KC_W,     KC_Z,                               KC_K,     KC_F,    KC_QUOT,  KC_SCLN,  KC_DOT,  LINE_SEL,
        //└─────────┴─────────┴─────────┴─────────┴─────────┴─────────┘                         └─────────┴─────────┴─────────┴─────────┴─────────┴─────────┘
        //                    ┌─────────┬─────────┐┌─────────┬─────────┬─────────┐   ┌─────────┬─────────┬─────────┐┌─────────┬─────────┐
                                 KC_NO,    KC_NO,   MO(_NAV),   KC_SPC,  LARCANE,     RARCANE,  OS_SFT,   MO(_SYM),    KC_F6,  DRP_MENU, 
        //                    └─────────┴─────────┘└─────────┴─────────┴─────────┘   └─────────┴─────────┴─────────┘└─────────┴─────────┘ 
        //                                         ┌─────────┬─────────┐                       ┌─────────┬─────────┐
                                                    DRP_MENU, CTL_BSPC,                          CTL_DEL,  KC_F6
        //                                         └─────────┴─────────┘                       └─────────┴─────────┘
        ),

    // * Nav/Ext
    [_NAV] = LAYOUT(
        //┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐                         ┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐
            KC_ESC,   KC_ESC,   KC_CAPS,  KC_MEH,   KC_HYPR,  ALT_F4,                             KC_PGUP,  KC_HOME,  BRACES,   KC_END,   KC_BSPC,  KC_MWUP,
        //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                         ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            KC_TAB,   KC_LGUI,  KC_LALT,  KC_LSFT,  KC_LCTL,  RESIZE,                             KC_PGDN,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  KC_MWDN,
        //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                         ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            MO(_FN),   UNDO,     CUT,      COPY,     PASTE,    KC_F6,                             KC_BSPC,  NXT_TAB,  KC_TAB,   KC_DEL,   COMMENT, LINE_COPY,
        //└─────────┴─────────┴─────────┴─────────┴─────────┴─────────┘                         └─────────┴─────────┴─────────┴─────────┴─────────┴─────────┘
        //                    ┌─────────┬─────────┐┌─────────┬─────────┬─────────┐   ┌─────────┬─────────┬─────────┐┌─────────┬─────────┐
                                 KC_NO,    KC_NO,    KC_TRNS,   KC_NO,    KC_NO,      CTL_DEL,  CW_TOGG,  MO(_NUM),    KC_F6,  DRP_MENU, 
        //                    └─────────┴─────────┘└─────────┴─────────┴─────────┘   └─────────┴─────────┴─────────┘└─────────┴─────────┘ 
        //                                         ┌─────────┬─────────┐                       ┌─────────┬─────────┐
                                                    DRP_MENU, CTL_BSPC,                          CTL_DEL,  KC_F6
        //                                         └─────────┴─────────┘                       └─────────┴─────────┘
        ),

    // * Symbol
    [_SYM] = LAYOUT(
        //┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐                         ┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐
            KC_ESC,   KC_EXLM,  KC_AT,    KC_HASH,  KC_DLR,   KC_PERC,                            KC_CIRC,  KC_AMPR,  KC_ASTR,  KC_UNDS,  KC_PIPE,  KC_DEL,
        //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                         ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            KC_TAB,   KC_GRV,   KC_LT,    KC_LCBR,  KC_LPRN,  KC_LBRC,                            KC_EQL,   KC_RCTL,  KC_RSFT,  KC_RALT,  KC_RGUI,  KC_ENT,
        //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                         ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            MO(_FN),  KC_TILD,  KC_GT,    KC_RCBR,  KC_RPRN,  KC_RBRC,                            KC_PLUS,  KC_MINS,  KC_QUES,  KC_BSLS,  KC_SLSH,  KC_NO,
        //└─────────┴─────────┴─────────┴─────────┴─────────┴─────────┘                         └─────────┴─────────┴─────────┴─────────┴─────────┴─────────┘
        //                    ┌─────────┬─────────┐┌─────────┬─────────┬─────────┐   ┌─────────┬─────────┬─────────┐┌─────────┬─────────┐
                                 KC_NO,    KC_NO,   MO(_NUM),  KC_ENT,  CTL_BSPC,       KC_NO,    KC_NO,   KC_TRNS,    KC_F6,  DRP_MENU, 
        //                    └─────────┴─────────┘└─────────┴─────────┴─────────┘   └─────────┴─────────┴─────────┘└─────────┴─────────┘ 
        //                                         ┌─────────┬─────────┐                       ┌─────────┬─────────┐
                                                    DRP_MENU, CTL_BSPC,                          CTL_DEL,  KC_F6
        //                                         └─────────┴─────────┘                       └─────────┴─────────┘
        ),


    // * Numpad
    [_NUM] = LAYOUT(
        //┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐                         ┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐
            KC_ESC,   MO(_FN),   KC_NO,   QK_BOOT,  KC_NO,   KC_VOLU,                             KC_MINS,   KC_7,     KC_8,     KC_9,    KC_ASTR,  KC_SLSH,
        //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                         ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            KC_TAB,   KC_LGUI,  KC_LALT,  KC_LSFT,  KC_LCTL, KC_VOLD,                             KC_DOT,    KC_4,     KC_5,     KC_6,    KC_0,     KC_ENT,
        //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                         ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            KC_LCTL,   EMAIL,    KC_NO,   KC_BSPC,  KC_DEL,  KC_MPLY,                             KC_PLUS,   KC_1,     KC_2,     KC_3,    KC_SLSH,  KC_BSLS,
        //└─────────┴─────────┴─────────┴─────────┴─────────┴─────────┘                         └─────────┴─────────┴─────────┴─────────┴─────────┴─────────┘
        //                    ┌─────────┬─────────┐┌─────────┬─────────┬─────────┐   ┌─────────┬─────────┬─────────┐┌─────────┬─────────┐
                                 KC_NO,    KC_NO,    KC_TRNS,   KC_NO,    KC_NO,        KC_NO,    KC_NO,   KC_TRNS,    KC_F6,  DRP_MENU, 
        //                    └─────────┴─────────┘└─────────┴─────────┴─────────┘   └─────────┴─────────┴─────────┘└─────────┴─────────┘ 
        //                                         ┌─────────┬─────────┐                       ┌─────────┬─────────┐
                                                    DRP_MENU, CTL_BSPC,                          CTL_DEL,  KC_F6
        //                                         └─────────┴─────────┘                       └─────────┴─────────┘
        ),

    // * Function
    [_FN] = LAYOUT(
        //┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐                         ┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐
            KC_NO,    KC_TRNS,   KC_NO,   QK_BOOT,   KC_NO,   KC_VOLU,                            KC_NO,     KC_F7,    KC_F8,    KC_F9,   KC_NO,    KC_NO,
        //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                         ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            KC_NO,    KC_LGUI,  KC_LALT,  KC_LSFT,  KC_LCTL,  KC_VOLD,                            KC_F12,    KC_F4,    KC_F5,    KC_F6,   KC_F10,   KC_NO,
        //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                         ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
            KC_TRNS,   KC_NO,    KC_NO,    KC_NO,    KC_NO,   KC_MPLY,                            KC_F11,    KC_F1,    KC_F2,    KC_F3,   KC_NO,   TO(_ALPHA),
        //└─────────┴─────────┴─────────┴─────────┴─────────┴─────────┘                         └─────────┴─────────┴─────────┴─────────┴─────────┴─────────┘
        //                    ┌─────────┬─────────┐┌─────────┬─────────┬─────────┐   ┌─────────┬─────────┬─────────┐┌─────────┬─────────┐
                                 KC_NO,    KC_NO,    KC_TRNS,   KC_NO,    KC_NO,        KC_NO,    KC_NO,   KC_TRNS,    KC_F6,  DRP_MENU, 
        //                    └─────────┴─────────┘└─────────┴─────────┴─────────┘   └─────────┴─────────┴─────────┘└─────────┴─────────┘ 
        //                                         ┌─────────┬─────────┐                       ┌─────────┬─────────┐
                                                      KC_NO,    KC_NO,                            KC_NO,    KC_NO
        //                                         └─────────┴─────────┘                       └─────────┴─────────┘
        )
// ! add a comma above if you're going to add another layer below
};

// * ------------------
// * -- Tapping Term --
// * ------------------
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t* record) {
  switch (keycode) {
    // Increase the tapping term a little for slower ring and pinky fingers.
    // case HOME_S:
    // case HOME_N:
    // case HOME_A:
    // case HOME_I:
    case HOME_Z:
    case HOME_X:
    case HOME_QT:
    case HOME_CM:
      return TAPPING_TERM + 15;

    default:
      return TAPPING_TERM;
  }
}

// * ---------------
// * -- Accordion --
// * ---------------
bool process_record_user(uint16_t keycode, keyrecord_t* record) {
// ? Achordion
bool achordion_eager_mod(uint8_t mod) {
    switch (mod) {
        case MOD_LSFT:
        case MOD_RSFT:
        case MOD_LCTL:
        case MOD_RCTL:
            return true; // Eagerly apply Shift and Ctrl mods.

        default:
            return false;
    }
}

bool achordion_chord(uint16_t tap_hold_keycode, keyrecord_t* tap_hold_record,
                     uint16_t other_keycode, keyrecord_t* other_record) {
    // Otherwise, follow the opposite hands rule.
    return achordion_opposite_hands(tap_hold_record, other_record);
}

uint16_t achordion_timeout(uint16_t tap_hold_keycode) {
    return 800; // Use a timeout of 800 ms.
}

// Typing Streak
uint16_t achordion_streak_chord_timeout(
    uint16_t tap_hold_keycode, uint16_t next_keycode) {
  if (IS_QK_LAYER_TAP(tap_hold_keycode)) {
    return 0;  // Disable streak detection on layer-tap keys.
  }

  // Otherwise, tap_hold_keycode is a mod-tap key.
  uint8_t mod = mod_config(QK_MOD_TAP_GET_MODS(tap_hold_keycode));
  if ((mod & MOD_LSFT) != 0) {
    return 100;  // A shorter streak timeout for Shift mod-tap keys.
  } else {
    return 240;  // A longer timeout otherwise.
  }
}

bool achordion_streak_continue(uint16_t keycode) {
  // If mods other than shift or AltGr are held, don't continue the streak.
  if (get_mods() & (MOD_MASK_CG | MOD_BIT_LALT)) return false;
  // This function doesn't get called for holds, so convert to tap keycodes.
  if (IS_QK_MOD_TAP(keycode)) {
    keycode = QK_MOD_TAP_GET_TAP_KEYCODE(keycode);
  }
  if (IS_QK_LAYER_TAP(keycode)) {
    keycode = QK_LAYER_TAP_GET_TAP_KEYCODE(keycode);
  }
  // Regular letters and punctuation continue the streak.
  if (keycode >= KC_A && keycode <= KC_Z) return true;
  switch (keycode) {
    case KC_DOT:
    case KC_COMMA:
    case KC_QUOTE:
    case KC_SPACE:
      return true;
  }
  return false;  // All other keys end the streak.
}

// * ----------------------------
// * -- Magic/Alternate Repeat --
// * ----------------------------
    // ! Arcane Keys based on Empressabyss' setup
    // Function with caps word, ditched one shot shift
    bool remember_last_key_user(uint16_t keycode, keyrecord_t* record,
                            uint8_t* remembered_mods) {
    switch (keycode) {
        case CW_TOGG:
        case KC_ESC:
        case KC_BSPC:
        case KC_DEL:

        case LARCANE:
        case RARCANE:
            return false;  // Magic keys will ignore the above keycodes.
    }
    return true;  // Other keys can be repeated.
}

// An enhanced version of SEND_STRING: if Caps Word is active, the Shift key is
// held while sending the string. Additionally, the last key is set such that if
// the Repeat Key is pressed next, it produces `repeat_keycode`.
#define MAGIC_STRING(str, repeat_keycode) \
        magic_send_string_P(PSTR(str), (repeat_keycode))
 
void magic_send_string_P(const char* str, uint16_t repeat_keycode) {
    uint8_t saved_mods = 0;
 
  if (is_caps_word_on()) { // If Caps Word is on, save the mods and hold Shift.
    saved_mods = get_mods();
    register_mods(MOD_BIT(KC_LSFT));
  }
 
  send_string_with_delay_P(str, TAP_CODE_DELAY);  // Send the string.
  set_last_keycode(repeat_keycode); // 2024-03-09 Disabled sending of string for mag-rep / rep-mag consistency.
 
  // If Caps Word is on, restore the mods.
  if (is_caps_word_on()) {
    set_mods(saved_mods);
  }
}
 
 // LMAGIC definitions
void process_left_magic(uint16_t keycode, uint8_t mods) {
    switch (keycode) {
    // Universal
        case  KC_B: { MAGIC_STRING("b",    KC_F24); } break;
        case KC_D: { MAGIC_STRING("d",         KC_F24); } break;
        case  KC_F: { MAGIC_STRING("f",         KC_F24); } break;
        case  KC_J: { MAGIC_STRING("ust",       KC_F24); } break;
        case  KC_M: { MAGIC_STRING("ent",       KC_F24); } break;
        case  KC_O: { MAGIC_STRING("a",         KC_F24); } break;
        case  KC_P: { MAGIC_STRING("p",     KC_F24); } break;
        case  SS_QU: { MAGIC_STRING("estion",         KC_F24); } break;
        case KC_R: { MAGIC_STRING("r",         KC_F24); } break;
        case  KC_U: { MAGIC_STRING("nder",         KC_F24); } break;
        case KC_V: { MAGIC_STRING("v",  KC_F24); } break;
        case  KC_W: { MAGIC_STRING("w",      KC_F24); } break;
        case  KC_Y: { MAGIC_STRING("ou",         KC_F24); } break;

        case  KC_DOT: { MAGIC_STRING("/",         KC_F24); } break;

        case  KC_SPC: { MAGIC_STRING("the ",     KC_NO); } break;
        // case  KC_F21: { MAGIC_STRING("",     KC_SPC); } break;

        case  KC_F23: { MAGIC_STRING(" ",     KC_SPC); } break;

    // Bottom Home Row
        case KC_A: { MAGIC_STRING("nd",         KC_F24); } break;
        case  KC_C: { MAGIC_STRING("c",        KC_F24); } break;
        case KC_E: { MAGIC_STRING("nce",         KC_F24); } break;
        case  HOME_G: { MAGIC_STRING("g",    KC_F24); } break;
        case KC_H: { MAGIC_STRING("ave",         KC_F24); } break;
        case KC_I: { MAGIC_STRING("ng",         KC_F24); } break;
        case  HOME_K: { MAGIC_STRING("k",         KC_F24); } break;
        case HOME_L: { MAGIC_STRING("mao",         KC_F24); } break;
        case  KC_N: { MAGIC_STRING("n",       KC_F24); } break;
        case KC_S: { MAGIC_STRING("s",         KC_F24); } break;
        case  KC_T: { MAGIC_STRING("t",         KC_F24); } break;
        case HOME_X: { MAGIC_STRING("x",         KC_F24); } break;
        case  HOME_Z: { MAGIC_STRING("z",         KC_F24); } break;
        case HOME_QT: { MAGIC_STRING("ve",    KC_F24); } break;

        // case HOME_CM: { MAGIC_STRING(" and ",    KC_SPC); } break;
        // case HOME_CM: { MAGIC_STRING(" but ",    KC_SPC); } break;
    }
}

 // RMAGIC definitions
void process_right_magic(uint16_t keycode, uint8_t mods) {
    switch (keycode) {
                // Universal
        case  KC_B: { MAGIC_STRING("ecause",         KC_F23); } break;
        case KC_D: { MAGIC_STRING("ent",         KC_F23); } break;
        case  KC_F: { MAGIC_STRING("rom",         KC_F23); } break;
        case  KC_J: { MAGIC_STRING("j",         KC_F23); } break;
        case  KC_M: { MAGIC_STRING("m",         KC_F23); } break;
        case  KC_O: { MAGIC_STRING("o",         KC_F23); } break;
        case  KC_P: { MAGIC_STRING("eople",         KC_F23); } break;
        case  SS_QU: { tap_code(KC_BSPC); MAGIC_STRING("",      KC_F23); } break;
        case KC_R: { MAGIC_STRING("n",         KC_F23); } break;
        case  KC_U: { MAGIC_STRING("u",         KC_F23); } break;
        case KC_V: { MAGIC_STRING("ery",         KC_F23); } break;
        case  KC_W: { MAGIC_STRING("hich",         KC_F23); } break;
        case  KC_Y: { MAGIC_STRING("y",       KC_F23); } break;

        case  KC_QUES: { MAGIC_STRING("?",       KC_F23); } break;
        case  KC_SLSH: { MAGIC_STRING("/",       KC_F23); } break;
        case  KC_DOT: { MAGIC_STRING(".",         KC_NO); } break;

        case  KC_SPC: { MAGIC_STRING("the ",     KC_NO); } break;
        // case  KC_F22: { MAGIC_STRING("",     KC_SPC); } break;

        case  KC_F24: { MAGIC_STRING(" ",     KC_SPC); } break;

        // Bottom Home Row
        case KC_A: { MAGIC_STRING("a",        KC_F23); } break;
        case  KC_C: { MAGIC_STRING("omp",         KC_F23); } break;
        case KC_E: { MAGIC_STRING("e",         KC_F23); } break;
        case  HOME_G: { MAGIC_STRING("eneral",         KC_F23); } break;
        case KC_H: { MAGIC_STRING("h",         KC_F23); } break;
        case KC_I: { MAGIC_STRING("i",        KC_F23); } break;
        case  HOME_K: { MAGIC_STRING("eyboard",         KC_F23); } break;
        case HOME_L: { MAGIC_STRING("l",         KC_F23); } break;
        case  KC_N: { MAGIC_STRING("'t",         KC_F23); } break;
        case KC_S: { MAGIC_STRING("ion",         KC_F23); } break;
        case  KC_T: { MAGIC_STRING("ion",         KC_F23); } break;
        case HOME_X: { MAGIC_STRING("",        KC_F23); } break;
        case  HOME_Z: { MAGIC_STRING("",         KC_F23); } break;

        // case HOME_CM: { MAGIC_STRING(" but ",    KC_SPC); } break;
        case HOME_CN: { MAGIC_STRING(";",    KC_F23); } break;
        // case KC_COLN: { MAGIC_STRING(":",    KC_SPC); } break;
        // case HOME_CM: { MAGIC_STRING(" and ",    KC_SPC); } break;
        case HOME_QT: { MAGIC_STRING("ll",    KC_F23); } break;
    }
}

// * ------------
// * -- Macros --
// * ------------
    // ? Achordion
    if (!process_achordion(keycode, record)) {
        return false;
    }

    // ! Might be in wrong place
    const uint8_t mods         = get_mods();
    const uint8_t oneshot_mods = get_oneshot_mods();

    switch (keycode) {
            // * Macros
            // ! New Arcane Keys Empressabyss
        case LARCANE: 
            if (record->event.pressed) { 
            process_left_magic(get_last_keycode(), get_last_mods()); 
            } 
            break;
            // return false;
        case RARCANE: 
            if (record->event.pressed) { 
            process_right_magic(get_last_keycode(), get_last_mods()); 
            } 
            break;
            // return false;

        case RESIZE:
            if (record->event.pressed) {
                set_mods(MOD_MASK_CSAG);
                register_code(KC_X);
            } else {
                clear_mods();
                unregister_code(KC_X);
            }
            // Do not let QMK process the keycode further
            return false;

        case SS_QU:
            if (record->event.pressed) {
                SEND_STRING("qu");
            }
            break;

        case EMAIL:
            if (record->event.pressed) {
                SEND_STRING(EMAIL_STRING);
            }
            break;

        case COMMENT:
            if (record->event.pressed) {
                clear_oneshot_mods(); // Temporarily disable mods.
                register_code(KC_LCTL);// Hold Ctrl.
                tap_code(KC_SLSH);   // Hit slash to comment out text.
                unregister_code(KC_LCTL); // Stops holding Ctrl.
            }
            break;

        case LINE_SEL:
            if (record->event.pressed) {
                clear_oneshot_mods(); // Temporarily disable mods.
                tap_code(KC_HOME);   // Move cursor to start of line.
                register_code(KC_LSFT);// Hold Shift to select.
                tap_code(KC_END);   // Move cursor to end of line.
                unregister_code(KC_LSFT); // Stops holding Shift.
            }
            break;

        case LINE_COPY:
            if (record->event.pressed) {
                clear_oneshot_mods(); // Temporarily disable mods.
                tap_code(KC_HOME);   // Move cursor to start of line.
                register_code(KC_LSFT);// Hold Shift to select.
                tap_code(KC_END);   // Move cursor to end of line.
                unregister_code(KC_LSFT); // Stops holding Shift.
                register_code(KC_LCTL);// Hold Ctrl to copy.
                tap_code(KC_C);   // Copy selection.
                unregister_code(KC_LCTL); // Stops holding Ctrl.
            }
            break;

        case BRACES: // Types [], {}, or <> and puts cursor between braces.
            if (record->event.pressed) {
                clear_oneshot_mods(); // Temporarily disable mods.
                unregister_mods(MOD_MASK_CSAG);
                if ((mods | oneshot_mods) & MOD_MASK_SHIFT) {
                    SEND_STRING("{}");
                } else if ((mods | oneshot_mods) & MOD_MASK_ALT) {
                    SEND_STRING("<>");
                } else if ((mods | oneshot_mods) & MOD_MASK_CTRL) {
                    SEND_STRING("[]");
                } else {
                    SEND_STRING("()");
                }
                tap_code(KC_LEFT);   // Move cursor between braces.
                register_mods(mods); // Restore mods.
            }
            return false;
    }

    return true;
};

// ? Achordion
void matrix_scan_user(void) {
    achordion_task();
}