#include "main.h"
/**
 *
 **/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}
	else
	{
		*n = (*n & ~(1 << i));
	}
	return (1);
}
