#ifndef student_manage_dataacess_studentBD_h
#define student_manage_dataacess_studentBD_h

#include "../business/Student.h"

#include <vector>

class StudentDB
{
private:
    vector<Student *> _data;
    int _maxID;

public:
    StudentDB();
    StudentDB(string fileName);
    ~StudentDB();
    int WriteToFile();
    int Add(Student *s);
};

#endif