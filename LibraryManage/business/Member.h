#ifndef _library_manage_business_member_h_
#define _library_manage_business_member_h_

#include <iostream>
#include <string>

using namespace std;

class Member
{
private:
    int MemberID;
    string MemberName;

public:
    Member();
    Member(int memberID, string memberName);
    Member(string memberName);
    ~Member();

    int GetMemberID();
    void SetMemberID(int id);

    string GetMemberName();
    void SetMemberName(string membername);

    string ToString();
};

#endif