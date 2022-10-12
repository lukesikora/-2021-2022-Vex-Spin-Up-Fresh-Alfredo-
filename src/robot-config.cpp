#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
controller Controller1 = controller(primary);
motor Motor18 = motor(PORT18, ratio6_1, false);
motor Motor17 = motor(PORT17, ratio6_1, false);
motor Motor4 = motor(PORT4, ratio6_1, false);
motor Motor5 = motor(PORT5, ratio6_1, true);
motor Motor6 = motor(PORT6, ratio6_1, false);
motor Motor7 = motor(PORT7, ratio6_1, true);
encoder EncoderA = encoder(Brain.ThreeWirePort.A);

// VEXcode generated functions
// define variable for remote controller enable/disable
bool RemoteControlCodeEnabled = true;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}