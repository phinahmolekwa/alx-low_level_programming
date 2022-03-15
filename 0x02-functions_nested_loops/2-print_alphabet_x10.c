#include "main.h"
#include <stdio.h>
/**
 *main-check the code
 *Return: 0
 *prints 10x the alphabet in lowercase
 */

void print_alphabet_x10(void)
{
  int b = 0;
  
  while (b < 10)
    {
      char a = 'a';

      while (a <= 'z')
	{
	  _putchar(a);
	  a++;
	}
      _putchar('\n');
      b++;
      return(0);
    }
}
