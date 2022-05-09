#include "main.h"
/**
 *_strncpy - copy a string manually
 *@dest: string
 *@src: string
 *@n: valor
 *Return: dest
 **/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
