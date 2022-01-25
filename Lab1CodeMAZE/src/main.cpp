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
  rotate(88);
  move(50.8);
  rotate(87);
  move(50.8);
  rotate(88);
  move(50.8);
  rotate(88.0);
}

void star(double distance) {
  move(distance);
  rotate(138);
  move(distance);
  rotate(144);
  move(distance);
  rotate(144);
  move(distance);
  rotate(131);
  move(distance-5);
  rotate(144);
}

//todo
// void maze() {
//   move(50.0);
//   rotate(86);
//   move(69.0);
//   rotate(-90);
//   move(40.0);
//   rotate(-18);
//   move(10.0);
//   rotate(-18);
//   move(5.0);
//   rotate(-50);
//   move(30.0);
// }

// void maze2() {
//   move(50.0);
//   rotate(-86);
//   move(-55.0);
//   rotate(-50);
//   move(-15.0);
//   rotate(-44);
//   move(-30.0);
//   rotate(-86);
//   move(-15.0);


// }

void maze3() {
  move(50.0);
  rotate(-86);
  move(-65.0);
  rotate(88);
  move(40.0);
  rotate(-86);
  move(30.0);

}
int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  task::sleep(250);
  //maze3();
  move(13.0);
  Left.spinFor(fwd, 360*5, degrees, 60, rpm, false);
  Right.spinFor(fwd, 880*5, degrees, 120, rpm);
  move(19.75);
  Left.spinFor(fwd, 550*5, degrees, 120, rpm, false);
  Right.spinFor(fwd, 80*5, degrees, 10, rpm);
  Left.spinFor(fwd, 160*5, degrees, 120, rpm, false);
  Right.spinFor(fwd, 30*5, degrees, 10, rpm);
  move(5.0);
  Right.spinFor(fwd, 0, degrees, 20, rpm, false);
  Left.spinFor(fwd, 380*5, degrees, 120, rpm);
  move(28.0);

  
  
  

  

  // for(int x = 0; x < 6; x++) {
  //   square();
  // }
  
}



// void move(double distance) {
//   cout << "hi";


//   Right.spinFor(10, rev, 60, rpm, false);
  //Right.spinFor(fwd, 5*distance*360/circumference, degrees, false);
  //Left.spinFor(fwd, 5*distance*360/circumference, degrees);





