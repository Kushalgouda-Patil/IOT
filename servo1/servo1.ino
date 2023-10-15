#include <Servo.h>
#define servopin 3
Servo myservo;

void setup() {
  // put your setup code here, to run once:
  myservo.attach(servopin);


}

void loop() {
  // put your main code here, to run repeatedly:
  for (int angle = 0; angle <= 180; angle += 1) {
    myservo.write(angle);
    delay(15);
  }

  // And back from 180 to 0 degrees:
  for (int angle = 180; angle >= 0; angle -= 1) {
    myservo.write(angle);
    delay(15);
  }
  delay(1000);

}
