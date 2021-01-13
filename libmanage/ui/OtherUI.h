#ifndef lib_manager_ui_OtherUI_h
#define lib_manager_ui_OtherUI_h

#include <iostream>
#include "../dataacess/BorrowReturnDB.h"
#include "../dataacess/BookDB.h"

class OtherUI
{
private:
    BorrowReturnDB *_brDB = new BorrowReturnDB("file/borrowReturn_data.txt");
    BookDB *_bDB = new BookDB("file/book_data.txt");

public:
    OtherUI(/* args */);
    ~OtherUI();
    
};

#endif