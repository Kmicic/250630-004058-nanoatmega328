#include "a3_loop.h"

// -------------------- LOOP ---------------------

// Declare currentChannel with an initial value (adjust type and value as needed)
int8_t currentChannel = 0;

void loop() {
  customLoop();       // вызов блока своих функций (вкладка custom)

  checkPID();         // пересчёт регулятора
  backlTick();        // таймер неактивности подсветки
  debTick();          // таймер неактивности дисплея
  controlTick();      // управление
  readAllSensors();   // опрос датчиков

#if (USE_CO2 == 1)
  CO2tick();
#endif

#if (USE_PLOTS == 1)
  plotTick();         // графики
#endif

#if (USE_DRIVE == 1)
  driveTick();        // работа привода
#endif

#if (USE_PID_RELAY == 1)  // шим-реле
  tickPWM(0, flag0, tmr0);
  tickPWM(1, flag1, tmr1);
#endif

#if (SERVO1_RELAY == 0 && SMOOTH_SERVO == 1)
  servo1.tick();      // здесь происходит движение серво по встроенному таймеру!
#endif
#if (SERVO2_RELAY == 0 && SMOOTH_SERVO == 1)
  servo2.tick();      // здесь происходит движение серво по встроенному таймеру!
#endif

  if (currentChannel == -3) {         // если СЕРВИС
    serviceTick();
  } else {  // если ОТЛАДКА или НАСТРОЙКИ
    if (millis() - commonTimer > 1000) {
      commonTimer += 1000;
      timersTick();
#if (USE_CO2 == 0)
      if (currentChannel == -1) {
        if (debugPage == 0) redrawDebug();
#if (PID_AUTOTUNE == 1)
        else if (debugPage == 1) redrawTuner();
#endif
        else redrawPlot();
      }
#endif
    }
#if (USE_CO2 == 1)
    static uint32_t comTimer2;
    if (millis() - comTimer2 > 1500) {
      comTimer2 = millis();
      CO2_rst = true;
      if (currentChannel == -1) {
        if (debugPage == 0) redrawDebug();
#if (PID_AUTOTUNE == 1)
        else if (debugPage == 1) redrawTuner();
#endif
        else redrawPlot();
      }
    }
#endif
  }

#if (WDT_ENABLE == 1)
  wdt_reset();        // пинаем собаку
#endif
}
