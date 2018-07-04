/******************************************************************************/
/* When first turned on, the sculpture is at full brightness for 30 min
/* then it takes 5 min to fade down to that time's brightness
/* Between 8pm - 10pm, it is at full brightness
/* Starting at 10pm, brightness starts decreasing 
/* Brightness bottoms out at 130, around 2am 
/* (Lower brightness causes flickering, which is way more annoying)
/* If it's after 5am, lights will shut off after 30 min no matter
/******************************************************************************/
uint8_t how_bright(uint8_t curr_hour, uint8_t curr_minute) {
  int time_passed = calc_time_passed(curr_hour, curr_minute);
  if (time_passed <= 30) {
    return 255;
  }

  if (time_passed <= 35) { 
    if (curr_hour < 6 || curr_hour >= 20) {
      uint8_t fade_minute = -(30 - time_passed);
      uint8_t goal_brightness = hours_brightness(curr_hour, curr_minute);
      return 255 - (((255 - goal_brightness) / 5) * fade_minute);
    }    
  }

  return hours_brightness(curr_hour, curr_minute);
}

int calc_time_passed(uint8_t curr_hour, uint8_t curr_minute) {
  int startx = start_hour * 60 + start_minute;
  int endx = curr_hour * 60 + curr_minute;
  int duration = endx - startx;
  if (duration < 0) {
    duration = duration + 1440;
  }

  return duration;
}

uint8_t hours_brightness(uint8_t curr_hour, uint8_t curr_minute) {
  if (curr_hour >= 20 && curr_hour < 22) {
    return 255;
  }

  if (curr_hour >= 22) {
    int minutes_past_ten = (((curr_hour * 60) + curr_minute) - 1320);
    return 255 - (minutes_past_ten / 2);
  }

  if (curr_hour >= 0 && curr_hour < 2) {
    int minutes_past_ten = 120 + (curr_hour * 60) + curr_minute;
    return 255 - (minutes_past_ten / 2);
  }

  if (curr_hour >= 2 && curr_hour < 6) {
    return 130;
  }

  return 0;
}
