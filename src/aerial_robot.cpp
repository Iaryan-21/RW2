#include "aerial_robot.h"


void RWA2::AerialRobot::take_off(double altitude){
    if(!is_flying_){
        double speed;
        if (has_wing_){
            speed = 3.0;
        }
        else{
            speed = 1.5;
        }
        altitude_ = altitude;
        std::this_thread::sleep_for(std::chrono::seconds(altitude/speed));
        is_flying_ = true;
};
}


void RWA2::AerialRobot::land(){
    if(is_flying_){
        double landingSpeed;
        if(has_wing_){
            landingSpeed = 4.0;
        }
        else {
            landingSpeed = 2.0;
        }
        std::this_thread::sleep_for(std::chrono::seconds(altitude_ / landingSpeed));
        altitude_ = 0.0;
        is_flying_ = false;
    };
}

void RWA2::AerialRobot::rotate(double angle){
    std::cout << "AerialRobot::Erle-Plane rotated." << angle << "degrees";
    orientation_ = orientation_ + angle;
}

void RWA2::AerialRobot::print_status(){
    MobileRobot::print_status();
    std::cout<<"has_wings_" << has_wing_<<'\n';
    std::cout<<"altitude_" << altitude_<<'\n';
    std::cout<<"is_flying_" << is_flying_<<'\n';

}
void RWA2::AerialRobot::move(double distance, double angle){
    if (distance > 50.0){
        std::cout<< "Max distance : 50m"<<'\n';
    }
    if (battery_.getCurrentCharge() < distance / 25 +2 * altitide_) {
        battery_.startCharginig();
        std::this_thread::sleep_for(std::chrono::seconds(1.0));
    }
    sensor_.readData(5);
    take_off(distance);
    rotate(angle);
    land();

    std:: cout << <model_> << "reached an altitude of" <<distnace<<"meters and then landed"<<'\n'
    print_staus();
    }