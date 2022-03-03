#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	int i = 0;
	int j = 0;
	int largo1 = 0;
	int largo2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (*(s1 + i))
	{
		largo1++, i++;
	}
	while (*(s2 + j))
	{
		largo2++, j++;
	}
	largo2 ++;

	s3 = malloc(sizeof(char) * (largo1 + n + 1));

	if (s3 == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < largo1; i++)
	{
		*(s3 + i) = *(s1 + i);
	}
	for (j = 0; s2[j] != s2[n]; j++, i++)
	{
		*(s3 + i) = *(s2 + j);
	}
	return (s3);
}
