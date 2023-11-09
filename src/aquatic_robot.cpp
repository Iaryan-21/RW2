#include "aquatic_robot.h"

void RWA2::AquaticRobot::dive(double depth) {
    if (!is_diving_){
        double speed;
        if(has_fins_){
            speed = 2.0;
        }
        else{
             speed = 1.0;
        }
        depth_ = depth;
        double time_to_reach_depth = depth / (has_fins_ ? 2.0 : 1.0);
        std::this_thread::sleep_for(std::chrono::milliseconds(static_cast<int>(time_to_reach_depth * 1000)));
        is_diving_ = false;
    }

}
void RWA2::AquaticRobot::surface(){
    if (is_diving_){
        double speed;
        if (has_fins_){
            speed = 4.0;
        }
        else{
            speed = 2.0;
        }
        double time_to_reach_surface = depth / (has_fins ? 4.0: 2.0);
        std::this_thread::sleep_for(std::chrono::milliseconds(static_cast<int>(time_to_reach_surface * 1000)));
        depth = 0.0;
        is_diving_ = false;
    }
}
void RWA2::AquaticRobot::rotate(double angle){
    std::cout << "SoFi rotated at angle" << angle << "degrees";
}

void RWA2::AquaticRobot::print_status(){
    MobileRobot::print_status();
    std::cout<<"has_fins_" << has_fins_<<'\n';
    std::cout<<"depth_" << depth_<<'\n';
    std::cout<<"is_diving_" << is_diving_<<'\n';
}

void RWA2::AquaticRobot::move(double distance, double angle){
    if (distance > 100.0){
        std::cout<< "Max distance : 100 m"<<'\n';
    }
    double totalDistance = distance * 2.0;
    if (battery_.getCurrentCharge() < totalDistance / 10){
        battery_.startCharging();
        std::this_thread::sleep_for(std::chrono::seconds(1.0));
    }


    sensor_.readData(5);
    rotate(angle);
    dive(distance);
    surface();
    std:: cout << "<model_> reached a depth of" << distance <<"meters and then surfaced"<<'\n'
    print_staus();
}