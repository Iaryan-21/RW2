#include "battery.h"

Battery::Battery(double capacity, double currentCharge, double voltage, bool isCharging) {
  this->capacity = capacity;
  this->currentCharge = currentCharge;
  this->voltage = voltage;
  this->isCharging = isCharging;
}

double Battery::getCapacity() const {
  return this->capacity;
}

void Battery::setCapacity(double capacity) {
  this->capacity = capacity;
}

double Battery::getCurrentCharge() const {
  return this->currentCharge;
}

void Battery::setCurrentCharge(double currentCharge) {
  this->currentCharge = currentCharge;
}

double Battery::getVoltage() const {
  return this->voltage;
}

void Battery::setVoltage(double voltage) {
  this->voltage = voltage;
}

bool Battery::getIsCharging() const {
  return this->isCharging;
}

void Battery::setIsCharging(bool isCharging) {
  this->isCharging = isCharging;
}