// HCSR04 ultrasonic sensor
#include <HCSR04.h>

HCSR04 hc(8, new int[2]{9, 10}, 2);

int distRight() {
  delay(60);
  return hc.dist(1);
}

int distLeft() {
  delay(60);
  return hc.dist(0);
}