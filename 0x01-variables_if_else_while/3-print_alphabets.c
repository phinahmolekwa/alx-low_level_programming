#include <stdio.h>
#include <stdlib.h>
/**
 *main - entry block
 *Return: 0
 */
int main(void)
{
char a = 'a';

while (a <= 'z')
{
putchar(a);
a++;
}

a = 'A';

while (a <= 'Z')
{
putchar(a);
a++;
}

putchar('\n');
return (0);
}
