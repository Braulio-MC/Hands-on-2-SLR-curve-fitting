#ifndef SLR_SLR_HPP
#define SLR_SLR_HPP

#include <iostream>
#include <vector>
#include <cmath>
#include <stdexcept>
#include <string>
#include <sstream>
#include "DiscreteMaths.hpp"
#include "Statistics.hpp"


class SLR {
private:
    double B_0{};
    double B_1{};
public:
    SLR();
    const double &calculateB_0(const std::vector<double>&, const std::vector<double>&);
    const double &calculateB_1(const std::vector<double>&, const std::vector<double>&);
    double predictY(double, const std::vector<double>&, const std::vector<double>&);
    double calculateR2(std::vector<double>&, std::vector<double>&);
    std::string regressionEquationRepr(std::vector<double>&, std::vector<double>&);
};

#endif //SLR_SLR_HPP
