#ifndef project_business_Employee_h_
#define project_business_Employee_h_
#include <iostream>

using namespace std;

class Employee
{

    int ID;                     // employee id
    string FName, MInit, LName; // employee full name
    long SSN;                   // social Security Number
    string BDate;               // birth day
    string Address;             // address
    char Sex;                   //sex
    int Salary;                 // salary
    long SuperSSN;              // social Security Number of manager
    int DNO;                    // Department

public:
    // construction function default
    Employee();
    // construction function parameters
    Employee(int ID, string FName, string MInit, string LName,
             long SSN, string BDate, string Address, char Sex, int Salary, long SuperSSN, int DNO);
};

#endif