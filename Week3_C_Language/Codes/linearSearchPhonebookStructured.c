#include <stdio.h>
#include <string.h>

// Replace 'string' with 'const char *' for string literals
typedef struct
{
  const char *name;
  const char *number;
} person;

int main(void)
{
  person people[3];

  people[0].name = "Kelly";
  people[0].number = "01889922";

  people[1].name = "David";
  people[1].number = "02889922";

  people[2].name = "John";
  people[2].number = "03889922";

  // Allocate memory for the user's input (up to 99 characters + null terminator)
  char name[100];
  printf("Name: ");

  // fgets is the standard function to safely read a string from standard input
  if (fgets(name, sizeof(name), stdin) != NULL)
  {
    // Strip the newline character (\n) that fgets captures when you press Enter
    name[strcspn(name, "\n")] = 0;
  }

  for (int i = 0; i < 3; i++)
  {
    // Access the struct's name property using dot notation
    if (strcmp(people[i].name, name) == 0)
    {
      printf("Found %s\n", people[i].number);
      return 0;
    }
  }

  printf("Not Found\n");
  return 1;
}