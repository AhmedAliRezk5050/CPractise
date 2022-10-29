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

// pass by Reference
void swap(int& x, int& y) {
	int temp = x;
	x = y;
	y = temp;
}

int main()
{
	int a, b;
	a = 1;
	b = 7;


	// swap is no longer a separate function
	// it has became a part of the main function and there is only one activation record (a b x y temp)
	//  so the swap code is pasted in the main function
	// so the use of pass by Reference is not advicable for heavy functions
	swap(a, b);

	// changed
	cout << a << endl; // 7
	cout << b << endl; // 1
}