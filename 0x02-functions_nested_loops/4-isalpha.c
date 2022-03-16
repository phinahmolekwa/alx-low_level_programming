#include "main.h"

/**
 *_isalpha - checks for alphabetic charater
 *
 *@c: ascii character
 *Return: 0 Always
 */

int isalpha(int c)
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
