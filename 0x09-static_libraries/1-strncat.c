#include "main.h"
/**
 *_strncat - prints two concatenates strings using n bytes from src
 *@dest: string
 *@src: string
 *@n: n bytes from src
 *Return: dest
 **/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] != src[n]; j++, i++)
	{
		dest[i] = src[j];
	}
	return (dest);
}
