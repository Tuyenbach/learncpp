#ifndef lib_manager_ui_memberUI_h
#define lib_manager_ui_memberUI_h

#include "../dataacess/MemberDB.h"
#include "../business/Member.h"

class MemberUI
{
private:
    MemberDB *memberDB = new MemberDB("file/member_data.txt");

public:
    MemberUI(/* args */);
    ~MemberUI();
    void AddMember();
    void EditMember();
    void DeleteMember();
    void GetAllMember();
};

#endif
