#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

double e(int x, int n)
{
    static double p = 1, f = 1;
    double r;

    // Termination condition
    if (n == 0)
        return 1;

    // Recursive call
    r = e(x, n - 1);

    // Update the pxower of x
    p = p * x;  

    // Factorial
    f = f * n;

    return (r + p / f);
}


int main()
{
    int x = 4, n = 10;
    cout << "\n" << e(x, n);
}