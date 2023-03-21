#include "DataSet.hpp"

DataSet::DataSet()
{
    x = {1,1,1,1,1,1,1,1,1};
    y = {1,1,1,1,1,1,1,1,1};
}

std::vector<float> DataSet::getX()
{
    return x;
}

std::vector<float> DataSet::getY()
{
    return y;
}



