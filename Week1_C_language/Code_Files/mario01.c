#include <stdio.h>

int main()
{
  // for each row
  for (int row = 0; row < 3; row++)
  {
    // for each column
    for (int column = 0; column < 3; column++)
    {
      printf("#");
    }
    printf("\n");
  }
}
