#include "main.h"
/**
 *_puts - imprime una string carcater por caracter
 *@*str - string a imprimir
 *@str - string a imprimir
 **/

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
