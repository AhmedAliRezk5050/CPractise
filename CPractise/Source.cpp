#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

// time: O(2^n)
// space: O(n)
int foo(int n)
{
	if (n > 0) {
		cout << n << endl;
		foo(n - 1);
		foo(n - 1);
	}

	return 0;
}

int main()
{
	foo(3); // 3, 2, 1, 1, 2, 1, 1
}