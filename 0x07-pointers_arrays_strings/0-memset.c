#include "main.h"
/**
 *_memset - function that fills memory with a constant byte
 *@s: pointer to n
 *@b: var type char to fill n times
 *@n: large
 *Return: pointer s
 **/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
