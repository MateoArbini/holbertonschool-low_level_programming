#include "main.h"
/**
 *print_number - imprime un numero entero ya sea neg o pos
 *@n: numero dado
 **/

void print_number(int n)
{
	unsigned int dig;
	unsigned int nat = n;
	unsigned int dc;
	double f = 1;

	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
		{
		nat = n * -1;
		_putchar('-');
		}

		while (f <= nat)
			f *= 10;
		dc = f / 10;

		while (dc >= 1)
		{
			dig = nat / dc;
			_putchar(dig + '0');
			nat = (nat - (dc * dig));
			dc /= 10;
		}
	}
}
