#include <stdlib.h>
#include <time.h>
#include "stdio.h"

/**
 * main - ejecuta el abecedario menos q y e solo con puthcar
 * Return: always 0
 **/

int main(void)
{
char x;

for (x = 'a'; x <= 'z'; x++)
{
if (x == 'q' || x == 'e')
{
continue;
}
putchar(x);
}
putchar('\n');
return (0);
}
