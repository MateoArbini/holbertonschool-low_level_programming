#include "function_pointers.h"
#include <stdio.h>
/**
 *array_iterator - function that executes a function given as a parameter on
 *each element of an array
 *@array: array given
 *@size: size of the array
 *@action: pointer of a function
 **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;
	int j = size;

	if (array != NULL || action != NULL)
	{
		for (i = 0; i < j; i++)
			action(array[i]);
	}
}
