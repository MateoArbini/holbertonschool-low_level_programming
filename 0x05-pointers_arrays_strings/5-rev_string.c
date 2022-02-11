#include "main.h"
/**
 *rev_string - reverse a string
 *@s: string
 **/

void rev_string(char *s)
{
	int i = 0, b = 0, largo = 0;
	char AUX;

	while (s[i] != '\0')
	{
		i++;
	}
	i -= i;
	iargo = 1;
	for (b = 0; b <= largo / 2 ; b++, i--)
	{
		AUX = s[i];
		s[i] = s[b];
		s[b] = AUX;
	}
}
