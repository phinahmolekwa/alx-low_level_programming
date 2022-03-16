#include "main.h"

/**
 *
 *print_alphabet_X10 - print the alphabet 10 times
 *Return: 0 Always
 */

void print_alphabet_x10(void)
{
int alphabet;
int count;

count = 0;
while (count < 10)
{
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}
_putchar('\n');
}
}
