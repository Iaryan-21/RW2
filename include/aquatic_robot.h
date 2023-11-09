#pragma once

#include <iostream>
#include <utility>
#include "mobile_robot.h"

namespace RWA2
{
    class AquaticRobot: public MobileRobot{
        public:
        AquaticRobot(double x_position, 
        double y_position, 
        double orientation, 
        bool has_fins):
        MobileRobot(x_position,y_position,orientation),
        has_fins_{has_fins},
        depth_{depth}{}
    



virtual rotate(double angle) override;
virtual print_status() override;
virtual move(double distance, double angle) override;


protected:
    bool has_fins_;
    double depth_ = {0.0};
    bool is_diving_ = false ;
    
    void dive(double depth);
    void surface();
};
}