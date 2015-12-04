#include "tests.h"

using namespace std;

//Find the fibinacci number recursivly, 2^n time complexity
int fibrecursive (int n)
{
    if (n<0)
        cout<<"n must be greater than or equal to zero."<<endl;
    if (n==1)
        return 1;
    if (n==0)
        return 0;
        
    return (fibrecursive(n-1) + fibrecursive(n-2));
}

//Find the fibinacci number iteratively, n time complexity
int fibiterative(int n)
{
    int a = 1, b = 1;
    for (int i = 3; i <= n; i++) {
        int c = a + b;
        a = b;
        b = c;
    }           
    return b;
}