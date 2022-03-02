#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 **/
char *str_concat(char *s1, char *s2)
{
	char *s3;
	int largo1 = 0;
	int largo2 = 0;
	int a = 0;
	int b = 0;

	if (s1 == NULL)
	{
		return (NULL);
	}
	if (s2 == NULL)
	{
		return (NULL);
	}
	while (s1[largo1] != '\0')
	{
		largo1++;
	}
	while (s2[largo2] != '\0')
	{
		largo2++;
	}

	s3 = malloc(sizeof(char) * (largo1 + largo2));

	if (s3 == NULL)
	{
		return (NULL);
	}
	
	a = 0, b = 0;
	while (a < largo1)
	{
		*(s3 + a) = *(s1 + a);
		a++;
	}
	while (b < largo2)
	{
		*(s3 + a) = *(s2 + b);
		a++, b++;
	}
	return (s3);
}
