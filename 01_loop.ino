void loop()
{
  /* Regular Updates
  /* -------------------------------------------------------------------------*/
  uint8_t hour = rtc.now().hour();
  uint8_t minute = rtc.now().minute();
  brightness = how_bright(hour);
  
  start_index++;
  EVERY_N_MILLISECONDS( 20 ) { gHue++; }
  EVERY_N_SECONDS( 10 ) {
    if (cycle_animations = true) {
      step_forward();
    }
  }

  /* Send the data to the strips
  /* -------------------------------------------------------------------------*/
  select_animation();
  FastLED.show();
  //FastLED.delay(1000/animation_speed);
}

/* RTC Serial Debugging */
/* Serial.print(now.hour());
Serial.print(':');
Serial.print(now.minute());
Serial.print(':');
Serial.print(now.second());
Serial.println();
*/
