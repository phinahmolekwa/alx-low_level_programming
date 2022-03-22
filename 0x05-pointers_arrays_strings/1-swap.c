#include "main.h"

/**
 *swap_int - swap the values of two integers
 *@a: A pointer to an int that will be updated
 *@b: B pointer to an int that will be updated
 *Return: 0 Always
 */

void swap_int(int *a, int *b)
{
int c;

c = *a;

*a = *b;

*b = c;
}
