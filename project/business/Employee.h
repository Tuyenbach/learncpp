#ifndef project_business_Employee.h_
#define project_business_Employee.h_
#include <iostream>

using namespace std;


class Employee{

int ID;
string FName, MInit, LName;
long SSN;
string BDate, Address;
char Sex;
int Salary;
long SuperSSN;
int DNO;

public:
Employee();
Employee(int ID, string FName, string MInit,string  LName,
long SSN, string BDate, string Address, char Sex, int Salary, long SuperSSN, int DNO);


};



#endif