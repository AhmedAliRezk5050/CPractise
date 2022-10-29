#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//
// ---------------- Pointers ----------------
//

int main()
{
  int a = 10;

  int *p; // pointer initialization

  p = &a; // pointer assignment

  // %u: It is used to print unsigned decimal number
  printf("%u\n", p); // address of a

  // %d: It is used to print signed decimal number
  printf("%d\n", *p); //  dereferencing =>  value of a
}