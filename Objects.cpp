#include "Objects.h"

using namespace std;

void Polygon::set_values (int a, int b)
{
    width=a; height=b;
}

void Polygon::printarea()
{ 
    cout << this->area() << '\n';
}

int Rectangle::area () {return (width*height);}

int Square::area () {return (width*width);}

Rectangle::Rectangle () {
  width = 3;
  height = 3;
}

Rectangle::Rectangle (int x, int y) {
  width = x;
  height = y;
}

Square::Square () {
  width = 3;
}

Square::Square (int x) {
  width = x;
}
