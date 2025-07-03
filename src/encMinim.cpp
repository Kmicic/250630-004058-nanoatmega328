#include "encMinim.h"
#include <Arduino.h>

byte encMinim::getState() {
  return _encState;
}
void encMinim::rst() {
  _encState = 0;
}
boolean encMinim::isFast() {
  if (_fast) return true;
  else return false;
}
boolean encMinim::isTurn() {
  if (_encState > 0 && _encState < 5) {
    return true;
  } else return false;
}
boolean encMinim::isRight() {
  if (_encState == 1) {
    _encState = 0;
    return true;
  } else return false;
}
boolean encMinim::isLeft() {
  if (_encState == 2) {
    _encState = 0;
    return true;
  } else return false;
}
boolean encMinim::isRightH() {
  if (_encState == 3) {
    _encState = 0;
    return true;
  } else return false;
}
boolean encMinim::isLeftH() {
  if (_encState == 4) {
    _encState = 0;
    return true;
  } else return false;
}
boolean encMinim::isClick() {
  if (_encState == 5) {
    _encState = 0;
    return true;
  } else return false;
}
boolean encMinim::isHolded() {
  if (_encState == 6) {
    _encState = 0;
    return true;
  } else return false;
}