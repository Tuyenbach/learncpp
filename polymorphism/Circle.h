#ifndef _Cirle_h_
#define _Cirle_h_

#include "Ellipse.h"

class Circle : public Ellipse
{
public:
    Circle(/* args */);
    ~Circle();
    Circle(float r = 0);
    void Input(istream &inDevce);
    float Area();

#endif