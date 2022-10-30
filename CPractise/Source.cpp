#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;


int pow(int n, int o) {
	if (o == 0) {
		return 1;
	}

	return n * pow(n, o - 1);
}



int main()
{
	cout << pow(2, 3); // 8
}