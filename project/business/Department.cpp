#include "Department.h"

// construction function default
Department::Department(){};

// construction function parameters
Department::Department(int ID, string DName, int DNumber, long MGRSSN, string MGRStartDate)
{
    this->ID = ID;
    this->DName = DName;
    this->DNumber = DNumber;
    this->MGRSSN = MGRSSN;
    this->MGRStartDate = MGRStartDate;
};
