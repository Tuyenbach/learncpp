#include "BookDB.h"
#include <fstream>

BookDB::BookDB(/* args */)
{
    _data.resize(0);
    _maxID = 0;
}

BookDB::BookDB(string FileName)
{
    _data.resize(0);
    _maxID = 0;

    ifstream FileIn(FileName);

    int nuberbook = 0;
    int id;
    string bookname;
    float bookprice;
    FileIn >> nuberbook;

    for (int i = 0; i < nuberbook; i++)
    {
        FileIn >> id;
        FileIn.ignore();
        getline(FileIn, bookname);
        //FileIn >> bookname;
        FileIn >> bookprice;

        Book *b = new Book(id, bookname, bookprice);
        _data.push_back(b);
        _maxID = id;
    }
    FileIn.close();
}
BookDB::~BookDB()
{
}

int BookDB::WriteToFile(string FileName)
{

    ofstream FileOut(FileName);

    FileOut << _data.size() << endl;

    for (Book *b : _data)
    {
        FileOut << b->GetBookID() << endl;
        FileOut << b->GetBookName() << endl;
        FileOut << b->GetBookPrice() << endl;
    }

    FileOut.close();
    return 1;
}

int BookDB::AddBook(Book *book)
{
    _maxID++;
    book->SetBookID(_maxID);
    _data.push_back(book);
    return 1;
}
int BookDB::EditBook(int id, Book *book)
{
    for (Book *b : _data)
    {
        if (b->GetBookID() == id)
        {
            b->SetBookName(book->GetBookName());
            b->SetBookPrice(book->GetBookPrice());
            return 1;
        }
    }
    return 0;
}
int BookDB::DeleteBook(int id)
{
    for (int i = 0; i < _data.size(); i++)
    {
        if (_data.at(i)->GetBookID() == id)
        {
            _data.erase(_data.begin() + i);
            return 1;
        }
    }
    return 0;
}
vector<Book *> BookDB::GetAllBook()
{
    return _data;
}