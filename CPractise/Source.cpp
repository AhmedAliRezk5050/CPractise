#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

struct Rectangle
{
	int length;
	int breadth;
};

int area(struct Rectangle rec) {
	return rec.breadth * rec.breadth;
}

int main()
{
	struct Rectangle r = { 10, 5 };

	cout << area(r);
}