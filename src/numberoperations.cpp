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

#include <cmath>
#include "../include/tests.h"

using namespace std;

int gcd(int a, int b)
{
    // start at the smaller number, max possible gcd
    int gcd_num = min(a, b);
    while ((a % gcd_num != 0) || (b % gcd_num != 0)) 
    {
        // keep decrementing until the gcd is found
        gcd_num--;
    }
    return gcd_num;
}

double squareroot(int num)
{
    double minValue, minDiff;
    double scale = 0.1;
    minDiff = -1;
    for (double x = scale; x <= num; x += scale)
    {
        // the formula uses the minimum different of the numbers squared
        // to guess the square root 
        double delta = abs((x*x) - num);
        if ((delta < minDiff) || (minDiff == -1))
        {
            minDiff = delta;
            minValue = x;
        }
    }
    return minValue;
}

int multiplyWithoutSign(int a, int b)
{
    // multiply two integers without * sign 
    int sum = 0;
    if ((a<0) && (b<0))
    {
        // convert the numbers to positive in double negative case 
        a = abs(a);
        b = abs(b);
    }
    else if ((b<0) && (a>0))
    {
        // swap the values of a and b if b is negative 
        int temp = b;
        b = a;
        a = temp; 
    }
    
    for (int i=0; i<b; i++)
    {
        sum += a;
    }
    return sum;
}

int * addToTarget(int * arr, int arraySize, int target) {
    // returns the index of two numbers in an array which sum up to a target value 
    
    // the array must be defined as static to avoid a segmentation fault when accessed 
    // after the function returns 
    static int indexes[2];
    
    for (int i=0; i<arraySize-1; i++) {
        for (int j=i+1; j<arraySize; j++) {
            
            if ((arr[i] + arr[j]) == target) {
                indexes[0] = i;
                indexes[1] = j; 
                return indexes; 
            }
        }
    }
    return NULL; 
}


