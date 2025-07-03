#ifndef AUTOMATICS_H
#define AUTOMATICS_H

//============ Includes ====================
#include "a1_data.h"
#include "a0_main.h"

void getDay();  // получить номер дня
void timersTick();   // каждую секунду
boolean checkDay(byte);  // проверка дня недели
byte checkHysteresis(byte);  // проверка гистерезиса    
void checkDawn(byte);  // проверка рассвета  



//============ Added by Convertor ==========
#endif // AUTOMATICS_H
