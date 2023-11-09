#pragma once

#include <iostream>
#include <utility>
#include "mobile_robot.h"

namespace RWA2
{
    class AerialRobot: public MobileRobot{
        public:
        AerialRobot(double x_position, 
        double y_position, 
        double orientation, 
        bool has_wings, 
        bool is_flying):
        MobileRobot(x_position,y_position,orientation),
        has_wing_{has_wings},
        is_flying_{is_flying}{}
    



virtual rotate(double angle) override;
virtual print_status() override;
virtual move(double distance, double angle) override;


protected:
    bool is_flying_ = false;
    bool has_wing_;
    double altitude_{0.0};
    void take_off(double altitude);
    void land();
};
}