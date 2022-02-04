#include <stdlib.h>
#include <time.h>
#include "stdio.h"

/**
 * main - prints numbers of base 16, followed new line
 * Return: alwats 0
 **/

int main(void)
{
int x;
char z;
for (x = '0'; x <= '9'; x++)
{
putchar(x);
}
for (z = 'a'; z <= 'f'; z++)
{
putchar(z);
}
putchar('\n');
return (0);
}
