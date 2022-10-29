#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//
// ---------------- Pointers ----------------
//

int main()
{
  // allocate memory in heap

  // --start--  C
  // declared in stack
  int *p;

  p = (int *)malloc(5 * sizeof(int)); // malloc allocates memory in heap and returns void pointer

  p[0] = 10;
  p[1] = 20;
  p[2] = 30;
  p[3] = 40;
  p[4] = 50;

  for (int i = 0; i < 5; i++)
  {
    printf("%d\n", p[i]);
  }
  // --end--  C

  // --start--  C++
  int *a;
  a = new int[5]; // c++ shorter syntax
  a[0] = 10;
  a[1] = 20;
  a[2] = 30;
  a[3] = 40;
  a[4] = 50;
  for (int i = 0; i < 5; i++)
  {
    printf("%d\n", a[i]);
  }
  // --end--  C++
}