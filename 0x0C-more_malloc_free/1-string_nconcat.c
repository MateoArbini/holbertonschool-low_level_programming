#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *string_nconcat - function that concatenates two strings
 *@s1: string
 *@s2: string
 *@n: elements of s2 to concatenate to s3
 *Return: s3
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int i = 0;
	unsigned int largo1 = 0;
	unsigned int largo2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[largo1] != '\0')
		largo1++;

	s3 = malloc(sizeof(char) * (largo1 + n + 1));

	if (s3 == NULL)
		return (NULL);

	if (n >= strlen(s2))
		n = strlen(s2);

	for (; largo2 < largo1; largo2++)
		s3[largo2] = s1[largo2];

	for (; largo2 <= (largo1 + (n + 1)); largo2++)
	{
		if (i <= n)
		{
			s3[largo2] = s2[i];
			i++;
		}
	}
	s3[largo1 + n] = '\0';

	return (s3);
}
