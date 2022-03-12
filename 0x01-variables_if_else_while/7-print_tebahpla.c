#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 *main-entry point
 *Return: 0
 */
int main(void)
{
char i = 'z';

while (i >= 'a')
{
putchar(i);
i--;
}
putchar('\n');
return (0);
}
