#include <stdio.h>

int main(void)
{
  int n = 50;
  // pointer -8 byte memory
  int *p = &n;

  printf("Variable n is ");
  printf("%i\n", n);

  // to print address of some variables
  printf("Address of  n is ");
  printf("%p\n", &n);

  // print pointer p
  printf("Pointer p is ");
  printf("%p\n", p);

  // printing value of n using pointer p. *p- here * is "the reference operator.
  printf("printing value of n using pointer p we get %i\n", *p);
}