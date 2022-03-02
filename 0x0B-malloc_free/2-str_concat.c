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
	int j = 0;
	int i = 0;

	if (s1 == NULL)
		return (0);

	if (s2 == NULL)
		return (0);

	if (s1 == NULL && s2 == NULL)
		return (0);

	while (*(s1 + i))
		largo1++, i++;

	while (*(s2 + j))
		largo2++, j++;

	largo2++;

	s3 = malloc(sizeof(char) * (largo1 + largo2));

	if (s3 == NULL)
		return (NULL);

	for (i = 0; i < largo1; i++)
		*(s3 + i) = *(s1 + i);

	for (j = 0; j < largo2; j++, i++)
		*(s3 + i) = *(s2 + j);

	return (s3);
}
