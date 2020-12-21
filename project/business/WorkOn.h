#ifndef project_business_WorkOn_h_
#define project_business_WorkOn_h_
#include <iostream>

using namespace std;

class WorkOn
{

    int ID;                     
    long ESSN;
    int PNO;                  
    float Hours;                

public:
    // construction function default
    WorkOn();
    // construction function parameters
    WorkOn(    int ID, long ESSN, int PNO,  float Hours);
};

#endif