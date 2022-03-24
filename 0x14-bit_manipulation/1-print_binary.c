#include "main.h"
/**
 *rec - function that gives you the binary number
 *@n: given number by the user
 **/
void rec(unsigned int n)
{
	if (n / 2)
	{
		rec(n / 2);
		_putchar(n % 2 + 48);
	}
	else
	{
		_putchar(n % 2 + 48);
	}
}

/**
 *print_binary - function that prints the binary number
 *@c: alias of the list of parameters
 *Return: y, which is the counter of chars
 **/
void print_binary(unsigned long int n)
{
	unsigned long int x;
	int y;

	rec(n);

	for (y = 0; x / 2; y++)
	{
		x /= 2;
	}
}
