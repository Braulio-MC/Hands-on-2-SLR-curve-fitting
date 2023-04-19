#ifndef DISCRETE_MATHS
#define DISCRETE_MATHS

#include <vector>
#include <numeric>
#include <algorithm>
#include <stdexcept>
#include <cmath>


class DiscreteMaths {
public:
    DiscreteMaths();
    static double sum(const std::vector<double> &);
    static double pow(std::vector<double> &, unsigned long long);
    static double sumXY(const std::vector<double> &, const std::vector<double> &);
    static double sumXsumY(const std::vector<double> &, const std::vector<double> &);
};

#endif
