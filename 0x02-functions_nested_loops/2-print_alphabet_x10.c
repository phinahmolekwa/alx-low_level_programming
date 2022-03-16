#include "main.h"

/**
 *main- entry point
 *print_alphabet_x10 - prints alphabets in lowercase
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
count++;
_putchar('\n');
}
}
