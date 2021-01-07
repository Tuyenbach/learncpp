#ifndef lib_manager_business_member_h
#define lib_manager_business_member_h

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
    Member(int memberid, string membername);
    Member(string membername);
    ~Member();

    int GetMemberID();
    void SetMemberID(int memberid);

    string GetMemberName();
    void SetMemberName(string membername);

    string ToString();
};

#endif