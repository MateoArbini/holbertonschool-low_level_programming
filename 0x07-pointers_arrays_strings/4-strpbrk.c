#include "main.h"
/**
 *_strpbrk - function that locates the first occurrance in the string 
 *s of any bytes in the string accept
 *@s: string
 *@accept: string to occurrance 
 *@Return: s
 *
 **/
char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (accept[i] == *s)
			{
				return (s);
			}
		}
		s++;
	}
	return (s);
}				
