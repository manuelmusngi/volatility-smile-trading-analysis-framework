#ifndef VOLATILITY_SMILE_HPP
#define VOLATILITY_SMILE_HPP

#include <vector>
#include <ranges>

class VolatilitySmile {
public:
    VolatilitySmile(std::vector<double> strikes, std::vector<double> vols);
    double getVolatility(double strike) const;

private:
    std::vector<double> m_strikes;
    std::vector<double> m_vols;
};

#endif // VOLATILITY_SMILE_HPP
