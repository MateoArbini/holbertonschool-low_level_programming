#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_strdup - function that returns a pointer to a newly allocated space in
 *memory, which contains a copy of the string given as a parameter.
 *@str: pointer of a string
 *Return: d, which is the duplicated of the string
 **/
char *_strdup(char *str)
{
	char *d;
	int i = 0;
	int largo = 0;

	if (str == NULL)
	{
		return (0);
	}
	while (str[largo] != '\0')
	{
		largo++;
	}

	d = (char *)malloc(sizeof(char) * largo + 1);

	if (d == NULL)
	{
		return (0);
	}
	for (i = 0; i < largo; i++)
	{
		d[i] = str[i];
	}
	return (d);
}
