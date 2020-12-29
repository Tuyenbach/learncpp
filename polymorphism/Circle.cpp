#include "Circle.h"

Circle::Circle(/* args */)
{
}

Circle::~Circle()
{
}

Circle::Circle(float r = 0) : Ellipse(r, r)
{
}

void Circle::Input(istream &inDevce){
    inDevce >> Ra;
    Rb = Ra;
};