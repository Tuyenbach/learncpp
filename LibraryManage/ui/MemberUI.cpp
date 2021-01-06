#include "MemberUI.h"

void MemberUI::Add()
{
    string memberName;
    cout << "ADD MEMBER: " << endl;
    cout << "enter member name: ";
    cin >> memberName;
    Member *member = new Member(memberName);

    memberData->Add(member);
    memberData->WriteToFile("member_data.txt");
}

void MemberUI::Edit()
{
    int id;
    cout << "EDIT MEMBER: " << endl;
    cout << "enter ID: ";
    cin >> id;
    string memberName;
    cout << "enter the infor: " << endl;
    cout << "enter member name: ";
    cin >> memberName;
    Member *member = new Member(memberName);

    memberData->Edit(id, member);
    memberData->WriteToFile("member_data.txt");
}

void MemberUI::Delete()
{
    int id;
    cout << "DELETE MEMBER: " << endl;
    cout << "enter ID: ";
    cin >> id;

    char choose;
    cout << "Do you want delete " << id << " (y/n) " << endl;
    cin >> choose;
    if (choose == 'y')
    {
        memberData->Delete(id);
        memberData->WriteToFile("member_data.txt");
    }
}