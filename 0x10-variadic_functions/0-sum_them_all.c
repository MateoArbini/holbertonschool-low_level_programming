#include <stdarg.h>
#include "variadic_functions.h"
/**
 *sum_them_all - function that returns the sum of all its parameters
 *@n: arguments given, in this case, numbers to add
 *Return: if n = 0, return 0, otherwise, return the sum of all parametres
 **/
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;

	va_list args;
	unsigned int i = 0;

	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			sum += va_arg(args, unsigned int);
		}
	}
	va_end(args);

	return (sum);
}
