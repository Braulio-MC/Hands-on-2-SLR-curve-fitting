#ifndef SLR_STATISTICS_HPP
#define SLR_STATISTICS_HPP

#include <vector>
#include <cmath>
#include <numeric>
#include <algorithm>


class Statistic {
public:
    Statistic();
    static double average(const std::vector<double> &);
    static double populationVariance(std::vector<double> &);
    static double sampleVariance(std::vector<double> &);
};

#endif //SLR_STATISTICS_HPP
