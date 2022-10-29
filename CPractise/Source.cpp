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

// because A acts as a pointer to an array
// the passed array is changed of we make changes inside foo
void foo(int A[], int n) {
	A[0] = 200;
}

int main()
{
	int X[5] = { 1, 2, 3, 4, 5 };

	foo(X, 5);

	for (int i = 0; i < 5; i++)
	{
		cout << X[i] << endl;
	}
	// {200, 2, 3, 4, 5}
}