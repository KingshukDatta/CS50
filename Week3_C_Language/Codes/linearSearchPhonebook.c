#include <stdio.h>
#include <string.h>

int main(void)
{
  // In standard C, strings are represented as pointers to characters
  const char *names[] = {"Kelly", "David", "John"};
  const char *numbers[] = {"0867009785", "03797921276", "04977921306"};

  // Allocate memory for the user's input (up to 99 characters + null terminator)
  char name[100];
  printf("Name: ");

  // fgets is the standard function to read a string from the user safely
  if (fgets(name, sizeof(name), stdin) != NULL)
  {
    // fgets captures the newline character (\n) when the user presses Enter.
    // We strip it out so strcmp compares the names exactly.
    name[strcspn(name, "\n")] = 0;
  }

  for (int i = 0; i < 3; i++)
  {
    if (strcmp(names[i], name) == 0)
    {
      printf("Found %s\n", numbers[i]);
      return 0;
    }
  }

  printf("Not Found\n");
  return 1;
}