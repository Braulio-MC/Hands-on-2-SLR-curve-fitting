#include "DataSet.hpp"
#include "DiscreteMaths.hpp"
#include <iostream>
#include <stdlib.h>

using namespace std;
int main()
{
    DataSet ds;
    DiscreteMaths dm;
    vector<float>x;
    vector<float>y;

    x = ds.getX();
    cout << x[1] << endl;
    y = ds.getY();
    cout << y[0] << endl;
  
    cout << "sumX=" << dm.sumX(x) << endl;
    cout << "sumY=" << dm.sumY(y) << endl;
    cout << "sumXY=" << dm.sumXY(x,y) << endl;
    cout << "sumXY=" << dm.sumXsumY(x,y) << endl;


    return EXIT_SUCCESS;
    
}
