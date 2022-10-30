#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;



// --- Recursion ---
// ---  1- Tail recursion 

void foo(int n)
{
	if (n > 0) {
		cout << n << endl;
		foo(n - 1);
	}
}

int main()
{
	int x = 3;

	foo(x); // 3, 2, 1
}