#include "main.h"
/**
 *_strlen_recursion - returns te lenght of a string
 *@s: pointer of a string
 *Return: 0 if null or total lenght of a string
 **/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
