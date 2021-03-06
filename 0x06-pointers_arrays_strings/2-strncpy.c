#include "main.h"

/**
 *_strncpy - copies n bytes of src to the dest string
 *@dest: A pointer to a charater that will be updated
 *@src: A pointer to a character that will be updated
 *@n: A value
 *
 *Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;
i = 0;

while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
