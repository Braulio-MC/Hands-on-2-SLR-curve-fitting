#ifndef DATA_SET
#define DATA_SET

#include <vector>

class DataSet {
private:
    std::vector<double> x;
    std::vector<double> y;
public:
    DataSet();
    const std::vector<double> &X();
    const std::vector<double> &Y();
};

#endif
