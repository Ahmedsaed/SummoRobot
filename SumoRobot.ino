#define distLimit 50
#define turnLimit 500

void setup() {
  Serial.begin(9600);
  setupMotors();
}

void loop() {
  boolean cr = lineRight();
  boolean cl = lineLeft();

  if (cr && cl) {
    moveBackward();
    delay(turnLimit);
    moveRight();
    delay(turnLimit);
  }
  else if (cr) {
    moveLeft();
    delay(turnLimit);
  }
  else if (cl) {
    moveRight();
    delay(turnLimit);
  }
  else {
    int dr = distRight();
    int dl = distLeft();
    Serial.println(String(dl) + "     " + String(dr));
    if ((dr < distLimit && dr != 0) && (dl < distLimit && dl != 0)) {
      Serial.println("Forward");
      moveForward();
    }
    else if (dr < distLimit && dr != 0) {
      Serial.println("Right");
      moveRight();
    }
    else if (dl < distLimit && dl != 0) {
      Serial.println("Left");
      moveLeft();
    }
    else {
      Serial.println("Nothing");
      moveForward();
    }
  }


  delay(500);
}


  // put your main code here, to run repeatedly:
  // moveForward();
  // delay(1000);
  // moveBackward();
  // delay(1000);
  // moveRight();
  // delay(1000);
  // moveLeft();
  // delay(1000);
  // Serial.println("Right: " + String(distRight()) + "   - Left:  " + String(distLeft()));
  
  // Serial.println("Line Right: " + String(lineRight()));
  // delay(100);
