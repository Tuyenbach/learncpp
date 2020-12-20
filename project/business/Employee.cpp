#include "Employee.h"
// construction function default
Employee::Employee(){};

// construction function parameters
Employee::Employee(int ID, string FName, string MInit,string  LName,
long SSN, string BDate, string Address, char Sex, int Salary, long SuperSSN, int DNO)
 {
    this->ID = ID;
    this->FName = FName;
    this->MInit = MInit;
    this->LName = LName;
    this->SSN = SSN;
    this->BDate = BDate;
    this->Address = Address;
    this->Sex = Sex;
    this->Salary = Salary;
    this->SuperSSN = SuperSSN;
    this->DNO = DNO;
 };