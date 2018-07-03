void fill_antlers(uint8_t step_index)
{
  uint8_t color_index = start_index;

  for( int i = NUM_ANTLER_LEDS - 1; i >= 0; i--) {
    antler_leds[i] = ColorFromPalette( current_antler_palette, color_index, 255, LINEARBLEND);
    color_index += step_index;
  }
}

void fill_eyes(uint8_t step_index)
{
  uint8_t color_index = start_index;

  for( int i = 15; i >= 4; i--) {
    face_leds[i] = ColorFromPalette( current_eye_palette, color_index, 255, LINEARBLEND);
    color_index += step_index;
  }
}

void fill_face(uint8_t step_index)
{
  uint8_t color_index = start_index;

  for( int i = NUM_FACE_LEDS - 1; i >= 0; i--) {
    face_leds[i] = ColorFromPalette( current_face_palette, color_index, 255, LINEARBLEND);
    color_index += step_index;
  }
}

void fill_wings(uint8_t step_index) {
  uint8_t color_index = start_index;

  for( int i = NUM_WING_LEDS - 1; i >= 0; i--) {
    wing_leds[i] = ColorFromPalette( current_wing_palette, color_index, 255, LINEARBLEND);
    color_index += step_index;
  }
}

void fill_board(uint8_t step_index) {
  fill_palette( board_leds, NUM_BOARD_LEDS, start_index, step_index, current_board_palette, 255, LINEARBLEND);
}

void step_forward() {
  if (animation_state < 3) {
    animation_state++;
  } else {
    animation_state = 1;
  }
}

void step_back() {
  if (animation_state > 1) {
    animation_state--;
  } else {
    animation_state = 3;
  }
}
