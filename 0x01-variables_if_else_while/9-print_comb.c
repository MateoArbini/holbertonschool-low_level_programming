#include <stdlib.h>
#include <time.h>
#include "stdio.h"

/**
 * main - prints all possible combinations from 1 digit number
 * Return: always 0
 **/

int main(void)
{
int x;
for (x = 0; x <= 9; x++)
{
putchar(x + '0');
if (x != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
