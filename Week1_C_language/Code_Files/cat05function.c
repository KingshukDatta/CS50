#include <stdio.h>

void meow(int times);

int main()
{
  int n;
  printf("What's n? ");
  scanf("%d", &n);
  meow(n);
}

void meow(int times)
{
  for (int i = 0; i < times; i++)
  {
    printf("meow\n");
  }
}
