#include "MemberUI.h"
MemberUI::MemberUI(/* args */)
{
}

MemberUI::~MemberUI()
{
}
void MemberUI::AddMember()
{
    cout << "ADD MEMBER" << endl;
    cout << "____________________________________" << endl;

    cout << "enter the infor: " << endl;

    string membername;
    cout << "enter member name: ";

    cin.ignore();
    getline(cin, membername);
    //cin >> membername;

    Member *mb = new Member(membername);
    if (memberDB->AddMember(mb) == 1)
    {
        memberDB->WriteToFile("file/member_data.txt");
        cout << "DONE";
    }
    else
    {
        cout << "can not add member";
    }
}

void MemberUI::EditMember()
{
    cout << "Edit MEMBER" << endl;
    cout << "____________________________________" << endl;
    int memberid;
    cout << "enter the member id for edit: " << endl;
    cin >> memberid;

    cout << "enter the infor for update: " << endl;

    string membername;
    cout << "enter new  member name: ";
    // cin >> membername;
    cin.ignore();
    getline(cin, membername);

    Member *member = new Member(membername);
    if (memberDB->EditMember(memberid, member) == 1)
    {
        memberDB->WriteToFile("file/member_data.txt");
        cout << "DONE";
    }
    else
    {
        cout << "can not EDIT member";
    }
}

void MemberUI::DeleteMember()
{
    cout << "DELETE MEMBER" << endl;
    cout << "____________________________________" << endl;
    int memberid;
    cout << "enter the member id for DELETE: " << endl;
    cin >> memberid;

    if (memberDB->DeleteMember(memberid) == 1)
    {
        memberDB->WriteToFile("file/member_data.txt");
        cout << "DONE";
    }
    else
    {
        cout << "can not Delete member";
    }
}

void MemberUI::GetAllMember()
{
    cout << "ALL MEMBER" << endl;
    cout << "____________________________________" << endl;
    for (Member *mb : memberDB->GetAllMember())
    {
        cout << mb->ToString() << endl;
    }
}
