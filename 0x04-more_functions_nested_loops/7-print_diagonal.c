#include "main.h"
/**
 *print_diagonal - imprime un triangulo
 *@n: cantidad de \
 *@a: contador de \
 *@b: contador para sumar los lados
 **/
void print_diagonal(int n)
{
	int a;
	int b;

	for (a = 0; a < n; a++)
	{
		for (b < a; b = 0; b++)
		{
		_putchar(' ');
		_putchar('\\');
		_putchar('\n');
		}
	}
	if (a <= 0)
		_putchar('\n');
}
