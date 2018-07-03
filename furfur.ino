/******************************************************************************/
/* FURFUR - The 34th Spirit
/* A great and mighty Earl, leader of twenty six legions of spirits.
/* Creator of romantic love, tempests, storms and lightning.
/* He speaks only lies, unless brought into a triangle wherein he speaks truth.
/* AKA THE LIFE OF THE PARTY
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
uint8_t start_index = 0;
uint8_t brightness = 255;
int animation_delay = 24;
uint8_t animation_state = 1;

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

uint8_t antler_steps;
uint8_t face_steps;
uint8_t eye_steps;
uint8_t wing_steps;
uint8_t board_steps;


// Note to self: Can set brightness of individual strips:
// https://github.com/FastLED/FastLED/wiki/Multiple-Controller-Examples
