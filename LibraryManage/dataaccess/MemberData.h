#ifndef _library_manage_dataaccess_member_data_h_
#define _library_manage_dataaccess_member_data_h_

#include <string>
#include <vector>
#include "../business/Member.h"

class MemberData
{
private:
    vector<Member *> _data;
    int _maxID = 0;

public:
    MemberData();
    MemberData(string file_name);
    ~MemberData();

    int WriteToFile(string file_name);

    int Add(Member *member);
    int Edit(int id, Member *member);
    int Delete(int id);
    vector<Member *> GetAllMember();
    // Member *GetMemberByID(int id);
};

#endif