#ifndef student_manage_business_student_h
#define student_manage_business_student_h

#include <iostream>
#include <String>

using namespace std;

class Student
{
private:
    int _sID;
    string _sCode;
    string _sName;
    string _sBDate;
    char _sSex;

public:
    Student(/* args */);
    Student(string sCode, string sName, string sBDate, char sSex);
    Student(int sID, string sCode, string sName, string sBDate, char sSex);
    ~Student();

    int getID();
    void setID(int sID);

    string getCode();
    void setCode(string sCode);

    string getName();
    void setName(string sName);

    string getBDate();
    void setBDate(string sBDate);

    char getSex();
    void getSex(char SSex);

    string toString();
};

#endif