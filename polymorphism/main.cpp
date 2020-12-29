#include "Figure.h"
#include "Rectangle.h"
#include "Ellipse.h"
#include "Circle.h"

#include <iostream>
using namespace std;

int main()
{
    Figure* rec = new Rectangle();
    Figure* el = new Ellipse(2, 3);
    Figure* cir = new Circle(2);

    rec->Input(cin);
    rec->Area();

    return 0;
}
