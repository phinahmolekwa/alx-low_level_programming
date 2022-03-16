#include "main.h"

/**
 *times_table - prints tables
 *
 *Return: 0 Always
 */

void times_table(void)
{
int row;
int column;
int product;
int tens;
int ones;

for (row = 0; row <= 9; row++)
{
for (column = 0; column <= 9; column++)
{

product = row * column;
tens = product / 10;
ones = product % 10;

if (tens == 0)
{
if (column == 0)
{
_putchar('0');
}
 
if (column != 0)
{
_putchar(' ');
_putchar(ones + '0');
}

if (column < 9)
{
_putchar(',');
_putchar(' ');
}
}
else
{
_putchar(tens + '0');
_putchar(ones + '0');
}
if (column < 9)
{
_putchar(',');
_putchar(' ');
}
}
}
_putchar('\n');
}

