#pragma once

#include <iostream>
#include <utility>

namespace RWA2 {
class MobileRobot{
 public:
  MobileRobot(double x, double y, double orientation, double speed)
      : position_{x, y}, orientation_{orientation} , speed_{speed}{
    
  }
  
  void move(double distance, double angle);
  void print_status();


 protected:
  std::pair<double, double> position_;
  double orientation_;
  double speed_{0.0};
  std::string model_;
  void rotate(double angle);
};  
}  