#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints all akphabets except q and e
 * return: 0
 */
int main(void)
{
  char s;
  for (s = 'a'; s <= 'z'; s++)
    {
      if (s != 'e' && s != 'q')
	{
	  putchar(s);
	}
    }
  putchar('\n');
  return (0);
}
