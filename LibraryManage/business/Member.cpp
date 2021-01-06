#include "Member.h"

Member::Member()
{
}
Member::Member(int memberID, string memberName)
{
    MemberID = memberID;
    MemberName = memberName;
}
Member::Member(string memberName)
{
    MemberName = memberName;
}
Member::~Member()
{
}

int Member::GetMemberID()
{
    return MemberID;
}
void Member::SetMemberID(int id)
{
    MemberID = id;
}

string Member::GetMemberName()
{
    return MemberName;
}
void Member::SetMemberName(string memberName)
{
    MemberName = memberName;
}

string Member::ToString()
{
    return to_string(MemberID) + " " + MemberName;
}
