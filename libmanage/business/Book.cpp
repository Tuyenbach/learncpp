#include "Book.h"
Book::Book()
{
}

Book::~Book()
{
}

Book::Book(int bookid, string bookname, float bookprice)
{
    BookID = bookid;
    BookName = bookname;
    BookPrice = bookprice;
}
Book::Book(string bookname, float bookprice)
{
    BookName = bookname;
    BookPrice = bookprice;
}

int Book::GetBookID()
{
    return BookID;
}
void Book::SetBookID(int bookid)
{
    BookID = bookid;
}

string Book::GetBookName()
{
    return BookName;
}
void Book::SetBookName(string bookname)
{
    BookName = bookname;
}

float Book::GetBookPrice()
{
    return BookPrice;
}
void Book::SetBookPrice(float bookprice)
{
    BookPrice = bookprice;
}

string Book::ToString()
{
    return to_string(BookID) + " | " + BookName + " | " + to_string(BookPrice);
}