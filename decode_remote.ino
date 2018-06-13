void decode_remote() {
  if (! CircuitPlayground.irReceiver.getResults()) {
    return;
  }
  // Did we get any decodable messages?
  if (! CircuitPlayground.irDecoder.decode()) {
    CircuitPlayground.irReceiver.enableIRIn(); // Restart receiver
    return;
  }
  // We can print out the message if we want
  CircuitPlayground.irDecoder.dumpResults(false);
  // Did we get any NEC remote messages?
  if (! CircuitPlayground.irDecoder.protocolNum == NEC) {
    CircuitPlayground.irReceiver.enableIRIn(); // Restart receiver
    return;
  }

  switch(CircuitPlayground.irDecoder.value) {
    case IR_0_10_PLUS:
      cycle_animations = true;
      break;
    case IR_STOP_MODE:
      cycle_animations = false;
      break;

    case IR_1:
      animation_state = 1;
      break;
    case IR_2:
      animation_state = 2;
      break;
    case IR_3:
      animation_state = 3;
      break;
    case IR_4:
      animation_state = 4;
      break;
    case IR_5:
      animation_state = 5;
      break;
    case IR_6:
      animation_state = 6;
      break;
    case IR_7:
      animation_state = 7;
      break;
    case IR_8:
      animation_state = 8;
      break;
    case IR_9:
      animation_state = 9;
      break;

    case IR_UP_ARROW:
      step_back();
      break;
    case IR_LEFT_ARROW:
      step_back();
      break;

    case IR_DOWN_ARROW:
      step_forward();
      break;
    case IR_RIGHT_ARROW:
      step_forward();
      break;

    case IR_VOLUME_UP:
      if (brightness <= 255) {
        brightness++;
      }
      FastLED.setBrightness(brightness);
      break;
    case IR_VOLUME_DOWN:
      if (brightness > 10) {
        brightness--;
      }
      FastLED.setBrightness(brightness);
      break;
    case IR_PLAY_PAUSE:
      if (brightness == 0) {
        brightness = 255;
      } else {
        brightness = 0;
      }
      FastLED.setBrightness(brightness);
      break;
  }
}
