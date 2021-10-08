// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// LeftMotor            motor         10              
// RightMotor           motor         1               
// Controller1          controller                    
// Vision11             vision        11              
// forkLiftMotor        motor         2               
// Gyro                 inertial      13              
// ---- END VEXCODE CONFIGURED DEVICES ----
/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       saptarshimallick                                          */
/*    Created:      Mon Sep 20 2021                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/


#include "vex.h"
#include "singleaxiscontrols.h"
#include "tankcontrols.h"

using namespace vex;
using namespace std;

//Controls
controller::axis axisLeft() { return Controller1.Axis3; }
controller::axis axisRight() { return Controller1.Axis2; }

int main() 
{
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  while(true)
  {
    axisLeft().changed([](){ powerLeft(axisLeft().position()); });
    axisRight().changed([](){ powerRight(axisRight().position()); });
    wait(100, msec);
  }
}


