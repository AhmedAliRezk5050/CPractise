#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

double e(double x, double n)
{
	double s = 1;

	for (;n > 0; n--)
	{
		s = 1 + (x/n) * s;
	}

	return  s;
}


int main()
{
	int x = 4, n = 10;
	cout << "\n" << e(x, n);
}
