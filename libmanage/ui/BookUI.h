#ifndef lib_manager_ui_BookUI_h
#define lib_manager_ui_BookUI_h

#include "../dataacess/BookDB.h"
#include "../business/Book.h"

class BookUI
{
private:
    BookDB *bookDB = new BookDB("file/book_data.txt");

public:
    BookUI(/* args */);
    ~BookUI();
    void AddBook();
    void EditBook();
    void DeleteBook();
    void GetAllBook();
};

#endif
