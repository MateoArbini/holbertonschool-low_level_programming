#include "main.h"
#include "stdio.h"
/**
 *print_diagsums - print the add of diagonal numbers of a matrix square
 *@a: pointer
 *@size: var type int
 **/
void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = 0,
	int diag1 = 0;
	int diag2 = 0;

	for (i = 0; i < size * size; i++)
	{
		diag1 += *(a + i);
		i += size;
	}
	for (j = 0; j < size; j++)
	{
		diag2 += *(a + ((size - 1) - j));
		a += size;
	}
	printf("%i, %i\n", diag1, diag2);
}
