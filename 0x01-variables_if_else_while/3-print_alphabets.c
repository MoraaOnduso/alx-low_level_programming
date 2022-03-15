#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints alphabet in lowercase then uppercase
 * return: 0
 */
int main(void)
{
  char s;

  for (s = 'a'; s <= 'z'; s++)
    {
      putchar(s);
    }
  for (s = 'A'; s <= 'Z'; s++)
    {
      putchar(s);
    }
  putchar('\n');
  return (0);
}
