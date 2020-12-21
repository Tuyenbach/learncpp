#include "Project.h"

// construction function default
Project::Project(){};

// construction function parameters
Project::Project(    int ID, int PNumber, string PLocation, int DNumber)
{
    this->ID = ID;
    this->PNumber = PNumber;
    this->PLocation = PLocation;
    this->DNumber = DNumber;
};
