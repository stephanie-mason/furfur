uint8_t how_bright(uint8_t curr_hour) {
  switch(curr_hour) {
    case 20:
      return 255;
      break;
    case 21:
      return 255;
      break;
    case 22:
      return 255;
      break;
    case 23:
      return 223;
      break;
    case 0:
      return 190;
      break;
    case 1:
      return 160;
      break;
    case 2:
      return 128;
      break;
    case 3: 
      return 96;
      break;
    case 4:
      return 64;
    case 5: 
      return 32;     
    default:
      return 0; 
  }
}
