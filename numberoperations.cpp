#include <cmath>
#include "tests.h"

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