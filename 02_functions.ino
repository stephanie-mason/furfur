void fill_antlers() {
  fill_palette( antler_leds, NUM_ANTLER_LEDS, start_index, step_index, current_antler_palette, BRIGHTNESS, LINEARBLEND);
}

void fill_face() {
  fill_palette( face_leds, NUM_FACE_LEDS, start_index, step_index, current_face_palette, BRIGHTNESS, LINEARBLEND);
}

void fill_wings() {
  fill_palette( wing_leds, NUM_WING_LEDS, start_index, step_index, current_wing_palette, BRIGHTNESS, LINEARBLEND);
}

void fill_board() {
  fill_palette( board_leds, NUM_BOARD_LEDS, start_index, step_index, current_board_palette, BRIGHTNESS, LINEARBLEND);
}
