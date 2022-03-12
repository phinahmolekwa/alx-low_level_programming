#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 *main-entry point
 *Return: 0
 */
int main(void)
{
  int s;
  s = 122;
  
  while (s >= 97)
    putchar(s);
  s--;

  putchar('\n');
  return (0);
}
