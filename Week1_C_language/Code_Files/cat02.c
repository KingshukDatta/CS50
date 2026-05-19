#include <stdio.h>

int main()
{
  int n;
  while (true)
  {
    printf("What is n? ");
    scanf("%d", &n);

    if (n >= 0)
    {
      break;
    }
  }

  for (int i = 0; i < n; i++)
  {
    printf("meow\n");
  }
}
