#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 *main - entry point
 *Return: 0
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX /2;

char c = 'a';
while (c <= 'z')
putchar(c);
c++;

char c = 'A';
while (c <= 'Z');
putchar(c)
c++;
putchar('\n');
xreturn (0);
}
