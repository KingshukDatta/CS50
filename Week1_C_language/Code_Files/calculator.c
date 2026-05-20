#include <stdio.h>
#include <stdbool.h>

int main(void)
{
  int dollars = 1;

  while (true)
  {
    char c;
    printf("Here is $%d. Double it and give it to the next person? (y/n): ", dollars);
    scanf(" %c", &c);

    if (c == 'y' || c == 'Y')
    {
      dollars *= 2;
    }
    else if (dollars < 0)
    {
      printf("\nWhoops! You broke the economy. Game over.\n");
      break;
    }
    else
    {
      printf("\nSomeone just walked away with $%d!\n", dollars);
      break;
    }
  }

  return 0;
}