#include <stdio.h>

/**
 *main - calculate largest prime of 612852475143
 *Return: 0 Always
 */

int main(void)
{
long int x = 612852475143;
long in py;

for (py = 2; py < x; py++)
{
if (x % py == 0)
{
x = x / py;
}
}
printf("%d\n", py);
return (0);
}

