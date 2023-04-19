#include "Statistics.hpp"

Statistic::Statistic() = default;

double Statistic::average(const std::vector<double> &_vector) {
    double sum = std::accumulate(_vector.begin(), _vector.end(), 0.0);
    auto n = static_cast<double>(_vector.size());
    return sum / n;
}

double Statistic::populationVariance(std::vector<double> &_vector) {
    auto vectSize = _vector.size();
    auto n = static_cast<double>(vectSize);
    auto average = Statistic::average(_vector);
    double result[vectSize];
    std::transform(_vector.begin(), _vector.end(), result,
                   [&average](double &y){ return pow(y - average, 2); });
    double sum = std::accumulate(result, result + vectSize, 0.0);
    return sum / n;
}

double Statistic::sampleVariance(std::vector<double> &_vector) {
    auto vectSize = _vector.size();
    auto n = static_cast<double>(vectSize);
    auto average = Statistic::average(_vector);
    double result[vectSize];
    std::transform(_vector.begin(), _vector.end(), result,
                   [&average](double &y){ return pow(y - average, 2); });
    double sum = std::accumulate(result, result + vectSize, 0.0);
    return sum / (n - 1);
}
