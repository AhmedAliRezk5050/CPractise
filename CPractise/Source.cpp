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

// Parameters are copied
int add(int x, int y) {
	return x + y;
}

int main()
{
	int a, b, c;
	a = 3;
	b = 2;
	c = add(a, b);

	cout << c << endl;
}