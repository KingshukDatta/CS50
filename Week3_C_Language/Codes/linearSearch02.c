// linear search
#include <stdio.h>
#include <string.h>

int main(void)
{
  // In standard C, strings are represented as pointers to character arrays (char *)
  const char *strings[] = {"battleship", "boot", "cannon", "iron", "thimble", "top hat"};

  // Allocate memory for the user's input (up to 99 characters + null terminator)
  char s[100];
  printf("String: ");

  // fgets is the standard way to securely get a string from the user
  if (fgets(s, sizeof(s), stdin) != NULL)
  {
    // fgets includes the newline character (\n) when the user hits Enter.
    // We need to strip it out so strcmp works correctly.
    s[strcspn(s, "\n")] = 0;
  }

  for (int i = 0; i < 6; i++)
  {
    if (strcmp(strings[i], s) == 0)
    {
      printf("Found\n");
      return 0;
    }
  }

  printf("Not Found\n");
  return 1;
}