/* Setup
/* ---------------------------------------------------------------------------*/
CRGB antler_leds[NUM_ANTLER_LEDS];
CRGB face_leds[NUM_FACE_LEDS];
CRGB wing_leds[NUM_WING_LEDS];
CRGB board_leds[NUM_BOARD_LEDS];

void setup() {
  delay(3000);

  CircuitPlayground.begin();
  Serial.begin(9600);
  CircuitPlayground.irReceiver.enableIRIn();

  FastLED.addLeds<LED_TYPE,ANTLER_DATA_PIN,COLOR_ORDER>(antler_leds, NUM_ANTLER_LEDS).setCorrection(TypicalLEDStrip);
  FastLED.addLeds<LED_TYPE,FACE_DATA_PIN,COLOR_ORDER>(face_leds, NUM_FACE_LEDS).setCorrection(TypicalLEDStrip);
  FastLED.addLeds<LED_TYPE,WING_DATA_PIN,COLOR_ORDER>(wing_leds, NUM_WING_LEDS).setCorrection(TypicalLEDStrip);
  FastLED.addLeds<LED_TYPE,BOARD_DATA_PIN,COLOR_ORDER>(board_leds, NUM_BOARD_LEDS).setCorrection(TypicalLEDStrip);

  FastLED.setBrightness(brightness);
}
