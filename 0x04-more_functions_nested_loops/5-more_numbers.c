#include "main.h"
/**
 *more_numbers - imprime numeros del 1 al 14 10 veces
 **/
void more_numbers(void)
{
	int x;
	int c;

	for (x = '0'; x <= '9'; x++)
	{
		for (c = 0; c < 15; c++)
		{
			if (c >= 10)
			{
				_putchar((c / 10) + '0');
			}
			_putchar((c % 10) + '0');
		}
		_putchar('\n');
	}
}
