#ifndef lib_manager_dataacess_memberDB_h
#define lib_manager_dataacess_memberDB_h

#include "../business/Member.h"
#include <iostream>
#include <vector>

using namespace std;

class MemberDB
{
private:
    vector<Member *> _data;
    int _maxID;

public:
    MemberDB();
    MemberDB(string FileName);
    ~MemberDB();

    int WriteToFile(string FileName);
    int AddMember(Member *menber);
    int EditMember(int id, Member *menber);
    int DeleteMember(int id);
    vector<Member*> GetAllMember();
};

#endif
