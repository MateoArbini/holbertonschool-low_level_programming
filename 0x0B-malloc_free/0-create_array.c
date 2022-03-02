#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *create_array - function that creates an array of chars, and initializes it
 *with a specific char.
 *@size: size of the array
 *@c: address of the memory to print
 *Return: p
 **/
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	p = malloc(size * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
