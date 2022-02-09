#include "main.h"
/**
 *print_line - imprimir _ n veces
 *@n: cantidad de veces que se repite el contador
 **/
void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		_putchar('_');
	}
	_putchar('\n');
}


