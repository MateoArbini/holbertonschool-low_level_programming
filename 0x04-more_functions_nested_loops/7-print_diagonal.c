#include "main.h"
/**
*print_diagonal - imprime un triangulo
*@n: cantidad de \
**/
void print_diagonal(int n)
{
	int a;
	int b;

	if (n <= 0)
		_putchar('\n');

	for (a = 0; a < n; a++)
	{
		for (b < a; b = 0; b++)
		_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
