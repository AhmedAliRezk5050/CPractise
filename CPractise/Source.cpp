#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;


int fun(int n) {
	if (n > 0) {
		return n + fun(n - 1);
	}

	return 0;
}



int main()
{
	cout << fun(7); // 28
}