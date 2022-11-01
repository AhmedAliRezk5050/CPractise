#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

double e(double x, double n)
{
	double s = 1;
	int i = 0;
	double num = 1;
	double den = 1;

	for (int i = 1; i <=n; i++)
	{
		num *= x;
		den *= i;
		s += num / den;
	}

	return s;
}


int main()
{
	int x = 1, n = 10;
	cout << "\n" << e(x, n);
}
