#define motorRight1 3
#define motorRight2 2

#define motorLeft1 5
#define motorLeft2 4

void setupMotors() {
  pinMode(motorLeft1, OUTPUT);
  pinMode(motorLeft2, OUTPUT);
  pinMode(motorRight1, OUTPUT);
  pinMode(motorRight2, OUTPUT);
}

void moveForward() {
  digitalWrite(motorLeft1, HIGH);
  digitalWrite(motorLeft2, LOW);
  digitalWrite(motorRight1, HIGH);
  digitalWrite(motorRight2, LOW);
}

void moveBackward() {
  digitalWrite(motorLeft1, LOW);
  digitalWrite(motorLeft2, HIGH);
  digitalWrite(motorRight1, LOW);
  digitalWrite(motorRight2, HIGH);
}

void moveRight() {
  digitalWrite(motorLeft1, LOW);
  digitalWrite(motorLeft2, HIGH);
  digitalWrite(motorRight1, HIGH);
  digitalWrite(motorRight2, LOW);
}

void moveLeft() {
  digitalWrite(motorLeft1, HIGH);
  digitalWrite(motorLeft2, LOW);
  digitalWrite(motorRight1, LOW);
  digitalWrite(motorRight2, HIGH);
}
