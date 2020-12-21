#ifndef project_business_Project_h_
#define project_business_Project_h_
#include <iostream>

using namespace std;

class Project
{

    int ID;                     
    int PNumber;
    string PLocation;                  
    int DNumber;                

public:
    // construction function default
    Project();
    // construction function parameters
    Project(    int ID, int PNumber, string PLocation, int DNumber);
};

#endif