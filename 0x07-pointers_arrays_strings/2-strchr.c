#include "main.h"
/**
 *_strchr - returns a pointer to the first occurrence of the character c
 *in the string s, or NULL if the character is not found
 *@s: pointer to the string
 *@c: character for the first occurrence, from that point, it will print
 *all characters, in this case, the example is "hello".
 *Return: s or null if there is no coincidence
 **/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (c != *s)
		{
			s++;
		}
		else
		{
			return (s);
		}
		s++;
	}
	return ('\0');
}

