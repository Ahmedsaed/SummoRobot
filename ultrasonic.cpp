// HCSR04 ultrasonic sensor
#include "ultrasonic.h"
#include <HCSR04.h>

#define TRIG_PIN 8
#define EHCO1_PIN 9
#define EHCO2_PIN 10

HCSR04 hc(TRIG_PIN, new int[2]{EHCO1_PIN, EHCO2_PIN}, 2);

int distRight()
{
  delay(60);
  int v = hc.dist(1);
  return v != 0 ? v : 255;
}

int distLeft()
{
  delay(60);
  int v = hc.dist(0);
  return v != 0 ? v : 255;
}
