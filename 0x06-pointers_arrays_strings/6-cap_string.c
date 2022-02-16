#include "main.h"
/**
 *
 *
 **/
char *cap_string(char *abc)
{
	int i = 0;

	while (abc[i] != '\0')
	{
		if (abc[i] == ',' || abc[i] == ';' || abc[i] == '.'
		|| abc[i] == '!' || abc[i] == '?' || abc[i] == '"'
		|| abc[i] == '(' || abc[i] == ')' || abc[i] == '{'
		|| abc[i] == '}' || abc[i] == '\t'
		|| abc[i] == '\n' || abc[i] == ' ')
		{
			if (abc[i + 1] >= 'a' && abc[i + 1] <= 'z')
			{
				abc[i + 1] = abc[i + 1] - 32;
			}
		}
		i++;
	}
	return (abc);
}
