#include <iostream>
#include <memory>
#include <vector>

#include "mobile_robot.h"
#include "aerial_robot.h"
#include "legged_robot.h"
#include "wheeled_robot.h"
#include "aquatic_robot.h"

void get_status(const std::vector<std::unique_ptr<RWA2::MobileRobot>>& robots){
    for (const auto& robot : robots){
            robot->move();
            robot->rotate(45);
            robot->print_status();
    }
    
}


int main(){
//===========================================================================================
//WITH INHERITTANCE 
//===========================================================================================
    RWA2::MobileRobot robot(1.0,2.0,30.0);
    robot.rotate(45.0);
    robot.move();
    robot.print_status();
    RWA2::AerialRobot robot{3.5,4.5,45.0,true,false};
    RWA2::LeggedRobot robot(3.5,6.5,45.0,0.5);
    RWA2::WheeledRobot robot(4.5,7.5,0.0,6,2);
    RWA2::AquaticRobot robot();
    return 0;
//===========================================================================================
//WITH POLYMORPHISM
//===========================================================================================
std::vector<std::unique_ptr<RWA2::MobileRobot>> mobile_robots;

std::unique_ptr<RWA2::MobileRobot> aquatic_ptr=
        std::make_unique<RWA2::AquaticRobot>();
std::unique_ptr<RWA2::MobileRobot> aerial_ptr =
        std::make_unique<RWA2::AerialRobot>(2.5,5.5,45.0,false);

std::unique_ptr<RWA2::MobileRobot> legged_ptr =
        std::make_unique<RWA2::LeggedRobot>(3.5,6.5,45.0,0.5);

std::unique_ptr<RWA2::MobileRobot> wheeled_ptr =
        std::make_unique<RWA2::WheeledRobot>(4.5,7.5,0.0,6,2);

mobile_robots.push_back(std::move(aerial_ptr));
mobile_robots.push_back(std::move(aquatic_ptr));
mobile_robots.push_back(std::move(legged_ptr));
mobile_robots.push_back(std::move(wheeled_ptr));
}