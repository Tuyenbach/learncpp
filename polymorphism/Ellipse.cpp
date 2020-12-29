#include "Ellipse.h"

Ellipse::Ellipse(/* args */)
{
}

Ellipse::~Ellipse()
{
}

Ellipse::Ellipse(float a, float b)
{

    Ra = a;
    Rb = b;
}
void Ellipse::Input(istream &inDevce)
{
    inDevce >> Ra >> Rb;
}
float Ellipse::Area()
{
    return PI * Ra * Rb;
}