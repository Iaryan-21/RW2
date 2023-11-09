#pragma once

#include <iostream>
#include <utility>
#include "mobile_robot.h"

namespace RWA2
{
    class WheeledRobot: public MobileRobot{
        public:
        WheeledRobot(double x_position, 
        double y_position, 
        double orientation, 
        double number_of_wheels
        double wheel_diameter
        double desired_speed):
        MobileRobot(x_position,y_position,orientation),
        wheel_diameter_{wheel_diameter},
        desired_speed_{desired_speed}{}
    



virtual rotate(double angle) override;
virtual print_status() override;
virtual move(double distance, double angle) override;


protected:
    int number_of_wheels_ = 2;
    double wheel_diameter;
    double desired_speed;
    void accelerate(double amount);
    void decelerate(double amount);
    void brake();
};
}