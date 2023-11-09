#pragma once

pragma once

#include <iostream>
#include <utility>

namespace RWA2 {
    class Battery{
        public:
        void startCharging();
        void discharge(double amount);

        private:
        std::string model_;
        int currentCharge_{};
        bool is_charging_;
        
        void stop_charging();
    };
}