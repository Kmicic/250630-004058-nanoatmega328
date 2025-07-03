#include "a1_data.h"

float uptime = 0;
int8_t lastScreen = 0;

int sensMinute[6][15] = {0}; // массив для хранения значений датчиков за 15 минут
boolean startPID = false;
boolean timeChanged = false;
boolean startFlagDawn = false;  
uint32_t settingsTimer = 0;
uint32_t driveTout = 0;
byte thisMode = 0; // текущий режим работы
byte curMode = 0; // текущий режим работы, для отладки
boolean serviceFlag = false; // флаг для сервисного меню
uint16_t thisDay = 0; // текущий день в году

boolean backlState = true; // состояние подсветки

const byte daysMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31, 0}; // количество дней в месяце

const char *modeSettingsNames[]  = {
  "Period",   // 0
  "Work",     // 1
  "Left",     // 2

  "Period",   // 3
  "Work",     // 4
  "Start hour", // 5

  "",    // 6
  "",     // 7

  "Period",   // 8
  "Sensor",   // 9
  //"Threshold",  // 10
};




const char *settingsNames[]  = {
  "Mode",
  "Direction",
  "Type",

  "Mode",
  "Direction",
  "Limits",

  "Mode",
  "Direct.",
  "Timeout",
};

const char *modeNames[]  = {
  "<Timer>",
  "<Timer RTC>",
  "<Week>",
  "<Sensor>",
  "<PID>",
  "<Dawn>",
};

const char *relayTypeNames[]  = {
  "PWM",
  "On/Off",
  "PID",
  "Dawn",
  "Drive",
  "Servo",
};


const char *relayNames[]  = {
  "Relay",
  "Valve",
  "Common",
};

const char *channelNames[] = {
  "Channel 1",
  "Channel 2",
  "Channel 3",
  "Channel 4",
  "Channel 5",
  "Channel 6",
  "Channel 7",
  "Servo 1",
  "Servo 2",
  "Drive",
};

const char *directionNames[]  = {
  "Off-On",
  "On-Off",
  "Min-Max",
  "Max-Min",
  "Close-Open",
  "Open-Close",
};

#if (USE_PID == 1)
const char *pidNames[] = {
  "P",
  "I",
  "D",
  "Sens",
  "Set",
  "T",
  "Min",
  "Max",
};
#endif

#if (USE_DAWN == 1)
const char *dawnNames[]  = {
  "Start",
  "Dur. up",
  "Stop",
  "Dur. down",
  "Min",
  "Max",
};
#endif


const char *sensorNames[]  = {
  "AirT",
  "AirH",

  SENS1_NAME,
  SENS2_NAME,
  SENS3_NAME,
  SENS4_NAME,
  "AirP"
};

const char *settingsPageNames[]  = {
  "A-BKL",
  "BKL-time",
  "Drv",
  "Day",
  "Month",
  "Year",
  "Sens prd",
  "Plot prd",
#if (SMOOTH_SERVO == 1)
  "S1 sp",
  "S1 acc",
  "S2 sp",
  "S2 acc",
#endif
#if (PID_AUTOTUNE == 1)
  "Tuner",
  "Result",
  "Channel",
  "Sensor",
  "Manual",
  "Steady",
  "Step",
  "Window",
  "Kick time",
  "Delay",
  "Period",
#endif
};

#if (USE_PLOTS == 1)
const char *plotNames[]  = {
  "Min",
  "Hour",
  "Day",
};
#endif