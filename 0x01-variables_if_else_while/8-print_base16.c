#include <stdio.h>
/**
 * main - Entry point
 * Description: prints all numbers of base 16
 * return: 0
 */
int main(void)
{
  int s;
  char S;
  for(s = 48; s < 58; s++)
    {
      putchar(s);
    }
  for(S = 97; S < 103; S++)
    {
      putchar(S);
    }
  putchar('\n');
  return (0);
}
