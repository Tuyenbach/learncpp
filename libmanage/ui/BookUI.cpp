#include "BookUI.h"
BookUI::BookUI(/* args */)
{
}

BookUI::~BookUI()
{
}
void BookUI::AddBook()
{
    cout << "ADD Book" << endl;
    cout << "____________________________________" << endl;

    cout << "enter the infor: " << endl;

    string bookname;
    float bookprice;
    cout << "enter Book name: ";

    // cin >> bookname;
    cin.ignore();
    getline(cin, bookname);

    cout << "enter Book price: ";
    cin >> bookprice;

    Book *b = new Book(bookname, bookprice);
    if (bookDB->AddBook(b) == 1)
    {
        bookDB->WriteToFile("file/book_data.txt");
        cout << "DONE";
    }
    else
    {
        cout << "can not add Book";
    }
}

void BookUI::EditBook()
{
    cout << "Edit Book" << endl;
    cout << "____________________________________" << endl;
    int bookid;
    cout << "enter the Book id for edit: " << endl;
    cin >> bookid;

    cout << "enter the infor for update: " << endl;

    string bookname;
    float bookprice;
    cout << "enter new  Book name: ";
    // cin >> bookname;
    cin.ignore();
    getline(cin, bookname);

    cout << "enter new  Book price: ";
    cin >> bookprice;

    Book *book = new Book(bookname, bookprice);
    if (bookDB->EditBook(bookid, book) == 1)
    {
        bookDB->WriteToFile("file/book_data.txt");
        cout << "DONE";
    }
    else
    {
        cout << "can not EDIT Book";
    }
}

void BookUI::DeleteBook()
{
    cout << "DELETE Book" << endl;
    cout << "____________________________________" << endl;
    int bookid;
    cout << "enter the Book id for DELETE: " << endl;
    cin >> bookid;

    if (bookDB->DeleteBook(bookid) == 1)
    {
        bookDB->WriteToFile("file/book_data.txt");
        cout << "DONE";
    }
    else
    {
        cout << "can not Delete Book";
    }
}

void BookUI::GetAllBook()
{
    cout << "ALL Book" << endl;
    cout << "____________________________________" << endl;
    for (Book *b : bookDB->GetAllBook())
    {
        cout << b->ToString() << endl;
    }
}
