#include "main.h"
/**
 *cap_string - despues de un separate point letra mayuscula
 *@abc: string
 *Return: abc string
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
				abc[i + 1] = abc[i + 1] - 'a' + 'A';
			}
		}
		i++;
	}
	return (abc);
}
