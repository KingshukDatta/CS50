#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
  // 1. Allocate a chunk of memory (e.g., 100 characters)
  char s[100];

  printf("s: ");

  // 2. Pass 's' directly. Since 's' is an array, it decays to a pointer (char *)
  scanf("%s", s);

  // t now points to the first character of the array 's'
  char *t = s;

  // This capitalizes the first letter of the string
  t[0] = toupper(t[0]);

  // Because 't' and 's' point to the same place, both print the capitalized version
  printf("s: %s\n", s);
  printf("t: %s\n", t);

  return 0;
}