#include <stdio.h>
/**
 * main - Entry point
 * Description: prints all combinations of two digits
 * return: 0
 */
int main(void)
{
  int s, m;
  s = 0;
  m = 0;

  while (s < 9)
    {
      m = s + 1;
	while (m < 10)
	  {
	   putchar('0' + s);
	   putchar('0' + m);
	  }
      m++;
    }
  ++s;
  
  putchar('\n');
  return (0);
}
