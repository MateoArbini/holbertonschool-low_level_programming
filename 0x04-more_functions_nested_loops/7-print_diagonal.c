#include "main.h"
/**
 *
 *
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
