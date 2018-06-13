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

  /* Send the data to the strips
  /* -------------------------------------------------------------------------*/
  select_animation();
  FastLED.show();
  FastLED.delay(1000/animation_speed);
  CircuitPlayground.irReceiver.enableIRIn();
}
