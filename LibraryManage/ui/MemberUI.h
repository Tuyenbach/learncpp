#ifndef _library_manage_ui_memberui_h_
#define _library_manage_ui_memberui_h_

#include <iostream>
#include <string>
#include "../business/Member.h"
#include "../dataaccess/MemberData.h"

using namespace std;
class MemberUI
{
private:
    MemberData  *memberData = new MemberData("member_data.txt");
public:

void Add();
void Edit();
void Delete();
};



#endif