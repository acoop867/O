/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\Student                                          */
/*    Created:      Mon Sep 25 2023                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// inert                inertial      10              
// r1                   motor         3               
// l1                   motor         5               
// r2                   motor         12              
// r3                   motor         14              
// l2                   motor         17              
// l3                   motor         20              
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;


int thresh= 40;
void pidturn(int dist) {
  float p=dist;
  float d=dist;
  float i = 0;
  float out;
  float kp=.8;
  float ki=0;
  float kd=0;
  while(fabs(dist-inert.heading(degrees))>1) {
    if (d<10) {
      i+=d;
    }
    else {
      i=0;
    }
    d=p;
    p = dist - inert.heading(degrees);
    if (p>thresh) {
      out = 100;
    }
    
      out = p*kp+i*ki+d*kd;
    
    


    l1.spin(forward,out,pct);
    l2.spin(forward,out,pct);
    l3.spin(forward,out,pct);
    r1.spin(forward,-out,pct);
    r2.spin(forward,-out,pct);
    r3.spin(forward,-out,pct);
  }
  r1.stop(); 
  r2.stop(); 
  r3.stop();
  l1.stop();
  l2.stop();
  l3.stop();
}



int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  inert.calibrate();
  wait(4,sec);
  pidturn(90);
}
