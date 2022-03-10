#include <stdarg.h>
#include "variadic_functions.h"
/**
 *print_strings - function that prints strings, followed by a new line
 *@separator: separator between arguments excluding last string
 *@n: argumetns passed, in this case, strings
 **/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;

	unsigned int i = 0;
	char *str;

	va_start(args, n);

	while (i < n)
	{
		str = va_arg(args, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		i++;
		
		if (i < n && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(args);
}
