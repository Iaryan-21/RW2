#pragma once

#include <iostream>
#include <utility>

namespace RWA2 {
    class Sensor
    {
    private:
        std::string module_;
        double data_[50];
    public:
        void read_data(unsigned int duration);
    };
}