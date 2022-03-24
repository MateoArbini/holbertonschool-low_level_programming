#include "main.h"
#include <math.h>
/**
 *print_binary - function that gives you the binary number of a given n
 *@n: given number by the user
 **/
void print_binary(unsigned long int n)
{
	if (n > 1)

	print_binary(n >> 1);
	_putchar((n & 1) + 48);
}
