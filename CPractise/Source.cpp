#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

static  int x = 0;

int foo(int n)
{
	if (n > 0) {
		x++;
		return x + foo(n - 1);
	}

	return 0;
}

int main()
{
	cout << foo(5) << endl; //25
}