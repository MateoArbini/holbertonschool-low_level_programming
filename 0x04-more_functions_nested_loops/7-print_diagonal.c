#include "main.h"
/**
 *print_diagonal - imprime triangulo
 *@n: cantidad de caracteres para la figura
 **/

void print_diagonal(int n);
{
	int a;
	int b;

	for (a = 0; a < n; a++)
	{
		for (b < a; b > 0; b--)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
