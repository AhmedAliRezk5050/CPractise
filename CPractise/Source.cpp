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

// pass by value
void swap(int x, int y) {
	// Parameters is just copied
	// changes are in the copies only
	int temp = x;
	x = y;
	y = temp;
}

int main()
{
	int a, b;
	a = 1;
	b = 7;
	
	swap(a, b);

	// no change
	cout << a << endl; // 1
	cout << b << endl; // 7
}