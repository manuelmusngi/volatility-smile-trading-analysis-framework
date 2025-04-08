#ifndef OPTION_PRICING_HPP
#define OPTION_PRICING_HPP

#include "VolatilitySmile.hpp"

class OptionPricing {
public:
    OptionPricing(double spot, double rate, double time, const VolatilitySmile& smile);
    double price(double strike, bool isCall) const;

private:
    double m_spot;
    double m_rate;
    double m_time;
    VolatilitySmile m_smile;
};

#endif // OPTION_PRICING_HPP
