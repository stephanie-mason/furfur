void loop()
{
  /* Regular Updates
  /* -------------------------------------------------------------------------*/
  start_index++;
  EVERY_N_MILLISECONDS( 20 ) { gHue++; }
  EVERY_N_SECONDS( 60 ) {
    if (cycle_animations = true) {
      step_forward();
    }
  }


  /* Check for IR Signal
  /* -------------------------------------------------------------------------*/
  decode_remote();

  /* Strand tests
  /* -------------------------------------------------------------------------*/
  fill_solid(antler_leds, NUM_ANTLER_LEDS, CRGB::Red);
  fill_solid(face_leds, NUM_FACE_LEDS, CRGB::Green);
  fill_solid(wing_leds, NUM_WING_LEDS, CRGB::Blue);
  fill_rainbow(board_leds, NUM_BOARD_LEDS, gHue, 7);

  /* Send the data to the strips
  /* -------------------------------------------------------------------------*/
  select_animation();
  FastLED.show();
  FastLED.delay(1000/animation_speed);
  CircuitPlayground.irReceiver.enableIRIn();
}
