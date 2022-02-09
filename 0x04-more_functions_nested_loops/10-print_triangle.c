#include "main.h"
/**
 *print_triangle - imprime triangulo
 *@size: tamaño
 *
 **/

void print_triangle(int size);
{
	int c;
	int i;

	for (c < size)
	{
		for (c = 0; c <= 10; c++)
		{
			if (c < (size - 1))
			{
				if (i != 0)
				{
					_putchar(" ");
				}
				_putchar(" ");
			}
			else
			{
				_putchar("#");
			}
		}
		_putchar(" ");
	}
}
