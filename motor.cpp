#include "motor.h"
#include "log.h"

#define MOTOR_RIGHT1 3
#define MOTOR_RIGHT2 2

#define MOTOR_LEFT1 5
#define MOTOR_LEFT2 4

void setupMotors()
{
  pinMode(MOTOR_LEFT1, OUTPUT);
  pinMode(MOTOR_LEFT2, OUTPUT);
  pinMode(MOTOR_RIGHT1, OUTPUT);
  pinMode(MOTOR_RIGHT2, OUTPUT);
}

void moveForward()
{
  DEBUG_PRINTLN("Moving Forward");

  digitalWrite(MOTOR_LEFT1, HIGH);
  digitalWrite(MOTOR_LEFT2, LOW);
  digitalWrite(MOTOR_RIGHT1, HIGH);
  digitalWrite(MOTOR_RIGHT2, LOW);
}

void moveBackward()
{
  DEBUG_PRINTLN("Moving Backward");

  digitalWrite(MOTOR_LEFT1, LOW);
  digitalWrite(MOTOR_LEFT2, HIGH);
  digitalWrite(MOTOR_RIGHT1, LOW);
  digitalWrite(MOTOR_RIGHT2, HIGH);
}

void moveRight()
{
  DEBUG_PRINTLN("Moving Right");

  digitalWrite(MOTOR_LEFT1, LOW);
  digitalWrite(MOTOR_LEFT2, HIGH);
  digitalWrite(MOTOR_RIGHT1, HIGH);
  digitalWrite(MOTOR_RIGHT2, LOW);
}

void moveLeft()
{
  DEBUG_PRINTLN("Moving Left");

  digitalWrite(MOTOR_LEFT1, HIGH);
  digitalWrite(MOTOR_LEFT2, LOW);
  digitalWrite(MOTOR_RIGHT1, LOW);
  digitalWrite(MOTOR_RIGHT2, HIGH);
}

void stopMotors()
{
  DEBUG_PRINTLN("Moving Stop");

  digitalWrite(MOTOR_LEFT1, LOW);
  digitalWrite(MOTOR_LEFT2, LOW);
  digitalWrite(MOTOR_RIGHT1, LOW);
  digitalWrite(MOTOR_RIGHT2, LOW);
}
