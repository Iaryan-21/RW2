#include "inheritance/include/wheeled_robot.h"

void RWA2::WheeledRobot::accelerate(double amount){
    while (speed < desired_speed_){
        speed_ += amount;
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }
    std::cout << "<model_> has reached the desired speed of " << desired_speed_ << " m/s." << std::endl;
}

void RWA2::WheeledRobot::decelerate(double amount){
    while (speed_ >= 0.0) {
        speed_ -= amount;
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }
}
void RWA2::WheeledRobot::brake() {
    speed_ = 0.0;
}
void RWA2::WheeledRobot::rotate(double angle) {
    std::cout << "WheeledRobot::<model_> rotated " << angle << " degrees." << std::endl;
}

void RWA2::WheeledRobot::print_status() {
    MobileRobot::print_status(); 
    std::cout << "number_of_wheels_: " << number_of_wheels_ << std::endl;
    std::cout << "wheel_diameter_: " << wheel_diameter_ << std::endl;
    std::cout << "desired_speed_: " << desired_speed_ << std::endl;
    std::cout << "speed_: " << speed_ << std::endl;
}

