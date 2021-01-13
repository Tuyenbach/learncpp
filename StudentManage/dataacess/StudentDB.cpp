#include "StudentDB.h"
#include <fstream>
StudentDB::StudentDB(/* args */)
{
    _data.resize(0);
    _maxID = 0;
}

StudentDB::~StudentDB()
{
}

StudentDB::StudentDB(string fileName)
{
    _data.resize(0);
    _maxID = 0;

    ifstream fileIn(fileName);
    int numberOject = 0;
    fileIn >> numberOject;

    int sID;
    string sCode;
    string sName;
    string sBDate;
    char sSex;

    for (int i = 0; i < numberOject; i++)
    {
        fileIn >> sID;
        fileIn.ignore();
        getline(fileIn, sCode);

        fileIn.ignore();
        getline(fileIn, sName);

        fileIn.ignore();
        getline(fileIn, sBDate);

        // fileIn.ignore();
        // getline(fileIn, sSex);
        fileIn >> sSex;

        Student *s = new Student(sID, sCode, sName, sBDate, sSex);
        _data.push_back(s);

        _maxID = sID;
    }

    fileIn.close();
}

int StudentDB::WriteToFile(string fileName)
{
    ofstream fileOut(fileName);

    fileOut << _data.size();

    for (Student *s : _data)
    {
        fileOut << s->getID << endl;
        fileOut << s->getCode << endl;
        fileOut << s->getName << endl;
        fileOut << s->getBDate << endl;
        fileOut << s->getCode << endl;
    }

    fileOut.close();
}
int StudentDB::Add(Student *s)
{
    _maxID++;

    s->setID(_maxID);
    _data.push_back(s);
}