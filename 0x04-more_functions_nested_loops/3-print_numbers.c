#include "main.h"
/**
 *print_numbers - imprime del 0 al 9 con salto
 *@x: random number
 **/
void print_numbers(void)
{
	char x;

	for (x = '0'; x <= '9'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
