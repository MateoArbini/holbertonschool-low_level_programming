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
	else
	{
		for (c = 0; c <= size; c++)
		{
			for (i = 0; i <= size; i++)
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
}
