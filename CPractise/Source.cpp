#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;


// foo returns array
// p points to an array and after foo is excuted, pointer p detroyed and A points to the array
int* foo(int n) {
	int* p;
	p = (int*)malloc(n * sizeof(int));
	return p;
}

int main()
{
	int* A;
	A = foo(5);
	A[5] = 20;
	cout << A[5]; // 20
}