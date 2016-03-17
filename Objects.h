#include <stdio.h>
#include <stdlib.h>
#include <iostream>

class Polygon
{
public:
    void set_values (int a, int b);
    virtual int area() =0;
    void printarea();
    
protected:
    int width, height;
};

class Rectangle : public Polygon {
public:
       Rectangle();
       Rectangle(int, int);
       int area ();
};

class Square : public Rectangle 
{
public:
    Square();
    Square(int);
    int area ();
};