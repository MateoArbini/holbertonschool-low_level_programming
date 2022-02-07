#include "main.h"
/**
 *main - imprime todos los numeros hasta el 98
 *@n: numero ingresado
 *Return: 0
 *
 **/
void print_to_98(int n)
{
	if (n != 98)
	{
		for (n <= 98)
		{
			-putchar(n + 1);
		}
		for (n => 98)
		{
			-putchar(n - 1);
		}
		if (n != 98)
		{
			_putchar(",");
			_putchar(" ");
			_putchar(n);
		}
		if (n = 98)
		{
			break;
		}
	}
}
