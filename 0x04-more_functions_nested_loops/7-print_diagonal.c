#include "main.h"

/**
 *print_diagonal - function that draws a diagonal line on the terminal
 *@n: number
 *Return: diagonal line on the terminal
 */

void print_diagonal(int n)
{
int row;
int column;

if (n > 0)
{
for (row = 0; row < n; row++)
{
for (column = 0; column <= row; column++)
{
if (row == column)
{
_putchar('\\');
_putchar('\n');
}
else
{
_putchar(' ');
}
}
}
}
else
{
_putchar('\n');
}
}
