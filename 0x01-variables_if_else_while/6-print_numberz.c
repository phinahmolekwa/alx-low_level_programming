#include <stdio.h>
/**
 *main-entry point
 *prints single numbers of base 10
 *Return: 0
 */
int main(void)
{
int i = 0;

while (i < 10)
    {
putchar(48 + i);
i++;
}
putchar('\n');
return (0);
}
