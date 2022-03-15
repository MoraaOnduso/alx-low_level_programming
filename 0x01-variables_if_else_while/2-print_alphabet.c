#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints the alphabet in lowercase
 * Return: 0
 */
int main(void)
{
  char s;

  for (s = 'a'; s <= 'z'; s++)
    {
      putchar(s);
    }
  putchar('\n');
  return (0);
}
