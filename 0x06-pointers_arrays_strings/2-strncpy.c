#include <stdio.h>
#include "main.h"

/**
 *_strncpy - copies a string
 *@dest: A pointer to a charater that will be updated
 *@src: A pointer to a character that will be updated
 *@n: A value
 *
 *Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; src[i] != '\0' && i < n ; i++)
dest[i] = src[i];

while (i < n )
{
dest[i++] = '\0';
}
return (dest);
}
