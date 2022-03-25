#include "main.h"
/**
 *get_bit - function that returns the value of a bit at a given index
 *@n: number given
 *@index: index
 *Return: the result or -1 otherwise
 **/
int get_bit(unsigned long int n, unsigned int index)
{
	int resultado = (n >> index) & 1;

	if (index > 64)
	{
		return (-1);
	}
	else
	{
		return (resultado);
	}
}
