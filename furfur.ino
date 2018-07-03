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
uint8_t gHue = 0;
uint8_t start_index = 0;
uint8_t step_index = 4;
uint8_t brightness = 255;
uint8_t idle_brightness = 40;
int animation_speed = 120;
uint8_t animation_state = 1;
boolean cycle_animations = true;

/* Palette Declarations
/* ---------------------------------------------------------------------------*/
extern const TProgmemPalette16 pink_split_comp_p PROGMEM;
extern const TProgmemPalette16 red_comp_p PROGMEM;
extern const TProgmemPalette16 red_mono_p PROGMEM;

CRGBPalette16 current_antler_palette;
CRGBPalette16 current_face_palette;
CRGBPalette16 current_wing_palette;
CRGBPalette16 current_board_palette;

CRGBPalette16 target_antler_palette;
CRGBPalette16 target_face_palette;
CRGBPalette16 target_wing_palette;
CRGBPalette16 target_board_palette;


// Note to self: Can set brightness of individual strips:
// https://github.com/FastLED/FastLED/wiki/Multiple-Controller-Examples
