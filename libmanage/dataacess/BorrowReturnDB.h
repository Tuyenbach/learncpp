#ifndef lib_manager_dataacess_BorrowReturnDB_h
#define lib_manager_dataacess_BorrowReturnDB_h

#include "../business/BorrowReturn.h"
#include <iostream>
#include <vector>

using namespace std;

class BorrowReturnDB
{
private:
    vector<BorrowReturn *> _data;
    int _maxID;

public:
    BorrowReturnDB();
    BorrowReturnDB(string FileName);
    ~BorrowReturnDB();

    int WriteToFile(string FileName);
    int AddBorrowReturn(BorrowReturn *borrowReturn);
    int EditBorrowReturn(int id, BorrowReturn *borrowReturn);
    int DeleteBorrowReturn(int id);
    vector<BorrowReturn *> GetAllBorrowReturn();
};

#endif
