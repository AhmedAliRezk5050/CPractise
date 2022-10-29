#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

//
// ---------------- Pointers ----------------
//

int main()
{
	// ---- References ----
	// 
	// C++ only
	// a reference is a nickname(alias) given to a variable

	int a = 10;

	int& r = a; // reference must be initialized when declared  => stack

	// a and r have the same address in memery

	cout << a << endl;

	cout << r << endl;

	r++;

	cout << a << endl;

	cout << r << endl;
}