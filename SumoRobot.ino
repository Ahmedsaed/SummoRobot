#include "motor.h"
#include "lineFollower.h"
#include "ultrasonic.h"
#include "log.h"

#define DIST_LIMIT 50
#define TURN_LIMIT 500
#define CYCLE_DELAY 500

void setup()
{
#ifdef DEBUG_ENABLED
  Serial.begin(9600);
#endif
  setupMotors();
}

void loop()
{
  boolean cr = lineRight();
  boolean cl = lineLeft();

  if (cr && cl)
  {
    DEBUG_PRINTLN("Line Forward");
    moveBackward();
    delay(TURN_LIMIT);
    moveRight();
    delay(TURN_LIMIT);
  }
  else if (cr)
  {
    DEBUG_PRINTLN("Line Right");
    moveLeft();
    delay(TURN_LIMIT);
  }
  else if (cl)
  {
    DEBUG_PRINTLN("Line Left");

    moveRight();
    delay(TURN_LIMIT);
  }
  else
  {
    int dr = distRight();
    int dl = distLeft();
    Serial.println("Ultrasonic: " + String(dl) + "     " + String(dr));
    if ((dr < DIST_LIMIT && dr != 0) && (dl < DIST_LIMIT && dl != 0))
      moveForward();
    else if (dr < DIST_LIMIT && dr != 0)
      moveRight();
    else if (dl < DIST_LIMIT && dl != 0)
      moveLeft();
    else
      moveForward();
  }

  delay(CYCLE_DELAY);
}
