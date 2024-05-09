#include "strategy.h"
#include "Arduino.h"
#include "motor.h"
#include "lineFollower.h"
#include "ultrasonic.h"
#include "log.h"

#define DIST_LIMIT 20
#define TURN_LIMIT 500
#define CYCLE_DELAY 100

void aggresive()
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
		DEBUG_PRINTLN("Ultrasonic: " + String(dl) + "     " + String(dr));
		if (dr < DIST_LIMIT && dl < DIST_LIMIT)
			moveForward();
		else if (dr < DIST_LIMIT)
			moveRight();
		else if (dl < DIST_LIMIT)
			moveLeft();
		else
			moveForward();
	}

	delay(CYCLE_DELAY);
}

void coward()
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
		DEBUG_PRINTLN("Ultrasonic: " + String(dl) + "     " + String(dr));
		if (dr < DIST_LIMIT && dl < DIST_LIMIT)
			moveRight();
		else if (dr < DIST_LIMIT)
			moveLeft();
		else if (dl < DIST_LIMIT)
			moveRight();
		else
			moveForward();
	}

	delay(CYCLE_DELAY);
}
