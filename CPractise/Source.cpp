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
	// declare + initialize
	struct Rectangle r = {10, 5};
	// assign
	r.length = 20;
	cout << r.length * r.breadth << endl;
	
	//-------

	// declare pointer
	// generally pointer size = the size of int in any compiler
	// so the size of p in the current compiler = 2 bytes
	// declare + initialize
	struct Rectangle* p = &r; // 2 bytes

	// access struct members
	(*p).breadth = 500;
	// or using ->
	p->breadth = 30;
	cout << p->length * p->breadth << endl;
	
}