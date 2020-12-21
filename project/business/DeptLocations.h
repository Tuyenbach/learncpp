#ifndef project_business_DeptLocations_h_
#define project_business_DeptLocations_h_

#include <iostream>
using namespace std;


class DeptLocations
{
    int ID;
    int DNumber;
    string DLocation;

public:
    // construction function default
    DeptLocations();

    // construction function parameters
    DeptLocations(int ID, int DNumber, string DLocation);
};

#endif