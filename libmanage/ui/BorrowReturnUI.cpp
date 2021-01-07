#include "BorrowReturnUI.h"
BorrowReturnUI::BorrowReturnUI(/* args */)
{
}

BorrowReturnUI::~BorrowReturnUI()
{
}
void BorrowReturnUI::AddBorrowReturn()
{
    cout << "ADD BorrowReturn" << endl;
    cout << "____________________________________" << endl;

    cout << "enter infor: " << endl;

    int MemberID;
    int BookID;
    string BorrowReturnDate;
    int BorrowReturnStatus;

    cout << "enter MemberID: ";
    cin >> MemberID;
    cout << "enter BookID: ";
    cin >> BookID;
    cout << "enter BorrowReturnDate: ";
    // cin >> BorrowReturnDate;
    cin.ignore();
    getline(cin, BorrowReturnDate);
    cout << "enter BorrowReturnStatus: ";
    cin >> BorrowReturnStatus;

    BorrowReturn *b = new BorrowReturn(MemberID, BookID, BorrowReturnDate, BorrowReturnStatus);
    if (borrowReturnDB->AddBorrowReturn(b) == 1)
    {
        borrowReturnDB->WriteToFile("file/borrowReturn_data.txt");
        cout << "DONE";
    }
    else
    {
        cout << "can not add BorrowReturn";
    }
}

void BorrowReturnUI::EditBorrowReturn()
{
    cout << "Edit BorrowReturn" << endl;
    cout << "____________________________________" << endl;
    int borrowReturnid;
    cout << "enter the BorrowReturn id for edit: " << endl;
    cin >> borrowReturnid;

    cout << "enter the infor for update: " << endl;

    int MemberID;
    int BookID;
    string BorrowReturnDate;
    int BorrowReturnStatus;

    cout << "enter MemberID: ";
    cin >> MemberID;
    cout << "enter BookID: ";
    cin >> BookID;
    cout << "enter BorrowReturnDate: ";
    // cin >> BorrowReturnDate;
    cin.ignore();
    getline(cin, BorrowReturnDate);
    cout << "enter BorrowReturnStatus: ";
    cin >> BorrowReturnStatus;

    BorrowReturn *borrowReturn = new BorrowReturn(MemberID, BookID, BorrowReturnDate, BorrowReturnStatus);
    if (borrowReturnDB->EditBorrowReturn(borrowReturnid, borrowReturn) == 1)
    {
        borrowReturnDB->WriteToFile("file/borrowReturn_data.txt");
        cout << "DONE";
    }
    else
    {
        cout << "can not EDIT BorrowReturn";
    }
}

void BorrowReturnUI::DeleteBorrowReturn()
{
    cout << "DELETE BorrowReturn" << endl;
    cout << "____________________________________" << endl;
    int borrowReturnid;
    cout << "enter the BorrowReturn id for DELETE: " << endl;
    cin >> borrowReturnid;

    if (borrowReturnDB->DeleteBorrowReturn(borrowReturnid) == 1)
    {
        borrowReturnDB->WriteToFile("file/borrowReturn_data.txt");
        cout << "DONE";
    }
    else
    {
        cout << "can not Delete BorrowReturn";
    }
}

void BorrowReturnUI::GetAllBorrowReturn()
{
    cout << "ALL BorrowReturn" << endl;
    cout << "____________________________________" << endl;
    for (BorrowReturn *br : borrowReturnDB->GetAllBorrowReturn())
    {
        cout << br->ToString() << endl;
    }
}
