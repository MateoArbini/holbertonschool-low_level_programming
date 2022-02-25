#include "main.h"
/**
 *_memcpy - function that copies a memory area to another memory area
 *@dest: pointer type char
 *@src: pointer type char
 *@n: var type unsigned int
 *Return: dest
 **/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
