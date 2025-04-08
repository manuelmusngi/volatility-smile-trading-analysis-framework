#include "OptionPricing.hpp"
#include "BlackScholes.hpp"

OptionPricing::OptionPricing(double spot, double rate, double time, const VolatilitySmile& smile)
    : m_spot(spot), m_rate(rate), m_time(time), m_smile(smile) {
}

double OptionPricing::price(double strike, bool isCall) const {
    double vol = m_smile.getVolatility(strike);
    return blackScholesPrice(m_spot, strike, m_rate, m_time, vol, isCall);
}
