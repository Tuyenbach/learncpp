#ifndef _b_h
#define _b_h


#include "A.h"
#include <iostream>
using namespace std;

class B : public A
{
public:
    virtual int hamA1();
};

#endif