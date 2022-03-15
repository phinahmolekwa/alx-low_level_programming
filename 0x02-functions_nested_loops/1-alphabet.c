#include <stdio.h>
#include <main.h>

/**
 *main-entry point
 *print alphabet in lowercase
 *Return: 0 (Always)
 */

void print_alphabet(void);
{
  char alp = 'a';

  while (alp <= 'z')
    {
      _putchar(alp);
      alp++;
    }
  _putchar('\n');
}
