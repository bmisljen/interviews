/*
 Copyright (c) 2016 Boris Misljencevic

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.
*/

#include "../include/Objects.h"

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
