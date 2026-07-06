#pragma once
// Pick good defaults for enabling homerow modifiers
// #define TAPPING_TERM 200
// #define PERMISSIVE_HOLD
// #define FLOW_TAP_TERM 150
// #define QUICK_TAP_TERM 0
#define TAPPING_TERM_PER_KEY

// #define QUICK_TAP_TERM_PER_KEY



// TIMELESS HOME ROW MODS TESTING
#define TAPPING_TERM 250
#define PERMISSIVE_HOLD
#define FLOW_TAP_TERM 150
#define CHORDAL_HOLD
#define SPECULATIVE_HOLD



#define ACHORDION_STREAK
#define SENTENCE_CASE_TIMEOUT 2000

// Caps Word
#define CAPS_WORD_INVERT_ON_SHIFT
#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD

// Set Handedness
#define EE_HANDS

// Split Communication
#define I2C_DRIVER I2CD1
#define I2C1_SCL_PIN GP1

#define USB_INIT_DELAY 500
#define USB_SUSPEND_WAKEUP_DELAY 200
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET

// DEBUG
#define DEBUG_ENABLE
#define DEBUG_MATRIX_SCAN_RATE
#define DEBUG_SPLIT

// CUTTING FLOOR
//Combo stuff
// #define COMBO_COUNT 2
