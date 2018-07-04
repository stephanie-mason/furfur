void loop()
{
  /* Regular Updates
  /* -------------------------------------------------------------------------*/
  uint8_t hour = rtc.now().hour();
  uint8_t minute = rtc.now().minute();
  uint8_t second = rtc.now().second();
  brightness = how_bright(hour, minute);
  start_index++;

  /* Select Animation
  /* -------------------------------------------------------------------------*/
  select_animation(minute);


  /* Blend animations
  /* -------------------------------------------------------------------------*/
  uint8_t maxChanges = 8;
  nblendPaletteTowardPalette( current_antler_palette, target_antler_palette, maxChanges);
  nblendPaletteTowardPalette( current_face_palette, target_face_palette, maxChanges);
  nblendPaletteTowardPalette( current_eye_palette, target_eye_palette, maxChanges);
  nblendPaletteTowardPalette( current_wing_palette, target_wing_palette, maxChanges);
  nblendPaletteTowardPalette( current_board_palette, target_board_palette, maxChanges);

  EVERY_N_MILLISECONDS( 1000 ) {
    curr_antler_steps = gradualStepChange(curr_antler_steps, target_antler_steps);
    curr_face_steps = gradualStepChange(curr_face_steps, target_face_steps);
    curr_eye_steps = gradualStepChange(curr_eye_steps, target_eye_steps);
    curr_wing_steps = gradualStepChange(curr_wing_steps, target_wing_steps);
    curr_board_steps = gradualStepChange(curr_board_steps, target_board_steps);
  }

  /* Send the data to the strips
  /* -------------------------------------------------------------------------*/
  fill_antlers(curr_antler_steps);
  fill_face(curr_face_steps);
  fill_eyes(curr_eye_steps);
  fill_wings(curr_wing_steps);
  fill_board(curr_board_steps);

  FastLED.show();
  FastLED.delay(animation_delay);
  //FastLED.setBrightness(brightness);
}

/* RTC Serial Debugging */
/* Serial.print(now.hour());
Serial.print(':');
Serial.print(now.minute());
Serial.print(':');
Serial.print(now.second());
Serial.println();
*/
