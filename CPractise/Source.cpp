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

// A acts as a pointer to an array
// arrays always passed by address
// A can be integer pointer (int* A) => can point to any integer or array
// [] limits A to be a pointer to array only
void foo(int A[], int n) {
	for (int i = 0; i < n; i++)
	{
		cout << A[i] << endl;
	}
}

int main()
{
	int X[5] = { 1, 2, 3, 4, 5 };

	foo(X, 5);
}