#include "DataSet.hpp"
#include "SLR.hpp"
#include "Statistics.hpp"
#include <iostream>

using namespace std;

int main() {
    DataSet dataset;
    SLR slr;

    cout << slr.regressionEquationRepr(const_cast<vector<double> &>(dataset.X()),
                                       const_cast<vector<double> &>(dataset.Y())) << "\n\n";
    cout << "Predict Y: " << slr.predictY(60, dataset.X(), dataset.Y()) << "\n\n";
    cout << "R2: " << slr.calculateR2(const_cast<vector<double> &>(dataset.X()),
                                       const_cast<vector<double> &>(dataset.Y()));

    return EXIT_SUCCESS;
}
