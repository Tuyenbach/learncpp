#include "MemberData.h"
#include <fstream>

MemberData::MemberData()
{
    _data.resize(0);
    _maxID = 0;
}
MemberData::MemberData(string file_name)
{

    _data.resize(0);
    _maxID = 0;
    ifstream FileIn(file_name);

    int numberMember = 0;
    FileIn >> numberMember;
    int iD;
    string nameMember;

    for (int i = 0; i < numberMember; i++)
    {
        FileIn >> iD;
        FileIn >> nameMember;

        Member *member = new Member(iD, nameMember);

        _data.push_back(member);
        _maxID = iD;
    }
    FileIn.close();
}

MemberData::~MemberData()
{
}

int MemberData::WriteToFile(string file_name)
{

    ofstream FileOut(file_name);

    FileOut << _data.size();
    FileOut << "\n";

    for (Member *m : _data)
    {

        FileOut << m->ToString();
        FileOut << "\n";
    }
    FileOut.close();

    return 1;
}

int MemberData::Add(Member *member)
{
    _maxID++;

    member->SetMemberID(_maxID);

    _data.push_back(member);
    return 1;
}

int MemberData::Edit(int id, Member *member)
{
    for (Member *m : _data)
    {
        if (m->GetMemberID() == id)
        {
            m->SetMemberName(member->GetMemberName());
        }
    }

    return 1;
}
int MemberData::Delete(int id)
{
    for (int i = 0; i < _data.size(); i++)
    {
        if (((_data.at(i))->GetMemberID()) == id)
        {
            _data.erase(_data.begin() + i);
            return 1;
        }
    }

    return 0;
}

vector<Member *> MemberData::GetAllMember()
{
    return _data;
}
// Member *MemberData::GetMemberByID(int id){}