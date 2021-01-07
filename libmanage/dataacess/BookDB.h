#ifndef lib_manager_dataacess_BookDB_h
#define lib_manager_dataacess_BookDB_h

#include "../business/Book.h"
#include <iostream>
#include <vector>

using namespace std;

class BookDB
{
private:
    vector<Book *> _data;
    int _maxID;

public:
    BookDB();
    BookDB(string FileName);
    ~BookDB();

    int WriteToFile(string FileName);
    int AddBook(Book *book);
    int EditBook(int id, Book *book);
    int DeleteBook(int id);
    vector<Book *> GetAllBook();
};

#endif
