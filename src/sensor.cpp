#include "sensor.h"

Sensor::Sensor(double value) {
  this->value = value;
}

double Sensor::getValue() const {
  return this->value;
}

void Sensor::setValue(double value) {
  this->value = value;
}
