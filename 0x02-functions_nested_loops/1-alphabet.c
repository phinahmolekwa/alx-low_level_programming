#include "main.h"

/**
 *print_alphabet - print alphabet
 *
 *Return: 0 (Always)
 */

void print_alphabet(void)
{
  char c = 'a';

  while (c <= 'z')
    {
      _putchar(c);
      c++;
    }
  _putchar('\n');
return(0);
}
