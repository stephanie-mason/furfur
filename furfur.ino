/******************************************************************************/
/* FURFUR - The 34th Spirit
/* A great and mighty Earl, leader of twenty six legions of spirits.
/* Creator of romantic love, tempests, storms and lightning.
/* He speaks only lies, unless brought into a triangle wherein he speaks truth.
/* AKA THE LIFE OF THE PARTY
/******************************************************************************/

/* Libraries
/* ---------------------------------------------------------------------------*/
#include "FastLED.h"

/* Constants
/* ---------------------------------------------------------------------------*/
#define LED_TYPE WS2812B
#define COLOR_ORDER GRB

#define HORN_DATA_PIN 6
#define FACE_DATA_PIN 9
#define WING_DATA_PIN 10
#define BOARD_DATA_PIN 17

#define NUM_HORN_LEDS 64
#define NUM_FACE_LEDS 33
#define NUM_WING_LEDS 24
#define NUM_BOARD_LEDS 10

#define BRIGHTNESS 255
#define ANIMATION_SPEED 120

/* Setup
/* ---------------------------------------------------------------------------*/
CRGB horn_leds[NUM_HORN_LEDS];
CRGB face_leds[NUM_FACE_LEDS];
CRGB wing_leds[NUM_WING_LEDS];
CRGB board_leds[NUM_BOARD_LEDS];

void setup() {
  delay(3000);

  FastLED.addLeds<LED_TYPE,HORN_DATA_PIN,COLOR_ORDER>(horn_leds, NUM_HORN_LEDS).setCorrection(TypicalLEDStrip);
  FastLED.addLeds<LED_TYPE,FACE_DATA_PIN,COLOR_ORDER>(face_leds, NUM_FACE_LEDS).setCorrection(TypicalLEDStrip);
  FastLED.addLeds<LED_TYPE,WING_DATA_PIN,COLOR_ORDER>(wing_leds, NUM_WING_LEDS).setCorrection(TypicalLEDStrip);
  FastLED.addLeds<LED_TYPE,BOARD_DATA_PIN,COLOR_ORDER>(board_leds, NUM_BOARD_LEDS).setCorrection(TypicalLEDStrip);

  // set master brightness control
  FastLED.setBrightness(BRIGHTNESS);
}
