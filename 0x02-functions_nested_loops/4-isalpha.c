#include "main.h"

/**
 *_isalpha - checks for alphabetic charater
 *
 *@c: the int to print
 *Return: 0 Always
 */

int isalpha(int c)
{
if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
{
return (1);
}
else
{
return (0);
}
}
