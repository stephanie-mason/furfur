void select_animation(uint8_t curr_minute) { 
    switch(curr_minute) {
      case 0 ... 9:
        current_antler_palette = Rainbow_gp;
        current_face_palette = Love_p;
        current_eye_palette = Rainbow_gp;
        current_wing_palette = Love_p;
        current_board_palette = White_p;

        fill_antlers(10);
        fill_face(8);
        fill_eyes(5);
        fill_wings(4);
        fill_board(1);
        break;
      case 10 ... 19:
        current_antler_palette = Vaporwave_p;
        current_face_palette = Vaporwave_p;
        current_wing_palette = Vaporwave_p;
        current_board_palette = Vaporwave_p;

        fill_antlers(3);
        fill_face(1);
        fill_wings(5);
        fill_board(10);
        break;
      case 20 ... 29:
        current_antler_palette = BriteWithBlack_p;
        current_face_palette = Sunshine_p;
        current_wing_palette = Sunshine_p;
        current_board_palette = BriteNoBlack_p;

        fill_antlers(8);
        fill_face(10);
        fill_wings(6);
        fill_board(1);  

        animation_delay = 10;
        break;
      case 30 ... 39:
        current_antler_palette = Love_p;
        current_face_palette = Love_p;
        current_wing_palette = Love_p;
        current_board_palette = Love_p;

        fill_antlers(1);
        fill_face(1);
        fill_wings(1);
        fill_board(1);      
        break;
      case 40 ... 49:
        current_antler_palette = Sunshine_p;
        current_face_palette = Sunshine_p;
        current_wing_palette = Sunshine_p;
        current_board_palette = Sunshine_p;

        fill_antlers(1);
        fill_face(1);
        fill_wings(1);
        fill_board(1);      
        break;
      case 50 ... 59:
        current_antler_palette = Purple_p;
        current_face_palette = Purple_p;
        current_wing_palette = Purple_p;
        current_board_palette = Purple_p;

        fill_antlers(1);
        fill_face(1);
        fill_wings(1);
        fill_board(1);      
        break;
    }
}

/* Cross Fades Example
/* -------------------------------------------------------------------------*/
// Crossfade current palette slowly toward the target palette
//
// Each time that nblendPaletteTowardPalette is called, small changes
// are made to currentPalette to bring it closer to matching targetPalette.
// You can control how many changes are made in each call:
//   - the default of 24 is a good balance
//   - meaningful values are 1-48.  1=veeeeeeeery slow, 48=quickest
//   - "0" means do not change the currentPalette at all; freeze
//uint8_t max_changes = 24;
//nblendPaletteTowardPalette( current_antler_palette, target_antler_palette, max_changes);
