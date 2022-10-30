#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

void funA(int n);
void funB(int n);

void funB(int n) {
	if (n > 1) {
		cout << n << endl;
		funA(n / 2);
	}
}

void funA(int n) {
	if (n > 0) {
		cout << n << endl;
		funB(n - 1);
	}
}



int main()
{
	funA(20); // 20 , 19 , 9 , 8 , 4 , 3 , 1
}