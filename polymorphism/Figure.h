#ifndef _Figure_H_
#define _Figure_H_
#include <iostream>

using namespace std;
class Figure
{
private:
    /* data */
public:
    Figure(/* args */);
    ~Figure();

    virtual void Input(istream &inDev);
    virtual float Area();
};

#endif