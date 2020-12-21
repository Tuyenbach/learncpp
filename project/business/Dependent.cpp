#include "Dependent.h"

// construction function default
Dependent::Dependent(){};

// construction function parameters
Dependent::Dependent( int ID, long ESSN, string DependentName, char Sex, string BDate, string Relationship)
{
    this->ID = ID;
    this->ESSN = ESSN;
    this->DependentName = DependentName;
    this->Sex = Sex;
    this->BDate = BDate;
    this->Relationship = Relationship;
    
};