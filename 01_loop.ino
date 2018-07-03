void loop()
{
  /* Regular Updates
  /* -------------------------------------------------------------------------*/
  DateTime now = rtc.now();
  uint8_t hour = now.hour();
  start_index++;
  EVERY_N_MILLISECONDS( 20 ) { gHue++; }
  EVERY_N_SECONDS( 10 ) {
    /* Switch Animations */
    if (cycle_animations = true) {
      step_forward();
    }
  }  

  /* Send the data to the strips
  /* -------------------------------------------------------------------------*/
  select_animation();
  FastLED.show();
  FastLED.delay(1000/animation_speed);
}

/* RTC Serial Debugging */
/* -------------------------------------------------------------------------*/  
/* Serial.print(now.hour());
   Serial.print(':');
   Serial.print(now.minute());
   Serial.print(':');
   Serial.print(now.second());
   Serial.println();
*/
