#include "SLR.hpp"

SLR::SLR() = default;

const double &SLR::calculateB_0(const std::vector<double> &_x, const std::vector<double> &_y) {
    auto n = static_cast<double>(_x.size());
    auto sumY = DiscreteMaths::sum(_y);
    auto sumX = DiscreteMaths::sum(_x);
    calculateB_1(_x, _y);

    auto leftDividend = sumY;
    auto rightDividend = B_1 * sumX;
    auto divisor = n;
    auto finalDividend = leftDividend - rightDividend;;

    B_0 = finalDividend / divisor;
    return B_0;
}

const double &SLR::calculateB_1(const std::vector<double> &_x, const std::vector<double> &_y) {
    auto n = static_cast<double>(_x.size());
    auto sumXY = DiscreteMaths::sumXY(_x, _y);
    auto sumXsumY = DiscreteMaths::sumXsumY(_x, _y);
    auto forEachXPower2 = DiscreteMaths::pow(const_cast<std::vector<double> &>(_x), 2);
    auto xPower2 = pow(DiscreteMaths::sum(_x), 2);

    auto leftDividend = n * sumXY;
    auto rightDividend = sumXsumY;
    auto leftDivisor = n * forEachXPower2;
    auto rightDivisor = xPower2;
    auto finalDividend = leftDividend - rightDividend;
    auto finalDivisor = leftDivisor - rightDivisor;

    B_1 = finalDividend / finalDivisor;
    return B_1;
}

double SLR::predictY(double _x_, const std::vector<double> &_x, const std::vector<double> &_y) {
    calculateB_0(_x, _y);
    return B_0 + (B_1 * _x_);
}

double SLR::calculateR2(std::vector<double> &_x, std::vector<double> &_y) {
    std::size_t n = _y.size();
    double everyYHat[n];
    double error[n];
    double errorSquared[n];
    double yMinusAverage[n];
    auto yAverage = Statistic::average(_y);

    calculateB_0(_x, _y);
    std::transform(_x.begin(), _x.end(), everyYHat,
                   [this](double &x){ return B_0 + (B_1 * x); });  // Y calculada

    std::transform(_y.begin(), _y.end(), everyYHat, error,
                   std::minus<>()); // Y observada - Y calculada

    std::transform(error, error + n, errorSquared,
                   [](double &e){ return pow(e, 2); });  // Cuadrado del error

    std::transform(_y.begin(), _y.end(), yMinusAverage,
                   [&yAverage](double &y){ return pow(y - yAverage, 2); });

    auto ssres = std::accumulate(errorSquared, errorSquared + n, 0.0);
    auto sstot = std::accumulate(yMinusAverage, yMinusAverage + n, 0.0);
    auto r2 = 1 - (ssres / sstot);

    return r2;
}

std::string SLR::regressionEquationRepr(std::vector<double> &_x, std::vector<double> &_y) {
    std::stringstream  ss;
    calculateB_0(_x, _y);
    ss << "y_hat = B_0 + (B_1 * x) ===> y_hat = " << B_0 << " + (" << B_1 << " * x)";
    return ss.str();
}
