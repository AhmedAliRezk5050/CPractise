#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;



// --- Recursion ---
// ---  1- Head recursion 

void foo(int n)
{
	if (n > 0) {
		foo(n - 1);
		cout << n << endl;
	}
}

int main()
{
	int x = 3;

	foo(x); // 1 , 2, 3
}