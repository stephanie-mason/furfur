void loop()
{
  /* Regular Updates
  /* -------------------------------------------------------------------------*/
  start_index++;
  EVERY_N_MILLISECONDS( 20 ) { gHue++; }
  EVERY_N_SECONDS( 10 ) {
    /* Switch Animations */
    if (cycle_animations = true) {
      step_forward();
    }

    /* Slowly step down brightness */
    //if (brightness > idle_brightness) {
    //  brightness--; 
    //}
  } 

  /* Send the data to the strips
  /* -------------------------------------------------------------------------*/
  select_animation();
  FastLED.show();
  FastLED.delay(1000/animation_speed);
}
