// File: Figures.h

#ifndef _FIGURE_H_
#define _FIGURE_H_

class Point2D
{
private:
    double X, Y;

public:
    Point2D(/* args */);
    Point2D(double Xo, double Yo);
    ~Point2D();

    void Set(double Xo, double Yo);
    void Move(double dX, double dY);
    void Scale(double sX, double sY);
};

class Circle
{
private:
    Point2D Center;
    double Radius;

public:
    Circle();
    ~Circle();

    void Set(double Xo, double Yo, double r); 
    void Move(double dX, double dY);
    double Area();
    double Perimeter();
};

#endif