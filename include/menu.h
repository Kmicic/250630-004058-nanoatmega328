#ifndef MENU_H
#define MENU_H

void hms_to_s();
void s_to_hms();

void drawDebug();
void changeChannel(int dir);
void settingsSett(int dir);
void chSettingsSett(int dir);
void recalculateTime();



//============ Includes ====================
// #include "a0_main.h"
// #include "a1_data.h"
// #include "a4_func.h"
void correctTime();


void changeChannel(int dir);

#include "arrowControl.h"

void controlTick();

#include "service.h"
void serviceOUT();

#include "redrawScreen.h"


//============ Added by Convertor ==========
#endif // MENU_H
