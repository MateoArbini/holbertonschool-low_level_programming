#include <stdlib.h>
#include <time.h>
#include "stdio.h"

/**
 * main - ejecutar abecedario mayuscula y minuscula
 * Return: always 0
 **/

int main(void)
{
char x;

for (x = 'a'; x <= 'z'; x++)
{
putchar(x);
}
for (x = 'A'; x <= 'Z'; x++)
{
putchar(x);
}
	
putchar('\n');
return (0);
}
