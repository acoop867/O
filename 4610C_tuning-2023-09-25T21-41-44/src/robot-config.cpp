#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
inertial inert = inertial(PORT10);
motor r1 = motor(PORT3, ratio18_1, true);
motor l1 = motor(PORT5, ratio18_1, false);
motor r2 = motor(PORT12, ratio18_1, false);
motor r3 = motor(PORT14, ratio18_1, false);
motor l2 = motor(PORT17, ratio18_1, true);
motor l3 = motor(PORT20, ratio18_1, true);

// VEXcode generated functions



/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}