#include "main.h"
/**
 *puts_half - imprime desde la mitad del string hasta adelante
 *@str: string
 **/

void puts_half(char *str)
{
	int i = 0;
	int n = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		for (n = i / 2; n <= i - 1; n++)
		{
			_putchar(str[n]);
		}
	}
	else
	{
		for (n = (i / 2) - 1; n <= i - 1; n++)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
