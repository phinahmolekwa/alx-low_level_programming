#include <stdio.h>
#include <stdlib.h>
/**
 *main - entry block
 *Return: 0
 *lowercase letters without q and e
 */
int main(void)
{
  char c = 'a';

  while (c<= 'z')
    
    if (c != 'q' && c != 'e')

      putchar(c);
  c++;

  putchar('\n');
  return (0);
}
