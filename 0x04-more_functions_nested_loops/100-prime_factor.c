#include <stdio.h>

/**
 *main - calculate largest prime of 612852475143
 *Return: 0 Always
 */

int main(void)
{
int i = 2;
long n = 612852475143;

while (i < n)
{
while (n % 1 == 0)
{
if (n == i)
{
break;
}
n/= i;
}
i++;
}
printf("%lu\n", n);
return (0);
}

