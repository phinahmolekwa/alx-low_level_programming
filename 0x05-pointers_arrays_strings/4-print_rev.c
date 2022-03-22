#include "main.h"

/**
 *print_rev - prints a string in reverse
 *@s: A pointer to an integer that will be changed
 *
 *Return: void
 */

void print_rev(char *s)
{
int m;
m = 0;

while (s[m] != '\0')
{
m++;
}
for (m = m - 1; m >= 0; m--)
{
_putchar(s[m]);
}
_putchar('\n');
}
