#include "main.h"
/**
 *_strspn - function that gets the lenght of a prefix substring
 *@s: pointer to s
 *@accept: pointer to accept
 *Return: value
 **/
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int value = 0;

	while (*s != ' ')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (accept[i] == *s)
			{
				value++;
			}
		}
		s++;
	}
	return (value);
}
