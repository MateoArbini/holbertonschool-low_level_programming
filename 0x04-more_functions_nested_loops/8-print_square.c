#include "main.h"
/**
 *print_square - imprime un cuadrado
 *@size: largo del cuadrado
 **/
void print_square(int size)
{
	int a;
	int b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				if (b == size)
				{
					_putchar('\n');
				}
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
