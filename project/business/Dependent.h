#ifndef project_business_Dependent_h_
#define project_business_Dependent_h_
#include <iostream>
using namespace std;

class Dependent
{
    int ID;
    long ESSN;
    string DependentName;
    char Sex;
    string BDate;
    string Relationship;


public:
    // construction function default
    Dependent();

    // construction function parameters
    Dependent(    int ID, long ESSN, string DependentName, char Sex, string BDate, string Relationship);
};

#endif