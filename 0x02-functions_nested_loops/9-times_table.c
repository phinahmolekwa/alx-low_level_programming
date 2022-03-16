#include "main.h"

/**
 *times_table - prints 9 times tables
 *
 *Return: void
 */

void times_table(void)
{
int row;
int column;
int product;


for (row = 0; row < 10; row++)
{
for (column = 0; column < 10; column++)
{

product = row * column;

 
if (column == 0)
{
_putchar('0' + product);
}

else if (product >= 10)
{
_putchar(' ');
_putchar((product / 10) + '0');
_putchar((product % 10) + '0');
}

else
{
_putchar(' ');
_putchar(' ');
_putchar(product + '0');
}

if (column != 9)
{
_putchar(',');
}
}
_putchar('\n');
}
}
