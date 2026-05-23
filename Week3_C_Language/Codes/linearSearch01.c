// linear search
#include <stdio.h>

int main(void)
{
  // array
  int numbers[] = {20, 500, 10, 5, 100, 1, 50};

  // search a number
  int n;
  printf("Number: ");
  scanf("%d", &n);

  for (int i = 0; i < 7; i++)
  {
    if (numbers[i] == n)
    {
      printf("Found\n");
      return 0;
    }
  }
  printf("Not Found\n");
  return 1;
}
