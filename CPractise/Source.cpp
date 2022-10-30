#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;


int fact(int n) {
	if (n == 1) {
		return 1;
	}

	return n * fact(n - 1);
}



int main()
{
	cout << fact(5); // 120
}