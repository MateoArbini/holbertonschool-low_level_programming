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

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			printf("%d", va_arg(args, int));

			if (i < n && separator != NULL)
			{
				printf("%s", separator);
			}
		}
		va_end(args);
	}
	printf("\n");
}
