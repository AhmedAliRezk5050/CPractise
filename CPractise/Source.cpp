#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;


int main()
{
	// ---- References ----
	// 
	// C++ only
	// a reference is a nickname(alias) given to a variable

	int a = 10;

	int& r = a; // reference must be initialized when declared  => stack

	// a and r have the same address in memery

	cout << a << endl; // 10

	cout << r << endl; // 10

	r++;

	cout << a << endl; // 11

	cout << r << endl; // 11
}