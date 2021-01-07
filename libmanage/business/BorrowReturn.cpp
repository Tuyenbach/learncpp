#include "BorrowReturn.h"
BorrowReturn::BorrowReturn(/* args */)
{
}

BorrowReturn::~BorrowReturn()
{
}

BorrowReturn::BorrowReturn(int borrowreturnid, int memberid, int bookid, string borrowreturndate, int borrowreturnststus)
{
    BorrowReturnID = borrowreturnid;
    MemberID = memberid;
    BookID = bookid;
    BorrowReturnDate = borrowreturndate;
    BorrowReturnStatus = borrowreturnststus;
}

BorrowReturn::BorrowReturn(int memberid, int bookid, string borrowreturndate, int borrowreturnstatus)
{
    MemberID = memberid;
    BookID = bookid;
    BorrowReturnDate = borrowreturndate;
    BorrowReturnStatus = borrowreturnstatus;
}

int BorrowReturn::GetBorrowReturnID()
{
    return BorrowReturnID;
}
void BorrowReturn::SetBorrowReturnID(int borrowreturnid)
{
    BorrowReturnID = borrowreturnid;
}

int BorrowReturn::GetMemberID()
{
    return MemberID;
}
void BorrowReturn::SetMemberID(int memberid)
{
    MemberID = memberid;
}

int BorrowReturn::GetBookID()
{
    return BookID;
}
void BorrowReturn::SetBookID(int bookid)
{
    BookID = bookid;
}

string BorrowReturn::GetBorrowReturnDate()
{
    return BorrowReturnDate;
}
void BorrowReturn::SetBorrowReturnDate(string borrowreturndate)
{
    BorrowReturnDate = borrowreturndate;
}

int BorrowReturn::GetBorrowBeturnStatus()
{
    return BorrowReturnStatus;
}
void BorrowReturn::SetBorrowBeturnStatus(int borrowreturnstatus)
{
    BorrowReturnStatus = borrowreturnstatus;
}

string BorrowReturn::ToString()
{
    return to_string(BorrowReturnID) + " " + to_string(MemberID) + " " +
           to_string(BookID) + " " + BorrowReturnDate + " " + to_string(BorrowReturnStatus);
}