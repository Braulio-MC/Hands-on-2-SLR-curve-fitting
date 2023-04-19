#include "DiscreteMaths.hpp"

DiscreteMaths::DiscreteMaths() = default;

/**
 * @brief  Performs SUM(_vector)
 * @param  _vector contains values to apply sum
 * @return  The result of SUM(_vector)
 */
double DiscreteMaths::sum(const std::vector<double> &_vector) {
    return std::accumulate(_vector.cbegin(), _vector.cend(), 0.0);
}

/**
 * @brief Apply _power to each element of _vector
 * @param  _vector contains values to apply power
 * @return The total sum of _power applied to every element of _vector
 */
double DiscreteMaths::pow(std::vector<double> &_vector, unsigned long long _power) {
    double result[_vector.size()];
    std::transform(_vector.begin(), _vector.end(), result,
                   [&_power](double &d){ return std::pow(d, _power); });
    return std::accumulate(result, result + _vector.size(), 0.0);
}

/**
 * @brief  Performs SUM(_vectorX[i] * _vectorY[i]) until "i" is exhausted
 * @param  _vectorX contains values for X variable
 * @param  _vectorY contains values for Y variable
 * @return  The result of SUM(_vectorX[i] * _vectorY[i])
 * @throw  range_error if vectors have different sizes
 */
double DiscreteMaths::sumXY(const std::vector<double> &_vectorX, const std::vector<double> &_vectorY) {
    if (_vectorX.size() != _vectorY.size())
        throw std::range_error("vectors have different sizes");
    double result[_vectorX.size()];
    std::transform(_vectorX.cbegin(), _vectorX.cend(), _vectorY.cbegin(), result, std::multiplies<>());
    return std::accumulate(result, result + _vectorX.size(), 0.0);
}

/**
 * @brief  Performs SUM(_vectorX) * SUM(_vectorY)
 * @param  _vectorX contains values for X variable
 * @param  _vectorY contains values for Y variable
 * @return  The result of SUM(_vectorX) * SUM(_vectorY)
 * @throw  range_error if vectors have different sizes
 */
double DiscreteMaths::sumXsumY(const std::vector<double> &_vectorX, const std::vector<double> &_vectorY) {
    if (_vectorX.size() != _vectorY.size())
        throw std::range_error("vectors have different sizes");
    return sum(_vectorX) * sum(_vectorY);
}
