#include "BorrowReturnDB.h"
#include <fstream>

BorrowReturnDB::BorrowReturnDB(/* args */)
{
    _data.resize(0);
    _maxID = 0;
}

BorrowReturnDB::BorrowReturnDB(string FileName)
{
    _data.resize(0);
    _maxID = 0;

    ifstream FileIn(FileName);

    int nuberBorrowReturn = 0;
    FileIn >> nuberBorrowReturn;

    int borrowReturnID;
    int memberID;
    int bookID;
    string borrowReturnDate;
    int borrowReturnstatus;
    for (int i = 0; i < nuberBorrowReturn; i++)
    {
        FileIn >> borrowReturnID;
        FileIn >> memberID;
        FileIn >> bookID;
        // FileIn >> borrowReturnDate;
        FileIn.ignore();
        getline(FileIn, borrowReturnDate);
        FileIn >> borrowReturnstatus;

        BorrowReturn *br = new BorrowReturn(borrowReturnID, memberID, bookID, borrowReturnDate, borrowReturnstatus);
        _data.push_back(br);
        _maxID = borrowReturnID;
    }
    FileIn.close();
}
BorrowReturnDB::~BorrowReturnDB()
{
}

int BorrowReturnDB::WriteToFile(string FileName)
{

    ofstream FileOut(FileName);

    FileOut << _data.size() << endl;

    for (BorrowReturn *br : _data)
    {
        FileOut << br->ToString() << endl;
    }

    FileOut.close();
    return 1;
}

int BorrowReturnDB::AddBorrowReturn(BorrowReturn *borrowReturn)
{
    _maxID++;
    borrowReturn->SetBorrowReturnID(_maxID);
    _data.push_back(borrowReturn);
    return 1;
}
int BorrowReturnDB::EditBorrowReturn(int id, BorrowReturn *borrow)
{
    for (BorrowReturn *br : _data)
    {
        if (br->GetBorrowReturnID() == id)
        {
            br->SetMemberID(borrow->GetMemberID());
            br->SetBookID(borrow->GetMemberID());
            br->SetBorrowReturnDate(borrow->GetBorrowReturnDate());
            br->SetBorrowBeturnStatus(borrow->GetBorrowBeturnStatus());
            return 1;
        }
    }
    return 0;
}
int BorrowReturnDB::DeleteBorrowReturn(int id)
{
    for (int i = 0; i < _data.size(); i++)
    {
        if (_data.at(i)->GetBorrowReturnID() == id)
        {
            _data.erase(_data.begin() + i);
            return 1;
        }
    }
    return 0;
}
vector<BorrowReturn *> BorrowReturnDB::GetAllBorrowReturn()
{
    return _data;
}