#ifndef A3_LOOP_H
#define A3_LOOP_H

//============ Includes ====================
//#include "a1_data.h"
#include "custom.h"
#include "pid.h"
//#include "a4_func.h"
#include "menu.h"
#include "redrawScreen.h"

// void controlTick();
void readAllSensors();
void customLoop();
void serviceTick();
void redrawDebug();
void redrawTuner(); // forward declaration for redrawTuner function
void plotTick();    // forward declaration for plotTick function
void backlTick();   // forward declaration for backlTick function
void debTick();     // forward declaration for debTick function
void driveTick();   // forward declaration for driveTick function
void CO2tick();     // forward declaration for CO2tick function
void tickPWM(int channel, bool &flag, uint32_t &tmr); // forward declaration for tickPWM function
// void checkPID();  // forward declaration for checkPID function
// void readAllSensors();  // forward declaration for readAllSensors function
// void serviceTick();  // forward declaration for serviceTick function 
// void changeChannel(int dir);  // forward declaration for changeChannel function  
// void redrawDebug();  // forward declaration for redrawDebug function
void redrawPlot();  // forward declaration for redrawPlot function
//============ Added by Convertor ==========
#endif // A3_LOOP_H
