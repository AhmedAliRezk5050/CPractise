#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

// assume int = 2 bytes in the current compiler

// 4 bytes
struct Rectangle {
	int length;  // 2 bytes
	int breadth; // 2 bytes
};

int main()
{
	// ---- Create object dynamically in heap using pointer

	struct Rectangle* p;

	// cast malloc result => (struct Rectangle *)
	p = (struct Rectangle*)malloc(sizeof(struct Rectangle));

	// using if because malloc might return null if insufficient memory is available
	if (p) {
		p->breadth = 10;
		p->length = 5;
		cout << p->breadth << endl;
		cout << p->length << endl;
	}
}