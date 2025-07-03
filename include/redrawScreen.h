#ifndef REDRAWSCREEN_H
#define REDRAWSCREEN_H

//============ Includes ====================
#include "a0_main.h"
#include "a1_data.h"
#include <Arduino.h>
#include "arrowControl.h"
// 
// void redrawMainSettings();
// void redrawPlot();
void printName();
// void redrawSettings();
// void redrawDebug();
// void redrawTuner();
// void arrow(byte col, byte row);
// void printDash();
// void printSpace();
// void printOneSpace();
// void printColon();
// void spaceColon();
// void clearLine();
// void clearLine2(byte row);
// void printOff();
// void printOn();
// void drawPlot(int *plot_array); // draws a plot on the LCD screen
// 
void smartArrow(bool state); // forward declaration for smartArrow function
void drawArrow(); // forward declaration for drawArrow function
void printOn(); // forward declaration for printOn function
void printOff(); // forward declaration for printOff function
void printDash(); // forward declaration for printDash function
void printSpace(); // forward declaration for printSpace function
void printOneSpace(); // forward declaration for printOneSpace function
void printColon(); // forward declaration for printColon function
void spaceColon(); // forward declaration for spaceColon function
void clearLine(); // forward declaration for clearLine function
void clearLine2(byte row); // forward declaration for clearLine2 function
void drawPlot(int *plot_array); // forward declaration for drawPlot function
void redrawMainSettings(); // forward declaration for redrawMainSettings function
void redrawPlot(); // forward declaration for redrawPlot function
void redrawSettings(); // forward declaration for redrawSettings function
void redrawDebug(); // forward declaration for redrawDebug function
void redrawTuner(); // forward declaration for redrawTuner function
void arrow(byte col, byte row); // forward declaration for arrow function
// void arrow(byte col, byte row); // forward declaration for arrow function
void space(byte col, byte row); // forward declaration for space function
void colon(byte col, byte row); // forward declaration for colon function
// void printOn(); // forward declaration for printOn function
// void printOff(); // forward declaration for printOff function
// void printDash(); // forward declaration for printDash function
// void printSpace(); // forward declaration for printSpace function
// void printOneSpace(); // forward declaration for printOneSpace function
// void printColon(); // forward declaration for printColon function
// void spaceColon(); // forward declaration for spaceColon function
// void clearLine(); // forward declaration for clearLine function
// void clearLine2(byte row); // forward declaration for clearLine2 function
// void drawPlot(int *plot_array); // forward declaration for drawPlot function
// void redrawMainSettings(); // forward declaration for redrawMainSettings function
// void redrawPlot(); // forward declaration for redrawPlot function
// void redrawSettings(); // forward declaration for redrawSettings function
// void redrawDebug(); // forward declaration for redrawDebug function
// void redrawTuner(); // forward declaration for redrawTuner function
// void drawDebug(); // forward declaration for drawDebug function
// void drawArrow(); // forward declaration for drawArrow function
void smartArrow(bool state); // forward declaration for smartArrow function
// void incr(boolean* val, int incr); // forward declaration for incr function
// void incr(int* val, int incr, int limit); // forward declaration for incr function
// void incr(uint32_t* val, int incr, int limit); // forward declaration for incr function
// void incr(int8_t* val, int incr, int limit); // forward declaration for incr function
// void incr(float* val, float incr, float limit); // forward declaration for incr function
// void incr(byte* val, int incr, int limit); // forward declaration for incr function
// void incrInt(int* val, int incr, int limit); // forward declaration for incr function
// void recalculateTime(); // forward declaration for recalculateTime function
// void changeChannel(int dir); // forward declaration for changeChannel function
// void settingsSett(int dir); // forward declaration for settingsSett function
// void chSettingsSett(int dir); // forward declaration for chSettingsSett function
// void serviceOUT(); // forward declaration for serviceOUT function
// void correctTime(); // forward declaration for correctTime function
// void setDMY(byte set, int dir); // forward declaration for setDMY function
// void drawDebug(); // forward declaration for drawDebug function


 


//============ Added by Convertor ==========
#endif // REDRAWSCREEN_H
