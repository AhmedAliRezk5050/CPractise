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

void update(struct Rectangle& rec) {
	rec.breadth = 50;
}

int main()
{
	struct Rectangle r = { 10, 5 };

	update(r);

	cout << r.breadth; // 50
}