#include "main.h"
/**
 *print_numbers - imprime del 0 al 9 con salto de linea
 *@x: random number
 *Return: x
 **/
void print_numbers(void);
{
	int x;

	for (x = 0; x <= 9; x++)
		_putchar(x);
		_putchar('\n');
}
