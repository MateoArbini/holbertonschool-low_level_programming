#include "main.h"
/**
 *
 *
 **/
int get_bit(unsigned long int n, unsigned int index)
{
	int resultado = (n >> index) & 1;
	
	if (n)
	{
		return (resultado);
	}
	else
	{
		return (-1);
	}
}
