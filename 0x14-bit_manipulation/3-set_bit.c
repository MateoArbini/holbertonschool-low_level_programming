#include "main.h"
/**
 *set_bitt - function that sets the value of a bit to 1 at a given index
 *@n: pointer to a given number
 *@index: index
 *Return: 1 if it worked, -1 otherwise
 **/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	n* = (*n | 1 << index);

	return (1);
}
