#include "Rectangle.h"

Rectangle::Rectangle(/* args */)
{
}

Rectangle::~Rectangle()
{
}

Rectangle::Rectangle(float w, float h)
{
    width = w;
    height = h;
}

float Rectangle::Area()
{
    return width * width;
}
void Rectangle::Input(istream &inDevice)
{
    inDevice >> width >> width;
}