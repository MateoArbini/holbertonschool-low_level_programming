#include <stdarg.h>
#include "variadic_functions.h"
/**
 *
 *
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
