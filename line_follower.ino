#include "MyRedBotSensor.h"

#define LFRight A1
#define LFLeft A2

RedBotSensor IRSensorRight = RedBotSensor(LFRight);
RedBotSensor IRSensorLeft = RedBotSensor(LFLeft);

int lineRight() {
  return IRSensorRight.read();
}

boolean lineLeft() {
  return IRSensorLeft.check();
}