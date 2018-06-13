/* Variables
/* ---------------------------------------------------------------------------*/
uint8_t gHue = 0;
uint8_t start_index = 0;
uint8_t step_index = 4;

CRGBPalette16 current_antler_palette;
CRGBPalette16 current_face_palette;
CRGBPalette16 current_wing_palette;
CRGBPalette16 current_board_palette;

CRGBPalette16 target_antler_palette;
CRGBPalette16 target_face_palette;
CRGBPalette16 target_wing_palette;
CRGBPalette16 target_board_palette;

void loop()
{
  /* Regular Updates
  /* -------------------------------------------------------------------------*/
  EVERY_N_MILLISECONDS( 20 ) { gHue++; }
  //EVERY_N_SECONDS( 10 ) { nextPattern(); }
  start_index++;


  /* Strand tests
  /* -------------------------------------------------------------------------*/
  fill_solid(antler_leds, NUM_ANTLER_LEDS, CRGB::Red);
  fill_solid(face_leds, NUM_FACE_LEDS, CRGB::Green);
  fill_solid(wing_leds, NUM_WING_LEDS, CRGB::Blue);
  fill_rainbow(board_leds, NUM_BOARD_LEDS, gHue, 7);


  /* Cross Fades Example
  /* -------------------------------------------------------------------------*/
  // Crossfade current palette slowly toward the target palette
  //
  // Each time that nblendPaletteTowardPalette is called, small changes
  // are made to currentPalette to bring it closer to matching targetPalette.
  // You can control how many changes are made in each call:
  //   - the default of 24 is a good balance
  //   - meaningful values are 1-48.  1=veeeeeeeery slow, 48=quickest
  //   - "0" means do not change the currentPalette at all; freeze
  uint8_t max_changes = 24;
  nblendPaletteTowardPalette( current_antler_palette, target_antler_palette, max_changes);



  /* Send the data to the strips
  /* -------------------------------------------------------------------------*/
  fill_antlers();
  fill_face();
  fill_wings();
  fill_board();
  FastLED.show();
  FastLED.delay(1000/ANIMATION_SPEED);
}

// Note to self: Can set brightness of individual strips:
// https://github.com/FastLED/FastLED/wiki/Multiple-Controller-Examples
