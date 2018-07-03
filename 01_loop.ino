void loop()
{
  /* Regular Updates
  /* -------------------------------------------------------------------------*/
  uint8_t hour = rtc.now().hour();
  uint8_t minute = rtc.now().minute();
  uint8_t second = rtc.now().second();
  brightness = how_bright(hour);
  start_index++;
  
  /* Send the data to the strips
  /* -------------------------------------------------------------------------*/
  select_animation(30);
  FastLED.show();  
  FastLED.delay(animation_delay);
}

/* RTC Serial Debugging */
/* Serial.print(now.hour());
Serial.print(':');
Serial.print(now.minute());
Serial.print(':');
Serial.print(now.second());
Serial.println();
*/
