#include <Motor.h>

Motor m1(6,9);
Motor m2(10,11);
//these values are really dependent on surface and battery condition at a minimum
double dblTrackRight = 1.0;
double dblTrackLeft = 0.99;
int intStraight = 1000;
int intRotate90 = 750;
int intRotate180 = 1250;
int intCircle = 12000;

void setup()
  {                
    Serial.begin(9600);   
  }

void loop()
  {  
     
        m1.stopMotor();
        m2.stopMotor();
        delay(5000);

        //straight back
        delay(500);
        m1.setMotorSpeed((100 * dblTrackRight));
        m2.setMotorSpeed((-100 * dblTrackLeft));
        m1.startMotor();
        m2.startMotor();
        delay((intStraight * 2));
        m1.stopMotor();
        m2.stopMotor();

        //straight forward
        delay(500);
        m1.setMotorSpeed((-100 * dblTrackRight));
        m2.setMotorSpeed((100 * dblTrackLeft));
        m1.startMotor();
        m2.startMotor();
        delay(intStraight);
        m1.stopMotor();
        m2.stopMotor();

        //turn left 90
        delay(500);
        m1.setMotorSpeed((-100 * dblTrackRight));
        m2.setMotorSpeed((-100 * dblTrackLeft));
        m1.startMotor();
        m2.startMotor();
        delay(intRotate90);
        m1.stopMotor();
        m2.stopMotor();

        //straight forward
        delay(500);
        m1.setMotorSpeed((-100 * dblTrackRight));
        m2.setMotorSpeed((100 * dblTrackLeft));
        m1.startMotor();
        m2.startMotor();
        delay(intStraight);
        m1.stopMotor();
        m2.stopMotor();

        //turn left 180
        delay(500);
        m1.setMotorSpeed((-100 * dblTrackRight));
        m2.setMotorSpeed((-100 * dblTrackLeft));
        m1.startMotor();
        m2.startMotor();
        delay(intRotate180);
        m1.stopMotor();
        m2.stopMotor();

        //straight forward
        delay(500);
        m1.setMotorSpeed((-100 * dblTrackRight));
        m2.setMotorSpeed((100 * dblTrackLeft));
        m1.startMotor();
        m2.startMotor();
        delay((intStraight * 2));
        m1.stopMotor();
        m2.stopMotor();

        //turn right 180
        delay(500);
        m1.setMotorSpeed((100 * dblTrackRight));
        m2.setMotorSpeed((100 * dblTrackLeft));
        m1.startMotor();
        m2.startMotor();
        delay(intRotate180);
        m1.stopMotor();
        m2.stopMotor();

        //straight forward
        delay(500);
        m1.setMotorSpeed((-100 * dblTrackRight));
        m2.setMotorSpeed((100 * dblTrackLeft));
        m1.startMotor();
        m2.startMotor();
        delay(intStraight);
        m1.stopMotor();
        m2.stopMotor();

        //turn right 90
        delay(500);
        m1.setMotorSpeed((100 * dblTrackRight));
        m2.setMotorSpeed((100 * dblTrackLeft));
        m1.startMotor();
        m2.startMotor();
        delay(intRotate90);
        m1.stopMotor();
        m2.stopMotor();

        //straight forward
        delay(500);
        m1.setMotorSpeed((-100 * dblTrackRight));
        m2.setMotorSpeed((100 * dblTrackLeft));
        m1.startMotor();
        m2.startMotor();
        delay(intStraight);
        m1.stopMotor();
        m2.stopMotor();

        //turn right 90
        delay(500);
        m1.setMotorSpeed((100 * dblTrackRight));
        m2.setMotorSpeed((100 * dblTrackLeft));
        m1.startMotor();
        m2.startMotor();
        delay(intRotate90);
        m1.stopMotor();
        m2.stopMotor();

        //big circle right
        delay(500);
        m1.setMotorSpeed((-90 * dblTrackRight));
        m2.setMotorSpeed((100 * dblTrackLeft));
        m1.startMotor();
        m2.startMotor();
        delay(intCircle);
        m1.stopMotor();
        m2.stopMotor();

        delay(30000);
  }
