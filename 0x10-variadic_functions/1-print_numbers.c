#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 *print_numbers - function that prints numbers, followed by a new line
 *@separator: separator between arguments excluding last number
 *@n: arguments passed, in this case, numbers
 **/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	va_start(args, n);

	if (separator == NULL)
	{
		return;
	}
	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(args, unsigned int));

			if (i < n - 1)
			{
				printf("%s", separator);
			}
		}
	}
	putchar('\n');
	va_end(args);
}
