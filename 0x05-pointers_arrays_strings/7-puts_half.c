#include "main.h"
/**
 *
 *
 **/

void puts_half(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		for (n = i / 2; n <= i; n++)
		{
			_putchar(str[n];
		}
	else
	{
		for (n = (i / 2) - 1; n <= i; n++)
		{
			_putchar(str[n]);
		}
	}
}	
