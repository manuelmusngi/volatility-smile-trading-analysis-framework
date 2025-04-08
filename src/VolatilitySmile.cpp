#include "VolatilitySmile.hpp"
#include <algorithm>
#include <ranges>

VolatilitySmile::VolatilitySmile(std::vector<double> strikes, std::vector<double> vols)
    : m_strikes(std::move(strikes)), m_vols(std::move(vols)) {
}

double VolatilitySmile::getVolatility(double strike) const {
    auto it = std::ranges::lower_bound(m_strikes, strike);
    if (it == m_strikes.begin()) return m_vols.front();
    if (it == m_strikes.end()) return m_vols.back();
    
    size_t idx = std::distance(m_strikes.begin(), it);
    double t = (strike - m_strikes[idx - 1]) / (m_strikes[idx] - m_strikes[idx - 1]);
    return m_vols[idx - 1] * (1 - t) + m_vols[idx] * t;
}
