#ifndef DISCRETE_MATHS
#define DISCRETE_MATHS
#include <vector>

class DiscreteMaths 
{
    public:
        DiscreteMaths();
        float sumX(std::vector<float>);
        float sumY(std::vector<float>);
        float sumXY(std::vector<float>, std::vector<float>);
        float sumXsumY(std::vector<float>, std::vector<float>);
};

#endif
