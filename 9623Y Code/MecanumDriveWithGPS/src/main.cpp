/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\blarhe8849                                       */
/*    Created:      Fri Aug 26 2022                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Drivetrain           drivetrain    11, 20, 1, 10, 3
// GPS21                gps           21              
// Controller1          controller                    
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"
#include "exdef.h"


using namespace vex;

int main() {
  vexcodeInit();
  while (1) {
      int turn = Controller1.Axis1.position();
		  int power = Controller1.Axis3.position();
		  int strafe = Controller1.Axis4.position();
			//Maths
		  int fl = power + turn - strafe;
		  int rl = power + turn + strafe;
		  int fr = power - turn + strafe;
		  int rr = power - turn - strafe;
      //Motor Control
      leftMotorA.spin(forward, fl, vex::percent);
      leftMotorB.spin(forward, rl, vex::percent);
      rightMotorA.spin(forward, fr, vex::percent);
      rightMotorB.spin(forward, rr, vex::percent);
  
  


    Brain.Screen.print("X: %.2f", GPS21.xPosition(mm));
    Brain.Screen.print("  Y: %.2f", GPS21.yPosition(mm));
    Brain.Screen.newLine();

  if (Controller1.ButtonA.pressing()){
    
    GPS21.calibrate(); //Calibrates the GPS
    while (GPS21.isCalibrating()) { task::sleep(50); } //Sleeps Robot During Calibration

    

    Drivetrain.setHeading(GPS21.heading(), degrees); //Sets Heading of Drivetrain to Heading of GPS
    Drivetrain.setTurnVelocity(75, percent); //Sets Turn Speed

    float startingX = GPS21.xPosition(mm); // Stores GPS Starting X Value
    float startingY = GPS21.yPosition(mm);; // Stores GPS Starting Y Value


    float endingX = 0; // Stores GPS Target X Value
    float endingY = 0; // Stores GPS Target Y Value

    // Maths to Figure Out the Heading the Robot Must Turn To
    float turnAngle = atan((endingX - startingX) / (endingY - startingY)) * 180 / M_PI;
    if (endingY - startingY < 0){
      turnAngle += 180;
    }
    
    // Turns Robot To Ending Position
    Drivetrain.turnToHeading(turnAngle, degrees, true);
    

    // Maths to Calculate the Distance needed to be Driven
    float driveDistance = sqrt(((endingX - startingX) * (endingX - startingX)) + ((endingY - startingY) * (endingY - startingY)));

    // Drive the Distance Calculated
    Drivetrain.driveFor(forward, driveDistance, mm, true);





  }

  }
}