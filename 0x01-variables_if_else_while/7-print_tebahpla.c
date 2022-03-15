#include <stdio.h>
/**
 * main - Entry point
 * Description: prints alphabets in reverse all in lowecase
 * return: 0
 */
int main(void)
{
  int s;
for (s = 'z'; s >= 'a'; s--)
  {
    putchar(s);
  }
putchar('\n');
return (0);
}

