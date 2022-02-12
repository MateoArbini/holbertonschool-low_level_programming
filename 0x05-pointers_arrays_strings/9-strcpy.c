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
	int n = 0;

	while (src[n] != '\0')
	{
		n++;
	}
	n++;

	while (i <= n)
	{
		dest[i] = src[i];
		i++;
	}
	i++;
	return (dest);
}
