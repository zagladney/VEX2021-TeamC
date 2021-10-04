#include "vex.h"

void spinForkliftMotor(vex::directionType dir) {
  //Current setup is geared for one forklift motor, must be changed if two are used
  forkLift.spin(dir);
  forkLift.spinFor(dir, 30, degrees);
}