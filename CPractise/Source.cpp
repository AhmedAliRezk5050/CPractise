#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

double e(double x, double n)
{
	static double s = 1;

	if (n == 0) {
		return s;
	}

	s = 1 + (x / n) * s;

	return e(x, n - 1);
}


int main()
{
	int x = 2, n = 10;
	cout << "\n" << e(x, n);
}
