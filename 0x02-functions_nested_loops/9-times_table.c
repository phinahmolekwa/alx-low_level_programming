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


for (row = 0; row <= 9; row++)
{
for (column = 0; column <= 9; column++)
{

product = row * column;

if ((product / 10) == 0)
{
  
if (column != 0)
{
_putchar(' ');
_putchar(product + '0');
 
if (column == 9)
continue;
_putchar(',');
_putchar(' ');
}

else
{
_putchar((product / 10) + '0');
_putchar((product % 10) + '0');

if (column == 9)
continue;
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
