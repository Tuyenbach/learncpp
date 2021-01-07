#ifndef lib_manager_business_borrow_return_h
#define lib_manager_business_borrow_return_h

#include <iostream>
#include <string>

using namespace std;

class BorrowReturn
{
private:
    int BorrowReturnID;
    int MemberID;
    int BookID;
    string BorrowReturnDate;
    int BorrowReturnStatus;

public:
    BorrowReturn();
    BorrowReturn(int borrowreturnid, int memberid, int bookid, string borrowreturndate, int borrowreturnstatus);
    BorrowReturn(int memberid, int bookid, string borrowreturndate, int borrowreturn);
    ~BorrowReturn();

    int GetBorrowReturnID();
    void SetBorrowReturnID(int borrowreturnid);

    int GetMemberID();
    void SetMemberID(int memberid);

    int GetBookID();
    void SetBookID(int bookid);

    string GetBorrowReturnDate();
    void SetBorrowReturnDate(string borrowreturndate);

    int GetBorrowBeturnStatus();
    void SetBorrowBeturnStatus(int borrowreturnstatus);

    string ToString();
};

#endif