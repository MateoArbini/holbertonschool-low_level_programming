#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *str_concat - function that concatenates two strings
 *@s1: string
 *@s2: string
 *s3 = s1 y s2
 *Return: s3
 **/
char *str_concat(char *s1, char *s2)
{
	char *s3;
	int largo1 = 0;
	int largo2 = 0;
	int a = 0;
	int b = 0;

	if (s1 == '\0')
	{
		return (0);
	}
	if (s2 == '\0')
	{
		return (0);
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

	if (s3 == '\0')
	{
		return (0);
	}
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
