#include "main.h"
#include <stdio.h>
/**
 * *_strcpy - copies the string pointed to by src including \0 to dest
 *@dest: return value of the point
 *@src: string pointed
 *Return: dest
 **/
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int n;

	while (src[i] != '\0')
	{
		i++;
	}
	for (n = 0; n <= a; n++)
	{
		dest[n] = src[n];
	}
	return (dest);
}
