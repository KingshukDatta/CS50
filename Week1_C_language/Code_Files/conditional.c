#include <stdio.h>

int main()
{
  int x, y;

  printf("What's x? ");
  scanf("%d", &x);

  printf("What's y? ");
  scanf("%d", &y);

  if (x < y)
  {
    printf("x is less than y\n");
  }
  else if (x > y)
  {
    print("x is not less than y\n");
  }
  else
  {
    printf("x is equal to y\n");
  }

  return 0;
}