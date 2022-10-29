#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;


/// Functions
///		Parameter passing
///			1- pass by Value
///			2- pass by Address
///			3- pass by Reference => c++ only

// pass by Address
void swap(int* x, int* y) {
	int temp = *x; // dereference x to get the value
	*x = *y;
	*y = temp;
}

int main()
{
	int a, b;
	a = 1;
	b = 7;

	// pass address of a and b
	swap(&a, &b);

	// no change
	cout << a << endl; // 7
	cout << b << endl; // 1
}