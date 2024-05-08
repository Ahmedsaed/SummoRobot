#include "lineFollower.h"
#include "log.h"

#define LFRight A1
#define LFLeft A2

RedBotSensor IRSensorRight = RedBotSensor(LFRight);
RedBotSensor IRSensorLeft = RedBotSensor(LFLeft);

int lineRight()
{
  DEBUG_PRINTLN("IRR: " + String(IRSensorRight.read()));
  return IRSensorRight.check();
}

boolean lineLeft()
{
  DEBUG_PRINTLN("IRR: " + String(IRSensorRight.read()));
  return IRSensorLeft.check();
}
