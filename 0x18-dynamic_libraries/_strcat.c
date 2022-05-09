#include "main.h"
/**
 *_strcat - concatenate two strings
 *@dest: string
 *@src: string
 *Return: dest
 **/

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int n;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (n = 0; src[n] != '\0'; n++, i++)
	{
		dest[i] = src[n];
	}
	return (dest);
}
