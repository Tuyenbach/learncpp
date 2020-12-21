#include "DeptLocations.h"

// construction function default
DeptLocations::DeptLocations(){};

// construction function parameters
DeptLocations::DeptLocations(int ID, int DNumber, string DLocation)
{
    this->ID = ID;
    this->DNumber = DNumber;
    this->DLocation = DLocation;
};
