#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

struct Test
{
	int A[5];
	int d;
};

// pass by value
void update(struct Test rec) {
	// the struct array is just copied.
	// any changes here will not affect the passed struct
	rec.A[0] = 20;
}

int main()
{
	struct Test r = { {1, 2, 3, 4, 5}, 200 };

	cout << r.A[0] << endl; // 1

	update(r);

	cout << r.A[0] << endl; // 1
}