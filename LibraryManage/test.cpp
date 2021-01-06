#include <iostream>
#include "business/Member.h"
#include "dataaccess/MemberData.h"
#include "ui/MemberUI.h"

using namespace std;

int main()
{
    MemberUI *memberUI = new MemberUI();
     //memberUI->Add();
    //memberUI->Edit();
    memberUI->Delete();
    return 0;
}