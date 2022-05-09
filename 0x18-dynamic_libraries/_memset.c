#include "main.h"
/**
 *_memset - function that fills memory with a constant byte
 *@s: pointer to n
 *@b: var type char to fill n times
 *@n: large
 *Return: pointer s
 *En esta funcion estamos rellenando con la variable b de tipo char,
 *n cantidad de veces. Luego con int, hacemos el recorrido de n.
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
