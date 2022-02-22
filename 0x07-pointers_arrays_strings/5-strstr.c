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
	while (*haystack)
	{
		char *begin = haystack;
		char *pattern = needle;

		while (*haystack && *pattern && *haystack == *pattern)
		{
			haystack++;
			pattern++;
		}
		if (!*pattern)
		{
			return (begin);
		}
		haystack = begin + 1;
	}
	return ('\0');
}
