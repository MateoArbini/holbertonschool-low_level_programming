#include "stdlib.h"
#include "time.h"
#include "stdio.h"

/**
 * main - print from 0 - 10 sin usar char
 * Return: always 0
 **/

int main(void)
{
int x;
for (x = 0; x < 10; x++)
putchar(x + '0');

putchar('\n');
return (0);
}
