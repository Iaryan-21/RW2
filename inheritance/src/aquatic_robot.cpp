#include "inheritance/include/aquatic_robot.h"

void RWA2::AquaticRobot::dive(double depth) {
    if (!is_diving_){
        double speed = has_fins_ ? 2.0: 1.0;
        depth_ = depth;
        double time_to_reach_depth = depth / (has_fins_ ? 2.0 : 1.0);
        std::this_thread::sleep_for(std::chrono::milliseconds(static_cast<int>(time_to_reach_depth * 1000)));
        is_diving_ = false;
    }

}
void RWA2::AquaticRobot::surface(){
    if (is_diving_){
        double speed = has_fins_ ? 4.0 : 2.0;
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

void RWA2::AquaticRobot::move(double distance, double angle)