#include "Arduino.h"
#include "motor.h"
#include "strategy.h"
#include "log.h"

void setup()
{
#ifdef DEBUG_ENABLED
  Serial.begin(115200);
#endif
  setupMotors();
}

void loop()
{
  coward();
}
