#include <stdio.h>
/**
 * main - Entry point
 * Description: prints string to the stderr
 * Return: 1
 */

int main(void)
{
char *s;
s = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, s, 59);
return (1);
}

