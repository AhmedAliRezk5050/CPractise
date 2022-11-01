#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
using namespace std;

int fib (int n) {
	if (n < 2) return n;

	return fib(n - 1) + fib(n - 2);
};

int main()
{
	
	cout << fib(6);
}
