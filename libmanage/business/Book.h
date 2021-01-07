#ifndef lib_manager_business_Book_h
#define lib_manager_business_Book_h

#include <iostream>
#include <string>

using namespace std;

class Book
{
private:
    int BookID;
    string BookName;
    float BookPrice;

public:
    Book();
    Book(int bookid, string bookname, float bookprice);
    Book(string bookname, float bookprice);
    ~Book();

    int GetBookID();
    void SetBookID(int bookid);

    string GetBookName();
    void SetBookName(string bookname);

    float GetBookPrice();
    void SetBookPrice(float bookprice);

    string ToString();
};

#endif