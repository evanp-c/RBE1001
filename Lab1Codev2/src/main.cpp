/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\evanp                                            */
/*    Created:      Wed Jan 19 2022                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Right                motor         10              
// Left                 motor         1               
// Arm                  motor         8               
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"
#include <iostream>
#include <cmath>
using namespace std;

using namespace vex;

const double wheelDiameter = 10.4; // CM
//const double GearRatio = 1/5;
const double wheelTrack = 30.4;
double circumference = wheelDiameter * M_PI;

void move(double distance) {
  
  Right.spinFor(fwd, 5*distance*360/circumference, degrees, 80, rpm, false);
  Left.spinFor(fwd, 5*distance*360/circumference, degrees, 80, rpm);
}

void rotate(double angle) {
  Right.spinFor(reverse, 5*4, degrees);
  Right.spinFor(reverse, (5*wheelTrack*M_PI*360/circumference)/(360/angle), degrees, 30, rpm, false);
  Left.spinFor(fwd, (5*wheelTrack*M_PI*360/circumference)/(360/angle), degrees, 30, rpm);
 }

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  task::sleep(250);
  move(20.0);
  rotate(90);
  move(20.0);
  rotate(90);
  move(20.0);
  rotate(90);
  move(20.0);
  rotate(90.0);
  
}


// void move(double distance) {
//   cout << "hi";


//   Right.spinFor(10, rev, 60, rpm, false);
  //Right.spinFor(fwd, 5*distance*360/circumference, degrees, false);
  //Left.spinFor(fwd, 5*distance*360/circumference, degrees);






