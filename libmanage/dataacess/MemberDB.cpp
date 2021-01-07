#include "MemberDB.h"
#include <fstream>

MemberDB::MemberDB(/* args */)
{
    _data.resize(0);
    _maxID = 0;
}

MemberDB::MemberDB(string FileName)
{
    _data.resize(0);
    _maxID = 0;

    ifstream FileIn(FileName);

    int numberMember = 0;
    int id;
    string membername;
    //getline(FileIn, numberMember);
    FileIn >> numberMember;

    for (int i = 0; i < numberMember; i++)
    {
        // getline(FileIn, id);
        FileIn >> id;

        FileIn.ignore();
        getline(FileIn, membername);
        //FileIn >> membername;

        Member *mb = new Member(id, membername);
        _data.push_back(mb);
        _maxID = id;
    }
    FileIn.close();
}
MemberDB::~MemberDB()
{
}

int MemberDB::WriteToFile(string FileName)
{

    ofstream FileOut(FileName);

    FileOut << _data.size() << endl;

    for (Member *mb : _data)
    {
        FileOut << mb->GetMemberID() << endl;

        FileOut << mb->GetMemberName() << endl;
    }

    FileOut.close();
    return 1;
}

int MemberDB::AddMember(Member *menber)
{
    _maxID++;
    menber->SetMemberID(_maxID);
    _data.push_back(menber);
    return 1;
}
int MemberDB::EditMember(int id, Member *menber)
{
    for (Member *mb : _data)
    {
        if (mb->GetMemberID() == id)
        {
            mb->SetMemberName(menber->GetMemberName());
            return 1;
        }
    }
    return 0;
}
int MemberDB::DeleteMember(int id)
{
    for (int i = 0; i < _data.size(); i++)
    {
        if (_data.at(i)->GetMemberID() == id)
        {
            _data.erase(_data.begin() + i);
            return 1;
        }
    }
    return 0;
}
vector<Member *> MemberDB::GetAllMember()
{
    return _data;
}