#include "inheritance/include/legged_robot.h"


void RWA2::LeggedRobot::jump(double amount){
  double jump_height = amount * leg_strength_ * 0.01;
  height_ += jump_height;
  std::cout<< "Legged Jump height:" <<height_ << "cm above ground"<<'\n';
}
void RWA2::LeggedRobot::kick(){
    std::cout<< "Legged Robot kick strength" << leg_strength_ <<'\n';
}

void RWA2::LeggedRobot::rotate(double angle){
    std::cout<<"<model_> rotated " << angle << "degrees."<<'\n';
}
void RWA2::LeggedRobot::print_status(){
    MobileRobot::print_status();
    std::cout << "height_: " << height_ <<'\n';
    std::cout << "stride_length_: " << stride_length_ <<'\n';
    std::cout << "number_legs_: " << number_legs_ <<'\n';
    std::cout << "leg_strength_: " << leg_strength_ <<'\n';
}
void RWA2::LeggedRobot::move(double distance, double angle){
    
}
}