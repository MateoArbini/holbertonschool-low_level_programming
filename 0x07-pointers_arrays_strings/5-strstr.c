#include "main.h"
/**
 *_strstr - function finds the first occurrence of the substring needle
 *in the string haystack. The terminating null bytes (\0) are not compared
 *@haystack: pointer of a string
 *@needle: pointer of a string to occurrance
 *Return: needle or null
 **/
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int e = 0;

	while (haystack[e] != '\0')
	{
		while (needle[i] != '\0')
		{
			if (needle[i] == haystack[e])
			{
				return (haystack + 1);
			}
		}
		e++;
	}
	return ('\0');
}
