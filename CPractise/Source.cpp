#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;


int fun(int n) {
	if (n > 100) {
		return n - 10;
	}

	return fun(fun(n + 11));
}



int main()
{
	cout << fun(95); //91
}