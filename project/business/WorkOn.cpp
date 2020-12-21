#include "WorkOn.h"

// construction function default
WorkOn::WorkOn(){};

// construction function parameters
WorkOn:: WorkOn(    int ID, long ESSN, int PNO,  float Hours)
{
    this->ID = ID;
    this->ESSN = ESSN;
    this->PNO = PNO;
    this->Hours = Hours;
};
