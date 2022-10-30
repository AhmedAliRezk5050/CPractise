#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int foo(int n)
{
	static  int x = 0;

	if (n > 0) {
		x++;
		return x + foo(n - 1);
	}

	return 0;
}

int main()
{
	int x = 5;

	cout << foo(5) << endl; //25
}