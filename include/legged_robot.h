#pragma once

#include <iostream>
#include "mobile_robot.h"

namespace RWA2 {
    class LeggedRobot : public MobileRobot {
    public:
        LeggedRobot(double x_position, double y_position, double orientation, double height, double stride_length, int leg_strength int number_legs = 2)
            : MobileRobot(x_position, y_position, orientation),
              stride_length_{stride_length},
              height_{height},
              number_legs_{number_legs}
              leg_strength_{leg_strength} {
        }



virtual rotate(double angle) override;
virtual print_status() override;
virtual move(double distance, double angle) override;

    protected:
        double height_;
        double stride_length_;
        int number_legs_;
        int leg_strength_;
        void kick();
        void jump();    
    };
}
