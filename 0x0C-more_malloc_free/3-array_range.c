#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *array_range - function that creates an array of integers
 *@min: valor minimo
 *@max: valor maximo
 *Return: arr
 **/
int *array_range(int min, int max)
{
	int dif;
	int i;
	int *arr;

	if (min > max)
	{
		return (NULL);
	}

	dif = (max - min + 1)
	arr = malloc(sizeof(int) * dif);

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < dif; i++)
	{
		arr[i] = min++;
	}
	return (arr);
}
