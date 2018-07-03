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
  select_animation(second);

  uint8_t maxChanges = 8; 
  nblendPaletteTowardPalette( current_antler_palette, target_antler_palette, maxChanges);
  nblendPaletteTowardPalette( current_face_palette, target_face_palette, maxChanges);
  nblendPaletteTowardPalette( current_eye_palette, target_eye_palette, maxChanges);
  nblendPaletteTowardPalette( current_wing_palette, target_wing_palette, maxChanges);
  nblendPaletteTowardPalette( current_board_palette, target_board_palette, maxChanges);
  
  fill_antlers(antler_steps);
  fill_face(face_steps);
  fill_eyes(eye_steps);
  fill_wings(wing_steps);
  fill_board(board_steps);
  
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
