#ifndef project_business_Department_h_
#define project_business_Department_h_
#include <iostream>
using namespace std;

class Department
{
    int ID;
    string DName;
    int DNumber;
    long MGRSSN;
    string MGRStartDate;

public:
    // construction function default
    Department();

    // construction function parameters
    Department(int ID, string DName, int DNumber, long MGRSSN, string MGRStartDate);
};

#endif