#include "main.h"
/**
 *clear_bit - function that sets the value of a bit to 0 at a given index
 *@n: pointer to a given number
 *@index: index
 *Return: -1 if an error ocurred, 1 otherwise
 **/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}
	else
	{
		*n = (*n & ~(1 << index));
	}
	return (1);
}
