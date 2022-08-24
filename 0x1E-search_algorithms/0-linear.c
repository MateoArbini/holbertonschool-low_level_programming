#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 *linear_search - function that searches for a value in an array of ints using
 *Linear Search Algorithm
 *@array: Pointer to the first element of the array to search in
 *@size: size of the array
 *@value: value to be found in the array
 *Return: the index or -1 if not founded in the array
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			return (i);
		}
		else
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	}
	return (-1);
}
