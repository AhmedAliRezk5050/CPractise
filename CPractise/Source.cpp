#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
using namespace std;

int fib (int n) {
    vector<int> a = {0, 1};
  
    for (int i = 1; i < n; i++) {
        int f1 = a.at(i);
        int f2 = a.at(i - 1);
        a.push_back(f1 + f2);
    }
    return a.at(n);
};

int main()
{
	
	cout << fib(8);
}
