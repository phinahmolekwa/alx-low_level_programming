#include "main.h"

/**
 *_isalpha - checks for alphabetic charater
 *
 *@c: the int to print
 *Return: 0 Always
 */

int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
