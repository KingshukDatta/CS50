#include <stdio.h>

int main(void)
{
  // in string pointer always points at the begining of the string and "Nul" / "\0" tells the end.
  char *s = "HI!";
  printf("%s\n", s);

  printf("s = %p\n", s);

  // address of individual character
  printf("s[0] = %p\n", &s[0]);
  printf("s[1] = %p\n", &s[1]);
  printf("s[2] = %p\n", &s[2]);
  printf("s[3] = %p\n", &s[3]);
}
