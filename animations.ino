void select_animation() {
    switch(animation_state) {
      case 1:
        current_antler_palette = red_mono_p;
        current_face_palette = Rainbow_gp;
        current_wing_palette = red_comp_p;
        current_board_palette = Rainbow_gp;

        fill_antlers();
        fill_face();
        fill_wings();
        fill_board();
        break;
      case 2:
        current_antler_palette = red_mono_p;
        current_face_palette = Rainbow_gp;
        current_wing_palette = red_comp_p;
        current_board_palette = Rainbow_gp;

        fill_antlers();
        fill_face();
        fill_wings();
        fill_board();

        //I think these cases will actually just update "target_pallete" once
        // things are in place. probably the fill functions can just move to loop.
        break;
      case 3:
        current_antler_palette = Rainbow_gp;
        current_face_palette = Rainbow_gp;
        current_wing_palette = Rainbow_gp;
        current_board_palette = Rainbow_gp;

        fill_antlers();
        fill_face();
        fill_wings();
        fill_board();      
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
