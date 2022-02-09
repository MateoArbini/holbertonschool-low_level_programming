#include "main.h"
/**
 *print_triangle - imprime triangulo
 *@size: tamaño
 *
 **/

void print_triangle(int size)
{
	int c;
	int i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (c = 1; c <= size; c++)
	{
		for (i = 1; i <= size; i++)
		{
			if (i <= (size - c))
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}

}
