#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

double fact(double n) {
	if (n < 2) {
		return 1;
	}
	return n * fact(n - 1);
}

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

double u(double x, double n) {
	return myPow(x, n) / fact(n);
}



double sum(double x, double n) {
	if (n < 0) {
		return 0;
	}

	return u(x, n) + sum(x, n - 1);
}

int main()
{
	cout << sum(13, 40) << endl;
}