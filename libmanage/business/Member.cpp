#include "Member.h"
Member::Member(/* args */)
{
}

Member::~Member()
{
}

Member::Member(int memberid, string membername)
{
    MemberID = memberid;
    MemberName = membername;
}
Member::Member(string membername)
{
    MemberName = membername;
}

int Member::GetMemberID()
{
    return MemberID;
}
void Member::SetMemberID(int memberid)
{
    MemberID = memberid;
}

string Member::GetMemberName()
{
    return MemberName;
}
void Member::SetMemberName(string membername)
{
    MemberName = membername;
}

string Member::ToString()
{
    return to_string(MemberID) + " | " + MemberName;
}