#include <stdlib.h>
#include "main.h"
#include <time.h>
#include <stdio.h>

/**
 *main - main entry
 *Return: 0
 */

int main(void)
{
int num;

srand(time(0));
num = rand();
printf("%i\n", num);
return (0);
}
  
