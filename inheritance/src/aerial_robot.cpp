#include "inheritance/include/aerial_robot.h"


void RWA2::AerialRobot::take_off(double altitude){
    if(!is_flying_){
        double speed = has_wing_ ? 3.0 : 1.5;
        altitude_ = altitude;
    }
    is_flying_ = true;
}


void RWA2::AerialRobot::land(){
    if(is_flying_){
        double landingSpeed = has_wing_ ? 4.0:2.0;
        altitude_ = altitude;
        is_flying_ = false;
    }
}

void RWA2::AerialRobot::rotate(double angle){
    std::cout << "AerialRobot::Erle-Plane rotated." << angle << "degrees";
}

void RWA2::AerialRobot::print_status(){
    MobileRobot::print_status();
    std::cout<<"has_wings_" << has_wing_<<'\n';
    std::cout<<"altitude_" << altitude_<<'\n';
    std::cout<<"is_flying_" << is_flying_<<'\n';

}
void RWA2::AerialRobot::move(double distance, double angle){
    
}