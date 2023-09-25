using namespace vex;

extern brain Brain;

// VEXcode devices
extern inertial inert;
extern motor r1;
extern motor l1;
extern motor r2;
extern motor r3;
extern motor l2;
extern motor l3;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );