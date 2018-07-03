/* Setup
/* ---------------------------------------------------------------------------*/
CRGB antler_leds[NUM_ANTLER_LEDS];
CRGB face_leds[NUM_FACE_LEDS];
CRGB wing_leds[NUM_WING_LEDS];
CRGB board_leds[NUM_BOARD_LEDS];

void setup() {
  delay(3000);

  CircuitPlayground.begin();
  Serial.begin(57600);

  /* RTC Setup */
  /* -------------------------------------------------------------------------*/
  if (! rtc.begin()) { Serial.println("Couldn't find RTC"); while (1); }
  if (! rtc.initialized()) {
    Serial.println("RTC is NOT running!");
    // To set the time, uncomment the following line
    //rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));
  }

  /* Strip Setup */
  /* -------------------------------------------------------------------------*/
  FastLED.addLeds<LED_TYPE,ANTLER_DATA_PIN,COLOR_ORDER>(antler_leds, NUM_ANTLER_LEDS).setCorrection(TypicalLEDStrip);
  FastLED.addLeds<LED_TYPE,FACE_DATA_PIN,COLOR_ORDER>(face_leds, NUM_FACE_LEDS).setCorrection(TypicalLEDStrip);
  FastLED.addLeds<LED_TYPE,WING_DATA_PIN,COLOR_ORDER>(wing_leds, NUM_WING_LEDS).setCorrection(TypicalLEDStrip);
  FastLED.addLeds<LED_TYPE,BOARD_DATA_PIN,COLOR_ORDER>(board_leds, NUM_BOARD_LEDS).setCorrection(TypicalLEDStrip);

  FastLED.setBrightness(brightness);
}
