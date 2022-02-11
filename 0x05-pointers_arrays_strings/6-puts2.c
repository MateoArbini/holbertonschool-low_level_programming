#include "main.h"
/**
 *puts2 - imprime de dos en dos comienza en 0
 *@str: string con caracteres
 **/

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
	i++;
	if (str[i] != '\0')
	{
		i++;
	}
	}
	_putchar('\n');
}
