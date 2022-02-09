#include "main.h"
/**
 *print_most_numbers - print numbers between 0 - 9 except 4 and 2
 **/
void print_most_numbers(void)
{
	char x;
	for (x = '0'; x <= '9'; x++)
	{
		if (x != '2' && x != '4')
		{
			_putchar(x);
		}
	}
	_putchar('\n');
}
