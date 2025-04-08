#include "BlackScholes.hpp"
#include <cmath>

double normCDF(double value) {
    return 0.5 * std::erfc(-value * M_SQRT1_2);
}

double blackScholesPrice(double spot, double strike, double rate, double time, double vol, bool isCall) {
    double d1 = (std::log(spot / strike) + (rate + 0.5 * vol * vol) * time) / (vol * std::sqrt(time));
    double d2 = d1 - vol * std::sqrt(time);
    
    if (isCall) {
        return spot * normCDF(d1) - strike * std::exp(-rate * time) * normCDF(d2);
    } else {
        return strike * std::exp(-rate * time) * normCDF(-d2) - spot * normCDF(-d1);
    }
}
