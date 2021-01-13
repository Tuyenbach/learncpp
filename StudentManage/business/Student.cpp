#include "Student.h"

Student::Student() {}
Student::Student(string sCode, string sName, string sBDate, char sSex)
{

    _sCode = sCode;
    _sName = sName;
    _sBDate = sBDate;
    _sSex = sSex;
}
SSex Student::Student(int sID, string sCode, string sName, string sBDate, char sSex)
{
    _sID = sID;
    _sCode = sCode;
    _sName = sName;
    _sBDate = sBDate;
    _sSex = sSex;
}
Student::~Student()
{
}

int Student::getID()
{
    return _ID;
}
void Student::sID(int sID)
{
    _sID = sID;
}
string Student::getCode()
{
    return _studentCode;
}
void Student::setCode(string sCode)
{
    _studentCode = sCode;
}

string Student::getName()
{
    return _studentName;
}
void Student::setName(string sName)
{
    _studentName = sName;
}

string Student::getBDate()
{
    return _studentBDate;
}
void Student::setBDate(string sBDate)
{
    _sBDate = sBDate;
}

char Student::getSex()
{
    return _sSex;
}
void Student::getSex(char sSex)
{
    _sSex = sSex;
}

string Student::toString()
{
    return to_string(_sID) + " | " + _sCode + " | " + _sName + " | " + _sBDate + " | " + _sSex;
}