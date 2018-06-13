void fill_antlers() {
  fill_palette( antler_leds, NUM_ANTLER_LEDS, start_index, step_index, current_antler_palette, 255, LINEARBLEND);
}

void fill_face() {
  fill_palette( face_leds, NUM_FACE_LEDS, start_index, step_index, current_face_palette, 255, LINEARBLEND);
}

void fill_wings() {
  fill_palette( wing_leds, NUM_WING_LEDS, start_index, step_index, current_wing_palette, 255, LINEARBLEND);
}

void fill_board() {
  fill_palette( board_leds, NUM_BOARD_LEDS, start_index, step_index, current_board_palette, 255, LINEARBLEND);
}

void step_forward() {
  if (animation_state < 9) {
    animation_state++;
  } else {
    animation_state = 1;
  }
}

void step_back() {
  if (animation_state > 1) {
    animation_state--;
  } else {
    animation_state = 9;
  }
}
