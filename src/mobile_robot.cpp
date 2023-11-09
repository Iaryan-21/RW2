#include "mobile_robot.h"

void RWA2::MobileRobot::rotate(double angle){
    orientation_ += angle;
}
void RWA2::MobileRobot::move(){

}
void RWA2::MobileRobot::print_status() {
    std::cout << "Position: (" << position_.first << ", " << position_.second << ")" << std::endl;
    std::cout << "Orientation: " << orientation_ << std::endl;
    std::cout << "Speed: " << speed_ << std::endl;
}