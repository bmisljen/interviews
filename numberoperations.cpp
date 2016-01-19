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
