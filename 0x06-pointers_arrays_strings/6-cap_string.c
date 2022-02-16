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
		if (abc[i] == ' ')
		{
			abc[i] = abc[i - 'a' + 'A'];
		}
		i++;
	}
	return (abc);
}
