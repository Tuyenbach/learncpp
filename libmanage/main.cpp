#include <iostream>
#include "business/Member.h"
#include "dataacess/MemberDB.h"
#include "ui/MemberUI.h"

#include "business/Book.h"
#include "dataacess/BookDB.h"
#include "ui/BookUI.h"

#include "business/BorrowReturn.h"
#include "dataacess/BorrowReturnDB.h"
#include "ui/BorrowReturnUI.h"

using namespace std;

int main()
{
    MemberUI *memberUI = new MemberUI();
    BookUI *bookUI = new BookUI();
    BorrowReturnUI *borrowReturnUI = new BorrowReturnUI();

    cout << "MENU" << endl;
    cout << "_______________________" << endl;
    cout << "1. Member" << endl;
    cout << "2. Book" << endl;
    cout << "3. BorrowReturn" << endl;
    cout << "_______________________" << endl;
    cout << "choose a number: ";

    int chooseMenu;
    cin >> chooseMenu;

    switch (chooseMenu)
    {
    case 1:
        cout << "MEMBER" << endl;
        cout << "_______________________" << endl;
        cout << "1. add" << endl;
        cout << "2. edit" << endl;
        cout << "3. Delete" << endl;
        cout << "4. Show all member" << endl;
        cout << "0. back" << endl;
        cout << "_______________________" << endl;
        cout << "choose a number: ";
        int chooseMember;
        cin >> chooseMember;
        switch (chooseMember)
        {
        case 1:
            memberUI->AddMember();
            break;
        case 2:
            memberUI->EditMember();
            break;
        case 3:
            memberUI->DeleteMember();
            break;
        case 4:
            memberUI->GetAllMember();
            break;

        default:
            break;
        }
        break;
    case 2:
        cout << "BOOK" << endl;
        cout << "_______________________" << endl;
        cout << "1. add" << endl;
        cout << "2. edit" << endl;
        cout << "3. Delete" << endl;
        cout << "4. Show all Book" << endl;
        cout << "0. back" << endl;
        cout << "_______________________" << endl;
        cout << "choose a number: ";
        int chooseBook;
        cin >> chooseBook;
        switch (chooseBook)
        {
        case 1:
            bookUI->AddBook();
            break;
        case 2:
            bookUI->EditBook();
            break;
        case 3:
            bookUI->DeleteBook();
            break;
        case 4:
            bookUI->GetAllBook();
            break;

        default:
            break;
        }
        break;
    case 3:
        cout << "BORROW RETURN" << endl;
        cout << "_______________________" << endl;
        cout << "1. add" << endl;
        cout << "2. edit" << endl;
        cout << "3. Delete" << endl;
        cout << "4. Show all Borrow return" << endl;
        cout << "0. back" << endl;
        cout << "_______________________" << endl;
        cout << "choose a number: ";
        int chooseborrowreturn;
        cin >> chooseborrowreturn;
        switch (chooseborrowreturn)
        {
        case 1:
            borrowReturnUI->AddBorrowReturn();
            break;
        case 2:
            borrowReturnUI->EditBorrowReturn();
            break;
        case 3:
            borrowReturnUI->DeleteBorrowReturn();
            break;
        case 4:
            borrowReturnUI->GetAllBorrowReturn();
            break;

        default:
            break;
        }
        break;

    default:
        break;
    }

    return 0;
}