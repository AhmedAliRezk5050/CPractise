#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;


int pow(int n, int o) {
	if (o == 0) {
		return 1;
	}

	if (o % 2 == 0) {
		return pow(n * n, o / 2);
	}

	return n * pow(n * n, (o - 1) / 2);
}



int main()
{
	cout << pow(2, 10) << endl; // 32
}