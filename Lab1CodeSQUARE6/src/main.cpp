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
// Left                 motor         1               
// Right                motor         10              
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
  
  Right.spinFor(fwd, 5*distance*360/circumference, degrees, 100, rpm, false);
  Left.spinFor(fwd, 5*distance*360/circumference, degrees, 100, rpm);
}

void rotate(double angle) {
  Right.spinFor(fwd, 5*4, degrees);
  Right.spinFor(fwd, (5*wheelTrack*M_PI*360/circumference)/(360/angle), degrees, 100, rpm, false);
  Left.spinFor(reverse, (5*wheelTrack*M_PI*360/circumference)/(360/angle), degrees, 100, rpm);
  Right.spinFor(fwd, 5*4, degrees);
 }

void square() {
  move(50.8);
  rotate(86);
  move(50.8);
  rotate(85);
  move(50.8);
  rotate(84);
  move(50.8);
  rotate(83);
}

void star(double distance) {
  move(distance);
  rotate(144);
  move(distance);
  rotate(144);
  move(distance);
  rotate(144);
  move(distance);
  rotate(144);
  move(distance);
  rotate(144);
}

//todo
void maze() {
  move(43);
  rotate(90);
  move(56);
  rotate(-90);
  move(63);
  rotate(-90);
  move(35);
}

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  task::sleep(250);
  square();
  square();
  square();
  square();
  square();
  square();


  // for(int x = 0; x < 6; x++) {
  //   square();
  // }
  
}



// void move(double distance) {
//   cout << "hi";


//   Right.spinFor(10, rev, 60, rpm, false);
  //Right.spinFor(fwd, 5*distance*360/circumference, degrees, false);
  //Left.spinFor(fwd, 5*distance*360/circumference, degrees);





