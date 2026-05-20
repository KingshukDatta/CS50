#include <stdio.h>

void meow(void)
{
  printf("meow\n");
}

int main()
{

  for (int i = 0; i < 3; i++)
  {
    meow();
  }
}
