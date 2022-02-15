#include "main.h"
/**
 *string_toupper - change lowecase letters to upper in a string
 *Return: abc
 *@abc: string
 **/
char *string_toupper(char *abc)
{
	int i = 0;

	while (abc[i] != '\0')
	{
		if (abc[i] >= 'a' && abc[i] <= 'z')
		{
			abc[i] = abc[i] - 'a' + 'A';
		}
		i++;
	}
	return (abc);
}


