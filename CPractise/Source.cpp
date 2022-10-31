#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

double myPow(double x, double n) {
	if (n == 0) {
		return 1;
	}

	if ((int)n % 2 == 0) {
		if (n < 0) {
			return (1 / myPow(x * x, -n / 2));
		}
		else {
			return myPow(x * x, n / 2);
		}

	}

	if (n < 0) {
		return 1 / (x * myPow(x * x, (-n - 1) / 2));
	}
	else {
		return x * myPow(x * x, (n - 1) / 2);
	}
}


int main()
{
	cout << myPow(2, -3) << endl; // 0.125
}