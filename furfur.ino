/******************************************************************************/
/* FURFUR - The 34th Spirit
/* A great and mighty Earl, leader of twenty six legions of spirits.
/* Creator of romantic love, tempests, storms and lightning.
/* He speaks only lies, unless brought into a triangle wherein he speaks truth.
/* AKA THE LIFE OF THE PARTY ୧༼✿ ͡◕ д ◕͡ ༽୨
/******************************************************************************/

/* Libraries
/* ---------------------------------------------------------------------------*/
#include <Adafruit_CircuitPlayground.h>
#include "FastLED.h"
#include <Wire.h>
#include "RTClib.h"

/* Constants
/* ---------------------------------------------------------------------------*/
#define LED_TYPE WS2812B
#define COLOR_ORDER GRB

#define ANTLER_DATA_PIN A1
#define FACE_DATA_PIN A2
#define WING_DATA_PIN A3
#define BOARD_DATA_PIN 8

#define NUM_ANTLER_LEDS 22
#define NUM_FACE_LEDS 23
#define NUM_WING_LEDS 11
#define NUM_BOARD_LEDS 10

/* Variables
/* ---------------------------------------------------------------------------*/
RTC_PCF8523 rtc;
uint8_t start_hour;
uint8_t start_minute;
uint8_t start_index = 0;
uint8_t brightness = 255;
uint8_t animation_delay = 24;

/* Palette Declarations
/* ---------------------------------------------------------------------------*/
extern const TProgmemPalette16 Blue_p PROGMEM;
extern const TProgmemPalette16 BriteNoBlack_p PROGMEM;
extern const TProgmemPalette16 BriteWithBlack_p PROGMEM;
extern const TProgmemPalette16 Cool_p PROGMEM;
extern const TProgmemPalette16 CoolDark_p PROGMEM;
extern const TProgmemPalette16 Lava_p PROGMEM;
extern const TProgmemPalette16 Love_p PROGMEM;
extern const TProgmemPalette16 Sunshine_p PROGMEM;
extern const TProgmemPalette16 Vaporwave_p PROGMEM;
extern const TProgmemPalette16 WarmWhite_p PROGMEM;
extern const TProgmemPalette16 White_p PROGMEM;

CRGBPalette16 current_antler_palette = Rainbow_gp;
CRGBPalette16 current_face_palette = Love_p;
CRGBPalette16 current_eye_palette = Rainbow_gp;
CRGBPalette16 current_wing_palette = Love_p;
CRGBPalette16 current_board_palette = White_p;

CRGBPalette16 target_antler_palette;
CRGBPalette16 target_face_palette;
CRGBPalette16 target_eye_palette;
CRGBPalette16 target_wing_palette;
CRGBPalette16 target_board_palette;

/* Palette Stepping
/* ---------------------------------------------------------------------------*/
uint8_t curr_antler_steps = 1;
uint8_t curr_face_steps = 1;
uint8_t curr_eye_steps = 1;
uint8_t curr_wing_steps = 1;
uint8_t curr_board_steps = 1;

uint8_t target_antler_steps;
uint8_t target_face_steps;
uint8_t target_eye_steps;
uint8_t target_wing_steps;
uint8_t target_board_steps;
