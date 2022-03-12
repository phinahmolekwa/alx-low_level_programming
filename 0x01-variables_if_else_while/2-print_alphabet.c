#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - entry point
 * Return: 0
 */

int main(void)
{
  int n;
  srand(time(0));
  n=rand() - RAND_MAX /2;
  
char c;
c = 'a';
  
while (c <= 'z')
putchar(c);
c++;

putchar('\n');
return (0);
}

  
