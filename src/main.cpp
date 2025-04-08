#include "OptionPricing.hpp"
#include <iostream>
#include <vector>

int main() {
    std::vector<double> strikes = {90, 95, 100, 105, 110};
    std::vector<double> vols = {0.25, 0.22, 0.2, 0.22, 0.25};
    
    VolatilitySmile smile(std::move(strikes), std::move(vols));
    OptionPricing pricing(100, 0.05, 1, smile);
    
    double strike = 100;
    bool isCall = true;
    
    double price = pricing.price(strike, isCall);
    std::cout << "Option Price: " << price << std::endl;
    
    return 0;
}
