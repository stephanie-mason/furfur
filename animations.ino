void select_animation(uint8_t curr_minute) {
    switch(curr_minute) {
      case 0 ... 9:
        target_antler_palette = Rainbow_gp;
        target_face_palette = Love_p;
        target_eye_palette = Rainbow_gp;
        target_wing_palette = Love_p;
        target_board_palette = White_p;

        antler_steps = 10;
        face_steps = 8;
        eye_steps = 5;
        wing_steps = 4;
        board_steps = 1;

        animation_delay = 24;
        break;
      case 10 ... 19:
        target_antler_palette = Vaporwave_p;
        target_face_palette = Vaporwave_p;
        target_eye_palette = WarmWhite_p;
        target_wing_palette = Vaporwave_p;
        target_board_palette = Vaporwave_p;

        antler_steps = 3;        
        face_steps = 1;
        eye_steps = 8;
        wing_steps = 5;
        board_steps = 10;

        animation_delay = 24;
        break;
      case 20 ... 29:
        target_antler_palette = Lava_p;
        target_face_palette = WarmWhite_p;
        target_eye_palette = Lava_p;
        target_wing_palette = Lava_p;
        target_board_palette = Lava_p;

        antler_steps = 9;
        face_steps = 2;
        eye_steps = 10;
        wing_steps = 5;
        board_steps = 4;

        animation_delay = 24;
        break;
      case 30 ... 39:
        target_antler_palette = Blue_p;
        target_face_palette = Lava_p;
        target_eye_palette = CoolDark_p;
        target_wing_palette = Lava_p;
        target_board_palette = Lava_p;

        antler_steps = 2;
        face_steps = 9;
        eye_steps = 5;
        wing_steps = 3;
        board_steps = 1;

        animation_delay = 32;
        break;
      case 40 ... 49:
        target_antler_palette = Cool_p;
        target_face_palette = CoolDark_p;
        target_eye_palette = Sunshine_p;
        target_wing_palette = Cool_p;
        target_board_palette = Cool_p;

        antler_steps = 1;
        face_steps = 6;
        eye_steps = 8;
        wing_steps = 9;
        board_steps = 10;

        animation_delay = 32;
        break;
      case 50 ... 59:
        target_antler_palette = BriteWithBlack_p;
        target_face_palette = Sunshine_p;
        target_eye_palette = Sunshine_p;
        target_wing_palette = Sunshine_p;
        target_board_palette = BriteNoBlack_p;

        antler_steps = 8;
        face_steps = 10;
        wing_steps = 6;
        board_steps = 1;

        animation_delay = 10;
        break;
    }
}
