#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 *main - entry point
 *Return: 0
 *prints single digit numbers
 */
int main(void)
{
char c = '0';

while (c <= '9')
{
putchar(char c);
c++;
}
putchar('\n');
return (0);
}
