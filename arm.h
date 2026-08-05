#include <Servo.h>

Servo base, shoulder, elbow, wrist;

int pot1 = A0;
int pot2 = A1;
int pot3 = A2;
int pot4 = A3;

void setup() {
  base.attach(2);
  shoulder.attach(3);
  elbow.attach(4);
  wrist.attach(5);
}

void loop() {
  int val1 = analogRead(pot1);
  int val2 = analogRead(pot2);
  int val3 = analogRead(pot3);
  int val4 = analogRead(pot4);

  base.write(map(val1, 0, 1023, 0, 180));
  shoulder.write(map(val2, 0, 1023, 0, 180));
  elbow.write(map(val3, 0, 1023, 0, 180));
  wrist.write(map(val4, 0, 1023, 0, 180));

  delay(20);
}
