#ifndef _Ellipse_h
#define _Ellipse_h

#include "Figure.h"

static float PI(3.14159);

class Ellipse : public Figure
{
protected:
    float Ra, Rb;

public:
    Ellipse(/* args */);
    ~Ellipse();
    Ellipse(float a, float b);
    void Input(istream& inDevce);
    float Area();
};

#endif