#include <stdio.h>

int main()
{
  const int n = 3;
  // for each row
  for (int row = 0; row < n; row++)
  {
    // for each column
    for (int column = 0; column < n; column++)
    {
      printf("#");
    }
    printf("\n");
  }
}
