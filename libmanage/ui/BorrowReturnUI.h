#ifndef lib_manager_ui_BorrowReturnUI_h
#define lib_manager_ui_BorrowReturnUI_h

#include "../dataacess/BorrowReturnDB.h"
#include "../business/BorrowReturn.h"

class BorrowReturnUI
{
private:
    BorrowReturnDB *borrowReturnDB = new BorrowReturnDB("file/borrowReturn_data.txt");

public:
    BorrowReturnUI(/* args */);
    ~BorrowReturnUI();
    void AddBorrowReturn();
    void EditBorrowReturn();
    void DeleteBorrowReturn();
    void GetAllBorrowReturn();
};

#endif
